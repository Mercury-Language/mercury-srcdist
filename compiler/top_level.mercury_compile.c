/*
** Automatically generated from `mercury_compile.m'
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


/* :- module top_level.mercury_compile. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile__init
ENDINIT
*/

#include "top_level.mercury_compile.mih"


#include "analysis.mih"
#include "backend_libs.mih"
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
#include "hlds.hlds_defns.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.shared_utilities.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "gc.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.check_raw_comp_unit.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.generate_dep_d_files.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.check.mih"
#include "recompilation.usage.mih"
#include "top_level.mercury_compile_erl_back_end.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "top_level.mercury_compile_middle_passes.mih"
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 204 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 207 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0;

#line 210 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 213 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 216 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

#line 219 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 222 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 225 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 228 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 231 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 234 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 237 "top_level.mercury_compile.c"
static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 240 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1];

#line 243 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0;

#line 246 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1];

#line 249 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1;

#line 252 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1];

#line 255 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1];

#line 258 "top_level.mercury_compile.c"
static const MR_DuPtagLayout top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0[2];

#line 261 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2];

#line 264 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2];

#line 267 "top_level.mercury_compile.c"
static const MR_EnumFunctorDesc top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_0;

#line 270 "top_level.mercury_compile.c"
static const MR_EnumFunctorDesc top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_1;

#line 273 "top_level.mercury_compile.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__enum_value_ordered_maybe_write_d_file_0[2];

#line 276 "top_level.mercury_compile.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__enum_name_ordered_maybe_write_d_file_0[2];

#line 279 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_maybe_write_d_file_0[2];

#line 282 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 285 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 287 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 290 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 293 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 295 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 297 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 300 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 303 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 305 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 308 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 311 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 313 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 315 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 318 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____maybe_write_d_file_0_0_10001(
#line 321 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 323 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 326 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____maybe_write_d_file_0_0_10001(
#line 329 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 331 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 333 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 780 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__1_29,
#line 780 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__LambdaHeadVar__3_31);

#line 1109 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1109 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 882 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_11,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 882 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__6_6,
#line 882 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__8_8);

#line 411 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 780 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 780 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 780 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 780 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 767 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 767 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16);

#line 1855 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1855__1_1_p_0(
#line 1855 "mercury_compile.m"
  MR_Char top_level__mercury_compile__LambdaHeadVar__1_24);

#line 1178 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_augment_and_process_module__1178__1_2_p_0(
#line 1178 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_38,
#line 1178 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__1_71);

#line 780 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__780__1_8_p_0(
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__1_29,
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__2_30,
#line 780 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__LambdaHeadVar__3_31);

#line 1599 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____maybe_write_d_file_0_0(
#line 1599 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 1599 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____maybe_write_d_file_0_0(
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_1,
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1238 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 1238 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 1238 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 764 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 764 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 764 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 2300 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void);

#line 2286 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 2286 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 2286 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4);

#line 2247 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2247 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2247 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2247 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2247 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23);

#line 2225 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__after_front_end_passes_12_p_0_1(
#line 2225 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2225 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2225 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2225 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 2102 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__after_front_end_passes_12_p_0(
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_13,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeCodeGen_14,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_15,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_16,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestampMap_17,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_51,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_19,
#line 2102 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_20,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_52,
#line 2102 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53);

#line 2089 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 2078 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 2078 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20);

#line 2089 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 2065 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 2065 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15);

#line 2032 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2032 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2032 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2032 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2032 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22);

#line 2001 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_definitions_5_p_0(
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_6,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_7,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HLDS_8);

#line 1963 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_17_p_0(
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit_19,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_20,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_21,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__TypeEqvMap_22,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_23,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_38,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_27,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidType_28,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidInstOrMode_29,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_30,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_39,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_40);

#line 1875 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14);

#line 1854 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1854 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1854 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1853 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1853 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1853 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1844 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1844 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4);

#line 1819 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1819 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1819 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6);

#line 1766 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1766 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8);

#line 1603 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_16_p_0(
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_18,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__WriteDFile0_19,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_20,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_21,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_22,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestampMap_23,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_24,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_25,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_26,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_72,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_73,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_74,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_75);

#line 1493 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_augmented_module_12_p_0(
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_13,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_14,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_15,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_16,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_17,
#line 1493 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_43,
#line 1493 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_45,
#line 1493 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_46);

#line 1459 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_module_14_p_0(
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_15,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_16,
#line 1459 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_17,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_18,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_19,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_20,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_21,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_22,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_23,
#line 1459 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_37,
#line 1459 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_38);

#line 1438 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1438 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1438 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_6);

#line 1435 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_all_submodules_14_p_0_2(
#line 1435 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1435 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1435 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2);

#line 1429 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_all_submodules_14_p_0_1(
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1429 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1429 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1429 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1417 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_all_submodules_14_p_0(
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_15,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_16,
#line 1417 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_17,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_18,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_19,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_20,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_21,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_22,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnits_23,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_31,
#line 1417 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_25,
#line 1417 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_26);

#line 1263 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_18,
#line 1263 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_19,
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_20,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ParseTreeSrc_22,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47);

#line 1222 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8);

#line 1189 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__read_augment_and_process_module_10_p_0_2(
#line 1189 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1189 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1178 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_augment_and_process_module_10_p_0_1(
#line 1178 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1178 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1136 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_augment_and_process_module_10_p_0(
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_11,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_12,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_14,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_15,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_16,
#line 1136 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_17,
#line 1136 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18);

#line 1124 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1124 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1115 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1115 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1109 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1109 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1101 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1101 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1090 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1090 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1090 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1090 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1090 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10);

#line 1088 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1088 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1088 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1088 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1088 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1088 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1070 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1070 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1070 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4);

#line 1059 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1059 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1059 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1059 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1059 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10);

#line 1057 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1057 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1057 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1057 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1057 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1057 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1047 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1047 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1047 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4);

#line 978 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_6(
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 978 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 953 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_5(
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 953 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 978 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_4(
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 978 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 946 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_3(
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 946 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 978 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_2(
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 978 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 957 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_1(
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 957 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 897 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0(
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_9,
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_10,
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 897 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_13,
#line 897 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_14);

#line 892 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1);

#line 882 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_10_p_0(
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_11,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_15,
#line 882 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__6_6,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__7_16,
#line 882 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__8_8);

#line 865 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_10_p_0_1(
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 851 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_10_p_0(
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_12,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_13,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_14,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_15,
#line 851 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_16,
#line 851 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_17,
#line 851 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18);

#line 823 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_cmd_line_args_12_p_0(
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_2,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_3,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_4,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_5,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_6,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_7,
#line 823 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_8,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_9,
#line 823 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_10);

#line 865 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_args_11_p_0_1(
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 791 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_args_11_p_0(
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_13,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_14,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_15,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_16,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_27,
#line 791 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_28,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_29,
#line 791 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_30);

#line 645 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_query_4_p_0_1(
#line 645 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 645 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 645 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 645 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 569 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_query_4_p_0(
#line 569 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_5,
#line 569 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeQuery_6);

#line 538 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_standalone_interface_4_p_0(
#line 538 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_5,
#line 538 "mercury_compile.m"
  MR_String top_level__mercury_compile__StandaloneIntBasename_6);

#line 713 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_8_p_0_1(
#line 713 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 713 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 713 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 713 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 713 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 512 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_8_p_0(
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpMode_10,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14);

#line 480 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0(
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12);

#line 411 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 402 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 402 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 358 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 358 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 358 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 358 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8);

#line 216 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 216 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4);

#line 186 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 186 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 186 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6);

#line 144 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 144 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 144 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2);


static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[38][2];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_2[2][4];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[2][6];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_4[3][1];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[1][12];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_6[2][9];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[7][3];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_8[1][13];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[2][10];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_11[4][5];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][17];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_13[1][7];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_14[1][11];


#line 1053 "mercury_compile.m"
/* sealed */ struct top_level__mercury_compile__vector_common_type_10_0_s {
#line 1053 "mercury_compile.m"
  const MR_String top_level__mercury_compile__vector_common_type_10_0__vct_10_f_0;
#line 1053 "mercury_compile.m"
};

static /* final */ const struct top_level__mercury_compile__vector_common_type_10_0_s top_level__mercury_compile_vector_common_10[8];



static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[38][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mmc -f *.m"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a module name to file name mapping is created"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work unless"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 58)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 32)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[8])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_scalar_common_1[0])),
    ((MR_Box) (&top_level__mercury_compile_scalar_common_1[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[2][6] = {
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[1][12] = {
  /* row 0 */
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile__do_op_mode_query_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_11[1])),
    ((MR_Box) (top_level__mercury_compile__read_augment_and_process_module_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_11[2])),
    ((MR_Box) (top_level__mercury_compile__augment_and_process_all_submodules_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_11[3])),
    ((MR_Box) (top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_11[3])),
    ((MR_Box) (top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0)),
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
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_11[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_13[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_14[1][11] = {
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


static /* final */ const struct top_level__mercury_compile__vector_common_type_10_0_s top_level__mercury_compile_vector_common_10[8] = {
  /* row 0 */   {     (MR_String) ".c" },
  /* row 1 */   {     (MR_String) ".cs" },
  /* row 2 */   {     (MR_String) ".java" },
  /* row 3 */   {     (MR_String) ".erl" },
  /* row 4 */   {     (MR_String) ".c_date" },
  /* row 5 */   {     (MR_String) ".cs_date" },
  /* row 6 */   {     (MR_String) ".java_date" },
  /* row 7 */   {     (MR_String) ".erl_date" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"
#include "top_level.mercury_compile.mh"



#line 2010 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2018 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2026 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2036 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2044 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2052 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 2066 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2074 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2082 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 2094 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2102 "top_level.mercury_compile.c"
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

#line 2114 "top_level.mercury_compile.c"
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

#line 2126 "top_level.mercury_compile.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_compile_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile____Unify____compile_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile____Compare____compile_0_0_10001)),
  (MR_String) "top_level.mercury_compile",
  (MR_String) "compile",
  {     NULL },
  {     (MR_PseudoTypeInfo) &top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2143 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2148 "top_level.mercury_compile.c"
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

#line 2163 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2168 "top_level.mercury_compile.c"
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

#line 2183 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0
};

#line 2188 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2193 "top_level.mercury_compile.c"
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

#line 2207 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2213 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2219 "top_level.mercury_compile.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_file_or_module_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile____Compare____file_or_module_0_0_10001)),
  (MR_String) "top_level.mercury_compile",
  (MR_String) "file_or_module",
  {     top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0 },
  {     top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0
};

#line 2236 "top_level.mercury_compile.c"
static const MR_EnumFunctorDesc top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_0 = {
  (MR_String) "do_not_write_d_file",
  (MR_Integer) 0
};

#line 2242 "top_level.mercury_compile.c"
static const MR_EnumFunctorDesc top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_1 = {
  (MR_String) "write_d_file",
  (MR_Integer) 1
};

#line 2248 "top_level.mercury_compile.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__enum_value_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_1
};

#line 2254 "top_level.mercury_compile.c"
static const MR_EnumFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__enum_name_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__enum_functor_desc_maybe_write_d_file_0_1
};

#line 2260 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_maybe_write_d_file_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2266 "top_level.mercury_compile.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_maybe_write_d_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile____Unify____maybe_write_d_file_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile____Compare____maybe_write_d_file_0_0_10001)),
  (MR_String) "top_level.mercury_compile",
  (MR_String) "maybe_write_d_file",
  {     top_level__mercury_compile__top_level__mercury_compile__enum_name_ordered_maybe_write_d_file_0 },
  {     top_level__mercury_compile__top_level__mercury_compile__enum_value_ordered_maybe_write_d_file_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  top_level__mercury_compile__top_level__mercury_compile__functor_number_map_maybe_write_d_file_0
};

#line 2283 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 2286 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2288 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2290 "top_level.mercury_compile.c"
{
#line 2292 "top_level.mercury_compile.c"
  {
#line 2294 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2297 "top_level.mercury_compile.c"
    {
#line 2299 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____compile_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2302 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2304 "top_level.mercury_compile.c"
  }
#line 2306 "top_level.mercury_compile.c"
}

#line 2309 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 2312 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2314 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2316 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2318 "top_level.mercury_compile.c"
{
#line 2320 "top_level.mercury_compile.c"
  {
#line 2322 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2325 "top_level.mercury_compile.c"
    {
#line 2327 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____compile_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2330 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2332 "top_level.mercury_compile.c"
  }
#line 2334 "top_level.mercury_compile.c"
}

#line 2337 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 2340 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2342 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2344 "top_level.mercury_compile.c"
{
#line 2346 "top_level.mercury_compile.c"
  {
#line 2348 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2351 "top_level.mercury_compile.c"
    {
#line 2353 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____file_or_module_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2356 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2358 "top_level.mercury_compile.c"
  }
#line 2360 "top_level.mercury_compile.c"
}

#line 2363 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 2366 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2368 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2370 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2372 "top_level.mercury_compile.c"
{
#line 2374 "top_level.mercury_compile.c"
  {
#line 2376 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2379 "top_level.mercury_compile.c"
    {
#line 2381 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____file_or_module_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2384 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2386 "top_level.mercury_compile.c"
  }
#line 2388 "top_level.mercury_compile.c"
}

#line 2391 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____maybe_write_d_file_0_0_10001(
#line 2394 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2396 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2398 "top_level.mercury_compile.c"
{
#line 2400 "top_level.mercury_compile.c"
  {
#line 2402 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2405 "top_level.mercury_compile.c"
    {
#line 2407 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____maybe_write_d_file_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2410 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2412 "top_level.mercury_compile.c"
  }
#line 2414 "top_level.mercury_compile.c"
}

#line 2417 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____maybe_write_d_file_0_0_10001(
#line 2420 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2422 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2424 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2426 "top_level.mercury_compile.c"
{
#line 2428 "top_level.mercury_compile.c"
  {
#line 2430 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2433 "top_level.mercury_compile.c"
    {
#line 2435 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____maybe_write_d_file_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2438 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2440 "top_level.mercury_compile.c"
  }
#line 2442 "top_level.mercury_compile.c"
}

#line 780 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__1_29,
#line 780 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__LambdaHeadVar__3_31)
#line 780 "mercury_compile.m"
{
#line 780 "mercury_compile.m"
  {
#line 780 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 783 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Compile_15, (MR_Integer) 1)));
#line 783 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_LambdaHeadVar__3_31;
#line 783 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_LambdaHeadVar__7_35;

#line 783 "mercury_compile.m"
    {
#line 783 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__Compile_15), ((MR_Box) (top_level__mercury_compile__LambdaHeadVar__1_29)), &top_level__mercury_compile__conv2_LambdaHeadVar__3_31, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_LambdaHeadVar__7_35);
    }
#line 783 "mercury_compile.m"
    *top_level__mercury_compile__LambdaHeadVar__3_31 = ((MR_Word) top_level__mercury_compile__conv2_LambdaHeadVar__3_31);
#line 780 "mercury_compile.m"
  }
#line 780 "mercury_compile.m"
}

#line 1109 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1109 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1109 "mercury_compile.m"
{
#line 1113 "mercury_compile.m"
  {
#line 1113 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1113 "mercury_compile.m"
    {
#line 1113 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__RawCompUnit_12);
    }
#line 1113 "mercury_compile.m"
  }
#line 1109 "mercury_compile.m"
}

#line 882 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_11,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 882 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__6_6,
#line 882 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__8_8)
#line 882 "mercury_compile.m"
{
#line 888 "mercury_compile.m"
  {
#line 888 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 888 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Modules_17;
#line 888 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFiles_18;

#line 887 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__6_6 = (MR_Integer) 1;
#line 889 "mercury_compile.m"
    {
#line 889 "mercury_compile.m"
      top_level__mercury_compile__process_arg_2_8_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__OpModeArgs_11, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__FileOrModule_12, &top_level__mercury_compile__Modules_17, &top_level__mercury_compile__ExtraObjFiles_18);
    }
#line 888 "mercury_compile.m"
    {
#line 888 "mercury_compile.m"
      MR_Tuple base;
#line 888 "mercury_compile.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 888 "mercury_compile.m"
      *top_level__mercury_compile__HeadVar__8_8 = base;
#line 888 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__Modules_17));
#line 888 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_18));
#line 888 "mercury_compile.m"
    }
#line 888 "mercury_compile.m"
  }
#line 882 "mercury_compile.m"
}

#line 411 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 411 "mercury_compile.m"
{
#line 417 "mercury_compile.m"
  {
#line 417 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 417 "mercury_compile.m"
#line 417 "mercury_compile.m"
    switch (top_level__mercury_compile__FileType_13) {
#line 417 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 417 "mercury_compile.m"
      case (MR_Integer) 6:
#line 417 "mercury_compile.m"
      case (MR_Integer) 5:
#line 417 "mercury_compile.m"
      case (MR_Integer) 7:
#line 417 "mercury_compile.m"
      case (MR_Integer) 3:
#line 417 "mercury_compile.m"
      case (MR_Integer) 0:
#line 417 "mercury_compile.m"
      case (MR_Integer) 8:
#line 417 "mercury_compile.m"
      case (MR_Integer) 9:
#line 417 "mercury_compile.m"
      case (MR_Integer) 4:
#line 417 "mercury_compile.m"
      case (MR_Integer) 2:
#line 417 "mercury_compile.m"
      case (MR_Integer) 10:
#line 456 "mercury_compile.m"
        {
#line 457 "mercury_compile.m"
          *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 456 "mercury_compile.m"
          *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 456 "mercury_compile.m"
        }
#line 417 "mercury_compile.m"
        break;
#line 417 "mercury_compile.m"
      case (MR_Integer) 1:
#line 417 "mercury_compile.m"
        {
#line 423 "mercury_compile.m"
          {
#line 423 "mercury_compile.m"
            top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "csharp");
          }
#line 424 "mercury_compile.m"
          if (!(top_level__mercury_compile__succeeded))
#line 424 "mercury_compile.m"
            {
#line 424 "mercury_compile.m"
              {
#line 424 "mercury_compile.m"
                top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "erlang");
              }
#line 424 "mercury_compile.m"
              if (!(top_level__mercury_compile__succeeded))
#line 425 "mercury_compile.m"
                {
#line 425 "mercury_compile.m"
                  {
#line 425 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "java");
                  }
#line 425 "mercury_compile.m"
                }
#line 424 "mercury_compile.m"
            }
#line 418 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 428 "mercury_compile.m"
            {
#line 428 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_30_30;

#line 429 "mercury_compile.m"
              {
#line 429 "mercury_compile.m"
                top_level__mercury_compile__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 429 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 429 "mercury_compile.m"
              }
#line 429 "mercury_compile.m"
              {
#line 429 "mercury_compile.m"
                MR_Word base;
#line 429 "mercury_compile.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 429 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 429 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 429 "mercury_compile.m"
              }
#line 428 "mercury_compile.m"
            }
#line 418 "mercury_compile.m"
          else
#line 434 "mercury_compile.m"
            {
#line 434 "mercury_compile.m"
              MR_String top_level__mercury_compile__InitFile_17;
#line 434 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Result_18;
#line 434 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_31_31;

#line 434 "mercury_compile.m"
              {
#line 434 "mercury_compile.m"
                top_level__mercury_compile__V_31_31 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12);
              }
#line 434 "mercury_compile.m"
              {
#line 434 "mercury_compile.m"
                top_level__mercury_compile__InitFile_17 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__V_31_31, (MR_String) "mer_std.init");
              }
#line 435 "mercury_compile.m"
              {
#line 435 "mercury_compile.m"
                mercury__io__check_file_accessibility_5_p_0(top_level__mercury_compile__InitFile_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[37]), &top_level__mercury_compile__Result_18);
              }
#line 440 "mercury_compile.m"
              if ((top_level__mercury_compile__Result_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "mercury_compile.m"
                {
#line 437 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_40_40;

#line 439 "mercury_compile.m"
                  {
#line 439 "mercury_compile.m"
                    top_level__mercury_compile__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 439 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 439 "mercury_compile.m"
                  }
#line 439 "mercury_compile.m"
                  {
#line 439 "mercury_compile.m"
                    MR_Word base;
#line 439 "mercury_compile.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "mercury_compile.m"
                    *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 439 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 439 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_40_40));
#line 439 "mercury_compile.m"
                  }
#line 437 "mercury_compile.m"
                }
#line 440 "mercury_compile.m"
              else
#line 441 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 434 "mercury_compile.m"
            }
#line 444 "mercury_compile.m"
          *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 417 "mercury_compile.m"
        }
#line 417 "mercury_compile.m"
        break;
#line 417 "mercury_compile.m"
    }
#line 417 "mercury_compile.m"
  }
#line 411 "mercury_compile.m"
}

#line 780 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 780 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 780 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 780 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 780 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 780 "mercury_compile.m"
{
#line 780 "mercury_compile.m"
  {
#line 780 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 780 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_LambdaHeadVar__3_31;

#line 780 "mercury_compile.m"
    {
#line 780 "mercury_compile.m"
      top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__780__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv0_LambdaHeadVar__3_31);
    }
#line 780 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv0_LambdaHeadVar__3_31));
#line 780 "mercury_compile.m"
  }
#line 780 "mercury_compile.m"
}

#line 767 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 767 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 767 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16)
#line 767 "mercury_compile.m"
{
#line 772 "mercury_compile.m"
  {
#line 772 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 772 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_18;

#line 773 "mercury_compile.m"
    {
#line 773 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 615, &top_level__mercury_compile__InvokedByMake_18);
    }
#line 778 "mercury_compile.m"
#line 778 "mercury_compile.m"
    switch (top_level__mercury_compile__InvokedByMake_18) {
#line 778 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 778 "mercury_compile.m"
      case (MR_Integer) 0:
#line 779 "mercury_compile.m"
        {
#line 779 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 779 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Builder_19;
#line 785 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_25_25;

#line 780 "mercury_compile.m"
          {
#line 780 "mercury_compile.m"
            top_level__mercury_compile__Builder_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 780 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_14[0]));
#line 780 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 1) = ((MR_Box) (top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1));
#line 780 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 780 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 3) = ((MR_Box) (top_level__mercury_compile__Compile_15));
#line 780 "mercury_compile.m"
          }
#line 786 "mercury_compile.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2863 "top_level.mercury_compile.c"
          top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 785 "mercury_compile.m"
          {
#line 785 "mercury_compile.m"
            make__util__build_with_module_options_args_12_p_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Builder_19, top_level__mercury_compile__Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__V_25_25);
          }
#line 779 "mercury_compile.m"
        }
#line 778 "mercury_compile.m"
        break;
#line 778 "mercury_compile.m"
      case (MR_Integer) 1:
#line 777 "mercury_compile.m"
        {
#line 777 "mercury_compile.m"
          backend_libs__compile_target_code__link_module_list_6_p_0(top_level__mercury_compile__V_48_48, top_level__mercury_compile__V_49_49, top_level__mercury_compile__Globals_10, top_level__mercury_compile__Succeeded_16);
        }
#line 778 "mercury_compile.m"
        break;
#line 778 "mercury_compile.m"
    }
#line 772 "mercury_compile.m"
  }
#line 767 "mercury_compile.m"
}

#line 1855 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1855__1_1_p_0(
#line 1855 "mercury_compile.m"
  MR_Char top_level__mercury_compile__LambdaHeadVar__1_24)
#line 1855 "mercury_compile.m"
{
#line 1855 "mercury_compile.m"
  {
#line 1855 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1855 "mercury_compile.m"
    {
#line 1855 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(top_level__mercury_compile__LambdaHeadVar__1_24);
    }
#line 1855 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1855 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1855 "mercury_compile.m"
  }
#line 1855 "mercury_compile.m"
}

#line 1178 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_augment_and_process_module__1178__1_2_p_0(
#line 1178 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_38,
#line 1178 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__1_71)
#line 1178 "mercury_compile.m"
{
#line 1178 "mercury_compile.m"
  {
#line 1178 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1178 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RawCompUnitModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__LambdaHeadVar__1_71, (MR_Integer) 0)));
#line 1179 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__LambdaHeadVar__1_71, (MR_Integer) 1)));
#line 1179 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__LambdaHeadVar__1_71, (MR_Integer) 2)));

#line 1181 "mercury_compile.m"
    {
#line 1181 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (top_level__mercury_compile__RawCompUnitModuleName_41)), top_level__mercury_compile__ModulesToRecompile_38);
    }
#line 1178 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1178 "mercury_compile.m"
  }
#line 1178 "mercury_compile.m"
}

#line 780 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__780__1_8_p_0(
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__1_29,
#line 780 "mercury_compile.m"
  MR_Word top_level__mercury_compile__LambdaHeadVar__2_30,
#line 780 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__LambdaHeadVar__3_31)
#line 780 "mercury_compile.m"
{
#line 780 "mercury_compile.m"
  {
#line 780 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 780 "mercury_compile.m"
    {
#line 780 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_48_95_95_49_95_95_91_51_93_95_48_8_p_0(top_level__mercury_compile__Compile_15, top_level__mercury_compile__LambdaHeadVar__1_29, top_level__mercury_compile__LambdaHeadVar__3_31);
    }
#line 780 "mercury_compile.m"
  }
#line 780 "mercury_compile.m"
}

#line 1599 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____maybe_write_d_file_0_0(
#line 1599 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 1599 "mercury_compile.m"
{
#line 1599 "mercury_compile.m"
  {
#line 1599 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1599 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Cast_HeadVar1_4 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;
#line 1599 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Cast_HeadVar2_5 = (MR_Integer) top_level__mercury_compile__HeadVar__3_3;

#line 1599 "mercury_compile.m"
    {
#line 1599 "mercury_compile.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__Cast_HeadVar1_4, top_level__mercury_compile__Cast_HeadVar2_5);
    }
#line 1599 "mercury_compile.m"
  }
#line 1599 "mercury_compile.m"
}

#line 1599 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____maybe_write_d_file_0_0(
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_1,
#line 1599 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1599 "mercury_compile.m"
{
#line 3015 "top_level.mercury_compile.c"
  {
#line 3017 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded = (top_level__mercury_compile__HeadVar__2_1 == top_level__mercury_compile__HeadVar__2_2);

#line 3020 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 3022 "top_level.mercury_compile.c"
  }
#line 1599 "mercury_compile.m"
}

#line 1238 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 1238 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 1238 "mercury_compile.m"
{
#line 1238 "mercury_compile.m"
  {
#line 1238 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1238 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_12 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;
#line 1238 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_13 = (MR_Integer) top_level__mercury_compile__HeadVar__3_3;

#line 1238 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_12 == top_level__mercury_compile__CastY_13);
#line 1238 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 3051 "top_level.mercury_compile.c"
      *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 0;
#line 1238 "mercury_compile.m"
    else
#line 1238 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1238 "mercury_compile.m"
      {
#line 1238 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 1238 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1238 "mercury_compile.m"
          {
#line 1238 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 1238 "mercury_compile.m"
            {
#line 1238 "mercury_compile.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_16_16, top_level__mercury_compile__V_5_5);
            }
#line 1238 "mercury_compile.m"
          }
#line 1238 "mercury_compile.m"
        else
#line 3078 "top_level.mercury_compile.c"
          *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 1;
#line 1238 "mercury_compile.m"
      }
#line 1238 "mercury_compile.m"
    else
#line 1238 "mercury_compile.m"
      {
#line 1238 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 1238 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3091 "top_level.mercury_compile.c"
          *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 2;
#line 1238 "mercury_compile.m"
        else
#line 1238 "mercury_compile.m"
          {
#line 1238 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 1238 "mercury_compile.m"
            {
#line 1238 "mercury_compile.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_17_17, top_level__mercury_compile__V_11_11);
            }
#line 1238 "mercury_compile.m"
          }
#line 1238 "mercury_compile.m"
      }
#line 1238 "mercury_compile.m"
  }
#line 1238 "mercury_compile.m"
}

#line 1238 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1238 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1238 "mercury_compile.m"
{
#line 1238 "mercury_compile.m"
  {
#line 1238 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1238 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_7 = (MR_Integer) top_level__mercury_compile__HeadVar__1_1;
#line 1238 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_8 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;

#line 1238 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_7 == top_level__mercury_compile__CastY_8);
#line 1238 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1238 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 1238 "mercury_compile.m"
    else
#line 1238 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1238 "mercury_compile.m"
      {
#line 1238 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1238 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_4_4;

#line 1238 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1238 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1238 "mercury_compile.m"
          {
#line 1238 "mercury_compile.m"
            top_level__mercury_compile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 3157 "top_level.mercury_compile.c"
            top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_3_3, top_level__mercury_compile__V_4_4) == 0);
#line 1238 "mercury_compile.m"
          }
#line 1238 "mercury_compile.m"
      }
#line 1238 "mercury_compile.m"
    else
#line 1238 "mercury_compile.m"
      {
#line 1238 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1238 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_6_6;

#line 1238 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1238 "mercury_compile.m"
          {
#line 1238 "mercury_compile.m"
            top_level__mercury_compile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 3180 "top_level.mercury_compile.c"
            {
#line 3182 "top_level.mercury_compile.c"
              top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__V_5_5, top_level__mercury_compile__V_6_6);
            }
#line 1238 "mercury_compile.m"
          }
#line 1238 "mercury_compile.m"
      }
#line 1238 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1238 "mercury_compile.m"
  }
#line 1238 "mercury_compile.m"
}

#line 764 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 764 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 764 "mercury_compile.m"
{
#line 764 "mercury_compile.m"
  {
#line 764 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 764 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_4 = top_level__mercury_compile__HeadVar__2_2;
#line 764 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_5 = top_level__mercury_compile__HeadVar__3_3;

#line 764 "mercury_compile.m"
    {
#line 764 "mercury_compile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], top_level__mercury_compile__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile__Cast_HeadVar2_5)));
    }
#line 764 "mercury_compile.m"
  }
#line 764 "mercury_compile.m"
}

#line 764 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 764 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 764 "mercury_compile.m"
{
#line 764 "mercury_compile.m"
  {
#line 764 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 764 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_3 = top_level__mercury_compile__HeadVar__1_1;
#line 764 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_4 = top_level__mercury_compile__HeadVar__2_2;

#line 764 "mercury_compile.m"
    {
#line 764 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) top_level__mercury_compile__Cast_HeadVar1_3, (MR_Word) top_level__mercury_compile__Cast_HeadVar2_4);
    }
#line 764 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 764 "mercury_compile.m"
  }
#line 764 "mercury_compile.m"
}

#line 2300 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void)
#line 2300 "mercury_compile.m"
{
#line 2305 "mercury_compile.m"
  {
#line 2305 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2308 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__gc_init_2_p_0


		{
#line 2308 "mercury_compile.m"

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

#line 3289 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2308 "mercury_compile.m"
}
#line 2305 "mercury_compile.m"
  }
#line 2300 "mercury_compile.m"
}

#line 2286 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 2286 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 2286 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4)
#line 2286 "mercury_compile.m"
{
#line 2288 "mercury_compile.m"
  {
#line 2288 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2288 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 2289 "mercury_compile.m"
    {
#line 2289 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_9_9, top_level__mercury_compile__Errors_4);
    }
#line 2288 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2288 "mercury_compile.m"
      {
#line 2291 "mercury_compile.m"
        {
#line 2291 "mercury_compile.m"
          MR_Word top_level__mercury_compile__HaltSyntax_5;

#line 2291 "mercury_compile.m"
          {
#line 2291 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_3, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_5);
          }
#line 2292 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_5 == (MR_Integer) 1);
#line 2291 "mercury_compile.m"
        }
#line 2293 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 2294 "mercury_compile.m"
          {
#line 2294 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FatalErrors_6;
#line 2294 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_7_7;

#line 2294 "mercury_compile.m"
            {
#line 2294 "mercury_compile.m"
              top_level__mercury_compile__V_7_7 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2294 "mercury_compile.m"
            {
#line 2294 "mercury_compile.m"
              mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_9_9, top_level__mercury_compile__Errors_4, top_level__mercury_compile__V_7_7, &top_level__mercury_compile__FatalErrors_6);
            }
#line 2295 "mercury_compile.m"
            {
#line 2295 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_9_9, top_level__mercury_compile__FatalErrors_6);
            }
#line 2294 "mercury_compile.m"
          }
#line 2288 "mercury_compile.m"
      }
#line 2288 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 2288 "mercury_compile.m"
  }
#line 2286 "mercury_compile.m"
}

#line 2247 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2247 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2247 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2247 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2247 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23)
#line 2247 "mercury_compile.m"
{
#line 2250 "mercury_compile.m"
  {
#line 2250 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2250 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2250 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileCalls_12;
#line 2250 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileTime_13;

#line 2251 "mercury_compile.m"
    {
#line 2251 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__Globals_11);
    }
#line 2252 "mercury_compile.m"
    {
#line 2252 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 190, &top_level__mercury_compile__ProfileCalls_12);
    }
#line 2253 "mercury_compile.m"
    {
#line 2253 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 191, &top_level__mercury_compile__ProfileTime_13);
    }
#line 2255 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileCalls_12 == (MR_Integer) 1);
#line 2256 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2256 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileTime_13 == (MR_Integer) 1);
#line 2254 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2260 "mercury_compile.m"
      {
#line 2260 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_14;
#line 2260 "mercury_compile.m"
        MR_String top_level__mercury_compile__ProfFileName_15;
#line 2260 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_16;

#line 2259 "mercury_compile.m"
        {
#line 2259 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Outputting profiling call graph...");
        }
#line 2261 "mercury_compile.m"
        {
#line 2261 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_7);
        }
#line 2262 "mercury_compile.m"
        {
#line 2262 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__ModuleName_14);
        }
#line 2263 "mercury_compile.m"
        {
#line 2263 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_14, (MR_String) ".prof", (MR_Integer) 0, &top_level__mercury_compile__ProfFileName_15);
        }
#line 2265 "mercury_compile.m"
        {
#line 2265 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__ProfFileName_15, &top_level__mercury_compile__Res_16);
        }
#line 2272 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_16)) == (MR_mktag((MR_Integer) 1))))
#line 2273 "mercury_compile.m"
          {
#line 2273 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2273 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_21;
#line 2273 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_36_36;

#line 2275 "mercury_compile.m"
            {
#line 2275 "mercury_compile.m"
              top_level__mercury_compile__V_36_36 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_20);
            }
#line 2274 "mercury_compile.m"
            {
#line 2274 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", top_level__mercury_compile__V_36_36);
            }
#line 2276 "mercury_compile.m"
            {
#line 2276 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_21);
            }
#line 2273 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2273 "mercury_compile.m"
          }
#line 2272 "mercury_compile.m"
        else
#line 2267 "mercury_compile.m"
          {
#line 2267 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2267 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_18;
#line 2270 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_19_19;

#line 2268 "mercury_compile.m"
            {
#line 2268 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_17, &top_level__mercury_compile__OutputStream_18);
            }
#line 2269 "mercury_compile.m"
            {
#line 2269 "mercury_compile.m"
              transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_23);
            }
#line 2270 "mercury_compile.m"
            {
#line 2270 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_18, &top_level__mercury_compile__V_19_19);
            }
#line 2271 "mercury_compile.m"
            {
#line 2271 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_17);
            }
#line 2267 "mercury_compile.m"
          }
#line 2278 "mercury_compile.m"
        {
#line 2278 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
        }
#line 2279 "mercury_compile.m"
        {
#line 2279 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
        }
#line 2260 "mercury_compile.m"
      }
#line 2254 "mercury_compile.m"
    else
#line 2281 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2250 "mercury_compile.m"
  }
#line 2247 "mercury_compile.m"
}

#line 2225 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__after_front_end_passes_12_p_0_1(
#line 2225 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2225 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2225 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2225 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 2225 "mercury_compile.m"
{
#line 2225 "mercury_compile.m"
  {
#line 2225 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 2225 "mercury_compile.m"
    {
#line 2225 "mercury_compile.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 2225 "mercury_compile.m"
  }
#line 2225 "mercury_compile.m"
}

#line 2102 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__after_front_end_passes_12_p_0(
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_13,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeCodeGen_14,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_15,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_16,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestampMap_17,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_51,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_19,
#line 2102 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_20,
#line 2102 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_52,
#line 2102 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53)
#line 2102 "mercury_compile.m"
{
#line 2111 "mercury_compile.m"
  {
#line 2111 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_23;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_24;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HighLevelCode_25;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Target_26;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 2111 "mercury_compile.m"
    MR_String top_level__mercury_compile__UsageFileName_28;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FrontEndErrors_30;
#line 2111 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__NumErrors_31;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_58_58;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60;
#line 2111 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61;
#line 2127 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_29_29;

#line 2112 "mercury_compile.m"
    {
#line 2112 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_13, (MR_Integer) 46, &top_level__mercury_compile__Verbose_23);
    }
#line 2113 "mercury_compile.m"
    {
#line 2113 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_13, (MR_Integer) 56, &top_level__mercury_compile__Stats_24);
    }
#line 2114 "mercury_compile.m"
    {
#line 2114 "mercury_compile.m"
      top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(top_level__mercury_compile__Verbose_23, top_level__mercury_compile__Stats_24, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_51, &top_level__mercury_compile__STATE_VARIABLE_HLDS_58_58);
    }
#line 2115 "mercury_compile.m"
    {
#line 2115 "mercury_compile.m"
      top_level__mercury_compile_middle_passes__middle_pass_6_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_58_58, &top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_52, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 2116 "mercury_compile.m"
    {
#line 2116 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_13, (MR_Integer) 252, &top_level__mercury_compile__HighLevelCode_25);
    }
#line 2117 "mercury_compile.m"
    {
#line 2117 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_13, &top_level__mercury_compile__Target_26);
    }
#line 2124 "mercury_compile.m"
    {
#line 2124 "mercury_compile.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__ModuleName_27);
    }
#line 2125 "mercury_compile.m"
    {
#line 2125 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__ModuleName_27, (MR_String) ".used", (MR_Integer) 1, &top_level__mercury_compile__UsageFileName_28);
    }
#line 2127 "mercury_compile.m"
    {
#line 2127 "mercury_compile.m"
      mercury__io__remove_file_4_p_0(top_level__mercury_compile__UsageFileName_28, &top_level__mercury_compile__V_29_29);
    }
#line 2129 "mercury_compile.m"
    {
#line 2129 "mercury_compile.m"
      top_level__mercury_compile__FrontEndErrors_30 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__Specs_19);
    }
#line 2130 "mercury_compile.m"
    {
#line 2130 "mercury_compile.m"
      hlds__hlds_module__module_info_get_num_errors_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__NumErrors_31);
    }
#line 2132 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__FrontEndErrors_30 == (MR_Integer) 0);
#line 2132 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2133 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__NumErrors_31 == (MR_Integer) 0);
#line 2131 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2219 "mercury_compile.m"
      {
#line 2219 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Succeeded_34;
#line 2219 "mercury_compile.m"
        MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72;

#line 2141 "mercury_compile.m"
#line 2141 "mercury_compile.m"
        switch (top_level__mercury_compile__Target_26) {
#line 2141 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2141 "mercury_compile.m"
          case (MR_Integer) 0:
#line 2167 "mercury_compile.m"
            {
#line 2167 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ExportDecls_39;

#line 2171 "mercury_compile.m"
              {
#line 2171 "mercury_compile.m"
                backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__ExportDecls_39);
              }
#line 2172 "mercury_compile.m"
              {
#line 2172 "mercury_compile.m"
                backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, top_level__mercury_compile__ExportDecls_39, top_level__mercury_compile__ModuleName_27);
              }
#line 2203 "mercury_compile.m"
#line 2203 "mercury_compile.m"
              switch (top_level__mercury_compile__HighLevelCode_25) {
#line 2203 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2203 "mercury_compile.m"
                case (MR_Integer) 0:
#line 2204 "mercury_compile.m"
                  {
#line 2204 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__GlobalData_46;
#line 2204 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__LLDS_47;

#line 2205 "mercury_compile.m"
                    {
#line 2205 "mercury_compile.m"
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile__GlobalData_46, &top_level__mercury_compile__LLDS_47, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53);
                    }
#line 2210 "mercury_compile.m"
                    {
#line 2210 "mercury_compile.m"
                      top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile__GlobalData_46, top_level__mercury_compile__LLDS_47, top_level__mercury_compile__ModuleName_27, &top_level__mercury_compile__Succeeded_34, top_level__mercury_compile__ExtraObjFiles_20);
                    }
#line 2204 "mercury_compile.m"
                  }
#line 2203 "mercury_compile.m"
                  break;
#line 2203 "mercury_compile.m"
                case (MR_Integer) 1:
#line 2174 "mercury_compile.m"
                  {
#line 2174 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MLDS_113;
#line 2174 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TargetCodeSucceeded_114;
#line 2175 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_40_40;

#line 2175 "mercury_compile.m"
                    {
#line 2175 "mercury_compile.m"
                      top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__V_40_40, &top_level__mercury_compile__MLDS_113, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53);
                    }
#line 2176 "mercury_compile.m"
                    {
#line 2176 "mercury_compile.m"
                      top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__MLDS_113, &top_level__mercury_compile__TargetCodeSucceeded_114);
                    }
#line 2180 "mercury_compile.m"
#line 2180 "mercury_compile.m"
                    switch (top_level__mercury_compile__OpModeCodeGen_14) {
#line 2180 "mercury_compile.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 2180 "mercury_compile.m"
                      case (MR_Integer) 1:
#line 2180 "mercury_compile.m"
                      case (MR_Integer) 2:
#line 2187 "mercury_compile.m"
#line 2187 "mercury_compile.m"
                        switch (top_level__mercury_compile__TargetCodeSucceeded_114) {
#line 2187 "mercury_compile.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 2187 "mercury_compile.m"
                          case (MR_Integer) 0:
#line 2186 "mercury_compile.m"
                            top_level__mercury_compile__Succeeded_34 = (MR_Integer) 0;
#line 2187 "mercury_compile.m"
                            break;
#line 2187 "mercury_compile.m"
                          case (MR_Integer) 1:
#line 2188 "mercury_compile.m"
                            {
#line 2188 "mercury_compile.m"
                              MR_String top_level__mercury_compile__C_File_41;
#line 2188 "mercury_compile.m"
                              MR_Word top_level__mercury_compile__TargetType_42;
#line 2188 "mercury_compile.m"
                              MR_Word top_level__mercury_compile__PIC_43;
#line 2188 "mercury_compile.m"
                              MR_String top_level__mercury_compile__Obj_44;
#line 2188 "mercury_compile.m"
                              MR_String top_level__mercury_compile__O_File_45;
#line 2188 "mercury_compile.m"
                              MR_Word top_level__mercury_compile__OutputStream_109;

#line 2189 "mercury_compile.m"
                              {
#line 2189 "mercury_compile.m"
                                parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__ModuleName_27, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile__C_File_41);
                              }
#line 2191 "mercury_compile.m"
                              {
#line 2191 "mercury_compile.m"
                                backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile__Globals_13, &top_level__mercury_compile__TargetType_42);
                              }
#line 2192 "mercury_compile.m"
                              {
#line 2192 "mercury_compile.m"
                                backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__TargetType_42, &top_level__mercury_compile__PIC_43);
                              }
#line 2193 "mercury_compile.m"
                              {
#line 2193 "mercury_compile.m"
                                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__PIC_43, &top_level__mercury_compile__Obj_44);
                              }
#line 2194 "mercury_compile.m"
                              {
#line 2194 "mercury_compile.m"
                                parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__Obj_44, (MR_Integer) 0, &top_level__mercury_compile__O_File_45);
                              }
