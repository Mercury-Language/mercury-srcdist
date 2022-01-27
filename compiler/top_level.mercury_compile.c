/*
** Automatically generated from `mercury_compile.m'
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
#include "hlds.vartypes.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
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
#include "parse_tree.status.mih"
#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.check.mih"
#include "recompilation.usage.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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




#line 202 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 205 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0;

#line 208 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 211 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 214 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

#line 217 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 220 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 223 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 226 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 229 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 232 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 235 "top_level.mercury_compile.c"
static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 238 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1];

#line 241 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0;

#line 244 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1];

#line 247 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1;

#line 250 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1];

#line 253 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1];

#line 256 "top_level.mercury_compile.c"
static const MR_DuPtagLayout top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0[2];

#line 259 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2];

#line 262 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2];

#line 265 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 268 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 270 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 273 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 276 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 278 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 280 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 283 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 286 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 288 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 291 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 294 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 296 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 298 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_52_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1340 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 2288 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 1293 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1293 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 800 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 800 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 800 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1340 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1340 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1340 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 1327 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1327 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16);

#line 1981 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1981__1_1_p_0(
#line 1981 "mercury_compile.m"
  MR_Char top_level__mercury_compile__HeadVar__1_24);

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1340__1_8_p_0(
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1340 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 1211 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1211__1_2_p_0(
#line 1211 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1211 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_77);

#line 850 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 850 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 850 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1324 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1324 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 1324 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 2352 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void);

#line 2288 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 2279 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2279 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2235 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8);

#line 2190 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2190 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23);

#line 2154 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2154 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2154 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2154 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2154 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22);

#line 2115 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_17_p_0(
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit_19,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_20,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_21,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__TypeEqvMap_22,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_23,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_38,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_27,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidType_28,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidInstOrMode_29,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_30,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_39,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_40);

#line 2089 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_and_insts_16_p_0(
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_18,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_19,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit0_20,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__AugCompUnit_21,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_22,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_23,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TypeEqvMap_24,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_25,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_26,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_27,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_28,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_32,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_33);

#line 2001 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 2001 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 2001 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14);

#line 1980 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1980 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1980 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1979 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1970 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1970 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4);

#line 1949 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1949 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1949 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6);

#line 1896 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1896 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1896 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1896 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8);

#line 1868 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_aug_comp_unit_15_p_0(
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_17,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_18,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit0_19,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__AugCompUnit_20,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_21,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_22,
#line 1868 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_24,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_25,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_26,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_30,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_31);

#line 1736 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestampMap_21,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_24,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70);

#line 1716 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1716 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1716 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1716 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1716 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1587 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestampMap_14,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1587 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1587 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);

#line 1574 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1563 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1563 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20);

#line 1574 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1550 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1550 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15);

#line 1463 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1463 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1463 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1463 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48);

#line 1432 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1432 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_17,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_18,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_19,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_21,
#line 1432 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_22,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_35,
#line 1432 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_36);

#line 1407 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1407 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1407 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1407 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1407 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10);

#line 1405 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1405 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1405 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1405 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1405 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1405 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1384 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1384 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1384 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4);

#line 1373 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1373 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1373 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1373 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1373 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10);

#line 1371 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1371 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1371 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1371 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1371 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1371 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1360 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1360 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1360 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4);

#line 1319 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1319 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1319 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_6);

#line 1308 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_3,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4);

#line 1299 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1299 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1293 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1293 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1285 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1285 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1282 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1282 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1282 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1282 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2);

#line 1277 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1277 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1277 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1277 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1266 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1266 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_17,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_18,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_19,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnits_21,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1266 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1266 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24);

#line 1222 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_2(
#line 1222 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1222 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1211 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1211 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1211 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1166 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1166 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1166 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 1145 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1145 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12);

#line 1069 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1069 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1069 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1069 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1069 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1047 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1047 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1044 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1044 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1040 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1040 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1023 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 1023 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 1023 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 1023 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 1023 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 1023 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12);

#line 1018 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 1018 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1);

#line 875 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_18,
#line 875 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_19,
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_20,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ParseTreeSrc_22,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47);

#line 800 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 800 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 800 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 783 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 783 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 783 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 783 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 770 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 770 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 770 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 770 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 742 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 742 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 742 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9);

#line 709 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 709 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 709 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28);

#line 602 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 602 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 602 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 586 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 586 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 586 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 586 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8);

#line 535 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_2(
#line 535 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 535 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 535 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 535 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 535 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 430 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_1(
#line 430 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 430 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 430 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 430 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 351 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0(
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_13,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14);

#line 203 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4);

#line 175 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 175 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 175 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6);

#line 135 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 135 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 135 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2);


static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[40][2];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_2[2][4];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[2][6];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_4[3][1];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[7][3];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_6[2][9];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[2][12];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_8[2][10];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[4][5];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_10[1][16];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][7];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_13[1][11];


#line 1366 "mercury_compile.m"
/* sealed */ struct top_level__mercury_compile__vector_common_type_11_0_s {
#line 1366 "mercury_compile.m"
  const MR_String top_level__mercury_compile__vector_common_type_11_0__vct_11_f_0;
#line 1366 "mercury_compile.m"
};

static /* final */ const struct top_level__mercury_compile__vector_common_type_11_0_s top_level__mercury_compile_vector_common_11[10];



static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[40][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row 39 */
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile__main_after_setup_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_9[1])),
    ((MR_Box) (top_level__mercury_compile__process_module_2_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_9[2])),
    ((MR_Box) (top_level__mercury_compile__compile_all_submodules_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_9[3])),
    ((MR_Box) (top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_9[3])),
    ((MR_Box) (top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[4][5] = {
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_10[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_13[1][11] = {
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


static /* final */ const struct top_level__mercury_compile__vector_common_type_11_0_s top_level__mercury_compile_vector_common_11[10] = {
  /* row 0 */   {     (MR_String) ".c" },
  /* row 1 */   {     (MR_String) ".il" },
  /* row 2 */   {     (MR_String) ".cs" },
  /* row 3 */   {     (MR_String) ".java" },
  /* row 4 */   {     (MR_String) ".erl" },
  /* row 5 */   {     (MR_String) ".c_date" },
  /* row 6 */   {     (MR_String) ".il_date" },
  /* row 7 */   {     (MR_String) ".cs_date" },
  /* row 8 */   {     (MR_String) ".java_date" },
  /* row 9 */   {     (MR_String) ".erl_date" },
};


#include "top_level.mercury_compile.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



#line 1934 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1942 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1950 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1960 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1968 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1976 "top_level.mercury_compile.c"
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

#line 1990 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1998 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2006 "top_level.mercury_compile.c"
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

#line 2018 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2026 "top_level.mercury_compile.c"
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

#line 2038 "top_level.mercury_compile.c"
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

#line 2050 "top_level.mercury_compile.c"
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

#line 2067 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2072 "top_level.mercury_compile.c"
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

#line 2087 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2092 "top_level.mercury_compile.c"
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

#line 2107 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0
};

#line 2112 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2117 "top_level.mercury_compile.c"
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

#line 2131 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2137 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2143 "top_level.mercury_compile.c"
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

#line 2160 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 2163 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2165 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2167 "top_level.mercury_compile.c"
{
#line 2169 "top_level.mercury_compile.c"
  {
#line 2171 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2174 "top_level.mercury_compile.c"
    {
#line 2176 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____compile_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2179 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2181 "top_level.mercury_compile.c"
  }
#line 2183 "top_level.mercury_compile.c"
}

#line 2186 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 2189 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2191 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2193 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2195 "top_level.mercury_compile.c"
{
#line 2197 "top_level.mercury_compile.c"
  {
#line 2199 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2202 "top_level.mercury_compile.c"
    {
#line 2204 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____compile_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2207 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2209 "top_level.mercury_compile.c"
  }
#line 2211 "top_level.mercury_compile.c"
}

#line 2214 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 2217 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2219 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2221 "top_level.mercury_compile.c"
{
#line 2223 "top_level.mercury_compile.c"
  {
#line 2225 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2228 "top_level.mercury_compile.c"
    {
#line 2230 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____file_or_module_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2233 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2235 "top_level.mercury_compile.c"
  }
#line 2237 "top_level.mercury_compile.c"
}

#line 2240 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 2243 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2245 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2247 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2249 "top_level.mercury_compile.c"
{
#line 2251 "top_level.mercury_compile.c"
  {
#line 2253 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2256 "top_level.mercury_compile.c"
    {
#line 2258 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____file_or_module_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2261 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2263 "top_level.mercury_compile.c"
  }
#line 2265 "top_level.mercury_compile.c"
}

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_52_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1340 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1340 "mercury_compile.m"
{
#line 1340 "mercury_compile.m"
  {
#line 1340 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1343 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Compile_15, (MR_Integer) 1)));
#line 1343 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_HeadVar__4_31;
#line 1343 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_HeadVar__8_35;

#line 1343 "mercury_compile.m"
    {
#line 1343 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__Compile_15), ((MR_Box) (top_level__mercury_compile__HeadVar__2_29)), &top_level__mercury_compile__conv2_HeadVar__4_31, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_HeadVar__8_35);
    }
#line 1343 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__4_31 = ((MR_Word) top_level__mercury_compile__conv2_HeadVar__4_31);
#line 1340 "mercury_compile.m"
  }
#line 1340 "mercury_compile.m"
}

#line 2288 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2288 "mercury_compile.m"
{
#line 2294 "mercury_compile.m"
  {
#line 2294 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2294 "mercury_compile.m"
#line 2294 "mercury_compile.m"
    switch (top_level__mercury_compile__FileType_13) {
#line 2294 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2294 "mercury_compile.m"
      case (MR_Integer) 6:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 5:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 7:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 3:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 0:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 8:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 9:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 4:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 2:
#line 2294 "mercury_compile.m"
      case (MR_Integer) 10:
#line 2333 "mercury_compile.m"
        {
#line 2334 "mercury_compile.m"
          *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2333 "mercury_compile.m"
          *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2333 "mercury_compile.m"
        }
#line 2294 "mercury_compile.m"
        break;
#line 2294 "mercury_compile.m"
      case (MR_Integer) 1:
#line 2294 "mercury_compile.m"
        {
#line 2300 "mercury_compile.m"
          {
#line 2300 "mercury_compile.m"
            top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "csharp");
          }
#line 2301 "mercury_compile.m"
          if (!(top_level__mercury_compile__succeeded))
#line 2301 "mercury_compile.m"
            {
#line 2301 "mercury_compile.m"
              {
#line 2301 "mercury_compile.m"
                top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "erlang");
              }
#line 2301 "mercury_compile.m"
              if (!(top_level__mercury_compile__succeeded))
#line 2302 "mercury_compile.m"
                {
#line 2302 "mercury_compile.m"
                  {
#line 2302 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "java");
                  }
#line 2302 "mercury_compile.m"
                }
#line 2301 "mercury_compile.m"
            }
#line 2307 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 2305 "mercury_compile.m"
            {
#line 2305 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_30_30;

#line 2306 "mercury_compile.m"
              {
#line 2306 "mercury_compile.m"
                top_level__mercury_compile__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2306 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2306 "mercury_compile.m"
              }
#line 2306 "mercury_compile.m"
              {
#line 2306 "mercury_compile.m"
                MR_Word base;
#line 2306 "mercury_compile.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2306 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2306 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 2306 "mercury_compile.m"
              }
#line 2305 "mercury_compile.m"
            }
#line 2307 "mercury_compile.m"
          else
#line 2311 "mercury_compile.m"
            {
#line 2311 "mercury_compile.m"
              MR_String top_level__mercury_compile__InitFile_17;
#line 2311 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Result_18;
#line 2311 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_31_31;

#line 2311 "mercury_compile.m"
              {
#line 2311 "mercury_compile.m"
                top_level__mercury_compile__V_31_31 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12);
              }
#line 2311 "mercury_compile.m"
              {
#line 2311 "mercury_compile.m"
                top_level__mercury_compile__InitFile_17 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__V_31_31, (MR_String) "mer_std.init");
              }
#line 2312 "mercury_compile.m"
              {
#line 2312 "mercury_compile.m"
                mercury__io__check_file_accessibility_5_p_0(top_level__mercury_compile__InitFile_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[39]), &top_level__mercury_compile__Result_18);
              }
#line 2317 "mercury_compile.m"
              if ((top_level__mercury_compile__Result_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2314 "mercury_compile.m"
                {
#line 2314 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_40_40;

#line 2316 "mercury_compile.m"
                  {
#line 2316 "mercury_compile.m"
                    top_level__mercury_compile__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2316 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2316 "mercury_compile.m"
                  }
#line 2316 "mercury_compile.m"
                  {
#line 2316 "mercury_compile.m"
                    MR_Word base;
#line 2316 "mercury_compile.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "mercury_compile.m"
                    *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2316 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2316 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_40_40));
#line 2316 "mercury_compile.m"
                  }
#line 2314 "mercury_compile.m"
                }
#line 2317 "mercury_compile.m"
              else
#line 2318 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2311 "mercury_compile.m"
            }
#line 2321 "mercury_compile.m"
          *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2294 "mercury_compile.m"
        }
#line 2294 "mercury_compile.m"
        break;
#line 2294 "mercury_compile.m"
    }
#line 2294 "mercury_compile.m"
  }
#line 2288 "mercury_compile.m"
}

#line 1293 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1293 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1293 "mercury_compile.m"
{
#line 1297 "mercury_compile.m"
  {
#line 1297 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1297 "mercury_compile.m"
    {
#line 1297 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__RawCompUnit_12);
#line 1297 "mercury_compile.m"
      return;
    }
#line 1297 "mercury_compile.m"
  }
#line 1293 "mercury_compile.m"
}

#line 800 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 800 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 800 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 800 "mercury_compile.m"
{
#line 806 "mercury_compile.m"
  {
#line 806 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 806 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Modules_15;
#line 806 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFiles_16;
#line 806 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateDeps_29;

#line 805 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__5_5 = (MR_Integer) 1;
#line 816 "mercury_compile.m"
    {
#line 816 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 93, &top_level__mercury_compile__GenerateDeps_29);
    }
#line 828 "mercury_compile.m"
#line 828 "mercury_compile.m"
    switch (top_level__mercury_compile__GenerateDeps_29) {
#line 828 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 828 "mercury_compile.m"
      case (MR_Integer) 0:
#line 829 "mercury_compile.m"
        {
#line 829 "mercury_compile.m"
          MR_Word top_level__mercury_compile__GenerateDepFile_32;

#line 830 "mercury_compile.m"
          {
#line 830 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 92, &top_level__mercury_compile__GenerateDepFile_32);
          }
#line 843 "mercury_compile.m"
#line 843 "mercury_compile.m"
          switch (top_level__mercury_compile__GenerateDepFile_32) {
#line 843 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 843 "mercury_compile.m"
            case (MR_Integer) 0:
#line 845 "mercury_compile.m"
              {
#line 845 "mercury_compile.m"
                top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__FileOrModule_10, &top_level__mercury_compile__Modules_15, &top_level__mercury_compile__ExtraObjFiles_16);
              }
#line 843 "mercury_compile.m"
              break;
#line 843 "mercury_compile.m"
            case (MR_Integer) 1:
#line 833 "mercury_compile.m"
              {
#line 834 "mercury_compile.m"
                top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 835 "mercury_compile.m"
                top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 837 "mercury_compile.m"
                  {
#line 837 "mercury_compile.m"
                    MR_String top_level__mercury_compile__FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 838 "mercury_compile.m"
                    {
#line 838 "mercury_compile.m"
                      parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_40);
                    }
#line 837 "mercury_compile.m"
                  }
#line 839 "mercury_compile.m"
                else
#line 840 "mercury_compile.m"
                  {
#line 840 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 841 "mercury_compile.m"
                    {
#line 841 "mercury_compile.m"
                      parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_41);
                    }
#line 840 "mercury_compile.m"
                  }
#line 833 "mercury_compile.m"
              }
#line 843 "mercury_compile.m"
              break;
#line 843 "mercury_compile.m"
          }
#line 829 "mercury_compile.m"
        }
#line 828 "mercury_compile.m"
        break;
#line 828 "mercury_compile.m"
      case (MR_Integer) 1:
#line 818 "mercury_compile.m"
        {
#line 819 "mercury_compile.m"
          top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "mercury_compile.m"
          top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 822 "mercury_compile.m"
            {
#line 822 "mercury_compile.m"
              MR_String top_level__mercury_compile__FileName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 823 "mercury_compile.m"
              {
#line 823 "mercury_compile.m"
                parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_30);
              }
#line 822 "mercury_compile.m"
            }
#line 824 "mercury_compile.m"
          else
#line 825 "mercury_compile.m"
            {
#line 825 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 826 "mercury_compile.m"
              {
#line 826 "mercury_compile.m"
                parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_31);
              }
#line 825 "mercury_compile.m"
            }
#line 818 "mercury_compile.m"
        }
#line 828 "mercury_compile.m"
        break;
#line 828 "mercury_compile.m"
    }
#line 806 "mercury_compile.m"
    {
#line 806 "mercury_compile.m"
      MR_Tuple base;
#line 806 "mercury_compile.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "mercury_compile.m"
      *top_level__mercury_compile__HeadVar__7_7 = base;
#line 806 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__Modules_15));
#line 806 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_16));
#line 806 "mercury_compile.m"
    }
#line 806 "mercury_compile.m"
  }
#line 800 "mercury_compile.m"
}

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1340 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1340 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1340 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1340 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 1340 "mercury_compile.m"
{
#line 1340 "mercury_compile.m"
  {
#line 1340 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1340 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_31;

#line 1340 "mercury_compile.m"
    {
#line 1340 "mercury_compile.m"
      top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1340__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv0_HeadVar__4_31);
    }
#line 1340 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_31));
#line 1340 "mercury_compile.m"
  }
#line 1340 "mercury_compile.m"
}

#line 1327 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1327 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16)
#line 1327 "mercury_compile.m"
{
#line 1332 "mercury_compile.m"
  {
#line 1332 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1332 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_18;

#line 1333 "mercury_compile.m"
    {
#line 1333 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 629, &top_level__mercury_compile__InvokedByMake_18);
    }
#line 1338 "mercury_compile.m"
#line 1338 "mercury_compile.m"
    switch (top_level__mercury_compile__InvokedByMake_18) {
#line 1338 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1338 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1339 "mercury_compile.m"
        {
#line 1339 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 1339 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Builder_19;
#line 1345 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_25_25;

#line 1340 "mercury_compile.m"
          {
#line 1340 "mercury_compile.m"
            top_level__mercury_compile__Builder_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_13[0]));
#line 1340 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 1) = ((MR_Box) (top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1));
#line 1340 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1340 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 3) = ((MR_Box) (top_level__mercury_compile__Compile_15));
#line 1340 "mercury_compile.m"
          }
#line 1346 "mercury_compile.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2807 "top_level.mercury_compile.c"
          top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1345 "mercury_compile.m"
          {
#line 1345 "mercury_compile.m"
            make__util__build_with_module_options_args_12_p_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Builder_19, top_level__mercury_compile__Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__V_25_25);
          }
#line 1339 "mercury_compile.m"
        }
#line 1338 "mercury_compile.m"
        break;
#line 1338 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1337 "mercury_compile.m"
        {
#line 1337 "mercury_compile.m"
          backend_libs__compile_target_code__link_module_list_6_p_0(top_level__mercury_compile__V_48_48, top_level__mercury_compile__V_49_49, top_level__mercury_compile__Globals_10, top_level__mercury_compile__Succeeded_16);
#line 1337 "mercury_compile.m"
          return;
        }
#line 1338 "mercury_compile.m"
        break;
#line 1338 "mercury_compile.m"
    }
#line 1332 "mercury_compile.m"
  }
#line 1327 "mercury_compile.m"
}

#line 1981 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1981__1_1_p_0(
#line 1981 "mercury_compile.m"
  MR_Char top_level__mercury_compile__HeadVar__1_24)
#line 1981 "mercury_compile.m"
{
#line 1981 "mercury_compile.m"
  {
#line 1981 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1981 "mercury_compile.m"
    {
#line 1981 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(top_level__mercury_compile__HeadVar__1_24);
    }
#line 1981 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1981 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1981 "mercury_compile.m"
  }
#line 1981 "mercury_compile.m"
}

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1340__1_8_p_0(
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1340 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1340 "mercury_compile.m"
{
#line 1340 "mercury_compile.m"
  {
#line 1340 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1340 "mercury_compile.m"
    {
#line 1340 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_52_48_95_95_49_95_95_91_51_93_95_48_8_p_0(top_level__mercury_compile__Compile_15, top_level__mercury_compile__HeadVar__2_29, top_level__mercury_compile__HeadVar__4_31);
#line 1340 "mercury_compile.m"
      return;
    }
#line 1340 "mercury_compile.m"
  }
#line 1340 "mercury_compile.m"
}

#line 1211 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1211__1_2_p_0(
#line 1211 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1211 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_77)
#line 1211 "mercury_compile.m"
{
#line 1211 "mercury_compile.m"
  {
#line 1211 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1211 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RawCompUnitModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_77, (MR_Integer) 0)));
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_77, (MR_Integer) 1)));
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_77, (MR_Integer) 2)));

#line 1214 "mercury_compile.m"
    {
#line 1214 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (top_level__mercury_compile__RawCompUnitModuleName_42)), top_level__mercury_compile__ModulesToRecompile_39);
    }
#line 1211 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1211 "mercury_compile.m"
  }
#line 1211 "mercury_compile.m"
}

#line 850 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 850 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 850 "mercury_compile.m"
{
#line 850 "mercury_compile.m"
  {
#line 850 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 850 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_12 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;
#line 850 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_13 = (MR_Integer) top_level__mercury_compile__HeadVar__3_3;

#line 850 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_12 == top_level__mercury_compile__CastY_13);
#line 850 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2948 "top_level.mercury_compile.c"
      *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 0;
#line 850 "mercury_compile.m"
    else
#line 850 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 850 "mercury_compile.m"
      {
#line 850 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 850 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 850 "mercury_compile.m"
          {
#line 850 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 850 "mercury_compile.m"
            {
#line 850 "mercury_compile.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_16_16, top_level__mercury_compile__V_5_5);
#line 850 "mercury_compile.m"
              return;
            }
#line 850 "mercury_compile.m"
          }
#line 850 "mercury_compile.m"
        else
#line 2977 "top_level.mercury_compile.c"
          *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 1;
#line 850 "mercury_compile.m"
      }
#line 850 "mercury_compile.m"
    else
#line 850 "mercury_compile.m"
      {
#line 850 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 850 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2990 "top_level.mercury_compile.c"
          *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 2;
#line 850 "mercury_compile.m"
        else
#line 850 "mercury_compile.m"
          {
#line 850 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 850 "mercury_compile.m"
            {
#line 850 "mercury_compile.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_17_17, top_level__mercury_compile__V_11_11);
#line 850 "mercury_compile.m"
              return;
            }
#line 850 "mercury_compile.m"
          }
#line 850 "mercury_compile.m"
      }
#line 850 "mercury_compile.m"
  }
#line 850 "mercury_compile.m"
}

#line 850 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 850 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 850 "mercury_compile.m"
{
#line 850 "mercury_compile.m"
  {
#line 850 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 850 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_7 = (MR_Integer) top_level__mercury_compile__HeadVar__1_1;
#line 850 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_8 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;

#line 850 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_7 == top_level__mercury_compile__CastY_8);
#line 850 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 850 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 850 "mercury_compile.m"
    else
#line 850 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 850 "mercury_compile.m"
      {
#line 850 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 850 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_4_4;

#line 850 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 850 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 850 "mercury_compile.m"
          {
#line 850 "mercury_compile.m"
            top_level__mercury_compile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 3058 "top_level.mercury_compile.c"
            top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_3_3, top_level__mercury_compile__V_4_4) == 0);
#line 850 "mercury_compile.m"
          }
#line 850 "mercury_compile.m"
      }
#line 850 "mercury_compile.m"
    else
#line 850 "mercury_compile.m"
      {
#line 850 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 850 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_6_6;

#line 850 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 850 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 850 "mercury_compile.m"
          {
#line 850 "mercury_compile.m"
            top_level__mercury_compile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 3081 "top_level.mercury_compile.c"
            {
#line 3083 "top_level.mercury_compile.c"
              return top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__V_5_5, top_level__mercury_compile__V_6_6);
            }
#line 850 "mercury_compile.m"
          }
#line 850 "mercury_compile.m"
      }
#line 850 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 850 "mercury_compile.m"
  }
#line 850 "mercury_compile.m"
}

#line 1324 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1324 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 1324 "mercury_compile.m"
{
#line 1324 "mercury_compile.m"
  {
#line 1324 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1324 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_4 = top_level__mercury_compile__HeadVar__2_2;
#line 1324 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_5 = top_level__mercury_compile__HeadVar__3_3;

#line 1324 "mercury_compile.m"
    {
#line 1324 "mercury_compile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], top_level__mercury_compile__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile__Cast_HeadVar2_5)));
#line 1324 "mercury_compile.m"
      return;
    }
#line 1324 "mercury_compile.m"
  }
#line 1324 "mercury_compile.m"
}

#line 1324 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1324 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1324 "mercury_compile.m"
{
#line 1324 "mercury_compile.m"
  {
#line 1324 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1324 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_3 = top_level__mercury_compile__HeadVar__1_1;
#line 1324 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_4 = top_level__mercury_compile__HeadVar__2_2;

#line 1324 "mercury_compile.m"
    {
#line 1324 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) top_level__mercury_compile__Cast_HeadVar1_3, (MR_Word) top_level__mercury_compile__Cast_HeadVar2_4);
    }
#line 1324 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1324 "mercury_compile.m"
  }
#line 1324 "mercury_compile.m"
}

#line 2352 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void)
#line 2352 "mercury_compile.m"
{
#line 2357 "mercury_compile.m"
  {
#line 2357 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2360 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__gc_init_2_p_0


		{
#line 2360 "mercury_compile.m"

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

#line 3192 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2360 "mercury_compile.m"
}
#line 2357 "mercury_compile.m"
  }
#line 2352 "mercury_compile.m"
}

#line 2288 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2288 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2288 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2288 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2288 "mercury_compile.m"
{
#line 2294 "mercury_compile.m"
  {
#line 2294 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2294 "mercury_compile.m"
    {
#line 2294 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12, top_level__mercury_compile__FileType_13, top_level__mercury_compile__Continue_14, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);
#line 2294 "mercury_compile.m"
      return;
    }
#line 2294 "mercury_compile.m"
  }
#line 2288 "mercury_compile.m"
}

#line 2279 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2279 "mercury_compile.m"
{
#line 2279 "mercury_compile.m"
  {
#line 2279 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2279 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv3_Continue_14;
#line 2279 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21;

#line 2279 "mercury_compile.m"
    {
#line 2279 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv3_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21);
    }
#line 2279 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv3_Continue_14));
#line 2279 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21));
#line 2279 "mercury_compile.m"
  }
#line 2279 "mercury_compile.m"
}

#line 2279 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2279 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2279 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2279 "mercury_compile.m"
{
#line 2279 "mercury_compile.m"
  {
#line 2279 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2279 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_Continue_14;
#line 2279 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21;

#line 2279 "mercury_compile.m"
    {
#line 2279 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv1_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21);
    }
#line 2279 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv1_Continue_14));
#line 2279 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21));
#line 2279 "mercury_compile.m"
  }
#line 2279 "mercury_compile.m"
}

#line 2235 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8)
#line 2235 "mercury_compile.m"
{
#line 2238 "mercury_compile.m"
  {
#line 2238 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2238 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Detect_10;

#line 2239 "mercury_compile.m"
    {
#line 2239 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 638, &top_level__mercury_compile__Detect_10);
    }
#line 2269 "mercury_compile.m"
#line 2269 "mercury_compile.m"
    switch (top_level__mercury_compile__Detect_10) {
#line 2269 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2269 "mercury_compile.m"
      case (MR_Integer) 0:
#line 2271 "mercury_compile.m"
        *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2269 "mercury_compile.m"
        break;
#line 2269 "mercury_compile.m"
      case (MR_Integer) 1:
#line 2241 "mercury_compile.m"
        {
#line 2241 "mercury_compile.m"
          MR_Word top_level__mercury_compile__VeryVerbose_13;
#line 2242 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Verbose_11;
#line 2257 "mercury_compile.m"
          MR_String top_level__mercury_compile__MerStdLibDir_15;
#line 2253 "mercury_compile.m"
          MR_Word top_level__mercury_compile__MaybeStdLibDir_14;

#line 2242 "mercury_compile.m"
          {
#line 2242 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 45, &top_level__mercury_compile__Verbose_11);
          }
#line 2247 "mercury_compile.m"
          {
#line 2247 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 46, &top_level__mercury_compile__VeryVerbose_13);
          }
#line 2252 "mercury_compile.m"
          {
#line 2252 "mercury_compile.m"
            libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 555, &top_level__mercury_compile__MaybeStdLibDir_14);
          }
#line 2254 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeStdLibDir_14)) == (MR_mktag((MR_Integer) 1)));
#line 2254 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 2254 "mercury_compile.m"
            {
#line 2254 "mercury_compile.m"
              top_level__mercury_compile__MerStdLibDir_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeStdLibDir_14, (MR_Integer) 0)));
#line 2277 "mercury_compile.m"
              {
#line 2277 "mercury_compile.m"
                MR_String top_level__mercury_compile__ModulesDir_39;
#line 2277 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MaybeGradeOpts_40;
#line 2277 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_44_44;

#line 2278 "mercury_compile.m"
                {
#line 2278 "mercury_compile.m"
                  top_level__mercury_compile__ModulesDir_39 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_15, (MR_String) "modules");
                }
#line 2279 "mercury_compile.m"
                {
#line 2279 "mercury_compile.m"
                  top_level__mercury_compile__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2279 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2279 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_1));
#line 2279 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2279 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2279 "mercury_compile.m"
                }
#line 2279 "mercury_compile.m"
                {
#line 2279 "mercury_compile.m"
                  mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_44_44, top_level__mercury_compile__ModulesDir_39, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_40);
                }
#line 2283 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_40)) == (MR_mktag((MR_Integer) 1))))
#line 2285 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2283 "mercury_compile.m"
                else
#line 2282 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_40, (MR_Integer) 0)));
#line 2277 "mercury_compile.m"
              }
#line 2254 "mercury_compile.m"
            }
#line 2254 "mercury_compile.m"
          else
#line 2263 "mercury_compile.m"
            {
#line 2263 "mercury_compile.m"
              MR_String top_level__mercury_compile__MerStdLibDir_32;
#line 2260 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_26_26;
#line 2260 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_27_27;

#line 2260 "mercury_compile.m"
              top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeConfigMerStdLibDir_7)) == (MR_mktag((MR_Integer) 1)));
#line 2260 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 2260 "mercury_compile.m"
                {
#line 2260 "mercury_compile.m"
                  top_level__mercury_compile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigMerStdLibDir_7, (MR_Integer) 0)));
#line 2260 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 2260 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 2260 "mercury_compile.m"
                    {
#line 2260 "mercury_compile.m"
                      top_level__mercury_compile__MerStdLibDir_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 0)));
#line 2260 "mercury_compile.m"
                      top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 1)));
#line 2260 "mercury_compile.m"
                      top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2260 "mercury_compile.m"
                    }
#line 2260 "mercury_compile.m"
                }
#line 2263 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 2277 "mercury_compile.m"
                {
#line 2277 "mercury_compile.m"
                  MR_String top_level__mercury_compile__ModulesDir_62;
#line 2277 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__MaybeGradeOpts_63;
#line 2277 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_67_67;

#line 2278 "mercury_compile.m"
                  {
#line 2278 "mercury_compile.m"
                    top_level__mercury_compile__ModulesDir_62 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_32, (MR_String) "modules");
                  }
#line 2279 "mercury_compile.m"
                  {
#line 2279 "mercury_compile.m"
                    top_level__mercury_compile__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2279 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2279 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_2));
#line 2279 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2279 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2279 "mercury_compile.m"
                  }
#line 2279 "mercury_compile.m"
                  {
#line 2279 "mercury_compile.m"
                    mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_67_67, top_level__mercury_compile__ModulesDir_62, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_63);
                  }
#line 2283 "mercury_compile.m"
                  if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_63)) == (MR_mktag((MR_Integer) 1))))
#line 2285 "mercury_compile.m"
                    *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2283 "mercury_compile.m"
                  else
#line 2282 "mercury_compile.m"
                    *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_63, (MR_Integer) 0)));
#line 2277 "mercury_compile.m"
                }
#line 2263 "mercury_compile.m"
              else
#line 2264 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2263 "mercury_compile.m"
            }
#line 2241 "mercury_compile.m"
        }
#line 2269 "mercury_compile.m"
        break;
#line 2269 "mercury_compile.m"
    }
#line 2238 "mercury_compile.m"
  }
#line 2235 "mercury_compile.m"
}

#line 2190 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2190 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23)
#line 2190 "mercury_compile.m"
{
#line 2193 "mercury_compile.m"
  {
#line 2193 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2193 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2193 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileCalls_12;
#line 2193 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileTime_13;

#line 2194 "mercury_compile.m"
    {
#line 2194 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__Globals_11);
    }
#line 2195 "mercury_compile.m"
    {
#line 2195 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 193, &top_level__mercury_compile__ProfileCalls_12);
    }
#line 2196 "mercury_compile.m"
    {
#line 2196 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 194, &top_level__mercury_compile__ProfileTime_13);
    }
#line 2198 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileCalls_12 == (MR_Integer) 1);
#line 2199 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2199 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileTime_13 == (MR_Integer) 1);
#line 2223 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2203 "mercury_compile.m"
      {
#line 2203 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_14;
#line 2203 "mercury_compile.m"
        MR_String top_level__mercury_compile__ProfFileName_15;
#line 2203 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_16;

#line 2202 "mercury_compile.m"
        {
#line 2202 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Outputing profiling call graph...");
        }
#line 2204 "mercury_compile.m"
        {
#line 2204 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_7);
        }
#line 2205 "mercury_compile.m"
        {
#line 2205 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__ModuleName_14);
        }
#line 2206 "mercury_compile.m"
        {
#line 2206 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_14, (MR_String) ".prof", (MR_Integer) 0, &top_level__mercury_compile__ProfFileName_15);
        }
#line 2208 "mercury_compile.m"
        {
#line 2208 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__ProfFileName_15, &top_level__mercury_compile__Res_16);
        }
#line 2215 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_16)) == (MR_mktag((MR_Integer) 1))))
#line 2216 "mercury_compile.m"
          {
#line 2216 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2216 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_21;
#line 2216 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_36_36;

#line 2218 "mercury_compile.m"
            {
#line 2218 "mercury_compile.m"
              top_level__mercury_compile__V_36_36 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_20);
            }
#line 2217 "mercury_compile.m"
            {
#line 2217 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", top_level__mercury_compile__V_36_36);
            }
#line 2219 "mercury_compile.m"
            {
#line 2219 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_21);
            }
#line 2216 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2216 "mercury_compile.m"
          }
#line 2215 "mercury_compile.m"
        else
#line 2210 "mercury_compile.m"
          {
#line 2210 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2210 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_18;
#line 2213 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_19_19;

#line 2211 "mercury_compile.m"
            {
#line 2211 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_17, &top_level__mercury_compile__OutputStream_18);
            }
#line 2212 "mercury_compile.m"
            {
#line 2212 "mercury_compile.m"
              transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_23);
            }
#line 2213 "mercury_compile.m"
            {
#line 2213 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_18, &top_level__mercury_compile__V_19_19);
            }
#line 2214 "mercury_compile.m"
            {
#line 2214 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_17);
            }
#line 2210 "mercury_compile.m"
          }
#line 2221 "mercury_compile.m"
        {
#line 2221 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
        }
#line 2222 "mercury_compile.m"
        {
#line 2222 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2222 "mercury_compile.m"
          return;
        }
#line 2203 "mercury_compile.m"
      }
#line 2223 "mercury_compile.m"
    else
#line 2224 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2193 "mercury_compile.m"
  }
#line 2190 "mercury_compile.m"
}

#line 2154 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2154 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2154 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2154 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2154 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22)
#line 2154 "mercury_compile.m"
{
#line 2157 "mercury_compile.m"
  {
#line 2157 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2157 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2157 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ShowDepGraph_12;

#line 2158 "mercury_compile.m"
    {
#line 2158 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__Globals_11);
    }
#line 2159 "mercury_compile.m"
    {
#line 2159 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 143, &top_level__mercury_compile__ShowDepGraph_12);
    }
#line 2181 "mercury_compile.m"
#line 2181 "mercury_compile.m"
    switch (top_level__mercury_compile__ShowDepGraph_12) {
#line 2181 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2181 "mercury_compile.m"
      case (MR_Integer) 0:
#line 2182 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2181 "mercury_compile.m"
        break;
#line 2181 "mercury_compile.m"
      case (MR_Integer) 1:
#line 2161 "mercury_compile.m"
        {
#line 2161 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_13;
#line 2161 "mercury_compile.m"
          MR_String top_level__mercury_compile__FileName_14;
#line 2161 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res_15;

#line 2162 "mercury_compile.m"
          {
#line 2162 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Writing dependency graph...");
          }
#line 2163 "mercury_compile.m"
          {
#line 2163 "mercury_compile.m"
            hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__ModuleName_13);
          }
#line 2164 "mercury_compile.m"
          {
#line 2164 "mercury_compile.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_13, (MR_String) ".dependency_graph", (MR_Integer) 0, &top_level__mercury_compile__FileName_14);
          }
#line 2166 "mercury_compile.m"
          {
#line 2166 "mercury_compile.m"
            mercury__io__open_output_4_p_0(top_level__mercury_compile__FileName_14, &top_level__mercury_compile__Res_15);
          }
#line 2174 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 2175 "mercury_compile.m"
            {
#line 2175 "mercury_compile.m"
              MR_Word top_level__mercury_compile__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2175 "mercury_compile.m"
              MR_String top_level__mercury_compile__ErrorMsg_20;
#line 2175 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_33_33;

#line 2177 "mercury_compile.m"
              {
#line 2177 "mercury_compile.m"
                top_level__mercury_compile__V_33_33 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_19);
              }
#line 2176 "mercury_compile.m"
              {
#line 2176 "mercury_compile.m"
                top_level__mercury_compile__ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", top_level__mercury_compile__V_33_33);
              }
#line 2178 "mercury_compile.m"
              {
#line 2178 "mercury_compile.m"
                libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_20);
              }
#line 2175 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2175 "mercury_compile.m"
            }
#line 2174 "mercury_compile.m"
          else
#line 2168 "mercury_compile.m"
            {
#line 2168 "mercury_compile.m"
              MR_Word top_level__mercury_compile__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2168 "mercury_compile.m"
              MR_Word top_level__mercury_compile__OutputStream_17;
#line 2171 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_18_18;

#line 2169 "mercury_compile.m"
              {
#line 2169 "mercury_compile.m"
                mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_16, &top_level__mercury_compile__OutputStream_17);
              }
#line 2170 "mercury_compile.m"
              {
#line 2170 "mercury_compile.m"
                transform_hlds__dependency_graph__write_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile__STATE_VARIABLE_HLDS_22);
              }
#line 2171 "mercury_compile.m"
              {
#line 2171 "mercury_compile.m"
                mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_17, &top_level__mercury_compile__V_18_18);
              }
#line 2172 "mercury_compile.m"
              {
#line 2172 "mercury_compile.m"
                mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_16);
              }
#line 2173 "mercury_compile.m"
              {
#line 2173 "mercury_compile.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
              }
#line 2168 "mercury_compile.m"
            }
#line 2180 "mercury_compile.m"
          {
#line 2180 "mercury_compile.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2180 "mercury_compile.m"
            return;
          }
#line 2161 "mercury_compile.m"
        }
#line 2181 "mercury_compile.m"
        break;
#line 2181 "mercury_compile.m"
    }
#line 2157 "mercury_compile.m"
  }
#line 2154 "mercury_compile.m"
}

#line 2115 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_17_p_0(
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit_19,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_20,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_21,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__TypeEqvMap_22,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_23,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_38,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_27,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidType_28,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidInstOrMode_29,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_30,
#line 2115 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_39,
#line 2115 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_40)
#line 2115 "mercury_compile.m"
{
#line 2124 "mercury_compile.m"
  {
#line 2124 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2124 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_33;
#line 2124 "mercury_compile.m"
    MR_String top_level__mercury_compile__DumpBaseFileName_34;
#line 2124 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeSpecs_35;
#line 2124 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Status_36;
#line 2124 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SpecsErrors_37;
#line 2124 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_43_43;
#line 2124 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_50_50;
#line 2124 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_51_51;

#line 2125 "mercury_compile.m"
    {
#line 2125 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_0_39, &top_level__mercury_compile__STATE_VARIABLE_Specs_43_43);
    }
#line 2126 "mercury_compile.m"
    {
#line 2126 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% Converting parse tree to hlds...\n");
    }
#line 2127 "mercury_compile.m"
    {
#line 2127 "mercury_compile.m"
      top_level__mercury_compile__ModuleName_33 = parse_tree__prog_item__aug_compilation_unit_project_name_1_f_0(top_level__mercury_compile__AugCompUnit_19);
    }
#line 2128 "mercury_compile.m"
    {
#line 2128 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__ModuleName_33, (MR_String) ".hlds_dump", (MR_Integer) 0, &top_level__mercury_compile__DumpBaseFileName_34);
    }
#line 2130 "mercury_compile.m"
    {
#line 2130 "mercury_compile.m"
      hlds__make_hlds__parse_tree_to_hlds_11_p_0(top_level__mercury_compile__AugCompUnit_19, top_level__mercury_compile__Globals_18, top_level__mercury_compile__DumpBaseFileName_34, top_level__mercury_compile__MQInfo_21, top_level__mercury_compile__TypeEqvMap_22, top_level__mercury_compile__UsedModules_23, top_level__mercury_compile__QualInfo_27, top_level__mercury_compile__FoundInvalidType_28, top_level__mercury_compile__FoundInvalidInstOrMode_29, &top_level__mercury_compile__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile__MakeSpecs_35);
    }
#line 2133 "mercury_compile.m"
    {
#line 2133 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__MakeSpecs_35, top_level__mercury_compile__STATE_VARIABLE_Specs_43_43);
    }
#line 2134 "mercury_compile.m"
    {
#line 2134 "mercury_compile.m"
      hlds__hlds_module__module_info_set_event_set_3_p_0(top_level__mercury_compile__EventSet_20, top_level__mercury_compile__STATE_VARIABLE_HLDS_50_50, top_level__mercury_compile__STATE_VARIABLE_HLDS_38);
    }
#line 2135 "mercury_compile.m"
    {
#line 2135 "mercury_compile.m"
      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__Status_36);
    }
#line 2136 "mercury_compile.m"
    {
#line 2136 "mercury_compile.m"
      top_level__mercury_compile__SpecsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_51_51);
    }
#line 2138 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Status_36 == (MR_Integer) 0);
#line 2138 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 2139 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2139 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__SpecsErrors_37 == (MR_Integer) 1);
#line 2144 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2142 "mercury_compile.m"
      {
#line 2142 "mercury_compile.m"
        *top_level__mercury_compile__FoundSemanticError_30 = (MR_Integer) 1;
#line 2143 "mercury_compile.m"
        {
#line 2143 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 2142 "mercury_compile.m"
      }
#line 2144 "mercury_compile.m"
    else
#line 2145 "mercury_compile.m"
      *top_level__mercury_compile__FoundSemanticError_30 = (MR_Integer) 0;
#line 2147 "mercury_compile.m"
    {
#line 2147 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_51_51, top_level__mercury_compile__STATE_VARIABLE_Specs_40);
    }
#line 2148 "mercury_compile.m"
    {
#line 2148 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% done.\n");
    }
#line 2149 "mercury_compile.m"
    {
#line 2149 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_25);
#line 2149 "mercury_compile.m"
      return;
    }
#line 2124 "mercury_compile.m"
  }
#line 2115 "mercury_compile.m"
}

#line 2089 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_and_insts_16_p_0(
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_18,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_19,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit0_20,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__AugCompUnit_21,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_22,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_23,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TypeEqvMap_24,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_25,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_26,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_27,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_28,
#line 2089 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_32,
#line 2089 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_33)
#line 2089 "mercury_compile.m"
{
#line 2099 "mercury_compile.m"
  {
#line 2099 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2099 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandSpecs_31;
#line 2099 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_36_36;
#line 2099 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_41_41;

#line 2100 "mercury_compile.m"
    {
#line 2100 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_18, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_0_32, &top_level__mercury_compile__STATE_VARIABLE_Specs_36_36);
    }
#line 2101 "mercury_compile.m"
    {
#line 2101 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_18, (MR_String) "% Expanding equivalence types and insts...\n");
    }
#line 2103 "mercury_compile.m"
    {
#line 2103 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_18);
    }
#line 2104 "mercury_compile.m"
    {
#line 2104 "mercury_compile.m"
      parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(top_level__mercury_compile__AugCompUnit0_20, top_level__mercury_compile__AugCompUnit_21, top_level__mercury_compile__EventSpecMap0_22, top_level__mercury_compile__EventSpecMap_23, top_level__mercury_compile__TypeEqvMap_24, top_level__mercury_compile__UsedModules_25, top_level__mercury_compile__RecompInfo0_26, top_level__mercury_compile__RecompInfo_27, &top_level__mercury_compile__ExpandSpecs_31);
    }
#line 2107 "mercury_compile.m"
    {
#line 2107 "mercury_compile.m"
      *top_level__mercury_compile__FoundError_28 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ExpandSpecs_31);
    }
#line 2108 "mercury_compile.m"
    {
#line 2108 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ExpandSpecs_31, top_level__mercury_compile__STATE_VARIABLE_Specs_36_36);
    }
#line 2109 "mercury_compile.m"
    {
#line 2109 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_18, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_41_41, top_level__mercury_compile__STATE_VARIABLE_Specs_33);
    }
#line 2110 "mercury_compile.m"
    {
#line 2110 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_18, (MR_String) "% done.\n");
    }
#line 2111 "mercury_compile.m"
    {
#line 2111 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_19);
#line 2111 "mercury_compile.m"
      return;
    }
#line 2099 "mercury_compile.m"
  }
#line 2089 "mercury_compile.m"
}

#line 2001 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 2001 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 2001 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 2001 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14)
#line 2001 "mercury_compile.m"
{
#line 2006 "mercury_compile.m"
  {
#line 2006 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodOpt_16;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UseOptInt_17;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_18;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_19;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_20;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_21;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Imports1_22;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error1_23;
#line 2006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error2_25;

#line 2007 "mercury_compile.m"
    {
#line 2007 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 329, &top_level__mercury_compile__IntermodOpt_16);
    }
#line 2009 "mercury_compile.m"
    {
#line 2009 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 331, &top_level__mercury_compile__UseOptInt_17);
    }
#line 2010 "mercury_compile.m"
    {
#line 2010 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_18);
    }
#line 2012 "mercury_compile.m"
    {
#line 2012 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 333, &top_level__mercury_compile__TransOpt_19);
    }
#line 2013 "mercury_compile.m"
    {
#line 2013 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_20);
    }
#line 2015 "mercury_compile.m"
    {
#line 2015 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 334, &top_level__mercury_compile__IntermodAnalysis_21);
    }
#line 2018 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__UseOptInt_17 == (MR_Integer) 1);
#line 2019 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2019 "mercury_compile.m"
      {
#line 2019 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodOpt_16 == (MR_Integer) 1);
#line 2019 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 2020 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodAnalysis_21 == (MR_Integer) 1);
#line 2019 "mercury_compile.m"
      }
#line 2021 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2022 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 0);
#line 2028 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2024 "mercury_compile.m"
      {
#line 2024 "mercury_compile.m"
        {
#line 2024 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading .opt files...\n");
        }
#line 2025 "mercury_compile.m"
        {
#line 2025 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 2026 "mercury_compile.m"
        {
#line 2026 "mercury_compile.m"
          transform_hlds__intermod__grab_opt_files_6_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__Imports0_10, &top_level__mercury_compile__Imports1_22, &top_level__mercury_compile__Error1_23);
        }
#line 2027 "mercury_compile.m"
        {
#line 2027 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Done.\n");
        }
#line 2024 "mercury_compile.m"
      }
#line 2028 "mercury_compile.m"
    else
#line 2029 "mercury_compile.m"
      {
#line 2029 "mercury_compile.m"
        top_level__mercury_compile__Imports1_22 = top_level__mercury_compile__Imports0_10;
#line 2030 "mercury_compile.m"
        top_level__mercury_compile__Error1_23 = (MR_Integer) 0;
#line 2029 "mercury_compile.m"
      }
#line 2032 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_20 == (MR_Integer) 1);
#line 2061 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2039 "mercury_compile.m"
      if ((top_level__mercury_compile__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2040 "mercury_compile.m"
        {
#line 2040 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_26;
#line 2040 "mercury_compile.m"
          MR_Word top_level__mercury_compile__WarnNoTransOptDeps_27;

#line 2041 "mercury_compile.m"
          *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2042 "mercury_compile.m"
          top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2043 "mercury_compile.m"
          {
#line 2043 "mercury_compile.m"
            parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*top_level__mercury_compile__Imports_13, &top_level__mercury_compile__ModuleName_26);
          }
#line 2044 "mercury_compile.m"
          {
#line 2044 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 14, &top_level__mercury_compile__WarnNoTransOptDeps_27);
          }
#line 2057 "mercury_compile.m"
#line 2057 "mercury_compile.m"
          switch (top_level__mercury_compile__WarnNoTransOptDeps_27) {
#line 2057 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2057 "mercury_compile.m"
            case (MR_Integer) 0:
#line 2058 "mercury_compile.m"
              {
#line 2058 "mercury_compile.m"
              }
#line 2057 "mercury_compile.m"
              break;
#line 2057 "mercury_compile.m"
            case (MR_Integer) 1:
#line 2047 "mercury_compile.m"
              {
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Pieces_28;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Msg_29;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Spec_30;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_52_52;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_55_55;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_56_56;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_71_71;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_72_72;
#line 2047 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_76_76;
#line 2055 "mercury_compile.m"
                MR_Integer top_level__mercury_compile___NumWarnings_31;
#line 2055 "mercury_compile.m"
                MR_Integer top_level__mercury_compile___NumErrors_32;

#line 2049 "mercury_compile.m"
                {
#line 2049 "mercury_compile.m"
                  top_level__mercury_compile__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "mercury_compile.m"
                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 2049 "mercury_compile.m"
                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 1) = ((MR_Box) (top_level__mercury_compile__ModuleName_26));
#line 2049 "mercury_compile.m"
                }
#line 2049 "mercury_compile.m"
                {
#line 2049 "mercury_compile.m"
                  top_level__mercury_compile__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 0) = ((MR_Box) (top_level__mercury_compile__V_56_56));
#line 2049 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[26])));
#line 2049 "mercury_compile.m"
                }
#line 2049 "mercury_compile.m"
                {
#line 2049 "mercury_compile.m"
                  top_level__mercury_compile__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[38])));
#line 2049 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 1) = ((MR_Box) (top_level__mercury_compile__V_55_55));
#line 2049 "mercury_compile.m"
                }
#line 2048 "mercury_compile.m"
                {
#line 2048 "mercury_compile.m"
                  top_level__mercury_compile__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2048 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[37])));
#line 2048 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 1) = ((MR_Box) (top_level__mercury_compile__V_52_52));
#line 2048 "mercury_compile.m"
                }
#line 2052 "mercury_compile.m"
                {
#line 2052 "mercury_compile.m"
                  top_level__mercury_compile__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2052 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (top_level__mercury_compile__Pieces_28));
#line 2052 "mercury_compile.m"
                }
#line 2052 "mercury_compile.m"
                {
#line 2052 "mercury_compile.m"
                  top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 2052 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2052 "mercury_compile.m"
                }
#line 2051 "mercury_compile.m"
                {
#line 2051 "mercury_compile.m"
                  top_level__mercury_compile__Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2051 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2051 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2051 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 3) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 2051 "mercury_compile.m"
                }
#line 2053 "mercury_compile.m"
                {
#line 2053 "mercury_compile.m"
                  top_level__mercury_compile__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 0) = ((MR_Box) (top_level__mercury_compile__Msg_29));
#line 2053 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2053 "mercury_compile.m"
                }
#line 2053 "mercury_compile.m"
                {
#line 2053 "mercury_compile.m"
                  top_level__mercury_compile__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2053 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2053 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2053 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 2) = ((MR_Box) (top_level__mercury_compile__V_76_76));
#line 2053 "mercury_compile.m"
                }
#line 2055 "mercury_compile.m"
                {
#line 2055 "mercury_compile.m"
                  parse_tree__error_util__write_error_spec_8_p_0(top_level__mercury_compile__Spec_30, top_level__mercury_compile__Globals_9, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_31, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_32);
                }
#line 2047 "mercury_compile.m"
              }
#line 2057 "mercury_compile.m"
              break;
#line 2057 "mercury_compile.m"
          }
#line 2040 "mercury_compile.m"
        }
#line 2039 "mercury_compile.m"
      else
#line 2034 "mercury_compile.m"
        {
#line 2034 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTransOptDeps_12, (MR_Integer) 0)));

#line 2037 "mercury_compile.m"
          {
#line 2037 "mercury_compile.m"
            transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptDeps_24, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
          }
#line 2034 "mercury_compile.m"
        }
#line 2061 "mercury_compile.m"
    else
#line 2067 "mercury_compile.m"
      {
#line 2061 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 1);
#line 2067 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2065 "mercury_compile.m"
          {
#line 2065 "mercury_compile.m"
            *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2066 "mercury_compile.m"
            top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2065 "mercury_compile.m"
          }
#line 2067 "mercury_compile.m"
        else
#line 2079 "mercury_compile.m"
#line 2079 "mercury_compile.m"
          switch (top_level__mercury_compile__TransOpt_19) {
#line 2079 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2079 "mercury_compile.m"
            case (MR_Integer) 0:
#line 2080 "mercury_compile.m"
              {
#line 2081 "mercury_compile.m"
                *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2082 "mercury_compile.m"
                top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2080 "mercury_compile.m"
              }
#line 2079 "mercury_compile.m"
              break;
#line 2079 "mercury_compile.m"
            case (MR_Integer) 1:
#line 2069 "mercury_compile.m"
              {
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TransOptFiles_33;
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TransOptFilesList_34;
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_82_82;
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 4)));
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_84_84;
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_86_86;
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 5)));
#line 2069 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 6)));
#line 2074 "mercury_compile.m"
                MR_String top_level__mercury_compile__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 0)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 1)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 2)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 3)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 7)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 8)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 9)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 10)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 11)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 12)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 13)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 14)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 15)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 16)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 17)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 18)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 19)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 20)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 21)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 22)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 23)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 24)));
#line 2074 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 25)));
#line 2074 "mercury_compile.m"
                MR_String top_level__mercury_compile__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 26)));

#line 2075 "mercury_compile.m"
                {
#line 2075 "mercury_compile.m"
                  top_level__mercury_compile__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_86_86, 0) = ((MR_Box) (top_level__mercury_compile__V_95_95));
#line 2075 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2075 "mercury_compile.m"
                }
#line 2075 "mercury_compile.m"
                {
#line 2075 "mercury_compile.m"
                  top_level__mercury_compile__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_84_84, 0) = ((MR_Box) (top_level__mercury_compile__V_94_94));
#line 2075 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_84_84, 1) = ((MR_Box) (top_level__mercury_compile__V_86_86));
#line 2075 "mercury_compile.m"
                }
#line 2074 "mercury_compile.m"
                {
#line 2074 "mercury_compile.m"
                  top_level__mercury_compile__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 0) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 2074 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 1) = ((MR_Box) (top_level__mercury_compile__V_84_84));
#line 2074 "mercury_compile.m"
                }
#line 2074 "mercury_compile.m"
                {
#line 2074 "mercury_compile.m"
                  top_level__mercury_compile__TransOptFiles_33 = mercury__set__union_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_168_168, top_level__mercury_compile__V_82_82);
                }
#line 2076 "mercury_compile.m"
                {
#line 2076 "mercury_compile.m"
                  mercury__set__to_sorted_list_2_p_0(top_level__mercury_compile__TypeCtorInfo_168_168, top_level__mercury_compile__TransOptFiles_33, &top_level__mercury_compile__TransOptFilesList_34);
                }
#line 2077 "mercury_compile.m"
                {
#line 2077 "mercury_compile.m"
                  transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptFilesList_34, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
                }
#line 2069 "mercury_compile.m"
              }
#line 2079 "mercury_compile.m"
              break;
#line 2079 "mercury_compile.m"
          }
#line 2067 "mercury_compile.m"
      }
#line 2085 "mercury_compile.m"
    {
#line 2085 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__Error1_23, top_level__mercury_compile__Error2_25, top_level__mercury_compile__Error_14);
#line 2085 "mercury_compile.m"
      return;
    }
#line 2006 "mercury_compile.m"
  }
#line 2001 "mercury_compile.m"
}

#line 1980 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1980 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1980 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1980 "mercury_compile.m"
{
#line 1980 "mercury_compile.m"
  {
#line 1980 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1980 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1980 "mercury_compile.m"
    {
#line 1980 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1981__1_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1980 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1980 "mercury_compile.m"
  }
#line 1980 "mercury_compile.m"
}

#line 1979 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1979 "mercury_compile.m"
{
#line 1979 "mercury_compile.m"
  {
#line 1979 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1979 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1979 "mercury_compile.m"
    {
#line 1979 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1979 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1979 "mercury_compile.m"
  }
#line 1979 "mercury_compile.m"
}

#line 1970 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1970 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4)
#line 1970 "mercury_compile.m"
{
#line 1973 "mercury_compile.m"
  {
#line 1973 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1973 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Result_6;
#line 1995 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_15;
#line 1976 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_30_30;
#line 1976 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList0_7;
#line 1976 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList1_9;
#line 1976 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NotIsWhitespace_10;
#line 1976 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList_12;
#line 1976 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName0_14;
#line 1976 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_23_23;
#line 1976 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_25_25;
#line 1979 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_8_8;
#line 1983 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_13_13;

#line 1974 "mercury_compile.m"
    {
#line 1974 "mercury_compile.m"
      mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_6);
    }
#line 1976 "mercury_compile.m"
    top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__Result_6)) == (MR_mktag((MR_Integer) 1)));
#line 1976 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1976 "mercury_compile.m"
      {
#line 1976 "mercury_compile.m"
        top_level__mercury_compile__CharList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_6, (MR_Integer) 0)));
#line 1979 "mercury_compile.m"
        top_level__mercury_compile__V_23_23 = (MR_Word) &top_level__mercury_compile_scalar_common_5[5];
#line 4704 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1979 "mercury_compile.m"
        {
#line 1979 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__V_23_23, top_level__mercury_compile__CharList0_7, &top_level__mercury_compile__V_8_8, &top_level__mercury_compile__CharList1_9);
        }
#line 1980 "mercury_compile.m"
        top_level__mercury_compile__NotIsWhitespace_10 = (MR_Word) &top_level__mercury_compile_scalar_common_5[6];
#line 1983 "mercury_compile.m"
        {
#line 1983 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__NotIsWhitespace_10, top_level__mercury_compile__CharList1_9, &top_level__mercury_compile__CharList_12, &top_level__mercury_compile__V_13_13);
        }
#line 1984 "mercury_compile.m"
        {
#line 1984 "mercury_compile.m"
          mercury__string__from_char_list_2_p_0(top_level__mercury_compile__CharList_12, &top_level__mercury_compile__FileName0_14);
        }
#line 1985 "mercury_compile.m"
        top_level__mercury_compile__V_25_25 = (MR_String) ".trans_opt";
#line 1985 "mercury_compile.m"
        {
#line 1985 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__FileName0_14, top_level__mercury_compile__V_25_25, &top_level__mercury_compile__FileName_15);
        }
#line 1976 "mercury_compile.m"
      }
#line 1995 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1991 "mercury_compile.m"
      {
#line 1991 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleFileName_17;
#line 1991 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Module_18;
#line 1991 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TransOptDeps0_19;
#line 1989 "mercury_compile.m"
        MR_String top_level__mercury_compile__BaseFileName_16;

#line 1987 "mercury_compile.m"
        {
#line 1987 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__append_3_p_1((MR_String) "Mercury/trans_opts/", &top_level__mercury_compile__BaseFileName_16, top_level__mercury_compile__FileName_15);
        }
#line 1989 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1988 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__BaseFileName_16;
#line 1989 "mercury_compile.m"
        else
#line 1990 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__FileName_15;
#line 1992 "mercury_compile.m"
        {
#line 1992 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__ModuleFileName_17, &top_level__mercury_compile__Module_18);
        }
#line 1993 "mercury_compile.m"
        {
#line 1993 "mercury_compile.m"
          top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps0_19);
        }
#line 1994 "mercury_compile.m"
        {
#line 1994 "mercury_compile.m"
          MR_Word base;
#line 1994 "mercury_compile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1994 "mercury_compile.m"
          *top_level__mercury_compile__TransOptDeps_4 = base;
#line 1994 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__Module_18));
#line 1994 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__TransOptDeps0_19));
#line 1994 "mercury_compile.m"
        }
#line 1991 "mercury_compile.m"
      }
#line 1995 "mercury_compile.m"
    else
#line 1996 "mercury_compile.m"
      *top_level__mercury_compile__TransOptDeps_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1973 "mercury_compile.m"
  }
#line 1970 "mercury_compile.m"
}

#line 1949 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1949 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1949 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6)
#line 1949 "mercury_compile.m"
{
#line 1952 "mercury_compile.m"
  while (MR_TRUE)
#line 1952 "mercury_compile.m"
    {
#line 1952 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 1952 "mercury_compile.m"
      {
#line 1952 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 1952 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Result_8;
#line 1961 "mercury_compile.m"
        MR_Word top_level__mercury_compile__CharList_9;

#line 1953 "mercury_compile.m"
        {
#line 1953 "mercury_compile.m"
          mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_8);
        }
#line 1954 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__Result_8)) == (MR_mktag((MR_Integer) 1)));
#line 1954 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1954 "mercury_compile.m"
          {
#line 1954 "mercury_compile.m"
            top_level__mercury_compile__CharList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_8, (MR_Integer) 0)));
#line 1958 "mercury_compile.m"
            {
#line 1955 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_10_10;

#line 1955 "mercury_compile.m"
              {
#line 1955 "mercury_compile.m"
                top_level__mercury_compile__succeeded = mercury__list__append_3_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__SearchPattern_5, &top_level__mercury_compile__V_10_10, top_level__mercury_compile__CharList_9);
              }
#line 1958 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1957 "mercury_compile.m"
                *top_level__mercury_compile__Success_6 = (MR_Integer) 1;
#line 1958 "mercury_compile.m"
              else
#line 1959 "mercury_compile.m"
                {
#line 1959 "mercury_compile.m"
                  /* direct tailcall eliminated */
#line 1959 "mercury_compile.m"
                  continue;
#line 1959 "mercury_compile.m"
                }
#line 1958 "mercury_compile.m"
            }
#line 1954 "mercury_compile.m"
          }
#line 1954 "mercury_compile.m"
        else
#line 1962 "mercury_compile.m"
          *top_level__mercury_compile__Success_6 = (MR_Integer) 0;
#line 1952 "mercury_compile.m"
      }
#line 1952 "mercury_compile.m"
      break;
#line 1952 "mercury_compile.m"
    }
#line 1949 "mercury_compile.m"
}

#line 1896 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1896 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1896 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1896 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8)
#line 1896 "mercury_compile.m"
{
#line 1899 "mercury_compile.m"
  {
#line 1899 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1899 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_10;

#line 1900 "mercury_compile.m"
    {
#line 1900 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 333, &top_level__mercury_compile__TransOpt_10);
    }
#line 1941 "mercury_compile.m"
#line 1941 "mercury_compile.m"
    switch (top_level__mercury_compile__TransOpt_10) {
#line 1941 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1941 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1943 "mercury_compile.m"
        *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1941 "mercury_compile.m"
        break;
#line 1941 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1902 "mercury_compile.m"
        {
#line 1902 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Verbose_11;
#line 1902 "mercury_compile.m"
          MR_String top_level__mercury_compile__DependencyFileName_12;
#line 1902 "mercury_compile.m"
          MR_Word top_level__mercury_compile__OpenResult_13;

#line 1903 "mercury_compile.m"
          {
#line 1903 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 45, &top_level__mercury_compile__Verbose_11);
          }
#line 1904 "mercury_compile.m"
          {
#line 1904 "mercury_compile.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".d", (MR_Integer) 1, &top_level__mercury_compile__DependencyFileName_12);
          }
#line 1906 "mercury_compile.m"
          {
#line 1906 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading auto-dependency file \140");
          }
#line 1907 "mercury_compile.m"
          {
#line 1907 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, top_level__mercury_compile__DependencyFileName_12);
          }
#line 1908 "mercury_compile.m"
          {
#line 1908 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "\'...");
          }
#line 1909 "mercury_compile.m"
          {
#line 1909 "mercury_compile.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
          }
#line 1910 "mercury_compile.m"
          {
#line 1910 "mercury_compile.m"
            mercury__io__open_input_4_p_0(top_level__mercury_compile__DependencyFileName_12, &top_level__mercury_compile__OpenResult_13);
          }
#line 1931 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 1932 "mercury_compile.m"
            {
#line 1932 "mercury_compile.m"
              MR_Word top_level__mercury_compile__IOError_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1932 "mercury_compile.m"
              MR_String top_level__mercury_compile__IOErrorMessage_23;
#line 1932 "mercury_compile.m"
              MR_String top_level__mercury_compile__Message_24;
#line 1932 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_42_42;
#line 1932 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_44_44;
#line 1932 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_45_45;
#line 1932 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_47_47;

#line 1933 "mercury_compile.m"
              {
#line 1933 "mercury_compile.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " failed.\n");
              }
#line 1934 "mercury_compile.m"
              {
#line 1934 "mercury_compile.m"
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
              }
#line 1935 "mercury_compile.m"
              {
#line 1935 "mercury_compile.m"
                mercury__io__error_message_2_p_0(top_level__mercury_compile__IOError_22, &top_level__mercury_compile__IOErrorMessage_23);
              }
#line 1937 "mercury_compile.m"
              {
#line 1937 "mercury_compile.m"
                top_level__mercury_compile__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1937 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 0) = ((MR_Box) (top_level__mercury_compile__IOErrorMessage_23));
#line 1937 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1937 "mercury_compile.m"
              }
#line 1937 "mercury_compile.m"
              {
#line 1937 "mercury_compile.m"
                top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1937 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) ((MR_String) "\' for input: "));
#line 1937 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 1) = ((MR_Box) (top_level__mercury_compile__V_47_47));
#line 1937 "mercury_compile.m"
              }
#line 1936 "mercury_compile.m"
              {
#line 1936 "mercury_compile.m"
                top_level__mercury_compile__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (top_level__mercury_compile__DependencyFileName_12));
#line 1936 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__V_45_45));
#line 1936 "mercury_compile.m"
              }
#line 1936 "mercury_compile.m"
              {
#line 1936 "mercury_compile.m"
                top_level__mercury_compile__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1936 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1936 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 1) = ((MR_Box) (top_level__mercury_compile__V_44_44));
#line 1936 "mercury_compile.m"
              }
#line 1936 "mercury_compile.m"
              {
#line 1936 "mercury_compile.m"
                mercury__string__append_list_2_p_0(top_level__mercury_compile__V_42_42, &top_level__mercury_compile__Message_24);
              }
#line 1938 "mercury_compile.m"
              {
#line 1938 "mercury_compile.m"
                libs__file_util__report_error_3_p_0(top_level__mercury_compile__Message_24);
              }
#line 1939 "mercury_compile.m"
              *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1932 "mercury_compile.m"
            }
#line 1931 "mercury_compile.m"
          else
#line 1912 "mercury_compile.m"
            {
#line 1912 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1912 "mercury_compile.m"
              MR_Word top_level__mercury_compile__OldStream_15;
#line 1912 "mercury_compile.m"
              MR_String top_level__mercury_compile__TransOptDateFileName0_16;
#line 1912 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptDateFileName_17;
#line 1912 "mercury_compile.m"
              MR_Word top_level__mercury_compile__SearchPattern_18;
#line 1912 "mercury_compile.m"
              MR_Word top_level__mercury_compile__FindResult_19;
#line 1928 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_21_21;

#line 1913 "mercury_compile.m"
              {
#line 1913 "mercury_compile.m"
                mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__Stream_14, &top_level__mercury_compile__OldStream_15);
              }
#line 1914 "mercury_compile.m"
              {
#line 1914 "mercury_compile.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".trans_opt_date", (MR_Integer) 1, &top_level__mercury_compile__TransOptDateFileName0_16);
              }
#line 1916 "mercury_compile.m"
              {
#line 1916 "mercury_compile.m"
                mercury__string__to_char_list_2_p_0(top_level__mercury_compile__TransOptDateFileName0_16, &top_level__mercury_compile__TransOptDateFileName_17);
              }