#line 2196 "mercury_compile.m"
                              {
#line 2196 "mercury_compile.m"
                                mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_109);
                              }
#line 2197 "mercury_compile.m"
                              {
#line 2197 "mercury_compile.m"
                                backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__OutputStream_109, top_level__mercury_compile__PIC_43, top_level__mercury_compile__C_File_41, top_level__mercury_compile__O_File_45, &top_level__mercury_compile__Succeeded_34);
                              }
#line 2199 "mercury_compile.m"
                              {
#line 2199 "mercury_compile.m"
                                parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_34);
                              }
#line 2188 "mercury_compile.m"
                            }
#line 2187 "mercury_compile.m"
                            break;
#line 2187 "mercury_compile.m"
                        }
#line 2180 "mercury_compile.m"
                        break;
#line 2180 "mercury_compile.m"
                      case (MR_Integer) 0:
#line 2179 "mercury_compile.m"
                        top_level__mercury_compile__Succeeded_34 = top_level__mercury_compile__TargetCodeSucceeded_114;
#line 2180 "mercury_compile.m"
                        break;
#line 2180 "mercury_compile.m"
                    }
#line 2202 "mercury_compile.m"
                    *top_level__mercury_compile__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2174 "mercury_compile.m"
                    top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60;
#line 2174 "mercury_compile.m"
                  }
#line 2203 "mercury_compile.m"
                  break;
#line 2203 "mercury_compile.m"
              }
#line 2167 "mercury_compile.m"
            }
#line 2141 "mercury_compile.m"
            break;
#line 2141 "mercury_compile.m"
          case (MR_Integer) 1:
#line 2136 "mercury_compile.m"
            {
#line 2136 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MLDS_33;
#line 2137 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_32_32;

#line 2137 "mercury_compile.m"
              {
#line 2137 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__V_32_32, &top_level__mercury_compile__MLDS_33, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53);
              }
#line 2139 "mercury_compile.m"
              {
#line 2139 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, top_level__mercury_compile__MLDS_33, &top_level__mercury_compile__Succeeded_34);
              }
#line 2140 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2136 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60;
#line 2136 "mercury_compile.m"
            }
#line 2141 "mercury_compile.m"
            break;
#line 2141 "mercury_compile.m"
          case (MR_Integer) 3:
#line 2214 "mercury_compile.m"
            {
#line 2214 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ELDS_48;

#line 2215 "mercury_compile.m"
              {
#line 2215 "mercury_compile.m"
                top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__ELDS_48, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53);
              }
#line 2217 "mercury_compile.m"
              {
#line 2217 "mercury_compile.m"
                top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, top_level__mercury_compile__ELDS_48, &top_level__mercury_compile__Succeeded_34);
              }
#line 2218 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2214 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60;
#line 2214 "mercury_compile.m"
            }
#line 2141 "mercury_compile.m"
            break;
#line 2141 "mercury_compile.m"
          case (MR_Integer) 2:
#line 2142 "mercury_compile.m"
            {
#line 2142 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TargetCodeSucceeded_36;
#line 2142 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MLDS_108;
#line 2143 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_35_35;

#line 2143 "mercury_compile.m"
              {
#line 2143 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, &top_level__mercury_compile__V_35_35, &top_level__mercury_compile__MLDS_108, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53);
              }
#line 2144 "mercury_compile.m"
              {
#line 2144 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60, top_level__mercury_compile__MLDS_108, &top_level__mercury_compile__TargetCodeSucceeded_36);
              }
#line 2148 "mercury_compile.m"
#line 2148 "mercury_compile.m"
              switch (top_level__mercury_compile__OpModeCodeGen_14) {
#line 2148 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2148 "mercury_compile.m"
                case (MR_Integer) 1:
#line 2148 "mercury_compile.m"
                case (MR_Integer) 2:
#line 2155 "mercury_compile.m"
#line 2155 "mercury_compile.m"
                  switch (top_level__mercury_compile__TargetCodeSucceeded_36) {
#line 2155 "mercury_compile.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 2155 "mercury_compile.m"
                    case (MR_Integer) 0:
#line 2154 "mercury_compile.m"
                      top_level__mercury_compile__Succeeded_34 = (MR_Integer) 0;
#line 2155 "mercury_compile.m"
                      break;
#line 2155 "mercury_compile.m"
                    case (MR_Integer) 1:
#line 2156 "mercury_compile.m"
                      {
#line 2156 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__OutputStream_37;
#line 2156 "mercury_compile.m"
                        MR_String top_level__mercury_compile__JavaFile_38;
#line 2156 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_94_94;

#line 2157 "mercury_compile.m"
                        {
#line 2157 "mercury_compile.m"
                          mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_37);
                        }
#line 2158 "mercury_compile.m"
                        {
#line 2158 "mercury_compile.m"
                          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__ModuleName_27, (MR_String) ".java", (MR_Integer) 1, &top_level__mercury_compile__JavaFile_38);
                        }
#line 2160 "mercury_compile.m"
                        {
#line 2160 "mercury_compile.m"
                          top_level__mercury_compile__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "mercury_compile.m"
                          MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_94_94, 0) = ((MR_Box) (top_level__mercury_compile__JavaFile_38));
#line 2160 "mercury_compile.m"
                          MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2160 "mercury_compile.m"
                        }
#line 2160 "mercury_compile.m"
                        {
#line 2160 "mercury_compile.m"
                          backend_libs__compile_target_code__compile_java_files_6_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__OutputStream_37, top_level__mercury_compile__V_94_94, &top_level__mercury_compile__Succeeded_34);
                        }
#line 2162 "mercury_compile.m"
                        {
#line 2162 "mercury_compile.m"
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_34);
                        }
#line 2156 "mercury_compile.m"
                      }
#line 2155 "mercury_compile.m"
                      break;
#line 2155 "mercury_compile.m"
                  }
#line 2148 "mercury_compile.m"
                  break;
#line 2148 "mercury_compile.m"
                case (MR_Integer) 0:
#line 2147 "mercury_compile.m"
                  top_level__mercury_compile__Succeeded_34 = top_level__mercury_compile__TargetCodeSucceeded_36;
#line 2148 "mercury_compile.m"
                  break;
#line 2148 "mercury_compile.m"
              }
#line 2165 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2142 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile__STATE_VARIABLE_HLDS_60_60;
#line 2142 "mercury_compile.m"
            }
#line 2141 "mercury_compile.m"
            break;
#line 2141 "mercury_compile.m"
        }
#line 2226 "mercury_compile.m"
#line 2226 "mercury_compile.m"
        switch (top_level__mercury_compile__Succeeded_34) {
#line 2226 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2226 "mercury_compile.m"
          case (MR_Integer) 0:
#line 2227 "mercury_compile.m"
            {
#line 2227 "mercury_compile.m"
            }
#line 2226 "mercury_compile.m"
            break;
#line 2226 "mercury_compile.m"
          case (MR_Integer) 1:
#line 2221 "mercury_compile.m"
            {
#line 2221 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TimestampFiles_49;
#line 2221 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_103_103;
#line 2224 "mercury_compile.m"
              void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 2224 "mercury_compile.m"
              MR_Box top_level__mercury_compile__conv2_TimestampFiles_49;
#line 2224 "mercury_compile.m"
              MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_102_102;
#line 2225 "mercury_compile.m"
              MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_IO_55;

#line 2222 "mercury_compile.m"
              {
#line 2222 "mercury_compile.m"
                recompilation__usage__write_usage_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_72_72, top_level__mercury_compile__NestedSubModules_15, top_level__mercury_compile__MaybeTimestampMap_17);
              }
#line 2224 "mercury_compile.m"
              top_level__mercury_compile__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FindTimestampFiles_16, (MR_Integer) 1)));
#line 2224 "mercury_compile.m"
              {
#line 2224 "mercury_compile.m"
                top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__FindTimestampFiles_16), ((MR_Box) (top_level__mercury_compile__ModuleName_27)), &top_level__mercury_compile__conv2_TimestampFiles_49, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_102_102);
              }
#line 2224 "mercury_compile.m"
              top_level__mercury_compile__TimestampFiles_49 = ((MR_Word) top_level__mercury_compile__conv2_TimestampFiles_49);
#line 2225 "mercury_compile.m"
              {
#line 2225 "mercury_compile.m"
                top_level__mercury_compile__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2225 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_103_103, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_13[0]));
#line 2225 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_103_103, 1) = ((MR_Box) (top_level__mercury_compile__after_front_end_passes_12_p_0_1));
#line 2225 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2225 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_103_103, 3) = ((MR_Box) (top_level__mercury_compile__Globals_13));
#line 2225 "mercury_compile.m"
              }
#line 2225 "mercury_compile.m"
              {
#line 2225 "mercury_compile.m"
                mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_103_103, top_level__mercury_compile__TimestampFiles_49, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv3_STATE_VARIABLE_IO_55);
              }
#line 2221 "mercury_compile.m"
            }
#line 2226 "mercury_compile.m"
            break;
#line 2226 "mercury_compile.m"
        }
#line 2219 "mercury_compile.m"
      }
#line 2131 "mercury_compile.m"
    else
#line 2233 "mercury_compile.m"
      {
#line 2233 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_50;

#line 2233 "mercury_compile.m"
        {
#line 2233 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_50);
        }
#line 2234 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_50 == (MR_Integer) 0);
#line 2234 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2235 "mercury_compile.m"
          {
#line 2235 "mercury_compile.m"
            {
#line 2235 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 2235 "mercury_compile.m"
          }
#line 2234 "mercury_compile.m"
        else
#line 2234 "mercury_compile.m"
          {
#line 2234 "mercury_compile.m"
          }
#line 2239 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2233 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_61_61;
#line 2233 "mercury_compile.m"
      }
#line 2111 "mercury_compile.m"
  }
#line 2102 "mercury_compile.m"
}

#line 2089 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 2089 "mercury_compile.m"
{
#line 2089 "mercury_compile.m"
  {
#line 2089 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 2089 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2089 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 2089 "mercury_compile.m"
    {
#line 2089 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 2089 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 2089 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 2089 "mercury_compile.m"
  }
#line 2089 "mercury_compile.m"
}

#line 2078 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 2078 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 2078 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20)
#line 2078 "mercury_compile.m"
{
#line 2081 "mercury_compile.m"
  {
#line 2081 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2081 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_33_33;
#line 2081 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleNames_13;
#line 2081 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModulesList_14;
#line 2081 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SymNames_15;
#line 2081 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModuleNames_16;
#line 2081 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo0_17;
#line 2081 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo_18;

#line 2082 "mercury_compile.m"
    {
#line 2082 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    }
#line 2085 "mercury_compile.m"
    {
#line 2085 "mercury_compile.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__ModuleNames_13);
    }
#line 2087 "mercury_compile.m"
    {
#line 2087 "mercury_compile.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 654, &top_level__mercury_compile__LocalModulesList_14);
    }
#line 4223 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2089 "mercury_compile.m"
    {
#line 2089 "mercury_compile.m"
      top_level__mercury_compile__SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_scalar_common_7[6], top_level__mercury_compile__LocalModulesList_14);
    }
#line 2090 "mercury_compile.m"
    {
#line 2090 "mercury_compile.m"
      top_level__mercury_compile__LocalModuleNames_16 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_33, top_level__mercury_compile__SymNames_15);
    }
#line 2092 "mercury_compile.m"
    {
#line 2092 "mercury_compile.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__AnalysisInfo0_17);
    }
#line 2093 "mercury_compile.m"
    {
#line 2093 "mercury_compile.m"
      analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_13, top_level__mercury_compile__LocalModuleNames_16, top_level__mercury_compile__AnalysisInfo0_17, &top_level__mercury_compile__AnalysisInfo_18);
    }
#line 2095 "mercury_compile.m"
    {
#line 2095 "mercury_compile.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_18, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile__STATE_VARIABLE_HLDS_20);
    }
#line 2097 "mercury_compile.m"
    {
#line 2097 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
    }
#line 2098 "mercury_compile.m"
    {
#line 2098 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
    }
#line 2081 "mercury_compile.m"
  }
#line 2078 "mercury_compile.m"
}

#line 2089 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2089 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 2089 "mercury_compile.m"
{
#line 2089 "mercury_compile.m"
  {
#line 2089 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 2089 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2089 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 2089 "mercury_compile.m"
    {
#line 2089 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 2089 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 2089 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 2089 "mercury_compile.m"
  }
#line 2089 "mercury_compile.m"
}

#line 2065 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 2065 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 2065 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15)
#line 2065 "mercury_compile.m"
{
#line 2068 "mercury_compile.m"
  {
#line 2068 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2068 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_13;

#line 2069 "mercury_compile.m"
    {
#line 2069 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 326, &top_level__mercury_compile__IntermodAnalysis_13);
    }
#line 2074 "mercury_compile.m"
#line 2074 "mercury_compile.m"
    switch (top_level__mercury_compile__IntermodAnalysis_13) {
#line 2074 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2074 "mercury_compile.m"
      case (MR_Integer) 0:
#line 2075 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14;
#line 2074 "mercury_compile.m"
        break;
#line 2074 "mercury_compile.m"
      case (MR_Integer) 1:
#line 2081 "mercury_compile.m"
        {
#line 2081 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TypeCtorInfo_33_46;
#line 2081 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleNames_30;
#line 2081 "mercury_compile.m"
          MR_Word top_level__mercury_compile__LocalModulesList_31;
#line 2081 "mercury_compile.m"
          MR_Word top_level__mercury_compile__SymNames_32;
#line 2081 "mercury_compile.m"
          MR_Word top_level__mercury_compile__LocalModuleNames_33;
#line 2081 "mercury_compile.m"
          MR_Word top_level__mercury_compile__AnalysisInfo0_34;
#line 2081 "mercury_compile.m"
          MR_Word top_level__mercury_compile__AnalysisInfo_35;

#line 2082 "mercury_compile.m"
          {
#line 2082 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
          }
#line 2085 "mercury_compile.m"
          {
#line 2085 "mercury_compile.m"
            hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__ModuleNames_30);
          }
#line 2087 "mercury_compile.m"
          {
#line 2087 "mercury_compile.m"
            libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 654, &top_level__mercury_compile__LocalModulesList_31);
          }
#line 4369 "top_level.mercury_compile.c"
          top_level__mercury_compile__TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2089 "mercury_compile.m"
          {
#line 2089 "mercury_compile.m"
            top_level__mercury_compile__SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_scalar_common_7[5], top_level__mercury_compile__LocalModulesList_31);
          }
#line 2090 "mercury_compile.m"
          {
#line 2090 "mercury_compile.m"
            top_level__mercury_compile__LocalModuleNames_33 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_46, top_level__mercury_compile__SymNames_32);
          }
#line 2092 "mercury_compile.m"
          {
#line 2092 "mercury_compile.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__AnalysisInfo0_34);
          }
#line 2093 "mercury_compile.m"
          {
#line 2093 "mercury_compile.m"
            analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_30, top_level__mercury_compile__LocalModuleNames_33, top_level__mercury_compile__AnalysisInfo0_34, &top_level__mercury_compile__AnalysisInfo_35);
          }
#line 2095 "mercury_compile.m"
          {
#line 2095 "mercury_compile.m"
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_35, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile__STATE_VARIABLE_HLDS_15);
          }
#line 2097 "mercury_compile.m"
          {
#line 2097 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
          }
#line 2098 "mercury_compile.m"
          {
#line 2098 "mercury_compile.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
          }
#line 2081 "mercury_compile.m"
        }
#line 2074 "mercury_compile.m"
        break;
#line 2074 "mercury_compile.m"
    }
#line 2068 "mercury_compile.m"
  }
#line 2065 "mercury_compile.m"
}

#line 2032 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2032 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2032 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2032 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2032 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22)
#line 2032 "mercury_compile.m"
{
#line 2035 "mercury_compile.m"
  {
#line 2035 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2035 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2035 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ShowDepGraph_12;

#line 2036 "mercury_compile.m"
    {
#line 2036 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__Globals_11);
    }
#line 2037 "mercury_compile.m"
    {
#line 2037 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 144, &top_level__mercury_compile__ShowDepGraph_12);
    }
#line 2059 "mercury_compile.m"
#line 2059 "mercury_compile.m"
    switch (top_level__mercury_compile__ShowDepGraph_12) {
#line 2059 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2059 "mercury_compile.m"
      case (MR_Integer) 0:
#line 2060 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2059 "mercury_compile.m"
        break;
#line 2059 "mercury_compile.m"
      case (MR_Integer) 1:
#line 2039 "mercury_compile.m"
        {
#line 2039 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_13;
#line 2039 "mercury_compile.m"
          MR_String top_level__mercury_compile__FileName_14;
#line 2039 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res_15;

#line 2040 "mercury_compile.m"
          {
#line 2040 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Writing dependency graph...");
          }
#line 2041 "mercury_compile.m"
          {
#line 2041 "mercury_compile.m"
            hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__ModuleName_13);
          }
#line 2042 "mercury_compile.m"
          {
#line 2042 "mercury_compile.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_13, (MR_String) ".dependency_graph", (MR_Integer) 0, &top_level__mercury_compile__FileName_14);
          }
#line 2044 "mercury_compile.m"
          {
#line 2044 "mercury_compile.m"
            mercury__io__open_output_4_p_0(top_level__mercury_compile__FileName_14, &top_level__mercury_compile__Res_15);
          }
#line 2052 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 2053 "mercury_compile.m"
            {
#line 2053 "mercury_compile.m"
              MR_Word top_level__mercury_compile__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2053 "mercury_compile.m"
              MR_String top_level__mercury_compile__ErrorMsg_20;
#line 2053 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_33_33;

#line 2055 "mercury_compile.m"
              {
#line 2055 "mercury_compile.m"
                top_level__mercury_compile__V_33_33 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_19);
              }
#line 2054 "mercury_compile.m"
              {
#line 2054 "mercury_compile.m"
                top_level__mercury_compile__ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", top_level__mercury_compile__V_33_33);
              }
#line 2056 "mercury_compile.m"
              {
#line 2056 "mercury_compile.m"
                libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_20);
              }
#line 2053 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2053 "mercury_compile.m"
            }
#line 2052 "mercury_compile.m"
          else
#line 2046 "mercury_compile.m"
            {
#line 2046 "mercury_compile.m"
              MR_Word top_level__mercury_compile__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2046 "mercury_compile.m"
              MR_Word top_level__mercury_compile__OutputStream_17;
#line 2049 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_18_18;

#line 2047 "mercury_compile.m"
              {
#line 2047 "mercury_compile.m"
                mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_16, &top_level__mercury_compile__OutputStream_17);
              }
#line 2048 "mercury_compile.m"
              {
#line 2048 "mercury_compile.m"
                transform_hlds__dependency_graph__write_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile__STATE_VARIABLE_HLDS_22);
              }
#line 2049 "mercury_compile.m"
              {
#line 2049 "mercury_compile.m"
                mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_17, &top_level__mercury_compile__V_18_18);
              }
#line 2050 "mercury_compile.m"
              {
#line 2050 "mercury_compile.m"
                mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_16);
              }
#line 2051 "mercury_compile.m"
              {
#line 2051 "mercury_compile.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
              }
#line 2046 "mercury_compile.m"
            }
#line 2058 "mercury_compile.m"
          {
#line 2058 "mercury_compile.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
          }
#line 2039 "mercury_compile.m"
        }
#line 2059 "mercury_compile.m"
        break;
#line 2059 "mercury_compile.m"
    }
#line 2035 "mercury_compile.m"
  }
#line 2032 "mercury_compile.m"
}

#line 2001 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_definitions_5_p_0(
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_6,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_7,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HLDS_8)
#line 2001 "mercury_compile.m"
{
#line 2004 "mercury_compile.m"
  {
#line 2004 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2004 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_10;
#line 2004 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ShowDefns_11;

#line 2005 "mercury_compile.m"
    {
#line 2005 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__HLDS_8, &top_level__mercury_compile__Globals_10);
    }
#line 2006 "mercury_compile.m"
    {
#line 2006 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 143, &top_level__mercury_compile__ShowDefns_11);
    }
#line 2026 "mercury_compile.m"
#line 2026 "mercury_compile.m"
    switch (top_level__mercury_compile__ShowDefns_11) {
#line 2026 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2026 "mercury_compile.m"
      case (MR_Integer) 0:
#line 2027 "mercury_compile.m"
        {
#line 2027 "mercury_compile.m"
        }
#line 2026 "mercury_compile.m"
        break;
#line 2026 "mercury_compile.m"
      case (MR_Integer) 1:
#line 2008 "mercury_compile.m"
        {
#line 2008 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_12;
#line 2008 "mercury_compile.m"
          MR_String top_level__mercury_compile__FileName_13;
#line 2008 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res_14;

#line 2009 "mercury_compile.m"
          {
#line 2009 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_6, (MR_String) "% Writing definitions...");
          }
#line 2010 "mercury_compile.m"
          {
#line 2010 "mercury_compile.m"
            hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__HLDS_8, &top_level__mercury_compile__ModuleName_12);
          }
#line 2011 "mercury_compile.m"
          {
#line 2011 "mercury_compile.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_12, (MR_String) ".defns", (MR_Integer) 0, &top_level__mercury_compile__FileName_13);
          }
#line 2013 "mercury_compile.m"
          {
#line 2013 "mercury_compile.m"
            mercury__io__open_output_4_p_0(top_level__mercury_compile__FileName_13, &top_level__mercury_compile__Res_14);
          }
#line 2019 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 2020 "mercury_compile.m"
            {
#line 2020 "mercury_compile.m"
              MR_Word top_level__mercury_compile__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_14, (MR_Integer) 0)));
#line 2020 "mercury_compile.m"
              MR_String top_level__mercury_compile__ErrorMsg_17;
#line 2020 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_28_28;

#line 2022 "mercury_compile.m"
              {
#line 2022 "mercury_compile.m"
                top_level__mercury_compile__V_28_28 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_16);
              }
#line 2021 "mercury_compile.m"
              {
#line 2021 "mercury_compile.m"
                top_level__mercury_compile__ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definitions: ", top_level__mercury_compile__V_28_28);
              }
#line 2023 "mercury_compile.m"
              {
#line 2023 "mercury_compile.m"
                libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_17);
              }
#line 2020 "mercury_compile.m"
            }
#line 2019 "mercury_compile.m"
          else
#line 2015 "mercury_compile.m"
            {
#line 2015 "mercury_compile.m"
              MR_Word top_level__mercury_compile__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_14, (MR_Integer) 0)));

#line 2016 "mercury_compile.m"
              {
#line 2016 "mercury_compile.m"
                hlds__hlds_defns__write_hlds_defns_4_p_0(top_level__mercury_compile__FileStream_15, top_level__mercury_compile__HLDS_8);
              }
#line 2017 "mercury_compile.m"
              {
#line 2017 "mercury_compile.m"
                mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_15);
              }
#line 2018 "mercury_compile.m"
              {
#line 2018 "mercury_compile.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_6, (MR_String) " done.\n");
              }
#line 2015 "mercury_compile.m"
            }
#line 2025 "mercury_compile.m"
          {
#line 2025 "mercury_compile.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_7);
          }
#line 2008 "mercury_compile.m"
        }
#line 2026 "mercury_compile.m"
        break;
#line 2026 "mercury_compile.m"
    }
#line 2004 "mercury_compile.m"
  }
#line 2001 "mercury_compile.m"
}

#line 1963 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_17_p_0(
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit_19,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_20,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_21,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__TypeEqvMap_22,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_23,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_38,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_27,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidType_28,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidInstOrMode_29,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_30,
#line 1963 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_39,
#line 1963 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_40)
#line 1963 "mercury_compile.m"
{
#line 1972 "mercury_compile.m"
  {
#line 1972 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1972 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_33;
#line 1972 "mercury_compile.m"
    MR_String top_level__mercury_compile__DumpBaseFileName_34;
#line 1972 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeSpecs_35;
#line 1972 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Status_36;
#line 1972 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SpecsErrors_37;
#line 1972 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_43_43;
#line 1972 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_50_50;
#line 1972 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_51_51;

#line 1973 "mercury_compile.m"
    {
#line 1973 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_0_39, &top_level__mercury_compile__STATE_VARIABLE_Specs_43_43);
    }
#line 1974 "mercury_compile.m"
    {
#line 1974 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% Converting parse tree to hlds...\n");
    }
#line 1975 "mercury_compile.m"
    {
#line 1975 "mercury_compile.m"
      top_level__mercury_compile__ModuleName_33 = parse_tree__prog_item__aug_compilation_unit_project_name_1_f_0(top_level__mercury_compile__AugCompUnit_19);
    }
#line 1976 "mercury_compile.m"
    {
#line 1976 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__ModuleName_33, (MR_String) ".hlds_dump", (MR_Integer) 0, &top_level__mercury_compile__DumpBaseFileName_34);
    }
#line 1978 "mercury_compile.m"
    {
#line 1978 "mercury_compile.m"
      hlds__make_hlds__parse_tree_to_hlds_11_p_0(top_level__mercury_compile__AugCompUnit_19, top_level__mercury_compile__Globals_18, top_level__mercury_compile__DumpBaseFileName_34, top_level__mercury_compile__MQInfo_21, top_level__mercury_compile__TypeEqvMap_22, top_level__mercury_compile__UsedModules_23, top_level__mercury_compile__QualInfo_27, top_level__mercury_compile__FoundInvalidType_28, top_level__mercury_compile__FoundInvalidInstOrMode_29, &top_level__mercury_compile__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile__MakeSpecs_35);
    }
#line 1981 "mercury_compile.m"
    {
#line 1981 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__MakeSpecs_35, top_level__mercury_compile__STATE_VARIABLE_Specs_43_43);
    }
#line 1982 "mercury_compile.m"
    {
#line 1982 "mercury_compile.m"
      hlds__hlds_module__module_info_set_event_set_3_p_0(top_level__mercury_compile__EventSet_20, top_level__mercury_compile__STATE_VARIABLE_HLDS_50_50, top_level__mercury_compile__STATE_VARIABLE_HLDS_38);
    }
#line 1983 "mercury_compile.m"
    {
#line 1983 "mercury_compile.m"
      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__Status_36);
    }
#line 1984 "mercury_compile.m"
    {
#line 1984 "mercury_compile.m"
      top_level__mercury_compile__SpecsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_51_51);
    }
#line 1986 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Status_36 == (MR_Integer) 0);
#line 1986 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1987 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1987 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__SpecsErrors_37 == (MR_Integer) 1);
#line 1985 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1990 "mercury_compile.m"
      {
#line 1990 "mercury_compile.m"
        *top_level__mercury_compile__FoundSemanticError_30 = (MR_Integer) 1;
#line 1991 "mercury_compile.m"
        {
#line 1991 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 1990 "mercury_compile.m"
      }
#line 1985 "mercury_compile.m"
    else
#line 1993 "mercury_compile.m"
      *top_level__mercury_compile__FoundSemanticError_30 = (MR_Integer) 0;
#line 1995 "mercury_compile.m"
    {
#line 1995 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_51_51, top_level__mercury_compile__STATE_VARIABLE_Specs_40);
    }
#line 1996 "mercury_compile.m"
    {
#line 1996 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% done.\n");
    }
#line 1997 "mercury_compile.m"
    {
#line 1997 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_25);
    }
#line 1972 "mercury_compile.m"
  }
#line 1963 "mercury_compile.m"
}

#line 1875 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14)
#line 1875 "mercury_compile.m"
{
#line 1880 "mercury_compile.m"
  {
#line 1880 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodOpt_16;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UseOptInt_17;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_18;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_19;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_20;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_21;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Imports1_22;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error1_23;
#line 1880 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error2_25;

#line 1881 "mercury_compile.m"
    {
#line 1881 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 321, &top_level__mercury_compile__IntermodOpt_16);
    }
#line 1883 "mercury_compile.m"
    {
#line 1883 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 323, &top_level__mercury_compile__UseOptInt_17);
    }
#line 1884 "mercury_compile.m"
    {
#line 1884 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_18);
    }
#line 1886 "mercury_compile.m"
    {
#line 1886 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 325, &top_level__mercury_compile__TransOpt_19);
    }
#line 1887 "mercury_compile.m"
    {
#line 1887 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_20);
    }
#line 1889 "mercury_compile.m"
    {
#line 1889 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 326, &top_level__mercury_compile__IntermodAnalysis_21);
    }
#line 1892 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__UseOptInt_17 == (MR_Integer) 1);
#line 1893 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1893 "mercury_compile.m"
      {
#line 1893 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodOpt_16 == (MR_Integer) 1);
#line 1893 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1894 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodAnalysis_21 == (MR_Integer) 1);
#line 1893 "mercury_compile.m"
      }
#line 1895 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1896 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 0);
#line 1891 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1898 "mercury_compile.m"
      {
#line 1898 "mercury_compile.m"
        {
#line 1898 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading .opt files...\n");
        }
#line 1899 "mercury_compile.m"
        {
#line 1899 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 1900 "mercury_compile.m"
        {
#line 1900 "mercury_compile.m"
          parse_tree__modules__grab_opt_files_6_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__Imports0_10, &top_level__mercury_compile__Imports1_22, &top_level__mercury_compile__Error1_23);
        }
#line 1901 "mercury_compile.m"
        {
#line 1901 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Done.\n");
        }
#line 1898 "mercury_compile.m"
      }
#line 1891 "mercury_compile.m"
    else
#line 1903 "mercury_compile.m"
      {
#line 1903 "mercury_compile.m"
        top_level__mercury_compile__Imports1_22 = top_level__mercury_compile__Imports0_10;
#line 1904 "mercury_compile.m"
        top_level__mercury_compile__Error1_23 = (MR_Integer) 0;
#line 1903 "mercury_compile.m"
      }
#line 1906 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_20 == (MR_Integer) 1);
#line 1906 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1913 "mercury_compile.m"
      if ((top_level__mercury_compile__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1914 "mercury_compile.m"
        {
#line 1914 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_26;
#line 1914 "mercury_compile.m"
          MR_Word top_level__mercury_compile__WarnNoTransOptDeps_27;

#line 1915 "mercury_compile.m"
          *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1916 "mercury_compile.m"
          top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1917 "mercury_compile.m"
          {
#line 1917 "mercury_compile.m"
            parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*top_level__mercury_compile__Imports_13, &top_level__mercury_compile__ModuleName_26);
          }
#line 1918 "mercury_compile.m"
          {
#line 1918 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 15, &top_level__mercury_compile__WarnNoTransOptDeps_27);
          }
#line 1931 "mercury_compile.m"
#line 1931 "mercury_compile.m"
          switch (top_level__mercury_compile__WarnNoTransOptDeps_27) {
#line 1931 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1931 "mercury_compile.m"
            case (MR_Integer) 0:
#line 1932 "mercury_compile.m"
              {
#line 1932 "mercury_compile.m"
              }
#line 1931 "mercury_compile.m"
              break;
#line 1931 "mercury_compile.m"
            case (MR_Integer) 1:
#line 1921 "mercury_compile.m"
              {
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Pieces_28;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Msg_29;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Spec_30;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_52_52;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_55_55;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_56_56;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_71_71;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_72_72;
#line 1921 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_76_76;
#line 1929 "mercury_compile.m"
                MR_Integer top_level__mercury_compile___NumWarnings_31;
#line 1929 "mercury_compile.m"
                MR_Integer top_level__mercury_compile___NumErrors_32;

#line 1923 "mercury_compile.m"
                {
#line 1923 "mercury_compile.m"
                  top_level__mercury_compile__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "mercury_compile.m"
                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1923 "mercury_compile.m"
                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 1) = ((MR_Box) (top_level__mercury_compile__ModuleName_26));
#line 1923 "mercury_compile.m"
                }
#line 1923 "mercury_compile.m"
                {
#line 1923 "mercury_compile.m"
                  top_level__mercury_compile__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 0) = ((MR_Box) (top_level__mercury_compile__V_56_56));
#line 1923 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[26])));
#line 1923 "mercury_compile.m"
                }
#line 1923 "mercury_compile.m"
                {
#line 1923 "mercury_compile.m"
                  top_level__mercury_compile__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[36])));
#line 1923 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 1) = ((MR_Box) (top_level__mercury_compile__V_55_55));
#line 1923 "mercury_compile.m"
                }
#line 1922 "mercury_compile.m"
                {
#line 1922 "mercury_compile.m"
                  top_level__mercury_compile__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1922 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[35])));
#line 1922 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 1) = ((MR_Box) (top_level__mercury_compile__V_52_52));
#line 1922 "mercury_compile.m"
                }
#line 1926 "mercury_compile.m"
                {
#line 1926 "mercury_compile.m"
                  top_level__mercury_compile__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1926 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (top_level__mercury_compile__Pieces_28));
#line 1926 "mercury_compile.m"
                }
#line 1926 "mercury_compile.m"
                {
#line 1926 "mercury_compile.m"
                  top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 1926 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1926 "mercury_compile.m"
                }
#line 1925 "mercury_compile.m"
                {
#line 1925 "mercury_compile.m"
                  top_level__mercury_compile__Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1925 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1925 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1925 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1925 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 3) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 1925 "mercury_compile.m"
                }
#line 1927 "mercury_compile.m"
                {
#line 1927 "mercury_compile.m"
                  top_level__mercury_compile__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 0) = ((MR_Box) (top_level__mercury_compile__Msg_29));
#line 1927 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1927 "mercury_compile.m"
                }
#line 1927 "mercury_compile.m"
                {
#line 1927 "mercury_compile.m"
                  top_level__mercury_compile__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1927 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1927 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1927 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 2) = ((MR_Box) (top_level__mercury_compile__V_76_76));
#line 1927 "mercury_compile.m"
                }
#line 1929 "mercury_compile.m"
                {
#line 1929 "mercury_compile.m"
                  parse_tree__error_util__write_error_spec_8_p_0(top_level__mercury_compile__Spec_30, top_level__mercury_compile__Globals_9, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_31, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_32);
                }
#line 1921 "mercury_compile.m"
              }
#line 1931 "mercury_compile.m"
              break;
#line 1931 "mercury_compile.m"
          }
#line 1914 "mercury_compile.m"
        }
#line 1913 "mercury_compile.m"
      else
#line 1908 "mercury_compile.m"
        {
#line 1908 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTransOptDeps_12, (MR_Integer) 0)));

#line 1911 "mercury_compile.m"
          {
#line 1911 "mercury_compile.m"
            parse_tree__modules__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptDeps_24, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
          }
#line 1908 "mercury_compile.m"
        }
#line 1906 "mercury_compile.m"
    else
#line 1935 "mercury_compile.m"
      {
#line 1935 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 1);
#line 1935 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1939 "mercury_compile.m"
          {
#line 1939 "mercury_compile.m"
            *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1940 "mercury_compile.m"
            top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1939 "mercury_compile.m"
          }
#line 1935 "mercury_compile.m"
        else
#line 1953 "mercury_compile.m"
#line 1953 "mercury_compile.m"
          switch (top_level__mercury_compile__TransOpt_19) {
#line 1953 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1953 "mercury_compile.m"
            case (MR_Integer) 0:
#line 1954 "mercury_compile.m"
              {
#line 1955 "mercury_compile.m"
                *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1956 "mercury_compile.m"
                top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1954 "mercury_compile.m"
              }
#line 1953 "mercury_compile.m"
              break;
#line 1953 "mercury_compile.m"
            case (MR_Integer) 1:
#line 1943 "mercury_compile.m"
              {
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TransOptFiles_33;
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TransOptFilesList_34;
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_82_82;
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 4)));
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_84_84;
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_86_86;
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 5)));
#line 1943 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 6)));
#line 1948 "mercury_compile.m"
                MR_String top_level__mercury_compile__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 0)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 1)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 2)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 3)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 7)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 8)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 9)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 10)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 11)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 12)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 13)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 14)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 15)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 16)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 17)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 18)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 19)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 20)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 21)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 22)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 23)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 24)));
#line 1948 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 25)));
#line 1948 "mercury_compile.m"
                MR_String top_level__mercury_compile__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 26)));

#line 1949 "mercury_compile.m"
                {
#line 1949 "mercury_compile.m"
                  top_level__mercury_compile__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_86_86, 0) = ((MR_Box) (top_level__mercury_compile__V_95_95));
#line 1949 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1949 "mercury_compile.m"
                }
#line 1949 "mercury_compile.m"
                {
#line 1949 "mercury_compile.m"
                  top_level__mercury_compile__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_84_84, 0) = ((MR_Box) (top_level__mercury_compile__V_94_94));
#line 1949 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_84_84, 1) = ((MR_Box) (top_level__mercury_compile__V_86_86));
#line 1949 "mercury_compile.m"
                }
#line 1948 "mercury_compile.m"
                {
#line 1948 "mercury_compile.m"
                  top_level__mercury_compile__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 0) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 1948 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 1) = ((MR_Box) (top_level__mercury_compile__V_84_84));
#line 1948 "mercury_compile.m"
                }
#line 1948 "mercury_compile.m"
                {
#line 1948 "mercury_compile.m"
                  top_level__mercury_compile__TransOptFiles_33 = mercury__set__union_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_168_168, top_level__mercury_compile__V_82_82);
                }
#line 1950 "mercury_compile.m"
                {
#line 1950 "mercury_compile.m"
                  mercury__set__to_sorted_list_2_p_0(top_level__mercury_compile__TypeCtorInfo_168_168, top_level__mercury_compile__TransOptFiles_33, &top_level__mercury_compile__TransOptFilesList_34);
                }
#line 1951 "mercury_compile.m"
                {
#line 1951 "mercury_compile.m"
                  parse_tree__modules__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptFilesList_34, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
                }
#line 1943 "mercury_compile.m"
              }
#line 1953 "mercury_compile.m"
              break;
#line 1953 "mercury_compile.m"
          }
#line 1935 "mercury_compile.m"
      }
#line 1959 "mercury_compile.m"
    {
#line 1959 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__Error1_23, top_level__mercury_compile__Error2_25, top_level__mercury_compile__Error_14);
    }
#line 1880 "mercury_compile.m"
  }
#line 1875 "mercury_compile.m"
}

#line 1854 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1854 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1854 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1854 "mercury_compile.m"
{
#line 1854 "mercury_compile.m"
  {
#line 1854 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1854 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1854 "mercury_compile.m"
    {
#line 1854 "mercury_compile.m"
      top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1855__1_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1854 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1854 "mercury_compile.m"
  }
#line 1854 "mercury_compile.m"
}

#line 1853 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1853 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1853 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1853 "mercury_compile.m"
{
#line 1853 "mercury_compile.m"
  {
#line 1853 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1853 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1853 "mercury_compile.m"
    {
#line 1853 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1853 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1853 "mercury_compile.m"
  }
#line 1853 "mercury_compile.m"
}

#line 1844 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1844 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4)
#line 1844 "mercury_compile.m"
{
#line 1847 "mercury_compile.m"
  {
#line 1847 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1847 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Result_6;
#line 1849 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_15;
#line 1850 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_30_30;
#line 1850 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList0_7;
#line 1850 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList1_9;
#line 1850 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NotIsWhitespace_10;
#line 1850 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList_12;
#line 1850 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName0_14;
#line 1850 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_23_23;
#line 1850 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_25_25;
#line 1853 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_8_8;
#line 1857 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_13_13;

#line 1848 "mercury_compile.m"
    {
#line 1848 "mercury_compile.m"
      mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_6);
    }
#line 1850 "mercury_compile.m"
    top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__Result_6)) == (MR_mktag((MR_Integer) 1)));
#line 1850 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1850 "mercury_compile.m"
      {
#line 1850 "mercury_compile.m"
        top_level__mercury_compile__CharList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_6, (MR_Integer) 0)));
#line 1853 "mercury_compile.m"
        top_level__mercury_compile__V_23_23 = (MR_Word) &top_level__mercury_compile_scalar_common_7[3];
#line 5451 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1853 "mercury_compile.m"
        {
#line 1853 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__V_23_23, top_level__mercury_compile__CharList0_7, &top_level__mercury_compile__V_8_8, &top_level__mercury_compile__CharList1_9);
        }
#line 1854 "mercury_compile.m"
        top_level__mercury_compile__NotIsWhitespace_10 = (MR_Word) &top_level__mercury_compile_scalar_common_7[4];
#line 1857 "mercury_compile.m"
        {
#line 1857 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__NotIsWhitespace_10, top_level__mercury_compile__CharList1_9, &top_level__mercury_compile__CharList_12, &top_level__mercury_compile__V_13_13);
        }
#line 1858 "mercury_compile.m"
        {
#line 1858 "mercury_compile.m"
          mercury__string__from_char_list_2_p_0(top_level__mercury_compile__CharList_12, &top_level__mercury_compile__FileName0_14);
        }
#line 1859 "mercury_compile.m"
        top_level__mercury_compile__V_25_25 = (MR_String) ".trans_opt";
#line 1859 "mercury_compile.m"
        {
#line 1859 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__FileName0_14, top_level__mercury_compile__V_25_25, &top_level__mercury_compile__FileName_15);
        }
#line 1850 "mercury_compile.m"
      }
#line 1849 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1865 "mercury_compile.m"
      {
#line 1865 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleFileName_17;
#line 1865 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Module_18;
#line 1865 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TransOptDeps0_19;
#line 1861 "mercury_compile.m"
        MR_String top_level__mercury_compile__BaseFileName_16;

#line 1861 "mercury_compile.m"
        {
#line 1861 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__append_3_p_1((MR_String) "Mercury/trans_opts/", &top_level__mercury_compile__BaseFileName_16, top_level__mercury_compile__FileName_15);
        }
#line 1861 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1862 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__BaseFileName_16;
#line 1861 "mercury_compile.m"
        else
#line 1864 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__FileName_15;
#line 1866 "mercury_compile.m"
        {
#line 1866 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__ModuleFileName_17, &top_level__mercury_compile__Module_18);
        }
#line 1867 "mercury_compile.m"
        {
#line 1867 "mercury_compile.m"
          top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps0_19);
        }
#line 1868 "mercury_compile.m"
        {
#line 1868 "mercury_compile.m"
          MR_Word base;
#line 1868 "mercury_compile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "mercury_compile.m"
          *top_level__mercury_compile__TransOptDeps_4 = base;
#line 1868 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__Module_18));
#line 1868 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__TransOptDeps0_19));
#line 1868 "mercury_compile.m"
        }
#line 1865 "mercury_compile.m"
      }
#line 1849 "mercury_compile.m"
    else
#line 1870 "mercury_compile.m"
      *top_level__mercury_compile__TransOptDeps_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1847 "mercury_compile.m"
  }
#line 1844 "mercury_compile.m"
}

#line 1819 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1819 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1819 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6)
#line 1819 "mercury_compile.m"
{
#line 1822 "mercury_compile.m"
  while (MR_TRUE)
#line 1822 "mercury_compile.m"
    {
#line 1822 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 1822 "mercury_compile.m"
      {
#line 1822 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 1822 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Result_8;

#line 1823 "mercury_compile.m"
        {
#line 1823 "mercury_compile.m"
          mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_8);
        }
#line 1832 "mercury_compile.m"
#line 1832 "mercury_compile.m"
        switch (MR_tag((MR_Word) top_level__mercury_compile__Result_8)) {
#line 1832 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1832 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1836 "mercury_compile.m"
            *top_level__mercury_compile__Success_6 = (MR_Integer) 0;
#line 1832 "mercury_compile.m"
            break;
#line 1832 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1825 "mercury_compile.m"
            {
#line 1825 "mercury_compile.m"
              MR_Word top_level__mercury_compile__CharList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_8, (MR_Integer) 0)));
#line 1826 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_10_10;

#line 1826 "mercury_compile.m"
              {
#line 1826 "mercury_compile.m"
                top_level__mercury_compile__succeeded = mercury__list__append_3_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__SearchPattern_5, &top_level__mercury_compile__V_10_10, top_level__mercury_compile__CharList_9);
              }
#line 1826 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1828 "mercury_compile.m"
                *top_level__mercury_compile__Success_6 = (MR_Integer) 1;
#line 1826 "mercury_compile.m"
              else
#line 1830 "mercury_compile.m"
                {
#line 1830 "mercury_compile.m"
                  /* direct tailcall eliminated */
#line 1830 "mercury_compile.m"
                  continue;
#line 1830 "mercury_compile.m"
                }
#line 1825 "mercury_compile.m"
            }
#line 1832 "mercury_compile.m"
            break;
#line 1832 "mercury_compile.m"
          case (MR_Integer) 2:
#line 1836 "mercury_compile.m"
            *top_level__mercury_compile__Success_6 = (MR_Integer) 0;
#line 1832 "mercury_compile.m"
            break;
#line 1832 "mercury_compile.m"
        }
#line 1822 "mercury_compile.m"
      }
#line 1822 "mercury_compile.m"
      break;
#line 1822 "mercury_compile.m"
    }
#line 1819 "mercury_compile.m"
}

#line 1766 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1766 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8)
#line 1766 "mercury_compile.m"
{
#line 1769 "mercury_compile.m"
  {
#line 1769 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1769 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_10;

#line 1770 "mercury_compile.m"
    {
#line 1770 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 325, &top_level__mercury_compile__TransOpt_10);
    }
#line 1811 "mercury_compile.m"
#line 1811 "mercury_compile.m"
    switch (top_level__mercury_compile__TransOpt_10) {
#line 1811 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1811 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1813 "mercury_compile.m"
        *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1811 "mercury_compile.m"
        break;
#line 1811 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1772 "mercury_compile.m"
        {
#line 1772 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Verbose_11;
#line 1772 "mercury_compile.m"
          MR_String top_level__mercury_compile__DependencyFileName_12;
#line 1772 "mercury_compile.m"
          MR_Word top_level__mercury_compile__OpenResult_13;

#line 1773 "mercury_compile.m"
          {
#line 1773 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 46, &top_level__mercury_compile__Verbose_11);
          }
#line 1774 "mercury_compile.m"
          {
#line 1774 "mercury_compile.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".d", (MR_Integer) 1, &top_level__mercury_compile__DependencyFileName_12);
          }
#line 1776 "mercury_compile.m"
          {
#line 1776 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading auto-dependency file \140");
          }
#line 1777 "mercury_compile.m"
          {
#line 1777 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, top_level__mercury_compile__DependencyFileName_12);
          }
#line 1778 "mercury_compile.m"
          {
#line 1778 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "\'...");
          }
#line 1779 "mercury_compile.m"
          {
#line 1779 "mercury_compile.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
          }
#line 1780 "mercury_compile.m"
          {
#line 1780 "mercury_compile.m"
            mercury__io__open_input_4_p_0(top_level__mercury_compile__DependencyFileName_12, &top_level__mercury_compile__OpenResult_13);
          }
#line 1801 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 1802 "mercury_compile.m"
            {
#line 1802 "mercury_compile.m"
              MR_Word top_level__mercury_compile__IOError_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1802 "mercury_compile.m"
              MR_String top_level__mercury_compile__IOErrorMessage_23;
#line 1802 "mercury_compile.m"
              MR_String top_level__mercury_compile__Message_24;
#line 1802 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_42_42;
#line 1802 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_44_44;
#line 1802 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_45_45;
#line 1802 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_47_47;

#line 1803 "mercury_compile.m"
              {
#line 1803 "mercury_compile.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " failed.\n");
              }
#line 1804 "mercury_compile.m"
              {
#line 1804 "mercury_compile.m"
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
              }
#line 1805 "mercury_compile.m"
              {
#line 1805 "mercury_compile.m"
                mercury__io__error_message_2_p_0(top_level__mercury_compile__IOError_22, &top_level__mercury_compile__IOErrorMessage_23);
              }
#line 1807 "mercury_compile.m"
              {
#line 1807 "mercury_compile.m"
                top_level__mercury_compile__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 0) = ((MR_Box) (top_level__mercury_compile__IOErrorMessage_23));
#line 1807 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1807 "mercury_compile.m"
              }
#line 1807 "mercury_compile.m"
              {
#line 1807 "mercury_compile.m"
                top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) ((MR_String) "\' for input: "));
#line 1807 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 1) = ((MR_Box) (top_level__mercury_compile__V_47_47));
#line 1807 "mercury_compile.m"
              }
#line 1806 "mercury_compile.m"
              {
#line 1806 "mercury_compile.m"
                top_level__mercury_compile__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1806 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (top_level__mercury_compile__DependencyFileName_12));
#line 1806 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__V_45_45));
#line 1806 "mercury_compile.m"
              }
#line 1806 "mercury_compile.m"
              {
#line 1806 "mercury_compile.m"
                top_level__mercury_compile__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1806 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1806 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 1) = ((MR_Box) (top_level__mercury_compile__V_44_44));
#line 1806 "mercury_compile.m"
              }
#line 1806 "mercury_compile.m"
              {
#line 1806 "mercury_compile.m"
                mercury__string__append_list_2_p_0(top_level__mercury_compile__V_42_42, &top_level__mercury_compile__Message_24);
              }
#line 1808 "mercury_compile.m"
              {
#line 1808 "mercury_compile.m"
                libs__file_util__report_error_3_p_0(top_level__mercury_compile__Message_24);
              }
#line 1809 "mercury_compile.m"
              *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1802 "mercury_compile.m"
            }
#line 1801 "mercury_compile.m"
          else
#line 1782 "mercury_compile.m"
            {
#line 1782 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1782 "mercury_compile.m"
              MR_Word top_level__mercury_compile__OldStream_15;
#line 1782 "mercury_compile.m"
              MR_String top_level__mercury_compile__TransOptDateFileName0_16;
#line 1782 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptDateFileName_17;
#line 1782 "mercury_compile.m"
              MR_Word top_level__mercury_compile__SearchPattern_18;
#line 1782 "mercury_compile.m"
              MR_Word top_level__mercury_compile__FindResult_19;
#line 1798 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_21_21;

#line 1783 "mercury_compile.m"
              {
#line 1783 "mercury_compile.m"
                mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__Stream_14, &top_level__mercury_compile__OldStream_15);
              }
#line 1784 "mercury_compile.m"
              {
#line 1784 "mercury_compile.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".trans_opt_date", (MR_Integer) 1, &top_level__mercury_compile__TransOptDateFileName0_16);
              }
#line 1786 "mercury_compile.m"
              {
#line 1786 "mercury_compile.m"
                mercury__string__to_char_list_2_p_0(top_level__mercury_compile__TransOptDateFileName0_16, &top_level__mercury_compile__TransOptDateFileName_17);
              }
#line 1787 "mercury_compile.m"
              {
#line 1787 "mercury_compile.m"
                top_level__mercury_compile__SearchPattern_18 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__TransOptDateFileName_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[22]));
              }
#line 1788 "mercury_compile.m"
              {
#line 1788 "mercury_compile.m"
                top_level__mercury_compile__read_dependency_file_find_start_4_p_0(top_level__mercury_compile__SearchPattern_18, &top_level__mercury_compile__FindResult_19);
              }
#line 1793 "mercury_compile.m"
#line 1793 "mercury_compile.m"
              switch (top_level__mercury_compile__FindResult_19) {
#line 1793 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1793 "mercury_compile.m"
                case (MR_Integer) 0:
#line 1796 "mercury_compile.m"
                  *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1793 "mercury_compile.m"
                  break;
#line 1793 "mercury_compile.m"
                case (MR_Integer) 1:
#line 1790 "mercury_compile.m"
                  {
#line 1790 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TransOptDeps_20;

#line 1791 "mercury_compile.m"
                    {
#line 1791 "mercury_compile.m"
                      top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps_20);
                    }
#line 1792 "mercury_compile.m"
                    {
#line 1792 "mercury_compile.m"
                      MR_Word base;
#line 1792 "mercury_compile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1792 "mercury_compile.m"
                      *top_level__mercury_compile__MaybeTransOptDeps_8 = base;
#line 1792 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__TransOptDeps_20));
#line 1792 "mercury_compile.m"
                    }
#line 1790 "mercury_compile.m"
                  }
#line 1793 "mercury_compile.m"
                  break;
#line 1793 "mercury_compile.m"
              }
#line 1798 "mercury_compile.m"
              {
#line 1798 "mercury_compile.m"
                mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__OldStream_15, &top_level__mercury_compile__V_21_21);
              }
#line 1799 "mercury_compile.m"
              {
#line 1799 "mercury_compile.m"
                mercury__io__close_input_3_p_0(top_level__mercury_compile__Stream_14);
              }
#line 1800 "mercury_compile.m"
              {
#line 1800 "mercury_compile.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " done.\n");
              }
#line 1782 "mercury_compile.m"
            }
#line 1772 "mercury_compile.m"
        }
#line 1811 "mercury_compile.m"
        break;
#line 1811 "mercury_compile.m"
    }
#line 1769 "mercury_compile.m"
  }
#line 1766 "mercury_compile.m"
}

#line 1603 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_16_p_0(
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_18,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__WriteDFile0_19,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_20,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_21,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_22,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestampMap_23,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_24,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_25,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_26,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_72,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_73,
#line 1603 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_74,
#line 1603 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_75)
#line 1603 "mercury_compile.m"
{
#line 1611 "mercury_compile.m"
  {
#line 1611 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_146_146;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_30;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_31;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MMCMake_32;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_34;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTransOptDeps_36;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports1_37;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodError_38;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AugCompUnit1_39;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ItemSpecs_40;
#line 1611 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetFileName_42;
#line 1611 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetName_43;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap1_44;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSetErrors_45;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AugCompUnit2_49;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap2_50;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo0_51;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefTypes_52;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefInsts_53;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefModes_54;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefTypeClasses_55;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualifySpecs_56;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo0_57;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AugCompUnit_58;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap_59;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeEqvMap_60;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UsedModules_61;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo_62;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandSpecs_63;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandErrors_64;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo_65;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSet_66;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS0_67;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSFoundInvalidType_68;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_69;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_83_83;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_86_86;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_87_87;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_93_93;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_94_94;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_99_99;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_104_104;
#line 1611 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_105_105;
#line 1646 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Error_41;
#line 1649 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_120_120;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_121_121;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_122_122;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_123_123;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_124_124;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_125_125;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_126_126;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_127_127;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_128_128;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_129_129;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_130_130;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_131_131;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_132_132;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_133_133;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_134_134;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_135_135;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_136_136;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_137_137;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_138_138;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_139_139;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_140_140;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_141_141;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_142_142;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_143_143;
#line 1649 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_144_144;
#line 1649 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_145_145;

#line 1612 "mercury_compile.m"
    {
#line 1612 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_17, (MR_Integer) 56, &top_level__mercury_compile__Stats_30);
    }
#line 1613 "mercury_compile.m"
    {
#line 1613 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_17, (MR_Integer) 46, &top_level__mercury_compile__Verbose_31);
    }
#line 1615 "mercury_compile.m"
    {
#line 1615 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_17, (MR_Integer) 615, &top_level__mercury_compile__MMCMake_32);
    }
#line 1624 "mercury_compile.m"
    {
#line 1624 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports0_20, &top_level__mercury_compile__ModuleName_34);
    }
#line 1634 "mercury_compile.m"
#line 1634 "mercury_compile.m"
    switch (MR_tag((MR_Word) top_level__mercury_compile__OpModeAugment_18)) {
#line 1634 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1634 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1634 "mercury_compile.m"
#line 1634 "mercury_compile.m"
        switch (MR_unmkbody(top_level__mercury_compile__OpModeAugment_18)) {
#line 1634 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1634 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1634 "mercury_compile.m"
          case (MR_Integer) 2:
#line 1634 "mercury_compile.m"
          case (MR_Integer) 3:
#line 1634 "mercury_compile.m"
          case (MR_Integer) 4:
#line 1634 "mercury_compile.m"
          case (MR_Integer) 5:
#line 1633 "mercury_compile.m"
            top_level__mercury_compile__MaybeTransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1634 "mercury_compile.m"
            break;
#line 1634 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1638 "mercury_compile.m"
            {
#line 1638 "mercury_compile.m"
              top_level__mercury_compile__maybe_read_dependency_file_5_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_34, &top_level__mercury_compile__MaybeTransOptDeps_36);
            }
#line 1634 "mercury_compile.m"
            break;
#line 1634 "mercury_compile.m"
        }
#line 1634 "mercury_compile.m"
        break;
#line 1634 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1633 "mercury_compile.m"
        top_level__mercury_compile__MaybeTransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1634 "mercury_compile.m"
        break;
#line 1634 "mercury_compile.m"
    }
#line 1642 "mercury_compile.m"
    {
#line 1642 "mercury_compile.m"
      top_level__mercury_compile__maybe_grab_optfiles_8_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleAndImports0_20, top_level__mercury_compile__Verbose_31, top_level__mercury_compile__MaybeTransOptDeps_36, &top_level__mercury_compile__ModuleAndImports1_37, &top_level__mercury_compile__IntermodError_38);
    }
#line 1646 "mercury_compile.m"
    {
#line 1646 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(top_level__mercury_compile__ModuleAndImports1_37, &top_level__mercury_compile__AugCompUnit1_39, &top_level__mercury_compile__ItemSpecs_40, &top_level__mercury_compile___Error_41);
    }
#line 6163 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1648 "mercury_compile.m"
    {
#line 1648 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_146_146, top_level__mercury_compile__ItemSpecs_40, top_level__mercury_compile__STATE_VARIABLE_Specs_0_74);
    }
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 0)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 1)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 2)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 3)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 4)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 5)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 6)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 7)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 8)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 9)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 10)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 11)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 12)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 13)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 14)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 15)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 16)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 17)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 18)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 19)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 20)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 21)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 22)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 23)));
#line 1649 "mercury_compile.m"
    *top_level__mercury_compile__MaybeTimestampMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 24)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 25)));
#line 1649 "mercury_compile.m"
    top_level__mercury_compile__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_37, (MR_Integer) 26)));
#line 1651 "mercury_compile.m"
    {
#line 1651 "mercury_compile.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_17, (MR_Integer) 174, &top_level__mercury_compile__EventSetFileName_42);
    }
#line 1653 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__EventSetFileName_42, (MR_String) "") == 0);
#line 1653 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1654 "mercury_compile.m"
      {
#line 1654 "mercury_compile.m"
        top_level__mercury_compile__EventSetName_43 = (MR_String) "";
#line 1655 "mercury_compile.m"
        {
#line 1655 "mercury_compile.m"
          top_level__mercury_compile__EventSpecMap1_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 1656 "mercury_compile.m"
        top_level__mercury_compile__EventSetErrors_45 = (MR_Integer) 0;
#line 1654 "mercury_compile.m"
        top_level__mercury_compile__STATE_VARIABLE_Specs_86_86 = top_level__mercury_compile__STATE_VARIABLE_Specs_83_83;
#line 1654 "mercury_compile.m"
      }
#line 1653 "mercury_compile.m"
    else
#line 1659 "mercury_compile.m"
      {
#line 1659 "mercury_compile.m"
        MR_String top_level__mercury_compile__EventSetName0_46;
#line 1659 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSpecMap0_47;
#line 1659 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSetSpecs_48;

#line 1658 "mercury_compile.m"
        {
#line 1658 "mercury_compile.m"
          parse_tree__prog_event__read_event_set_6_p_0(top_level__mercury_compile__EventSetFileName_42, &top_level__mercury_compile__EventSetName0_46, &top_level__mercury_compile__EventSpecMap0_47, &top_level__mercury_compile__EventSetSpecs_48);
        }
#line 1660 "mercury_compile.m"
        {
#line 1660 "mercury_compile.m"
          top_level__mercury_compile__STATE_VARIABLE_Specs_86_86 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_146_146, top_level__mercury_compile__EventSetSpecs_48, top_level__mercury_compile__STATE_VARIABLE_Specs_83_83);
        }
#line 1661 "mercury_compile.m"
        {
#line 1661 "mercury_compile.m"
          top_level__mercury_compile__EventSetErrors_45 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__EventSetSpecs_48);
        }
#line 1666 "mercury_compile.m"
#line 1666 "mercury_compile.m"
        switch (top_level__mercury_compile__EventSetErrors_45) {
#line 1666 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1666 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1663 "mercury_compile.m"
            {
#line 1664 "mercury_compile.m"
              top_level__mercury_compile__EventSetName_43 = top_level__mercury_compile__EventSetName0_46;
#line 1665 "mercury_compile.m"
              top_level__mercury_compile__EventSpecMap1_44 = top_level__mercury_compile__EventSpecMap0_47;
#line 1663 "mercury_compile.m"
            }
#line 1666 "mercury_compile.m"
            break;
#line 1666 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1667 "mercury_compile.m"
            {
#line 1668 "mercury_compile.m"
              top_level__mercury_compile__EventSetName_43 = (MR_String) "";
#line 1669 "mercury_compile.m"
              {
#line 1669 "mercury_compile.m"
                top_level__mercury_compile__EventSpecMap1_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
              }
#line 1667 "mercury_compile.m"
            }
#line 1666 "mercury_compile.m"
            break;
#line 1666 "mercury_compile.m"
        }
#line 1659 "mercury_compile.m"
      }
#line 1673 "mercury_compile.m"
    {
#line 1673 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_31, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_86_86, &top_level__mercury_compile__STATE_VARIABLE_Specs_87_87);
    }
#line 1674 "mercury_compile.m"
    {
#line 1674 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_31, (MR_String) "% Module qualifying items...\n");
    }
#line 1675 "mercury_compile.m"
    {
#line 1675 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_31);
    }
#line 1676 "mercury_compile.m"
    {
#line 1676 "mercury_compile.m"
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__AugCompUnit1_39, &top_level__mercury_compile__AugCompUnit2_49, top_level__mercury_compile__EventSpecMap1_44, &top_level__mercury_compile__EventSpecMap2_50, top_level__mercury_compile__EventSetFileName_42, &top_level__mercury_compile__MQInfo0_51, &top_level__mercury_compile__MQUndefTypes_52, &top_level__mercury_compile__MQUndefInsts_53, &top_level__mercury_compile__MQUndefModes_54, &top_level__mercury_compile__MQUndefTypeClasses_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__QualifySpecs_56);
    }
#line 1680 "mercury_compile.m"
    {
#line 1680 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_93_93 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_146_146, top_level__mercury_compile__QualifySpecs_56, top_level__mercury_compile__STATE_VARIABLE_Specs_87_87);
    }
#line 1681 "mercury_compile.m"
    {
#line 1681 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_31, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_93_93, &top_level__mercury_compile__STATE_VARIABLE_Specs_94_94);
    }
#line 1682 "mercury_compile.m"
    {
#line 1682 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_31, (MR_String) "% done.\n");
    }
#line 1683 "mercury_compile.m"
    {
#line 1683 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_30);
    }
#line 1685 "mercury_compile.m"
    {
#line 1685 "mercury_compile.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(top_level__mercury_compile__MQInfo0_51, &top_level__mercury_compile__RecompInfo0_57);
    }
#line 1686 "mercury_compile.m"
    {
#line 1686 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_31, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_94_94, &top_level__mercury_compile__STATE_VARIABLE_Specs_99_99);
    }
#line 1687 "mercury_compile.m"
    {
#line 1687 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_31, (MR_String) "% Expanding equivalence types and insts...\n");
    }
#line 1689 "mercury_compile.m"
    {
#line 1689 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_31);
    }
#line 1690 "mercury_compile.m"
    {
#line 1690 "mercury_compile.m"
      parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(top_level__mercury_compile__AugCompUnit2_49, &top_level__mercury_compile__AugCompUnit_58, top_level__mercury_compile__EventSpecMap2_50, &top_level__mercury_compile__EventSpecMap_59, &top_level__mercury_compile__TypeEqvMap_60, &top_level__mercury_compile__UsedModules_61, top_level__mercury_compile__RecompInfo0_57, &top_level__mercury_compile__RecompInfo_62, &top_level__mercury_compile__ExpandSpecs_63);
    }
#line 1693 "mercury_compile.m"
    {
#line 1693 "mercury_compile.m"
      top_level__mercury_compile__ExpandErrors_64 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ExpandSpecs_63);
    }
#line 1694 "mercury_compile.m"
    {
#line 1694 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_104_104 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_146_146, top_level__mercury_compile__ExpandSpecs_63, top_level__mercury_compile__STATE_VARIABLE_Specs_99_99);
    }
#line 1695 "mercury_compile.m"
    {
#line 1695 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_31, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_104_104, &top_level__mercury_compile__STATE_VARIABLE_Specs_105_105);
    }
#line 1696 "mercury_compile.m"
    {
#line 1696 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_31, (MR_String) "% done.\n");
    }
#line 1697 "mercury_compile.m"
    {
#line 1697 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_30);
    }
#line 1698 "mercury_compile.m"
    {
#line 1698 "mercury_compile.m"
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(top_level__mercury_compile__RecompInfo_62, top_level__mercury_compile__MQInfo0_51, &top_level__mercury_compile__MQInfo_65);
    }
#line 1700 "mercury_compile.m"
    {
#line 1700 "mercury_compile.m"
      top_level__mercury_compile__EventSet_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1700 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_66, 0) = ((MR_Box) (top_level__mercury_compile__EventSetName_43));
#line 1700 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_66, 1) = ((MR_Box) (top_level__mercury_compile__EventSpecMap_59));
#line 1700 "mercury_compile.m"
    }
#line 1701 "mercury_compile.m"
    {
#line 1701 "mercury_compile.m"
      top_level__mercury_compile__make_hlds_17_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__AugCompUnit_58, top_level__mercury_compile__EventSet_66, top_level__mercury_compile__MQInfo_65, top_level__mercury_compile__TypeEqvMap_60, top_level__mercury_compile__UsedModules_61, top_level__mercury_compile__Verbose_31, top_level__mercury_compile__Stats_30, &top_level__mercury_compile__HLDS0_67, top_level__mercury_compile__QualInfo_22, &top_level__mercury_compile__MakeHLDSFoundInvalidType_68, &top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_69, top_level__mercury_compile__FoundSemanticError_26, top_level__mercury_compile__STATE_VARIABLE_Specs_105_105, top_level__mercury_compile__STATE_VARIABLE_Specs_75);
    }
#line 1705 "mercury_compile.m"
    {
#line 1705 "mercury_compile.m"
      top_level__mercury_compile__maybe_write_definitions_5_p_0(top_level__mercury_compile__Verbose_31, top_level__mercury_compile__Stats_30, top_level__mercury_compile__HLDS0_67);
    }
#line 1708 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefTypes_52 == (MR_Integer) 0);
#line 1708 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1708 "mercury_compile.m"
      {
#line 1709 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefTypeClasses_55 == (MR_Integer) 0);
#line 1708 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1708 "mercury_compile.m"
          {
#line 1710 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__EventSetErrors_45 == (MR_Integer) 0);
#line 1708 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1708 "mercury_compile.m"
              {
#line 1711 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExpandErrors_64 == (MR_Integer) 0);
#line 1708 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1712 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeHLDSFoundInvalidType_68 == (MR_Integer) 0);
#line 1708 "mercury_compile.m"
              }
#line 1708 "mercury_compile.m"
          }
#line 1708 "mercury_compile.m"
      }
#line 1707 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1714 "mercury_compile.m"
      *top_level__mercury_compile__UndefTypes_24 = (MR_Integer) 0;
#line 1707 "mercury_compile.m"
    else
#line 1716 "mercury_compile.m"
      *top_level__mercury_compile__UndefTypes_24 = (MR_Integer) 1;
#line 1719 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefInsts_53 == (MR_Integer) 0);
#line 1719 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1719 "mercury_compile.m"
      {
#line 1720 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefModes_54 == (MR_Integer) 0);
#line 1719 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1721 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_69 == (MR_Integer) 0);
#line 1719 "mercury_compile.m"
      }
#line 1718 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1723 "mercury_compile.m"
      *top_level__mercury_compile__UndefModes_25 = (MR_Integer) 0;
#line 1718 "mercury_compile.m"
    else