#line 1917 "mercury_compile.m"
              {
#line 1917 "mercury_compile.m"
                top_level__mercury_compile__SearchPattern_18 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__TransOptDateFileName_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[22]));
              }
#line 1918 "mercury_compile.m"
              {
#line 1918 "mercury_compile.m"
                top_level__mercury_compile__read_dependency_file_find_start_4_p_0(top_level__mercury_compile__SearchPattern_18, &top_level__mercury_compile__FindResult_19);
              }
#line 1923 "mercury_compile.m"
#line 1923 "mercury_compile.m"
              switch (top_level__mercury_compile__FindResult_19) {
#line 1923 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1923 "mercury_compile.m"
                case (MR_Integer) 0:
#line 1926 "mercury_compile.m"
                  *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1923 "mercury_compile.m"
                  break;
#line 1923 "mercury_compile.m"
                case (MR_Integer) 1:
#line 1920 "mercury_compile.m"
                  {
#line 1920 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TransOptDeps_20;

#line 1921 "mercury_compile.m"
                    {
#line 1921 "mercury_compile.m"
                      top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps_20);
                    }
#line 1922 "mercury_compile.m"
                    {
#line 1922 "mercury_compile.m"
                      MR_Word base;
#line 1922 "mercury_compile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1922 "mercury_compile.m"
                      *top_level__mercury_compile__MaybeTransOptDeps_8 = base;
#line 1922 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__TransOptDeps_20));
#line 1922 "mercury_compile.m"
                    }
#line 1920 "mercury_compile.m"
                  }
#line 1923 "mercury_compile.m"
                  break;
#line 1923 "mercury_compile.m"
              }
#line 1928 "mercury_compile.m"
              {
#line 1928 "mercury_compile.m"
                mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__OldStream_15, &top_level__mercury_compile__V_21_21);
              }
#line 1929 "mercury_compile.m"
              {
#line 1929 "mercury_compile.m"
                mercury__io__close_input_3_p_0(top_level__mercury_compile__Stream_14);
              }
#line 1930 "mercury_compile.m"
              {
#line 1930 "mercury_compile.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " done.\n");
#line 1930 "mercury_compile.m"
                return;
              }
#line 1912 "mercury_compile.m"
            }
#line 1902 "mercury_compile.m"
        }
#line 1941 "mercury_compile.m"
        break;
#line 1941 "mercury_compile.m"
    }
#line 1899 "mercury_compile.m"
  }
#line 1896 "mercury_compile.m"
}

#line 1868 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_aug_comp_unit_15_p_0(
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_17,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_18,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__AugCompUnit0_19,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__AugCompUnit_20,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_21,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_22,
#line 1868 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_24,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_25,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_26,
#line 1868 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_30,
#line 1868 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_31)
#line 1868 "mercury_compile.m"
{
#line 1876 "mercury_compile.m"
  {
#line 1876 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1876 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualifySpecs_29;
#line 1876 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_34_34;
#line 1876 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_40_40;

#line 1877 "mercury_compile.m"
    {
#line 1877 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_17, top_level__mercury_compile__Globals_16, top_level__mercury_compile__STATE_VARIABLE_Specs_0_30, &top_level__mercury_compile__STATE_VARIABLE_Specs_34_34);
    }
#line 1878 "mercury_compile.m"
    {
#line 1878 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_17, (MR_String) "% Module qualifying items...\n");
    }
#line 1879 "mercury_compile.m"
    {
#line 1879 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_17);
    }
#line 1880 "mercury_compile.m"
    {
#line 1880 "mercury_compile.m"
      parse_tree__module_qual__module_qualify_aug_comp_unit_11_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__AugCompUnit0_19, top_level__mercury_compile__AugCompUnit_20, top_level__mercury_compile__EventSpecMap0_21, top_level__mercury_compile__EventSpecMap_22, top_level__mercury_compile__EventSpecFileName_23, top_level__mercury_compile__MQInfo_24, top_level__mercury_compile__UndefTypes_25, top_level__mercury_compile__UndefModes_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__QualifySpecs_29);
    }
#line 1883 "mercury_compile.m"
    {
#line 1883 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__QualifySpecs_29, top_level__mercury_compile__STATE_VARIABLE_Specs_34_34);
    }
#line 1884 "mercury_compile.m"
    {
#line 1884 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_17, top_level__mercury_compile__Globals_16, top_level__mercury_compile__STATE_VARIABLE_Specs_40_40, top_level__mercury_compile__STATE_VARIABLE_Specs_31);
    }
#line 1885 "mercury_compile.m"
    {
#line 1885 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_17, (MR_String) "% done.\n");
    }
#line 1886 "mercury_compile.m"
    {
#line 1886 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_18);
#line 1886 "mercury_compile.m"
      return;
    }
#line 1876 "mercury_compile.m"
  }
#line 1868 "mercury_compile.m"
}

#line 1736 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestampMap_21,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_24,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1736 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1736 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70)
#line 1736 "mercury_compile.m"
{
#line 1744 "mercury_compile.m"
  {
#line 1744 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_122_122;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_28;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_29;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MMCMake_30;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile1_31;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_32;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_33;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_34;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTransOptDeps_35;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports1_36;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodError_37;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AugCompUnit1_38;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ItemSpecs_39;
#line 1744 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetFileName_41;
#line 1744 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetName_42;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap1_43;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSetErrors_44;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AugCompUnit2_48;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap2_49;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo0_50;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefTypes_51;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefModes_52;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo0_53;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AugCompUnit_54;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap_55;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeEqvMap_56;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UsedModules_57;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo_58;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandErrors_59;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo_60;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSet_61;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS0_62;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSFoundInvalidType_63;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_64;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_82_82;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_83_83;
#line 1744 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_85_85;
#line 1774 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Error_40;
#line 1777 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_96_96;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_97_97;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_98_98;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_99_99;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_100_100;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_101_101;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_102_102;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_103_103;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_104_104;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_105_105;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_106_106;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_107_107;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_108_108;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_109_109;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_110_110;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_111_111;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_112_112;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_113_113;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_114_114;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_115_115;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_116_116;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_117_117;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_118_118;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_119_119;
#line 1777 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_120_120;
#line 1777 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_121_121;

#line 1745 "mercury_compile.m"
    {
#line 1745 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_28);
    }
#line 1746 "mercury_compile.m"
    {
#line 1746 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 45, &top_level__mercury_compile__Verbose_29);
    }
#line 1747 "mercury_compile.m"
    {
#line 1747 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 629, &top_level__mercury_compile__MMCMake_30);
    }
#line 1748 "mercury_compile.m"
    {
#line 1748 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile1_31 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile0_18, top_level__mercury_compile__MMCMake_30);
    }
#line 1752 "mercury_compile.m"
    {
#line 1752 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_32);
    }
#line 1754 "mercury_compile.m"
    {
#line 1754 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile_33 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile1_31, top_level__mercury_compile__MakeOptInt_32);
    }
#line 1756 "mercury_compile.m"
    {
#line 1756 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports0_17, &top_level__mercury_compile__ModuleName_34);
    }
#line 1764 "mercury_compile.m"
#line 1764 "mercury_compile.m"
    switch (top_level__mercury_compile__DontWriteDFile_33) {
#line 1764 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1764 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1766 "mercury_compile.m"
        {
#line 1766 "mercury_compile.m"
          top_level__mercury_compile__maybe_read_dependency_file_5_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, &top_level__mercury_compile__MaybeTransOptDeps_35);
        }
#line 1764 "mercury_compile.m"
        break;
#line 1764 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1763 "mercury_compile.m"
        top_level__mercury_compile__MaybeTransOptDeps_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1764 "mercury_compile.m"
        break;
#line 1764 "mercury_compile.m"
    }
#line 1770 "mercury_compile.m"
    {
#line 1770 "mercury_compile.m"
      top_level__mercury_compile__maybe_grab_optfiles_8_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__MaybeTransOptDeps_35, &top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__IntermodError_37);
    }
#line 1774 "mercury_compile.m"
    {
#line 1774 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__AugCompUnit1_38, &top_level__mercury_compile__ItemSpecs_39, &top_level__mercury_compile___Error_40);
    }
#line 5476 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1776 "mercury_compile.m"
    {
#line 1776 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_79_79 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_122_122, top_level__mercury_compile__ItemSpecs_39, top_level__mercury_compile__STATE_VARIABLE_Specs_0_69);
    }
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 0)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 1)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 2)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 3)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 4)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 5)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 6)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 7)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 8)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 9)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 10)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 11)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 12)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 13)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 14)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 15)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 16)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 17)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 18)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 19)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 20)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 21)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 22)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 23)));
#line 1777 "mercury_compile.m"
    *top_level__mercury_compile__MaybeTimestampMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 24)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 25)));
#line 1777 "mercury_compile.m"
    top_level__mercury_compile__V_121_121 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 26)));
#line 1779 "mercury_compile.m"
    {
#line 1779 "mercury_compile.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 175, &top_level__mercury_compile__EventSetFileName_41);
    }
#line 1781 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__EventSetFileName_41, (MR_String) "") == 0);
#line 1785 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1782 "mercury_compile.m"
      {
#line 1782 "mercury_compile.m"
        top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1783 "mercury_compile.m"
        {
#line 1783 "mercury_compile.m"
          top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 1784 "mercury_compile.m"
        top_level__mercury_compile__EventSetErrors_44 = (MR_Integer) 0;
#line 1782 "mercury_compile.m"
        top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1782 "mercury_compile.m"
      }
#line 1785 "mercury_compile.m"
    else
#line 1787 "mercury_compile.m"
      {
#line 1787 "mercury_compile.m"
        MR_String top_level__mercury_compile__EventSetName0_45;
#line 1787 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSpecMap0_46;
#line 1787 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSetSpecs_47;

#line 1786 "mercury_compile.m"
        {
#line 1786 "mercury_compile.m"
          parse_tree__prog_event__read_event_set_6_p_0(top_level__mercury_compile__EventSetFileName_41, &top_level__mercury_compile__EventSetName0_45, &top_level__mercury_compile__EventSpecMap0_46, &top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1788 "mercury_compile.m"
        {
#line 1788 "mercury_compile.m"
          top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_122_122, top_level__mercury_compile__EventSetSpecs_47, top_level__mercury_compile__STATE_VARIABLE_Specs_79_79);
        }
#line 1789 "mercury_compile.m"
        {
#line 1789 "mercury_compile.m"
          top_level__mercury_compile__EventSetErrors_44 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1794 "mercury_compile.m"
#line 1794 "mercury_compile.m"
        switch (top_level__mercury_compile__EventSetErrors_44) {
#line 1794 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1794 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1791 "mercury_compile.m"
            {
#line 1792 "mercury_compile.m"
              top_level__mercury_compile__EventSetName_42 = top_level__mercury_compile__EventSetName0_45;
#line 1793 "mercury_compile.m"
              top_level__mercury_compile__EventSpecMap1_43 = top_level__mercury_compile__EventSpecMap0_46;
#line 1791 "mercury_compile.m"
            }
#line 1794 "mercury_compile.m"
            break;
#line 1794 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1795 "mercury_compile.m"
            {
#line 1796 "mercury_compile.m"
              top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1797 "mercury_compile.m"
              {
#line 1797 "mercury_compile.m"
                top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
              }
#line 1795 "mercury_compile.m"
            }
#line 1794 "mercury_compile.m"
            break;
#line 1794 "mercury_compile.m"
        }
#line 1787 "mercury_compile.m"
      }
#line 1801 "mercury_compile.m"
    {
#line 1801 "mercury_compile.m"
      top_level__mercury_compile__invoke_module_qualify_aug_comp_unit_15_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, top_level__mercury_compile__AugCompUnit1_38, &top_level__mercury_compile__AugCompUnit2_48, top_level__mercury_compile__EventSpecMap1_43, &top_level__mercury_compile__EventSpecMap2_49, top_level__mercury_compile__EventSetFileName_41, &top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQUndefTypes_51, &top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__STATE_VARIABLE_Specs_82_82, &top_level__mercury_compile__STATE_VARIABLE_Specs_83_83);
    }
#line 1805 "mercury_compile.m"
    {
#line 1805 "mercury_compile.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__RecompInfo0_53);
    }
#line 1806 "mercury_compile.m"
    {
#line 1806 "mercury_compile.m"
      top_level__mercury_compile__expand_equiv_types_and_insts_16_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, top_level__mercury_compile__AugCompUnit2_48, &top_level__mercury_compile__AugCompUnit_54, top_level__mercury_compile__EventSpecMap2_49, &top_level__mercury_compile__EventSpecMap_55, &top_level__mercury_compile__TypeEqvMap_56, &top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__RecompInfo0_53, &top_level__mercury_compile__RecompInfo_58, &top_level__mercury_compile__ExpandErrors_59, top_level__mercury_compile__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile__STATE_VARIABLE_Specs_85_85);
    }
#line 1809 "mercury_compile.m"
    {
#line 1809 "mercury_compile.m"
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(top_level__mercury_compile__RecompInfo_58, top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQInfo_60);
    }
#line 1811 "mercury_compile.m"
    {
#line 1811 "mercury_compile.m"
      top_level__mercury_compile__EventSet_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1811 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 0) = ((MR_Box) (top_level__mercury_compile__EventSetName_42));
#line 1811 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 1) = ((MR_Box) (top_level__mercury_compile__EventSpecMap_55));
#line 1811 "mercury_compile.m"
    }
#line 1812 "mercury_compile.m"
    {
#line 1812 "mercury_compile.m"
      top_level__mercury_compile__make_hlds_17_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__AugCompUnit_54, top_level__mercury_compile__EventSet_61, top_level__mercury_compile__MQInfo_60, top_level__mercury_compile__TypeEqvMap_56, top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__QualInfo_20, &top_level__mercury_compile__MakeHLDSFoundInvalidType_63, &top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_64, top_level__mercury_compile__FoundSemanticError_24, top_level__mercury_compile__STATE_VARIABLE_Specs_85_85, top_level__mercury_compile__STATE_VARIABLE_Specs_70);
    }
#line 1818 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefTypes_51 == (MR_Integer) 0);
#line 1818 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1818 "mercury_compile.m"
      {
#line 1819 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__EventSetErrors_44 == (MR_Integer) 0);
#line 1818 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1818 "mercury_compile.m"
          {
#line 1820 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExpandErrors_59 == (MR_Integer) 0);
#line 1818 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1821 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeHLDSFoundInvalidType_63 == (MR_Integer) 0);
#line 1818 "mercury_compile.m"
          }
#line 1818 "mercury_compile.m"
      }
#line 1824 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1823 "mercury_compile.m"
      *top_level__mercury_compile__UndefTypes_22 = (MR_Integer) 0;
#line 1824 "mercury_compile.m"
    else
#line 1825 "mercury_compile.m"
      *top_level__mercury_compile__UndefTypes_22 = (MR_Integer) 1;
#line 1828 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefModes_52 == (MR_Integer) 0);
#line 1828 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1829 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_64 == (MR_Integer) 0);
#line 1832 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1831 "mercury_compile.m"
      *top_level__mercury_compile__UndefModes_23 = (MR_Integer) 0;
#line 1832 "mercury_compile.m"
    else
#line 1833 "mercury_compile.m"
      *top_level__mercury_compile__UndefModes_23 = (MR_Integer) 1;
#line 1836 "mercury_compile.m"
    {
#line 1836 "mercury_compile.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile__HLDS0_62, (MR_Integer) 1, (MR_String) "initial", top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68);
    }
#line 1840 "mercury_compile.m"
#line 1840 "mercury_compile.m"
    switch (top_level__mercury_compile__DontWriteDFile_33) {
#line 1840 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1840 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1841 "mercury_compile.m"
        {
#line 1841 "mercury_compile.m"
          MR_Word top_level__mercury_compile__AllDeps_65;
#line 1841 "mercury_compile.m"
          MR_Word top_level__mercury_compile__OutputMMCMakeDeps_66;

#line 1842 "mercury_compile.m"
          {
#line 1842 "mercury_compile.m"
            hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__HLDS0_62, &top_level__mercury_compile__AllDeps_65);
          }
#line 1843 "mercury_compile.m"
          {
#line 1843 "mercury_compile.m"
            parse_tree__write_deps_file__write_dependency_file_6_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__AllDeps_65, top_level__mercury_compile__MaybeTransOptDeps_35);
          }
#line 1845 "mercury_compile.m"
          {
#line 1845 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 118, &top_level__mercury_compile__OutputMMCMakeDeps_66);
          }
#line 1850 "mercury_compile.m"
#line 1850 "mercury_compile.m"
          switch (top_level__mercury_compile__OutputMMCMakeDeps_66) {
#line 1850 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1850 "mercury_compile.m"
            case (MR_Integer) 0:
#line 1851 "mercury_compile.m"
              {
#line 1851 "mercury_compile.m"
              }
#line 1850 "mercury_compile.m"
              break;
#line 1850 "mercury_compile.m"
            case (MR_Integer) 1:
#line 1849 "mercury_compile.m"
              {
#line 1849 "mercury_compile.m"
                make__make_write_module_dep_file_4_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17);
              }
#line 1850 "mercury_compile.m"
              break;
#line 1850 "mercury_compile.m"
          }
#line 1841 "mercury_compile.m"
        }
#line 1840 "mercury_compile.m"
        break;
#line 1840 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1839 "mercury_compile.m"
        {
#line 1839 "mercury_compile.m"
        }
#line 1840 "mercury_compile.m"
        break;
#line 1840 "mercury_compile.m"
    }
#line 1857 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (*top_level__mercury_compile__FoundSemanticError_24 == (MR_Integer) 1);
#line 1858 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1858 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodError_37 == (MR_Integer) 1);
#line 1862 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1861 "mercury_compile.m"
      {
#line 1861 "mercury_compile.m"
        hlds__hlds_module__module_info_incr_errors_2_p_0(top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__HLDS1_19);
#line 1861 "mercury_compile.m"
        return;
      }
#line 1862 "mercury_compile.m"
    else
#line 1863 "mercury_compile.m"
      *top_level__mercury_compile__HLDS1_19 = top_level__mercury_compile__HLDS0_62;
#line 1744 "mercury_compile.m"
  }
#line 1736 "mercury_compile.m"
}

#line 1716 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1716 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1716 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1716 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1716 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1716 "mercury_compile.m"
{
#line 1716 "mercury_compile.m"
  {
#line 1716 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1716 "mercury_compile.m"
    {
#line 1716 "mercury_compile.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 1716 "mercury_compile.m"
      return;
    }
#line 1716 "mercury_compile.m"
  }
#line 1716 "mercury_compile.m"
}

#line 1587 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestampMap_14,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1587 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1587 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1587 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54)
#line 1587 "mercury_compile.m"
{
#line 1595 "mercury_compile.m"
  {
#line 1595 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_21;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_22;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_23;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HighLevelCode_24;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Target_25;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TargetCodeOnly_26;
#line 1595 "mercury_compile.m"
    MR_String top_level__mercury_compile__UsageFileName_27;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FrontEndErrors_29;
#line 1595 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__NumErrors_30;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1595 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1612 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1596 "mercury_compile.m"
    {
#line 1596 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__Globals_21);
    }
#line 1597 "mercury_compile.m"
    {
#line 1597 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 45, &top_level__mercury_compile__Verbose_22);
    }
#line 1598 "mercury_compile.m"
    {
#line 1598 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 55, &top_level__mercury_compile__Stats_23);
    }
#line 1599 "mercury_compile.m"
    {
#line 1599 "mercury_compile.m"
      top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(top_level__mercury_compile__Verbose_22, top_level__mercury_compile__Stats_23, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59);
    }
#line 1600 "mercury_compile.m"
    {
#line 1600 "mercury_compile.m"
      top_level__mercury_compile_middle_passes__middle_pass_7_p_0(top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62);
    }
#line 1601 "mercury_compile.m"
    {
#line 1601 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 255, &top_level__mercury_compile__HighLevelCode_24);
    }
#line 1602 "mercury_compile.m"
    {
#line 1602 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Target_25);
    }
#line 1603 "mercury_compile.m"
    {
#line 1603 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 99, &top_level__mercury_compile__TargetCodeOnly_26);
    }
#line 1610 "mercury_compile.m"
    {
#line 1610 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".used", (MR_Integer) 1, &top_level__mercury_compile__UsageFileName_27);
    }
#line 1612 "mercury_compile.m"
    {
#line 1612 "mercury_compile.m"
      mercury__io__remove_file_4_p_0(top_level__mercury_compile__UsageFileName_27, &top_level__mercury_compile__V_28_28);
    }
#line 1614 "mercury_compile.m"
    {
#line 1614 "mercury_compile.m"
      top_level__mercury_compile__FrontEndErrors_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__Specs_17);
    }
#line 1615 "mercury_compile.m"
    {
#line 1615 "mercury_compile.m"
      hlds__hlds_module__module_info_get_num_errors_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__NumErrors_30);
    }
#line 1617 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__FrontEndErrors_29 == (MR_Integer) 0);
#line 1617 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1618 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__NumErrors_30 == (MR_Integer) 0);
#line 1721 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1633 "mercury_compile.m"
      {
#line 1633 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Succeeded_37;
#line 1633 "mercury_compile.m"
        MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74;

#line 5957 "top_level.mercury_compile.c"
#line 5958 "top_level.mercury_compile.c"
        switch (top_level__mercury_compile__Target_25) {
#line 5960 "top_level.mercury_compile.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 5962 "top_level.mercury_compile.c"
          case (MR_Integer) 0:
#line 5964 "top_level.mercury_compile.c"
            {
#line 5966 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__ExportDecls_31;

#line 1625 "mercury_compile.m"
              {
#line 1625 "mercury_compile.m"
                backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ExportDecls_31);
              }
#line 1626 "mercury_compile.m"
              {
#line 1626 "mercury_compile.m"
                backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ExportDecls_31, top_level__mercury_compile__ModuleName_15);
              }
#line 1699 "mercury_compile.m"
#line 1699 "mercury_compile.m"
              switch (top_level__mercury_compile__HighLevelCode_24) {
#line 1699 "mercury_compile.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1699 "mercury_compile.m"
                case (MR_Integer) 0:
#line 1700 "mercury_compile.m"
                  {
#line 1700 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__GlobalData_47;
#line 1700 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__LLDS_48;

#line 1701 "mercury_compile.m"
                    {
#line 1701 "mercury_compile.m"
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, &top_level__mercury_compile__GlobalData_47, &top_level__mercury_compile__LLDS_48, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                    }
#line 1702 "mercury_compile.m"
                    {
#line 1702 "mercury_compile.m"
                      top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__GlobalData_47, top_level__mercury_compile__LLDS_48, top_level__mercury_compile__ModuleName_15, &top_level__mercury_compile__Succeeded_37, top_level__mercury_compile__ExtraObjFiles_18);
                    }
#line 1700 "mercury_compile.m"
                  }
#line 1699 "mercury_compile.m"
                  break;
#line 1699 "mercury_compile.m"
                case (MR_Integer) 1:
#line 1677 "mercury_compile.m"
                  {
#line 1677 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MLDS_124;
#line 1677 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1678 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_41_41;

#line 1678 "mercury_compile.m"
                    {
#line 1678 "mercury_compile.m"
                      top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_41_41, &top_level__mercury_compile__MLDS_124, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                    }
#line 1679 "mercury_compile.m"
                    {
#line 1679 "mercury_compile.m"
                      top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_124, &top_level__mercury_compile__TargetCodeSucceeded_125);
                    }
#line 1681 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_125 == (MR_Integer) 1);
#line 1681 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 1682 "mercury_compile.m"
                      top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1695 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 1685 "mercury_compile.m"
                      {
#line 1685 "mercury_compile.m"
                        MR_String top_level__mercury_compile__C_File_42;
#line 1685 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__TargetType_43;
#line 1685 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__PIC_44;
#line 1685 "mercury_compile.m"
                        MR_String top_level__mercury_compile__Obj_45;
#line 1685 "mercury_compile.m"
                        MR_String top_level__mercury_compile__O_File_46;
#line 1685 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__OutputStream_122;

#line 1684 "mercury_compile.m"
                        {
#line 1684 "mercury_compile.m"
                          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile__C_File_42);
                        }
#line 1686 "mercury_compile.m"
                        {
#line 1686 "mercury_compile.m"
                          backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__TargetType_43);
                        }
#line 1687 "mercury_compile.m"
                        {
#line 1687 "mercury_compile.m"
                          backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__TargetType_43, &top_level__mercury_compile__PIC_44);
                        }
#line 1688 "mercury_compile.m"
                        {
#line 1688 "mercury_compile.m"
                          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__PIC_44, &top_level__mercury_compile__Obj_45);
                        }
#line 1689 "mercury_compile.m"
                        {
#line 1689 "mercury_compile.m"
                          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__Obj_45, (MR_Integer) 0, &top_level__mercury_compile__O_File_46);
                        }
#line 1691 "mercury_compile.m"
                        {
#line 1691 "mercury_compile.m"
                          mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_122);
                        }
#line 1692 "mercury_compile.m"
                        {
#line 1692 "mercury_compile.m"
                          backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__OutputStream_122, top_level__mercury_compile__PIC_44, top_level__mercury_compile__C_File_42, top_level__mercury_compile__O_File_46, &top_level__mercury_compile__Succeeded_37);
                        }
#line 1694 "mercury_compile.m"
                        {
#line 1694 "mercury_compile.m"
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                        }
#line 1685 "mercury_compile.m"
                      }
#line 1695 "mercury_compile.m"
                    else
#line 1696 "mercury_compile.m"
                      top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1698 "mercury_compile.m"
                    *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1677 "mercury_compile.m"
                    top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1677 "mercury_compile.m"
                  }
#line 1699 "mercury_compile.m"
                  break;
#line 1699 "mercury_compile.m"
              }
#line 6107 "top_level.mercury_compile.c"
            }
#line 6109 "top_level.mercury_compile.c"
            break;
#line 6111 "top_level.mercury_compile.c"
          case (MR_Integer) 2:
#line 6113 "top_level.mercury_compile.c"
            {
#line 6115 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__MLDS_116;
#line 1653 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_38_38;

#line 1653 "mercury_compile.m"
              {
#line 1653 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MLDS_116, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
              }
#line 1654 "mercury_compile.m"
              {
#line 1654 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_116, &top_level__mercury_compile__Succeeded_37);
              }
#line 1655 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1652 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6134 "top_level.mercury_compile.c"
            }
#line 6136 "top_level.mercury_compile.c"
            break;
#line 6138 "top_level.mercury_compile.c"
          case (MR_Integer) 4:
#line 6140 "top_level.mercury_compile.c"
            {
#line 6142 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__ELDS_49;

#line 1707 "mercury_compile.m"
              {
#line 1707 "mercury_compile.m"
                top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ELDS_49, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
              }
#line 1708 "mercury_compile.m"
              {
#line 1708 "mercury_compile.m"
                top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ELDS_49, &top_level__mercury_compile__Succeeded_37);
              }
#line 1709 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1706 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6159 "top_level.mercury_compile.c"
            }
#line 6161 "top_level.mercury_compile.c"
            break;
#line 6163 "top_level.mercury_compile.c"
          case (MR_Integer) 1:
#line 6165 "top_level.mercury_compile.c"
            {
#line 6167 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__MLDS_33;
#line 6169 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1636 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_32_32;

#line 1636 "mercury_compile.m"
              {
#line 1636 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_32_32, &top_level__mercury_compile__MLDS_33, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
              }
#line 1637 "mercury_compile.m"
              {
#line 1637 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_33, &top_level__mercury_compile__TargetCodeSucceeded_34);
              }
#line 1639 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_34 == (MR_Integer) 1);
#line 1639 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1640 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1647 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1642 "mercury_compile.m"
                {
#line 1642 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__HasMain_35;
#line 1642 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__OutputStream_36;

#line 1642 "mercury_compile.m"
                  {
#line 1642 "mercury_compile.m"
                    top_level__mercury_compile__HasMain_35 = top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(top_level__mercury_compile__MLDS_33);
                  }
#line 1643 "mercury_compile.m"
                  {
#line 1643 "mercury_compile.m"
                    mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_36);
                  }
#line 1644 "mercury_compile.m"
                  {
#line 1644 "mercury_compile.m"
                    backend_libs__compile_target_code__il_assemble_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__OutputStream_36, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__HasMain_35, &top_level__mercury_compile__Succeeded_37);
                  }
#line 1646 "mercury_compile.m"
                  {
#line 1646 "mercury_compile.m"
                    parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                  }
#line 1642 "mercury_compile.m"
                }
#line 1647 "mercury_compile.m"
              else
#line 1648 "mercury_compile.m"
                top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1650 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1635 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6229 "top_level.mercury_compile.c"
            }
#line 6231 "top_level.mercury_compile.c"
            break;
#line 6233 "top_level.mercury_compile.c"
          case (MR_Integer) 3:
#line 6235 "top_level.mercury_compile.c"
            {
#line 6237 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__MLDS_119;
#line 6239 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1658 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_39_39;

#line 1658 "mercury_compile.m"
              {
#line 1658 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_39_39, &top_level__mercury_compile__MLDS_119, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
              }
#line 1659 "mercury_compile.m"
              {
#line 1659 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_119, &top_level__mercury_compile__TargetCodeSucceeded_120);
              }
#line 1661 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_120 == (MR_Integer) 1);
#line 1661 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1662 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1670 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1664 "mercury_compile.m"
                {
#line 1664 "mercury_compile.m"
                  MR_String top_level__mercury_compile__JavaFile_40;
#line 1664 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_96_96;
#line 1664 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__OutputStream_117;

#line 1664 "mercury_compile.m"
                  {
#line 1664 "mercury_compile.m"
                    mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_117);
                  }
#line 1665 "mercury_compile.m"
                  {
#line 1665 "mercury_compile.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".java", (MR_Integer) 1, &top_level__mercury_compile__JavaFile_40);
                  }
#line 1667 "mercury_compile.m"
                  {
#line 1667 "mercury_compile.m"
                    top_level__mercury_compile__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 0) = ((MR_Box) (top_level__mercury_compile__JavaFile_40));
#line 1667 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1667 "mercury_compile.m"
                  }
#line 1667 "mercury_compile.m"
                  {
#line 1667 "mercury_compile.m"
                    backend_libs__compile_target_code__compile_java_files_6_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__OutputStream_117, top_level__mercury_compile__V_96_96, &top_level__mercury_compile__Succeeded_37);
                  }
#line 1669 "mercury_compile.m"
                  {
#line 1669 "mercury_compile.m"
                    parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                  }
#line 1664 "mercury_compile.m"
                }
#line 1670 "mercury_compile.m"
              else
#line 1671 "mercury_compile.m"
                top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1673 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1657 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6311 "top_level.mercury_compile.c"
            }
#line 6313 "top_level.mercury_compile.c"
            break;
#line 6315 "top_level.mercury_compile.c"
        }
#line 1717 "mercury_compile.m"
#line 1717 "mercury_compile.m"
        switch (top_level__mercury_compile__Succeeded_37) {
#line 1717 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1717 "mercury_compile.m"
          case (MR_Integer) 0:
#line 1718 "mercury_compile.m"
            {
#line 1718 "mercury_compile.m"
            }
#line 1717 "mercury_compile.m"
            break;
#line 1717 "mercury_compile.m"
          case (MR_Integer) 1:
#line 1712 "mercury_compile.m"
            {
#line 1712 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TimestampFiles_50;
#line 1712 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_111_111;
#line 1715 "mercury_compile.m"
              void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1715 "mercury_compile.m"
              MR_Box top_level__mercury_compile__conv2_TimestampFiles_50;
#line 1715 "mercury_compile.m"
              MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110;
#line 1716 "mercury_compile.m"
              MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56;

#line 1713 "mercury_compile.m"
              {
#line 1713 "mercury_compile.m"
                recompilation__usage__write_usage_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__NestedSubModules_12, top_level__mercury_compile__MaybeTimestampMap_14);
              }
#line 1715 "mercury_compile.m"
              top_level__mercury_compile__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FindTimestampFiles_13, (MR_Integer) 1)));
#line 1715 "mercury_compile.m"
              {
#line 1715 "mercury_compile.m"
                top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__FindTimestampFiles_13), ((MR_Box) (top_level__mercury_compile__ModuleName_15)), &top_level__mercury_compile__conv2_TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110);
              }
#line 1715 "mercury_compile.m"
              top_level__mercury_compile__TimestampFiles_50 = ((MR_Word) top_level__mercury_compile__conv2_TimestampFiles_50);
#line 1716 "mercury_compile.m"
              {
#line 1716 "mercury_compile.m"
                top_level__mercury_compile__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1716 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_12[0]));
#line 1716 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 1) = ((MR_Box) (top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1));
#line 1716 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1716 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 3) = ((MR_Box) (top_level__mercury_compile__Globals_21));
#line 1716 "mercury_compile.m"
              }
#line 1716 "mercury_compile.m"
              {
#line 1716 "mercury_compile.m"
                mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_111_111, top_level__mercury_compile__TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56);
              }
#line 1712 "mercury_compile.m"
            }
#line 1717 "mercury_compile.m"
            break;
#line 1717 "mercury_compile.m"
        }
#line 1633 "mercury_compile.m"
      }
#line 1721 "mercury_compile.m"
    else
#line 1724 "mercury_compile.m"
      {
#line 1724 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_51;

#line 1724 "mercury_compile.m"
        {
#line 1724 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_51);
        }
#line 1725 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_51 == (MR_Integer) 0);
#line 1727 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1726 "mercury_compile.m"
          {
#line 1726 "mercury_compile.m"
            {
#line 1726 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1726 "mercury_compile.m"
          }
#line 1727 "mercury_compile.m"
        else
#line 1727 "mercury_compile.m"
          {
#line 1727 "mercury_compile.m"
          }
#line 1730 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1724 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1724 "mercury_compile.m"
      }
#line 1595 "mercury_compile.m"
  }
#line 1587 "mercury_compile.m"
}