#line 1725 "mercury_compile.m"
      *top_level__mercury_compile__UndefModes_25 = (MR_Integer) 1;
#line 1728 "mercury_compile.m"
    {
#line 1728 "mercury_compile.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile__HLDS0_67, (MR_Integer) 1, (MR_String) "initial", top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_72, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_73);
    }
#line 6490 "top_level.mercury_compile.c"
#line 6491 "top_level.mercury_compile.c"
    switch (top_level__mercury_compile__MMCMake_32) {
#line 6493 "top_level.mercury_compile.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 6495 "top_level.mercury_compile.c"
      case (MR_Integer) 0:
#line 1732 "mercury_compile.m"
#line 1732 "mercury_compile.m"
        switch (top_level__mercury_compile__WriteDFile0_19) {
#line 1732 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1732 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1731 "mercury_compile.m"
            {
#line 1731 "mercury_compile.m"
            }
#line 1732 "mercury_compile.m"
            break;
#line 1732 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1733 "mercury_compile.m"
            {
#line 1733 "mercury_compile.m"
              MR_Word top_level__mercury_compile__AllDeps_70;
#line 1733 "mercury_compile.m"
              MR_Word top_level__mercury_compile__OutputMMCMakeDeps_71;

#line 1734 "mercury_compile.m"
              {
#line 1734 "mercury_compile.m"
                hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__HLDS0_67, &top_level__mercury_compile__AllDeps_70);
              }
#line 1735 "mercury_compile.m"
              {
#line 1735 "mercury_compile.m"
                parse_tree__write_deps_file__write_dependency_file_6_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleAndImports0_20, top_level__mercury_compile__AllDeps_70, top_level__mercury_compile__MaybeTransOptDeps_36);
              }
#line 1737 "mercury_compile.m"
              {
#line 1737 "mercury_compile.m"
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_17, (MR_Integer) 118, &top_level__mercury_compile__OutputMMCMakeDeps_71);
              }
#line 1742 "mercury_compile.m"
#line 1742 "mercury_compile.m"
              switch (top_level__mercury_compile__OutputMMCMakeDeps_71) {
#line 1742 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1742 "mercury_compile.m"
                case (MR_Integer) 0:
#line 1743 "mercury_compile.m"
                  {
#line 1743 "mercury_compile.m"
                  }
#line 1742 "mercury_compile.m"
                  break;
#line 1742 "mercury_compile.m"
                case (MR_Integer) 1:
#line 1741 "mercury_compile.m"
                  {
#line 1741 "mercury_compile.m"
                    make__make_write_module_dep_file_4_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleAndImports0_20);
                  }
#line 1742 "mercury_compile.m"
                  break;
#line 1742 "mercury_compile.m"
              }
#line 1733 "mercury_compile.m"
            }
#line 1732 "mercury_compile.m"
            break;
#line 1732 "mercury_compile.m"
        }
#line 6564 "top_level.mercury_compile.c"
        break;
#line 6566 "top_level.mercury_compile.c"
      case (MR_Integer) 1:
#line 1731 "mercury_compile.m"
        {
#line 1731 "mercury_compile.m"
        }
#line 6572 "top_level.mercury_compile.c"
        break;
#line 6574 "top_level.mercury_compile.c"
    }
#line 1749 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (*top_level__mercury_compile__FoundSemanticError_26 == (MR_Integer) 1);
#line 1750 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1750 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodError_38 == (MR_Integer) 1);
#line 1748 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1753 "mercury_compile.m"
      {
#line 1753 "mercury_compile.m"
        hlds__hlds_module__module_info_incr_errors_2_p_0(top_level__mercury_compile__HLDS0_67, top_level__mercury_compile__HLDS1_21);
      }
#line 1748 "mercury_compile.m"
    else
#line 1755 "mercury_compile.m"
      *top_level__mercury_compile__HLDS1_21 = top_level__mercury_compile__HLDS0_67;
#line 1611 "mercury_compile.m"
  }
#line 1603 "mercury_compile.m"
}

#line 1493 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_augmented_module_12_p_0(
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_13,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_14,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_15,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_16,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_17,
#line 1493 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_43,
#line 1493 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44,
#line 1493 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_45,
#line 1493 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_46)
#line 1493 "mercury_compile.m"
{
#line 1501 "mercury_compile.m"
  {
#line 1501 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__WriteDFile_22;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS1_24;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualInfo_25;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestampMap_26;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefTypes_27;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefModes_28;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors1_29;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors2_30;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS20_31;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_49_49;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_50_50;
#line 1501 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52;
#line 1532 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_55_55;

#line 1509 "mercury_compile.m"
#line 1509 "mercury_compile.m"
    switch (MR_tag((MR_Word) top_level__mercury_compile__OpModeAugment_14)) {
#line 1509 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1509 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1509 "mercury_compile.m"
#line 1509 "mercury_compile.m"
        switch (MR_unmkbody(top_level__mercury_compile__OpModeAugment_14)) {
#line 1509 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1509 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1518 "mercury_compile.m"
            top_level__mercury_compile__WriteDFile_22 = (MR_Integer) 0;
#line 1509 "mercury_compile.m"
            break;
#line 1509 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1513 "mercury_compile.m"
            top_level__mercury_compile__WriteDFile_22 = (MR_Integer) 1;
#line 1509 "mercury_compile.m"
            break;
#line 1509 "mercury_compile.m"
          case (MR_Integer) 2:
#line 1509 "mercury_compile.m"
          case (MR_Integer) 3:
#line 1524 "mercury_compile.m"
            top_level__mercury_compile__WriteDFile_22 = (MR_Integer) 1;
#line 1509 "mercury_compile.m"
            break;
#line 1509 "mercury_compile.m"
          case (MR_Integer) 4:
#line 1509 "mercury_compile.m"
          case (MR_Integer) 5:
#line 1508 "mercury_compile.m"
            top_level__mercury_compile__WriteDFile_22 = (MR_Integer) 0;
#line 1509 "mercury_compile.m"
            break;
#line 1509 "mercury_compile.m"
        }
#line 1509 "mercury_compile.m"
        break;
#line 1509 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1513 "mercury_compile.m"
        top_level__mercury_compile__WriteDFile_22 = (MR_Integer) 1;
#line 1509 "mercury_compile.m"
        break;
#line 1509 "mercury_compile.m"
    }
#line 1526 "mercury_compile.m"
    {
#line 1526 "mercury_compile.m"
      top_level__mercury_compile__pre_hlds_pass_16_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__OpModeAugment_14, top_level__mercury_compile__WriteDFile_22, top_level__mercury_compile__ModuleAndImports_15, &top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__QualInfo_25, &top_level__mercury_compile__MaybeTimestampMap_26, &top_level__mercury_compile__UndefTypes_27, &top_level__mercury_compile__UndefModes_28, &top_level__mercury_compile__Errors1_29, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_43, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_49_49, top_level__mercury_compile__STATE_VARIABLE_Specs_0_45, &top_level__mercury_compile__STATE_VARIABLE_Specs_50_50);
    }
#line 1529 "mercury_compile.m"
    {
#line 1529 "mercury_compile.m"
      top_level__mercury_compile_front_end__frontend_pass_13_p_0(top_level__mercury_compile__QualInfo_25, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, top_level__mercury_compile__Errors1_29, &top_level__mercury_compile__Errors2_30, top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__HLDS20_31, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile__STATE_VARIABLE_Specs_50_50, top_level__mercury_compile__STATE_VARIABLE_Specs_46);
    }
#line 1532 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors1_29 == (MR_Integer) 0);
#line 1532 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1532 "mercury_compile.m"
      {
#line 1533 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors2_30 == (MR_Integer) 0);
#line 1532 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1532 "mercury_compile.m"
          {
#line 1534 "mercury_compile.m"
            {
#line 1534 "mercury_compile.m"
              top_level__mercury_compile__V_55_55 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_13, *top_level__mercury_compile__STATE_VARIABLE_Specs_46);
            }
#line 1534 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_55_55 == (MR_Integer) 0);
#line 1532 "mercury_compile.m"
          }
#line 1532 "mercury_compile.m"
      }
#line 1531 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1536 "mercury_compile.m"
      {
#line 1536 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_32;
#line 1536 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_33;
#line 1536 "mercury_compile.m"
        MR_Word top_level__mercury_compile__HLDS21_34;

#line 1536 "mercury_compile.m"
        {
#line 1536 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_13, (MR_Integer) 46, &top_level__mercury_compile__Verbose_32);
        }
#line 1537 "mercury_compile.m"
        {
#line 1537 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_13, (MR_Integer) 56, &top_level__mercury_compile__Stats_33);
        }
#line 1538 "mercury_compile.m"
        {
#line 1538 "mercury_compile.m"
          top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS20_31, &top_level__mercury_compile__HLDS21_34);
        }
#line 1542 "mercury_compile.m"
#line 1542 "mercury_compile.m"
        switch (MR_tag((MR_Word) top_level__mercury_compile__OpModeAugment_14)) {
#line 1542 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1542 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1542 "mercury_compile.m"
#line 1542 "mercury_compile.m"
            switch (MR_unmkbody(top_level__mercury_compile__OpModeAugment_14)) {
#line 1542 "mercury_compile.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1542 "mercury_compile.m"
              case (MR_Integer) 0:
#line 1560 "mercury_compile.m"
                {
#line 1562 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1560 "mercury_compile.m"
                  *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52;
#line 1560 "mercury_compile.m"
                }
#line 1542 "mercury_compile.m"
                break;
#line 1542 "mercury_compile.m"
              case (MR_Integer) 1:
#line 1564 "mercury_compile.m"
                {
#line 1565 "mercury_compile.m"
                  {
#line 1565 "mercury_compile.m"
                    top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(top_level__mercury_compile__HLDS21_34, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44);
                  }
#line 1566 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1564 "mercury_compile.m"
                }
#line 1542 "mercury_compile.m"
                break;
#line 1542 "mercury_compile.m"
              case (MR_Integer) 2:
#line 1568 "mercury_compile.m"
                {
#line 1568 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__HLDS22_40;

#line 1569 "mercury_compile.m"
                  {
#line 1569 "mercury_compile.m"
                    top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_40);
                  }
#line 1571 "mercury_compile.m"
                  {
#line 1571 "mercury_compile.m"
                    top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(top_level__mercury_compile__HLDS22_40, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44);
                  }
#line 1572 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1568 "mercury_compile.m"
                }
#line 1542 "mercury_compile.m"
                break;
#line 1542 "mercury_compile.m"
              case (MR_Integer) 3:
#line 1574 "mercury_compile.m"
                {
#line 1575 "mercury_compile.m"
                  {
#line 1575 "mercury_compile.m"
                    check_hlds__xml_documentation__xml_documentation_3_p_0(top_level__mercury_compile__HLDS21_34);
                  }
#line 1576 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1574 "mercury_compile.m"
                  *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52;
#line 1574 "mercury_compile.m"
                }
#line 1542 "mercury_compile.m"
                break;
#line 1542 "mercury_compile.m"
              case (MR_Integer) 4:
#line 1540 "mercury_compile.m"
                {
#line 1541 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1540 "mercury_compile.m"
                  *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52;
#line 1540 "mercury_compile.m"
                }
#line 1542 "mercury_compile.m"
                break;
#line 1542 "mercury_compile.m"
              case (MR_Integer) 5:
#line 1543 "mercury_compile.m"
                {
#line 1543 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__UnusedArgs_35;

#line 1546 "mercury_compile.m"
                  {
#line 1546 "mercury_compile.m"
                    libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_13, (MR_Integer) 10, &top_level__mercury_compile__UnusedArgs_35);
                  }
#line 1555 "mercury_compile.m"
#line 1555 "mercury_compile.m"
                  switch (top_level__mercury_compile__UnusedArgs_35) {
#line 1555 "mercury_compile.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1555 "mercury_compile.m"
                    case (MR_Integer) 0:
#line 1556 "mercury_compile.m"
                      {
#line 1556 "mercury_compile.m"
                      }
#line 1555 "mercury_compile.m"
                      break;
#line 1555 "mercury_compile.m"
                    case (MR_Integer) 1:
#line 1548 "mercury_compile.m"
                      {
#line 1548 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__NoOptUnusedArgsGlobals_36;
#line 1548 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__HLDS21a_37;
#line 1553 "mercury_compile.m"
                        MR_Word top_level__mercury_compile___UnusedArgsInfos_38;
#line 1553 "mercury_compile.m"
                        MR_Word top_level__mercury_compile___HLDS22_39;

#line 1549 "mercury_compile.m"
                        {
#line 1549 "mercury_compile.m"
                          libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[1]), top_level__mercury_compile__Globals_13, &top_level__mercury_compile__NoOptUnusedArgsGlobals_36);
                        }
#line 1551 "mercury_compile.m"
                        {
#line 1551 "mercury_compile.m"
                          hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile__NoOptUnusedArgsGlobals_36, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS21a_37);
                        }
#line 1553 "mercury_compile.m"
                        {
#line 1553 "mercury_compile.m"
                          top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, &top_level__mercury_compile___UnusedArgsInfos_38, top_level__mercury_compile__HLDS21a_37, &top_level__mercury_compile___HLDS22_39);
                        }
#line 1548 "mercury_compile.m"
                      }
#line 1555 "mercury_compile.m"
                      break;
#line 1555 "mercury_compile.m"
                  }
#line 1558 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1543 "mercury_compile.m"
                  *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52;
#line 1543 "mercury_compile.m"
                }
#line 1542 "mercury_compile.m"
                break;
#line 1542 "mercury_compile.m"
            }
#line 1542 "mercury_compile.m"
            break;
#line 1542 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1578 "mercury_compile.m"
            {
#line 1578 "mercury_compile.m"
              MR_Word top_level__mercury_compile__OpModeCodeGen_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpModeAugment_14, (MR_Integer) 0)));
#line 1578 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HLDS22_76;

#line 1579 "mercury_compile.m"
              {
#line 1579 "mercury_compile.m"
                top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_76);
              }
#line 1581 "mercury_compile.m"
              {
#line 1581 "mercury_compile.m"
                top_level__mercury_compile__after_front_end_passes_12_p_0(top_level__mercury_compile__Globals_13, top_level__mercury_compile__OpModeCodeGen_41, top_level__mercury_compile__NestedSubModules_16, top_level__mercury_compile__FindTimestampFiles_17, top_level__mercury_compile__MaybeTimestampMap_26, top_level__mercury_compile__HLDS22_76, *top_level__mercury_compile__STATE_VARIABLE_Specs_46, top_level__mercury_compile__ExtraObjFiles_18, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44);
              }
#line 1578 "mercury_compile.m"
            }
#line 1542 "mercury_compile.m"
            break;
#line 1542 "mercury_compile.m"
        }
#line 1536 "mercury_compile.m"
      }
#line 1531 "mercury_compile.m"
    else
#line 1588 "mercury_compile.m"
      {
#line 1588 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_42;

#line 1588 "mercury_compile.m"
        {
#line 1588 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_42);
        }
#line 1589 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_42 == (MR_Integer) 0);
#line 1589 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1590 "mercury_compile.m"
          {
#line 1590 "mercury_compile.m"
            {
#line 1590 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1590 "mercury_compile.m"
          }
#line 1589 "mercury_compile.m"
        else
#line 1589 "mercury_compile.m"
          {
#line 1589 "mercury_compile.m"
          }
#line 1594 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1588 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_52_52;
#line 1588 "mercury_compile.m"
      }
#line 1501 "mercury_compile.m"
  }
#line 1493 "mercury_compile.m"
}

#line 1459 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_module_14_p_0(
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_15,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_16,
#line 1459 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_17,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_18,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_19,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_20,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_21,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_22,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_23,
#line 1459 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24,
#line 1459 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_37,
#line 1459 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_38)
#line 1459 "mercury_compile.m"
{
#line 1470 "mercury_compile.m"
  {
#line 1470 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_51_51;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NestedSubModules_30;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports_31;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ImportedSpecs_33;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_34;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_35;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_41_41;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_44_44;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_45_45;
#line 1472 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;
#line 1472 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_29_29;
#line 1481 "mercury_compile.m"
    MR_Word top_level__mercury_compile___AugCompUnit_32;

#line 1471 "mercury_compile.m"
    {
#line 1471 "mercury_compile.m"
      parse_tree__check_raw_comp_unit__check_for_no_exports_6_p_0(top_level__mercury_compile__Globals_15, top_level__mercury_compile__RawCompUnit_23, top_level__mercury_compile__STATE_VARIABLE_Specs_0_37, &top_level__mercury_compile__STATE_VARIABLE_Specs_41_41);
    }
#line 1472 "mercury_compile.m"
    top_level__mercury_compile__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__RawCompUnit_23, (MR_Integer) 0)));
#line 1472 "mercury_compile.m"
    top_level__mercury_compile__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__RawCompUnit_23, (MR_Integer) 1)));
#line 1472 "mercury_compile.m"
    top_level__mercury_compile__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__RawCompUnit_23, (MR_Integer) 2)));
#line 1473 "mercury_compile.m"
    {
#line 1473 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__SourceFileModuleName_18);
    }
#line 1473 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1474 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_30 = top_level__mercury_compile__NestedSubModules0_20;
#line 1473 "mercury_compile.m"
    else
#line 1476 "mercury_compile.m"
      {
#line 1476 "mercury_compile.m"
        {
#line 1476 "mercury_compile.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &top_level__mercury_compile__NestedSubModules_30);
        }
#line 1476 "mercury_compile.m"
      }
#line 1478 "mercury_compile.m"
    {
#line 1478 "mercury_compile.m"
      parse_tree__modules__grab_imported_modules_10_p_0(top_level__mercury_compile__Globals_15, top_level__mercury_compile__SourceFileName_17, top_level__mercury_compile__SourceFileModuleName_18, top_level__mercury_compile__MaybeTimestamp_19, top_level__mercury_compile__NestedSubModules_30, top_level__mercury_compile__RawCompUnit_23, top_level__mercury_compile__HaveReadModuleMaps_21, &top_level__mercury_compile__ModuleAndImports_31);
    }
#line 1481 "mercury_compile.m"
    {
#line 1481 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(top_level__mercury_compile__ModuleAndImports_31, &top_level__mercury_compile___AugCompUnit_32, &top_level__mercury_compile__ImportedSpecs_33, &top_level__mercury_compile__Errors_34);
    }
#line 1483 "mercury_compile.m"
    {
#line 1483 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_44_44 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ImportedSpecs_33, top_level__mercury_compile__STATE_VARIABLE_Specs_41_41);
    }
#line 1484 "mercury_compile.m"
    {
#line 1484 "mercury_compile.m"
      top_level__mercury_compile__V_45_45 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 7107 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1484 "mercury_compile.m"
    {
#line 1484 "mercury_compile.m"
      mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_51_51, top_level__mercury_compile__Errors_34, top_level__mercury_compile__V_45_45, &top_level__mercury_compile__FatalErrors_35);
    }
#line 1485 "mercury_compile.m"
    {
#line 1485 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_51_51, top_level__mercury_compile__FatalErrors_35);
    }
#line 1485 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1486 "mercury_compile.m"
      {
#line 1486 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_36_36;

#line 1486 "mercury_compile.m"
        {
#line 1486 "mercury_compile.m"
          top_level__mercury_compile__process_augmented_module_12_p_0(top_level__mercury_compile__Globals_15, top_level__mercury_compile__OpModeAugment_16, top_level__mercury_compile__ModuleAndImports_31, top_level__mercury_compile__NestedSubModules_30, top_level__mercury_compile__FindTimestampFiles_22, top_level__mercury_compile__ExtraObjFiles_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__V_36_36, top_level__mercury_compile__STATE_VARIABLE_Specs_44_44, top_level__mercury_compile__STATE_VARIABLE_Specs_38);
        }
#line 1486 "mercury_compile.m"
      }
#line 1485 "mercury_compile.m"
    else
#line 1490 "mercury_compile.m"
      {
#line 1490 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1490 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_Specs_38 = top_level__mercury_compile__STATE_VARIABLE_Specs_44_44;
#line 1490 "mercury_compile.m"
      }
#line 1470 "mercury_compile.m"
  }
#line 1459 "mercury_compile.m"
}

#line 1438 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1438 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1438 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_6)
#line 1438 "mercury_compile.m"
{
#line 1440 "mercury_compile.m"
  {
#line 1440 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1440 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1440 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));
#line 1440 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 2)));

#line 1441 "mercury_compile.m"
    {
#line 1441 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(top_level__mercury_compile__ModuleName_3, top_level__mercury_compile__ModuleToLink_6);
    }
#line 1440 "mercury_compile.m"
  }
#line 1438 "mercury_compile.m"
}

#line 1435 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_all_submodules_14_p_0_2(
#line 1435 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1435 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1435 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2)
#line 1435 "mercury_compile.m"
{
#line 1435 "mercury_compile.m"
  {
#line 1435 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1435 "mercury_compile.m"
    MR_String top_level__mercury_compile__conv4_ModuleToLink_6;

#line 1435 "mercury_compile.m"
    {
#line 1435 "mercury_compile.m"
      top_level__mercury_compile__module_to_link_2_p_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv4_ModuleToLink_6);
    }
#line 1435 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv4_ModuleToLink_6));
#line 1435 "mercury_compile.m"
  }
#line 1435 "mercury_compile.m"
}

#line 1429 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_all_submodules_14_p_0_1(
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1429 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1429 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1429 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1429 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1429 "mercury_compile.m"
{
#line 1429 "mercury_compile.m"
  {
#line 1429 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1429 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_ExtraObjFiles_24;
#line 1429 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_38;

#line 1429 "mercury_compile.m"
    {
#line 1429 "mercury_compile.m"
      top_level__mercury_compile__augment_and_process_module_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 10))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv1_ExtraObjFiles_24, ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_38);
    }
#line 1429 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv1_ExtraObjFiles_24));
#line 1429 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_38));
#line 1429 "mercury_compile.m"
  }
#line 1429 "mercury_compile.m"
}

#line 1417 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__augment_and_process_all_submodules_14_p_0(
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_15,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_16,
#line 1417 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_17,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_18,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_19,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_20,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_21,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_22,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnits_23,
#line 1417 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_31,
#line 1417 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_25,
#line 1417 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_26)
#line 1417 "mercury_compile.m"
{
#line 1427 "mercury_compile.m"
  {
#line 1427 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1427 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 1427 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_53_53;
#line 1427 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFileLists_28;
#line 1427 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_34_34;
#line 1427 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_35_35;
#line 1428 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_35_35;
#line 1428 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_STATE_VARIABLE_IO_36_36;
#line 1434 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumWarnings_29;
#line 1434 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumErrors_30;

#line 1429 "mercury_compile.m"
    {
#line 1429 "mercury_compile.m"
      top_level__mercury_compile__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_12[0]));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 1) = ((MR_Box) (top_level__mercury_compile__augment_and_process_all_submodules_14_p_0_1));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 3) = ((MR_Box) (top_level__mercury_compile__Globals_15));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 4) = ((MR_Box) (top_level__mercury_compile__OpModeAugment_16));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 5) = ((MR_Box) (top_level__mercury_compile__FileName_17));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 6) = ((MR_Box) (top_level__mercury_compile__SourceFileModuleName_18));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 7) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_19));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 8) = ((MR_Box) (top_level__mercury_compile__NestedSubModules_20));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 9) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMaps_21));
#line 1429 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_34_34, 10) = ((MR_Box) (top_level__mercury_compile__FindTimestampFiles_22));
#line 1429 "mercury_compile.m"
    }
#line 7330 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 1428 "mercury_compile.m"
    {
#line 1428 "mercury_compile.m"
      mercury__list__map_foldl2_7_p_2(top_level__mercury_compile__TypeCtorInfo_47_47, (MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_1[7], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_34_34, top_level__mercury_compile__RawCompUnits_23, &top_level__mercury_compile__ExtraObjFileLists_28, ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_Specs_0_31)), &top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_35_35, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv2_STATE_VARIABLE_IO_36_36);
    }
#line 1428 "mercury_compile.m"
    top_level__mercury_compile__STATE_VARIABLE_Specs_35_35 = ((MR_Word) top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_35_35);
#line 1434 "mercury_compile.m"
    {
#line 1434 "mercury_compile.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__STATE_VARIABLE_Specs_35_35, top_level__mercury_compile__Globals_15, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_29, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_30);
    }
#line 7344 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1435 "mercury_compile.m"
    {
#line 1435 "mercury_compile.m"
      mercury__list__map_3_p_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__TypeCtorInfo_53_53, (MR_Word) &top_level__mercury_compile_scalar_common_7[2], top_level__mercury_compile__RawCompUnits_23, top_level__mercury_compile__ModulesToLink_25);
    }
#line 1436 "mercury_compile.m"
    {
#line 1436 "mercury_compile.m"
      mercury__list__condense_2_p_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ExtraObjFileLists_28, top_level__mercury_compile__ExtraObjFiles_26);
    }
#line 1427 "mercury_compile.m"
  }
#line 1417 "mercury_compile.m"
}

#line 1263 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_18,
#line 1263 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_19,
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_20,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ParseTreeSrc_22,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 1263 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46,
#line 1263 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47)
#line 1263 "mercury_compile.m"
{
#line 1274 "mercury_compile.m"
  {
#line 1274 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1274 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
#line 1321 "mercury_compile.m"
      {
#line 1321 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 1321 "mercury_compile.m"
        MR_Word top_level__mercury_compile__DefaultModuleName_39;
#line 1321 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_145;
#line 1321 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_153;
#line 1328 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_138;
#line 1328 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ParseTreeSrcPrime_139;
#line 1328 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_140;
#line 1328 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_141;
#line 1331 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_56_56;
#line 1331 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_161_161;
#line 1331 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_162_162;
#line 1331 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_40_40;

#line 1322 "mercury_compile.m"
        {
#line 1322 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 46, &top_level__mercury_compile__Verbose_145);
        }
#line 1323 "mercury_compile.m"
        {
#line 1323 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_145, (MR_String) "% Parsing file \140");
        }
#line 1324 "mercury_compile.m"
        {
#line 1324 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_145, top_level__mercury_compile__FileName_38);
        }
#line 1325 "mercury_compile.m"
        {
#line 1325 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_145, (MR_String) "\' and imported interfaces...\n");
        }
#line 1327 "mercury_compile.m"
        {
#line 1327 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_38, &top_level__mercury_compile__DefaultModuleName_39);
        }
#line 1331 "mercury_compile.m"
        top_level__mercury_compile__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 1331 "mercury_compile.m"
        top_level__mercury_compile__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 1331 "mercury_compile.m"
        top_level__mercury_compile__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 1331 "mercury_compile.m"
        {
#line 1331 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(top_level__mercury_compile__V_56_56, top_level__mercury_compile__DefaultModuleName_39, top_level__mercury_compile__ReturnTimestamp_20, &top_level__mercury_compile__V_40_40, &top_level__mercury_compile__MaybeTimestampPrime_138, &top_level__mercury_compile__ParseTreeSrcPrime_139, &top_level__mercury_compile__SpecsPrime_140, &top_level__mercury_compile__ErrorsPrime_141);
        }
#line 1328 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1335 "mercury_compile.m"
          {
#line 1335 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_57_57;
#line 1335 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc0_135;
#line 1335 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc_136;
#line 1338 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_163_163;
#line 1338 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_164_164;
#line 1341 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_166_166;
#line 1341 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_167_167;
#line 1341 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_165_165;

#line 1335 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 1338 "mercury_compile.m"
            top_level__mercury_compile__HaveReadModuleMapSrc0_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 1338 "mercury_compile.m"
            top_level__mercury_compile__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 1338 "mercury_compile.m"
            top_level__mercury_compile__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 1339 "mercury_compile.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1342 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_18 = top_level__mercury_compile__DefaultModuleName_39;
#line 1339 "mercury_compile.m"
            {
#line 1339 "mercury_compile.m"
              top_level__mercury_compile__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_57_57, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_18));
#line 1339 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_57_57, 1) = NULL;
#line 1339 "mercury_compile.m"
            }
#line 1339 "mercury_compile.m"
            {
#line 1339 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], ((MR_Box) (top_level__mercury_compile__V_57_57)), top_level__mercury_compile__HaveReadModuleMapSrc0_135, &top_level__mercury_compile__HaveReadModuleMapSrc_136);
            }
#line 1341 "mercury_compile.m"
            top_level__mercury_compile__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 1341 "mercury_compile.m"
            top_level__mercury_compile__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 1341 "mercury_compile.m"
            top_level__mercury_compile__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 1341 "mercury_compile.m"
            {
#line 1341 "mercury_compile.m"
              MR_Word base;
#line 1341 "mercury_compile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = base;
#line 1341 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMapSrc_136));
#line 1341 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__V_166_166));
#line 1341 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile__V_167_167));
#line 1341 "mercury_compile.m"
            }
#line 1343 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_138;
#line 1344 "mercury_compile.m"
            *top_level__mercury_compile__ParseTreeSrc_22 = top_level__mercury_compile__ParseTreeSrcPrime_139;
#line 1345 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_140;
#line 1346 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_141;
#line 1335 "mercury_compile.m"
          }
#line 1328 "mercury_compile.m"
        else
#line 1354 "mercury_compile.m"
          {
#line 1354 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart_41;
#line 1354 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_62_62;
#line 1354 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_137;
#line 1372 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_42_42;
#line 1372 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_43_43;

#line 1353 "mercury_compile.m"
            {
#line 1353 "mercury_compile.m"
              top_level__mercury_compile__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile__ReturnTimestamp_20));
#line 1353 "mercury_compile.m"
            }
#line 1351 "mercury_compile.m"
            {
#line 1351 "mercury_compile.m"
              parse_tree__read_modules__read_module_src_from_file_11_p_0(top_level__mercury_compile__Globals0_15, top_level__mercury_compile__FileName_38, (MR_String) "Reading file", (MR_Integer) 1, top_level__mercury_compile__V_62_62, top_level__mercury_compile__MaybeTimestamp_21, top_level__mercury_compile__ParseTreeSrc_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24);
            }
#line 1355 "mercury_compile.m"
            {
#line 1355 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_137);
            }
#line 1360 "mercury_compile.m"
#line 1360 "mercury_compile.m"
            switch (top_level__mercury_compile__DisableSmart_137) {
#line 1360 "mercury_compile.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1360 "mercury_compile.m"
              case (MR_Integer) 0:
#line 1362 "mercury_compile.m"
                *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 1360 "mercury_compile.m"
                break;
#line 1360 "mercury_compile.m"
              case (MR_Integer) 1:
#line 1357 "mercury_compile.m"
                {
#line 1358 "mercury_compile.m"
                  {
#line 1358 "mercury_compile.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[1]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                  }
#line 1357 "mercury_compile.m"
                }
#line 1360 "mercury_compile.m"
                break;
#line 1360 "mercury_compile.m"
            }
#line 1371 "mercury_compile.m"
            {
#line 1371 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 116, &top_level__mercury_compile__Smart_41);
            }
#line 1372 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile__ParseTreeSrc_22, (MR_Integer) 0)));
#line 1372 "mercury_compile.m"
            top_level__mercury_compile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile__ParseTreeSrc_22, (MR_Integer) 1)));
#line 1372 "mercury_compile.m"
            top_level__mercury_compile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile__ParseTreeSrc_22, (MR_Integer) 2)));
#line 1374 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Smart_41 == (MR_Integer) 1);
#line 1374 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1374 "mercury_compile.m"
              {
#line 1375 "mercury_compile.m"
                {
#line 1375 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*top_level__mercury_compile__ModuleName_18, top_level__mercury_compile__DefaultModuleName_39);
                }
#line 1375 "mercury_compile.m"
                top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1374 "mercury_compile.m"
              }
#line 1373 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1380 "mercury_compile.m"
              {
#line 1380 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Warn_44;

#line 1379 "mercury_compile.m"
                {
#line 1379 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 24, &top_level__mercury_compile__Warn_44);
                }
#line 1392 "mercury_compile.m"
#line 1392 "mercury_compile.m"
                switch (top_level__mercury_compile__Warn_44) {
#line 1392 "mercury_compile.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1392 "mercury_compile.m"
                  case (MR_Integer) 0:
#line 1393 "mercury_compile.m"
                    {
#line 1393 "mercury_compile.m"
                    }
#line 1392 "mercury_compile.m"
                    break;
#line 1392 "mercury_compile.m"
                  case (MR_Integer) 1:
#line 1382 "mercury_compile.m"
                    {
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__Pieces_45;
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_72_72;
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_75_75;
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_77_77;
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_78_78;
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_79_79;
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_82_82;
#line 1382 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_83_83;

#line 1385 "mercury_compile.m"
                      {
#line 1385 "mercury_compile.m"
                        top_level__mercury_compile__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "mercury_compile.m"
                        MR_hl_field(MR_mktag(2), top_level__mercury_compile__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile__FileName_38));
#line 1385 "mercury_compile.m"
                      }
#line 1386 "mercury_compile.m"
                      {
#line 1386 "mercury_compile.m"
                        top_level__mercury_compile__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "mercury_compile.m"
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1386 "mercury_compile.m"
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_83_83, 1) = ((MR_Box) (*top_level__mercury_compile__ModuleName_18));
#line 1386 "mercury_compile.m"
                      }
#line 1386 "mercury_compile.m"
                      {
#line 1386 "mercury_compile.m"
                        top_level__mercury_compile__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 0) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 1386 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[20])));
#line 1386 "mercury_compile.m"
                      }
#line 1385 "mercury_compile.m"
                      {
#line 1385 "mercury_compile.m"
                        top_level__mercury_compile__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[34])));
#line 1385 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_79_79, 1) = ((MR_Box) (top_level__mercury_compile__V_82_82));
#line 1385 "mercury_compile.m"
                      }
#line 1385 "mercury_compile.m"
                      {
#line 1385 "mercury_compile.m"
                        top_level__mercury_compile__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_77_77, 0) = ((MR_Box) (top_level__mercury_compile__V_78_78));
#line 1385 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_77_77, 1) = ((MR_Box) (top_level__mercury_compile__V_79_79));
#line 1385 "mercury_compile.m"
                      }
#line 1384 "mercury_compile.m"
                      {
#line 1384 "mercury_compile.m"
                        top_level__mercury_compile__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1384 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 1) = ((MR_Box) (top_level__mercury_compile__V_77_77));
#line 1384 "mercury_compile.m"
                      }
#line 1384 "mercury_compile.m"
                      {
#line 1384 "mercury_compile.m"
                        top_level__mercury_compile__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[33])));
#line 1384 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_72_72, 1) = ((MR_Box) (top_level__mercury_compile__V_75_75));
#line 1384 "mercury_compile.m"
                      }
#line 1383 "mercury_compile.m"
                      {
#line 1383 "mercury_compile.m"
                        top_level__mercury_compile__Pieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[32])));
#line 1383 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_45, 1) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 1383 "mercury_compile.m"
                      }
#line 1390 "mercury_compile.m"
                      {
#line 1390 "mercury_compile.m"
                        parse_tree__error_util__write_error_pieces_plain_4_p_0(*top_level__mercury_compile__Globals_16, top_level__mercury_compile__Pieces_45);
                      }
#line 1391 "mercury_compile.m"
                      {
#line 1391 "mercury_compile.m"
                        libs__compiler_util__record_warning_3_p_0(*top_level__mercury_compile__Globals_16);
                      }
#line 1382 "mercury_compile.m"
                    }
#line 1392 "mercury_compile.m"
                    break;
#line 1392 "mercury_compile.m"
                }
#line 1395 "mercury_compile.m"
                {
#line 1395 "mercury_compile.m"
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
#line 1380 "mercury_compile.m"
              }
#line 1373 "mercury_compile.m"
            else
#line 1373 "mercury_compile.m"
              {
#line 1373 "mercury_compile.m"
              }
#line 1354 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46;
#line 1354 "mercury_compile.m"
          }
#line 1400 "mercury_compile.m"
        {
#line 1400 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 57, &top_level__mercury_compile__Stats_153);
        }
#line 1401 "mercury_compile.m"
        {
#line 1401 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_153);
        }
#line 1402 "mercury_compile.m"
        {
#line 1402 "mercury_compile.m"
          *top_level__mercury_compile__SourceFileName_19 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__FileName_38, (MR_String) ".m");
        }
#line 1321 "mercury_compile.m"
      }
#line 1274 "mercury_compile.m"
    else
#line 1274 "mercury_compile.m"
      {
#line 1274 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_27;
#line 1274 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleNameString_28;
#line 1274 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_37;
#line 1280 "mercury_compile.m"
        MR_String top_level__mercury_compile__SourceFileNamePrime_29;
#line 1280 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_30;
#line 1280 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ParseTreeSrcPrime_31;
#line 1280 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_32;
#line 1280 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_33;
#line 1283 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_120_120;
#line 1283 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_154_154;
#line 1283 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_155_155;

#line 1274 "mercury_compile.m"
        *top_level__mercury_compile__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 1275 "mercury_compile.m"
        {
#line 1275 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 46, &top_level__mercury_compile__Verbose_27);
        }
#line 1276 "mercury_compile.m"
        {
#line 1276 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "% Parsing module \140");
        }
#line 1277 "mercury_compile.m"
        {
#line 1277 "mercury_compile.m"
          top_level__mercury_compile__ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*top_level__mercury_compile__ModuleName_18);
        }
#line 1278 "mercury_compile.m"
        {
#line 1278 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, top_level__mercury_compile__ModuleNameString_28);
        }
#line 1279 "mercury_compile.m"
        {
#line 1279 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "\' and imported interfaces...\n");
        }
#line 1283 "mercury_compile.m"
        top_level__mercury_compile__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 1283 "mercury_compile.m"
        top_level__mercury_compile__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 1283 "mercury_compile.m"
        top_level__mercury_compile__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 1283 "mercury_compile.m"
        {
#line 1283 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(top_level__mercury_compile__V_120_120, *top_level__mercury_compile__ModuleName_18, top_level__mercury_compile__ReturnTimestamp_20, &top_level__mercury_compile__SourceFileNamePrime_29, &top_level__mercury_compile__MaybeTimestampPrime_30, &top_level__mercury_compile__ParseTreeSrcPrime_31, &top_level__mercury_compile__SpecsPrime_32, &top_level__mercury_compile__ErrorsPrime_33);
        }
#line 1280 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1287 "mercury_compile.m"
          {
#line 1287 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc0_34;
#line 1287 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc_35;
#line 1287 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_121_121;
#line 1290 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_156_156;
#line 1290 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_157_157;
#line 1293 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_159_159;
#line 1293 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_160_160;
#line 1293 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_158_158;

#line 1287 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 1290 "mercury_compile.m"
            top_level__mercury_compile__HaveReadModuleMapSrc0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 1290 "mercury_compile.m"
            top_level__mercury_compile__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 1290 "mercury_compile.m"
            top_level__mercury_compile__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 1291 "mercury_compile.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1291 "mercury_compile.m"
            {
#line 1291 "mercury_compile.m"
              top_level__mercury_compile__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_18));
#line 1291 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 1) = NULL;
#line 1291 "mercury_compile.m"
            }
#line 1291 "mercury_compile.m"
            {
#line 1291 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], ((MR_Box) (top_level__mercury_compile__V_121_121)), top_level__mercury_compile__HaveReadModuleMapSrc0_34, &top_level__mercury_compile__HaveReadModuleMapSrc_35);
            }
#line 1293 "mercury_compile.m"
            top_level__mercury_compile__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 1293 "mercury_compile.m"
            top_level__mercury_compile__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 1293 "mercury_compile.m"
            top_level__mercury_compile__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 1293 "mercury_compile.m"
            {
#line 1293 "mercury_compile.m"
              MR_Word base;
#line 1293 "mercury_compile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = base;
#line 1293 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMapSrc_35));
#line 1293 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__V_159_159));
#line 1293 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile__V_160_160));
#line 1293 "mercury_compile.m"
            }
#line 1294 "mercury_compile.m"
            *top_level__mercury_compile__SourceFileName_19 = top_level__mercury_compile__SourceFileNamePrime_29;
#line 1295 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_30;
#line 1296 "mercury_compile.m"
            *top_level__mercury_compile__ParseTreeSrc_22 = top_level__mercury_compile__ParseTreeSrcPrime_31;
#line 1297 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_32;
#line 1298 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_33;
#line 1287 "mercury_compile.m"
          }
#line 1280 "mercury_compile.m"
        else
#line 1307 "mercury_compile.m"
          {
#line 1307 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_36;
#line 1307 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_127_127;

#line 1306 "mercury_compile.m"
            {
#line 1306 "mercury_compile.m"
              top_level__mercury_compile__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_127_127, 0) = ((MR_Box) (top_level__mercury_compile__ReturnTimestamp_20));
#line 1306 "mercury_compile.m"
            }
#line 1303 "mercury_compile.m"
            {
#line 1303 "mercury_compile.m"
              parse_tree__read_modules__read_module_src_13_p_0(top_level__mercury_compile__Globals0_15, (MR_String) "Reading module", (MR_Integer) 1, (MR_Integer) 1, *top_level__mercury_compile__ModuleName_18, top_level__mercury_compile__SourceFileName_19, top_level__mercury_compile__V_127_127, top_level__mercury_compile__MaybeTimestamp_21, top_level__mercury_compile__ParseTreeSrc_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24);
            }
#line 1308 "mercury_compile.m"
            {
#line 1308 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_36);
            }
#line 1313 "mercury_compile.m"
#line 1313 "mercury_compile.m"
            switch (top_level__mercury_compile__DisableSmart_36) {
#line 1313 "mercury_compile.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1313 "mercury_compile.m"
              case (MR_Integer) 0:
#line 1315 "mercury_compile.m"
                *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 1313 "mercury_compile.m"
                break;
#line 1313 "mercury_compile.m"
              case (MR_Integer) 1:
#line 1310 "mercury_compile.m"
                {
#line 1311 "mercury_compile.m"
                  {
#line 1311 "mercury_compile.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[1]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                  }
#line 1310 "mercury_compile.m"
                }
#line 1313 "mercury_compile.m"
                break;
#line 1313 "mercury_compile.m"
            }
#line 1307 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46;
#line 1307 "mercury_compile.m"
          }
#line 1318 "mercury_compile.m"
        {
#line 1318 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 56, &top_level__mercury_compile__Stats_37);
        }
#line 1319 "mercury_compile.m"
        {
#line 1319 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_37);
        }
#line 1274 "mercury_compile.m"
      }
#line 1274 "mercury_compile.m"
  }
#line 1263 "mercury_compile.m"
}

#line 1222 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 1222 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8)
#line 1222 "mercury_compile.m"
{
#line 1227 "mercury_compile.m"
  {
#line 1227 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1227 "mercury_compile.m"
#line 1227 "mercury_compile.m"
    switch (top_level__mercury_compile__Report_6) {
#line 1227 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1227 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1227 "mercury_compile.m"
        {
#line 1227 "mercury_compile.m"
        }
#line 1227 "mercury_compile.m"
        break;
#line 1227 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1229 "mercury_compile.m"
        {
#line 1229 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_19_19;
#line 1229 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_21_21;
#line 1229 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_31_31;

#line 1230 "mercury_compile.m"
          {
#line 1230 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
          }
#line 1231 "mercury_compile.m"
          {
#line 1231 "mercury_compile.m"
            top_level__mercury_compile__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__OptionArgs_7, top_level__mercury_compile__Args_8);
          }
#line 1231 "mercury_compile.m"
          {
#line 1231 "mercury_compile.m"
            top_level__mercury_compile__V_19_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", top_level__mercury_compile__V_21_21);
          }
#line 1231 "mercury_compile.m"
          {
#line 1231 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 1231 "mercury_compile.m"
          {
#line 1231 "mercury_compile.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_4[2], top_level__mercury_compile__V_19_19, &top_level__mercury_compile__V_31_31);
          }
#line 1231 "mercury_compile.m"
          {
#line 1231 "mercury_compile.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile__V_31_31);
          }
#line 1231 "mercury_compile.m"
          {
#line 1231 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 1233 "mercury_compile.m"
          {
#line 1233 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
          }
#line 1229 "mercury_compile.m"
        }
#line 1227 "mercury_compile.m"
        break;
#line 1227 "mercury_compile.m"
    }
#line 1227 "mercury_compile.m"
  }
#line 1222 "mercury_compile.m"
}

#line 1189 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__read_augment_and_process_module_10_p_0_2(
#line 1189 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1189 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1189 "mercury_compile.m"
{
#line 1189 "mercury_compile.m"
  {
#line 1189 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1189 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1189 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1189 "mercury_compile.m"
    {
#line 1189 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1189 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1189 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1189 "mercury_compile.m"
  }
#line 1189 "mercury_compile.m"
}

#line 1178 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_augment_and_process_module_10_p_0_1(
#line 1178 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1178 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1178 "mercury_compile.m"
{
#line 1178 "mercury_compile.m"
  {
#line 1178 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1178 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1178 "mercury_compile.m"
    {
#line 1178 "mercury_compile.m"
      top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__read_augment_and_process_module__1178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1178 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1178 "mercury_compile.m"
  }
#line 1178 "mercury_compile.m"
}

#line 1136 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_augment_and_process_module_10_p_0(
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_11,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeAugment_12,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_14,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_15,
#line 1136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_16,
#line 1136 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_17,
#line 1136 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18)
#line 1136 "mercury_compile.m"
{
#line 1143 "mercury_compile.m"
  {
#line 1143 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_20;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_21;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeAnalysisRegistry_22;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeXmlDocumentation_23;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DirectReport_24;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_26;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 1143 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_28;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamp_29;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ParseTreeSrc_30;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Specs0_31;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_32;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaveReadModuleMaps_33;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_58_58;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_60_60;
#line 1143 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_61_61;
#line 2288 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_9_94;

#line 1144 "mercury_compile.m"
    {
#line 1144 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_11, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_20);
    }
#line 1146 "mercury_compile.m"
    {
#line 1146 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_11, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_21);
    }
#line 1148 "mercury_compile.m"
    {
#line 1148 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_11, (MR_Integer) 89, &top_level__mercury_compile__MakeAnalysisRegistry_22);
    }
#line 1150 "mercury_compile.m"
    {
#line 1150 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_11, (MR_Integer) 90, &top_level__mercury_compile__MakeXmlDocumentation_23);
    }
#line 1153 "mercury_compile.m"
    {
#line 1153 "mercury_compile.m"
      top_level__mercury_compile__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 0) = ((MR_Box) (top_level__mercury_compile__MakeXmlDocumentation_23));
#line 1153 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "mercury_compile.m"
    }
#line 1153 "mercury_compile.m"
    {
#line 1153 "mercury_compile.m"
      top_level__mercury_compile__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 0) = ((MR_Box) (top_level__mercury_compile__MakeAnalysisRegistry_22));
#line 1153 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 1) = ((MR_Box) (top_level__mercury_compile__V_61_61));
#line 1153 "mercury_compile.m"
    }
#line 1152 "mercury_compile.m"
    {
#line 1152 "mercury_compile.m"
      top_level__mercury_compile__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 0) = ((MR_Box) (top_level__mercury_compile__MakeTransOptInt_21));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 1) = ((MR_Box) (top_level__mercury_compile__V_60_60));
#line 1152 "mercury_compile.m"
    }
#line 1152 "mercury_compile.m"
    {
#line 1152 "mercury_compile.m"
      top_level__mercury_compile__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_58_58, 0) = ((MR_Box) (top_level__mercury_compile__MakeOptInt_20));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_58_58, 1) = ((MR_Box) (top_level__mercury_compile__V_59_59));
#line 1152 "mercury_compile.m"
    }
#line 1152 "mercury_compile.m"
    {
#line 1152 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_58_58, &top_level__mercury_compile__DirectReport_24);
    }
#line 1156 "mercury_compile.m"
#line 1156 "mercury_compile.m"
    switch (top_level__mercury_compile__DirectReport_24) {
#line 1156 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1156 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1157 "mercury_compile.m"
        {
#line 1157 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ReportCmdLineArgsDotErr_25;

#line 1158 "mercury_compile.m"
          {
#line 1158 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_11, (MR_Integer) 55, &top_level__mercury_compile__ReportCmdLineArgsDotErr_25);
          }
#line 1160 "mercury_compile.m"
          {
#line 1160 "mercury_compile.m"
            top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgsDotErr_25, top_level__mercury_compile__OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1157 "mercury_compile.m"
        }
#line 1156 "mercury_compile.m"
        break;
#line 1156 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1155 "mercury_compile.m"
        {
#line 1155 "mercury_compile.m"
        }
#line 1156 "mercury_compile.m"
        break;
#line 1156 "mercury_compile.m"
    }
#line 1163 "mercury_compile.m"
    {
#line 1163 "mercury_compile.m"
      top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_11, &top_level__mercury_compile__Globals_26, top_level__mercury_compile__FileOrModule_14, &top_level__mercury_compile__ModuleName_27, &top_level__mercury_compile__FileName_28, (MR_Integer) 0, &top_level__mercury_compile__MaybeTimestamp_29, &top_level__mercury_compile__ParseTreeSrc_30, &top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Errors_32, top_level__mercury_compile__HaveReadModuleMap0_16, &top_level__mercury_compile__HaveReadModuleMaps_33);
    }
#line 8337 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_9_94 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 2289 "mercury_compile.m"
    {
#line 2289 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_9_94, top_level__mercury_compile__Errors_32);
    }
#line 2288 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2288 "mercury_compile.m"
      {
#line 2291 "mercury_compile.m"
        {
#line 2291 "mercury_compile.m"
          MR_Word top_level__mercury_compile__HaltSyntax_90;

#line 2291 "mercury_compile.m"
          {
#line 2291 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_90);
          }
#line 2292 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_90 == (MR_Integer) 1);
#line 2291 "mercury_compile.m"
        }
#line 2293 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 2294 "mercury_compile.m"
          {
#line 2294 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FatalErrors_91;
#line 2294 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_92_92;

#line 2294 "mercury_compile.m"
            {
#line 2294 "mercury_compile.m"
              top_level__mercury_compile__V_92_92 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2294 "mercury_compile.m"
            {
#line 2294 "mercury_compile.m"
              mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_9_94, top_level__mercury_compile__Errors_32, top_level__mercury_compile__V_92_92, &top_level__mercury_compile__FatalErrors_91);
            }
#line 2295 "mercury_compile.m"
            {
#line 2295 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_9_94, top_level__mercury_compile__FatalErrors_91);
            }
#line 2294 "mercury_compile.m"
          }
#line 2288 "mercury_compile.m"
      }
#line 1167 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1170 "mercury_compile.m"
      {
#line 1169 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumWarnings_34;
#line 1169 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumErrors_35;

#line 1169 "mercury_compile.m"
        {
#line 1169 "mercury_compile.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs0_31, top_level__mercury_compile__Globals_26, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_34, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_35);
        }
#line 1171 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1172 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1170 "mercury_compile.m"
      }
#line 1167 "mercury_compile.m"
    else
#line 1175 "mercury_compile.m"
      {
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_82_82;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__RawCompUnits0_36;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs1_37;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__RawCompUnitsToCompile_44;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__RawCompUnitNames_45;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedCompUnitNames_46;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FindTimestampFiles_47;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TraceProf_48;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GlobalsToUse_51;
#line 1175 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_72_72;
#line 1199 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_86_86;

#line 1174 "mercury_compile.m"
        {
#line 1174 "mercury_compile.m"
          parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile__ParseTreeSrc_30, &top_level__mercury_compile__RawCompUnits0_36, top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Specs1_37);
        }
#line 1184 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeModulesToRecompile_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "mercury_compile.m"
          top_level__mercury_compile__RawCompUnitsToCompile_44 = top_level__mercury_compile__RawCompUnits0_36;
#line 1184 "mercury_compile.m"
        else
#line 1177 "mercury_compile.m"
          {
#line 1177 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeModulesToRecompile_15, (MR_Integer) 0)));
#line 1177 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ToRecompile_39;

#line 1178 "mercury_compile.m"
            {
#line 1178 "mercury_compile.m"
              top_level__mercury_compile__ToRecompile_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_39, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_11[0]));
#line 1178 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_39, 1) = ((MR_Box) (top_level__mercury_compile__read_augment_and_process_module_10_p_0_1));
#line 1178 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1178 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_39, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToRecompile_38));
#line 1178 "mercury_compile.m"
            }
#line 1183 "mercury_compile.m"
            {
#line 1183 "mercury_compile.m"
              mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, top_level__mercury_compile__ToRecompile_39, top_level__mercury_compile__RawCompUnits0_36, &top_level__mercury_compile__RawCompUnitsToCompile_44);
            }
#line 1177 "mercury_compile.m"
          }
#line 8476 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_82_82 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1189 "mercury_compile.m"
        {
#line 1189 "mercury_compile.m"
          top_level__mercury_compile__V_72_72 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, top_level__mercury_compile__TypeCtorInfo_82_82, (MR_Word) &top_level__mercury_compile_scalar_common_7[1], top_level__mercury_compile__RawCompUnits0_36);
        }
#line 1188 "mercury_compile.m"
        {
#line 1188 "mercury_compile.m"
          top_level__mercury_compile__RawCompUnitNames_45 = mercury__set__list_to_set_1_f_0(top_level__mercury_compile__TypeCtorInfo_82_82, top_level__mercury_compile__V_72_72);
        }
#line 1190 "mercury_compile.m"
        {
#line 1190 "mercury_compile.m"
          mercury__set__delete_3_p_0(top_level__mercury_compile__TypeCtorInfo_82_82, ((MR_Box) (top_level__mercury_compile__ModuleName_27)), top_level__mercury_compile__RawCompUnitNames_45, &top_level__mercury_compile__NestedCompUnitNames_46);
        }
#line 1192 "mercury_compile.m"
        {
#line 1192 "mercury_compile.m"
          top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_26, &top_level__mercury_compile__FindTimestampFiles_47);
        }
#line 1194 "mercury_compile.m"
        {
#line 1194 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 122, &top_level__mercury_compile__TraceProf_48);
        }
#line 1197 "mercury_compile.m"
        {
#line 1197 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(top_level__mercury_compile__ModuleName_27);
        }
#line 1197 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1197 "mercury_compile.m"
          {
#line 1199 "mercury_compile.m"
            {
#line 1199 "mercury_compile.m"
              top_level__mercury_compile__V_86_86 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
            }
#line 1199 "mercury_compile.m"
            {
#line 1199 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__V_86_86);
            }
#line 1199 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1200 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TraceProf_48 == (MR_Integer) 1);
#line 1198 "mercury_compile.m"
            top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1197 "mercury_compile.m"
          }
#line 1196 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1209 "mercury_compile.m"
          {
#line 1209 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GlobalsNoTrace0_49;

#line 1208 "mercury_compile.m"
            {
#line 1208 "mercury_compile.m"
              libs__globals__set_option_4_p_0((MR_Integer) 264, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[1]), top_level__mercury_compile__Globals_26, &top_level__mercury_compile__GlobalsNoTrace0_49);
            }
#line 1210 "mercury_compile.m"
            {
#line 1210 "mercury_compile.m"
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile__GlobalsNoTrace0_49, &top_level__mercury_compile__GlobalsToUse_51);
            }
#line 1209 "mercury_compile.m"
          }
#line 1196 "mercury_compile.m"
        else
#line 1214 "mercury_compile.m"
          top_level__mercury_compile__GlobalsToUse_51 = top_level__mercury_compile__Globals_26;
#line 1216 "mercury_compile.m"
        {
#line 1216 "mercury_compile.m"
          top_level__mercury_compile__augment_and_process_all_submodules_14_p_0(top_level__mercury_compile__GlobalsToUse_51, top_level__mercury_compile__OpModeAugment_12, top_level__mercury_compile__FileName_28, top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__MaybeTimestamp_29, top_level__mercury_compile__NestedCompUnitNames_46, top_level__mercury_compile__HaveReadModuleMaps_33, top_level__mercury_compile__FindTimestampFiles_47, top_level__mercury_compile__RawCompUnitsToCompile_44, top_level__mercury_compile__Specs1_37, top_level__mercury_compile__ModulesToLink_17, top_level__mercury_compile__ExtraObjFiles_18);
        }
#line 1175 "mercury_compile.m"
      }
#line 1143 "mercury_compile.m"
  }
#line 1136 "mercury_compile.m"
}

#line 1124 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1124 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1124 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1124 "mercury_compile.m"
{
#line 1132 "mercury_compile.m"
  {
#line 1132 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1132 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_8, (MR_Integer) 1)));
#line 1132 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15;

#line 1132 "mercury_compile.m"
    {
#line 1132 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__ProcessModule_8), ((MR_Box) (top_level__mercury_compile__FileName_9)), ((MR_Box) (top_level__mercury_compile__ModuleName_10)), ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_11)), ((MR_Box) (top_level__mercury_compile__RawCompUnit_12)), ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15);
    }
#line 1132 "mercury_compile.m"
  }
#line 1124 "mercury_compile.m"
}

#line 1115 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1115 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1115 "mercury_compile.m"
{
#line 1121 "mercury_compile.m"
  {
#line 1121 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1121 "mercury_compile.m"
    {
#line 1121 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_private_interface_file_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__RawCompUnit_12, top_level__mercury_compile__MaybeTimestamp_11);
    }
#line 1121 "mercury_compile.m"
  }
#line 1115 "mercury_compile.m"
}

#line 1109 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1109 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1109 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1109 "mercury_compile.m"
{
#line 1113 "mercury_compile.m"
  {
#line 1113 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1113 "mercury_compile.m"
    {
#line 1113 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__RawCompUnit_12);
    }
#line 1113 "mercury_compile.m"
  }
#line 1109 "mercury_compile.m"
}

#line 1101 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1101 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1101 "mercury_compile.m"
{
#line 1106 "mercury_compile.m"
  {
#line 1106 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1106 "mercury_compile.m"
    {
#line 1106 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_interface_file_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__RawCompUnit_12, top_level__mercury_compile__MaybeTimestamp_11);
    }
#line 1106 "mercury_compile.m"
  }
#line 1101 "mercury_compile.m"
}

#line 1090 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1090 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1090 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1090 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1090 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10)
#line 1090 "mercury_compile.m"
{
#line 1094 "mercury_compile.m"
  {
#line 1094 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1094 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1095 "mercury_compile.m"
    {
#line 1095 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TimestampSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1097 "mercury_compile.m"
    {
#line 1097 "mercury_compile.m"
      MR_Word base;
#line 1097 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "mercury_compile.m"
      *top_level__mercury_compile__TimestampFiles_10 = base;
#line 1097 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1097 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "mercury_compile.m"
    }
#line 1094 "mercury_compile.m"
  }
#line 1090 "mercury_compile.m"
}

#line 1088 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1088 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1088 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1088 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1088 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1088 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1088 "mercury_compile.m"
{
#line 1088 "mercury_compile.m"
  {
#line 1088 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1088 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TimestampFiles_10;

#line 1088 "mercury_compile.m"
    {
#line 1088 "mercury_compile.m"
      top_level__mercury_compile__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TimestampFiles_10);
    }
#line 1088 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TimestampFiles_10));
#line 1088 "mercury_compile.m"
  }
#line 1088 "mercury_compile.m"
}

#line 1070 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1070 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1070 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4)
#line 1070 "mercury_compile.m"
{
#line 1073 "mercury_compile.m"
  {
#line 1073 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1073 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1073 "mercury_compile.m"
    MR_String top_level__mercury_compile__TimestampSuffix_6;

#line 1074 "mercury_compile.m"
    {
#line 1074 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1078 "mercury_compile.m"
    top_level__mercury_compile__TimestampSuffix_6 = ((&top_level__mercury_compile_vector_common_10[4 + top_level__mercury_compile__CompilationTarget_5]))->top_level__mercury_compile__vector_common_type_10_0__vct_10_f_0;
#line 1088 "mercury_compile.m"
    {
#line 1088 "mercury_compile.m"
      MR_Word base;
#line 1088 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "mercury_compile.m"
      *top_level__mercury_compile__FindTimestampFiles_4 = base;
#line 1088 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1088 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_timestamp_files_2_p_0_1));
#line 1088 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1088 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1088 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TimestampSuffix_6));
#line 1088 "mercury_compile.m"
    }
#line 1073 "mercury_compile.m"
  }
#line 1070 "mercury_compile.m"
}

#line 1059 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1059 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1059 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1059 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1059 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10)
#line 1059 "mercury_compile.m"
{
#line 1064 "mercury_compile.m"
  {
#line 1064 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1064 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1066 "mercury_compile.m"
    {
#line 1066 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TargetSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1068 "mercury_compile.m"
    {
#line 1068 "mercury_compile.m"
      MR_Word base;
#line 1068 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "mercury_compile.m"
      *top_level__mercury_compile__TargetFiles_10 = base;
#line 1068 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1068 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "mercury_compile.m"
    }
#line 1064 "mercury_compile.m"
  }
#line 1059 "mercury_compile.m"
}

#line 1057 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1057 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1057 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1057 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1057 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1057 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1057 "mercury_compile.m"
{
#line 1057 "mercury_compile.m"
  {
#line 1057 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1057 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TargetFiles_10;

#line 1057 "mercury_compile.m"
    {
#line 1057 "mercury_compile.m"
      top_level__mercury_compile__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TargetFiles_10);
    }
#line 1057 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TargetFiles_10));
#line 1057 "mercury_compile.m"
  }
#line 1057 "mercury_compile.m"
}

#line 1047 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1047 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1047 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4)
#line 1047 "mercury_compile.m"
{
#line 1050 "mercury_compile.m"
  {
#line 1050 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1050 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1050 "mercury_compile.m"
    MR_String top_level__mercury_compile__TargetSuffix_6;

#line 1051 "mercury_compile.m"
    {
#line 1051 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1053 "mercury_compile.m"
    top_level__mercury_compile__TargetSuffix_6 = ((&top_level__mercury_compile_vector_common_10[0 + top_level__mercury_compile__CompilationTarget_5]))->top_level__mercury_compile__vector_common_type_10_0__vct_10_f_0;
#line 1057 "mercury_compile.m"
    {
#line 1057 "mercury_compile.m"
      MR_Word base;
#line 1057 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "mercury_compile.m"
      *top_level__mercury_compile__FindTargetFiles_4 = base;
#line 1057 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1057 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1));
#line 1057 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1057 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1057 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TargetSuffix_6));
#line 1057 "mercury_compile.m"
    }
#line 1050 "mercury_compile.m"
  }
#line 1047 "mercury_compile.m"
}

#line 978 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_6(
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 978 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 978 "mercury_compile.m"
{
#line 978 "mercury_compile.m"
  {
#line 978 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 978 "mercury_compile.m"
    {
#line 978 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 978 "mercury_compile.m"
  }
#line 978 "mercury_compile.m"
}

#line 953 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_5(
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 953 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 953 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 953 "mercury_compile.m"
{
#line 953 "mercury_compile.m"
  {
#line 953 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 953 "mercury_compile.m"
    {
#line 953 "mercury_compile.m"
      top_level__mercury_compile__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
    }
#line 953 "mercury_compile.m"
  }
#line 953 "mercury_compile.m"
}

#line 978 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_4(
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 978 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 978 "mercury_compile.m"
{
#line 978 "mercury_compile.m"
  {
#line 978 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 978 "mercury_compile.m"
    {
#line 978 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 978 "mercury_compile.m"
  }
#line 978 "mercury_compile.m"
}

#line 946 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_3(
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 946 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 946 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 946 "mercury_compile.m"
{
#line 946 "mercury_compile.m"
  {
#line 946 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 946 "mercury_compile.m"
    {
#line 946 "mercury_compile.m"
      top_level__mercury_compile__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
    }
#line 946 "mercury_compile.m"
  }
#line 946 "mercury_compile.m"
}

#line 978 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_2(
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 978 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 978 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 978 "mercury_compile.m"
{
#line 978 "mercury_compile.m"
  {
#line 978 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 978 "mercury_compile.m"
    {
#line 978 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 978 "mercury_compile.m"
  }
#line 978 "mercury_compile.m"
}

#line 957 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0_1(
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 957 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 957 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 957 "mercury_compile.m"
{
#line 957 "mercury_compile.m"
  {
#line 957 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 957 "mercury_compile.m"
    {
#line 957 "mercury_compile.m"
      top_level__mercury_compile__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
    }
#line 957 "mercury_compile.m"
  }
#line 957 "mercury_compile.m"
}

#line 897 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_2_8_p_0(
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_9,
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_10,
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 897 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 897 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_13,
#line 897 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_14)
#line 897 "mercury_compile.m"
{
#line 904 "mercury_compile.m"
  {
#line 904 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 904 "mercury_compile.m"
#line 904 "mercury_compile.m"
    switch (MR_tag((MR_Word) top_level__mercury_compile__OpModeArgs_10)) {
#line 904 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 904 "mercury_compile.m"
      case (MR_Integer) 0:
#line 904 "mercury_compile.m"
#line 904 "mercury_compile.m"
        switch (MR_unmkbody(top_level__mercury_compile__OpModeArgs_10)) {
#line 904 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "mercury_compile.m"
          case (MR_Integer) 0:
#line 904 "mercury_compile.m"
            {
#line 908 "mercury_compile.m"
              if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
#line 906 "mercury_compile.m"
                {
#line 906 "mercury_compile.m"
                  MR_String top_level__mercury_compile__FileName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0)));

#line 907 "mercury_compile.m"
                  {
#line 907 "mercury_compile.m"
                    parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(top_level__mercury_compile__Globals0_9, top_level__mercury_compile__FileName_16);
                  }
#line 906 "mercury_compile.m"
                }
#line 908 "mercury_compile.m"
              else
#line 909 "mercury_compile.m"
                {
#line 909 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0)));

#line 910 "mercury_compile.m"
                  {
#line 910 "mercury_compile.m"
                    parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(top_level__mercury_compile__Globals0_9, top_level__mercury_compile__ModuleName_17);
                  }
#line 909 "mercury_compile.m"
                }
#line 912 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 913 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "mercury_compile.m"
            }
#line 904 "mercury_compile.m"
            break;
#line 904 "mercury_compile.m"
          case (MR_Integer) 1:
#line 915 "mercury_compile.m"
            {
#line 919 "mercury_compile.m"
              if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
#line 917 "mercury_compile.m"
                {
#line 917 "mercury_compile.m"
                  MR_String top_level__mercury_compile__FileName_83 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0)));

#line 918 "mercury_compile.m"
                  {
#line 918 "mercury_compile.m"
                    parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(top_level__mercury_compile__Globals0_9, top_level__mercury_compile__FileName_83);
                  }
#line 917 "mercury_compile.m"
                }
#line 919 "mercury_compile.m"
              else
#line 920 "mercury_compile.m"
                {
#line 920 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__ModuleName_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0)));

#line 921 "mercury_compile.m"
                  {
#line 921 "mercury_compile.m"
                    parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(top_level__mercury_compile__Globals0_9, top_level__mercury_compile__ModuleName_84);
                  }
#line 920 "mercury_compile.m"
                }
#line 923 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 915 "mercury_compile.m"
            }
#line 904 "mercury_compile.m"
            break;
#line 904 "mercury_compile.m"
          case (MR_Integer) 2:
#line 962 "mercury_compile.m"
            {
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__GenerateVersionNumbers_30;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ProcessModule_186;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ReturnTimestamp_187;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MaybeTimestamp_188;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Specs0_189;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_191_191;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_192_192;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_193_193;
#line 962 "mercury_compile.m"
              MR_String top_level__mercury_compile__FileName_203;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ModuleName_204;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HaveReadModuleMaps0_205;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Globals_206;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ParseTreeSrc_207;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Errors_208;
#line 965 "mercury_compile.m"
              MR_Word top_level__mercury_compile___HaveReadModuleMaps_160;

#line 946 "mercury_compile.m"
              {
#line 946 "mercury_compile.m"
                top_level__mercury_compile__ProcessModule_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 946 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_186, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 946 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_186, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_2_8_p_0_3));
#line 946 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_186, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 946 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_186, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_9));
#line 946 "mercury_compile.m"
              }
#line 947 "mercury_compile.m"
              {
#line 947 "mercury_compile.m"
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_9, (MR_Integer) 117, &top_level__mercury_compile__GenerateVersionNumbers_30);
              }
#line 949 "mercury_compile.m"
              {
#line 949 "mercury_compile.m"
                top_level__mercury_compile__ReturnTimestamp_187 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_30);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_191_191 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_192_192 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_193_193 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__HaveReadModuleMaps0_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_205, 0) = ((MR_Box) (top_level__mercury_compile__V_191_191));
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_205, 1) = ((MR_Box) (top_level__mercury_compile__V_192_192));
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_205, 2) = ((MR_Box) (top_level__mercury_compile__V_193_193));
#line 964 "mercury_compile.m"
              }
#line 965 "mercury_compile.m"
              {
#line 965 "mercury_compile.m"
                top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_9, &top_level__mercury_compile__Globals_206, top_level__mercury_compile__FileOrModule_12, &top_level__mercury_compile__ModuleName_204, &top_level__mercury_compile__FileName_203, top_level__mercury_compile__ReturnTimestamp_187, &top_level__mercury_compile__MaybeTimestamp_188, &top_level__mercury_compile__ParseTreeSrc_207, &top_level__mercury_compile__Specs0_189, &top_level__mercury_compile__Errors_208, top_level__mercury_compile__HaveReadModuleMaps0_205, &top_level__mercury_compile___HaveReadModuleMaps_160);
              }
#line 969 "mercury_compile.m"
              {
#line 969 "mercury_compile.m"
                top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__Globals_206, top_level__mercury_compile__Errors_208);
              }
#line 969 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 969 "mercury_compile.m"
                {
#line 969 "mercury_compile.m"
                }
#line 969 "mercury_compile.m"
              else
#line 973 "mercury_compile.m"
                {
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__RawCompUnits_166;
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_170_170;
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__Specs_173;
#line 975 "mercury_compile.m"
                  MR_Integer top_level__mercury_compile___NumWarnings_161;
#line 975 "mercury_compile.m"
                  MR_Integer top_level__mercury_compile___NumErrors_162;
#line 977 "mercury_compile.m"
                  MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_44;

#line 972 "mercury_compile.m"
                  {
#line 972 "mercury_compile.m"
                    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile__ParseTreeSrc_207, &top_level__mercury_compile__RawCompUnits_166, top_level__mercury_compile__Specs0_189, &top_level__mercury_compile__Specs_173);
                  }
#line 975 "mercury_compile.m"
                  {
#line 975 "mercury_compile.m"
                    parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_173, top_level__mercury_compile__Globals_206, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_161, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_162);
                  }
#line 978 "mercury_compile.m"
                  {
#line 978 "mercury_compile.m"
                    top_level__mercury_compile__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_170_170, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[1]));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_170_170, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_2_8_p_0_4));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_170_170, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_170_170, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_186));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_170_170, 4) = ((MR_Box) (top_level__mercury_compile__FileName_203));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_170_170, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_204));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_170_170, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_188));
#line 978 "mercury_compile.m"
                  }
#line 977 "mercury_compile.m"
                  {
#line 977 "mercury_compile.m"
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_170_170, top_level__mercury_compile__RawCompUnits_166, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_44);
                  }
#line 973 "mercury_compile.m"
                }
#line 982 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 962 "mercury_compile.m"
            }
#line 904 "mercury_compile.m"
            break;
#line 904 "mercury_compile.m"
          case (MR_Integer) 3:
#line 962 "mercury_compile.m"
            {
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ProcessModule_243;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MaybeTimestamp_245;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Specs0_246;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_248_248;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_249_249;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_250_250;
#line 962 "mercury_compile.m"
              MR_String top_level__mercury_compile__FileName_260;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ModuleName_261;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HaveReadModuleMaps0_262;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Globals_263;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ParseTreeSrc_264;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Errors_265;
#line 965 "mercury_compile.m"
              MR_Word top_level__mercury_compile___HaveReadModuleMaps_217;

#line 953 "mercury_compile.m"
              {
#line 953 "mercury_compile.m"
                top_level__mercury_compile__ProcessModule_243 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 953 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_243, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 953 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_243, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_2_8_p_0_5));
#line 953 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_243, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 953 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_243, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_9));
#line 953 "mercury_compile.m"
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_248_248 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_249_249 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_250_250 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__HaveReadModuleMaps0_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_262, 0) = ((MR_Box) (top_level__mercury_compile__V_248_248));
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_262, 1) = ((MR_Box) (top_level__mercury_compile__V_249_249));
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_262, 2) = ((MR_Box) (top_level__mercury_compile__V_250_250));
#line 964 "mercury_compile.m"
              }
#line 965 "mercury_compile.m"
              {
#line 965 "mercury_compile.m"
                top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_9, &top_level__mercury_compile__Globals_263, top_level__mercury_compile__FileOrModule_12, &top_level__mercury_compile__ModuleName_261, &top_level__mercury_compile__FileName_260, (MR_Integer) 1, &top_level__mercury_compile__MaybeTimestamp_245, &top_level__mercury_compile__ParseTreeSrc_264, &top_level__mercury_compile__Specs0_246, &top_level__mercury_compile__Errors_265, top_level__mercury_compile__HaveReadModuleMaps0_262, &top_level__mercury_compile___HaveReadModuleMaps_217);
              }
#line 969 "mercury_compile.m"
              {
#line 969 "mercury_compile.m"
                top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__Globals_263, top_level__mercury_compile__Errors_265);
              }
#line 969 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 969 "mercury_compile.m"
                {
#line 969 "mercury_compile.m"
                }
#line 969 "mercury_compile.m"
              else
#line 973 "mercury_compile.m"
                {
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__RawCompUnits_223;
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_227_227;
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__Specs_230;
#line 975 "mercury_compile.m"
                  MR_Integer top_level__mercury_compile___NumWarnings_218;
#line 975 "mercury_compile.m"
                  MR_Integer top_level__mercury_compile___NumErrors_219;
#line 977 "mercury_compile.m"
                  MR_Box top_level__mercury_compile__conv2_STATE_VARIABLE_IO_44;

#line 972 "mercury_compile.m"
                  {
#line 972 "mercury_compile.m"
                    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile__ParseTreeSrc_264, &top_level__mercury_compile__RawCompUnits_223, top_level__mercury_compile__Specs0_246, &top_level__mercury_compile__Specs_230);
                  }