#line 1574 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1574 "mercury_compile.m"
{
#line 1574 "mercury_compile.m"
  {
#line 1574 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1574 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1574 "mercury_compile.m"
    {
#line 1574 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1574 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1574 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1574 "mercury_compile.m"
  }
#line 1574 "mercury_compile.m"
}

#line 1563 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1563 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1563 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20)
#line 1563 "mercury_compile.m"
{
#line 1566 "mercury_compile.m"
  {
#line 1566 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1566 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_33_33;
#line 1566 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleNames_13;
#line 1566 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModulesList_14;
#line 1566 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SymNames_15;
#line 1566 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModuleNames_16;
#line 1566 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo0_17;
#line 1566 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo_18;

#line 1567 "mercury_compile.m"
    {
#line 1567 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    }
#line 1570 "mercury_compile.m"
    {
#line 1570 "mercury_compile.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__ModuleNames_13);
    }
#line 1572 "mercury_compile.m"
    {
#line 1572 "mercury_compile.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 668, &top_level__mercury_compile__LocalModulesList_14);
    }
#line 6511 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1574 "mercury_compile.m"
    {
#line 1574 "mercury_compile.m"
      top_level__mercury_compile__SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_scalar_common_5[4], top_level__mercury_compile__LocalModulesList_14);
    }
#line 1575 "mercury_compile.m"
    {
#line 1575 "mercury_compile.m"
      top_level__mercury_compile__LocalModuleNames_16 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_33, top_level__mercury_compile__SymNames_15);
    }
#line 1577 "mercury_compile.m"
    {
#line 1577 "mercury_compile.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__AnalysisInfo0_17);
    }
#line 1578 "mercury_compile.m"
    {
#line 1578 "mercury_compile.m"
      analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_13, top_level__mercury_compile__LocalModuleNames_16, top_level__mercury_compile__AnalysisInfo0_17, &top_level__mercury_compile__AnalysisInfo_18);
    }
#line 1580 "mercury_compile.m"
    {
#line 1580 "mercury_compile.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_18, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile__STATE_VARIABLE_HLDS_20);
    }
#line 1582 "mercury_compile.m"
    {
#line 1582 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
    }
#line 1583 "mercury_compile.m"
    {
#line 1583 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1583 "mercury_compile.m"
      return;
    }
#line 1566 "mercury_compile.m"
  }
#line 1563 "mercury_compile.m"
}

#line 1574 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1574 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1574 "mercury_compile.m"
{
#line 1574 "mercury_compile.m"
  {
#line 1574 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1574 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1574 "mercury_compile.m"
    {
#line 1574 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1574 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1574 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1574 "mercury_compile.m"
  }
#line 1574 "mercury_compile.m"
}

#line 1550 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1550 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1550 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15)
#line 1550 "mercury_compile.m"
{
#line 1553 "mercury_compile.m"
  {
#line 1553 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1553 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_13;

#line 1554 "mercury_compile.m"
    {
#line 1554 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 334, &top_level__mercury_compile__IntermodAnalysis_13);
    }
#line 1559 "mercury_compile.m"
#line 1559 "mercury_compile.m"
    switch (top_level__mercury_compile__IntermodAnalysis_13) {
#line 1559 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1559 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1560 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14;
#line 1559 "mercury_compile.m"
        break;
#line 1559 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1566 "mercury_compile.m"
        {
#line 1566 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TypeCtorInfo_33_46;
#line 1566 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleNames_30;
#line 1566 "mercury_compile.m"
          MR_Word top_level__mercury_compile__LocalModulesList_31;
#line 1566 "mercury_compile.m"
          MR_Word top_level__mercury_compile__SymNames_32;
#line 1566 "mercury_compile.m"
          MR_Word top_level__mercury_compile__LocalModuleNames_33;
#line 1566 "mercury_compile.m"
          MR_Word top_level__mercury_compile__AnalysisInfo0_34;
#line 1566 "mercury_compile.m"
          MR_Word top_level__mercury_compile__AnalysisInfo_35;

#line 1567 "mercury_compile.m"
          {
#line 1567 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
          }
#line 1570 "mercury_compile.m"
          {
#line 1570 "mercury_compile.m"
            hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__ModuleNames_30);
          }
#line 1572 "mercury_compile.m"
          {
#line 1572 "mercury_compile.m"
            libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 668, &top_level__mercury_compile__LocalModulesList_31);
          }
#line 6659 "top_level.mercury_compile.c"
          top_level__mercury_compile__TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1574 "mercury_compile.m"
          {
#line 1574 "mercury_compile.m"
            top_level__mercury_compile__SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_scalar_common_5[3], top_level__mercury_compile__LocalModulesList_31);
          }
#line 1575 "mercury_compile.m"
          {
#line 1575 "mercury_compile.m"
            top_level__mercury_compile__LocalModuleNames_33 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_46, top_level__mercury_compile__SymNames_32);
          }
#line 1577 "mercury_compile.m"
          {
#line 1577 "mercury_compile.m"
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__AnalysisInfo0_34);
          }
#line 1578 "mercury_compile.m"
          {
#line 1578 "mercury_compile.m"
            analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_30, top_level__mercury_compile__LocalModuleNames_33, top_level__mercury_compile__AnalysisInfo0_34, &top_level__mercury_compile__AnalysisInfo_35);
          }
#line 1580 "mercury_compile.m"
          {
#line 1580 "mercury_compile.m"
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_35, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile__STATE_VARIABLE_HLDS_15);
          }
#line 1582 "mercury_compile.m"
          {
#line 1582 "mercury_compile.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
          }
#line 1583 "mercury_compile.m"
          {
#line 1583 "mercury_compile.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1583 "mercury_compile.m"
            return;
          }
#line 1566 "mercury_compile.m"
        }
#line 1559 "mercury_compile.m"
        break;
#line 1559 "mercury_compile.m"
    }
#line 1553 "mercury_compile.m"
  }
#line 1550 "mercury_compile.m"
}

#line 1463 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1463 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1463 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1463 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1463 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48)
#line 1463 "mercury_compile.m"
{
#line 1470 "mercury_compile.m"
  {
#line 1470 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_20;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCheckOnly_21;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ErrorCheckOnly_22;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_23;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS1_24;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualInfo_25;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestampMap_26;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefTypes_27;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefModes_28;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors1_29;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors2_30;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS20_31;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_54_54;
#line 1470 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1483 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;

#line 1471 "mercury_compile.m"
    {
#line 1471 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports_13, &top_level__mercury_compile__ModuleName_20);
    }
#line 1474 "mercury_compile.m"
    {
#line 1474 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 97, &top_level__mercury_compile__TypeCheckOnly_21);
    }
#line 1475 "mercury_compile.m"
    {
#line 1475 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 98, &top_level__mercury_compile__ErrorCheckOnly_22);
    }
#line 1476 "mercury_compile.m"
    {
#line 1476 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__TypeCheckOnly_21, top_level__mercury_compile__ErrorCheckOnly_22, &top_level__mercury_compile__DontWriteDFile_23);
    }
#line 1477 "mercury_compile.m"
    {
#line 1477 "mercury_compile.m"
      top_level__mercury_compile__pre_hlds_pass_15_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleAndImports_13, top_level__mercury_compile__DontWriteDFile_23, &top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__QualInfo_25, &top_level__mercury_compile__MaybeTimestampMap_26, &top_level__mercury_compile__UndefTypes_27, &top_level__mercury_compile__UndefModes_28, &top_level__mercury_compile__Errors1_29, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_0_47, &top_level__mercury_compile__STATE_VARIABLE_Specs_54_54);
    }
#line 1480 "mercury_compile.m"
    {
#line 1480 "mercury_compile.m"
      top_level__mercury_compile_front_end__frontend_pass_13_p_0(top_level__mercury_compile__QualInfo_25, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, top_level__mercury_compile__Errors1_29, &top_level__mercury_compile__Errors2_30, top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__HLDS20_31, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_Specs_54_54, top_level__mercury_compile__STATE_VARIABLE_Specs_48);
    }
#line 1483 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors1_29 == (MR_Integer) 0);
#line 1483 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1483 "mercury_compile.m"
      {
#line 1484 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors2_30 == (MR_Integer) 0);
#line 1483 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1483 "mercury_compile.m"
          {
#line 1485 "mercury_compile.m"
            {
#line 1485 "mercury_compile.m"
              top_level__mercury_compile__V_59_59 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_12, *top_level__mercury_compile__STATE_VARIABLE_Specs_48);
            }
#line 1485 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_59_59 == (MR_Integer) 0);
#line 1483 "mercury_compile.m"
          }
#line 1483 "mercury_compile.m"
      }
#line 1536 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1487 "mercury_compile.m"
      {
#line 1487 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_32;
#line 1487 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_33;
#line 1487 "mercury_compile.m"
        MR_Word top_level__mercury_compile__HLDS21_34;
#line 1487 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeOptInt_35;
#line 1487 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeTransOptInt_36;
#line 1487 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeAnalysisRegistry_37;
#line 1487 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeXmlDocumentation_38;

#line 1487 "mercury_compile.m"
        {
#line 1487 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 45, &top_level__mercury_compile__Verbose_32);
        }
#line 1488 "mercury_compile.m"
        {
#line 1488 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 55, &top_level__mercury_compile__Stats_33);
        }
#line 1489 "mercury_compile.m"
        {
#line 1489 "mercury_compile.m"
          top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS20_31, &top_level__mercury_compile__HLDS21_34);
        }
#line 1490 "mercury_compile.m"
        {
#line 1490 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_35);
        }
#line 1492 "mercury_compile.m"
        {
#line 1492 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_36);
        }
#line 1494 "mercury_compile.m"
        {
#line 1494 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 89, &top_level__mercury_compile__MakeAnalysisRegistry_37);
        }
#line 1496 "mercury_compile.m"
        {
#line 1496 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 90, &top_level__mercury_compile__MakeXmlDocumentation_38);
        }
#line 1498 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__TypeCheckOnly_21 == (MR_Integer) 1);
#line 1500 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1499 "mercury_compile.m"
          {
#line 1499 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1499 "mercury_compile.m"
          }
#line 1500 "mercury_compile.m"
        else
#line 1515 "mercury_compile.m"
          {
#line 1500 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__ErrorCheckOnly_22 == (MR_Integer) 1);
#line 1515 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1503 "mercury_compile.m"
              {
#line 1503 "mercury_compile.m"
                MR_Word top_level__mercury_compile__UnusedArgs_39;

#line 1503 "mercury_compile.m"
                {
#line 1503 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 10, &top_level__mercury_compile__UnusedArgs_39);
                }
#line 1511 "mercury_compile.m"
#line 1511 "mercury_compile.m"
                switch (top_level__mercury_compile__UnusedArgs_39) {
#line 1511 "mercury_compile.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1511 "mercury_compile.m"
                  case (MR_Integer) 0:
#line 1512 "mercury_compile.m"
                    {
#line 1512 "mercury_compile.m"
                    }
#line 1511 "mercury_compile.m"
                    break;
#line 1511 "mercury_compile.m"
                  case (MR_Integer) 1:
#line 1505 "mercury_compile.m"
                    {
#line 1505 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__NoOptUnusedArgsGlobals_40;
#line 1505 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__HLDS21a_41;
#line 1510 "mercury_compile.m"
                      MR_Word top_level__mercury_compile___HLDS22_42;

#line 1506 "mercury_compile.m"
                      {
#line 1506 "mercury_compile.m"
                        libs__globals__set_option_4_p_0((MR_Integer) 353, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[2]), top_level__mercury_compile__Globals_12, &top_level__mercury_compile__NoOptUnusedArgsGlobals_40);
                      }
#line 1508 "mercury_compile.m"
                      {
#line 1508 "mercury_compile.m"
                        hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile__NoOptUnusedArgsGlobals_40, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS21a_41);
                      }
#line 1510 "mercury_compile.m"
                      {
#line 1510 "mercury_compile.m"
                        top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21a_41, &top_level__mercury_compile___HLDS22_42);
                      }
#line 1505 "mercury_compile.m"
                    }
#line 1511 "mercury_compile.m"
                    break;
#line 1511 "mercury_compile.m"
                }
#line 1514 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1503 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1503 "mercury_compile.m"
              }
#line 1515 "mercury_compile.m"
            else
#line 1518 "mercury_compile.m"
              {
#line 1515 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_35 == (MR_Integer) 1);
#line 1518 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1517 "mercury_compile.m"
                  {
#line 1517 "mercury_compile.m"
                    *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1517 "mercury_compile.m"
                    *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1517 "mercury_compile.m"
                  }
#line 1518 "mercury_compile.m"
                else
#line 1521 "mercury_compile.m"
                  {
#line 1518 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_36 == (MR_Integer) 1);
#line 1521 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 1519 "mercury_compile.m"
                      {
#line 1519 "mercury_compile.m"
                        {
#line 1519 "mercury_compile.m"
                          top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(top_level__mercury_compile__HLDS21_34, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                        }
#line 1520 "mercury_compile.m"
                        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1519 "mercury_compile.m"
                      }
#line 1521 "mercury_compile.m"
                    else
#line 1526 "mercury_compile.m"
                      {
#line 1521 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeAnalysisRegistry_37 == (MR_Integer) 1);
#line 1526 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 1523 "mercury_compile.m"
                          {
#line 1523 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__HLDS22_43;

#line 1522 "mercury_compile.m"
                            {
#line 1522 "mercury_compile.m"
                              top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_43);
                            }
#line 1524 "mercury_compile.m"
                            {
#line 1524 "mercury_compile.m"
                              top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(top_level__mercury_compile__HLDS22_43, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                            }
#line 1525 "mercury_compile.m"
                            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1523 "mercury_compile.m"
                          }
#line 1526 "mercury_compile.m"
                        else
#line 1529 "mercury_compile.m"
                          {
#line 1526 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeXmlDocumentation_38 == (MR_Integer) 1);
#line 1529 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 1527 "mercury_compile.m"
                              {
#line 1527 "mercury_compile.m"
                                {
#line 1527 "mercury_compile.m"
                                  check_hlds__xml_documentation__xml_documentation_3_p_0(top_level__mercury_compile__HLDS21_34);
                                }
#line 1528 "mercury_compile.m"
                                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1527 "mercury_compile.m"
                                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1527 "mercury_compile.m"
                              }
#line 1529 "mercury_compile.m"
                            else
#line 1531 "mercury_compile.m"
                              {
#line 1531 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__HLDS22_84;

#line 1530 "mercury_compile.m"
                                {
#line 1530 "mercury_compile.m"
                                  top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_84);
                                }
#line 1532 "mercury_compile.m"
                                {
#line 1532 "mercury_compile.m"
                                  top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(top_level__mercury_compile__NestedSubModules_14, top_level__mercury_compile__FindTimestampFiles_15, top_level__mercury_compile__MaybeTimestampMap_26, top_level__mercury_compile__ModuleName_20, top_level__mercury_compile__HLDS22_84, *top_level__mercury_compile__STATE_VARIABLE_Specs_48, top_level__mercury_compile__ExtraObjFiles_16, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
#line 1532 "mercury_compile.m"
                                  return;
                                }
#line 1531 "mercury_compile.m"
                              }
#line 1529 "mercury_compile.m"
                          }
#line 1526 "mercury_compile.m"
                      }
#line 1521 "mercury_compile.m"
                  }
#line 1518 "mercury_compile.m"
              }
#line 1515 "mercury_compile.m"
          }
#line 1487 "mercury_compile.m"
      }
#line 1536 "mercury_compile.m"
    else
#line 1539 "mercury_compile.m"
      {
#line 1539 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_44;

#line 1539 "mercury_compile.m"
        {
#line 1539 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_44);
        }
#line 1540 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_44 == (MR_Integer) 0);
#line 1542 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1541 "mercury_compile.m"
          {
#line 1541 "mercury_compile.m"
            {
#line 1541 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1541 "mercury_compile.m"
          }
#line 1542 "mercury_compile.m"
        else
#line 1542 "mercury_compile.m"
          {
#line 1542 "mercury_compile.m"
          }
#line 1545 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1539 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1539 "mercury_compile.m"
      }
#line 1470 "mercury_compile.m"
  }
#line 1463 "mercury_compile.m"
}

#line 1432 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1432 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_17,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_18,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_19,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_21,
#line 1432 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_22,
#line 1432 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_35,
#line 1432 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_36)
#line 1432 "mercury_compile.m"
{
#line 1441 "mercury_compile.m"
  {
#line 1441 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_49_49;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_25;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NestedSubModules_28;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports_29;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ImportedSpecs_31;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_32;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_33;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_39_39;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_42_42;
#line 1441 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_43_43;
#line 1443 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_26_26;
#line 1443 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_27_27;
#line 1452 "mercury_compile.m"
    MR_Word top_level__mercury_compile___AugCompUnit_30;

#line 1442 "mercury_compile.m"
    {
#line 1442 "mercury_compile.m"
      parse_tree__check_raw_comp_unit__check_for_no_exports_6_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__RawCompUnit_21, top_level__mercury_compile__STATE_VARIABLE_Specs_0_35, &top_level__mercury_compile__STATE_VARIABLE_Specs_39_39);
    }
#line 1443 "mercury_compile.m"
    top_level__mercury_compile__ModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__RawCompUnit_21, (MR_Integer) 0)));
#line 1443 "mercury_compile.m"
    top_level__mercury_compile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__RawCompUnit_21, (MR_Integer) 1)));
#line 1443 "mercury_compile.m"
    top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__RawCompUnit_21, (MR_Integer) 2)));
#line 1444 "mercury_compile.m"
    {
#line 1444 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_25, top_level__mercury_compile__SourceFileModuleName_16);
    }
#line 1446 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1445 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_28 = top_level__mercury_compile__NestedSubModules0_18;
#line 1446 "mercury_compile.m"
    else
#line 1447 "mercury_compile.m"
      {
#line 1447 "mercury_compile.m"
        {
#line 1447 "mercury_compile.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &top_level__mercury_compile__NestedSubModules_28);
        }
#line 1447 "mercury_compile.m"
      }
#line 1449 "mercury_compile.m"
    {
#line 1449 "mercury_compile.m"
      parse_tree__modules__grab_imported_modules_10_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__SourceFileName_15, top_level__mercury_compile__SourceFileModuleName_16, top_level__mercury_compile__MaybeTimestamp_17, top_level__mercury_compile__NestedSubModules_28, top_level__mercury_compile__RawCompUnit_21, top_level__mercury_compile__HaveReadModuleMaps_19, &top_level__mercury_compile__ModuleAndImports_29);
    }
#line 1452 "mercury_compile.m"
    {
#line 1452 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(top_level__mercury_compile__ModuleAndImports_29, &top_level__mercury_compile___AugCompUnit_30, &top_level__mercury_compile__ImportedSpecs_31, &top_level__mercury_compile__Errors_32);
    }
#line 1454 "mercury_compile.m"
    {
#line 1454 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_42_42 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ImportedSpecs_31, top_level__mercury_compile__STATE_VARIABLE_Specs_39_39);
    }
#line 1455 "mercury_compile.m"
    {
#line 1455 "mercury_compile.m"
      top_level__mercury_compile__V_43_43 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 7224 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1455 "mercury_compile.m"
    {
#line 1455 "mercury_compile.m"
      mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_49_49, top_level__mercury_compile__Errors_32, top_level__mercury_compile__V_43_43, &top_level__mercury_compile__FatalErrors_33);
    }
#line 1456 "mercury_compile.m"
    {
#line 1456 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_49_49, top_level__mercury_compile__FatalErrors_33);
    }
#line 1459 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1457 "mercury_compile.m"
      {
#line 1457 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_34_34;

#line 1457 "mercury_compile.m"
        {
#line 1457 "mercury_compile.m"
          top_level__mercury_compile__mercury_compile_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__ModuleAndImports_29, top_level__mercury_compile__NestedSubModules_28, top_level__mercury_compile__FindTimestampFiles_20, top_level__mercury_compile__ExtraObjFiles_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__V_34_34, top_level__mercury_compile__STATE_VARIABLE_Specs_42_42, top_level__mercury_compile__STATE_VARIABLE_Specs_36);
        }
#line 1457 "mercury_compile.m"
      }
#line 1459 "mercury_compile.m"
    else
#line 1460 "mercury_compile.m"
      {
#line 1460 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1460 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_Specs_36 = top_level__mercury_compile__STATE_VARIABLE_Specs_42_42;
#line 1460 "mercury_compile.m"
      }
#line 1441 "mercury_compile.m"
  }
#line 1432 "mercury_compile.m"
}

#line 1407 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1407 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1407 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1407 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1407 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10)
#line 1407 "mercury_compile.m"
{
#line 1411 "mercury_compile.m"
  {
#line 1411 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1411 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1412 "mercury_compile.m"
    {
#line 1412 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TimestampSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1414 "mercury_compile.m"
    {
#line 1414 "mercury_compile.m"
      MR_Word base;
#line 1414 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "mercury_compile.m"
      *top_level__mercury_compile__TimestampFiles_10 = base;
#line 1414 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1414 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "mercury_compile.m"
    }
#line 1411 "mercury_compile.m"
  }
#line 1407 "mercury_compile.m"
}

#line 1405 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1405 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1405 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1405 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1405 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1405 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1405 "mercury_compile.m"
{
#line 1405 "mercury_compile.m"
  {
#line 1405 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1405 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TimestampFiles_10;

#line 1405 "mercury_compile.m"
    {
#line 1405 "mercury_compile.m"
      top_level__mercury_compile__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TimestampFiles_10);
    }
#line 1405 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TimestampFiles_10));
#line 1405 "mercury_compile.m"
  }
#line 1405 "mercury_compile.m"
}

#line 1384 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1384 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1384 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4)
#line 1384 "mercury_compile.m"
{
#line 1387 "mercury_compile.m"
  {
#line 1387 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1387 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1387 "mercury_compile.m"
    MR_String top_level__mercury_compile__TimestampSuffix_6;

#line 1388 "mercury_compile.m"
    {
#line 1388 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1392 "mercury_compile.m"
    top_level__mercury_compile__TimestampSuffix_6 = ((&top_level__mercury_compile_vector_common_11[5 + top_level__mercury_compile__CompilationTarget_5]))->top_level__mercury_compile__vector_common_type_11_0__vct_11_f_0;
#line 1405 "mercury_compile.m"
    {
#line 1405 "mercury_compile.m"
      MR_Word base;
#line 1405 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "mercury_compile.m"
      *top_level__mercury_compile__FindTimestampFiles_4 = base;
#line 1405 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1405 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_timestamp_files_2_p_0_1));
#line 1405 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1405 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1405 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TimestampSuffix_6));
#line 1405 "mercury_compile.m"
    }
#line 1387 "mercury_compile.m"
  }
#line 1384 "mercury_compile.m"
}

#line 1373 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1373 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1373 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1373 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1373 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10)
#line 1373 "mercury_compile.m"
{
#line 1378 "mercury_compile.m"
  {
#line 1378 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1378 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1380 "mercury_compile.m"
    {
#line 1380 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TargetSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1382 "mercury_compile.m"
    {
#line 1382 "mercury_compile.m"
      MR_Word base;
#line 1382 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "mercury_compile.m"
      *top_level__mercury_compile__TargetFiles_10 = base;
#line 1382 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1382 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "mercury_compile.m"
    }
#line 1378 "mercury_compile.m"
  }
#line 1373 "mercury_compile.m"
}

#line 1371 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1371 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1371 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1371 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1371 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1371 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1371 "mercury_compile.m"
{
#line 1371 "mercury_compile.m"
  {
#line 1371 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1371 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TargetFiles_10;

#line 1371 "mercury_compile.m"
    {
#line 1371 "mercury_compile.m"
      top_level__mercury_compile__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TargetFiles_10);
    }
#line 1371 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TargetFiles_10));
#line 1371 "mercury_compile.m"
  }
#line 1371 "mercury_compile.m"
}

#line 1360 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1360 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1360 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4)
#line 1360 "mercury_compile.m"
{
#line 1363 "mercury_compile.m"
  {
#line 1363 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1363 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1363 "mercury_compile.m"
    MR_String top_level__mercury_compile__TargetSuffix_6;

#line 1364 "mercury_compile.m"
    {
#line 1364 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1366 "mercury_compile.m"
    top_level__mercury_compile__TargetSuffix_6 = ((&top_level__mercury_compile_vector_common_11[0 + top_level__mercury_compile__CompilationTarget_5]))->top_level__mercury_compile__vector_common_type_11_0__vct_11_f_0;
#line 1371 "mercury_compile.m"
    {
#line 1371 "mercury_compile.m"
      MR_Word base;
#line 1371 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1371 "mercury_compile.m"
      *top_level__mercury_compile__FindTargetFiles_4 = base;
#line 1371 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1371 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1));
#line 1371 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1371 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1371 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TargetSuffix_6));
#line 1371 "mercury_compile.m"
    }
#line 1363 "mercury_compile.m"
  }
#line 1360 "mercury_compile.m"
}

#line 1319 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1319 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1319 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_6)
#line 1319 "mercury_compile.m"
{
#line 1321 "mercury_compile.m"
  {
#line 1321 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1321 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1321 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));
#line 1321 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 2)));

#line 1322 "mercury_compile.m"
    {
#line 1322 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(top_level__mercury_compile__ModuleName_3, top_level__mercury_compile__ModuleToLink_6);
#line 1322 "mercury_compile.m"
      return;
    }
#line 1321 "mercury_compile.m"
  }
#line 1319 "mercury_compile.m"
}

#line 1308 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_3,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4)
#line 1308 "mercury_compile.m"
{
#line 1310 "mercury_compile.m"
  {
#line 1310 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1310 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1310 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_5;
#line 1310 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_6_6;

#line 1311 "mercury_compile.m"
    {
#line 1311 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__Errors_4);
    }
#line 1310 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1310 "mercury_compile.m"
      {
#line 1312 "mercury_compile.m"
        {
#line 1312 "mercury_compile.m"
          top_level__mercury_compile__V_6_6 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 1312 "mercury_compile.m"
        {
#line 1312 "mercury_compile.m"
          mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__Errors_4, top_level__mercury_compile__V_6_6, &top_level__mercury_compile__FatalErrors_5);
        }
#line 1314 "mercury_compile.m"
        {
#line 1314 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__FatalErrors_5);
        }
#line 1315 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1316 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_3 == (MR_Integer) 1);
#line 1310 "mercury_compile.m"
      }
#line 1310 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1310 "mercury_compile.m"
  }
#line 1308 "mercury_compile.m"
}

#line 1299 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1299 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1299 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1299 "mercury_compile.m"
{
#line 1305 "mercury_compile.m"
  {
#line 1305 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1305 "mercury_compile.m"
    {
#line 1305 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_private_interface_file_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__RawCompUnit_12, top_level__mercury_compile__MaybeTimestamp_11);
#line 1305 "mercury_compile.m"
      return;
    }
#line 1305 "mercury_compile.m"
  }
#line 1299 "mercury_compile.m"
}

#line 1293 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1293 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1293 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1293 "mercury_compile.m"
{
#line 1297 "mercury_compile.m"
  {
#line 1297 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1297 "mercury_compile.m"
    {
#line 1297 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__RawCompUnit_12);
#line 1297 "mercury_compile.m"
      return;
    }
#line 1297 "mercury_compile.m"
  }
#line 1293 "mercury_compile.m"
}

#line 1285 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1285 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1285 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1285 "mercury_compile.m"
{
#line 1290 "mercury_compile.m"
  {
#line 1290 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1290 "mercury_compile.m"
    {
#line 1290 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_interface_file_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__RawCompUnit_12, top_level__mercury_compile__MaybeTimestamp_11);
#line 1290 "mercury_compile.m"
      return;
    }
#line 1290 "mercury_compile.m"
  }
#line 1285 "mercury_compile.m"
}

#line 1282 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1282 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1282 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1282 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2)
#line 1282 "mercury_compile.m"
{
#line 1282 "mercury_compile.m"
  {
#line 1282 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1282 "mercury_compile.m"
    MR_String top_level__mercury_compile__conv4_ModuleToLink_6;

#line 1282 "mercury_compile.m"
    {
#line 1282 "mercury_compile.m"
      top_level__mercury_compile__module_to_link_2_p_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv4_ModuleToLink_6);
    }
#line 1282 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv4_ModuleToLink_6));
#line 1282 "mercury_compile.m"
  }
#line 1282 "mercury_compile.m"
}

#line 1277 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1277 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1277 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1277 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1277 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1277 "mercury_compile.m"
{
#line 1277 "mercury_compile.m"
  {
#line 1277 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_ExtraObjFiles_22;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_36;

#line 1277 "mercury_compile.m"
    {
#line 1277 "mercury_compile.m"
      top_level__mercury_compile__compile_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 9))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv1_ExtraObjFiles_22, ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_36);
    }
#line 1277 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv1_ExtraObjFiles_22));
#line 1277 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_36));
#line 1277 "mercury_compile.m"
  }
#line 1277 "mercury_compile.m"
}

#line 1266 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1266 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_17,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_18,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMaps_19,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnits_21,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1266 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1266 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24)
#line 1266 "mercury_compile.m"
{
#line 1275 "mercury_compile.m"
  {
#line 1275 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1275 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_45_45;
#line 1275 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_51_51;
#line 1275 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFileLists_26;
#line 1275 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_32_32;
#line 1275 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_33_33;
#line 1276 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33;
#line 1276 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34;
#line 1281 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumWarnings_27;
#line 1281 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumErrors_28;

#line 1277 "mercury_compile.m"
    {
#line 1277 "mercury_compile.m"
      top_level__mercury_compile__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_10[0]));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile__compile_all_submodules_13_p_0_1));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile__Globals_14));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 4) = ((MR_Box) (top_level__mercury_compile__FileName_15));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 5) = ((MR_Box) (top_level__mercury_compile__SourceFileModuleName_16));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_17));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 7) = ((MR_Box) (top_level__mercury_compile__NestedSubModules_18));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 8) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMaps_19));
#line 1277 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 9) = ((MR_Box) (top_level__mercury_compile__FindTimestampFiles_20));
#line 1277 "mercury_compile.m"
    }
#line 7854 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 1276 "mercury_compile.m"
    {
#line 1276 "mercury_compile.m"
      mercury__list__map_foldl2_7_p_2(top_level__mercury_compile__TypeCtorInfo_45_45, (MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_1[7], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_32_32, top_level__mercury_compile__RawCompUnits_21, &top_level__mercury_compile__ExtraObjFileLists_26, ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_Specs_0_29)), &top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34);
    }
#line 1276 "mercury_compile.m"
    top_level__mercury_compile__STATE_VARIABLE_Specs_33_33 = ((MR_Word) top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33);
#line 1281 "mercury_compile.m"
    {
#line 1281 "mercury_compile.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile__Globals_14, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_27, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_28);
    }
#line 7868 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1282 "mercury_compile.m"
    {
#line 1282 "mercury_compile.m"
      mercury__list__map_3_p_0(top_level__mercury_compile__TypeCtorInfo_45_45, top_level__mercury_compile__TypeCtorInfo_51_51, (MR_Word) &top_level__mercury_compile_scalar_common_5[2], top_level__mercury_compile__RawCompUnits_21, top_level__mercury_compile__ModulesToLink_23);
    }
#line 1283 "mercury_compile.m"
    {
#line 1283 "mercury_compile.m"
      mercury__list__condense_2_p_0(top_level__mercury_compile__TypeCtorInfo_51_51, top_level__mercury_compile__ExtraObjFileLists_26, top_level__mercury_compile__ExtraObjFiles_24);
#line 1283 "mercury_compile.m"
      return;
    }
#line 1275 "mercury_compile.m"
  }
#line 1266 "mercury_compile.m"
}

#line 1222 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_2(
#line 1222 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1222 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1222 "mercury_compile.m"
{
#line 1222 "mercury_compile.m"
  {
#line 1222 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1222 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1222 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1222 "mercury_compile.m"
    {
#line 1222 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1222 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1222 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1222 "mercury_compile.m"
  }
#line 1222 "mercury_compile.m"
}

#line 1211 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1211 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1211 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1211 "mercury_compile.m"
{
#line 1211 "mercury_compile.m"
  {
#line 1211 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1211 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1211 "mercury_compile.m"
    {
#line 1211 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1211__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1211 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1211 "mercury_compile.m"
  }
#line 1211 "mercury_compile.m"
}

#line 1166 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1166 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1166 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1166 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 1166 "mercury_compile.m"
{
#line 1171 "mercury_compile.m"
  {
#line 1171 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInt_18;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInt_19;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_20;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_21;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeAnalysisRegistry_22;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeXmlDocumentation_23;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DirectReport_24;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_26;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 1171 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_28;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamp_29;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ParseTreeSrc_30;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Specs0_31;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_32;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaveReadModuleMaps_33;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_34;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_61_61;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_62_62;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_63_63;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_64_64;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_65_65;
#line 1171 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_66_66;
#line 1310 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_7_98;
#line 1310 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_96;
#line 1310 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_97_97;

#line 1172 "mercury_compile.m"
    {
#line 1172 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 84, &top_level__mercury_compile__MakeShortInt_18);
    }
#line 1174 "mercury_compile.m"
    {
#line 1174 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 85, &top_level__mercury_compile__MakeInt_19);
    }
#line 1176 "mercury_compile.m"
    {
#line 1176 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_20);
    }
#line 1178 "mercury_compile.m"
    {
#line 1178 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_21);
    }
#line 1180 "mercury_compile.m"
    {
#line 1180 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 89, &top_level__mercury_compile__MakeAnalysisRegistry_22);
    }
#line 1182 "mercury_compile.m"
    {
#line 1182 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 90, &top_level__mercury_compile__MakeXmlDocumentation_23);
    }
#line 1185 "mercury_compile.m"
    {
#line 1185 "mercury_compile.m"
      top_level__mercury_compile__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_66_66, 0) = ((MR_Box) (top_level__mercury_compile__MakeXmlDocumentation_23));
#line 1185 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1185 "mercury_compile.m"
    }
#line 1185 "mercury_compile.m"
    {
#line 1185 "mercury_compile.m"
      top_level__mercury_compile__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_65_65, 0) = ((MR_Box) (top_level__mercury_compile__MakeAnalysisRegistry_22));
#line 1185 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_65_65, 1) = ((MR_Box) (top_level__mercury_compile__V_66_66));
#line 1185 "mercury_compile.m"
    }
#line 1184 "mercury_compile.m"
    {
#line 1184 "mercury_compile.m"
      top_level__mercury_compile__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 0) = ((MR_Box) (top_level__mercury_compile__MakeTransOptInt_21));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 1) = ((MR_Box) (top_level__mercury_compile__V_65_65));
#line 1184 "mercury_compile.m"
    }
#line 1184 "mercury_compile.m"
    {
#line 1184 "mercury_compile.m"
      top_level__mercury_compile__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 0) = ((MR_Box) (top_level__mercury_compile__MakeOptInt_20));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 1) = ((MR_Box) (top_level__mercury_compile__V_64_64));
#line 1184 "mercury_compile.m"
    }
#line 1184 "mercury_compile.m"
    {
#line 1184 "mercury_compile.m"
      top_level__mercury_compile__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile__MakeInt_19));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 1) = ((MR_Box) (top_level__mercury_compile__V_63_63));
#line 1184 "mercury_compile.m"
    }