#line 975 "mercury_compile.m"
                  {
#line 975 "mercury_compile.m"
                    parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_230, top_level__mercury_compile__Globals_263, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_218, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_219);
                  }
#line 978 "mercury_compile.m"
                  {
#line 978 "mercury_compile.m"
                    top_level__mercury_compile__V_227_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_227_227, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[1]));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_227_227, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_2_8_p_0_6));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_227_227, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_227_227, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_243));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_227_227, 4) = ((MR_Box) (top_level__mercury_compile__FileName_260));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_227_227, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_261));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_227_227, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_245));
#line 978 "mercury_compile.m"
                  }
#line 977 "mercury_compile.m"
                  {
#line 977 "mercury_compile.m"
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_227_227, top_level__mercury_compile__RawCompUnits_223, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv2_STATE_VARIABLE_IO_44);
                  }
#line 973 "mercury_compile.m"
                }
#line 982 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 962 "mercury_compile.m"
            }
#line 904 "mercury_compile.m"
            break;
#line 904 "mercury_compile.m"
          case (MR_Integer) 4:
#line 962 "mercury_compile.m"
            {
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ProcessModule_29;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ReturnTimestamp_31;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MaybeTimestamp_32;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Specs0_33;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_58_58;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_59_59;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_60_60;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__GenerateVersionNumbers_90;
#line 962 "mercury_compile.m"
              MR_String top_level__mercury_compile__FileName_100;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ModuleName_101;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HaveReadModuleMaps0_102;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Globals_103;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ParseTreeSrc_104;
#line 962 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Errors_106;
#line 965 "mercury_compile.m"
              MR_Word top_level__mercury_compile___HaveReadModuleMaps_91;

#line 957 "mercury_compile.m"
              {
#line 957 "mercury_compile.m"
                top_level__mercury_compile__ProcessModule_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 957 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_29, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 957 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_29, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_2_8_p_0_1));
#line 957 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 957 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_29, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_9));
#line 957 "mercury_compile.m"
              }
#line 958 "mercury_compile.m"
              {
#line 958 "mercury_compile.m"
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_9, (MR_Integer) 117, &top_level__mercury_compile__GenerateVersionNumbers_90);
              }
#line 960 "mercury_compile.m"
              {
#line 960 "mercury_compile.m"
                top_level__mercury_compile__ReturnTimestamp_31 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_90);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_58_58 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_59_59 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__V_60_60 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
              }
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                top_level__mercury_compile__HaveReadModuleMaps0_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_102, 0) = ((MR_Box) (top_level__mercury_compile__V_58_58));
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_102, 1) = ((MR_Box) (top_level__mercury_compile__V_59_59));
#line 964 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_102, 2) = ((MR_Box) (top_level__mercury_compile__V_60_60));
#line 964 "mercury_compile.m"
              }
#line 965 "mercury_compile.m"
              {
#line 965 "mercury_compile.m"
                top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_9, &top_level__mercury_compile__Globals_103, top_level__mercury_compile__FileOrModule_12, &top_level__mercury_compile__ModuleName_101, &top_level__mercury_compile__FileName_100, top_level__mercury_compile__ReturnTimestamp_31, &top_level__mercury_compile__MaybeTimestamp_32, &top_level__mercury_compile__ParseTreeSrc_104, &top_level__mercury_compile__Specs0_33, &top_level__mercury_compile__Errors_106, top_level__mercury_compile__HaveReadModuleMaps0_102, &top_level__mercury_compile___HaveReadModuleMaps_91);
              }
#line 969 "mercury_compile.m"
              {
#line 969 "mercury_compile.m"
                top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__Globals_103, top_level__mercury_compile__Errors_106);
              }
#line 969 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 969 "mercury_compile.m"
                {
#line 969 "mercury_compile.m"
                }
#line 969 "mercury_compile.m"
              else
#line 973 "mercury_compile.m"
                {
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__RawCompUnits_34;
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_65_65;
#line 973 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__Specs_94;
#line 975 "mercury_compile.m"
                  MR_Integer top_level__mercury_compile___NumWarnings_92;
#line 975 "mercury_compile.m"
                  MR_Integer top_level__mercury_compile___NumErrors_93;
#line 977 "mercury_compile.m"
                  MR_Box top_level__mercury_compile__conv0_STATE_VARIABLE_IO_44;

#line 972 "mercury_compile.m"
                  {
#line 972 "mercury_compile.m"
                    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile__ParseTreeSrc_104, &top_level__mercury_compile__RawCompUnits_34, top_level__mercury_compile__Specs0_33, &top_level__mercury_compile__Specs_94);
                  }
#line 975 "mercury_compile.m"
                  {
#line 975 "mercury_compile.m"
                    parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_94, top_level__mercury_compile__Globals_103, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_92, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_93);
                  }
#line 978 "mercury_compile.m"
                  {
#line 978 "mercury_compile.m"
                    top_level__mercury_compile__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_65_65, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[1]));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_65_65, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_2_8_p_0_2));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_65_65, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_29));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_65_65, 4) = ((MR_Box) (top_level__mercury_compile__FileName_100));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_65_65, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_101));
#line 978 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_65_65, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_32));
#line 978 "mercury_compile.m"
                  }
#line 977 "mercury_compile.m"
                  {
#line 977 "mercury_compile.m"
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_65_65, top_level__mercury_compile__RawCompUnits_34, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv0_STATE_VARIABLE_IO_44);
                  }
#line 973 "mercury_compile.m"
                }
#line 982 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 962 "mercury_compile.m"
            }
#line 904 "mercury_compile.m"
            break;
#line 904 "mercury_compile.m"
          case (MR_Integer) 5:
#line 926 "mercury_compile.m"
            {
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HaveReadModuleMaps0_18;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Globals_19;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ParseTreeSrc_22;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Specs_23;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Errors_24;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_67_67;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_68_68;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_69_69;
#line 926 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ModuleName_89;
#line 929 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_20_20;
#line 929 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_21_21;
#line 929 "mercury_compile.m"
              MR_Word top_level__mercury_compile___HaveReadModuleMaps_25;
#line 933 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumWarnings_26;
#line 933 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumErrors_27;

#line 928 "mercury_compile.m"
              {
#line 928 "mercury_compile.m"
                top_level__mercury_compile__V_67_67 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
              }
#line 928 "mercury_compile.m"
              {
#line 928 "mercury_compile.m"
                top_level__mercury_compile__V_68_68 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
              }
#line 928 "mercury_compile.m"
              {
#line 928 "mercury_compile.m"
                top_level__mercury_compile__V_69_69 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
              }
#line 928 "mercury_compile.m"
              {
#line 928 "mercury_compile.m"
                top_level__mercury_compile__HaveReadModuleMaps0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 928 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_18, 0) = ((MR_Box) (top_level__mercury_compile__V_67_67));
#line 928 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_18, 1) = ((MR_Box) (top_level__mercury_compile__V_68_68));
#line 928 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_18, 2) = ((MR_Box) (top_level__mercury_compile__V_69_69));
#line 928 "mercury_compile.m"
              }
#line 929 "mercury_compile.m"
              {
#line 929 "mercury_compile.m"
                top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_9, &top_level__mercury_compile__Globals_19, top_level__mercury_compile__FileOrModule_12, &top_level__mercury_compile__ModuleName_89, &top_level__mercury_compile__V_20_20, (MR_Integer) 1, &top_level__mercury_compile__V_21_21, &top_level__mercury_compile__ParseTreeSrc_22, &top_level__mercury_compile__Specs_23, &top_level__mercury_compile__Errors_24, top_level__mercury_compile__HaveReadModuleMaps0_18, &top_level__mercury_compile___HaveReadModuleMaps_25);
              }
#line 933 "mercury_compile.m"
              {
#line 933 "mercury_compile.m"
                parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_23, top_level__mercury_compile__Globals_19, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_26, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_27);
              }
#line 934 "mercury_compile.m"
              {
#line 934 "mercury_compile.m"
                top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__Errors_24);
              }
#line 934 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 934 "mercury_compile.m"
                {
#line 934 "mercury_compile.m"
                }
#line 934 "mercury_compile.m"
              else
#line 938 "mercury_compile.m"
                {
#line 938 "mercury_compile.m"
                  MR_String top_level__mercury_compile__OutputFileName_28;

#line 937 "mercury_compile.m"
                  {
#line 937 "mercury_compile.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__ModuleName_89, (MR_String) ".ugly", (MR_Integer) 0, &top_level__mercury_compile__OutputFileName_28);
                  }
#line 939 "mercury_compile.m"
                  {
#line 939 "mercury_compile.m"
                    parse_tree__parse_tree_out__convert_to_mercury_src_5_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__OutputFileName_28, top_level__mercury_compile__ParseTreeSrc_22);
                  }
#line 938 "mercury_compile.m"
                }
#line 941 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 926 "mercury_compile.m"
            }
#line 904 "mercury_compile.m"
            break;
#line 904 "mercury_compile.m"
        }
#line 904 "mercury_compile.m"
        break;
#line 904 "mercury_compile.m"
      case (MR_Integer) 1:
#line 985 "mercury_compile.m"
        {
#line 985 "mercury_compile.m"
          MR_Word top_level__mercury_compile__OpModeAugment_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpModeArgs_10, (MR_Integer) 0)));
#line 985 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Smart0_36;
#line 985 "mercury_compile.m"
          MR_Word top_level__mercury_compile__DisableSmart_37;
#line 985 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Smart_38;
#line 985 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModulesToRecompile_41;
#line 985 "mercury_compile.m"
          MR_Word top_level__mercury_compile__HaveReadModuleMaps_42;
#line 985 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Globals_118;
#line 1023 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_54_54;

#line 986 "mercury_compile.m"
          {
#line 986 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_9, (MR_Integer) 116, &top_level__mercury_compile__Smart0_36);
          }
#line 987 "mercury_compile.m"
          {
#line 987 "mercury_compile.m"
            libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_37);
          }
#line 993 "mercury_compile.m"
#line 993 "mercury_compile.m"
          switch (top_level__mercury_compile__DisableSmart_37) {
#line 993 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 993 "mercury_compile.m"
            case (MR_Integer) 0:
#line 994 "mercury_compile.m"
              {
#line 995 "mercury_compile.m"
                top_level__mercury_compile__Globals_118 = top_level__mercury_compile__Globals0_9;
#line 996 "mercury_compile.m"
                top_level__mercury_compile__Smart_38 = top_level__mercury_compile__Smart0_36;
#line 994 "mercury_compile.m"
              }
#line 993 "mercury_compile.m"
              break;
#line 993 "mercury_compile.m"
            case (MR_Integer) 1:
#line 989 "mercury_compile.m"
              {
#line 990 "mercury_compile.m"
                {
#line 990 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[1]), top_level__mercury_compile__Globals0_9, &top_level__mercury_compile__Globals_118);
                }
#line 992 "mercury_compile.m"
                top_level__mercury_compile__Smart_38 = (MR_Integer) 0;
#line 989 "mercury_compile.m"
              }
#line 993 "mercury_compile.m"
              break;
#line 993 "mercury_compile.m"
          }
#line 1017 "mercury_compile.m"
#line 1017 "mercury_compile.m"
          switch (top_level__mercury_compile__Smart_38) {
#line 1017 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1017 "mercury_compile.m"
            case (MR_Integer) 0:
#line 1018 "mercury_compile.m"
              {
#line 1018 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_50_50;
#line 1018 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_51_51;
#line 1018 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_52_52;

#line 1020 "mercury_compile.m"
                {
#line 1020 "mercury_compile.m"
                  top_level__mercury_compile__V_50_50 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
                }
#line 1020 "mercury_compile.m"
                {
#line 1020 "mercury_compile.m"
                  top_level__mercury_compile__V_51_51 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
                }
#line 1020 "mercury_compile.m"
                {
#line 1020 "mercury_compile.m"
                  top_level__mercury_compile__V_52_52 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
                }
#line 1020 "mercury_compile.m"
                {
#line 1020 "mercury_compile.m"
                  top_level__mercury_compile__HaveReadModuleMaps_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps_42, 0) = ((MR_Box) (top_level__mercury_compile__V_50_50));
#line 1020 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps_42, 1) = ((MR_Box) (top_level__mercury_compile__V_51_51));
#line 1020 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps_42, 2) = ((MR_Box) (top_level__mercury_compile__V_52_52));
#line 1020 "mercury_compile.m"
                }
#line 1021 "mercury_compile.m"
                top_level__mercury_compile__ModulesToRecompile_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "mercury_compile.m"
              }
#line 1017 "mercury_compile.m"
              break;
#line 1017 "mercury_compile.m"
            case (MR_Integer) 1:
#line 999 "mercury_compile.m"
              {
#line 999 "mercury_compile.m"
                MR_Word top_level__mercury_compile__FindTargetFiles_39;
#line 999 "mercury_compile.m"
                MR_Word top_level__mercury_compile__FindTimestampFiles_40;
#line 999 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_113;

#line 1002 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
#line 1003 "mercury_compile.m"
                  {
#line 1003 "mercury_compile.m"
                    MR_String top_level__mercury_compile__FileName_110 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0)));

#line 1010 "mercury_compile.m"
                    {
#line 1010 "mercury_compile.m"
                      parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_110, &top_level__mercury_compile__ModuleName_113);
                    }
#line 1003 "mercury_compile.m"
                  }
#line 1002 "mercury_compile.m"
                else
#line 1001 "mercury_compile.m"
                  top_level__mercury_compile__ModuleName_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0)));
#line 1012 "mercury_compile.m"
                {
#line 1012 "mercury_compile.m"
                  top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(top_level__mercury_compile__Globals_118, &top_level__mercury_compile__FindTargetFiles_39);
                }
#line 1013 "mercury_compile.m"
                {
#line 1013 "mercury_compile.m"
                  top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_118, &top_level__mercury_compile__FindTimestampFiles_40);
                }
#line 1014 "mercury_compile.m"
                {
#line 1014 "mercury_compile.m"
                  recompilation__check__should_recompile_8_p_0(top_level__mercury_compile__Globals_118, top_level__mercury_compile__ModuleName_113, top_level__mercury_compile__FindTargetFiles_39, top_level__mercury_compile__FindTimestampFiles_40, &top_level__mercury_compile__ModulesToRecompile_41, &top_level__mercury_compile__HaveReadModuleMaps_42);
                }
#line 999 "mercury_compile.m"
              }
#line 1017 "mercury_compile.m"
              break;
#line 1017 "mercury_compile.m"
          }
#line 1023 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToRecompile_41)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 1023 "mercury_compile.m"
            {
#line 1023 "mercury_compile.m"
              top_level__mercury_compile__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToRecompile_41, (MR_Integer) 0)));
#line 1023 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "mercury_compile.m"
            }
#line 1023 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 1027 "mercury_compile.m"
            {
#line 1027 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1028 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1027 "mercury_compile.m"
            }
#line 1023 "mercury_compile.m"
          else
#line 1030 "mercury_compile.m"
            {
#line 1030 "mercury_compile.m"
              top_level__mercury_compile__read_augment_and_process_module_10_p_0(top_level__mercury_compile__Globals_118, top_level__mercury_compile__OpModeAugment_35, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__FileOrModule_12, top_level__mercury_compile__ModulesToRecompile_41, top_level__mercury_compile__HaveReadModuleMaps_42, top_level__mercury_compile__ModulesToLink_13, top_level__mercury_compile__ExtraObjFiles_14);
            }
#line 985 "mercury_compile.m"
        }
#line 904 "mercury_compile.m"
        break;
#line 904 "mercury_compile.m"
    }
#line 904 "mercury_compile.m"
  }
#line 897 "mercury_compile.m"
}

#line 892 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1)
#line 892 "mercury_compile.m"
{
#line 894 "mercury_compile.m"
  {
#line 894 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 894 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HeadVar__2_2;

#line 894 "mercury_compile.m"
#line 894 "mercury_compile.m"
    switch (top_level__mercury_compile__HeadVar__1_1) {
#line 894 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 894 "mercury_compile.m"
      case (MR_Integer) 0:
#line 894 "mercury_compile.m"
        top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 1;
#line 894 "mercury_compile.m"
        break;
#line 894 "mercury_compile.m"
      case (MR_Integer) 1:
#line 895 "mercury_compile.m"
        top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 0;
#line 894 "mercury_compile.m"
        break;
#line 894 "mercury_compile.m"
    }
#line 894 "mercury_compile.m"
    return top_level__mercury_compile__HeadVar__2_2;
#line 894 "mercury_compile.m"
  }
#line 892 "mercury_compile.m"
}

#line 882 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_10_p_0(
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_11,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_15,
#line 882 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__6_6,
#line 882 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__7_16,
#line 882 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__8_8)
#line 882 "mercury_compile.m"
{
#line 888 "mercury_compile.m"
  {
#line 888 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 888 "mercury_compile.m"
    {
#line 888 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(top_level__mercury_compile__OpModeArgs_11, top_level__mercury_compile__FileOrModule_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__Globals_14, top_level__mercury_compile__HeadVar__6_6, top_level__mercury_compile__HeadVar__8_8);
    }
#line 888 "mercury_compile.m"
  }
#line 882 "mercury_compile.m"
}

#line 865 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_10_p_0_1(
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 865 "mercury_compile.m"
{
#line 865 "mercury_compile.m"
  {
#line 865 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 865 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_HeadVar__6_6;
#line 865 "mercury_compile.m"
    MR_Tuple top_level__mercury_compile__conv0_HeadVar__8_8;

#line 865 "mercury_compile.m"
    {
#line 865 "mercury_compile.m"
      top_level__mercury_compile__process_arg_build_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv1_HeadVar__6_6, ((MR_Word) top_level__mercury_compile__wrapper_arg_4), &top_level__mercury_compile__conv0_HeadVar__8_8);
    }
#line 865 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv1_HeadVar__6_6));
#line 865 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__8_8));
#line 865 "mercury_compile.m"
  }
#line 865 "mercury_compile.m"
}

#line 851 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_10_p_0(
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_12,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_13,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_14,
#line 851 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_15,
#line 851 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_16,
#line 851 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_17,
#line 851 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18)
#line 851 "mercury_compile.m"
{
#line 857 "mercury_compile.m"
  {
#line 857 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 857 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileOrModule_20;
#line 857 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_21;
#line 1245 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_45;

#line 1245 "mercury_compile.m"
    {
#line 1245 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__Arg_16, (MR_String) ".m", &top_level__mercury_compile__FileName_45);
    }
#line 1245 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1247 "mercury_compile.m"
      {
#line 1247 "mercury_compile.m"
        top_level__mercury_compile__FileOrModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "mercury_compile.m"
        MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_20, 0) = ((MR_Box) (top_level__mercury_compile__FileName_45));
#line 1247 "mercury_compile.m"
      }
#line 1245 "mercury_compile.m"
    else
#line 1252 "mercury_compile.m"
      {
#line 1252 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_46;

#line 1252 "mercury_compile.m"
        {
#line 1252 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__Arg_16, &top_level__mercury_compile__ModuleName_46);
        }
#line 1253 "mercury_compile.m"
        {
#line 1253 "mercury_compile.m"
          top_level__mercury_compile__FileOrModule_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_20, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_46));
#line 1253 "mercury_compile.m"
        }
#line 1252 "mercury_compile.m"
      }
#line 859 "mercury_compile.m"
    {
#line 859 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 615, &top_level__mercury_compile__InvokedByMake_21);
    }
#line 875 "mercury_compile.m"
#line 875 "mercury_compile.m"
    switch (top_level__mercury_compile__InvokedByMake_21) {
#line 875 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 875 "mercury_compile.m"
      case (MR_Integer) 0:
#line 861 "mercury_compile.m"
        {
#line 861 "mercury_compile.m"
          MR_Word top_level__mercury_compile__MaybeTuple_23;
#line 861 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_29_29;
#line 861 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_31_31;
#line 862 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_22_22;

#line 1258 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_20)) == (MR_mktag((MR_Integer) 0))))
#line 1258 "mercury_compile.m"
            {
#line 1258 "mercury_compile.m"
              MR_String top_level__mercury_compile__FileName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_20, (MR_Integer) 0)));

#line 1260 "mercury_compile.m"
              {
#line 1260 "mercury_compile.m"
                parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_48, &top_level__mercury_compile__V_29_29);
              }
#line 1258 "mercury_compile.m"
            }
#line 1258 "mercury_compile.m"
          else
#line 1261 "mercury_compile.m"
            top_level__mercury_compile__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_20, (MR_Integer) 0)));
#line 865 "mercury_compile.m"
          {
#line 865 "mercury_compile.m"
            top_level__mercury_compile__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 865 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 865 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_10_p_0_1));
#line 865 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 865 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile__OpModeArgs_12));
#line 865 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_31_31, 4) = ((MR_Box) (top_level__mercury_compile__FileOrModule_20));
#line 865 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_31_31, 5) = ((MR_Box) (top_level__mercury_compile__OptionArgs_15));
#line 865 "mercury_compile.m"
          }
#line 862 "mercury_compile.m"
          {
#line 862 "mercury_compile.m"
            make__util__build_with_module_options_args_12_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_2[0], top_level__mercury_compile__Globals_11, top_level__mercury_compile__V_29_29, top_level__mercury_compile__DetectedGradeFlags_13, top_level__mercury_compile__OptionVariables_14, top_level__mercury_compile__OptionArgs_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_31_31, &top_level__mercury_compile__V_22_22, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeTuple_23);
          }
#line 870 "mercury_compile.m"
          if ((top_level__mercury_compile__MaybeTuple_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "mercury_compile.m"
            {
#line 872 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "mercury_compile.m"
            }
#line 870 "mercury_compile.m"
          else
#line 868 "mercury_compile.m"
            {
#line 868 "mercury_compile.m"
              MR_Tuple top_level__mercury_compile__Tuple_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTuple_23, (MR_Integer) 0)));

#line 869 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_24, (MR_Integer) 0)));
#line 869 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_24, (MR_Integer) 1)));
#line 868 "mercury_compile.m"
            }
#line 861 "mercury_compile.m"
        }
#line 875 "mercury_compile.m"
        break;
#line 875 "mercury_compile.m"
      case (MR_Integer) 1:
#line 878 "mercury_compile.m"
        {
#line 878 "mercury_compile.m"
          top_level__mercury_compile__process_arg_2_8_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__OpModeArgs_12, top_level__mercury_compile__OptionArgs_15, top_level__mercury_compile__FileOrModule_20, top_level__mercury_compile__ModulesToLink_17, top_level__mercury_compile__ExtraObjFiles_18);
        }
#line 875 "mercury_compile.m"
        break;
#line 875 "mercury_compile.m"
    }
#line 857 "mercury_compile.m"
  }
#line 851 "mercury_compile.m"
}

#line 823 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_cmd_line_args_12_p_0(
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_2,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_3,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_4,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_5,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_6,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_7,
#line 823 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_8,
#line 823 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_9,
#line 823 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_10)
#line 823 "mercury_compile.m"
{
#line 829 "mercury_compile.m"
  while (MR_TRUE)
#line 829 "mercury_compile.m"
    {
#line 829 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 829 "mercury_compile.m"
      {
#line 829 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 829 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "mercury_compile.m"
          {
#line 829 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_10 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_9;
#line 829 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_8 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_7;
#line 829 "mercury_compile.m"
          }
#line 829 "mercury_compile.m"
        else
#line 831 "mercury_compile.m"
          {
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TypeCtorInfo_56_56;
#line 831 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__6_6, (MR_Integer) 0)));
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__6_6, (MR_Integer) 1)));
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgModules_37;
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgExtraObjFiles_38;
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_49_49;
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_50_50;
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_51_51;
#line 831 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_52_52;

#line 832 "mercury_compile.m"
            {
#line 832 "mercury_compile.m"
              top_level__mercury_compile__process_arg_10_p_0(top_level__mercury_compile__Globals_1, top_level__mercury_compile__OpModeArgs_2, top_level__mercury_compile__DetectedGradeFlags_3, top_level__mercury_compile__OptionVariables_4, top_level__mercury_compile__OptionArgs_5, top_level__mercury_compile__Arg_32, &top_level__mercury_compile__ArgModules_37, &top_level__mercury_compile__ArgExtraObjFiles_38);
            }
#line 837 "mercury_compile.m"
            if ((top_level__mercury_compile__Args_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "mercury_compile.m"
              {
#line 838 "mercury_compile.m"
              }
#line 837 "mercury_compile.m"
            else
#line 836 "mercury_compile.m"
              {
#line 836 "mercury_compile.m"
                mercury__gc__garbage_collect_2_p_0();
              }
#line 10422 "top_level.mercury_compile.c"
            top_level__mercury_compile__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 840 "mercury_compile.m"
            {
#line 840 "mercury_compile.m"
              top_level__mercury_compile__V_50_50 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_56_56, top_level__mercury_compile__ArgModules_37);
            }
#line 840 "mercury_compile.m"
            {
#line 840 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_49_49 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_Modules_0_7, top_level__mercury_compile__V_50_50);
            }
#line 841 "mercury_compile.m"
            {
#line 841 "mercury_compile.m"
              top_level__mercury_compile__V_52_52 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_56_56, top_level__mercury_compile__ArgExtraObjFiles_38);
            }
#line 841 "mercury_compile.m"
            {
#line 841 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_51_51 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_9, top_level__mercury_compile__V_52_52);
            }
#line 842 "mercury_compile.m"
            /* direct tailcall eliminated */
#line 842 "mercury_compile.m"
            {
#line 842 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HeadVar__6__tmp_copy_6 = top_level__mercury_compile__Args_33;
#line 842 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_7 = top_level__mercury_compile__STATE_VARIABLE_Modules_49_49;
#line 842 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_9 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_51_51;

#line 842 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_9 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_9;
#line 842 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_0_7 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_7;
#line 842 "mercury_compile.m"
              top_level__mercury_compile__HeadVar__6_6 = top_level__mercury_compile__HeadVar__6__tmp_copy_6;
#line 842 "mercury_compile.m"
            }
#line 842 "mercury_compile.m"
            continue;
#line 831 "mercury_compile.m"
          }
#line 829 "mercury_compile.m"
      }
#line 829 "mercury_compile.m"
      break;
#line 829 "mercury_compile.m"
    }
#line 823 "mercury_compile.m"
}

#line 865 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_args_11_p_0_1(
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 865 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 865 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 865 "mercury_compile.m"
{
#line 865 "mercury_compile.m"
  {
#line 865 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 865 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_HeadVar__6_6;
#line 865 "mercury_compile.m"
    MR_Tuple top_level__mercury_compile__conv0_HeadVar__8_8;

#line 865 "mercury_compile.m"
    {
#line 865 "mercury_compile.m"
      top_level__mercury_compile__process_arg_build_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv1_HeadVar__6_6, ((MR_Word) top_level__mercury_compile__wrapper_arg_4), &top_level__mercury_compile__conv0_HeadVar__8_8);
    }
#line 865 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv1_HeadVar__6_6));
#line 865 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__8_8));
#line 865 "mercury_compile.m"
  }
#line 865 "mercury_compile.m"
}

#line 791 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_args_11_p_0(
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeArgs_13,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_14,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_15,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_16,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_27,
#line 791 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_28,
#line 791 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_29,
#line 791 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_30)
#line 791 "mercury_compile.m"
{
#line 797 "mercury_compile.m"
  while (MR_TRUE)
#line 797 "mercury_compile.m"
    {
#line 797 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 797 "mercury_compile.m"
      {
#line 797 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 797 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FileResult_20;

#line 798 "mercury_compile.m"
        {
#line 798 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__STATE_VARIABLE_Modules_0_27);
        }
#line 798 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 798 "mercury_compile.m"
          {
#line 798 "mercury_compile.m"
          }
#line 798 "mercury_compile.m"
        else
#line 801 "mercury_compile.m"
          {
#line 801 "mercury_compile.m"
            mercury__gc__garbage_collect_2_p_0();
          }
#line 803 "mercury_compile.m"
        {
#line 803 "mercury_compile.m"
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile__FileResult_20);
        }
#line 813 "mercury_compile.m"
#line 813 "mercury_compile.m"
        switch (MR_tag((MR_Word) top_level__mercury_compile__FileResult_20)) {
#line 813 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 813 "mercury_compile.m"
          case (MR_Integer) 0:
#line 814 "mercury_compile.m"
            {
#line 814 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_Modules_28 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_27;
#line 814 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_30 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_29;
#line 814 "mercury_compile.m"
            }
#line 813 "mercury_compile.m"
            break;
#line 813 "mercury_compile.m"
          case (MR_Integer) 1:
#line 805 "mercury_compile.m"
            {
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TypeCtorInfo_49_49;
#line 805 "mercury_compile.m"
              MR_String top_level__mercury_compile__Line_21 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileResult_20, (MR_Integer) 0)));
#line 805 "mercury_compile.m"
              MR_String top_level__mercury_compile__Arg_22;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgModules_23;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgExtraObjFiles_24;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_41_41;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_42_42;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_43_43;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_44_44;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__FileOrModule_61;
#line 805 "mercury_compile.m"
              MR_Word top_level__mercury_compile__InvokedByMake_62;
#line 1245 "mercury_compile.m"
              MR_String top_level__mercury_compile__FileName_84;

#line 806 "mercury_compile.m"
              {
#line 806 "mercury_compile.m"
                top_level__mercury_compile__Arg_22 = mercury__string__rstrip_1_f_0(top_level__mercury_compile__Line_21);
              }
#line 1245 "mercury_compile.m"
              {
#line 1245 "mercury_compile.m"
                top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__Arg_22, (MR_String) ".m", &top_level__mercury_compile__FileName_84);
              }
#line 1245 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1247 "mercury_compile.m"
                {
#line 1247 "mercury_compile.m"
                  top_level__mercury_compile__FileOrModule_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_61, 0) = ((MR_Box) (top_level__mercury_compile__FileName_84));
#line 1247 "mercury_compile.m"
                }
#line 1245 "mercury_compile.m"
              else
#line 1252 "mercury_compile.m"
                {
#line 1252 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__ModuleName_85;

#line 1252 "mercury_compile.m"
                  {
#line 1252 "mercury_compile.m"
                    parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__Arg_22, &top_level__mercury_compile__ModuleName_85);
                  }
#line 1253 "mercury_compile.m"
                  {
#line 1253 "mercury_compile.m"
                    top_level__mercury_compile__FileOrModule_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_61, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_85));
#line 1253 "mercury_compile.m"
                  }
#line 1252 "mercury_compile.m"
                }
#line 859 "mercury_compile.m"
              {
#line 859 "mercury_compile.m"
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 615, &top_level__mercury_compile__InvokedByMake_62);
              }
#line 875 "mercury_compile.m"
#line 875 "mercury_compile.m"
              switch (top_level__mercury_compile__InvokedByMake_62) {
#line 875 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 875 "mercury_compile.m"
                case (MR_Integer) 0:
#line 861 "mercury_compile.m"
                  {
#line 861 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MaybeTuple_64;
#line 861 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_68_68;
#line 861 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_70_70;
#line 862 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_63_63;

#line 1258 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_61)) == (MR_mktag((MR_Integer) 0))))
#line 1258 "mercury_compile.m"
                      {
#line 1258 "mercury_compile.m"
                        MR_String top_level__mercury_compile__FileName_87 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_61, (MR_Integer) 0)));

#line 1260 "mercury_compile.m"
                        {
#line 1260 "mercury_compile.m"
                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_87, &top_level__mercury_compile__V_68_68);
                        }
#line 1258 "mercury_compile.m"
                      }
#line 1258 "mercury_compile.m"
                    else
#line 1261 "mercury_compile.m"
                      top_level__mercury_compile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_61, (MR_Integer) 0)));
#line 865 "mercury_compile.m"
                    {
#line 865 "mercury_compile.m"
                      top_level__mercury_compile__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 865 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_70_70, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 865 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_70_70, 1) = ((MR_Box) (top_level__mercury_compile__process_stdin_args_11_p_0_1));
#line 865 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 865 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_70_70, 3) = ((MR_Box) (top_level__mercury_compile__OpModeArgs_13));
#line 865 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_70_70, 4) = ((MR_Box) (top_level__mercury_compile__FileOrModule_61));
#line 865 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_70_70, 5) = ((MR_Box) (top_level__mercury_compile__OptionArgs_16));
#line 865 "mercury_compile.m"
                    }
#line 862 "mercury_compile.m"
                    {
#line 862 "mercury_compile.m"
                      make__util__build_with_module_options_args_12_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_2[0], top_level__mercury_compile__Globals_12, top_level__mercury_compile__V_68_68, top_level__mercury_compile__DetectedGradeFlags_14, top_level__mercury_compile__OptionVariables_15, top_level__mercury_compile__OptionArgs_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_70_70, &top_level__mercury_compile__V_63_63, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeTuple_64);
                    }
#line 870 "mercury_compile.m"
                    if ((top_level__mercury_compile__MaybeTuple_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "mercury_compile.m"
                      {
#line 872 "mercury_compile.m"
                        top_level__mercury_compile__ArgModules_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "mercury_compile.m"
                        top_level__mercury_compile__ArgExtraObjFiles_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "mercury_compile.m"
                      }
#line 870 "mercury_compile.m"
                    else
#line 868 "mercury_compile.m"
                      {
#line 868 "mercury_compile.m"
                        MR_Tuple top_level__mercury_compile__Tuple_65 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTuple_64, (MR_Integer) 0)));

#line 869 "mercury_compile.m"
                        top_level__mercury_compile__ArgModules_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_65, (MR_Integer) 0)));
#line 869 "mercury_compile.m"
                        top_level__mercury_compile__ArgExtraObjFiles_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_65, (MR_Integer) 1)));
#line 868 "mercury_compile.m"
                      }
#line 861 "mercury_compile.m"
                  }
#line 875 "mercury_compile.m"
                  break;
#line 875 "mercury_compile.m"
                case (MR_Integer) 1:
#line 878 "mercury_compile.m"
                  {
#line 878 "mercury_compile.m"
                    top_level__mercury_compile__process_arg_2_8_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OpModeArgs_13, top_level__mercury_compile__OptionArgs_16, top_level__mercury_compile__FileOrModule_61, &top_level__mercury_compile__ArgModules_23, &top_level__mercury_compile__ArgExtraObjFiles_24);
                  }
#line 875 "mercury_compile.m"
                  break;
#line 875 "mercury_compile.m"
              }
#line 10769 "top_level.mercury_compile.c"
              top_level__mercury_compile__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 809 "mercury_compile.m"
              {
#line 809 "mercury_compile.m"
                top_level__mercury_compile__V_42_42 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_49_49, top_level__mercury_compile__ArgModules_23);
              }
#line 809 "mercury_compile.m"
              {
#line 809 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_41_41 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_49_49, top_level__mercury_compile__STATE_VARIABLE_Modules_0_27, top_level__mercury_compile__V_42_42);
              }
#line 810 "mercury_compile.m"
              {
#line 810 "mercury_compile.m"
                top_level__mercury_compile__V_44_44 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_49_49, top_level__mercury_compile__ArgExtraObjFiles_24);
              }
#line 810 "mercury_compile.m"
              {
#line 810 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_43_43 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_49_49, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_29, top_level__mercury_compile__V_44_44);
              }
#line 811 "mercury_compile.m"
              /* direct tailcall eliminated */
#line 811 "mercury_compile.m"
              {
#line 811 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_27 = top_level__mercury_compile__STATE_VARIABLE_Modules_41_41;
#line 811 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_29 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_43_43;

#line 811 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_29 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_29;
#line 811 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_0_27 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_27;
#line 811 "mercury_compile.m"
              }
#line 811 "mercury_compile.m"
              continue;
#line 805 "mercury_compile.m"
            }
#line 813 "mercury_compile.m"
            break;
#line 813 "mercury_compile.m"
          case (MR_Integer) 2:
#line 816 "mercury_compile.m"
            {
#line 816 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__FileResult_20, (MR_Integer) 0)));
#line 816 "mercury_compile.m"
              MR_String top_level__mercury_compile__Msg_26;

#line 817 "mercury_compile.m"
              {
#line 817 "mercury_compile.m"
                mercury__io__error_message_2_p_0(top_level__mercury_compile__Error_25, &top_level__mercury_compile__Msg_26);
              }
#line 818 "mercury_compile.m"
              {
#line 818 "mercury_compile.m"
                mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
              }
#line 819 "mercury_compile.m"
              {
#line 819 "mercury_compile.m"
                mercury__io__write_string_3_p_0(top_level__mercury_compile__Msg_26);
              }
#line 820 "mercury_compile.m"
              {
#line 820 "mercury_compile.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 816 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_Modules_28 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_27;
#line 816 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_30 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_29;
#line 816 "mercury_compile.m"
            }
#line 813 "mercury_compile.m"
            break;
#line 813 "mercury_compile.m"
        }
#line 797 "mercury_compile.m"
      }
#line 797 "mercury_compile.m"
      break;
#line 797 "mercury_compile.m"
    }
#line 791 "mercury_compile.m"
}

#line 645 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_query_4_p_0_1(
#line 645 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 645 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 645 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 645 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 645 "mercury_compile.m"
{
#line 645 "mercury_compile.m"
  {
#line 645 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 645 "mercury_compile.m"
    {
#line 645 "mercury_compile.m"
      mercury__io__write_string_3_p_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 645 "mercury_compile.m"
  }
#line 645 "mercury_compile.m"
}

#line 569 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_query_4_p_0(
#line 569 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_5,
#line 569 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpModeQuery_6)
#line 569 "mercury_compile.m"
{
#line 574 "mercury_compile.m"
  {
#line 574 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 574 "mercury_compile.m"
#line 574 "mercury_compile.m"
    switch (top_level__mercury_compile__OpModeQuery_6) {
#line 574 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 574 "mercury_compile.m"
      case (MR_Integer) 1:
#line 579 "mercury_compile.m"
        {
#line 579 "mercury_compile.m"
          MR_String top_level__mercury_compile__CC_Type_10;
#line 579 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_70_70;
#line 579 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_78;

#line 580 "mercury_compile.m"
          {
#line 580 "mercury_compile.m"
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 506, &top_level__mercury_compile__CC_Type_10);
          }
#line 581 "mercury_compile.m"
          {
#line 581 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_78);
          }
#line 582 "mercury_compile.m"
          {
#line 582 "mercury_compile.m"
            top_level__mercury_compile__V_70_70 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_Type_10, (MR_String) "\n");
          }
#line 582 "mercury_compile.m"
          {
#line 582 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_78, top_level__mercury_compile__V_70_70);
          }
#line 579 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 3:
#line 589 "mercury_compile.m"
        {
#line 589 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_80;

#line 590 "mercury_compile.m"
          {
#line 590 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_80);
          }
#line 591 "mercury_compile.m"
          {
#line 591 "mercury_compile.m"
            backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__StdOut_80);
          }
#line 589 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 0:
#line 574 "mercury_compile.m"
        {
#line 574 "mercury_compile.m"
          MR_String top_level__mercury_compile__CC_8;
#line 574 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_9;
#line 574 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_75_75;

#line 575 "mercury_compile.m"
          {
#line 575 "mercury_compile.m"
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 481, &top_level__mercury_compile__CC_8);
          }
#line 576 "mercury_compile.m"
          {
#line 576 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_9);
          }
#line 577 "mercury_compile.m"
          {
#line 577 "mercury_compile.m"
            top_level__mercury_compile__V_75_75 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_8, (MR_String) "\n");
          }
#line 577 "mercury_compile.m"
          {
#line 577 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_9, top_level__mercury_compile__V_75_75);
          }
#line 574 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 2:
#line 584 "mercury_compile.m"
        {
#line 584 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_79;

#line 585 "mercury_compile.m"
          {
#line 585 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_79);
          }
#line 586 "mercury_compile.m"
          {
#line 586 "mercury_compile.m"
            backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__StdOut_79);
          }
#line 587 "mercury_compile.m"
          {
#line 587 "mercury_compile.m"
            mercury__io__nl_3_p_0(top_level__mercury_compile__StdOut_79);
          }
#line 584 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 10:
#line 625 "mercury_compile.m"
        {
#line 625 "mercury_compile.m"
          MR_String top_level__mercury_compile__ClassName_15;
#line 625 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_38_38;
#line 625 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_87;

#line 626 "mercury_compile.m"
          {
#line 626 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_87);
          }
#line 627 "mercury_compile.m"
          {
#line 627 "mercury_compile.m"
            parse_tree__file_names__get_class_dir_name_2_p_0(top_level__mercury_compile__Globals_5, &top_level__mercury_compile__ClassName_15);
          }
#line 628 "mercury_compile.m"
          {
#line 628 "mercury_compile.m"
            top_level__mercury_compile__V_38_38 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__ClassName_15, (MR_String) "\n");
          }
#line 628 "mercury_compile.m"
          {
#line 628 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_87, top_level__mercury_compile__V_38_38);
          }
#line 625 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 5:
#line 593 "mercury_compile.m"
        {
#line 593 "mercury_compile.m"
          MR_String top_level__mercury_compile__CSC_11;
#line 593 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_60_60;
#line 593 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_81;

#line 594 "mercury_compile.m"
          {
#line 594 "mercury_compile.m"
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 514, &top_level__mercury_compile__CSC_11);
          }
#line 595 "mercury_compile.m"
          {
#line 595 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_81);
          }
#line 596 "mercury_compile.m"
          {
#line 596 "mercury_compile.m"
            top_level__mercury_compile__V_60_60 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_11, (MR_String) "\n");
          }
#line 596 "mercury_compile.m"
          {
#line 596 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_81, top_level__mercury_compile__V_60_60);
          }
#line 593 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 6:
#line 598 "mercury_compile.m"
        {
#line 598 "mercury_compile.m"
          MR_String top_level__mercury_compile__CSC_Type_12;
#line 598 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_55_55;
#line 598 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_82;

#line 599 "mercury_compile.m"
          {
#line 599 "mercury_compile.m"
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 507, &top_level__mercury_compile__CSC_Type_12);
          }
#line 600 "mercury_compile.m"
          {
#line 600 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_82);
          }
#line 601 "mercury_compile.m"
          {
#line 601 "mercury_compile.m"
            top_level__mercury_compile__V_55_55 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_Type_12, (MR_String) "\n");
          }
#line 601 "mercury_compile.m"
          {
#line 601 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_82, top_level__mercury_compile__V_55_55);
          }
#line 598 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 4:
#line 603 "mercury_compile.m"
        {
#line 603 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_83;

#line 604 "mercury_compile.m"
          {
#line 604 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_83);
          }
#line 605 "mercury_compile.m"
          {
#line 605 "mercury_compile.m"
            backend_libs__compile_target_code__output_grade_defines_4_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__StdOut_83);
          }
#line 603 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 11:
#line 630 "mercury_compile.m"
        {
#line 630 "mercury_compile.m"
          MR_String top_level__mercury_compile__Grade_16;
#line 630 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Stdout_88;

#line 633 "mercury_compile.m"
          {
#line 633 "mercury_compile.m"
            libs__compute_grade__grade_directory_component_2_p_0(top_level__mercury_compile__Globals_5, &top_level__mercury_compile__Grade_16);
          }
#line 634 "mercury_compile.m"
          {
#line 634 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_88);
          }
#line 635 "mercury_compile.m"
          {
#line 635 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_88, top_level__mercury_compile__Grade_16);
          }
#line 636 "mercury_compile.m"
          {
#line 636 "mercury_compile.m"
            mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_88);
          }
#line 630 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 12:
#line 638 "mercury_compile.m"
        {
#line 638 "mercury_compile.m"
          MR_Word top_level__mercury_compile__LibGrades_17;

#line 639 "mercury_compile.m"
          {
#line 639 "mercury_compile.m"
            libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 625, &top_level__mercury_compile__LibGrades_17);
          }
#line 642 "mercury_compile.m"
          if ((top_level__mercury_compile__LibGrades_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "mercury_compile.m"
            {
#line 641 "mercury_compile.m"
            }
#line 642 "mercury_compile.m"
          else
#line 643 "mercury_compile.m"
            {
#line 643 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Stdout_89;

#line 644 "mercury_compile.m"
              {
#line 644 "mercury_compile.m"
                mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_89);
              }
#line 645 "mercury_compile.m"
              {
#line 645 "mercury_compile.m"
                mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__Stdout_89, top_level__mercury_compile__LibGrades_17, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_scalar_common_7[0]);
              }
#line 646 "mercury_compile.m"
              {
#line 646 "mercury_compile.m"
                mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_89);
              }
#line 643 "mercury_compile.m"
            }
#line 638 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 9:
#line 621 "mercury_compile.m"
        {
#line 621 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_86;

#line 622 "mercury_compile.m"
          {
#line 622 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_86);
          }
#line 623 "mercury_compile.m"
          {
#line 623 "mercury_compile.m"
            backend_libs__compile_target_code__output_library_link_flags_4_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__StdOut_86);
          }
#line 621 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 7:
#line 607 "mercury_compile.m"
        {
#line 607 "mercury_compile.m"
          MR_String top_level__mercury_compile__LinkCommand_13;
#line 607 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Stdout_14;

#line 608 "mercury_compile.m"
          {
#line 608 "mercury_compile.m"
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 564, &top_level__mercury_compile__LinkCommand_13);
          }
#line 610 "mercury_compile.m"
          {
#line 610 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_14);
          }
#line 611 "mercury_compile.m"
          {
#line 611 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_14, top_level__mercury_compile__LinkCommand_13);
          }
#line 612 "mercury_compile.m"
          {
#line 612 "mercury_compile.m"
            mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_14);
          }
#line 607 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 8:
#line 614 "mercury_compile.m"
        {
#line 614 "mercury_compile.m"
          MR_String top_level__mercury_compile__LinkCommand_84;
#line 614 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Stdout_85;

#line 615 "mercury_compile.m"
          {
#line 615 "mercury_compile.m"
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 565, &top_level__mercury_compile__LinkCommand_84);
          }
#line 617 "mercury_compile.m"
          {
#line 617 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_85);
          }
#line 618 "mercury_compile.m"
          {
#line 618 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_85, top_level__mercury_compile__LinkCommand_84);
          }
#line 619 "mercury_compile.m"
          {
#line 619 "mercury_compile.m"
            mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_85);
          }
#line 614 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
      case (MR_Integer) 13:
#line 649 "mercury_compile.m"
        {
#line 649 "mercury_compile.m"
          MR_String top_level__mercury_compile__TargetArch_20;
#line 649 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_25_25;
#line 649 "mercury_compile.m"
          MR_Word top_level__mercury_compile__StdOut_92;

#line 650 "mercury_compile.m"
          {
#line 650 "mercury_compile.m"
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_92);
          }
#line 651 "mercury_compile.m"
          {
#line 651 "mercury_compile.m"
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 652, &top_level__mercury_compile__TargetArch_20);
          }
#line 652 "mercury_compile.m"
          {
#line 652 "mercury_compile.m"
            top_level__mercury_compile__V_25_25 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__TargetArch_20, (MR_String) "\n");
          }
#line 652 "mercury_compile.m"
          {
#line 652 "mercury_compile.m"
            mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_92, top_level__mercury_compile__V_25_25);
          }
#line 649 "mercury_compile.m"
        }
#line 574 "mercury_compile.m"
        break;
#line 574 "mercury_compile.m"
    }
#line 574 "mercury_compile.m"
  }
#line 569 "mercury_compile.m"
}

#line 538 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_standalone_interface_4_p_0(
#line 538 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_5,
#line 538 "mercury_compile.m"
  MR_String top_level__mercury_compile__StandaloneIntBasename_6)
#line 538 "mercury_compile.m"
{
#line 542 "mercury_compile.m"
  {
#line 542 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 542 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Target_8;

#line 543 "mercury_compile.m"
    {
#line 543 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_5, &top_level__mercury_compile__Target_8);
    }
#line 554 "mercury_compile.m"
#line 554 "mercury_compile.m"
    switch (top_level__mercury_compile__Target_8) {
#line 554 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 554 "mercury_compile.m"
      case (MR_Integer) 0:
#line 564 "mercury_compile.m"
        {
#line 564 "mercury_compile.m"
          backend_libs__compile_target_code__make_standalone_interface_4_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__StandaloneIntBasename_6);
        }
#line 554 "mercury_compile.m"
        break;
#line 554 "mercury_compile.m"
      case (MR_Integer) 1:
#line 554 "mercury_compile.m"
      case (MR_Integer) 2:
#line 547 "mercury_compile.m"
        {
#line 547 "mercury_compile.m"
          MR_Word top_level__mercury_compile__NotRequiredMsg_9;
#line 547 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_36_36;
#line 547 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_39_39;
#line 547 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_42_42;
#line 547 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_43_43;
#line 547 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_44_44;

#line 551 "mercury_compile.m"
          {
#line 551 "mercury_compile.m"
            top_level__mercury_compile__V_44_44 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_8);
          }
#line 551 "mercury_compile.m"
          {
#line 551 "mercury_compile.m"
            top_level__mercury_compile__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "mercury_compile.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 551 "mercury_compile.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_43_43, 1) = ((MR_Box) (top_level__mercury_compile__V_44_44));
#line 551 "mercury_compile.m"
          }
#line 551 "mercury_compile.m"
          {
#line 551 "mercury_compile.m"
            top_level__mercury_compile__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 0) = ((MR_Box) (top_level__mercury_compile__V_43_43));
#line 551 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[10])));
#line 551 "mercury_compile.m"
          }
#line 550 "mercury_compile.m"
          {
#line 550 "mercury_compile.m"
            top_level__mercury_compile__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[29])));
#line 550 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_39_39, 1) = ((MR_Box) (top_level__mercury_compile__V_42_42));
#line 550 "mercury_compile.m"
          }
#line 549 "mercury_compile.m"
          {
#line 549 "mercury_compile.m"
            top_level__mercury_compile__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[28])));
#line 549 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile__V_39_39));
#line 549 "mercury_compile.m"
          }
#line 548 "mercury_compile.m"
          {
#line 548 "mercury_compile.m"
            top_level__mercury_compile__NotRequiredMsg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[27])));
#line 548 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_9, 1) = ((MR_Box) (top_level__mercury_compile__V_36_36));
#line 548 "mercury_compile.m"
          }
#line 552 "mercury_compile.m"
          {
#line 552 "mercury_compile.m"
            parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__NotRequiredMsg_9);
          }
#line 553 "mercury_compile.m"
          {
#line 553 "mercury_compile.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 547 "mercury_compile.m"
        }
#line 554 "mercury_compile.m"
        break;
#line 554 "mercury_compile.m"
      case (MR_Integer) 3:
#line 555 "mercury_compile.m"
        {
#line 555 "mercury_compile.m"
          MR_Word top_level__mercury_compile__NYIMsg_10;
#line 555 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_16_16;
#line 555 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_19_19;
#line 555 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_22_22;
#line 555 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_23_23;
#line 555 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_24_24;

#line 559 "mercury_compile.m"
          {
#line 559 "mercury_compile.m"
            top_level__mercury_compile__V_24_24 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_8);
          }
#line 559 "mercury_compile.m"
          {
#line 559 "mercury_compile.m"
            top_level__mercury_compile__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "mercury_compile.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 559 "mercury_compile.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_23_23, 1) = ((MR_Box) (top_level__mercury_compile__V_24_24));
#line 559 "mercury_compile.m"
          }
#line 559 "mercury_compile.m"
          {
#line 559 "mercury_compile.m"
            top_level__mercury_compile__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_22_22, 0) = ((MR_Box) (top_level__mercury_compile__V_23_23));
#line 559 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[10])));
#line 559 "mercury_compile.m"
          }
#line 558 "mercury_compile.m"
          {
#line 558 "mercury_compile.m"
            top_level__mercury_compile__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[31])));
#line 558 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_19_19, 1) = ((MR_Box) (top_level__mercury_compile__V_22_22));
#line 558 "mercury_compile.m"
          }
#line 557 "mercury_compile.m"
          {
#line 557 "mercury_compile.m"
            top_level__mercury_compile__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[28])));
#line 557 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_16_16, 1) = ((MR_Box) (top_level__mercury_compile__V_19_19));
#line 557 "mercury_compile.m"
          }
#line 556 "mercury_compile.m"
          {
#line 556 "mercury_compile.m"
            top_level__mercury_compile__NYIMsg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[30])));
#line 556 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_10, 1) = ((MR_Box) (top_level__mercury_compile__V_16_16));
#line 556 "mercury_compile.m"
          }
#line 560 "mercury_compile.m"
          {
#line 560 "mercury_compile.m"
            parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__NYIMsg_10);
          }
#line 561 "mercury_compile.m"
          {
#line 561 "mercury_compile.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 555 "mercury_compile.m"
        }
#line 554 "mercury_compile.m"
        break;
#line 554 "mercury_compile.m"
    }
#line 542 "mercury_compile.m"
  }
#line 538 "mercury_compile.m"
}

#line 713 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_8_p_0_1(
#line 713 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 713 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 713 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 713 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 713 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 713 "mercury_compile.m"
{
#line 713 "mercury_compile.m"
  {
#line 713 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 713 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_4;

#line 713 "mercury_compile.m"
    {
#line 713 "mercury_compile.m"
      backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_HeadVar__4_4);
    }
#line 713 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_4));
#line 713 "mercury_compile.m"
  }
#line 713 "mercury_compile.m"
}

#line 512 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_op_mode_8_p_0(
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OpMode_10,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14)
#line 512 "mercury_compile.m"
{
#line 519 "mercury_compile.m"
  {
#line 519 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 519 "mercury_compile.m"
#line 519 "mercury_compile.m"
    switch (MR_tag((MR_Word) top_level__mercury_compile__OpMode_10)) {
#line 519 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 519 "mercury_compile.m"
      case (MR_Integer) 0:
#line 519 "mercury_compile.m"
#line 519 "mercury_compile.m"
        switch (MR_unmkbody(top_level__mercury_compile__OpMode_10)) {
#line 519 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 519 "mercury_compile.m"
          case (MR_Integer) 0:
#line 520 "mercury_compile.m"
            {
#line 520 "mercury_compile.m"
              make__make_process_args_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__Args_14);
            }
#line 519 "mercury_compile.m"
            break;
#line 519 "mercury_compile.m"
          case (MR_Integer) 1:
#line 524 "mercury_compile.m"
            {
#line 524 "mercury_compile.m"
              parse_tree__source_file_map__write_source_file_map_4_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__Args_14);
            }
#line 519 "mercury_compile.m"
            break;
#line 519 "mercury_compile.m"
        }
#line 519 "mercury_compile.m"
        break;
#line 519 "mercury_compile.m"
      case (MR_Integer) 1:
#line 526 "mercury_compile.m"
        {
#line 526 "mercury_compile.m"
          MR_String top_level__mercury_compile__StandaloneIntBasename_16 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpMode_10, (MR_Integer) 0)));

#line 527 "mercury_compile.m"
          {
#line 527 "mercury_compile.m"
            top_level__mercury_compile__do_op_mode_standalone_interface_4_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__StandaloneIntBasename_16);
          }
#line 526 "mercury_compile.m"
        }
#line 519 "mercury_compile.m"
        break;
#line 519 "mercury_compile.m"
      case (MR_Integer) 2:
#line 530 "mercury_compile.m"
        {
#line 530 "mercury_compile.m"
          MR_Word top_level__mercury_compile__OpModeQuery_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__OpMode_10, (MR_Integer) 0)));

#line 531 "mercury_compile.m"
          {
#line 531 "mercury_compile.m"
            top_level__mercury_compile__do_op_mode_query_4_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__OpModeQuery_17);
          }
#line 530 "mercury_compile.m"
        }
#line 519 "mercury_compile.m"
        break;
#line 519 "mercury_compile.m"
      case (MR_Integer) 3:
#line 533 "mercury_compile.m"
        {
#line 533 "mercury_compile.m"
          MR_Word top_level__mercury_compile__OpModeArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile__OpMode_10, (MR_Integer) 0)));
#line 533 "mercury_compile.m"
          MR_Word top_level__mercury_compile__FileNamesFromStdin_35;

#line 666 "mercury_compile.m"
          {
#line 666 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 647, &top_level__mercury_compile__FileNamesFromStdin_35);
          }
#line 669 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 670 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__FileNamesFromStdin_35 == (MR_Integer) 0);
#line 668 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 672 "mercury_compile.m"
            {
#line 672 "mercury_compile.m"
              libs__handle_options__usage_2_p_0();
            }
#line 668 "mercury_compile.m"
          else
#line 686 "mercury_compile.m"
            {
#line 686 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TypeCtorInfo_68_85;
#line 686 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ModulesToLinkCord_36;
#line 686 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ExtraObjFilesCord_37;
#line 686 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ModulesToLink_38;
#line 686 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ExtraObjFiles_39;
#line 686 "mercury_compile.m"
              MR_Integer top_level__mercury_compile__ExitStatus_40;
#line 686 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Statistics_49;

#line 680 "mercury_compile.m"
#line 680 "mercury_compile.m"
              switch (top_level__mercury_compile__FileNamesFromStdin_35) {
#line 680 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 680 "mercury_compile.m"
                case (MR_Integer) 0:
#line 681 "mercury_compile.m"
                  {
#line 681 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TypeCtorInfo_67_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 681 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_52_52;
#line 681 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_53_53;

#line 684 "mercury_compile.m"
                    {
#line 684 "mercury_compile.m"
                      top_level__mercury_compile__V_52_52 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_67_84);
                    }
#line 685 "mercury_compile.m"
                    {
#line 685 "mercury_compile.m"
                      top_level__mercury_compile__V_53_53 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_67_84);
                    }
#line 682 "mercury_compile.m"
                    {
#line 682 "mercury_compile.m"
                      top_level__mercury_compile__process_cmd_line_args_12_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__OpModeArgs_18, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__Args_14, top_level__mercury_compile__V_52_52, &top_level__mercury_compile__ModulesToLinkCord_36, top_level__mercury_compile__V_53_53, &top_level__mercury_compile__ExtraObjFilesCord_37);
                    }
#line 681 "mercury_compile.m"
                  }
#line 680 "mercury_compile.m"
                  break;
#line 680 "mercury_compile.m"
                case (MR_Integer) 1:
#line 675 "mercury_compile.m"
                  {
#line 675 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TypeCtorInfo_66_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 675 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_55_55;
#line 675 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_56_56;

#line 678 "mercury_compile.m"
                    {
#line 678 "mercury_compile.m"
                      top_level__mercury_compile__V_55_55 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_66_83);
                    }
#line 679 "mercury_compile.m"
                    {
#line 679 "mercury_compile.m"
                      top_level__mercury_compile__V_56_56 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_66_83);
                    }
#line 676 "mercury_compile.m"
                    {
#line 676 "mercury_compile.m"
                      top_level__mercury_compile__process_stdin_args_11_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__OpModeArgs_18, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__V_55_55, &top_level__mercury_compile__ModulesToLinkCord_36, top_level__mercury_compile__V_56_56, &top_level__mercury_compile__ExtraObjFilesCord_37);
                    }
#line 675 "mercury_compile.m"
                  }
#line 680 "mercury_compile.m"
                  break;
#line 680 "mercury_compile.m"
              }
#line 11809 "top_level.mercury_compile.c"
              top_level__mercury_compile__TypeCtorInfo_68_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 687 "mercury_compile.m"
              {
#line 687 "mercury_compile.m"
                top_level__mercury_compile__ModulesToLink_38 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_68_85, top_level__mercury_compile__ModulesToLinkCord_36);
              }
#line 688 "mercury_compile.m"
              {
#line 688 "mercury_compile.m"
                top_level__mercury_compile__ExtraObjFiles_39 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_68_85, top_level__mercury_compile__ExtraObjFilesCord_37);
              }
#line 690 "mercury_compile.m"
              {
#line 690 "mercury_compile.m"
                mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_40);
              }
#line 691 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_40 == (MR_Integer) 0);
#line 691 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 692 "mercury_compile.m"
                {
#line 692 "mercury_compile.m"
                  MR_String top_level__mercury_compile__FirstModule_41;
#line 694 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_59_59;
#line 694 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_60_60;
#line 695 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_42_42;

#line 693 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__OpModeArgs_18)) == (MR_mktag((MR_Integer) 1)));
#line 693 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 693 "mercury_compile.m"
                    {
#line 693 "mercury_compile.m"
                      top_level__mercury_compile__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpModeArgs_18, (MR_Integer) 0)));
#line 693 "mercury_compile.m"
                      top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 693 "mercury_compile.m"
                      if (top_level__mercury_compile__succeeded)
#line 693 "mercury_compile.m"
                        {
#line 693 "mercury_compile.m"
                          top_level__mercury_compile__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, (MR_Integer) 0)));
#line 694 "mercury_compile.m"
                          top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_60_60 == (MR_Integer) 2);
#line 694 "mercury_compile.m"
                          if (top_level__mercury_compile__succeeded)
#line 694 "mercury_compile.m"
                            {
#line 695 "mercury_compile.m"
                              top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToLink_38)) == (MR_mktag((MR_Integer) 1)));
#line 695 "mercury_compile.m"
                              if (top_level__mercury_compile__succeeded)
#line 695 "mercury_compile.m"
                                {
#line 695 "mercury_compile.m"
                                  top_level__mercury_compile__FirstModule_41 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_38, (MR_Integer) 0)));
#line 695 "mercury_compile.m"
                                  top_level__mercury_compile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_38, (MR_Integer) 1)));
#line 695 "mercury_compile.m"
                                }
#line 694 "mercury_compile.m"
                            }
#line 693 "mercury_compile.m"
                        }
#line 693 "mercury_compile.m"
                    }
#line 692 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 697 "mercury_compile.m"
                    {
#line 697 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__MainModuleName_43;
#line 697 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__Target_44;
#line 697 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__Succeeded_45;

#line 697 "mercury_compile.m"
                      {
#line 697 "mercury_compile.m"
                        parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FirstModule_41, &top_level__mercury_compile__MainModuleName_43);
                      }
#line 698 "mercury_compile.m"
                      {
#line 698 "mercury_compile.m"
                        libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_9, &top_level__mercury_compile__Target_44);
                      }
#line 706 "mercury_compile.m"
#line 706 "mercury_compile.m"
                      switch (top_level__mercury_compile__Target_44) {
#line 706 "mercury_compile.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 706 "mercury_compile.m"
                        case (MR_Integer) 0:
#line 706 "mercury_compile.m"
                        case (MR_Integer) 1:
#line 706 "mercury_compile.m"
                        case (MR_Integer) 3:
#line 710 "mercury_compile.m"
                          {
#line 710 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__V_61_61;

#line 713 "mercury_compile.m"
                            {
#line 713 "mercury_compile.m"
                              top_level__mercury_compile__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 713 "mercury_compile.m"
                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_61_61, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[0]));
#line 713 "mercury_compile.m"
                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_61_61, 1) = ((MR_Box) (top_level__mercury_compile__do_op_mode_8_p_0_1));
#line 713 "mercury_compile.m"
                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 713 "mercury_compile.m"
                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_61_61, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToLink_38));
#line 713 "mercury_compile.m"
                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_61_61, 4) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_39));
#line 713 "mercury_compile.m"
                            }
#line 711 "mercury_compile.m"
                            {
#line 711 "mercury_compile.m"
                              top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(top_level__mercury_compile__ModulesToLink_38, top_level__mercury_compile__ExtraObjFiles_39, top_level__mercury_compile__Globals_9, top_level__mercury_compile__MainModuleName_43, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__V_61_61, &top_level__mercury_compile__Succeeded_45);
                            }
#line 710 "mercury_compile.m"
                          }
#line 706 "mercury_compile.m"
                          break;
#line 706 "mercury_compile.m"
                        case (MR_Integer) 2:
#line 704 "mercury_compile.m"
                          {
#line 704 "mercury_compile.m"
                            parse_tree__module_cmds__create_java_shell_script_5_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__MainModuleName_43, &top_level__mercury_compile__Succeeded_45);
                          }
#line 706 "mercury_compile.m"
                          break;
#line 706 "mercury_compile.m"
                      }
#line 716 "mercury_compile.m"
                      {
#line 716 "mercury_compile.m"
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_45);
                      }
#line 697 "mercury_compile.m"
                    }
#line 692 "mercury_compile.m"
                  else
#line 692 "mercury_compile.m"
                    {
#line 692 "mercury_compile.m"
                    }
#line 692 "mercury_compile.m"
                }
#line 691 "mercury_compile.m"
              else
#line 725 "mercury_compile.m"
                {
#line 725 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__Limited_46;
#line 725 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__VerboseErrors_47;
#line 725 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__ExtraErrorInfo_48;

#line 725 "mercury_compile.m"
                  {
#line 725 "mercury_compile.m"
                    libs__globals__io_get_some_errors_were_context_limited_3_p_0(&top_level__mercury_compile__Limited_46);
                  }
#line 728 "mercury_compile.m"
#line 728 "mercury_compile.m"
                  switch (top_level__mercury_compile__Limited_46) {
#line 728 "mercury_compile.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 728 "mercury_compile.m"
                    case (MR_Integer) 0:
#line 727 "mercury_compile.m"
                      {
#line 727 "mercury_compile.m"
                      }
#line 728 "mercury_compile.m"
                      break;
#line 728 "mercury_compile.m"
                    case (MR_Integer) 1:
#line 729 "mercury_compile.m"
                      {
#line 730 "mercury_compile.m"
                        {
#line 730 "mercury_compile.m"
                          mercury__io__write_string_3_p_0((MR_String) "Some error messages were suppressed by \140--limit-error-contexts\' options.\n");
                        }
#line 732 "mercury_compile.m"
                        {
#line 732 "mercury_compile.m"
                          mercury__io__write_string_3_p_0((MR_String) "You can see the suppressed messages if you recompile without these options.\n");
                        }
#line 729 "mercury_compile.m"
                      }
#line 728 "mercury_compile.m"
                      break;
#line 728 "mercury_compile.m"
                  }
#line 740 "mercury_compile.m"
                  {
#line 740 "mercury_compile.m"
                    libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 48, &top_level__mercury_compile__VerboseErrors_47);
                  }
#line 741 "mercury_compile.m"
                  {
#line 741 "mercury_compile.m"
                    libs__globals__io_get_extra_error_info_3_p_0(&top_level__mercury_compile__ExtraErrorInfo_48);
                  }
#line 751 "mercury_compile.m"
#line 751 "mercury_compile.m"
                  switch (top_level__mercury_compile__VerboseErrors_47) {
#line 751 "mercury_compile.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 751 "mercury_compile.m"
                    case (MR_Integer) 0:
#line 748 "mercury_compile.m"
#line 748 "mercury_compile.m"
                      switch (top_level__mercury_compile__ExtraErrorInfo_48) {
#line 748 "mercury_compile.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 748 "mercury_compile.m"
                        case (MR_Integer) 0:
#line 749 "mercury_compile.m"
                          {
#line 749 "mercury_compile.m"
                          }
#line 748 "mercury_compile.m"
                          break;
#line 748 "mercury_compile.m"
                        case (MR_Integer) 1:
#line 745 "mercury_compile.m"
                          {
#line 746 "mercury_compile.m"
                            {
#line 746 "mercury_compile.m"
                              mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                            }
#line 745 "mercury_compile.m"
                          }
#line 748 "mercury_compile.m"
                          break;
#line 748 "mercury_compile.m"
                      }
#line 751 "mercury_compile.m"
                      break;
#line 751 "mercury_compile.m"
                    case (MR_Integer) 1:
#line 752 "mercury_compile.m"
                      {
#line 752 "mercury_compile.m"
                      }
#line 751 "mercury_compile.m"
                      break;
#line 751 "mercury_compile.m"
                  }
#line 725 "mercury_compile.m"
                }
#line 755 "mercury_compile.m"
              {
#line 755 "mercury_compile.m"
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 56, &top_level__mercury_compile__Statistics_49);
              }
#line 759 "mercury_compile.m"
#line 759 "mercury_compile.m"
              switch (top_level__mercury_compile__Statistics_49) {
#line 759 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 759 "mercury_compile.m"
                case (MR_Integer) 0:
#line 760 "mercury_compile.m"
                  {
#line 760 "mercury_compile.m"
                  }
#line 759 "mercury_compile.m"
                  break;
#line 759 "mercury_compile.m"
                case (MR_Integer) 1:
#line 757 "mercury_compile.m"
                  {
#line 758 "mercury_compile.m"
                    {
#line 758 "mercury_compile.m"
                      mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
                    }
#line 757 "mercury_compile.m"
                  }
#line 759 "mercury_compile.m"
                  break;
#line 759 "mercury_compile.m"
              }
#line 686 "mercury_compile.m"
            }
#line 533 "mercury_compile.m"
        }
#line 519 "mercury_compile.m"
        break;
#line 519 "mercury_compile.m"
    }
#line 519 "mercury_compile.m"
  }
#line 512 "mercury_compile.m"
}

#line 480 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0(
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 480 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12)
#line 480 "mercury_compile.m"
{
#line 484 "mercury_compile.m"
  {
#line 484 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 484 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Version_14;
#line 484 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Help_15;

#line 485 "mercury_compile.m"
    {
#line 485 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 651, &top_level__mercury_compile__Version_14);
    }
#line 486 "mercury_compile.m"
    {
#line 486 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 650, &top_level__mercury_compile__Help_15);
    }
#line 494 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Help_15 == (MR_Integer) 1);
#line 494 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 495 "mercury_compile.m"
      {
#line 495 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stdout_16;
#line 495 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OldOutputStream_17;
#line 498 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_18_18;

#line 495 "mercury_compile.m"
        {
#line 495 "mercury_compile.m"
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_16);
        }
#line 496 "mercury_compile.m"
        {
#line 496 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_16, &top_level__mercury_compile__OldOutputStream_17);
        }
#line 497 "mercury_compile.m"
        {
#line 497 "mercury_compile.m"
          libs__handle_options__long_usage_2_p_0();
        }
#line 498 "mercury_compile.m"
        {
#line 498 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_17, &top_level__mercury_compile__V_18_18);
        }
#line 495 "mercury_compile.m"
      }
#line 494 "mercury_compile.m"
    else
#line 499 "mercury_compile.m"
      {
#line 499 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Version_14 == (MR_Integer) 1);
#line 499 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 500 "mercury_compile.m"
          {
#line 500 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Stdout_34;
#line 500 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldOutputStream_35;
#line 503 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_19_19;

#line 500 "mercury_compile.m"
            {
#line 500 "mercury_compile.m"
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_34);
            }
#line 501 "mercury_compile.m"
            {
#line 501 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_34, &top_level__mercury_compile__OldOutputStream_35);
            }
#line 502 "mercury_compile.m"
            {
#line 502 "mercury_compile.m"
              libs__handle_options__display_compiler_version_2_p_0();
            }
#line 503 "mercury_compile.m"
            {
#line 503 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_35, &top_level__mercury_compile__V_19_19);
            }
#line 500 "mercury_compile.m"
          }
#line 499 "mercury_compile.m"
        else
#line 505 "mercury_compile.m"
          {
#line 505 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OpMode_20;

#line 505 "mercury_compile.m"
            {
#line 505 "mercury_compile.m"
              libs__globals__get_op_mode_2_p_0(top_level__mercury_compile__Globals_8, &top_level__mercury_compile__OpMode_20);
            }
#line 506 "mercury_compile.m"
            {
#line 506 "mercury_compile.m"
              top_level__mercury_compile__do_op_mode_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__OpMode_20, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12);
            }
#line 505 "mercury_compile.m"
          }
#line 499 "mercury_compile.m"
      }
#line 484 "mercury_compile.m"
  }
#line 480 "mercury_compile.m"
}

#line 411 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 411 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 411 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 411 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 411 "mercury_compile.m"
{
#line 417 "mercury_compile.m"
  {
#line 417 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 417 "mercury_compile.m"
    {
#line 417 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12, top_level__mercury_compile__FileType_13, top_level__mercury_compile__Continue_14, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);
    }
#line 417 "mercury_compile.m"
  }
#line 411 "mercury_compile.m"
}

#line 402 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 402 "mercury_compile.m"
{
#line 402 "mercury_compile.m"
  {
#line 402 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 402 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv3_Continue_14;
#line 402 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21;

#line 402 "mercury_compile.m"
    {
#line 402 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv3_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21);
    }
#line 402 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv3_Continue_14));
#line 402 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21));
#line 402 "mercury_compile.m"
  }
#line 402 "mercury_compile.m"
}

#line 402 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 402 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 402 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 402 "mercury_compile.m"
{
#line 402 "mercury_compile.m"
  {
#line 402 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 402 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_Continue_14;
#line 402 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21;

#line 402 "mercury_compile.m"
    {
#line 402 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv1_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21);
    }
#line 402 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv1_Continue_14));
#line 402 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21));
#line 402 "mercury_compile.m"
  }
#line 402 "mercury_compile.m"
}