#line 1184 "mercury_compile.m"
    {
#line 1184 "mercury_compile.m"
      top_level__mercury_compile__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 0) = ((MR_Box) (top_level__mercury_compile__MakeShortInt_18));
#line 1184 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 1) = ((MR_Box) (top_level__mercury_compile__V_62_62));
#line 1184 "mercury_compile.m"
    }
#line 1184 "mercury_compile.m"
    {
#line 1184 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_61_61, &top_level__mercury_compile__DirectReport_24);
    }
#line 1188 "mercury_compile.m"
#line 1188 "mercury_compile.m"
    switch (top_level__mercury_compile__DirectReport_24) {
#line 1188 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1188 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1189 "mercury_compile.m"
        {
#line 1189 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ReportCmdLineArgsDotErr_25;

#line 1190 "mercury_compile.m"
          {
#line 1190 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 54, &top_level__mercury_compile__ReportCmdLineArgsDotErr_25);
          }
#line 1192 "mercury_compile.m"
          {
#line 1192 "mercury_compile.m"
            top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgsDotErr_25, top_level__mercury_compile__OptionArgs_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1189 "mercury_compile.m"
        }
#line 1188 "mercury_compile.m"
        break;
#line 1188 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1187 "mercury_compile.m"
        {
#line 1187 "mercury_compile.m"
        }
#line 1188 "mercury_compile.m"
        break;
#line 1188 "mercury_compile.m"
    }
#line 1195 "mercury_compile.m"
    {
#line 1195 "mercury_compile.m"
      top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_10, &top_level__mercury_compile__Globals_26, top_level__mercury_compile__FileOrModule_12, &top_level__mercury_compile__ModuleName_27, &top_level__mercury_compile__FileName_28, (MR_Integer) 0, &top_level__mercury_compile__MaybeTimestamp_29, &top_level__mercury_compile__ParseTreeSrc_30, &top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Errors_32, top_level__mercury_compile__HaveReadModuleMap0_14, &top_level__mercury_compile__HaveReadModuleMaps_33);
    }
#line 1199 "mercury_compile.m"
    {
#line 1199 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_34);
    }
#line 8162 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_7_98 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1311 "mercury_compile.m"
    {
#line 1311 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_98, top_level__mercury_compile__Errors_32);
    }
#line 1310 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1310 "mercury_compile.m"
      {
#line 1312 "mercury_compile.m"
        {
#line 1312 "mercury_compile.m"
          top_level__mercury_compile__V_97_97 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 1312 "mercury_compile.m"
        {
#line 1312 "mercury_compile.m"
          mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_7_98, top_level__mercury_compile__Errors_32, top_level__mercury_compile__V_97_97, &top_level__mercury_compile__FatalErrors_96);
        }
#line 1314 "mercury_compile.m"
        {
#line 1314 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_98, top_level__mercury_compile__FatalErrors_96);
        }
#line 1315 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1316 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_34 == (MR_Integer) 1);
#line 1310 "mercury_compile.m"
      }
#line 1206 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1203 "mercury_compile.m"
      {
#line 1202 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumWarnings_35;
#line 1202 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumErrors_36;

#line 1202 "mercury_compile.m"
        {
#line 1202 "mercury_compile.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs0_31, top_level__mercury_compile__Globals_26, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_35, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_36);
        }
#line 1204 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1203 "mercury_compile.m"
      }
#line 1206 "mercury_compile.m"
    else
#line 1208 "mercury_compile.m"
      {
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_88_88;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__RawCompUnits0_37;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs1_38;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__RawCompUnitsToCompile_45;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__RawCompUnitNames_46;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedCompUnitNames_47;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FindTimestampFiles_48;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TraceProf_49;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GlobalsToUse_52;
#line 1208 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_78_78;
#line 1232 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_92_92;

#line 1207 "mercury_compile.m"
        {
#line 1207 "mercury_compile.m"
          parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile__ParseTreeSrc_30, &top_level__mercury_compile__RawCompUnits0_37, top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Specs1_38);
        }
#line 1217 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeModulesToRecompile_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1219 "mercury_compile.m"
          top_level__mercury_compile__RawCompUnitsToCompile_45 = top_level__mercury_compile__RawCompUnits0_37;
#line 1217 "mercury_compile.m"
        else
#line 1210 "mercury_compile.m"
          {
#line 1210 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeModulesToRecompile_13, (MR_Integer) 0)));
#line 1210 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ToRecompile_40;

#line 1211 "mercury_compile.m"
            {
#line 1211 "mercury_compile.m"
              top_level__mercury_compile__ToRecompile_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 1211 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 1) = ((MR_Box) (top_level__mercury_compile__process_module_2_9_p_0_1));
#line 1211 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1211 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToRecompile_39));
#line 1211 "mercury_compile.m"
            }
#line 1216 "mercury_compile.m"
            {
#line 1216 "mercury_compile.m"
              mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, top_level__mercury_compile__ToRecompile_40, top_level__mercury_compile__RawCompUnits0_37, &top_level__mercury_compile__RawCompUnitsToCompile_45);
            }
#line 1210 "mercury_compile.m"
          }
#line 8280 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_88_88 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1222 "mercury_compile.m"
        {
#line 1222 "mercury_compile.m"
          top_level__mercury_compile__V_78_78 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, top_level__mercury_compile__TypeCtorInfo_88_88, (MR_Word) &top_level__mercury_compile_scalar_common_5[1], top_level__mercury_compile__RawCompUnits0_37);
        }
#line 1221 "mercury_compile.m"
        {
#line 1221 "mercury_compile.m"
          top_level__mercury_compile__RawCompUnitNames_46 = mercury__set__list_to_set_1_f_0(top_level__mercury_compile__TypeCtorInfo_88_88, top_level__mercury_compile__V_78_78);
        }
#line 1223 "mercury_compile.m"
        {
#line 1223 "mercury_compile.m"
          mercury__set__delete_3_p_0(top_level__mercury_compile__TypeCtorInfo_88_88, ((MR_Box) (top_level__mercury_compile__ModuleName_27)), top_level__mercury_compile__RawCompUnitNames_46, &top_level__mercury_compile__NestedCompUnitNames_47);
        }
#line 1225 "mercury_compile.m"
        {
#line 1225 "mercury_compile.m"
          top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_26, &top_level__mercury_compile__FindTimestampFiles_48);
        }
#line 1227 "mercury_compile.m"
        {
#line 1227 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 122, &top_level__mercury_compile__TraceProf_49);
        }
#line 1230 "mercury_compile.m"
        {
#line 1230 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(top_level__mercury_compile__ModuleName_27);
        }
#line 1230 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1230 "mercury_compile.m"
          {
#line 1232 "mercury_compile.m"
            {
#line 1232 "mercury_compile.m"
              top_level__mercury_compile__V_92_92 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
            }
#line 1232 "mercury_compile.m"
            {
#line 1232 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__V_92_92);
            }
#line 1232 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1233 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TraceProf_49 == (MR_Integer) 1);
#line 1231 "mercury_compile.m"
            top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1230 "mercury_compile.m"
          }
#line 1246 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1242 "mercury_compile.m"
          {
#line 1242 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GlobalsNoTrace0_50;

#line 1241 "mercury_compile.m"
            {
#line 1241 "mercury_compile.m"
              libs__globals__set_option_4_p_0((MR_Integer) 271, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[2]), top_level__mercury_compile__Globals_26, &top_level__mercury_compile__GlobalsNoTrace0_50);
            }
#line 1243 "mercury_compile.m"
            {
#line 1243 "mercury_compile.m"
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile__GlobalsNoTrace0_50, &top_level__mercury_compile__GlobalsToUse_52);
            }
#line 1242 "mercury_compile.m"
          }
#line 1246 "mercury_compile.m"
        else
#line 1247 "mercury_compile.m"
          top_level__mercury_compile__GlobalsToUse_52 = top_level__mercury_compile__Globals_26;
#line 1249 "mercury_compile.m"
        {
#line 1249 "mercury_compile.m"
          top_level__mercury_compile__compile_all_submodules_13_p_0(top_level__mercury_compile__GlobalsToUse_52, top_level__mercury_compile__FileName_28, top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__MaybeTimestamp_29, top_level__mercury_compile__NestedCompUnitNames_47, top_level__mercury_compile__HaveReadModuleMaps_33, top_level__mercury_compile__FindTimestampFiles_48, top_level__mercury_compile__RawCompUnitsToCompile_45, top_level__mercury_compile__Specs1_38, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 1249 "mercury_compile.m"
          return;
        }
#line 1208 "mercury_compile.m"
      }
#line 1171 "mercury_compile.m"
  }
#line 1166 "mercury_compile.m"
}

#line 1145 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1145 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1145 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RawCompUnit_12)
#line 1145 "mercury_compile.m"
{
#line 1153 "mercury_compile.m"
  {
#line 1153 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1153 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_8, (MR_Integer) 1)));
#line 1153 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15;

#line 1153 "mercury_compile.m"
    {
#line 1153 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__ProcessModule_8), ((MR_Box) (top_level__mercury_compile__FileName_9)), ((MR_Box) (top_level__mercury_compile__ModuleName_10)), ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_11)), ((MR_Box) (top_level__mercury_compile__RawCompUnit_12)), ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15);
    }
#line 1153 "mercury_compile.m"
  }
#line 1145 "mercury_compile.m"
}

#line 1069 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1069 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1069 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1069 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1069 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1069 "mercury_compile.m"
{
#line 1069 "mercury_compile.m"
  {
#line 1069 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1069 "mercury_compile.m"
    {
#line 1069 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
#line 1069 "mercury_compile.m"
      return;
    }
#line 1069 "mercury_compile.m"
  }
#line 1069 "mercury_compile.m"
}

#line 1047 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1047 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1047 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1047 "mercury_compile.m"
{
#line 1047 "mercury_compile.m"
  {
#line 1047 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1047 "mercury_compile.m"
    {
#line 1047 "mercury_compile.m"
      top_level__mercury_compile__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1047 "mercury_compile.m"
      return;
    }
#line 1047 "mercury_compile.m"
  }
#line 1047 "mercury_compile.m"
}

#line 1044 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1044 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1044 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1044 "mercury_compile.m"
{
#line 1044 "mercury_compile.m"
  {
#line 1044 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1044 "mercury_compile.m"
    {
#line 1044 "mercury_compile.m"
      top_level__mercury_compile__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1044 "mercury_compile.m"
      return;
    }
#line 1044 "mercury_compile.m"
  }
#line 1044 "mercury_compile.m"
}

#line 1040 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1040 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1040 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1040 "mercury_compile.m"
{
#line 1040 "mercury_compile.m"
  {
#line 1040 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1040 "mercury_compile.m"
    {
#line 1040 "mercury_compile.m"
      top_level__mercury_compile__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1040 "mercury_compile.m"
      return;
    }
#line 1040 "mercury_compile.m"
  }
#line 1040 "mercury_compile.m"
}

#line 1023 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 1023 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 1023 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 1023 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 1023 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 1023 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12)
#line 1023 "mercury_compile.m"
{
#line 1027 "mercury_compile.m"
  {
#line 1027 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1027 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_14;
#line 1027 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInterface_15;
#line 1027 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInterface_16;
#line 1027 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakePrivateInterface_17;
#line 1027 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ConvertToMercury_18;
#line 1027 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateVersionNumbers_19;
#line 1075 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProcessModule_20;
#line 1075 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReturnTimestamp_21;

#line 1028 "mercury_compile.m"
    {
#line 1028 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_14);
    }
#line 1029 "mercury_compile.m"
    {
#line 1029 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 85, &top_level__mercury_compile__MakeInterface_15);
    }
#line 1030 "mercury_compile.m"
    {
#line 1030 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 84, &top_level__mercury_compile__MakeShortInterface_16);
    }
#line 1032 "mercury_compile.m"
    {
#line 1032 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 86, &top_level__mercury_compile__MakePrivateInterface_17);
    }
#line 1034 "mercury_compile.m"
    {
#line 1034 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 96, &top_level__mercury_compile__ConvertToMercury_18);
    }
#line 1036 "mercury_compile.m"
    {
#line 1036 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 117, &top_level__mercury_compile__GenerateVersionNumbers_19);
    }
#line 1039 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeInterface_15 == (MR_Integer) 1);
#line 1043 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1040 "mercury_compile.m"
      {
#line 1040 "mercury_compile.m"
        {
#line 1040 "mercury_compile.m"
          top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1040 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_1));
#line 1040 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1040 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1040 "mercury_compile.m"
        }
#line 1041 "mercury_compile.m"
        {
#line 1041 "mercury_compile.m"
          top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
        }
#line 1040 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_TRUE;
#line 1040 "mercury_compile.m"
      }
#line 1043 "mercury_compile.m"
    else
#line 1046 "mercury_compile.m"
      {
#line 1043 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeShortInterface_16 == (MR_Integer) 1);
#line 1046 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1044 "mercury_compile.m"
          {
#line 1044 "mercury_compile.m"
            {
#line 1044 "mercury_compile.m"
              top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1044 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_2));
#line 1044 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1044 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1044 "mercury_compile.m"
            }
#line 1045 "mercury_compile.m"
            top_level__mercury_compile__ReturnTimestamp_21 = (MR_Integer) 1;
#line 1044 "mercury_compile.m"
            top_level__mercury_compile__succeeded = MR_TRUE;
#line 1044 "mercury_compile.m"
          }
#line 1046 "mercury_compile.m"
        else
#line 1050 "mercury_compile.m"
          {
#line 1046 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakePrivateInterface_17 == (MR_Integer) 1);
#line 1050 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1050 "mercury_compile.m"
              {
#line 1047 "mercury_compile.m"
                {
#line 1047 "mercury_compile.m"
                  top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1047 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_3));
#line 1047 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1047 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1047 "mercury_compile.m"
                }
#line 1048 "mercury_compile.m"
                {
#line 1048 "mercury_compile.m"
                  top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
                }
#line 1048 "mercury_compile.m"
                top_level__mercury_compile__succeeded = MR_TRUE;
#line 1050 "mercury_compile.m"
              }
#line 1050 "mercury_compile.m"
          }
#line 1046 "mercury_compile.m"
      }
#line 1075 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1055 "mercury_compile.m"
      {
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__HaveReadModuleMaps0_22;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Globals_23;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_24;
#line 1055 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_25;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestamp_26;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ParseTreeSrc_27;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs0_28;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Errors_29;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_53_53;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_54_54;
#line 1055 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_55_55;
#line 1056 "mercury_compile.m"
        MR_Word top_level__mercury_compile___HaveReadModuleMaps_30;

#line 1055 "mercury_compile.m"
        {
#line 1055 "mercury_compile.m"
          top_level__mercury_compile__V_53_53 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
        }
#line 1055 "mercury_compile.m"
        {
#line 1055 "mercury_compile.m"
          top_level__mercury_compile__V_54_54 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
        }
#line 1055 "mercury_compile.m"
        {
#line 1055 "mercury_compile.m"
          top_level__mercury_compile__V_55_55 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
        }
#line 1055 "mercury_compile.m"
        {
#line 1055 "mercury_compile.m"
          top_level__mercury_compile__HaveReadModuleMaps0_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_22, 0) = ((MR_Box) (top_level__mercury_compile__V_53_53));
#line 1055 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_22, 1) = ((MR_Box) (top_level__mercury_compile__V_54_54));
#line 1055 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_22, 2) = ((MR_Box) (top_level__mercury_compile__V_55_55));
#line 1055 "mercury_compile.m"
        }
#line 1056 "mercury_compile.m"
        {
#line 1056 "mercury_compile.m"
          top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_23, top_level__mercury_compile__FileOrModule_10, &top_level__mercury_compile__ModuleName_24, &top_level__mercury_compile__FileName_25, top_level__mercury_compile__ReturnTimestamp_21, &top_level__mercury_compile__MaybeTimestamp_26, &top_level__mercury_compile__ParseTreeSrc_27, &top_level__mercury_compile__Specs0_28, &top_level__mercury_compile__Errors_29, top_level__mercury_compile__HaveReadModuleMaps0_22, &top_level__mercury_compile___HaveReadModuleMaps_30);
        }
#line 1060 "mercury_compile.m"
        {
#line 1060 "mercury_compile.m"
          top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Errors_29);
        }
#line 1062 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1062 "mercury_compile.m"
          {
#line 1062 "mercury_compile.m"
          }
#line 1062 "mercury_compile.m"
        else
#line 1064 "mercury_compile.m"
          {
#line 1064 "mercury_compile.m"
            MR_Word top_level__mercury_compile__RawCompUnits_31;
#line 1064 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_32;
#line 1064 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_60_60;
#line 1066 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_33;
#line 1066 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_34;
#line 1068 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46;

#line 1063 "mercury_compile.m"
            {
#line 1063 "mercury_compile.m"
              parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile__ParseTreeSrc_27, &top_level__mercury_compile__RawCompUnits_31, top_level__mercury_compile__Specs0_28, &top_level__mercury_compile__Specs_32);
            }
#line 1066 "mercury_compile.m"
            {
#line 1066 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_32, top_level__mercury_compile__Globals_23, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_33, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_34);
            }
#line 1069 "mercury_compile.m"
            {
#line 1069 "mercury_compile.m"
              top_level__mercury_compile__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_60_60, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[1]));
#line 1069 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_60_60, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_4));
#line 1069 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1069 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_60_60, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_20));
#line 1069 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_60_60, 4) = ((MR_Box) (top_level__mercury_compile__FileName_25));
#line 1069 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_60_60, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_24));
#line 1069 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_60_60, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_26));
#line 1069 "mercury_compile.m"
            }
#line 1068 "mercury_compile.m"
            {
#line 1068 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_60_60, top_level__mercury_compile__RawCompUnits_31, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46);
            }
#line 1064 "mercury_compile.m"
          }
#line 1073 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1074 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1055 "mercury_compile.m"
      }
#line 1075 "mercury_compile.m"
    else
#line 1094 "mercury_compile.m"
      {
#line 1076 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ConvertToMercury_18 == (MR_Integer) 1);
#line 1094 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1079 "mercury_compile.m"
          {
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_62_62;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_63_63;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_64_64;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMaps0_88;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_89;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_90;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ParseTreeSrc_91;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Errors_92;
#line 1079 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_94;
#line 1080 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_35_35;
#line 1080 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_36_36;
#line 1080 "mercury_compile.m"
            MR_Word top_level__mercury_compile___HaveReadModuleMaps_85;
#line 1084 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_86;
#line 1084 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_87;

#line 1079 "mercury_compile.m"
            {
#line 1079 "mercury_compile.m"
              top_level__mercury_compile__V_62_62 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
            }
#line 1079 "mercury_compile.m"
            {
#line 1079 "mercury_compile.m"
              top_level__mercury_compile__V_63_63 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
            }
#line 1079 "mercury_compile.m"
            {
#line 1079 "mercury_compile.m"
              top_level__mercury_compile__V_64_64 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
            }
#line 1079 "mercury_compile.m"
            {
#line 1079 "mercury_compile.m"
              top_level__mercury_compile__HaveReadModuleMaps0_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_88, 0) = ((MR_Box) (top_level__mercury_compile__V_62_62));
#line 1079 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_88, 1) = ((MR_Box) (top_level__mercury_compile__V_63_63));
#line 1079 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps0_88, 2) = ((MR_Box) (top_level__mercury_compile__V_64_64));
#line 1079 "mercury_compile.m"
            }
#line 1080 "mercury_compile.m"
            {
#line 1080 "mercury_compile.m"
              top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_89, top_level__mercury_compile__FileOrModule_10, &top_level__mercury_compile__ModuleName_90, &top_level__mercury_compile__V_35_35, (MR_Integer) 1, &top_level__mercury_compile__V_36_36, &top_level__mercury_compile__ParseTreeSrc_91, &top_level__mercury_compile__Specs_94, &top_level__mercury_compile__Errors_92, top_level__mercury_compile__HaveReadModuleMaps0_88, &top_level__mercury_compile___HaveReadModuleMaps_85);
            }
#line 1084 "mercury_compile.m"
            {
#line 1084 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_94, top_level__mercury_compile__Globals_89, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_86, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_87);
            }
#line 1085 "mercury_compile.m"
            {
#line 1085 "mercury_compile.m"
              top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Errors_92);
            }
#line 1087 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1087 "mercury_compile.m"
              {
#line 1087 "mercury_compile.m"
              }
#line 1087 "mercury_compile.m"
            else
#line 1089 "mercury_compile.m"
              {
#line 1089 "mercury_compile.m"
                MR_String top_level__mercury_compile__OutputFileName_37;

#line 1088 "mercury_compile.m"
                {
#line 1088 "mercury_compile.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_89, top_level__mercury_compile__ModuleName_90, (MR_String) ".ugly", (MR_Integer) 0, &top_level__mercury_compile__OutputFileName_37);
                }
#line 1090 "mercury_compile.m"
                {
#line 1090 "mercury_compile.m"
                  parse_tree__mercury_to_mercury__convert_to_mercury_src_5_p_0(top_level__mercury_compile__Globals_89, top_level__mercury_compile__OutputFileName_37, top_level__mercury_compile__ParseTreeSrc_91);
                }
#line 1089 "mercury_compile.m"
              }
#line 1092 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1093 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1079 "mercury_compile.m"
          }
#line 1094 "mercury_compile.m"
        else
#line 1095 "mercury_compile.m"
          {
#line 1095 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart0_38;
#line 1095 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_39;
#line 1095 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart_40;
#line 1095 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_43;
#line 1095 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMaps_44;
#line 1095 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_103;
#line 1132 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_83_83;

#line 1095 "mercury_compile.m"
            {
#line 1095 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 116, &top_level__mercury_compile__Smart0_38);
            }
#line 1096 "mercury_compile.m"
            {
#line 1096 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_39);
            }
#line 1102 "mercury_compile.m"
#line 1102 "mercury_compile.m"
            switch (top_level__mercury_compile__DisableSmart_39) {
#line 1102 "mercury_compile.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "mercury_compile.m"
              case (MR_Integer) 0:
#line 1103 "mercury_compile.m"
                {
#line 1104 "mercury_compile.m"
                  top_level__mercury_compile__Globals_103 = top_level__mercury_compile__Globals0_8;
#line 1105 "mercury_compile.m"
                  top_level__mercury_compile__Smart_40 = top_level__mercury_compile__Smart0_38;
#line 1103 "mercury_compile.m"
                }
#line 1102 "mercury_compile.m"
                break;
#line 1102 "mercury_compile.m"
              case (MR_Integer) 1:
#line 1098 "mercury_compile.m"
                {
#line 1099 "mercury_compile.m"
                  {
#line 1099 "mercury_compile.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[2]), top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_103);
                  }
#line 1101 "mercury_compile.m"
                  top_level__mercury_compile__Smart_40 = (MR_Integer) 0;
#line 1098 "mercury_compile.m"
                }
#line 1102 "mercury_compile.m"
                break;
#line 1102 "mercury_compile.m"
            }
#line 1126 "mercury_compile.m"
#line 1126 "mercury_compile.m"
            switch (top_level__mercury_compile__Smart_40) {
#line 1126 "mercury_compile.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1126 "mercury_compile.m"
              case (MR_Integer) 0:
#line 1127 "mercury_compile.m"
                {
#line 1127 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_79_79;
#line 1127 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_80_80;
#line 1127 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_81_81;

#line 1129 "mercury_compile.m"
                  {
#line 1129 "mercury_compile.m"
                    top_level__mercury_compile__V_79_79 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2]);
                  }
#line 1129 "mercury_compile.m"
                  {
#line 1129 "mercury_compile.m"
                    top_level__mercury_compile__V_80_80 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_scalar_common_1[4]);
                  }
#line 1129 "mercury_compile.m"
                  {
#line 1129 "mercury_compile.m"
                    top_level__mercury_compile__V_81_81 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_scalar_common_1[6]);
                  }
#line 1129 "mercury_compile.m"
                  {
#line 1129 "mercury_compile.m"
                    top_level__mercury_compile__HaveReadModuleMaps_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps_44, 0) = ((MR_Box) (top_level__mercury_compile__V_79_79));
#line 1129 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps_44, 1) = ((MR_Box) (top_level__mercury_compile__V_80_80));
#line 1129 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__HaveReadModuleMaps_44, 2) = ((MR_Box) (top_level__mercury_compile__V_81_81));
#line 1129 "mercury_compile.m"
                  }
#line 1130 "mercury_compile.m"
                  top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1127 "mercury_compile.m"
                }
#line 1126 "mercury_compile.m"
                break;
#line 1126 "mercury_compile.m"
              case (MR_Integer) 1:
#line 1108 "mercury_compile.m"
                {
#line 1108 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__FindTargetFiles_41;
#line 1108 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__FindTimestampFiles_42;
#line 1108 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__ModuleName_99;

#line 1111 "mercury_compile.m"
                  if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 1112 "mercury_compile.m"
                    {
#line 1112 "mercury_compile.m"
                      MR_String top_level__mercury_compile__FileName_97 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 1119 "mercury_compile.m"
                      {
#line 1119 "mercury_compile.m"
                        parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_97, &top_level__mercury_compile__ModuleName_99);
                      }
#line 1112 "mercury_compile.m"
                    }
#line 1111 "mercury_compile.m"
                  else
#line 1110 "mercury_compile.m"
                    top_level__mercury_compile__ModuleName_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));
#line 1121 "mercury_compile.m"
                  {
#line 1121 "mercury_compile.m"
                    top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(top_level__mercury_compile__Globals_103, &top_level__mercury_compile__FindTargetFiles_41);
                  }
#line 1122 "mercury_compile.m"
                  {
#line 1122 "mercury_compile.m"
                    top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_103, &top_level__mercury_compile__FindTimestampFiles_42);
                  }
#line 1123 "mercury_compile.m"
                  {
#line 1123 "mercury_compile.m"
                    recompilation__check__should_recompile_8_p_0(top_level__mercury_compile__Globals_103, top_level__mercury_compile__ModuleName_99, top_level__mercury_compile__FindTargetFiles_41, top_level__mercury_compile__FindTimestampFiles_42, &top_level__mercury_compile__ModulesToRecompile_43, &top_level__mercury_compile__HaveReadModuleMaps_44);
                  }
#line 1108 "mercury_compile.m"
                }
#line 1126 "mercury_compile.m"
                break;
#line 1126 "mercury_compile.m"
            }
#line 1132 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToRecompile_43)) == (MR_mktag((MR_Integer) 1)));
#line 1132 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1132 "mercury_compile.m"
              {
#line 1132 "mercury_compile.m"
                top_level__mercury_compile__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToRecompile_43, (MR_Integer) 0)));
#line 1132 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "mercury_compile.m"
              }
#line 1138 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1136 "mercury_compile.m"
              {
#line 1136 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1136 "mercury_compile.m"
              }
#line 1138 "mercury_compile.m"
            else
#line 1139 "mercury_compile.m"
              {
#line 1139 "mercury_compile.m"
                top_level__mercury_compile__process_module_2_9_p_0(top_level__mercury_compile__Globals_103, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ModulesToRecompile_43, top_level__mercury_compile__HaveReadModuleMaps_44, top_level__mercury_compile__ModulesToLink_11, top_level__mercury_compile__ExtraObjFiles_12);
#line 1139 "mercury_compile.m"
                return;
              }
#line 1095 "mercury_compile.m"
          }
#line 1094 "mercury_compile.m"
      }
#line 1027 "mercury_compile.m"
  }
#line 1023 "mercury_compile.m"
}

#line 1018 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 1018 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1)
#line 1018 "mercury_compile.m"
{
#line 1020 "mercury_compile.m"
  {
#line 1020 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1020 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HeadVar__2_2;

#line 1020 "mercury_compile.m"
#line 1020 "mercury_compile.m"
    switch (top_level__mercury_compile__HeadVar__1_1) {
#line 1020 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1020 "mercury_compile.m"
      case (MR_Integer) 0:
#line 1020 "mercury_compile.m"
        top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 1;
#line 1020 "mercury_compile.m"
        break;
#line 1020 "mercury_compile.m"
      case (MR_Integer) 1:
#line 1021 "mercury_compile.m"
        top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 0;
#line 1020 "mercury_compile.m"
        break;
#line 1020 "mercury_compile.m"
    }
#line 1020 "mercury_compile.m"
    return top_level__mercury_compile__HeadVar__2_2;
#line 1020 "mercury_compile.m"
  }
#line 1018 "mercury_compile.m"
}

#line 875 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_18,
#line 875 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_19,
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_20,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ParseTreeSrc_22,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 875 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46,
#line 875 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47)
#line 875 "mercury_compile.m"
{
#line 886 "mercury_compile.m"
  {
#line 886 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 886 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
#line 933 "mercury_compile.m"
      {
#line 933 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 933 "mercury_compile.m"
        MR_Word top_level__mercury_compile__DefaultModuleName_39;
#line 933 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_145;
#line 933 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_153;
#line 959 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_138;
#line 959 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ParseTreeSrcPrime_139;
#line 959 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_140;
#line 959 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_141;
#line 943 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_56_56;
#line 943 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_161_161;
#line 943 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_162_162;
#line 943 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_40_40;

#line 934 "mercury_compile.m"
        {
#line 934 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 45, &top_level__mercury_compile__Verbose_145);
        }
#line 935 "mercury_compile.m"
        {
#line 935 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_145, (MR_String) "% Parsing file \140");
        }
#line 936 "mercury_compile.m"
        {
#line 936 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_145, top_level__mercury_compile__FileName_38);
        }
#line 937 "mercury_compile.m"
        {
#line 937 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_145, (MR_String) "\' and imported interfaces...\n");
        }
#line 939 "mercury_compile.m"
        {
#line 939 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_38, &top_level__mercury_compile__DefaultModuleName_39);
        }
#line 943 "mercury_compile.m"
        top_level__mercury_compile__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 943 "mercury_compile.m"
        top_level__mercury_compile__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 943 "mercury_compile.m"
        top_level__mercury_compile__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 943 "mercury_compile.m"
        {
#line 943 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(top_level__mercury_compile__V_56_56, top_level__mercury_compile__DefaultModuleName_39, top_level__mercury_compile__ReturnTimestamp_20, &top_level__mercury_compile__V_40_40, &top_level__mercury_compile__MaybeTimestampPrime_138, &top_level__mercury_compile__ParseTreeSrcPrime_139, &top_level__mercury_compile__SpecsPrime_140, &top_level__mercury_compile__ErrorsPrime_141);
        }
#line 959 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 947 "mercury_compile.m"
          {
#line 947 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_57_57;
#line 947 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc0_135;
#line 947 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc_136;
#line 950 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_163_163;
#line 950 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_164_164;
#line 953 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_166_166;
#line 953 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_167_167;
#line 953 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_165_165;

#line 947 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 950 "mercury_compile.m"
            top_level__mercury_compile__HaveReadModuleMapSrc0_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 950 "mercury_compile.m"
            top_level__mercury_compile__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 950 "mercury_compile.m"
            top_level__mercury_compile__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 951 "mercury_compile.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 954 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_18 = top_level__mercury_compile__DefaultModuleName_39;
#line 951 "mercury_compile.m"
            {
#line 951 "mercury_compile.m"
              top_level__mercury_compile__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 951 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_57_57, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_18));
#line 951 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_57_57, 1) = NULL;
#line 951 "mercury_compile.m"
            }
#line 951 "mercury_compile.m"
            {
#line 951 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], ((MR_Box) (top_level__mercury_compile__V_57_57)), top_level__mercury_compile__HaveReadModuleMapSrc0_135, &top_level__mercury_compile__HaveReadModuleMapSrc_136);
            }
#line 953 "mercury_compile.m"
            top_level__mercury_compile__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 953 "mercury_compile.m"
            top_level__mercury_compile__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 953 "mercury_compile.m"
            top_level__mercury_compile__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 953 "mercury_compile.m"
            {
#line 953 "mercury_compile.m"
              MR_Word base;
#line 953 "mercury_compile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 953 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = base;
#line 953 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMapSrc_136));
#line 953 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__V_166_166));
#line 953 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile__V_167_167));
#line 953 "mercury_compile.m"
            }
#line 955 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_138;
#line 956 "mercury_compile.m"
            *top_level__mercury_compile__ParseTreeSrc_22 = top_level__mercury_compile__ParseTreeSrcPrime_139;
#line 957 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_140;
#line 958 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_141;
#line 947 "mercury_compile.m"
          }
#line 959 "mercury_compile.m"
        else
#line 966 "mercury_compile.m"
          {
#line 966 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart_41;
#line 966 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_62_62;
#line 966 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_137;
#line 984 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_42_42;
#line 984 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_43_43;

#line 965 "mercury_compile.m"
            {
#line 965 "mercury_compile.m"
              top_level__mercury_compile__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 965 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile__ReturnTimestamp_20));
#line 965 "mercury_compile.m"
            }
#line 963 "mercury_compile.m"
            {
#line 963 "mercury_compile.m"
              parse_tree__read_modules__read_module_src_from_file_11_p_0(top_level__mercury_compile__Globals0_15, top_level__mercury_compile__FileName_38, (MR_String) "Reading file", (MR_Integer) 1, top_level__mercury_compile__V_62_62, top_level__mercury_compile__MaybeTimestamp_21, top_level__mercury_compile__ParseTreeSrc_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24);
            }
#line 967 "mercury_compile.m"
            {
#line 967 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_137);
            }
#line 972 "mercury_compile.m"
#line 972 "mercury_compile.m"
            switch (top_level__mercury_compile__DisableSmart_137) {
#line 972 "mercury_compile.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 972 "mercury_compile.m"
              case (MR_Integer) 0:
#line 974 "mercury_compile.m"
                *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 972 "mercury_compile.m"
                break;
#line 972 "mercury_compile.m"
              case (MR_Integer) 1:
#line 969 "mercury_compile.m"
                {
#line 970 "mercury_compile.m"
                  {
#line 970 "mercury_compile.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[2]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                  }
#line 969 "mercury_compile.m"
                }
#line 972 "mercury_compile.m"
                break;
#line 972 "mercury_compile.m"
            }
#line 983 "mercury_compile.m"
            {
#line 983 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 116, &top_level__mercury_compile__Smart_41);
            }
#line 984 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile__ParseTreeSrc_22, (MR_Integer) 0)));
#line 984 "mercury_compile.m"
            top_level__mercury_compile__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile__ParseTreeSrc_22, (MR_Integer) 1)));
#line 984 "mercury_compile.m"
            top_level__mercury_compile__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile__ParseTreeSrc_22, (MR_Integer) 2)));
#line 986 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Smart_41 == (MR_Integer) 1);
#line 986 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 986 "mercury_compile.m"
              {
#line 987 "mercury_compile.m"
                {
#line 987 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*top_level__mercury_compile__ModuleName_18, top_level__mercury_compile__DefaultModuleName_39);
                }
#line 987 "mercury_compile.m"
                top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 986 "mercury_compile.m"
              }
#line 1009 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 992 "mercury_compile.m"
              {
#line 992 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Warn_44;

#line 991 "mercury_compile.m"
                {
#line 991 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 23, &top_level__mercury_compile__Warn_44);
                }
#line 1005 "mercury_compile.m"
#line 1005 "mercury_compile.m"
                switch (top_level__mercury_compile__Warn_44) {
#line 1005 "mercury_compile.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1005 "mercury_compile.m"
                  case (MR_Integer) 0:
#line 1006 "mercury_compile.m"
                    {
#line 1006 "mercury_compile.m"
                    }
#line 1005 "mercury_compile.m"
                    break;
#line 1005 "mercury_compile.m"
                  case (MR_Integer) 1:
#line 994 "mercury_compile.m"
                    {
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__Pieces_45;
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_72_72;
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_75_75;
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_77_77;
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_78_78;
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_79_79;
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_82_82;
#line 994 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_83_83;

#line 998 "mercury_compile.m"
                      {
#line 998 "mercury_compile.m"
                        top_level__mercury_compile__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 998 "mercury_compile.m"
                        MR_hl_field(MR_mktag(2), top_level__mercury_compile__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile__FileName_38));
#line 998 "mercury_compile.m"
                      }
#line 999 "mercury_compile.m"
                      {
#line 999 "mercury_compile.m"
                        top_level__mercury_compile__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "mercury_compile.m"
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 999 "mercury_compile.m"
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_83_83, 1) = ((MR_Box) (*top_level__mercury_compile__ModuleName_18));
#line 999 "mercury_compile.m"
                      }
#line 999 "mercury_compile.m"
                      {
#line 999 "mercury_compile.m"
                        top_level__mercury_compile__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 0) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 999 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[20])));
#line 999 "mercury_compile.m"
                      }
#line 998 "mercury_compile.m"
                      {
#line 998 "mercury_compile.m"
                        top_level__mercury_compile__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[36])));
#line 998 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_79_79, 1) = ((MR_Box) (top_level__mercury_compile__V_82_82));
#line 998 "mercury_compile.m"
                      }
#line 998 "mercury_compile.m"
                      {
#line 998 "mercury_compile.m"
                        top_level__mercury_compile__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_77_77, 0) = ((MR_Box) (top_level__mercury_compile__V_78_78));
#line 998 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_77_77, 1) = ((MR_Box) (top_level__mercury_compile__V_79_79));
#line 998 "mercury_compile.m"
                      }
#line 997 "mercury_compile.m"
                      {
#line 997 "mercury_compile.m"
                        top_level__mercury_compile__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 997 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 1) = ((MR_Box) (top_level__mercury_compile__V_77_77));
#line 997 "mercury_compile.m"
                      }
#line 997 "mercury_compile.m"
                      {
#line 997 "mercury_compile.m"
                        top_level__mercury_compile__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[35])));
#line 997 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_72_72, 1) = ((MR_Box) (top_level__mercury_compile__V_75_75));
#line 997 "mercury_compile.m"
                      }
#line 996 "mercury_compile.m"
                      {
#line 996 "mercury_compile.m"
                        top_level__mercury_compile__Pieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[34])));
#line 996 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_45, 1) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 996 "mercury_compile.m"
                      }
#line 1003 "mercury_compile.m"
                      {
#line 1003 "mercury_compile.m"
                        parse_tree__error_util__write_error_pieces_plain_4_p_0(*top_level__mercury_compile__Globals_16, top_level__mercury_compile__Pieces_45);
                      }
#line 1004 "mercury_compile.m"
                      {
#line 1004 "mercury_compile.m"
                        libs__compiler_util__record_warning_3_p_0(*top_level__mercury_compile__Globals_16);
                      }
#line 994 "mercury_compile.m"
                    }
#line 1005 "mercury_compile.m"
                    break;
#line 1005 "mercury_compile.m"
                }
#line 1008 "mercury_compile.m"
                {
#line 1008 "mercury_compile.m"
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
#line 992 "mercury_compile.m"
              }
#line 1009 "mercury_compile.m"
            else
#line 1009 "mercury_compile.m"
              {
#line 1009 "mercury_compile.m"
              }
#line 966 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46;
#line 966 "mercury_compile.m"
          }
#line 1013 "mercury_compile.m"
        {
#line 1013 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 56, &top_level__mercury_compile__Stats_153);
        }
#line 1014 "mercury_compile.m"
        {
#line 1014 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_153);
        }
#line 1015 "mercury_compile.m"
        {
#line 1015 "mercury_compile.m"
          *top_level__mercury_compile__SourceFileName_19 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__FileName_38, (MR_String) ".m");
        }
#line 933 "mercury_compile.m"
      }
#line 886 "mercury_compile.m"
    else
#line 886 "mercury_compile.m"
      {
#line 886 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_27;
#line 886 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleNameString_28;
#line 886 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_37;
#line 911 "mercury_compile.m"
        MR_String top_level__mercury_compile__SourceFileNamePrime_29;
#line 911 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_30;
#line 911 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ParseTreeSrcPrime_31;
#line 911 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_32;
#line 911 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_33;
#line 895 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_120_120;
#line 895 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_154_154;
#line 895 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_155_155;

#line 886 "mercury_compile.m"
        *top_level__mercury_compile__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 887 "mercury_compile.m"
        {
#line 887 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 45, &top_level__mercury_compile__Verbose_27);
        }
#line 888 "mercury_compile.m"
        {
#line 888 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "% Parsing module \140");
        }
#line 889 "mercury_compile.m"
        {
#line 889 "mercury_compile.m"
          top_level__mercury_compile__ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*top_level__mercury_compile__ModuleName_18);
        }
#line 890 "mercury_compile.m"
        {
#line 890 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, top_level__mercury_compile__ModuleNameString_28);
        }
#line 891 "mercury_compile.m"
        {
#line 891 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "\' and imported interfaces...\n");
        }
#line 895 "mercury_compile.m"
        top_level__mercury_compile__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 895 "mercury_compile.m"
        top_level__mercury_compile__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 895 "mercury_compile.m"
        top_level__mercury_compile__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 895 "mercury_compile.m"
        {
#line 895 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(top_level__mercury_compile__V_120_120, *top_level__mercury_compile__ModuleName_18, top_level__mercury_compile__ReturnTimestamp_20, &top_level__mercury_compile__SourceFileNamePrime_29, &top_level__mercury_compile__MaybeTimestampPrime_30, &top_level__mercury_compile__ParseTreeSrcPrime_31, &top_level__mercury_compile__SpecsPrime_32, &top_level__mercury_compile__ErrorsPrime_33);
        }
#line 911 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 899 "mercury_compile.m"
          {
#line 899 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc0_34;
#line 899 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMapSrc_35;
#line 899 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_121_121;
#line 902 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_156_156;
#line 902 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_157_157;
#line 905 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_159_159;
#line 905 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_160_160;
#line 905 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_158_158;

#line 899 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 902 "mercury_compile.m"
            top_level__mercury_compile__HaveReadModuleMapSrc0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 902 "mercury_compile.m"
            top_level__mercury_compile__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 902 "mercury_compile.m"
            top_level__mercury_compile__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 903 "mercury_compile.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 903 "mercury_compile.m"
            {
#line 903 "mercury_compile.m"
              top_level__mercury_compile__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_18));
#line 903 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 1) = NULL;
#line 903 "mercury_compile.m"
            }
#line 903 "mercury_compile.m"
            {
#line 903 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], ((MR_Box) (top_level__mercury_compile__V_121_121)), top_level__mercury_compile__HaveReadModuleMapSrc0_34, &top_level__mercury_compile__HaveReadModuleMapSrc_35);
            }
#line 905 "mercury_compile.m"
            top_level__mercury_compile__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
#line 905 "mercury_compile.m"
            top_level__mercury_compile__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
#line 905 "mercury_compile.m"
            top_level__mercury_compile__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
#line 905 "mercury_compile.m"
            {
#line 905 "mercury_compile.m"
              MR_Word base;
#line 905 "mercury_compile.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 905 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = base;
#line 905 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMapSrc_35));
#line 905 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__V_159_159));
#line 905 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile__V_160_160));
#line 905 "mercury_compile.m"
            }
#line 906 "mercury_compile.m"
            *top_level__mercury_compile__SourceFileName_19 = top_level__mercury_compile__SourceFileNamePrime_29;
#line 907 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_30;
#line 908 "mercury_compile.m"
            *top_level__mercury_compile__ParseTreeSrc_22 = top_level__mercury_compile__ParseTreeSrcPrime_31;
#line 909 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_32;
#line 910 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_33;
#line 899 "mercury_compile.m"
          }
#line 911 "mercury_compile.m"
        else
#line 919 "mercury_compile.m"
          {
#line 919 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_36;
#line 919 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_127_127;

#line 918 "mercury_compile.m"
            {
#line 918 "mercury_compile.m"
              top_level__mercury_compile__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_127_127, 0) = ((MR_Box) (top_level__mercury_compile__ReturnTimestamp_20));
#line 918 "mercury_compile.m"
            }
#line 915 "mercury_compile.m"
            {
#line 915 "mercury_compile.m"
              parse_tree__read_modules__read_module_src_13_p_0(top_level__mercury_compile__Globals0_15, (MR_String) "Reading module", (MR_Integer) 1, (MR_Integer) 1, *top_level__mercury_compile__ModuleName_18, top_level__mercury_compile__SourceFileName_19, top_level__mercury_compile__V_127_127, top_level__mercury_compile__MaybeTimestamp_21, top_level__mercury_compile__ParseTreeSrc_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24);
            }
#line 920 "mercury_compile.m"
            {
#line 920 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_36);
            }
#line 925 "mercury_compile.m"
#line 925 "mercury_compile.m"
            switch (top_level__mercury_compile__DisableSmart_36) {
#line 925 "mercury_compile.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 925 "mercury_compile.m"
              case (MR_Integer) 0:
#line 927 "mercury_compile.m"
                *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 925 "mercury_compile.m"
                break;
#line 925 "mercury_compile.m"
              case (MR_Integer) 1:
#line 922 "mercury_compile.m"
                {
#line 923 "mercury_compile.m"
                  {
#line 923 "mercury_compile.m"
                    libs__globals__set_option_4_p_0((MR_Integer) 116, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_4[2]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                  }
#line 922 "mercury_compile.m"
                }
#line 925 "mercury_compile.m"
                break;
#line 925 "mercury_compile.m"
            }
#line 919 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_47 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMaps_0_46;
#line 919 "mercury_compile.m"
          }
#line 930 "mercury_compile.m"
        {
#line 930 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_37);
        }
#line 931 "mercury_compile.m"
        {
#line 931 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_37);
#line 931 "mercury_compile.m"
          return;
        }
#line 886 "mercury_compile.m"
      }
#line 886 "mercury_compile.m"
  }
#line 875 "mercury_compile.m"
}

#line 800 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 800 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 800 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 800 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 800 "mercury_compile.m"
{
#line 806 "mercury_compile.m"
  {
#line 806 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 806 "mercury_compile.m"
    {
#line 806 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Globals_12, top_level__mercury_compile__HeadVar__5_5, top_level__mercury_compile__HeadVar__7_7);
#line 806 "mercury_compile.m"
      return;
    }
#line 806 "mercury_compile.m"
  }
#line 800 "mercury_compile.m"
}

#line 783 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 783 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 783 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 783 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 783 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 783 "mercury_compile.m"
{
#line 783 "mercury_compile.m"
  {
#line 783 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 783 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_HeadVar__5_5;
#line 783 "mercury_compile.m"
    MR_Tuple top_level__mercury_compile__conv0_HeadVar__7_7;

#line 783 "mercury_compile.m"
    {
#line 783 "mercury_compile.m"
      top_level__mercury_compile__process_arg_build_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile__wrapper_arg_4), &top_level__mercury_compile__conv0_HeadVar__7_7);
    }
#line 783 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv1_HeadVar__5_5));
#line 783 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__7_7));
#line 783 "mercury_compile.m"
  }
#line 783 "mercury_compile.m"
}

#line 770 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 770 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 770 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 770 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 770 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 770 "mercury_compile.m"
{
#line 775 "mercury_compile.m"
  {
#line 775 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 775 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileOrModule_18;
#line 775 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_19;
#line 860 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_43;

#line 857 "mercury_compile.m"
    {
#line 857 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__Arg_14, (MR_String) ".m", &top_level__mercury_compile__FileName_43);
    }
#line 860 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 859 "mercury_compile.m"
      {
#line 859 "mercury_compile.m"
        top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 859 "mercury_compile.m"
        MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__FileName_43));
#line 859 "mercury_compile.m"
      }
#line 860 "mercury_compile.m"
    else
#line 864 "mercury_compile.m"
      {
#line 864 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_44;

#line 864 "mercury_compile.m"
        {
#line 864 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__Arg_14, &top_level__mercury_compile__ModuleName_44);
        }
#line 865 "mercury_compile.m"
        {
#line 865 "mercury_compile.m"
          top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_44));
#line 865 "mercury_compile.m"
        }
#line 864 "mercury_compile.m"
      }
#line 777 "mercury_compile.m"
    {
#line 777 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 629, &top_level__mercury_compile__InvokedByMake_19);
    }
#line 793 "mercury_compile.m"
#line 793 "mercury_compile.m"
    switch (top_level__mercury_compile__InvokedByMake_19) {
#line 793 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 793 "mercury_compile.m"
      case (MR_Integer) 0:
#line 779 "mercury_compile.m"
        {
#line 779 "mercury_compile.m"
          MR_Word top_level__mercury_compile__MaybeTuple_21;
#line 779 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_27_27;
#line 779 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_29_29;
#line 780 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_20_20;

#line 870 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 870 "mercury_compile.m"
            {
#line 870 "mercury_compile.m"
              MR_String top_level__mercury_compile__FileName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 872 "mercury_compile.m"
              {
#line 872 "mercury_compile.m"
                parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_46, &top_level__mercury_compile__V_27_27);
              }
#line 870 "mercury_compile.m"
            }
#line 870 "mercury_compile.m"
          else
#line 873 "mercury_compile.m"
            top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));
#line 783 "mercury_compile.m"
          {
#line 783 "mercury_compile.m"
            top_level__mercury_compile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 783 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[0]));
#line 783 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_9_p_0_1));
#line 783 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 783 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 3) = ((MR_Box) (top_level__mercury_compile__FileOrModule_18));
#line 783 "mercury_compile.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 4) = ((MR_Box) (top_level__mercury_compile__OptionArgs_13));
#line 783 "mercury_compile.m"
          }
#line 780 "mercury_compile.m"
          {
#line 780 "mercury_compile.m"
            make__util__build_with_module_options_args_12_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_2[0], top_level__mercury_compile__Globals_10, top_level__mercury_compile__V_27_27, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_29_29, &top_level__mercury_compile__V_20_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeTuple_21);
          }
#line 788 "mercury_compile.m"
          if ((top_level__mercury_compile__MaybeTuple_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "mercury_compile.m"
            {
#line 790 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 789 "mercury_compile.m"
            }
#line 788 "mercury_compile.m"
          else
#line 786 "mercury_compile.m"
            {
#line 786 "mercury_compile.m"
              MR_Tuple top_level__mercury_compile__Tuple_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTuple_21, (MR_Integer) 0)));

#line 787 "mercury_compile.m"
              *top_level__mercury_compile__ModulesToLink_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 0)));
#line 787 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 1)));
#line 786 "mercury_compile.m"
            }
#line 779 "mercury_compile.m"
        }
#line 793 "mercury_compile.m"
        break;
#line 793 "mercury_compile.m"
      case (MR_Integer) 1:
#line 815 "mercury_compile.m"
        {
#line 815 "mercury_compile.m"
          MR_Word top_level__mercury_compile__GenerateDeps_57;

#line 816 "mercury_compile.m"
          {
#line 816 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 93, &top_level__mercury_compile__GenerateDeps_57);
          }
#line 828 "mercury_compile.m"
#line 828 "mercury_compile.m"
          switch (top_level__mercury_compile__GenerateDeps_57) {
#line 828 "mercury_compile.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 828 "mercury_compile.m"
            case (MR_Integer) 0:
#line 829 "mercury_compile.m"
              {
#line 829 "mercury_compile.m"
                MR_Word top_level__mercury_compile__GenerateDepFile_60;

#line 830 "mercury_compile.m"
                {
#line 830 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 92, &top_level__mercury_compile__GenerateDepFile_60);
                }
#line 843 "mercury_compile.m"
#line 843 "mercury_compile.m"
                switch (top_level__mercury_compile__GenerateDepFile_60) {
#line 843 "mercury_compile.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 843 "mercury_compile.m"
                  case (MR_Integer) 0:
#line 845 "mercury_compile.m"
                    {
#line 845 "mercury_compile.m"
                      top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__FileOrModule_18, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 845 "mercury_compile.m"
                      return;
                    }
#line 843 "mercury_compile.m"
                    break;
#line 843 "mercury_compile.m"
                  case (MR_Integer) 1:
#line 833 "mercury_compile.m"
                    {
#line 834 "mercury_compile.m"
                      *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 835 "mercury_compile.m"
                      *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "mercury_compile.m"
                      if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 837 "mercury_compile.m"
                        {
#line 837 "mercury_compile.m"
                          MR_String top_level__mercury_compile__FileName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 838 "mercury_compile.m"
                          {
#line 838 "mercury_compile.m"
                            parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_68);
#line 838 "mercury_compile.m"
                            return;
                          }
#line 837 "mercury_compile.m"
                        }
#line 839 "mercury_compile.m"
                      else
#line 840 "mercury_compile.m"
                        {
#line 840 "mercury_compile.m"
                          MR_Word top_level__mercury_compile__ModuleName_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 841 "mercury_compile.m"
                          {
#line 841 "mercury_compile.m"
                            parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_69);
#line 841 "mercury_compile.m"
                            return;
                          }
#line 840 "mercury_compile.m"
                        }
#line 833 "mercury_compile.m"
                    }
#line 843 "mercury_compile.m"
                    break;
#line 843 "mercury_compile.m"
                }
#line 829 "mercury_compile.m"
              }
#line 828 "mercury_compile.m"
              break;
#line 828 "mercury_compile.m"
            case (MR_Integer) 1:
#line 818 "mercury_compile.m"
              {
#line 819 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 822 "mercury_compile.m"
                  {
#line 822 "mercury_compile.m"
                    MR_String top_level__mercury_compile__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 823 "mercury_compile.m"
                    {
#line 823 "mercury_compile.m"
                      parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_58);
#line 823 "mercury_compile.m"
                      return;
                    }
#line 822 "mercury_compile.m"
                  }
#line 824 "mercury_compile.m"
                else
#line 825 "mercury_compile.m"
                  {
#line 825 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 826 "mercury_compile.m"
                    {
#line 826 "mercury_compile.m"
                      parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_59);
#line 826 "mercury_compile.m"
                      return;
                    }
#line 825 "mercury_compile.m"
                  }
#line 818 "mercury_compile.m"
              }
#line 828 "mercury_compile.m"
              break;
#line 828 "mercury_compile.m"
          }
#line 815 "mercury_compile.m"
        }
#line 793 "mercury_compile.m"
        break;
#line 793 "mercury_compile.m"
    }
#line 775 "mercury_compile.m"
  }
#line 770 "mercury_compile.m"
}

#line 742 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 742 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 742 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 742 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9)
#line 742 "mercury_compile.m"
{
#line 747 "mercury_compile.m"
  while (MR_TRUE)
#line 747 "mercury_compile.m"
    {
#line 747 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 747 "mercury_compile.m"
      {
#line 747 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 747 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "mercury_compile.m"
          {
#line 748 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8;
#line 748 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_7 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_6;
#line 747 "mercury_compile.m"
          }
#line 747 "mercury_compile.m"
        else
#line 750 "mercury_compile.m"
          {
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TypeCtorInfo_53_53;
#line 750 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgModules_34;
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgExtraObjFiles_35;
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_47_47;
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;
#line 750 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_49_49;

#line 751 "mercury_compile.m"
            {
#line 751 "mercury_compile.m"
              top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_1, top_level__mercury_compile__DetectedGradeFlags_2, top_level__mercury_compile__OptionVariables_3, top_level__mercury_compile__OptionArgs_4, top_level__mercury_compile__Arg_29, &top_level__mercury_compile__ArgModules_34, &top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 756 "mercury_compile.m"
            if ((top_level__mercury_compile__Args_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "mercury_compile.m"
              {
#line 757 "mercury_compile.m"
              }
#line 756 "mercury_compile.m"
            else
#line 755 "mercury_compile.m"
              {
#line 755 "mercury_compile.m"
                mercury__gc__garbage_collect_2_p_0();
              }
#line 10323 "top_level.mercury_compile.c"
            top_level__mercury_compile__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 759 "mercury_compile.m"
            {
#line 759 "mercury_compile.m"
              top_level__mercury_compile__V_47_47 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgModules_34);
            }
#line 759 "mercury_compile.m"
            {
#line 759 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_46_46 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Modules_0_6, top_level__mercury_compile__V_47_47);
            }
#line 760 "mercury_compile.m"
            {
#line 760 "mercury_compile.m"
              top_level__mercury_compile__V_49_49 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 760 "mercury_compile.m"
            {
#line 760 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8, top_level__mercury_compile__V_49_49);
            }
#line 761 "mercury_compile.m"
            /* direct tailcall eliminated */
#line 761 "mercury_compile.m"
            {
#line 761 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HeadVar__5__tmp_copy_5 = top_level__mercury_compile__Args_30;
#line 761 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 761 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;

#line 761 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8;
#line 761 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_0_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6;
#line 761 "mercury_compile.m"
              top_level__mercury_compile__HeadVar__5_5 = top_level__mercury_compile__HeadVar__5__tmp_copy_5;
#line 761 "mercury_compile.m"
            }
#line 761 "mercury_compile.m"
            continue;
#line 750 "mercury_compile.m"
          }
#line 747 "mercury_compile.m"
      }
#line 747 "mercury_compile.m"
      break;
#line 747 "mercury_compile.m"
    }
#line 742 "mercury_compile.m"
}

#line 709 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 709 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 709 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 709 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28)
#line 709 "mercury_compile.m"
{
#line 716 "mercury_compile.m"
  while (MR_TRUE)
#line 716 "mercury_compile.m"
    {
#line 716 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 716 "mercury_compile.m"
      {
#line 716 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 716 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FileResult_18;

#line 717 "mercury_compile.m"
        {
#line 717 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25);
        }
#line 719 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 719 "mercury_compile.m"
          {
#line 719 "mercury_compile.m"
          }
#line 719 "mercury_compile.m"
        else
#line 720 "mercury_compile.m"
          {
#line 720 "mercury_compile.m"
            mercury__gc__garbage_collect_2_p_0();
          }
#line 722 "mercury_compile.m"
        {
#line 722 "mercury_compile.m"
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile__FileResult_18);
        }
#line 732 "mercury_compile.m"
#line 732 "mercury_compile.m"
        switch (MR_tag((MR_Word) top_level__mercury_compile__FileResult_18)) {
#line 732 "mercury_compile.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 732 "mercury_compile.m"
          case (MR_Integer) 0:
#line 733 "mercury_compile.m"
            {
#line 733 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 733 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 733 "mercury_compile.m"
            }
#line 732 "mercury_compile.m"
            break;
#line 732 "mercury_compile.m"
          case (MR_Integer) 1:
#line 724 "mercury_compile.m"
            {
#line 724 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 724 "mercury_compile.m"
              MR_String top_level__mercury_compile__Line_19 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 724 "mercury_compile.m"
              MR_String top_level__mercury_compile__Arg_20;
#line 724 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgModules_21;
#line 724 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgExtraObjFiles_22;
#line 724 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 724 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_40_40;
#line 724 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;
#line 724 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_42_42;

#line 725 "mercury_compile.m"
              {
#line 725 "mercury_compile.m"
                top_level__mercury_compile__Arg_20 = mercury__string__rstrip_1_f_0(top_level__mercury_compile__Line_19);
              }
#line 726 "mercury_compile.m"
              {
#line 726 "mercury_compile.m"
                top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, top_level__mercury_compile__Arg_20, &top_level__mercury_compile__ArgModules_21, &top_level__mercury_compile__ArgExtraObjFiles_22);
              }
#line 10484 "top_level.mercury_compile.c"
              top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 728 "mercury_compile.m"
              {
#line 728 "mercury_compile.m"
                top_level__mercury_compile__V_40_40 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgModules_21);
              }
#line 728 "mercury_compile.m"
              {
#line 728 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_39_39 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25, top_level__mercury_compile__V_40_40);
              }
#line 729 "mercury_compile.m"
              {
#line 729 "mercury_compile.m"
                top_level__mercury_compile__V_42_42 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgExtraObjFiles_22);
              }
#line 729 "mercury_compile.m"
              {
#line 729 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27, top_level__mercury_compile__V_42_42);
              }
#line 730 "mercury_compile.m"
              /* direct tailcall eliminated */
#line 730 "mercury_compile.m"
              {
#line 730 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 730 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;

#line 730 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27;
#line 730 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_0_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25;
#line 730 "mercury_compile.m"
              }
#line 730 "mercury_compile.m"
              continue;
#line 724 "mercury_compile.m"
            }
#line 732 "mercury_compile.m"
            break;
#line 732 "mercury_compile.m"
          case (MR_Integer) 2:
#line 735 "mercury_compile.m"
            {
#line 735 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 735 "mercury_compile.m"
              MR_String top_level__mercury_compile__Msg_24;

#line 736 "mercury_compile.m"
              {
#line 736 "mercury_compile.m"
                mercury__io__error_message_2_p_0(top_level__mercury_compile__Error_23, &top_level__mercury_compile__Msg_24);
              }
#line 737 "mercury_compile.m"
              {
#line 737 "mercury_compile.m"
                mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
              }
#line 738 "mercury_compile.m"
              {
#line 738 "mercury_compile.m"
                mercury__io__write_string_3_p_0(top_level__mercury_compile__Msg_24);
              }
#line 739 "mercury_compile.m"
              {
#line 739 "mercury_compile.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 735 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 735 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 735 "mercury_compile.m"
            }
#line 732 "mercury_compile.m"
            break;
#line 732 "mercury_compile.m"
        }
#line 716 "mercury_compile.m"
      }
#line 716 "mercury_compile.m"
      break;
#line 716 "mercury_compile.m"
    }
#line 709 "mercury_compile.m"
}

#line 602 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 602 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 602 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 602 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 602 "mercury_compile.m"
{
#line 692 "mercury_compile.m"
  {
#line 692 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 692 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_32_43;
#line 692 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_31;
#line 692 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModulesToLinkCord_32;
#line 692 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFilesCord_33;

#line 693 "mercury_compile.m"
    {
#line 693 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 661, &top_level__mercury_compile__FileNamesFromStdin_31);
    }
#line 700 "mercury_compile.m"
#line 700 "mercury_compile.m"
    switch (top_level__mercury_compile__FileNamesFromStdin_31) {
#line 700 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 700 "mercury_compile.m"
      case (MR_Integer) 0:
#line 701 "mercury_compile.m"
        {
#line 701 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TypeCtorInfo_31_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 701 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_35_35;
#line 701 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_36_36;

#line 703 "mercury_compile.m"
          {
#line 703 "mercury_compile.m"
            top_level__mercury_compile__V_35_35 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
          }
#line 704 "mercury_compile.m"
          {
#line 704 "mercury_compile.m"
            top_level__mercury_compile__V_36_36 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
          }
#line 702 "mercury_compile.m"
          {
#line 702 "mercury_compile.m"
            top_level__mercury_compile__process_arg_list_11_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__Args_14, top_level__mercury_compile__V_35_35, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_36_36, &top_level__mercury_compile__ExtraObjFilesCord_33);
          }
#line 701 "mercury_compile.m"
        }
#line 700 "mercury_compile.m"
        break;
#line 700 "mercury_compile.m"
      case (MR_Integer) 1:
#line 696 "mercury_compile.m"
        {
#line 696 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TypeCtorInfo_30_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 696 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_38_38;
#line 696 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_39_39;

#line 698 "mercury_compile.m"
          {
#line 698 "mercury_compile.m"
            top_level__mercury_compile__V_38_38 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
          }
#line 699 "mercury_compile.m"
          {
#line 699 "mercury_compile.m"
            top_level__mercury_compile__V_39_39 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
          }
#line 697 "mercury_compile.m"
          {
#line 697 "mercury_compile.m"
            top_level__mercury_compile__process_stdin_arg_list_10_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__V_38_38, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_39_39, &top_level__mercury_compile__ExtraObjFilesCord_33);
          }
#line 696 "mercury_compile.m"
        }
#line 700 "mercury_compile.m"
        break;
#line 700 "mercury_compile.m"
    }
#line 10679 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_32_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 706 "mercury_compile.m"
    {
#line 706 "mercury_compile.m"
      *top_level__mercury_compile__ModulesToLink_15 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ModulesToLinkCord_32);
    }
#line 707 "mercury_compile.m"
    {
#line 707 "mercury_compile.m"
      *top_level__mercury_compile__ExtraObjFiles_16 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ExtraObjFilesCord_33);
    }
#line 692 "mercury_compile.m"
  }
#line 602 "mercury_compile.m"
}

#line 586 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 586 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 586 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 586 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8)
#line 586 "mercury_compile.m"
{
#line 591 "mercury_compile.m"
  {
#line 591 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 591 "mercury_compile.m"
#line 591 "mercury_compile.m"
    switch (top_level__mercury_compile__Report_6) {
#line 591 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 591 "mercury_compile.m"
      case (MR_Integer) 0:
#line 591 "mercury_compile.m"
        {
#line 591 "mercury_compile.m"
        }
#line 591 "mercury_compile.m"
        break;
#line 591 "mercury_compile.m"
      case (MR_Integer) 1:
#line 593 "mercury_compile.m"
        {
#line 593 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_19_19;
#line 593 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_21_21;
#line 593 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_31_31;

#line 594 "mercury_compile.m"
          {
#line 594 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
          }
#line 595 "mercury_compile.m"
          {
#line 595 "mercury_compile.m"
            top_level__mercury_compile__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__OptionArgs_7, top_level__mercury_compile__Args_8);
          }
#line 595 "mercury_compile.m"
          {
#line 595 "mercury_compile.m"
            top_level__mercury_compile__V_19_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", top_level__mercury_compile__V_21_21);
          }
#line 595 "mercury_compile.m"
          {
#line 595 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 595 "mercury_compile.m"
          {
#line 595 "mercury_compile.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_4[1], top_level__mercury_compile__V_19_19, &top_level__mercury_compile__V_31_31);
          }
#line 595 "mercury_compile.m"
          {
#line 595 "mercury_compile.m"
            mercury__io__write_string_3_p_0(top_level__mercury_compile__V_31_31);
          }
#line 595 "mercury_compile.m"
          {
#line 595 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 597 "mercury_compile.m"
          {
#line 597 "mercury_compile.m"
            mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
#line 597 "mercury_compile.m"
            return;
          }
#line 593 "mercury_compile.m"
        }
#line 591 "mercury_compile.m"
        break;
#line 591 "mercury_compile.m"
    }
#line 591 "mercury_compile.m"
  }
#line 586 "mercury_compile.m"
}

#line 535 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_2(
#line 535 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 535 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 535 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 535 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 535 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 535 "mercury_compile.m"
{
#line 535 "mercury_compile.m"
  {
#line 535 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 535 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_4;

#line 535 "mercury_compile.m"
    {
#line 535 "mercury_compile.m"
      backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_HeadVar__4_4);
    }
#line 535 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_4));
#line 535 "mercury_compile.m"
  }
#line 535 "mercury_compile.m"
}

#line 430 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_1(
#line 430 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 430 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 430 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 430 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 430 "mercury_compile.m"
{
#line 430 "mercury_compile.m"
  {
#line 430 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 430 "mercury_compile.m"
    {
#line 430 "mercury_compile.m"
      mercury__io__write_string_3_p_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 430 "mercury_compile.m"
      return;
    }
#line 430 "mercury_compile.m"
  }
#line 430 "mercury_compile.m"
}

#line 351 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0(
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_13,
#line 351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14)
#line 351 "mercury_compile.m"
{
#line 356 "mercury_compile.m"
  {
#line 356 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Version_16;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Help_17;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateMapping_18;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGrade_19;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLinkCommand_20;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputShLibLinkCommand_21;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_22;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibGrades_23;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCC_24;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCCType_25;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCFlags_26;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCSC_27;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCSCType_28;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibraryLinkFlags_29;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGradeDefines_30;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCInclDirFlags_31;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputTargetArch_32;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputClassDir_33;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Make_34;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateStandaloneInt_35;
#line 356 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReportCmdLineArgs_36;

#line 357 "mercury_compile.m"
    {
#line 357 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 665, &top_level__mercury_compile__Version_16);
    }
#line 358 "mercury_compile.m"
    {
#line 358 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 664, &top_level__mercury_compile__Help_17);
    }
#line 359 "mercury_compile.m"
    {
#line 359 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 91, &top_level__mercury_compile__GenerateMapping_18);
    }
#line 361 "mercury_compile.m"
    {
#line 361 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 102, &top_level__mercury_compile__OutputGrade_19);
    }
#line 363 "mercury_compile.m"
    {
#line 363 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 103, &top_level__mercury_compile__OutputLinkCommand_20);
    }
#line 365 "mercury_compile.m"
    {
#line 365 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 104, &top_level__mercury_compile__OutputShLibLinkCommand_21);
    }
#line 367 "mercury_compile.m"
    {
#line 367 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 661, &top_level__mercury_compile__FileNamesFromStdin_22);
    }
#line 369 "mercury_compile.m"
    {
#line 369 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 105, &top_level__mercury_compile__OutputLibGrades_23);
    }
#line 371 "mercury_compile.m"
    {
#line 371 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 106, &top_level__mercury_compile__OutputCC_24);
    }
#line 372 "mercury_compile.m"
    {
#line 372 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 107, &top_level__mercury_compile__OutputCCType_25);
    }
#line 373 "mercury_compile.m"
    {
#line 373 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 110, &top_level__mercury_compile__OutputCFlags_26);
    }
#line 374 "mercury_compile.m"
    {
#line 374 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 108, &top_level__mercury_compile__OutputCSC_27);
    }
#line 375 "mercury_compile.m"
    {
#line 375 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 109, &top_level__mercury_compile__OutputCSCType_28);
    }
#line 377 "mercury_compile.m"
    {
#line 377 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 111, &top_level__mercury_compile__OutputLibraryLinkFlags_29);
    }
#line 379 "mercury_compile.m"
    {
#line 379 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 112, &top_level__mercury_compile__OutputGradeDefines_30);
    }
#line 381 "mercury_compile.m"
    {
#line 381 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 113, &top_level__mercury_compile__OutputCInclDirFlags_31);
    }
#line 383 "mercury_compile.m"
    {
#line 383 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 114, &top_level__mercury_compile__OutputTargetArch_32);
    }
#line 385 "mercury_compile.m"
    {
#line 385 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 115, &top_level__mercury_compile__OutputClassDir_33);
    }
#line 387 "mercury_compile.m"
    {
#line 387 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 624, &top_level__mercury_compile__Make_34);
    }
#line 388 "mercury_compile.m"
    {
#line 388 "mercury_compile.m"
      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 95, &top_level__mercury_compile__GenerateStandaloneInt_35);
    }
#line 390 "mercury_compile.m"
    {
#line 390 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 53, &top_level__mercury_compile__ReportCmdLineArgs_36);
    }
#line 392 "mercury_compile.m"
    {
#line 392 "mercury_compile.m"
      top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgs_36, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12);
    }