#line 358 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 358 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 358 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 358 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8)
#line 358 "mercury_compile.m"
{
#line 361 "mercury_compile.m"
  {
#line 361 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 361 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Detect_10;

#line 362 "mercury_compile.m"
    {
#line 362 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 624, &top_level__mercury_compile__Detect_10);
    }
#line 392 "mercury_compile.m"
#line 392 "mercury_compile.m"
    switch (top_level__mercury_compile__Detect_10) {
#line 392 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 392 "mercury_compile.m"
      case (MR_Integer) 0:
#line 394 "mercury_compile.m"
        *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "mercury_compile.m"
        break;
#line 392 "mercury_compile.m"
      case (MR_Integer) 1:
#line 364 "mercury_compile.m"
        {
#line 364 "mercury_compile.m"
          MR_Word top_level__mercury_compile__VeryVerbose_13;
#line 365 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Verbose_11;
#line 373 "mercury_compile.m"
          MR_String top_level__mercury_compile__MerStdLibDir_15;
#line 376 "mercury_compile.m"
          MR_Word top_level__mercury_compile__MaybeStdLibDir_14;

#line 365 "mercury_compile.m"
          {
#line 365 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 46, &top_level__mercury_compile__Verbose_11);
          }
#line 370 "mercury_compile.m"
          {
#line 370 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 47, &top_level__mercury_compile__VeryVerbose_13);
          }
#line 375 "mercury_compile.m"
          {
#line 375 "mercury_compile.m"
            libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 541, &top_level__mercury_compile__MaybeStdLibDir_14);
          }
#line 377 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeStdLibDir_14)) == (MR_mktag((MR_Integer) 1)));
#line 377 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 377 "mercury_compile.m"
            {
#line 377 "mercury_compile.m"
              top_level__mercury_compile__MerStdLibDir_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeStdLibDir_14, (MR_Integer) 0)));
#line 400 "mercury_compile.m"
              {
#line 400 "mercury_compile.m"
                MR_String top_level__mercury_compile__ModulesDir_39;
#line 400 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MaybeGradeOpts_40;
#line 400 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_44_44;

#line 401 "mercury_compile.m"
                {
#line 401 "mercury_compile.m"
                  top_level__mercury_compile__ModulesDir_39 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_15, (MR_String) "modules");
                }
#line 402 "mercury_compile.m"
                {
#line 402 "mercury_compile.m"
                  top_level__mercury_compile__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_5[0]));
#line 402 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_1));
#line 402 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 402 "mercury_compile.m"
                }
#line 402 "mercury_compile.m"
                {
#line 402 "mercury_compile.m"
                  mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_44_44, top_level__mercury_compile__ModulesDir_39, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_40);
                }
#line 406 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_40)) == (MR_mktag((MR_Integer) 1))))
#line 408 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "mercury_compile.m"
                else
#line 405 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_40, (MR_Integer) 0)));
#line 400 "mercury_compile.m"
              }
#line 377 "mercury_compile.m"
            }
#line 377 "mercury_compile.m"
          else
#line 380 "mercury_compile.m"
            {
#line 380 "mercury_compile.m"
              MR_String top_level__mercury_compile__MerStdLibDir_32;
#line 383 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_26_26;
#line 383 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_27_27;

#line 383 "mercury_compile.m"
              top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeConfigMerStdLibDir_7)) == (MR_mktag((MR_Integer) 1)));
#line 383 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 383 "mercury_compile.m"
                {
#line 383 "mercury_compile.m"
                  top_level__mercury_compile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigMerStdLibDir_7, (MR_Integer) 0)));
#line 383 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 383 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 383 "mercury_compile.m"
                    {
#line 383 "mercury_compile.m"
                      top_level__mercury_compile__MerStdLibDir_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 0)));
#line 383 "mercury_compile.m"
                      top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 1)));
#line 383 "mercury_compile.m"
                      top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 383 "mercury_compile.m"
                    }
#line 383 "mercury_compile.m"
                }
#line 380 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 400 "mercury_compile.m"
                {
#line 400 "mercury_compile.m"
                  MR_String top_level__mercury_compile__ModulesDir_62;
#line 400 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__MaybeGradeOpts_63;
#line 400 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_67_67;

#line 401 "mercury_compile.m"
                  {
#line 401 "mercury_compile.m"
                    top_level__mercury_compile__ModulesDir_62 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_32, (MR_String) "modules");
                  }
#line 402 "mercury_compile.m"
                  {
#line 402 "mercury_compile.m"
                    top_level__mercury_compile__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_5[0]));
#line 402 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_2));
#line 402 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 402 "mercury_compile.m"
                  }
#line 402 "mercury_compile.m"
                  {
#line 402 "mercury_compile.m"
                    mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_67_67, top_level__mercury_compile__ModulesDir_62, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_63);
                  }
#line 406 "mercury_compile.m"
                  if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_63)) == (MR_mktag((MR_Integer) 1))))
#line 408 "mercury_compile.m"
                    *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "mercury_compile.m"
                  else
#line 405 "mercury_compile.m"
                    *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_63, (MR_Integer) 0)));
#line 400 "mercury_compile.m"
                }
#line 380 "mercury_compile.m"
              else
#line 387 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 380 "mercury_compile.m"
            }
#line 364 "mercury_compile.m"
        }
#line 392 "mercury_compile.m"
        break;
#line 392 "mercury_compile.m"
    }
#line 361 "mercury_compile.m"
  }
#line 358 "mercury_compile.m"
}

#line 216 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 216 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4)
#line 216 "mercury_compile.m"
{
#line 12602 "top_level.mercury_compile.c"
  {
#line 12604 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__CmdLineArgs_4)) == (MR_mktag((MR_Integer) 1)));
#line 12606 "top_level.mercury_compile.c"
    MR_String top_level__mercury_compile__ArgFile_6;
#line 12608 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__ExtraArgs_7;
#line 221 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_44_44;
#line 221 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_45_45;

#line 221 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 221 "mercury_compile.m"
      {
#line 221 "mercury_compile.m"
        top_level__mercury_compile__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 0)));
#line 221 "mercury_compile.m"
        top_level__mercury_compile__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 1)));
#line 221 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_44_44, (MR_String) "--arg-file") == 0);
#line 221 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 221 "mercury_compile.m"
          {
#line 221 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 221 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 221 "mercury_compile.m"
              {
#line 221 "mercury_compile.m"
                top_level__mercury_compile__ArgFile_6 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, (MR_Integer) 0)));
#line 221 "mercury_compile.m"
                top_level__mercury_compile__ExtraArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, (MR_Integer) 1)));
#line 221 "mercury_compile.m"
              }
#line 221 "mercury_compile.m"
          }
#line 221 "mercury_compile.m"
      }
#line 12645 "top_level.mercury_compile.c"
    if (top_level__mercury_compile__succeeded)
#line 12647 "top_level.mercury_compile.c"
      {
#line 12649 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__TypeCtorInfo_76_76;
#line 12651 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DummyGlobals_10;
#line 12653 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeArgs1_11;
#line 12655 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_13;
#line 12657 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_14;
#line 12659 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DetectedGradeFlags_15;
#line 12661 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Variables_16;
#line 12663 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__AllFlags_35;
#line 12665 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Specs_38;
#line 12667 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ActualGlobals_39;
#line 12669 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_70_70;
#line 336 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_36_36;
#line 336 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_37_37;

#line 232 "mercury_compile.m"
        if ((top_level__mercury_compile__ExtraArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "mercury_compile.m"
          {
#line 231 "mercury_compile.m"
          }
#line 232 "mercury_compile.m"
        else
#line 233 "mercury_compile.m"
          {
#line 233 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_48_48;
#line 233 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_50_50;

#line 235 "mercury_compile.m"
            {
#line 235 "mercury_compile.m"
              top_level__mercury_compile__V_50_50 = mercury__string__string_1_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], ((MR_Box) (top_level__mercury_compile__ExtraArgs_7)));
            }
#line 235 "mercury_compile.m"
            {
#line 235 "mercury_compile.m"
              top_level__mercury_compile__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", top_level__mercury_compile__V_50_50);
            }
#line 234 "mercury_compile.m"
            {
#line 234 "mercury_compile.m"
              mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile", (MR_String) "predicate \140top_level.mercury_compile.real_main_after_expansion\'/3", top_level__mercury_compile__V_48_48);
#line 234 "mercury_compile.m"
              return;
            }
#line 233 "mercury_compile.m"
          }
#line 240 "mercury_compile.m"
        {
#line 240 "mercury_compile.m"
          libs__handle_options__generate_default_globals_3_p_0(&top_level__mercury_compile__DummyGlobals_10);
        }
#line 241 "mercury_compile.m"
        {
#line 241 "mercury_compile.m"
          make__options_file__read_args_file_5_p_0(top_level__mercury_compile__DummyGlobals_10, top_level__mercury_compile__ArgFile_6, &top_level__mercury_compile__MaybeArgs1_11);
        }
#line 245 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeArgs1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 246 "mercury_compile.m"
          {
#line 247 "mercury_compile.m"
            top_level__mercury_compile__OptionArgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "mercury_compile.m"
            top_level__mercury_compile__NonOptionArgs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "mercury_compile.m"
          }
#line 245 "mercury_compile.m"
        else
#line 243 "mercury_compile.m"
          {
#line 243 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeArgs1_11, (MR_Integer) 0)));

#line 244 "mercury_compile.m"
            {
#line 244 "mercury_compile.m"
              libs__handle_options__separate_option_args_5_p_0(top_level__mercury_compile__Args1_12, &top_level__mercury_compile__OptionArgs_13, &top_level__mercury_compile__NonOptionArgs_14);
            }
#line 243 "mercury_compile.m"
          }
#line 250 "mercury_compile.m"
        top_level__mercury_compile__DetectedGradeFlags_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "mercury_compile.m"
        {
#line 251 "mercury_compile.m"
          top_level__mercury_compile__Variables_16 = make__options_file__options_variables_init_0_f_0();
        }
#line 12751 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 335 "mercury_compile.m"
        {
#line 335 "mercury_compile.m"
          top_level__mercury_compile__V_70_70 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__OptionArgs_13);
        }
#line 335 "mercury_compile.m"
        {
#line 335 "mercury_compile.m"
          top_level__mercury_compile__AllFlags_35 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_76_76, top_level__mercury_compile__DetectedGradeFlags_15, top_level__mercury_compile__V_70_70);
        }
#line 336 "mercury_compile.m"
        {
#line 336 "mercury_compile.m"
          libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile__AllFlags_35, &top_level__mercury_compile__V_36_36, &top_level__mercury_compile__V_37_37, &top_level__mercury_compile__Specs_38, &top_level__mercury_compile__ActualGlobals_39);
        }
#line 343 "mercury_compile.m"
        if ((top_level__mercury_compile__Specs_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "mercury_compile.m"
          {
#line 345 "mercury_compile.m"
            top_level__mercury_compile__main_after_setup_7_p_0(top_level__mercury_compile__ActualGlobals_39, top_level__mercury_compile__DetectedGradeFlags_15, top_level__mercury_compile__Variables_16, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__NonOptionArgs_14);
          }
#line 343 "mercury_compile.m"
        else
#line 342 "mercury_compile.m"
          {
#line 342 "mercury_compile.m"
            libs__handle_options__usage_errors_4_p_0(top_level__mercury_compile__ActualGlobals_39, top_level__mercury_compile__Specs_38);
          }
#line 12782 "top_level.mercury_compile.c"
      }
#line 12784 "top_level.mercury_compile.c"
    else
#line 12786 "top_level.mercury_compile.c"
      {
#line 12788 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ArgsGlobals_19;
#line 12790 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeVariables0_20;
#line 12792 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_56_56;
#line 12794 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_97;
#line 12796 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_98;
#line 257 "mercury_compile.m"
        MR_Word top_level__mercury_compile___Errors0_18;

#line 257 "mercury_compile.m"
        {
#line 257 "mercury_compile.m"
          libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile__CmdLineArgs_4, &top_level__mercury_compile__OptionArgs_97, &top_level__mercury_compile__NonOptionArgs_98, &top_level__mercury_compile___Errors0_18, &top_level__mercury_compile__ArgsGlobals_19);
        }
#line 259 "mercury_compile.m"
        {
#line 259 "mercury_compile.m"
          top_level__mercury_compile__V_56_56 = make__options_file__options_variables_init_0_f_0();
        }
#line 259 "mercury_compile.m"
        {
#line 259 "mercury_compile.m"
          make__options_file__read_options_files_5_p_0(top_level__mercury_compile__ArgsGlobals_19, top_level__mercury_compile__V_56_56, &top_level__mercury_compile__MaybeVariables0_20);
        }
#line 12816 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__MaybeVariables0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12818 "top_level.mercury_compile.c"
          {
#line 315 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Variables_100;

#line 315 "mercury_compile.m"
            {
#line 315 "mercury_compile.m"
              top_level__mercury_compile__Variables_100 = make__options_file__options_variables_init_0_f_0();
            }
#line 350 "mercury_compile.m"
            {
#line 350 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 12833 "top_level.mercury_compile.c"
          }
#line 12835 "top_level.mercury_compile.c"
        else
#line 12837 "top_level.mercury_compile.c"
          {
#line 12839 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Variables0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables0_20, (MR_Integer) 0)));
#line 12841 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MaybeMCFlags0_22;

#line 263 "mercury_compile.m"
            {
#line 263 "mercury_compile.m"
              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__ArgsGlobals_19, top_level__mercury_compile__Variables0_21, &top_level__mercury_compile__MaybeMCFlags0_22);
            }
#line 12849 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__MaybeMCFlags0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12851 "top_level.mercury_compile.c"
              {
#line 309 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Variables_116;

#line 309 "mercury_compile.m"
                {
#line 309 "mercury_compile.m"
                  top_level__mercury_compile__Variables_116 = make__options_file__options_variables_init_0_f_0();
                }
#line 350 "mercury_compile.m"
                {
#line 350 "mercury_compile.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 12866 "top_level.mercury_compile.c"
              }
#line 12868 "top_level.mercury_compile.c"
            else
#line 12870 "top_level.mercury_compile.c"
              {
#line 12872 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MCFlags0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags0_22, (MR_Integer) 0)));
#line 12874 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsSpecs_26;
#line 12876 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsArgsGlobals_27;
#line 12878 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__V_59_59;
#line 12880 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__DetectedGradeFlags_122;
#line 12882 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__Variables_123;
#line 12884 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MaybeMCFlags_124;
#line 269 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_24_24;
#line 269 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_25_25;

#line 269 "mercury_compile.m"
                {
#line 269 "mercury_compile.m"
                  top_level__mercury_compile__V_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__MCFlags0_23, top_level__mercury_compile__CmdLineArgs_4);
                }
#line 269 "mercury_compile.m"
                {
#line 269 "mercury_compile.m"
                  libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile__V_59_59, &top_level__mercury_compile__V_24_24, &top_level__mercury_compile__V_25_25, &top_level__mercury_compile__FlagsSpecs_26, &top_level__mercury_compile__FlagsArgsGlobals_27);
                }
#line 277 "mercury_compile.m"
                if ((top_level__mercury_compile__FlagsSpecs_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "mercury_compile.m"
                  {
#line 278 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MaybeConfigFile_30;

#line 279 "mercury_compile.m"
                    {
#line 279 "mercury_compile.m"
                      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__FlagsArgsGlobals_27, (MR_Integer) 631, &top_level__mercury_compile__MaybeConfigFile_30);
                    }
#line 299 "mercury_compile.m"
                    if ((top_level__mercury_compile__MaybeConfigFile_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "mercury_compile.m"
                      {
#line 301 "mercury_compile.m"
                        top_level__mercury_compile__DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "mercury_compile.m"
                        {
#line 302 "mercury_compile.m"
                          top_level__mercury_compile__Variables_123 = make__options_file__options_variables_init_0_f_0();
                        }
#line 303 "mercury_compile.m"
                        {
#line 303 "mercury_compile.m"
                          make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_27, top_level__mercury_compile__Variables_123, &top_level__mercury_compile__MaybeMCFlags_124);
                        }
#line 300 "mercury_compile.m"
                      }
#line 299 "mercury_compile.m"
                    else
#line 282 "mercury_compile.m"
                      {
#line 282 "mercury_compile.m"
                        MR_String top_level__mercury_compile__ConfigFile_31 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigFile_30, (MR_Integer) 0)));
#line 282 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__MaybeVariables_32;

#line 283 "mercury_compile.m"
                        {
#line 283 "mercury_compile.m"
                          make__options_file__read_options_file_6_p_0(top_level__mercury_compile__FlagsArgsGlobals_27, top_level__mercury_compile__ConfigFile_31, top_level__mercury_compile__Variables0_21, &top_level__mercury_compile__MaybeVariables_32);
                        }
#line 293 "mercury_compile.m"
                        if ((top_level__mercury_compile__MaybeVariables_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "mercury_compile.m"
                          {
#line 295 "mercury_compile.m"
                            top_level__mercury_compile__MaybeMCFlags_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 296 "mercury_compile.m"
                            top_level__mercury_compile__DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "mercury_compile.m"
                            {
#line 297 "mercury_compile.m"
                              top_level__mercury_compile__Variables_123 = make__options_file__options_variables_init_0_f_0();
                            }
#line 294 "mercury_compile.m"
                          }
#line 293 "mercury_compile.m"
                        else
#line 286 "mercury_compile.m"
                          {
#line 286 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__MaybeMerStdLibDir_33;

#line 286 "mercury_compile.m"
                            top_level__mercury_compile__Variables_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables_32, (MR_Integer) 0)));
#line 287 "mercury_compile.m"
                            {
#line 287 "mercury_compile.m"
                              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_27, top_level__mercury_compile__Variables_123, &top_level__mercury_compile__MaybeMCFlags_124);
                            }
#line 289 "mercury_compile.m"
                            {
#line 289 "mercury_compile.m"
                              make__options_file__lookup_mercury_stdlib_dir_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_27, top_level__mercury_compile__Variables_123, &top_level__mercury_compile__MaybeMerStdLibDir_33);
                            }
#line 291 "mercury_compile.m"
                            {
#line 291 "mercury_compile.m"
                              top_level__mercury_compile__detect_libgrades_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_27, top_level__mercury_compile__MaybeMerStdLibDir_33, &top_level__mercury_compile__DetectedGradeFlags_122);
                            }
#line 286 "mercury_compile.m"
                          }
#line 282 "mercury_compile.m"
                      }
#line 278 "mercury_compile.m"
                  }
#line 277 "mercury_compile.m"
                else
#line 272 "mercury_compile.m"
                  {
#line 273 "mercury_compile.m"
                    {
#line 273 "mercury_compile.m"
                      libs__handle_options__usage_errors_4_p_0(top_level__mercury_compile__FlagsArgsGlobals_27, top_level__mercury_compile__FlagsSpecs_26);
                    }
#line 274 "mercury_compile.m"
                    top_level__mercury_compile__DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 275 "mercury_compile.m"
                    {
#line 275 "mercury_compile.m"
                      top_level__mercury_compile__Variables_123 = make__options_file__options_variables_init_0_f_0();
                    }
#line 276 "mercury_compile.m"
                    top_level__mercury_compile__MaybeMCFlags_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "mercury_compile.m"
                  }
#line 348 "mercury_compile.m"
                if ((top_level__mercury_compile__MaybeMCFlags_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "mercury_compile.m"
                  {
#line 350 "mercury_compile.m"
                    {
#line 350 "mercury_compile.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
#line 349 "mercury_compile.m"
                  }
#line 348 "mercury_compile.m"
                else
#line 321 "mercury_compile.m"
                  {
#line 321 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TypeCtorInfo_76_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 321 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MCFlags_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags_124, (MR_Integer) 0)));
#line 321 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__AllFlags_80;
#line 321 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Specs_83;
#line 321 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ActualGlobals_84;
#line 321 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_85_85;
#line 336 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_77_77;
#line 336 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_78_78;

#line 335 "mercury_compile.m"
                    {
#line 335 "mercury_compile.m"
                      top_level__mercury_compile__V_85_85 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_76_87, top_level__mercury_compile__MCFlags_79, top_level__mercury_compile__OptionArgs_97);
                    }
#line 335 "mercury_compile.m"
                    {
#line 335 "mercury_compile.m"
                      top_level__mercury_compile__AllFlags_80 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_76_87, top_level__mercury_compile__DetectedGradeFlags_122, top_level__mercury_compile__V_85_85);
                    }
#line 336 "mercury_compile.m"
                    {
#line 336 "mercury_compile.m"
                      libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile__AllFlags_80, &top_level__mercury_compile__V_77_77, &top_level__mercury_compile__V_78_78, &top_level__mercury_compile__Specs_83, &top_level__mercury_compile__ActualGlobals_84);
                    }
#line 343 "mercury_compile.m"
                    if ((top_level__mercury_compile__Specs_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "mercury_compile.m"
                      {
#line 345 "mercury_compile.m"
                        top_level__mercury_compile__main_after_setup_7_p_0(top_level__mercury_compile__ActualGlobals_84, top_level__mercury_compile__DetectedGradeFlags_122, top_level__mercury_compile__Variables_123, top_level__mercury_compile__OptionArgs_97, top_level__mercury_compile__NonOptionArgs_98);
                      }
#line 343 "mercury_compile.m"
                    else
#line 342 "mercury_compile.m"
                      {
#line 342 "mercury_compile.m"
                        libs__handle_options__usage_errors_4_p_0(top_level__mercury_compile__ActualGlobals_84, top_level__mercury_compile__Specs_83);
                      }
#line 321 "mercury_compile.m"
                  }
#line 13073 "top_level.mercury_compile.c"
              }
#line 13075 "top_level.mercury_compile.c"
          }
#line 13077 "top_level.mercury_compile.c"
      }
#line 13079 "top_level.mercury_compile.c"
  }
#line 216 "mercury_compile.m"
}

#line 186 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 186 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 186 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6)
#line 186 "mercury_compile.m"
{
#line 189 "mercury_compile.m"
  {
#line 189 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 189 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LineRes_8;

#line 190 "mercury_compile.m"
    {
#line 190 "mercury_compile.m"
      mercury__io__read_line_as_string_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__LineRes_8);
    }
#line 206 "mercury_compile.m"
#line 206 "mercury_compile.m"
    switch (MR_tag((MR_Word) top_level__mercury_compile__LineRes_8)) {
#line 206 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 206 "mercury_compile.m"
      case (MR_Integer) 0:
#line 207 "mercury_compile.m"
        {
#line 208 "mercury_compile.m"
          *top_level__mercury_compile__Res_6 = (MR_Word) &top_level__mercury_compile_scalar_common_4[0];
#line 207 "mercury_compile.m"
        }
#line 206 "mercury_compile.m"
        break;
#line 206 "mercury_compile.m"
      case (MR_Integer) 1:
#line 192 "mercury_compile.m"
        {
#line 192 "mercury_compile.m"
          MR_String top_level__mercury_compile__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));
#line 192 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res0_10;

#line 193 "mercury_compile.m"
          {
#line 193 "mercury_compile.m"
            top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__Res0_10);
          }
#line 202 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res0_10)) == (MR_mktag((MR_Integer) 1))))
#line 204 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 202 "mercury_compile.m"
          else
#line 195 "mercury_compile.m"
            {
#line 195 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Lines_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res0_10, (MR_Integer) 0)));
#line 195 "mercury_compile.m"
              MR_String top_level__mercury_compile__StrippedLine_12;

#line 196 "mercury_compile.m"
              {
#line 196 "mercury_compile.m"
                top_level__mercury_compile__StrippedLine_12 = mercury__string__strip_1_f_0(top_level__mercury_compile__Line_9);
              }
#line 197 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__StrippedLine_12, (MR_String) "") == 0);
#line 197 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 198 "mercury_compile.m"
                *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 197 "mercury_compile.m"
              else
#line 200 "mercury_compile.m"
                {
#line 200 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_20_20;

#line 200 "mercury_compile.m"
                  {
#line 200 "mercury_compile.m"
                    top_level__mercury_compile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 0) = ((MR_Box) (top_level__mercury_compile__StrippedLine_12));
#line 200 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 1) = ((MR_Box) (top_level__mercury_compile__Lines_11));
#line 200 "mercury_compile.m"
                  }
#line 200 "mercury_compile.m"
                  {
#line 200 "mercury_compile.m"
                    MR_Word base;
#line 200 "mercury_compile.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 200 "mercury_compile.m"
                    *top_level__mercury_compile__Res_6 = base;
#line 200 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_20_20));
#line 200 "mercury_compile.m"
                  }
#line 200 "mercury_compile.m"
                }
#line 195 "mercury_compile.m"
            }
#line 192 "mercury_compile.m"
        }
#line 206 "mercury_compile.m"
        break;
#line 206 "mercury_compile.m"
      case (MR_Integer) 2:
#line 210 "mercury_compile.m"
        {
#line 210 "mercury_compile.m"
          MR_Word top_level__mercury_compile__E_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));

#line 211 "mercury_compile.m"
          {
#line 211 "mercury_compile.m"
            MR_Word base;
#line 211 "mercury_compile.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = base;
#line 211 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__E_14));
#line 211 "mercury_compile.m"
          }
#line 210 "mercury_compile.m"
        }
#line 206 "mercury_compile.m"
        break;
#line 206 "mercury_compile.m"
    }
#line 189 "mercury_compile.m"
  }
#line 186 "mercury_compile.m"
}

#line 144 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 144 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 144 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2)
#line 144 "mercury_compile.m"
{
#line 147 "mercury_compile.m"
  while (MR_TRUE)
#line 147 "mercury_compile.m"
    {
#line 147 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 147 "mercury_compile.m"
      {
#line 147 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 147 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "mercury_compile.m"
          {
#line 147 "mercury_compile.m"
            *top_level__mercury_compile__HeadVar__2_2 = (MR_Word) &top_level__mercury_compile_scalar_common_4[0];
#line 147 "mercury_compile.m"
          }
#line 147 "mercury_compile.m"
        else
#line 148 "mercury_compile.m"
          {
#line 148 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));
#line 149 "mercury_compile.m"
            MR_String top_level__mercury_compile__File_13;

#line 149 "mercury_compile.m"
            {
#line 149 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", top_level__mercury_compile__Arg_9, &top_level__mercury_compile__File_13);
            }
#line 149 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 150 "mercury_compile.m"
              {
#line 150 "mercury_compile.m"
                MR_Word top_level__mercury_compile__OpenRes_14;

#line 150 "mercury_compile.m"
                {
#line 150 "mercury_compile.m"
                  mercury__io__open_input_4_p_0(top_level__mercury_compile__File_13, &top_level__mercury_compile__OpenRes_14);
                }
#line 161 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 162 "mercury_compile.m"
                  {
#line 162 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Msg_20;
#line 162 "mercury_compile.m"
                    MR_String top_level__mercury_compile__V_28_28;
#line 162 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_30_30;

#line 163 "mercury_compile.m"
                    {
#line 163 "mercury_compile.m"
                      top_level__mercury_compile__V_28_28 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, (MR_String) "\'");
                    }
#line 163 "mercury_compile.m"
                    {
#line 163 "mercury_compile.m"
                      top_level__mercury_compile__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", top_level__mercury_compile__V_28_28);
                    }
#line 164 "mercury_compile.m"
                    {
#line 164 "mercury_compile.m"
                      top_level__mercury_compile__V_30_30 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__Msg_20);
                    }
#line 164 "mercury_compile.m"
                    {
#line 164 "mercury_compile.m"
                      MR_Word base;
#line 164 "mercury_compile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 164 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 164 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 164 "mercury_compile.m"
                    }
#line 162 "mercury_compile.m"
                  }
#line 161 "mercury_compile.m"
                else
#line 152 "mercury_compile.m"
                  {
#line 152 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__S_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenRes_14, (MR_Integer) 0)));
#line 152 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ReadRes_16;

#line 153 "mercury_compile.m"
                    {
#line 153 "mercury_compile.m"
                      top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_15, &top_level__mercury_compile__ReadRes_16);
                    }
#line 157 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__ReadRes_16)) == (MR_mktag((MR_Integer) 1))))
#line 158 "mercury_compile.m"
                      {
#line 158 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__E_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 158 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_32_32;
#line 158 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_43_43;
#line 158 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_45_45;
#line 158 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_46_46;
#line 158 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_48_48;

#line 181 "mercury_compile.m"
                        {
#line 181 "mercury_compile.m"
                          top_level__mercury_compile__V_48_48 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_18);
                        }
#line 181 "mercury_compile.m"
                        {
#line 181 "mercury_compile.m"
                          top_level__mercury_compile__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", top_level__mercury_compile__V_48_48);
                        }
#line 180 "mercury_compile.m"
                        {
#line 180 "mercury_compile.m"
                          top_level__mercury_compile__V_45_45 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, top_level__mercury_compile__V_46_46);
                        }
#line 180 "mercury_compile.m"
                        {
#line 180 "mercury_compile.m"
                          top_level__mercury_compile__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", top_level__mercury_compile__V_45_45);
                        }
#line 180 "mercury_compile.m"
                        {
#line 180 "mercury_compile.m"
                          top_level__mercury_compile__V_32_32 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__V_43_43);
                        }
#line 159 "mercury_compile.m"
                        {
#line 159 "mercury_compile.m"
                          MR_Word base;
#line 159 "mercury_compile.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 159 "mercury_compile.m"
                          *top_level__mercury_compile__HeadVar__2_2 = base;
#line 159 "mercury_compile.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_32_32));
#line 159 "mercury_compile.m"
                        }
#line 158 "mercury_compile.m"
                      }
#line 157 "mercury_compile.m"
                    else
#line 155 "mercury_compile.m"
                      {
#line 155 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__FileArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 155 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_33_33;

#line 156 "mercury_compile.m"
                        {
#line 156 "mercury_compile.m"
                          top_level__mercury_compile__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__FileArgs_17, top_level__mercury_compile__Args_10);
                        }
#line 156 "mercury_compile.m"
                        /* direct tailcall eliminated */
#line 156 "mercury_compile.m"
                        {
#line 156 "mercury_compile.m"
                          MR_Word top_level__mercury_compile__HeadVar__1__tmp_copy_1 = top_level__mercury_compile__V_33_33;

#line 156 "mercury_compile.m"
                          top_level__mercury_compile__HeadVar__1_1 = top_level__mercury_compile__HeadVar__1__tmp_copy_1;
#line 156 "mercury_compile.m"
                        }
#line 156 "mercury_compile.m"
                        continue;
#line 155 "mercury_compile.m"
                      }
#line 152 "mercury_compile.m"
                  }
#line 150 "mercury_compile.m"
              }
#line 149 "mercury_compile.m"
            else
#line 167 "mercury_compile.m"
              {
#line 167 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Result0_21;

#line 167 "mercury_compile.m"
                {
#line 167 "mercury_compile.m"
                  top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__Args_10, &top_level__mercury_compile__Result0_21);
                }
#line 171 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__Result0_21)) == (MR_mktag((MR_Integer) 1))))
#line 173 "mercury_compile.m"
                  *top_level__mercury_compile__HeadVar__2_2 = top_level__mercury_compile__Result0_21;
#line 171 "mercury_compile.m"
                else
#line 169 "mercury_compile.m"
                  {
#line 169 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ExpandedArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Result0_21, (MR_Integer) 0)));
#line 169 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_36_36;

#line 170 "mercury_compile.m"
                    {
#line 170 "mercury_compile.m"
                      top_level__mercury_compile__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 0) = ((MR_Box) (top_level__mercury_compile__Arg_9));
#line 170 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile__ExpandedArgs_22));
#line 170 "mercury_compile.m"
                    }
#line 170 "mercury_compile.m"
                    {
#line 170 "mercury_compile.m"
                      MR_Word base;
#line 170 "mercury_compile.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 170 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 170 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_36_36));
#line 170 "mercury_compile.m"
                    }
#line 169 "mercury_compile.m"
                  }
#line 167 "mercury_compile.m"
              }
#line 148 "mercury_compile.m"
          }
#line 147 "mercury_compile.m"
      }
#line 147 "mercury_compile.m"
      break;
#line 147 "mercury_compile.m"
    }
#line 144 "mercury_compile.m"
}

#line 37 "mercury_compile.m"
void MR_CALL 
top_level__mercury_compile__main_for_make_4_p_0(
#line 37 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_5,
#line 37 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_6)
#line 37 "mercury_compile.m"
{
#line 475 "mercury_compile.m"
  {
#line 475 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 475 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_11_11;
#line 475 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Version_22;
#line 475 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Help_23;

#line 476 "mercury_compile.m"
    {
#line 476 "mercury_compile.m"
      top_level__mercury_compile__V_11_11 = make__options_file__options_variables_init_0_f_0();
    }
#line 485 "mercury_compile.m"
    {
#line 485 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 651, &top_level__mercury_compile__Version_22);
    }
#line 486 "mercury_compile.m"
    {
#line 486 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_5, (MR_Integer) 650, &top_level__mercury_compile__Help_23);
    }
#line 494 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Help_23 == (MR_Integer) 1);
#line 494 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 495 "mercury_compile.m"
      {
#line 495 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stdout_24;
#line 495 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OldOutputStream_25;
#line 498 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_26_26;

#line 495 "mercury_compile.m"
        {
#line 495 "mercury_compile.m"
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_24);
        }
#line 496 "mercury_compile.m"
        {
#line 496 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_24, &top_level__mercury_compile__OldOutputStream_25);
        }
#line 497 "mercury_compile.m"
        {
#line 497 "mercury_compile.m"
          libs__handle_options__long_usage_2_p_0();
        }
#line 498 "mercury_compile.m"
        {
#line 498 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_25, &top_level__mercury_compile__V_26_26);
        }
#line 495 "mercury_compile.m"
      }
#line 494 "mercury_compile.m"
    else
#line 499 "mercury_compile.m"
      {
#line 499 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Version_22 == (MR_Integer) 1);
#line 499 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 500 "mercury_compile.m"
          {
#line 500 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Stdout_40;
#line 500 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldOutputStream_41;
#line 503 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_27_27;

#line 500 "mercury_compile.m"
            {
#line 500 "mercury_compile.m"
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_40);
            }
#line 501 "mercury_compile.m"
            {
#line 501 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_40, &top_level__mercury_compile__OldOutputStream_41);
            }
#line 502 "mercury_compile.m"
            {
#line 502 "mercury_compile.m"
              libs__handle_options__display_compiler_version_2_p_0();
            }
#line 503 "mercury_compile.m"
            {
#line 503 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_41, &top_level__mercury_compile__V_27_27);
            }
#line 500 "mercury_compile.m"
          }
#line 499 "mercury_compile.m"
        else
#line 505 "mercury_compile.m"
          {
#line 505 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OpMode_28;

#line 505 "mercury_compile.m"
            {
#line 505 "mercury_compile.m"
              libs__globals__get_op_mode_2_p_0(top_level__mercury_compile__Globals_5, &top_level__mercury_compile__OpMode_28);
            }
#line 506 "mercury_compile.m"
            {
#line 506 "mercury_compile.m"
              top_level__mercury_compile__do_op_mode_8_p_0(top_level__mercury_compile__Globals_5, top_level__mercury_compile__OpMode_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_11_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Args_6);
            }
#line 505 "mercury_compile.m"
          }
#line 499 "mercury_compile.m"
      }
#line 475 "mercury_compile.m"
  }
#line 37 "mercury_compile.m"
}

#line 32 "mercury_compile.m"
void MR_CALL 
top_level__mercury_compile__real_main_2_p_0(void)
#line 32 "mercury_compile.m"
{
#line 116 "mercury_compile.m"
  {
#line 116 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 116 "mercury_compile.m"
    MR_Word top_level__mercury_compile__StdErr_4;
#line 116 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CmdLineArgs_6;
#line 116 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Res_7;
#line 121 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_5_5;

#line 2308 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__real_main_2_p_0


		{
#line 2308 "mercury_compile.m"

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

#line 13662 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2308 "mercury_compile.m"
}
#line 120 "mercury_compile.m"
    {
#line 120 "mercury_compile.m"
      mercury__io__stderr_stream_3_p_0(&top_level__mercury_compile__StdErr_4);
    }
#line 121 "mercury_compile.m"
    {
#line 121 "mercury_compile.m"
      mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__StdErr_4, &top_level__mercury_compile__V_5_5);
    }
#line 122 "mercury_compile.m"
    {
#line 122 "mercury_compile.m"
      mercury__io__command_line_arguments_3_p_0(&top_level__mercury_compile__CmdLineArgs_6);
    }
#line 124 "mercury_compile.m"
    {
#line 124 "mercury_compile.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 127 "mercury_compile.m"
    {
#line 127 "mercury_compile.m"
      top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__CmdLineArgs_6, &top_level__mercury_compile__Res_7);
    }
#line 131 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__Res_7)) == (MR_mktag((MR_Integer) 1))))
#line 132 "mercury_compile.m"
      {
#line 132 "mercury_compile.m"
        MR_Word top_level__mercury_compile__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_7, (MR_Integer) 0)));
#line 132 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_20_20;

#line 133 "mercury_compile.m"
        {
#line 133 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 135 "mercury_compile.m"
        {
#line 135 "mercury_compile.m"
          top_level__mercury_compile__V_20_20 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_9);
        }
#line 135 "mercury_compile.m"
        {
#line 135 "mercury_compile.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_20_20);
        }
#line 136 "mercury_compile.m"
        {
#line 136 "mercury_compile.m"
          mercury__io__nl_2_p_0();
        }
#line 132 "mercury_compile.m"
      }
#line 131 "mercury_compile.m"
    else
#line 129 "mercury_compile.m"
      {
#line 129 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ExpandedCmdLineArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_7, (MR_Integer) 0)));

#line 130 "mercury_compile.m"
        {
#line 130 "mercury_compile.m"
          top_level__mercury_compile__real_main_after_expansion_3_p_0(top_level__mercury_compile__ExpandedCmdLineArgs_8);
        }
#line 129 "mercury_compile.m"
      }
#line 116 "mercury_compile.m"
  }
#line 32 "mercury_compile.m"
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
	MR_register_type_ctor_info(&top_level__mercury_compile__top_level__mercury_compile__type_ctor_info_maybe_write_d_file_0);
}

void mercury__top_level__mercury_compile__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile. */