#line 393 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Version_16 == (MR_Integer) 1);
#line 398 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 394 "mercury_compile.m"
      {
#line 394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stdout_37;
#line 394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OldOutputStream_38;
#line 397 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_39_39;

#line 394 "mercury_compile.m"
        {
#line 394 "mercury_compile.m"
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_37);
        }
#line 395 "mercury_compile.m"
        {
#line 395 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_37, &top_level__mercury_compile__OldOutputStream_38);
        }
#line 396 "mercury_compile.m"
        {
#line 396 "mercury_compile.m"
          libs__handle_options__display_compiler_version_2_p_0();
        }
#line 397 "mercury_compile.m"
        {
#line 397 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_38, &top_level__mercury_compile__V_39_39);
        }
#line 394 "mercury_compile.m"
      }
#line 398 "mercury_compile.m"
    else
#line 403 "mercury_compile.m"
      {
#line 398 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Help_17 == (MR_Integer) 1);
#line 403 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 399 "mercury_compile.m"
          {
#line 399 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Stdout_222;
#line 399 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldOutputStream_223;
#line 402 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_40_40;

#line 399 "mercury_compile.m"
            {
#line 399 "mercury_compile.m"
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_222);
            }
#line 400 "mercury_compile.m"
            {
#line 400 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_222, &top_level__mercury_compile__OldOutputStream_223);
            }
#line 401 "mercury_compile.m"
            {
#line 401 "mercury_compile.m"
              libs__handle_options__long_usage_2_p_0();
            }
#line 402 "mercury_compile.m"
            {
#line 402 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_223, &top_level__mercury_compile__V_40_40);
            }
#line 399 "mercury_compile.m"
          }
#line 403 "mercury_compile.m"
        else
#line 411 "mercury_compile.m"
          {
#line 403 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputGrade_19 == (MR_Integer) 1);
#line 411 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 407 "mercury_compile.m"
              {
#line 407 "mercury_compile.m"
                MR_String top_level__mercury_compile__Grade_41;
#line 407 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Stdout_224;

#line 407 "mercury_compile.m"
                {
#line 407 "mercury_compile.m"
                  libs__handle_options__grade_directory_component_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Grade_41);
                }
#line 408 "mercury_compile.m"
                {
#line 408 "mercury_compile.m"
                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_224);
                }
#line 409 "mercury_compile.m"
                {
#line 409 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_224, top_level__mercury_compile__Grade_41);
                }
#line 410 "mercury_compile.m"
                {
#line 410 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_224, (MR_String) "\n");
#line 410 "mercury_compile.m"
                  return;
                }
#line 407 "mercury_compile.m"
              }
#line 411 "mercury_compile.m"
            else
#line 417 "mercury_compile.m"
              {
#line 411 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLinkCommand_20 == (MR_Integer) 1);
#line 417 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 413 "mercury_compile.m"
                  {
#line 413 "mercury_compile.m"
                    MR_String top_level__mercury_compile__LinkCommand_42;
#line 413 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Stdout_225;

#line 412 "mercury_compile.m"
                    {
#line 412 "mercury_compile.m"
                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 578, &top_level__mercury_compile__LinkCommand_42);
                    }
#line 414 "mercury_compile.m"
                    {
#line 414 "mercury_compile.m"
                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_225);
                    }
#line 415 "mercury_compile.m"
                    {
#line 415 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_225, top_level__mercury_compile__LinkCommand_42);
                    }
#line 416 "mercury_compile.m"
                    {
#line 416 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_225, (MR_String) "\n");
#line 416 "mercury_compile.m"
                      return;
                    }
#line 413 "mercury_compile.m"
                  }
#line 417 "mercury_compile.m"
                else
#line 423 "mercury_compile.m"
                  {
#line 417 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputShLibLinkCommand_21 == (MR_Integer) 1);
#line 423 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 419 "mercury_compile.m"
                      {
#line 419 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__Stdout_226;
#line 419 "mercury_compile.m"
                        MR_String top_level__mercury_compile__LinkCommand_227;

#line 418 "mercury_compile.m"
                        {
#line 418 "mercury_compile.m"
                          libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 579, &top_level__mercury_compile__LinkCommand_227);
                        }
#line 420 "mercury_compile.m"
                        {
#line 420 "mercury_compile.m"
                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_226);
                        }
#line 421 "mercury_compile.m"
                        {
#line 421 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_226, top_level__mercury_compile__LinkCommand_227);
                        }
#line 422 "mercury_compile.m"
                        {
#line 422 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_226, (MR_String) "\n");
#line 422 "mercury_compile.m"
                          return;
                        }
#line 419 "mercury_compile.m"
                      }
#line 423 "mercury_compile.m"
                    else
#line 433 "mercury_compile.m"
                      {
#line 423 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLibGrades_23 == (MR_Integer) 1);
#line 433 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 424 "mercury_compile.m"
                          {
#line 424 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__LibGrades_43;

#line 424 "mercury_compile.m"
                            {
#line 424 "mercury_compile.m"
                              libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 639, &top_level__mercury_compile__LibGrades_43);
                            }
#line 427 "mercury_compile.m"
                            if ((top_level__mercury_compile__LibGrades_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "mercury_compile.m"
                              {
#line 426 "mercury_compile.m"
                              }
#line 427 "mercury_compile.m"
                            else
#line 428 "mercury_compile.m"
                              {
#line 428 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__Stdout_228;

#line 429 "mercury_compile.m"
                                {
#line 429 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_228);
                                }
#line 430 "mercury_compile.m"
                                {
#line 430 "mercury_compile.m"
                                  mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__Stdout_228, top_level__mercury_compile__LibGrades_43, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_scalar_common_5[0]);
                                }
#line 431 "mercury_compile.m"
                                {
#line 431 "mercury_compile.m"
                                  mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_228);
#line 431 "mercury_compile.m"
                                  return;
                                }
#line 428 "mercury_compile.m"
                              }
#line 424 "mercury_compile.m"
                          }
#line 433 "mercury_compile.m"
                        else
#line 437 "mercury_compile.m"
                          {
#line 433 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCC_24 == (MR_Integer) 1);
#line 437 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 434 "mercury_compile.m"
                              {
#line 434 "mercury_compile.m"
                                MR_String top_level__mercury_compile__CC_46;
#line 434 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__StdOut_47;
#line 434 "mercury_compile.m"
                                MR_String top_level__mercury_compile__V_122_122;

#line 434 "mercury_compile.m"
                                {
#line 434 "mercury_compile.m"
                                  libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 489, &top_level__mercury_compile__CC_46);
                                }
#line 435 "mercury_compile.m"
                                {
#line 435 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_47);
                                }
#line 436 "mercury_compile.m"
                                {
#line 436 "mercury_compile.m"
                                  top_level__mercury_compile__V_122_122 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_46, (MR_String) "\n");
                                }
#line 436 "mercury_compile.m"
                                {
#line 436 "mercury_compile.m"
                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_47, top_level__mercury_compile__V_122_122);
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
                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCCType_25 == (MR_Integer) 1);
#line 441 "mercury_compile.m"
                                if (top_level__mercury_compile__succeeded)
#line 438 "mercury_compile.m"
                                  {
#line 438 "mercury_compile.m"
                                    MR_String top_level__mercury_compile__CC_Type_48;
#line 438 "mercury_compile.m"
                                    MR_String top_level__mercury_compile__V_127_127;
#line 438 "mercury_compile.m"
                                    MR_Word top_level__mercury_compile__StdOut_231;

#line 438 "mercury_compile.m"
                                    {
#line 438 "mercury_compile.m"
                                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 514, &top_level__mercury_compile__CC_Type_48);
                                    }
#line 439 "mercury_compile.m"
                                    {
#line 439 "mercury_compile.m"
                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_231);
                                    }
#line 440 "mercury_compile.m"
                                    {
#line 440 "mercury_compile.m"
                                      top_level__mercury_compile__V_127_127 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_Type_48, (MR_String) "\n");
                                    }
#line 440 "mercury_compile.m"
                                    {
#line 440 "mercury_compile.m"
                                      mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_231, top_level__mercury_compile__V_127_127);
#line 440 "mercury_compile.m"
                                      return;
                                    }
#line 438 "mercury_compile.m"
                                  }
#line 441 "mercury_compile.m"
                                else
#line 445 "mercury_compile.m"
                                  {
#line 441 "mercury_compile.m"
                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCFlags_26 == (MR_Integer) 1);
#line 445 "mercury_compile.m"
                                    if (top_level__mercury_compile__succeeded)
#line 442 "mercury_compile.m"
                                      {
#line 442 "mercury_compile.m"
                                        MR_Word top_level__mercury_compile__StdOut_232;

#line 442 "mercury_compile.m"
                                        {
#line 442 "mercury_compile.m"
                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_232);
                                        }
#line 443 "mercury_compile.m"
                                        {
#line 443 "mercury_compile.m"
                                          backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_232);
                                        }
#line 444 "mercury_compile.m"
                                        {
#line 444 "mercury_compile.m"
                                          mercury__io__nl_3_p_0(top_level__mercury_compile__StdOut_232);
#line 444 "mercury_compile.m"
                                          return;
                                        }
#line 442 "mercury_compile.m"
                                      }
#line 445 "mercury_compile.m"
                                    else
#line 449 "mercury_compile.m"
                                      {
#line 445 "mercury_compile.m"
                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCSC_27 == (MR_Integer) 1);
#line 449 "mercury_compile.m"
                                        if (top_level__mercury_compile__succeeded)
#line 446 "mercury_compile.m"
                                          {
#line 446 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__CSC_49;
#line 446 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__V_135_135;
#line 446 "mercury_compile.m"
                                            MR_Word top_level__mercury_compile__StdOut_233;

#line 446 "mercury_compile.m"
                                            {
#line 446 "mercury_compile.m"
                                              libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 528, &top_level__mercury_compile__CSC_49);
                                            }
#line 447 "mercury_compile.m"
                                            {
#line 447 "mercury_compile.m"
                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_233);
                                            }
#line 448 "mercury_compile.m"
                                            {
#line 448 "mercury_compile.m"
                                              top_level__mercury_compile__V_135_135 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_49, (MR_String) "\n");
                                            }
#line 448 "mercury_compile.m"
                                            {
#line 448 "mercury_compile.m"
                                              mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_233, top_level__mercury_compile__V_135_135);
#line 448 "mercury_compile.m"
                                              return;
                                            }
#line 446 "mercury_compile.m"
                                          }
#line 449 "mercury_compile.m"
                                        else
#line 453 "mercury_compile.m"
                                          {
#line 449 "mercury_compile.m"
                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCSCType_28 == (MR_Integer) 1);
#line 453 "mercury_compile.m"
                                            if (top_level__mercury_compile__succeeded)
#line 450 "mercury_compile.m"
                                              {
#line 450 "mercury_compile.m"
                                                MR_String top_level__mercury_compile__CSC_Type_50;
#line 450 "mercury_compile.m"
                                                MR_String top_level__mercury_compile__V_140_140;
#line 450 "mercury_compile.m"
                                                MR_Word top_level__mercury_compile__StdOut_234;

#line 450 "mercury_compile.m"
                                                {
#line 450 "mercury_compile.m"
                                                  libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 515, &top_level__mercury_compile__CSC_Type_50);
                                                }
#line 451 "mercury_compile.m"
                                                {
#line 451 "mercury_compile.m"
                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_234);
                                                }
#line 452 "mercury_compile.m"
                                                {
#line 452 "mercury_compile.m"
                                                  top_level__mercury_compile__V_140_140 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_Type_50, (MR_String) "\n");
                                                }
#line 452 "mercury_compile.m"
                                                {
#line 452 "mercury_compile.m"
                                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_234, top_level__mercury_compile__V_140_140);
#line 452 "mercury_compile.m"
                                                  return;
                                                }
#line 450 "mercury_compile.m"
                                              }
#line 453 "mercury_compile.m"
                                            else
#line 456 "mercury_compile.m"
                                              {
#line 453 "mercury_compile.m"
                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLibraryLinkFlags_29 == (MR_Integer) 1);
#line 456 "mercury_compile.m"
                                                if (top_level__mercury_compile__succeeded)
#line 454 "mercury_compile.m"
                                                  {
#line 454 "mercury_compile.m"
                                                    MR_Word top_level__mercury_compile__StdOut_235;

#line 454 "mercury_compile.m"
                                                    {
#line 454 "mercury_compile.m"
                                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_235);
                                                    }
#line 455 "mercury_compile.m"
                                                    {
#line 455 "mercury_compile.m"
                                                      backend_libs__compile_target_code__output_library_link_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_235);
#line 455 "mercury_compile.m"
                                                      return;
                                                    }
#line 454 "mercury_compile.m"
                                                  }
#line 456 "mercury_compile.m"
                                                else
#line 459 "mercury_compile.m"
                                                  {
#line 456 "mercury_compile.m"
                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputGradeDefines_30 == (MR_Integer) 1);
#line 459 "mercury_compile.m"
                                                    if (top_level__mercury_compile__succeeded)
#line 457 "mercury_compile.m"
                                                      {
#line 457 "mercury_compile.m"
                                                        MR_Word top_level__mercury_compile__StdOut_236;

#line 457 "mercury_compile.m"
                                                        {
#line 457 "mercury_compile.m"
                                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_236);
                                                        }
#line 458 "mercury_compile.m"
                                                        {
#line 458 "mercury_compile.m"
                                                          backend_libs__compile_target_code__output_grade_defines_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_236);
#line 458 "mercury_compile.m"
                                                          return;
                                                        }
#line 457 "mercury_compile.m"
                                                      }
#line 459 "mercury_compile.m"
                                                    else
#line 462 "mercury_compile.m"
                                                      {
#line 459 "mercury_compile.m"
                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCInclDirFlags_31 == (MR_Integer) 1);
#line 462 "mercury_compile.m"
                                                        if (top_level__mercury_compile__succeeded)
#line 460 "mercury_compile.m"
                                                          {
#line 460 "mercury_compile.m"
                                                            MR_Word top_level__mercury_compile__StdOut_237;

#line 460 "mercury_compile.m"
                                                            {
#line 460 "mercury_compile.m"
                                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_237);
                                                            }
#line 461 "mercury_compile.m"
                                                            {
#line 461 "mercury_compile.m"
                                                              backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_237);
#line 461 "mercury_compile.m"
                                                              return;
                                                            }
#line 460 "mercury_compile.m"
                                                          }
#line 462 "mercury_compile.m"
                                                        else
#line 466 "mercury_compile.m"
                                                          {
#line 462 "mercury_compile.m"
                                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputTargetArch_32 == (MR_Integer) 1);
#line 466 "mercury_compile.m"
                                                            if (top_level__mercury_compile__succeeded)
#line 463 "mercury_compile.m"
                                                              {
#line 463 "mercury_compile.m"
                                                                MR_String top_level__mercury_compile__TargetArch_51;
#line 463 "mercury_compile.m"
                                                                MR_String top_level__mercury_compile__V_151_151;
#line 463 "mercury_compile.m"
                                                                MR_Word top_level__mercury_compile__StdOut_238;

#line 463 "mercury_compile.m"
                                                                {
#line 463 "mercury_compile.m"
                                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_238);
                                                                }
#line 464 "mercury_compile.m"
                                                                {
#line 464 "mercury_compile.m"
                                                                  libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 666, &top_level__mercury_compile__TargetArch_51);
                                                                }
#line 465 "mercury_compile.m"
                                                                {
#line 465 "mercury_compile.m"
                                                                  top_level__mercury_compile__V_151_151 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__TargetArch_51, (MR_String) "\n");
                                                                }
#line 465 "mercury_compile.m"
                                                                {
#line 465 "mercury_compile.m"
                                                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_238, top_level__mercury_compile__V_151_151);
#line 465 "mercury_compile.m"
                                                                  return;
                                                                }
#line 463 "mercury_compile.m"
                                                              }
#line 466 "mercury_compile.m"
                                                            else
#line 470 "mercury_compile.m"
                                                              {
#line 466 "mercury_compile.m"
                                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputClassDir_33 == (MR_Integer) 1);
#line 470 "mercury_compile.m"
                                                                if (top_level__mercury_compile__succeeded)
#line 467 "mercury_compile.m"
                                                                  {
#line 467 "mercury_compile.m"
                                                                    MR_String top_level__mercury_compile__ClassName_52;
#line 467 "mercury_compile.m"
                                                                    MR_String top_level__mercury_compile__V_155_155;
#line 467 "mercury_compile.m"
                                                                    MR_Word top_level__mercury_compile__StdOut_239;

#line 467 "mercury_compile.m"
                                                                    {
#line 467 "mercury_compile.m"
                                                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_239);
                                                                    }
#line 468 "mercury_compile.m"
                                                                    {
#line 468 "mercury_compile.m"
                                                                      parse_tree__file_names__get_class_dir_name_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__ClassName_52);
                                                                    }
#line 469 "mercury_compile.m"
                                                                    {
#line 469 "mercury_compile.m"
                                                                      top_level__mercury_compile__V_155_155 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__ClassName_52, (MR_String) "\n");
                                                                    }
#line 469 "mercury_compile.m"
                                                                    {
#line 469 "mercury_compile.m"
                                                                      mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_239, top_level__mercury_compile__V_155_155);
#line 469 "mercury_compile.m"
                                                                      return;
                                                                    }
#line 467 "mercury_compile.m"
                                                                  }
#line 470 "mercury_compile.m"
                                                                else
#line 472 "mercury_compile.m"
                                                                  {
#line 470 "mercury_compile.m"
                                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__GenerateMapping_18 == (MR_Integer) 1);
#line 472 "mercury_compile.m"
                                                                    if (top_level__mercury_compile__succeeded)
#line 471 "mercury_compile.m"
                                                                      {
#line 471 "mercury_compile.m"
                                                                        parse_tree__source_file_map__write_source_file_map_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Args_12);
#line 471 "mercury_compile.m"
                                                                        return;
                                                                      }
#line 472 "mercury_compile.m"
                                                                    else
#line 503 "mercury_compile.m"
                                                                      {
#line 503 "mercury_compile.m"
                                                                        MR_String top_level__mercury_compile__StandaloneIntBasename_53;

#line 472 "mercury_compile.m"
                                                                        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__GenerateStandaloneInt_35)) == (MR_mktag((MR_Integer) 1)));
#line 472 "mercury_compile.m"
                                                                        if (top_level__mercury_compile__succeeded)
#line 472 "mercury_compile.m"
                                                                          {
#line 472 "mercury_compile.m"
                                                                            top_level__mercury_compile__StandaloneIntBasename_53 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__GenerateStandaloneInt_35, (MR_Integer) 0)));
#line 473 "mercury_compile.m"
                                                                            {
#line 473 "mercury_compile.m"
                                                                              MR_Word top_level__mercury_compile__Target_54;

#line 473 "mercury_compile.m"
                                                                              {
#line 473 "mercury_compile.m"
                                                                                libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Target_54);
                                                                              }
#line 488 "mercury_compile.m"
#line 488 "mercury_compile.m"
                                                                              switch (top_level__mercury_compile__Target_54) {
#line 488 "mercury_compile.m"
                                                                                default: /*NOTREACHED*/ MR_assert(0);
#line 488 "mercury_compile.m"
                                                                                case (MR_Integer) 0:
#line 501 "mercury_compile.m"
                                                                                  {
#line 501 "mercury_compile.m"
                                                                                    backend_libs__compile_target_code__make_standalone_interface_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StandaloneIntBasename_53);
#line 501 "mercury_compile.m"
                                                                                    return;
                                                                                  }
#line 488 "mercury_compile.m"
                                                                                  break;
#line 488 "mercury_compile.m"
                                                                                case (MR_Integer) 2:
#line 488 "mercury_compile.m"
                                                                                case (MR_Integer) 1:
#line 488 "mercury_compile.m"
                                                                                case (MR_Integer) 3:
#line 478 "mercury_compile.m"
                                                                                  {
#line 478 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__NotRequiredMsg_55;
#line 478 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_180_180;
#line 478 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_183_183;
#line 478 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_186_186;
#line 478 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_187_187;
#line 478 "mercury_compile.m"
                                                                                    MR_String top_level__mercury_compile__V_188_188;

#line 483 "mercury_compile.m"
                                                                                    {
#line 483 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_188_188 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_54);
                                                                                    }
#line 483 "mercury_compile.m"
                                                                                    {
#line 483 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_187_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_187_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 483 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_187_187, 1) = ((MR_Box) (top_level__mercury_compile__V_188_188));
#line 483 "mercury_compile.m"
                                                                                    }
#line 483 "mercury_compile.m"
                                                                                    {
#line 483 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_186_186, 0) = ((MR_Box) (top_level__mercury_compile__V_187_187));
#line 483 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[31])));
#line 483 "mercury_compile.m"
                                                                                    }
#line 482 "mercury_compile.m"
                                                                                    {
#line 482 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_183_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[29])));
#line 482 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_183_183, 1) = ((MR_Box) (top_level__mercury_compile__V_186_186));
#line 482 "mercury_compile.m"
                                                                                    }
#line 481 "mercury_compile.m"
                                                                                    {
#line 481 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_180_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[28])));
#line 481 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_180_180, 1) = ((MR_Box) (top_level__mercury_compile__V_183_183));
#line 481 "mercury_compile.m"
                                                                                    }
#line 480 "mercury_compile.m"
                                                                                    {
#line 480 "mercury_compile.m"
                                                                                      top_level__mercury_compile__NotRequiredMsg_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[27])));
#line 480 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_55, 1) = ((MR_Box) (top_level__mercury_compile__V_180_180));
#line 480 "mercury_compile.m"
                                                                                    }
#line 486 "mercury_compile.m"
                                                                                    {
#line 486 "mercury_compile.m"
                                                                                      parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__NotRequiredMsg_55);
                                                                                    }
#line 487 "mercury_compile.m"
                                                                                    {
#line 487 "mercury_compile.m"
                                                                                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 487 "mercury_compile.m"
                                                                                      return;
                                                                                    }
#line 478 "mercury_compile.m"
                                                                                  }
#line 488 "mercury_compile.m"
                                                                                  break;
#line 488 "mercury_compile.m"
                                                                                case (MR_Integer) 4:
#line 489 "mercury_compile.m"
                                                                                  {
#line 489 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__NYIMsg_56;
#line 489 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_162_162;
#line 489 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_165_165;
#line 489 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_168_168;
#line 489 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_169_169;
#line 489 "mercury_compile.m"
                                                                                    MR_String top_level__mercury_compile__V_170_170;

#line 494 "mercury_compile.m"
                                                                                    {
#line 494 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_170_170 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_54);
                                                                                    }
#line 494 "mercury_compile.m"
                                                                                    {
#line 494 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 494 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_169_169, 1) = ((MR_Box) (top_level__mercury_compile__V_170_170));
#line 494 "mercury_compile.m"
                                                                                    }
#line 494 "mercury_compile.m"
                                                                                    {
#line 494 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_168_168, 0) = ((MR_Box) (top_level__mercury_compile__V_169_169));
#line 494 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[31])));
#line 494 "mercury_compile.m"
                                                                                    }
#line 493 "mercury_compile.m"
                                                                                    {
#line 493 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_165_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[33])));
#line 493 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_165_165, 1) = ((MR_Box) (top_level__mercury_compile__V_168_168));
#line 493 "mercury_compile.m"
                                                                                    }
#line 492 "mercury_compile.m"
                                                                                    {
#line 492 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_162_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[28])));
#line 492 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_162_162, 1) = ((MR_Box) (top_level__mercury_compile__V_165_165));
#line 492 "mercury_compile.m"
                                                                                    }
#line 491 "mercury_compile.m"
                                                                                    {
#line 491 "mercury_compile.m"
                                                                                      top_level__mercury_compile__NYIMsg_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[32])));
#line 491 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_56, 1) = ((MR_Box) (top_level__mercury_compile__V_162_162));
#line 491 "mercury_compile.m"
                                                                                    }
#line 497 "mercury_compile.m"
                                                                                    {
#line 497 "mercury_compile.m"
                                                                                      parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__NYIMsg_56);
                                                                                    }
#line 498 "mercury_compile.m"
                                                                                    {
#line 498 "mercury_compile.m"
                                                                                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 498 "mercury_compile.m"
                                                                                      return;
                                                                                    }
#line 489 "mercury_compile.m"
                                                                                  }
#line 488 "mercury_compile.m"
                                                                                  break;
#line 488 "mercury_compile.m"
                                                                              }
#line 473 "mercury_compile.m"
                                                                            }
#line 472 "mercury_compile.m"
                                                                          }
#line 472 "mercury_compile.m"
                                                                        else
#line 506 "mercury_compile.m"
                                                                          {
#line 503 "mercury_compile.m"
                                                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Make_34 == (MR_Integer) 1);
#line 506 "mercury_compile.m"
                                                                            if (top_level__mercury_compile__succeeded)
#line 504 "mercury_compile.m"
                                                                              {
#line 504 "mercury_compile.m"
                                                                                make__make_process_args_7_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12);
#line 504 "mercury_compile.m"
                                                                                return;
                                                                              }
#line 506 "mercury_compile.m"
                                                                            else
#line 508 "mercury_compile.m"
                                                                              {
#line 506 "mercury_compile.m"
                                                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "mercury_compile.m"
                                                                                if (top_level__mercury_compile__succeeded)
#line 506 "mercury_compile.m"
                                                                                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__FileNamesFromStdin_22 == (MR_Integer) 0);
#line 508 "mercury_compile.m"
                                                                                if (top_level__mercury_compile__succeeded)
#line 507 "mercury_compile.m"
                                                                                  {
#line 507 "mercury_compile.m"
                                                                                    libs__handle_options__usage_2_p_0();
#line 507 "mercury_compile.m"
                                                                                    return;
                                                                                  }
#line 508 "mercury_compile.m"
                                                                                else
#line 510 "mercury_compile.m"
                                                                                  {
#line 510 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__ModulesToLink_57;
#line 510 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__ExtraObjFiles_58;
#line 510 "mercury_compile.m"
                                                                                    MR_Integer top_level__mercury_compile__ExitStatus_59;
#line 510 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__Statistics_67;

#line 509 "mercury_compile.m"
                                                                                    {
#line 509 "mercury_compile.m"
                                                                                      top_level__mercury_compile__process_all_args_9_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12, &top_level__mercury_compile__ModulesToLink_57, &top_level__mercury_compile__ExtraObjFiles_58);
                                                                                    }
#line 511 "mercury_compile.m"
                                                                                    {
#line 511 "mercury_compile.m"
                                                                                      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_59);
                                                                                    }
#line 512 "mercury_compile.m"
                                                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_59 == (MR_Integer) 0);
#line 542 "mercury_compile.m"
                                                                                    if (top_level__mercury_compile__succeeded)
#line 539 "mercury_compile.m"
                                                                                      {
#line 539 "mercury_compile.m"
                                                                                        MR_String top_level__mercury_compile__FirstModule_60;
#line 515 "mercury_compile.m"
                                                                                        MR_Word top_level__mercury_compile__V_61_61;

#line 514 "mercury_compile.m"
                                                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Link_13 == (MR_Integer) 1);
#line 514 "mercury_compile.m"
                                                                                        if (top_level__mercury_compile__succeeded)
#line 514 "mercury_compile.m"
                                                                                          {
#line 515 "mercury_compile.m"
                                                                                            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToLink_57)) == (MR_mktag((MR_Integer) 1)));
#line 515 "mercury_compile.m"
                                                                                            if (top_level__mercury_compile__succeeded)
#line 515 "mercury_compile.m"
                                                                                              {
#line 515 "mercury_compile.m"
                                                                                                top_level__mercury_compile__FirstModule_60 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_57, (MR_Integer) 0)));
#line 515 "mercury_compile.m"
                                                                                                top_level__mercury_compile__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_57, (MR_Integer) 1)));
#line 515 "mercury_compile.m"
                                                                                              }
#line 514 "mercury_compile.m"
                                                                                          }
#line 539 "mercury_compile.m"
                                                                                        if (top_level__mercury_compile__succeeded)
#line 518 "mercury_compile.m"
                                                                                          {
#line 518 "mercury_compile.m"
                                                                                            MR_Word top_level__mercury_compile__MainModuleName_62;
#line 518 "mercury_compile.m"
                                                                                            MR_Word top_level__mercury_compile__Succeeded_63;
#line 518 "mercury_compile.m"
                                                                                            MR_Word top_level__mercury_compile__Target_240;

#line 517 "mercury_compile.m"
                                                                                            {
#line 517 "mercury_compile.m"
                                                                                              parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FirstModule_60, &top_level__mercury_compile__MainModuleName_62);
                                                                                            }
#line 519 "mercury_compile.m"
                                                                                            {
#line 519 "mercury_compile.m"
                                                                                              libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Target_240);
                                                                                            }
#line 527 "mercury_compile.m"
#line 527 "mercury_compile.m"
                                                                                            switch (top_level__mercury_compile__Target_240) {
#line 527 "mercury_compile.m"
                                                                                              default: /*NOTREACHED*/ MR_assert(0);
#line 527 "mercury_compile.m"
                                                                                              case (MR_Integer) 0:
#line 527 "mercury_compile.m"
                                                                                              case (MR_Integer) 2:
#line 527 "mercury_compile.m"
                                                                                              case (MR_Integer) 4:
#line 527 "mercury_compile.m"
                                                                                              case (MR_Integer) 1:
#line 532 "mercury_compile.m"
                                                                                                {
#line 532 "mercury_compile.m"
                                                                                                  MR_Word top_level__mercury_compile__V_200_200;

#line 535 "mercury_compile.m"
                                                                                                  {
#line 535 "mercury_compile.m"
                                                                                                    top_level__mercury_compile__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 535 "mercury_compile.m"
                                                                                                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_200_200, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[0]));
#line 535 "mercury_compile.m"
                                                                                                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_200_200, 1) = ((MR_Box) (top_level__mercury_compile__main_after_setup_8_p_0_2));
#line 535 "mercury_compile.m"
                                                                                                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_200_200, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 535 "mercury_compile.m"
                                                                                                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_200_200, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToLink_57));
#line 535 "mercury_compile.m"
                                                                                                    MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_200_200, 4) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_58));
#line 535 "mercury_compile.m"
                                                                                                  }
#line 533 "mercury_compile.m"
                                                                                                  {
#line 533 "mercury_compile.m"
                                                                                                    top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(top_level__mercury_compile__ModulesToLink_57, top_level__mercury_compile__ExtraObjFiles_58, top_level__mercury_compile__Globals_14, top_level__mercury_compile__MainModuleName_62, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__V_200_200, &top_level__mercury_compile__Succeeded_63);
                                                                                                  }
#line 532 "mercury_compile.m"
                                                                                                }
#line 527 "mercury_compile.m"
                                                                                                break;
#line 527 "mercury_compile.m"
                                                                                              case (MR_Integer) 3:
#line 525 "mercury_compile.m"
                                                                                                {
#line 525 "mercury_compile.m"
                                                                                                  parse_tree__module_cmds__create_java_shell_script_5_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__MainModuleName_62, &top_level__mercury_compile__Succeeded_63);
                                                                                                }
#line 527 "mercury_compile.m"
                                                                                                break;
#line 527 "mercury_compile.m"
                                                                                            }
#line 538 "mercury_compile.m"
                                                                                            {
#line 538 "mercury_compile.m"
                                                                                              parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_63);
                                                                                            }
#line 518 "mercury_compile.m"
                                                                                          }
#line 539 "mercury_compile.m"
                                                                                        else
#line 539 "mercury_compile.m"
                                                                                          {
#line 539 "mercury_compile.m"
                                                                                          }
#line 539 "mercury_compile.m"
                                                                                      }
#line 542 "mercury_compile.m"
                                                                                    else
#line 547 "mercury_compile.m"
                                                                                      {
#line 547 "mercury_compile.m"
                                                                                        MR_Word top_level__mercury_compile__Limited_64;
#line 547 "mercury_compile.m"
                                                                                        MR_Word top_level__mercury_compile__VerboseErrors_65;
#line 547 "mercury_compile.m"
                                                                                        MR_Word top_level__mercury_compile__ExtraErrorInfo_66;

#line 547 "mercury_compile.m"
                                                                                        {
#line 547 "mercury_compile.m"
                                                                                          libs__globals__io_get_some_errors_were_context_limited_3_p_0(&top_level__mercury_compile__Limited_64);
                                                                                        }
#line 550 "mercury_compile.m"
#line 550 "mercury_compile.m"
                                                                                        switch (top_level__mercury_compile__Limited_64) {
#line 550 "mercury_compile.m"
                                                                                          default: /*NOTREACHED*/ MR_assert(0);
#line 550 "mercury_compile.m"
                                                                                          case (MR_Integer) 0:
#line 549 "mercury_compile.m"
                                                                                            {
#line 549 "mercury_compile.m"
                                                                                            }
#line 550 "mercury_compile.m"
                                                                                            break;
#line 550 "mercury_compile.m"
                                                                                          case (MR_Integer) 1:
#line 551 "mercury_compile.m"
                                                                                            {
#line 552 "mercury_compile.m"
                                                                                              {
#line 552 "mercury_compile.m"
                                                                                                mercury__io__write_string_3_p_0((MR_String) "Some error messages were suppressed by \140--limit-error-contexts\' options.\n");
                                                                                              }
#line 554 "mercury_compile.m"
                                                                                              {
#line 554 "mercury_compile.m"
                                                                                                mercury__io__write_string_3_p_0((MR_String) "You can see the suppressed messages if you recompile without these options.\n");
                                                                                              }
#line 551 "mercury_compile.m"
                                                                                            }
#line 550 "mercury_compile.m"
                                                                                            break;
#line 550 "mercury_compile.m"
                                                                                        }
#line 562 "mercury_compile.m"
                                                                                        {
#line 562 "mercury_compile.m"
                                                                                          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 47, &top_level__mercury_compile__VerboseErrors_65);
                                                                                        }
#line 563 "mercury_compile.m"
                                                                                        {
#line 563 "mercury_compile.m"
                                                                                          libs__globals__io_get_extra_error_info_3_p_0(&top_level__mercury_compile__ExtraErrorInfo_66);
                                                                                        }
#line 573 "mercury_compile.m"
#line 573 "mercury_compile.m"
                                                                                        switch (top_level__mercury_compile__VerboseErrors_65) {
#line 573 "mercury_compile.m"
                                                                                          default: /*NOTREACHED*/ MR_assert(0);
#line 573 "mercury_compile.m"
                                                                                          case (MR_Integer) 0:
#line 570 "mercury_compile.m"
#line 570 "mercury_compile.m"
                                                                                            switch (top_level__mercury_compile__ExtraErrorInfo_66) {
#line 570 "mercury_compile.m"
                                                                                              default: /*NOTREACHED*/ MR_assert(0);
#line 570 "mercury_compile.m"
                                                                                              case (MR_Integer) 0:
#line 571 "mercury_compile.m"
                                                                                                {
#line 571 "mercury_compile.m"
                                                                                                }
#line 570 "mercury_compile.m"
                                                                                                break;
#line 570 "mercury_compile.m"
                                                                                              case (MR_Integer) 1:
#line 567 "mercury_compile.m"
                                                                                                {
#line 568 "mercury_compile.m"
                                                                                                  {
#line 568 "mercury_compile.m"
                                                                                                    mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                                                                                                  }
#line 567 "mercury_compile.m"
                                                                                                }
#line 570 "mercury_compile.m"
                                                                                                break;
#line 570 "mercury_compile.m"
                                                                                            }
#line 573 "mercury_compile.m"
                                                                                            break;
#line 573 "mercury_compile.m"
                                                                                          case (MR_Integer) 1:
#line 574 "mercury_compile.m"
                                                                                            {
#line 574 "mercury_compile.m"
                                                                                            }
#line 573 "mercury_compile.m"
                                                                                            break;
#line 573 "mercury_compile.m"
                                                                                        }
#line 547 "mercury_compile.m"
                                                                                      }
#line 577 "mercury_compile.m"
                                                                                    {
#line 577 "mercury_compile.m"
                                                                                      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 55, &top_level__mercury_compile__Statistics_67);
                                                                                    }
#line 581 "mercury_compile.m"
#line 581 "mercury_compile.m"
                                                                                    switch (top_level__mercury_compile__Statistics_67) {
#line 581 "mercury_compile.m"
                                                                                      default: /*NOTREACHED*/ MR_assert(0);
#line 581 "mercury_compile.m"
                                                                                      case (MR_Integer) 0:
#line 582 "mercury_compile.m"
                                                                                        {
#line 582 "mercury_compile.m"
                                                                                        }
#line 581 "mercury_compile.m"
                                                                                        break;
#line 581 "mercury_compile.m"
                                                                                      case (MR_Integer) 1:
#line 579 "mercury_compile.m"
                                                                                        {
#line 580 "mercury_compile.m"
                                                                                          {
#line 580 "mercury_compile.m"
                                                                                            mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
#line 580 "mercury_compile.m"
                                                                                            return;
                                                                                          }
#line 579 "mercury_compile.m"
                                                                                        }
#line 581 "mercury_compile.m"
                                                                                        break;
#line 581 "mercury_compile.m"
                                                                                    }
#line 510 "mercury_compile.m"
                                                                                  }
#line 508 "mercury_compile.m"
                                                                              }
#line 506 "mercury_compile.m"
                                                                          }
#line 503 "mercury_compile.m"
                                                                      }
#line 472 "mercury_compile.m"
                                                                  }
#line 470 "mercury_compile.m"
                                                              }
#line 466 "mercury_compile.m"
                                                          }
#line 462 "mercury_compile.m"
                                                      }
#line 459 "mercury_compile.m"
                                                  }
#line 456 "mercury_compile.m"
                                              }
#line 453 "mercury_compile.m"
                                          }
#line 449 "mercury_compile.m"
                                      }
#line 445 "mercury_compile.m"
                                  }
#line 441 "mercury_compile.m"
                              }
#line 437 "mercury_compile.m"
                          }
#line 433 "mercury_compile.m"
                      }
#line 423 "mercury_compile.m"
                  }
#line 417 "mercury_compile.m"
              }
#line 411 "mercury_compile.m"
          }
#line 403 "mercury_compile.m"
      }
#line 356 "mercury_compile.m"
  }
#line 351 "mercury_compile.m"
}

#line 203 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 203 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4)
#line 203 "mercury_compile.m"
{
#line 12244 "top_level.mercury_compile.c"
  {
#line 12246 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__CmdLineArgs_4)) == (MR_mktag((MR_Integer) 1)));
#line 12248 "top_level.mercury_compile.c"
    MR_String top_level__mercury_compile__ArgFile_6;
#line 12250 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__ExtraArgs_7;
#line 208 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_47_47;
#line 208 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_48_48;

#line 208 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 208 "mercury_compile.m"
      {
#line 208 "mercury_compile.m"
        top_level__mercury_compile__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 0)));
#line 208 "mercury_compile.m"
        top_level__mercury_compile__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 1)));
#line 208 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_47_47, (MR_String) "--arg-file") == 0);
#line 208 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 208 "mercury_compile.m"
          {
#line 208 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 208 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 208 "mercury_compile.m"
              {
#line 208 "mercury_compile.m"
                top_level__mercury_compile__ArgFile_6 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_48_48, (MR_Integer) 0)));
#line 208 "mercury_compile.m"
                top_level__mercury_compile__ExtraArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_48_48, (MR_Integer) 1)));
#line 208 "mercury_compile.m"
              }
#line 208 "mercury_compile.m"
          }
#line 208 "mercury_compile.m"
      }
#line 12287 "top_level.mercury_compile.c"
    if (top_level__mercury_compile__succeeded)
#line 12289 "top_level.mercury_compile.c"
      {
#line 12291 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__TypeCtorInfo_79_79;
#line 12293 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DummyGlobals_11;
#line 12295 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeArgs1_12;
#line 12297 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_14;
#line 12299 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_15;
#line 12301 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DetectedGradeFlags_16;
#line 12303 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Variables_17;
#line 12305 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__AllFlags_37;
#line 12307 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Errors_41;
#line 12309 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ActualGlobals_42;
#line 12311 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_73_73;
#line 327 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_38_38;
#line 327 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_39_39;
#line 327 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_40_40;

#line 219 "mercury_compile.m"
        if ((top_level__mercury_compile__ExtraArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "mercury_compile.m"
          {
#line 218 "mercury_compile.m"
          }
#line 219 "mercury_compile.m"
        else
#line 220 "mercury_compile.m"
          {
#line 220 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_51_51;
#line 220 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_53_53;

#line 222 "mercury_compile.m"
            {
#line 222 "mercury_compile.m"
              top_level__mercury_compile__V_53_53 = mercury__string__string_1_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], ((MR_Box) (top_level__mercury_compile__ExtraArgs_7)));
            }
#line 222 "mercury_compile.m"
            {
#line 222 "mercury_compile.m"
              top_level__mercury_compile__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", top_level__mercury_compile__V_53_53);
            }
#line 221 "mercury_compile.m"
            {
#line 221 "mercury_compile.m"
              mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile", (MR_String) "predicate \140top_level.mercury_compile.real_main_after_expansion\'/3", top_level__mercury_compile__V_51_51);
#line 221 "mercury_compile.m"
              return;
            }
#line 220 "mercury_compile.m"
          }
#line 230 "mercury_compile.m"
        {
#line 230 "mercury_compile.m"
          libs__handle_options__generate_default_globals_3_p_0(&top_level__mercury_compile__DummyGlobals_11);
        }
#line 231 "mercury_compile.m"
        {
#line 231 "mercury_compile.m"
          make__options_file__read_args_file_5_p_0(top_level__mercury_compile__DummyGlobals_11, top_level__mercury_compile__ArgFile_6, &top_level__mercury_compile__MaybeArgs1_12);
        }
#line 235 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeArgs1_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "mercury_compile.m"
          {
#line 237 "mercury_compile.m"
            top_level__mercury_compile__OptionArgs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "mercury_compile.m"
            top_level__mercury_compile__NonOptionArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 236 "mercury_compile.m"
          }
#line 235 "mercury_compile.m"
        else
#line 233 "mercury_compile.m"
          {
#line 233 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeArgs1_12, (MR_Integer) 0)));

#line 234 "mercury_compile.m"
            {
#line 234 "mercury_compile.m"
              libs__handle_options__separate_option_args_5_p_0(top_level__mercury_compile__Args1_13, &top_level__mercury_compile__OptionArgs_14, &top_level__mercury_compile__NonOptionArgs_15);
            }
#line 233 "mercury_compile.m"
          }
#line 240 "mercury_compile.m"
        top_level__mercury_compile__DetectedGradeFlags_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 241 "mercury_compile.m"
        {
#line 241 "mercury_compile.m"
          top_level__mercury_compile__Variables_17 = make__options_file__options_variables_init_0_f_0();
        }
#line 12395 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 326 "mercury_compile.m"
        {
#line 326 "mercury_compile.m"
          top_level__mercury_compile__V_73_73 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__OptionArgs_14);
        }
#line 326 "mercury_compile.m"
        {
#line 326 "mercury_compile.m"
          top_level__mercury_compile__AllFlags_37 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_79, top_level__mercury_compile__DetectedGradeFlags_16, top_level__mercury_compile__V_73_73);
        }
#line 327 "mercury_compile.m"
        {
#line 327 "mercury_compile.m"
          libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__AllFlags_37, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__V_39_39, &top_level__mercury_compile__V_40_40, &top_level__mercury_compile__Errors_41, &top_level__mercury_compile__ActualGlobals_42);
        }
#line 334 "mercury_compile.m"
        if ((top_level__mercury_compile__Errors_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "mercury_compile.m"
          {
#line 336 "mercury_compile.m"
            top_level__mercury_compile__main_after_setup_8_p_0(top_level__mercury_compile__DetectedGradeFlags_16, top_level__mercury_compile__Variables_17, top_level__mercury_compile__OptionArgs_14, top_level__mercury_compile__NonOptionArgs_15, (MR_Integer) 0, top_level__mercury_compile__ActualGlobals_42);
#line 336 "mercury_compile.m"
            return;
          }
#line 334 "mercury_compile.m"
        else
#line 333 "mercury_compile.m"
          {
#line 333 "mercury_compile.m"
            libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_41);
#line 333 "mercury_compile.m"
            return;
          }
#line 12430 "top_level.mercury_compile.c"
      }
#line 12432 "top_level.mercury_compile.c"
    else
#line 12434 "top_level.mercury_compile.c"
      {
#line 12436 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ArgsGlobals_20;
#line 12438 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeVariables0_21;
#line 12440 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_59_59;
#line 12442 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Link_103;
#line 12444 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_104;
#line 12446 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_105;
#line 247 "mercury_compile.m"
        MR_Word top_level__mercury_compile___Errors0_19;

#line 247 "mercury_compile.m"
        {
#line 247 "mercury_compile.m"
          libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__CmdLineArgs_4, &top_level__mercury_compile__OptionArgs_104, &top_level__mercury_compile__NonOptionArgs_105, &top_level__mercury_compile__Link_103, &top_level__mercury_compile___Errors0_19, &top_level__mercury_compile__ArgsGlobals_20);
        }
#line 249 "mercury_compile.m"
        {
#line 249 "mercury_compile.m"
          top_level__mercury_compile__V_59_59 = make__options_file__options_variables_init_0_f_0();
        }
#line 249 "mercury_compile.m"
        {
#line 249 "mercury_compile.m"
          make__options_file__read_options_files_5_p_0(top_level__mercury_compile__ArgsGlobals_20, top_level__mercury_compile__V_59_59, &top_level__mercury_compile__MaybeVariables0_21);
        }
#line 12466 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__MaybeVariables0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12468 "top_level.mercury_compile.c"
          {
#line 305 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Variables_107;

#line 305 "mercury_compile.m"
            {
#line 305 "mercury_compile.m"
              top_level__mercury_compile__Variables_107 = make__options_file__options_variables_init_0_f_0();
            }
#line 341 "mercury_compile.m"
            {
#line 341 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 341 "mercury_compile.m"
              return;
            }
#line 12485 "top_level.mercury_compile.c"
          }
#line 12487 "top_level.mercury_compile.c"
        else
#line 12489 "top_level.mercury_compile.c"
          {
#line 12491 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Variables0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables0_21, (MR_Integer) 0)));
#line 12493 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MaybeMCFlags0_23;

#line 253 "mercury_compile.m"
            {
#line 253 "mercury_compile.m"
              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__ArgsGlobals_20, top_level__mercury_compile__Variables0_22, &top_level__mercury_compile__MaybeMCFlags0_23);
            }
#line 12501 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__MaybeMCFlags0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12503 "top_level.mercury_compile.c"
              {
#line 299 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Variables_124;

#line 299 "mercury_compile.m"
                {
#line 299 "mercury_compile.m"
                  top_level__mercury_compile__Variables_124 = make__options_file__options_variables_init_0_f_0();
                }
#line 341 "mercury_compile.m"
                {
#line 341 "mercury_compile.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 341 "mercury_compile.m"
                  return;
                }
#line 12520 "top_level.mercury_compile.c"
              }
#line 12522 "top_level.mercury_compile.c"
            else
#line 12524 "top_level.mercury_compile.c"
              {
#line 12526 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MCFlags0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags0_23, (MR_Integer) 0)));
#line 12528 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsErrors_28;
#line 12530 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsArgsGlobals_29;
#line 12532 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__V_62_62;
#line 12534 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__DetectedGradeFlags_130;
#line 12536 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__Variables_131;
#line 12538 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MaybeMCFlags_132;
#line 259 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_25_25;
#line 259 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_26_26;
#line 259 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_27_27;

#line 259 "mercury_compile.m"
                {
#line 259 "mercury_compile.m"
                  top_level__mercury_compile__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__MCFlags0_24, top_level__mercury_compile__CmdLineArgs_4);
                }
#line 259 "mercury_compile.m"
                {
#line 259 "mercury_compile.m"
                  libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__V_62_62, &top_level__mercury_compile__V_25_25, &top_level__mercury_compile__V_26_26, &top_level__mercury_compile__V_27_27, &top_level__mercury_compile__FlagsErrors_28, &top_level__mercury_compile__FlagsArgsGlobals_29);
                }
#line 267 "mercury_compile.m"
                if ((top_level__mercury_compile__FlagsErrors_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "mercury_compile.m"
                  {
#line 268 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MaybeConfigFile_32;

#line 269 "mercury_compile.m"
                    {
#line 269 "mercury_compile.m"
                      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, (MR_Integer) 645, &top_level__mercury_compile__MaybeConfigFile_32);
                    }
#line 289 "mercury_compile.m"
                    if ((top_level__mercury_compile__MaybeConfigFile_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "mercury_compile.m"
                      {
#line 291 "mercury_compile.m"
                        top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 292 "mercury_compile.m"
                        {
#line 292 "mercury_compile.m"
                          top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                        }
#line 293 "mercury_compile.m"
                        {
#line 293 "mercury_compile.m"
                          make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMCFlags_132);
                        }
#line 290 "mercury_compile.m"
                      }
#line 289 "mercury_compile.m"
                    else
#line 272 "mercury_compile.m"
                      {
#line 272 "mercury_compile.m"
                        MR_String top_level__mercury_compile__ConfigFile_33 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigFile_32, (MR_Integer) 0)));
#line 272 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__MaybeVariables_34;

#line 273 "mercury_compile.m"
                        {
#line 273 "mercury_compile.m"
                          make__options_file__read_options_file_6_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__ConfigFile_33, top_level__mercury_compile__Variables0_22, &top_level__mercury_compile__MaybeVariables_34);
                        }
#line 283 "mercury_compile.m"
                        if ((top_level__mercury_compile__MaybeVariables_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "mercury_compile.m"
                          {
#line 285 "mercury_compile.m"
                            top_level__mercury_compile__MaybeMCFlags_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "mercury_compile.m"
                            top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "mercury_compile.m"
                            {
#line 287 "mercury_compile.m"
                              top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                            }
#line 284 "mercury_compile.m"
                          }
#line 283 "mercury_compile.m"
                        else
#line 276 "mercury_compile.m"
                          {
#line 276 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__MaybeMerStdLibDir_35;

#line 276 "mercury_compile.m"
                            top_level__mercury_compile__Variables_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables_34, (MR_Integer) 0)));
#line 277 "mercury_compile.m"
                            {
#line 277 "mercury_compile.m"
                              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMCFlags_132);
                            }
#line 279 "mercury_compile.m"
                            {
#line 279 "mercury_compile.m"
                              make__options_file__lookup_mercury_stdlib_dir_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMerStdLibDir_35);
                            }
#line 281 "mercury_compile.m"
                            {
#line 281 "mercury_compile.m"
                              top_level__mercury_compile__detect_libgrades_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__MaybeMerStdLibDir_35, &top_level__mercury_compile__DetectedGradeFlags_130);
                            }
#line 276 "mercury_compile.m"
                          }
#line 272 "mercury_compile.m"
                      }
#line 268 "mercury_compile.m"
                  }
#line 267 "mercury_compile.m"
                else
#line 262 "mercury_compile.m"
                  {
#line 263 "mercury_compile.m"
                    {
#line 263 "mercury_compile.m"
                      libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__FlagsErrors_28);
                    }
#line 264 "mercury_compile.m"
                    top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "mercury_compile.m"
                    {
#line 265 "mercury_compile.m"
                      top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                    }
#line 266 "mercury_compile.m"
                    top_level__mercury_compile__MaybeMCFlags_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "mercury_compile.m"
                  }
#line 339 "mercury_compile.m"
                if ((top_level__mercury_compile__MaybeMCFlags_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "mercury_compile.m"
                  {
#line 341 "mercury_compile.m"
                    {
#line 341 "mercury_compile.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 341 "mercury_compile.m"
                      return;
                    }
#line 340 "mercury_compile.m"
                  }
#line 339 "mercury_compile.m"
                else
#line 311 "mercury_compile.m"
                  {
#line 311 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TypeCtorInfo_79_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 311 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MCFlags_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags_132, (MR_Integer) 0)));
#line 311 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__AllFlags_84;
#line 311 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Errors_88;
#line 311 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ActualGlobals_89;
#line 311 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_90_90;
#line 327 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_80_80;
#line 327 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_81_81;
#line 327 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_82_82;

#line 326 "mercury_compile.m"
                    {
#line 326 "mercury_compile.m"
                      top_level__mercury_compile__V_90_90 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_92, top_level__mercury_compile__MCFlags_83, top_level__mercury_compile__OptionArgs_104);
                    }
#line 326 "mercury_compile.m"
                    {
#line 326 "mercury_compile.m"
                      top_level__mercury_compile__AllFlags_84 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_92, top_level__mercury_compile__DetectedGradeFlags_130, top_level__mercury_compile__V_90_90);
                    }
#line 327 "mercury_compile.m"
                    {
#line 327 "mercury_compile.m"
                      libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__AllFlags_84, &top_level__mercury_compile__V_80_80, &top_level__mercury_compile__V_81_81, &top_level__mercury_compile__V_82_82, &top_level__mercury_compile__Errors_88, &top_level__mercury_compile__ActualGlobals_89);
                    }
#line 334 "mercury_compile.m"
                    if ((top_level__mercury_compile__Errors_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "mercury_compile.m"
                      {
#line 336 "mercury_compile.m"
                        top_level__mercury_compile__main_after_setup_8_p_0(top_level__mercury_compile__DetectedGradeFlags_130, top_level__mercury_compile__Variables_131, top_level__mercury_compile__OptionArgs_104, top_level__mercury_compile__NonOptionArgs_105, top_level__mercury_compile__Link_103, top_level__mercury_compile__ActualGlobals_89);
#line 336 "mercury_compile.m"
                        return;
                      }
#line 334 "mercury_compile.m"
                    else
#line 333 "mercury_compile.m"
                      {
#line 333 "mercury_compile.m"
                        libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_88);
#line 333 "mercury_compile.m"
                        return;
                      }
#line 311 "mercury_compile.m"
                  }
#line 12737 "top_level.mercury_compile.c"
              }
#line 12739 "top_level.mercury_compile.c"
          }
#line 12741 "top_level.mercury_compile.c"
      }
#line 12743 "top_level.mercury_compile.c"
  }
#line 203 "mercury_compile.m"
}

#line 175 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 175 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 175 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6)
#line 175 "mercury_compile.m"
{
#line 178 "mercury_compile.m"
  {
#line 178 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 178 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LineRes_8;

#line 179 "mercury_compile.m"
    {
#line 179 "mercury_compile.m"
      mercury__io__read_line_as_string_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__LineRes_8);
    }
#line 193 "mercury_compile.m"
#line 193 "mercury_compile.m"
    switch (MR_tag((MR_Word) top_level__mercury_compile__LineRes_8)) {
#line 193 "mercury_compile.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 193 "mercury_compile.m"
      case (MR_Integer) 0:
#line 194 "mercury_compile.m"
        {
#line 195 "mercury_compile.m"
          *top_level__mercury_compile__Res_6 = (MR_Word) &top_level__mercury_compile_scalar_common_4[0];
#line 194 "mercury_compile.m"
        }
#line 193 "mercury_compile.m"
        break;
#line 193 "mercury_compile.m"
      case (MR_Integer) 1:
#line 181 "mercury_compile.m"
        {
#line 181 "mercury_compile.m"
          MR_String top_level__mercury_compile__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));
#line 181 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res0_10;

#line 182 "mercury_compile.m"
          {
#line 182 "mercury_compile.m"
            top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__Res0_10);
          }
#line 190 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res0_10)) == (MR_mktag((MR_Integer) 1))))
#line 191 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 190 "mercury_compile.m"
          else
#line 183 "mercury_compile.m"
            {
#line 183 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Lines_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res0_10, (MR_Integer) 0)));
#line 183 "mercury_compile.m"
              MR_String top_level__mercury_compile__StrippedLine_12;

#line 184 "mercury_compile.m"
              {
#line 184 "mercury_compile.m"
                top_level__mercury_compile__StrippedLine_12 = mercury__string__strip_1_f_0(top_level__mercury_compile__Line_9);
              }
#line 185 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__StrippedLine_12, (MR_String) "") == 0);
#line 187 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 186 "mercury_compile.m"
                *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 187 "mercury_compile.m"
              else
#line 188 "mercury_compile.m"
                {
#line 188 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_20_20;

#line 188 "mercury_compile.m"
                  {
#line 188 "mercury_compile.m"
                    top_level__mercury_compile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 0) = ((MR_Box) (top_level__mercury_compile__StrippedLine_12));
#line 188 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 1) = ((MR_Box) (top_level__mercury_compile__Lines_11));
#line 188 "mercury_compile.m"
                  }
#line 188 "mercury_compile.m"
                  {
#line 188 "mercury_compile.m"
                    MR_Word base;
#line 188 "mercury_compile.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 188 "mercury_compile.m"
                    *top_level__mercury_compile__Res_6 = base;
#line 188 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_20_20));
#line 188 "mercury_compile.m"
                  }
#line 188 "mercury_compile.m"
                }
#line 183 "mercury_compile.m"
            }
#line 181 "mercury_compile.m"
        }
#line 193 "mercury_compile.m"
        break;
#line 193 "mercury_compile.m"
      case (MR_Integer) 2:
#line 197 "mercury_compile.m"
        {
#line 197 "mercury_compile.m"
          MR_Word top_level__mercury_compile__E_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));

#line 198 "mercury_compile.m"
          {
#line 198 "mercury_compile.m"
            MR_Word base;
#line 198 "mercury_compile.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 198 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = base;
#line 198 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__E_14));
#line 198 "mercury_compile.m"
          }
#line 197 "mercury_compile.m"
        }
#line 193 "mercury_compile.m"
        break;
#line 193 "mercury_compile.m"
    }
#line 178 "mercury_compile.m"
  }
#line 175 "mercury_compile.m"
}

#line 135 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 135 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 135 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2)
#line 135 "mercury_compile.m"
{
#line 138 "mercury_compile.m"
  while (MR_TRUE)
#line 138 "mercury_compile.m"
    {
#line 138 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 138 "mercury_compile.m"
      {
#line 138 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 138 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "mercury_compile.m"
          {
#line 138 "mercury_compile.m"
            *top_level__mercury_compile__HeadVar__2_2 = (MR_Word) &top_level__mercury_compile_scalar_common_4[0];
#line 138 "mercury_compile.m"
          }
#line 138 "mercury_compile.m"
        else
#line 139 "mercury_compile.m"
          {
#line 139 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "mercury_compile.m"
            MR_String top_level__mercury_compile__File_13;

#line 140 "mercury_compile.m"
            {
#line 140 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", top_level__mercury_compile__Arg_9, &top_level__mercury_compile__File_13);
            }
#line 155 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 141 "mercury_compile.m"
              {
#line 141 "mercury_compile.m"
                MR_Word top_level__mercury_compile__OpenRes_14;

#line 141 "mercury_compile.m"
                {
#line 141 "mercury_compile.m"
                  mercury__io__open_input_4_p_0(top_level__mercury_compile__File_13, &top_level__mercury_compile__OpenRes_14);
                }
#line 150 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 151 "mercury_compile.m"
                  {
#line 151 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Msg_20;
#line 151 "mercury_compile.m"
                    MR_String top_level__mercury_compile__V_28_28;
#line 151 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_30_30;

#line 152 "mercury_compile.m"
                    {
#line 152 "mercury_compile.m"
                      top_level__mercury_compile__V_28_28 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, (MR_String) "\'");
                    }
#line 152 "mercury_compile.m"
                    {
#line 152 "mercury_compile.m"
                      top_level__mercury_compile__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", top_level__mercury_compile__V_28_28);
                    }
#line 153 "mercury_compile.m"
                    {
#line 153 "mercury_compile.m"
                      top_level__mercury_compile__V_30_30 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__Msg_20);
                    }
#line 153 "mercury_compile.m"
                    {
#line 153 "mercury_compile.m"
                      MR_Word base;
#line 153 "mercury_compile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 153 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 153 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 153 "mercury_compile.m"
                    }
#line 151 "mercury_compile.m"
                  }
#line 150 "mercury_compile.m"
                else
#line 143 "mercury_compile.m"
                  {
#line 143 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__S_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenRes_14, (MR_Integer) 0)));
#line 143 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ReadRes_16;

#line 144 "mercury_compile.m"
                    {
#line 144 "mercury_compile.m"
                      top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_15, &top_level__mercury_compile__ReadRes_16);
                    }
#line 147 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__ReadRes_16)) == (MR_mktag((MR_Integer) 1))))
#line 147 "mercury_compile.m"
                      {
#line 147 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__E_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 147 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_32_32;
#line 147 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_43_43;
#line 147 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_45_45;
#line 147 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_46_46;
#line 147 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_48_48;

#line 170 "mercury_compile.m"
                        {
#line 170 "mercury_compile.m"
                          top_level__mercury_compile__V_48_48 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_18);
                        }
#line 170 "mercury_compile.m"
                        {
#line 170 "mercury_compile.m"
                          top_level__mercury_compile__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", top_level__mercury_compile__V_48_48);
                        }
#line 169 "mercury_compile.m"
                        {
#line 169 "mercury_compile.m"
                          top_level__mercury_compile__V_45_45 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, top_level__mercury_compile__V_46_46);
                        }
#line 169 "mercury_compile.m"
                        {
#line 169 "mercury_compile.m"
                          top_level__mercury_compile__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", top_level__mercury_compile__V_45_45);
                        }
#line 169 "mercury_compile.m"
                        {
#line 169 "mercury_compile.m"
                          top_level__mercury_compile__V_32_32 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__V_43_43);
                        }
#line 148 "mercury_compile.m"
                        {
#line 148 "mercury_compile.m"
                          MR_Word base;
#line 148 "mercury_compile.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 148 "mercury_compile.m"
                          *top_level__mercury_compile__HeadVar__2_2 = base;
#line 148 "mercury_compile.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_32_32));
#line 148 "mercury_compile.m"
                        }
#line 147 "mercury_compile.m"
                      }
#line 147 "mercury_compile.m"
                    else
#line 145 "mercury_compile.m"
                      {
#line 145 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__FileArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 145 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_33_33;

#line 146 "mercury_compile.m"
                        {
#line 146 "mercury_compile.m"
                          top_level__mercury_compile__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__FileArgs_17, top_level__mercury_compile__Args_10);
                        }
#line 146 "mercury_compile.m"
                        /* direct tailcall eliminated */
#line 146 "mercury_compile.m"
                        {
#line 146 "mercury_compile.m"
                          MR_Word top_level__mercury_compile__HeadVar__1__tmp_copy_1 = top_level__mercury_compile__V_33_33;

#line 146 "mercury_compile.m"
                          top_level__mercury_compile__HeadVar__1_1 = top_level__mercury_compile__HeadVar__1__tmp_copy_1;
#line 146 "mercury_compile.m"
                        }
#line 146 "mercury_compile.m"
                        continue;
#line 145 "mercury_compile.m"
                      }
#line 143 "mercury_compile.m"
                  }
#line 141 "mercury_compile.m"
              }
#line 155 "mercury_compile.m"
            else
#line 156 "mercury_compile.m"
              {
#line 156 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Result0_21;

#line 156 "mercury_compile.m"
                {
#line 156 "mercury_compile.m"
                  top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__Args_10, &top_level__mercury_compile__Result0_21);
                }
#line 160 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__Result0_21)) == (MR_mktag((MR_Integer) 1))))
#line 162 "mercury_compile.m"
                  *top_level__mercury_compile__HeadVar__2_2 = top_level__mercury_compile__Result0_21;
#line 160 "mercury_compile.m"
                else
#line 158 "mercury_compile.m"
                  {
#line 158 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ExpandedArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Result0_21, (MR_Integer) 0)));
#line 158 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_36_36;

#line 159 "mercury_compile.m"
                    {
#line 159 "mercury_compile.m"
                      top_level__mercury_compile__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 0) = ((MR_Box) (top_level__mercury_compile__Arg_9));
#line 159 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile__ExpandedArgs_22));
#line 159 "mercury_compile.m"
                    }
#line 159 "mercury_compile.m"
                    {
#line 159 "mercury_compile.m"
                      MR_Word base;
#line 159 "mercury_compile.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 159 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 159 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_36_36));
#line 159 "mercury_compile.m"
                    }
#line 158 "mercury_compile.m"
                  }
#line 156 "mercury_compile.m"
              }
#line 139 "mercury_compile.m"
          }
#line 138 "mercury_compile.m"
      }
#line 138 "mercury_compile.m"
      break;
#line 138 "mercury_compile.m"
    }
#line 135 "mercury_compile.m"
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
#line 346 "mercury_compile.m"
  {
#line 346 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 346 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_11_11;

#line 347 "mercury_compile.m"
    {
#line 347 "mercury_compile.m"
      top_level__mercury_compile__V_11_11 = make__options_file__options_variables_init_0_f_0();
    }
#line 347 "mercury_compile.m"
    {
#line 347 "mercury_compile.m"
      top_level__mercury_compile__main_after_setup_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_11_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Args_6, (MR_Integer) 0, top_level__mercury_compile__Globals_5);
#line 347 "mercury_compile.m"
      return;
    }
#line 346 "mercury_compile.m"
  }
#line 36 "mercury_compile.m"
}

#line 31 "mercury_compile.m"
void MR_CALL 
top_level__mercury_compile__real_main_2_p_0(void)
#line 31 "mercury_compile.m"
{
#line 107 "mercury_compile.m"
  {
#line 107 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 107 "mercury_compile.m"
    MR_Word top_level__mercury_compile__StdErr_4;
#line 107 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CmdLineArgs_6;
#line 107 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Res_7;
#line 112 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_5_5;

#line 2360 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__real_main_2_p_0


		{
#line 2360 "mercury_compile.m"

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

#line 13224 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2360 "mercury_compile.m"
}
#line 111 "mercury_compile.m"
    {
#line 111 "mercury_compile.m"
      mercury__io__stderr_stream_3_p_0(&top_level__mercury_compile__StdErr_4);
    }
#line 112 "mercury_compile.m"
    {
#line 112 "mercury_compile.m"
      mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__StdErr_4, &top_level__mercury_compile__V_5_5);
    }
#line 113 "mercury_compile.m"
    {
#line 113 "mercury_compile.m"
      mercury__io__command_line_arguments_3_p_0(&top_level__mercury_compile__CmdLineArgs_6);
    }
#line 115 "mercury_compile.m"
    {
#line 115 "mercury_compile.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 118 "mercury_compile.m"
    {
#line 118 "mercury_compile.m"
      top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__CmdLineArgs_6, &top_level__mercury_compile__Res_7);
    }
#line 122 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__Res_7)) == (MR_mktag((MR_Integer) 1))))
#line 123 "mercury_compile.m"
      {
#line 123 "mercury_compile.m"
        MR_Word top_level__mercury_compile__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_7, (MR_Integer) 0)));
#line 123 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_20_20;

#line 124 "mercury_compile.m"
        {
#line 124 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 126 "mercury_compile.m"
        {
#line 126 "mercury_compile.m"
          top_level__mercury_compile__V_20_20 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_9);
        }
#line 126 "mercury_compile.m"
        {
#line 126 "mercury_compile.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_20_20);
        }
#line 127 "mercury_compile.m"
        {
#line 127 "mercury_compile.m"
          mercury__io__nl_2_p_0();
#line 127 "mercury_compile.m"
          return;
        }
#line 123 "mercury_compile.m"
      }
#line 122 "mercury_compile.m"
    else
#line 120 "mercury_compile.m"
      {
#line 120 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ExpandedCmdLineArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_7, (MR_Integer) 0)));

#line 121 "mercury_compile.m"
        {
#line 121 "mercury_compile.m"
          top_level__mercury_compile__real_main_after_expansion_3_p_0(top_level__mercury_compile__ExpandedCmdLineArgs_8);
#line 121 "mercury_compile.m"
          return;
        }
#line 120 "mercury_compile.m"
      }
#line 107 "mercury_compile.m"
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
