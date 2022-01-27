/*
** Automatically generated from `mercury_compile.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "parse_tree.deps_map.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
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




#line 195 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 198 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0;

#line 201 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 204 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 207 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 210 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 213 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

#line 216 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 219 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 222 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 225 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 228 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0;

#line 231 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 234 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 237 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 240 "top_level.mercury_compile.c"
static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 243 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1];

#line 246 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0;

#line 249 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1];

#line 252 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1;

#line 255 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1];

#line 258 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1];

#line 261 "top_level.mercury_compile.c"
static const MR_DuPtagLayout top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0[2];

#line 264 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2];

#line 267 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2];

#line 270 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 273 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 275 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 278 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 281 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 283 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 285 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 288 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 291 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 293 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 296 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 299 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 301 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 303 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_48_55_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1307 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 2235 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 1257 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1257 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 782 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 782 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 782 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1307 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1307 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1307 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 1294 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1294 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16);

#line 1931 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1931__1_1_p_0(
#line 1931 "mercury_compile.m"
  MR_Char top_level__mercury_compile__HeadVar__1_24);

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1307__1_8_p_0(
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1307 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 1177 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1177__1_2_p_0(
#line 1177 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1177 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75);

#line 832 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 832 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 832 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1291 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1291 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 1291 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 2299 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void);

#line 2235 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 2226 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2226 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2182 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2182 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2182 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2182 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8);

#line 2137 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2137 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2137 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2137 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2137 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23);

#line 2101 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2101 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22);

#line 2064 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_30,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_31,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42);

#line 2041 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35);

#line 1951 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1951 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1951 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14);

#line 1930 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1930 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1930 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1929 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1929 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1929 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1920 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1920 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4);

#line 1899 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1899 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1899 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6);

#line 1846 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8);

#line 1816 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1816 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34);

#line 1701 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_24,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70);

#line 1681 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1681 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1681 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1681 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1681 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1552 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1552 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1552 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);

#line 1539 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1528 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1528 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20);

#line 1539 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1515 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1515 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15);

#line 1428 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1428 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1428 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1428 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48);

#line 1399 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1399 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1399 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1399 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34);

#line 1374 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1374 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1374 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1374 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1374 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10);

#line 1372 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1372 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1372 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1372 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1372 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1372 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1351 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1351 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4);

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1340 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1340 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10);

#line 1338 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1338 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1338 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1338 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1338 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1338 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1327 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1327 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4);

#line 1286 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1286 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1286 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5);

#line 1275 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1275 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_3,
#line 1275 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4);

#line 1266 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1266 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1257 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1257 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1248 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1248 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1245 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1245 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1245 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1245 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2);

#line 1240 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1240 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1240 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1240 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1229 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1229 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1229 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1229 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24);

#line 1177 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1177 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1177 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1133 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 1111 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1111 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12);

#line 1038 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1038 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1038 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1038 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1038 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1019 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1019 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1016 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1016 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1012 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1012 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 995 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 995 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 995 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 995 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 995 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 995 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12);

#line 990 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 990 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1);

#line 857 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 857 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);

#line 782 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 782 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 782 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 765 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 765 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 765 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 765 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 752 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 752 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 752 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 752 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 724 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9);

#line 691 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 691 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 691 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28);

#line 584 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 584 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 584 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 568 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 568 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 568 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 568 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8);

#line 531 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_2(
#line 531 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 531 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 531 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 531 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 531 "mercury_compile.m"
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

#line 352 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0(
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_13,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14);

#line 204 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 204 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4);

#line 176 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 176 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 176 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6);

#line 136 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 136 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2);


static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[33][2];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_2[2][4];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[8][3];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_4[2][6];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[5][1];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_6[2][9];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[2][12];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_8[2][10];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[3][5];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_10[1][16];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_11[1][7];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][11];




static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[33][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Char) 58)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 32)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[3])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row 32 */
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&top_level__mercury_compile_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2)),
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[5][1] = {
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 4 */
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
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
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
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
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
    ((MR_Box) (&top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0)),
    ((MR_Box) (&top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
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



#line 1896 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1904 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1912 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1922 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1930 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1938 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1947 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1955 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1964 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1978 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1986 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1995 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0
  }
};

#line 2004 "top_level.mercury_compile.c"
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

#line 2016 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2024 "top_level.mercury_compile.c"
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

#line 2036 "top_level.mercury_compile.c"
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

#line 2048 "top_level.mercury_compile.c"
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

#line 2069 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2074 "top_level.mercury_compile.c"
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

#line 2089 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2094 "top_level.mercury_compile.c"
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

#line 2109 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0
};

#line 2114 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2119 "top_level.mercury_compile.c"
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

#line 2133 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2139 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2145 "top_level.mercury_compile.c"
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

#line 2166 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 2169 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2171 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2173 "top_level.mercury_compile.c"
{
#line 2175 "top_level.mercury_compile.c"
  {
#line 2177 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2180 "top_level.mercury_compile.c"
    {
#line 2182 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____compile_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2185 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2187 "top_level.mercury_compile.c"
  }
#line 2189 "top_level.mercury_compile.c"
}

#line 2192 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 2195 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2197 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2199 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2201 "top_level.mercury_compile.c"
{
#line 2203 "top_level.mercury_compile.c"
  {
#line 2205 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2208 "top_level.mercury_compile.c"
    {
#line 2210 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____compile_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2213 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2215 "top_level.mercury_compile.c"
  }
#line 2217 "top_level.mercury_compile.c"
}

#line 2220 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 2223 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2225 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2227 "top_level.mercury_compile.c"
{
#line 2229 "top_level.mercury_compile.c"
  {
#line 2231 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2234 "top_level.mercury_compile.c"
    {
#line 2236 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____file_or_module_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2239 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2241 "top_level.mercury_compile.c"
  }
#line 2243 "top_level.mercury_compile.c"
}

#line 2246 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 2249 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2251 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2253 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2255 "top_level.mercury_compile.c"
{
#line 2257 "top_level.mercury_compile.c"
  {
#line 2259 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2262 "top_level.mercury_compile.c"
    {
#line 2264 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____file_or_module_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2267 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2269 "top_level.mercury_compile.c"
  }
#line 2271 "top_level.mercury_compile.c"
}

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_48_55_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1307 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1307 "mercury_compile.m"
{
#line 1307 "mercury_compile.m"
  {
#line 1307 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1310 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Compile_15, (MR_Integer) 1)));
#line 1310 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_HeadVar__4_31;
#line 1310 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_HeadVar__8_35;

#line 1310 "mercury_compile.m"
    {
#line 1310 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__Compile_15), ((MR_Box) (top_level__mercury_compile__HeadVar__2_29)), &top_level__mercury_compile__conv2_HeadVar__4_31, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_HeadVar__8_35);
    }
#line 1310 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__4_31 = ((MR_Word) top_level__mercury_compile__conv2_HeadVar__4_31);
#line 1307 "mercury_compile.m"
  }
#line 1307 "mercury_compile.m"
}

#line 2235 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2235 "mercury_compile.m"
{
#line 2241 "mercury_compile.m"
  {
#line 2241 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2241 "mercury_compile.m"
    if ((top_level__mercury_compile__FileType_13 == (MR_Integer) 1))
#line 2241 "mercury_compile.m"
      {
#line 2247 "mercury_compile.m"
        {
#line 2247 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "csharp");
        }
#line 2248 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 2248 "mercury_compile.m"
          {
#line 2248 "mercury_compile.m"
            {
#line 2248 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "erlang");
            }
#line 2248 "mercury_compile.m"
            if (!(top_level__mercury_compile__succeeded))
#line 2249 "mercury_compile.m"
              {
#line 2249 "mercury_compile.m"
                {
#line 2249 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "java");
                }
#line 2249 "mercury_compile.m"
              }
#line 2248 "mercury_compile.m"
          }
#line 2254 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2252 "mercury_compile.m"
          {
#line 2252 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_30_30;

#line 2253 "mercury_compile.m"
            {
#line 2253 "mercury_compile.m"
              top_level__mercury_compile__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2253 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2253 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2253 "mercury_compile.m"
            }
#line 2253 "mercury_compile.m"
            {
#line 2253 "mercury_compile.m"
              MR_Word base;
#line 2253 "mercury_compile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2253 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2253 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2253 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 2253 "mercury_compile.m"
            }
#line 2252 "mercury_compile.m"
          }
#line 2254 "mercury_compile.m"
        else
#line 2258 "mercury_compile.m"
          {
#line 2258 "mercury_compile.m"
            MR_String top_level__mercury_compile__InitFile_17;
#line 2258 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Result_18;
#line 2258 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_31_31;

#line 2258 "mercury_compile.m"
            {
#line 2258 "mercury_compile.m"
              top_level__mercury_compile__V_31_31 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12);
            }
#line 2258 "mercury_compile.m"
            {
#line 2258 "mercury_compile.m"
              top_level__mercury_compile__InitFile_17 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__V_31_31, (MR_String) "mer_std.init");
            }
#line 2259 "mercury_compile.m"
            {
#line 2259 "mercury_compile.m"
              mercury__io__check_file_accessibility_5_p_0(top_level__mercury_compile__InitFile_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[32]), &top_level__mercury_compile__Result_18);
            }
#line 2264 "mercury_compile.m"
            if ((top_level__mercury_compile__Result_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2261 "mercury_compile.m"
              {
#line 2261 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_40_40;

#line 2263 "mercury_compile.m"
                {
#line 2263 "mercury_compile.m"
                  top_level__mercury_compile__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2263 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2263 "mercury_compile.m"
                }
#line 2263 "mercury_compile.m"
                {
#line 2263 "mercury_compile.m"
                  MR_Word base;
#line 2263 "mercury_compile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "mercury_compile.m"
                  *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2263 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2263 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_40_40));
#line 2263 "mercury_compile.m"
                }
#line 2261 "mercury_compile.m"
              }
#line 2264 "mercury_compile.m"
            else
#line 2265 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2258 "mercury_compile.m"
          }
#line 2268 "mercury_compile.m"
        *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2241 "mercury_compile.m"
      }
#line 2241 "mercury_compile.m"
    else
#line 2280 "mercury_compile.m"
      {
#line 2281 "mercury_compile.m"
        *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2281 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2280 "mercury_compile.m"
      }
#line 2241 "mercury_compile.m"
  }
#line 2235 "mercury_compile.m"
}

#line 1257 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1257 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1257 "mercury_compile.m"
{
#line 1262 "mercury_compile.m"
  {
#line 1262 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1262 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1262 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1263 "mercury_compile.m"
    {
#line 1263 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_short_interface_file_6_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__Items_13);
#line 1263 "mercury_compile.m"
      return;
    }
#line 1262 "mercury_compile.m"
  }
#line 1257 "mercury_compile.m"
}

#line 782 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 782 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 782 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 782 "mercury_compile.m"
{
#line 788 "mercury_compile.m"
  {
#line 788 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 788 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Modules_15;
#line 788 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFiles_16;
#line 788 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateDeps_29;

#line 787 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__5_5 = (MR_Integer) 1;
#line 798 "mercury_compile.m"
    {
#line 798 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 92, &top_level__mercury_compile__GenerateDeps_29);
    }
#line 810 "mercury_compile.m"
    if ((top_level__mercury_compile__GenerateDeps_29 == (MR_Integer) 0))
#line 811 "mercury_compile.m"
      {
#line 811 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDepFile_32;

#line 812 "mercury_compile.m"
        {
#line 812 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 91, &top_level__mercury_compile__GenerateDepFile_32);
        }
#line 825 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDepFile_32 == (MR_Integer) 0))
#line 827 "mercury_compile.m"
          {
#line 827 "mercury_compile.m"
            top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__FileOrModule_10, &top_level__mercury_compile__Modules_15, &top_level__mercury_compile__ExtraObjFiles_16);
          }
#line 825 "mercury_compile.m"
        else
#line 815 "mercury_compile.m"
          {
#line 816 "mercury_compile.m"
            top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 817 "mercury_compile.m"
            top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 821 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 819 "mercury_compile.m"
              {
#line 819 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 820 "mercury_compile.m"
                {
#line 820 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_40);
                }
#line 819 "mercury_compile.m"
              }
#line 821 "mercury_compile.m"
            else
#line 822 "mercury_compile.m"
              {
#line 822 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 823 "mercury_compile.m"
                {
#line 823 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_41);
                }
#line 822 "mercury_compile.m"
              }
#line 815 "mercury_compile.m"
          }
#line 811 "mercury_compile.m"
      }
#line 810 "mercury_compile.m"
    else
#line 800 "mercury_compile.m"
      {
#line 801 "mercury_compile.m"
        top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 802 "mercury_compile.m"
        top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 804 "mercury_compile.m"
          {
#line 804 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 805 "mercury_compile.m"
            {
#line 805 "mercury_compile.m"
              parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_30);
            }
#line 804 "mercury_compile.m"
          }
#line 806 "mercury_compile.m"
        else
#line 807 "mercury_compile.m"
          {
#line 807 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 808 "mercury_compile.m"
            {
#line 808 "mercury_compile.m"
              parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_31);
            }
#line 807 "mercury_compile.m"
          }
#line 800 "mercury_compile.m"
      }
#line 788 "mercury_compile.m"
    {
#line 788 "mercury_compile.m"
      MR_Tuple base;
#line 788 "mercury_compile.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "mercury_compile.m"
      *top_level__mercury_compile__HeadVar__7_7 = base;
#line 788 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__Modules_15));
#line 788 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_16));
#line 788 "mercury_compile.m"
    }
#line 788 "mercury_compile.m"
  }
#line 782 "mercury_compile.m"
}

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1307 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1307 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1307 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1307 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 1307 "mercury_compile.m"
{
#line 1307 "mercury_compile.m"
  {
#line 1307 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1307 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_31;

#line 1307 "mercury_compile.m"
    {
#line 1307 "mercury_compile.m"
      top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1307__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv0_HeadVar__4_31);
    }
#line 1307 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_31));
#line 1307 "mercury_compile.m"
  }
#line 1307 "mercury_compile.m"
}

#line 1294 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1294 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1294 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16)
#line 1294 "mercury_compile.m"
{
#line 1299 "mercury_compile.m"
  {
#line 1299 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1299 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_18;

#line 1300 "mercury_compile.m"
    {
#line 1300 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 625, &top_level__mercury_compile__InvokedByMake_18);
    }
#line 1305 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_18 == (MR_Integer) 0))
#line 1306 "mercury_compile.m"
      {
#line 1306 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 1306 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Builder_19;
#line 1312 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_25_25;

#line 1307 "mercury_compile.m"
        {
#line 1307 "mercury_compile.m"
          top_level__mercury_compile__Builder_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1307 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_12[0]));
#line 1307 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 1) = ((MR_Box) (top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1));
#line 1307 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1307 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 3) = ((MR_Box) (top_level__mercury_compile__Compile_15));
#line 1307 "mercury_compile.m"
        }
#line 1313 "mercury_compile.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2761 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1312 "mercury_compile.m"
        {
#line 1312 "mercury_compile.m"
          make__util__build_with_module_options_args_12_p_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Builder_19, top_level__mercury_compile__Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__V_25_25);
        }
#line 1306 "mercury_compile.m"
      }
#line 1305 "mercury_compile.m"
    else
#line 1304 "mercury_compile.m"
      {
#line 1304 "mercury_compile.m"
        backend_libs__compile_target_code__link_module_list_6_p_0(top_level__mercury_compile__V_48_48, top_level__mercury_compile__V_49_49, top_level__mercury_compile__Globals_10, top_level__mercury_compile__Succeeded_16);
#line 1304 "mercury_compile.m"
        return;
      }
#line 1299 "mercury_compile.m"
  }
#line 1294 "mercury_compile.m"
}

#line 1931 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1931__1_1_p_0(
#line 1931 "mercury_compile.m"
  MR_Char top_level__mercury_compile__HeadVar__1_24)
#line 1931 "mercury_compile.m"
{
#line 1931 "mercury_compile.m"
  {
#line 1931 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1931 "mercury_compile.m"
    {
#line 1931 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(top_level__mercury_compile__HeadVar__1_24);
    }
#line 1931 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1931 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1931 "mercury_compile.m"
  }
#line 1931 "mercury_compile.m"
}

#line 1307 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1307__1_8_p_0(
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1307 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1307 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1307 "mercury_compile.m"
{
#line 1307 "mercury_compile.m"
  {
#line 1307 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1307 "mercury_compile.m"
    {
#line 1307 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_48_55_95_95_49_95_95_91_51_93_95_48_8_p_0(top_level__mercury_compile__Compile_15, top_level__mercury_compile__HeadVar__2_29, top_level__mercury_compile__HeadVar__4_31);
#line 1307 "mercury_compile.m"
      return;
    }
#line 1307 "mercury_compile.m"
  }
#line 1307 "mercury_compile.m"
}

#line 1177 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1177__1_2_p_0(
#line 1177 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1177 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75)
#line 1177 "mercury_compile.m"
{
#line 1177 "mercury_compile.m"
  {
#line 1177 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1177 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SubModule_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 0)));
#line 1177 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 1)));

#line 1178 "mercury_compile.m"
    {
#line 1178 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (top_level__mercury_compile__SubModule_82)), top_level__mercury_compile__ModulesToRecompile_39);
    }
#line 1177 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1177 "mercury_compile.m"
  }
#line 1177 "mercury_compile.m"
}

#line 832 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 832 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 832 "mercury_compile.m"
{
#line 832 "mercury_compile.m"
  {
#line 832 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 832 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_12 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;
#line 832 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_13 = (MR_Integer) top_level__mercury_compile__HeadVar__3_3;

#line 832 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_12 == top_level__mercury_compile__CastY_13);
#line 832 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2894 "top_level.mercury_compile.c"
      *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 0;
#line 832 "mercury_compile.m"
    else
#line 832 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 832 "mercury_compile.m"
        {
#line 832 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 832 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 832 "mercury_compile.m"
            {
#line 832 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 832 "mercury_compile.m"
              {
#line 832 "mercury_compile.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_16_16, top_level__mercury_compile__V_5_5);
#line 832 "mercury_compile.m"
                return;
              }
#line 832 "mercury_compile.m"
            }
#line 832 "mercury_compile.m"
          else
#line 2923 "top_level.mercury_compile.c"
            *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 1;
#line 832 "mercury_compile.m"
        }
#line 832 "mercury_compile.m"
      else
#line 832 "mercury_compile.m"
        {
#line 832 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 832 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2936 "top_level.mercury_compile.c"
            *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 2;
#line 832 "mercury_compile.m"
          else
#line 832 "mercury_compile.m"
            {
#line 832 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 832 "mercury_compile.m"
              {
#line 832 "mercury_compile.m"
                mdbcomp__sym_name____Compare____sym_name_0_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_17_17, top_level__mercury_compile__V_11_11);
#line 832 "mercury_compile.m"
                return;
              }
#line 832 "mercury_compile.m"
            }
#line 832 "mercury_compile.m"
        }
#line 832 "mercury_compile.m"
  }
#line 832 "mercury_compile.m"
}

#line 832 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 832 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 832 "mercury_compile.m"
{
#line 832 "mercury_compile.m"
  {
#line 832 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 832 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_7 = (MR_Integer) top_level__mercury_compile__HeadVar__1_1;
#line 832 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_8 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;

#line 832 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_7 == top_level__mercury_compile__CastY_8);
#line 832 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 832 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 832 "mercury_compile.m"
    else
#line 832 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 832 "mercury_compile.m"
        {
#line 832 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 832 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_4_4;

#line 832 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 832 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 832 "mercury_compile.m"
            {
#line 832 "mercury_compile.m"
              top_level__mercury_compile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 3004 "top_level.mercury_compile.c"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_3_3, top_level__mercury_compile__V_4_4) == 0);
#line 832 "mercury_compile.m"
            }
#line 832 "mercury_compile.m"
        }
#line 832 "mercury_compile.m"
      else
#line 832 "mercury_compile.m"
        {
#line 832 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 832 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_6_6;

#line 832 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 832 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 832 "mercury_compile.m"
            {
#line 832 "mercury_compile.m"
              top_level__mercury_compile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 3027 "top_level.mercury_compile.c"
              {
#line 3029 "top_level.mercury_compile.c"
                return top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__V_5_5, top_level__mercury_compile__V_6_6);
              }
#line 832 "mercury_compile.m"
            }
#line 832 "mercury_compile.m"
        }
#line 832 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 832 "mercury_compile.m"
  }
#line 832 "mercury_compile.m"
}

#line 1291 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1291 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 1291 "mercury_compile.m"
{
#line 1291 "mercury_compile.m"
  {
#line 1291 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_4 = top_level__mercury_compile__HeadVar__2_2;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_5 = top_level__mercury_compile__HeadVar__3_3;

#line 1291 "mercury_compile.m"
    {
#line 1291 "mercury_compile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_4[0], top_level__mercury_compile__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile__Cast_HeadVar2_5)));
#line 1291 "mercury_compile.m"
      return;
    }
#line 1291 "mercury_compile.m"
  }
#line 1291 "mercury_compile.m"
}

#line 1291 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1291 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1291 "mercury_compile.m"
{
#line 1291 "mercury_compile.m"
  {
#line 1291 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_3 = top_level__mercury_compile__HeadVar__1_1;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_4 = top_level__mercury_compile__HeadVar__2_2;

#line 1291 "mercury_compile.m"
    {
#line 1291 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) top_level__mercury_compile__Cast_HeadVar1_3, (MR_Word) top_level__mercury_compile__Cast_HeadVar2_4);
    }
#line 1291 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1291 "mercury_compile.m"
  }
#line 1291 "mercury_compile.m"
}

#line 2299 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void)
#line 2299 "mercury_compile.m"
{
#line 2304 "mercury_compile.m"
  {
#line 2304 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2307 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__gc_init_2_p_0


		{
#line 2307 "mercury_compile.m"

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

#line 3138 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2307 "mercury_compile.m"
}
#line 2304 "mercury_compile.m"
  }
#line 2299 "mercury_compile.m"
}

#line 2235 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2235 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2235 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2235 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2235 "mercury_compile.m"
{
#line 2241 "mercury_compile.m"
  {
#line 2241 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2241 "mercury_compile.m"
    {
#line 2241 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12, top_level__mercury_compile__FileType_13, top_level__mercury_compile__Continue_14, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);
#line 2241 "mercury_compile.m"
      return;
    }
#line 2241 "mercury_compile.m"
  }
#line 2235 "mercury_compile.m"
}

#line 2226 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2226 "mercury_compile.m"
{
#line 2226 "mercury_compile.m"
  {
#line 2226 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv3_Continue_14;
#line 2226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21;

#line 2226 "mercury_compile.m"
    {
#line 2226 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv3_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21);
    }
#line 2226 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv3_Continue_14));
#line 2226 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21));
#line 2226 "mercury_compile.m"
  }
#line 2226 "mercury_compile.m"
}

#line 2226 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2226 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2226 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2226 "mercury_compile.m"
{
#line 2226 "mercury_compile.m"
  {
#line 2226 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_Continue_14;
#line 2226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21;

#line 2226 "mercury_compile.m"
    {
#line 2226 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv1_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21);
    }
#line 2226 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv1_Continue_14));
#line 2226 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21));
#line 2226 "mercury_compile.m"
  }
#line 2226 "mercury_compile.m"
}

#line 2182 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2182 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2182 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2182 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8)
#line 2182 "mercury_compile.m"
{
#line 2185 "mercury_compile.m"
  {
#line 2185 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2185 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Detect_10;

#line 2186 "mercury_compile.m"
    {
#line 2186 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 634, &top_level__mercury_compile__Detect_10);
    }
#line 2216 "mercury_compile.m"
    if ((top_level__mercury_compile__Detect_10 == (MR_Integer) 0))
#line 2218 "mercury_compile.m"
      *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2216 "mercury_compile.m"
    else
#line 2188 "mercury_compile.m"
      {
#line 2188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__VeryVerbose_13;
#line 2189 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_11;
#line 2204 "mercury_compile.m"
        MR_String top_level__mercury_compile__MerStdLibDir_15;
#line 2200 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeStdLibDir_14;

#line 2189 "mercury_compile.m"
        {
#line 2189 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 45, &top_level__mercury_compile__Verbose_11);
        }
#line 2193 "mercury_compile.m"
        {
#line 2193 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 46, &top_level__mercury_compile__VeryVerbose_13);
        }
#line 2199 "mercury_compile.m"
        {
#line 2199 "mercury_compile.m"
          libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 551, &top_level__mercury_compile__MaybeStdLibDir_14);
        }
#line 2201 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeStdLibDir_14)) == (MR_mktag((MR_Integer) 1)));
#line 2201 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2201 "mercury_compile.m"
          {
#line 2201 "mercury_compile.m"
            top_level__mercury_compile__MerStdLibDir_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeStdLibDir_14, (MR_Integer) 0)));
#line 2224 "mercury_compile.m"
            {
#line 2224 "mercury_compile.m"
              MR_String top_level__mercury_compile__ModulesDir_39;
#line 2224 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MaybeGradeOpts_40;
#line 2224 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_44_44;

#line 2225 "mercury_compile.m"
              {
#line 2225 "mercury_compile.m"
                top_level__mercury_compile__ModulesDir_39 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_15, (MR_String) "modules");
              }
#line 2226 "mercury_compile.m"
              {
#line 2226 "mercury_compile.m"
                top_level__mercury_compile__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2226 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2226 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_1));
#line 2226 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2226 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2226 "mercury_compile.m"
              }
#line 2226 "mercury_compile.m"
              {
#line 2226 "mercury_compile.m"
                mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_44_44, top_level__mercury_compile__ModulesDir_39, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_40);
              }
#line 2230 "mercury_compile.m"
              if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_40)) == (MR_mktag((MR_Integer) 1))))
#line 2232 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2230 "mercury_compile.m"
              else
#line 2229 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_40, (MR_Integer) 0)));
#line 2224 "mercury_compile.m"
            }
#line 2201 "mercury_compile.m"
          }
#line 2201 "mercury_compile.m"
        else
#line 2210 "mercury_compile.m"
          {
#line 2210 "mercury_compile.m"
            MR_String top_level__mercury_compile__MerStdLibDir_32;
#line 2207 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_26_26;
#line 2207 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_27_27;

#line 2207 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeConfigMerStdLibDir_7)) == (MR_mktag((MR_Integer) 1)));
#line 2207 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 2207 "mercury_compile.m"
              {
#line 2207 "mercury_compile.m"
                top_level__mercury_compile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigMerStdLibDir_7, (MR_Integer) 0)));
#line 2207 "mercury_compile.m"
                top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 2207 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 2207 "mercury_compile.m"
                  {
#line 2207 "mercury_compile.m"
                    top_level__mercury_compile__MerStdLibDir_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 0)));
#line 2207 "mercury_compile.m"
                    top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 1)));
#line 2207 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2207 "mercury_compile.m"
                  }
#line 2207 "mercury_compile.m"
              }
#line 2210 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 2224 "mercury_compile.m"
              {
#line 2224 "mercury_compile.m"
                MR_String top_level__mercury_compile__ModulesDir_62;
#line 2224 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MaybeGradeOpts_63;
#line 2224 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_67_67;

#line 2225 "mercury_compile.m"
                {
#line 2225 "mercury_compile.m"
                  top_level__mercury_compile__ModulesDir_62 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_32, (MR_String) "modules");
                }
#line 2226 "mercury_compile.m"
                {
#line 2226 "mercury_compile.m"
                  top_level__mercury_compile__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2226 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2226 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_2));
#line 2226 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2226 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2226 "mercury_compile.m"
                }
#line 2226 "mercury_compile.m"
                {
#line 2226 "mercury_compile.m"
                  mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_67_67, top_level__mercury_compile__ModulesDir_62, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_63);
                }
#line 2230 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_63)) == (MR_mktag((MR_Integer) 1))))
#line 2232 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2230 "mercury_compile.m"
                else
#line 2229 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_63, (MR_Integer) 0)));
#line 2224 "mercury_compile.m"
              }
#line 2210 "mercury_compile.m"
            else
#line 2211 "mercury_compile.m"
              *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2210 "mercury_compile.m"
          }
#line 2188 "mercury_compile.m"
      }
#line 2185 "mercury_compile.m"
  }
#line 2182 "mercury_compile.m"
}

#line 2137 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2137 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2137 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2137 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2137 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23)
#line 2137 "mercury_compile.m"
{
#line 2140 "mercury_compile.m"
  {
#line 2140 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2140 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2140 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileCalls_12;
#line 2140 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileTime_13;

#line 2141 "mercury_compile.m"
    {
#line 2141 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__Globals_11);
    }
#line 2142 "mercury_compile.m"
    {
#line 2142 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 189, &top_level__mercury_compile__ProfileCalls_12);
    }
#line 2143 "mercury_compile.m"
    {
#line 2143 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 190, &top_level__mercury_compile__ProfileTime_13);
    }
#line 2145 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileCalls_12 == (MR_Integer) 1);
#line 2146 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2146 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileTime_13 == (MR_Integer) 1);
#line 2170 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2150 "mercury_compile.m"
      {
#line 2150 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_14;
#line 2150 "mercury_compile.m"
        MR_String top_level__mercury_compile__ProfFileName_15;
#line 2150 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_16;

#line 2149 "mercury_compile.m"
        {
#line 2149 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Outputing profiling call graph...");
        }
#line 2151 "mercury_compile.m"
        {
#line 2151 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_7);
        }
#line 2152 "mercury_compile.m"
        {
#line 2152 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__ModuleName_14);
        }
#line 2153 "mercury_compile.m"
        {
#line 2153 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_14, (MR_String) ".prof", (MR_Integer) 0, &top_level__mercury_compile__ProfFileName_15);
        }
#line 2155 "mercury_compile.m"
        {
#line 2155 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__ProfFileName_15, &top_level__mercury_compile__Res_16);
        }
#line 2162 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_16)) == (MR_mktag((MR_Integer) 1))))
#line 2163 "mercury_compile.m"
          {
#line 2163 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2163 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_21;
#line 2163 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_36_36;

#line 2165 "mercury_compile.m"
            {
#line 2165 "mercury_compile.m"
              top_level__mercury_compile__V_36_36 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_20);
            }
#line 2164 "mercury_compile.m"
            {
#line 2164 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", top_level__mercury_compile__V_36_36);
            }
#line 2166 "mercury_compile.m"
            {
#line 2166 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_21);
            }
#line 2166 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2163 "mercury_compile.m"
          }
#line 2162 "mercury_compile.m"
        else
#line 2157 "mercury_compile.m"
          {
#line 2157 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2157 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_18;
#line 2160 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_19_19;

#line 2158 "mercury_compile.m"
            {
#line 2158 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_17, &top_level__mercury_compile__OutputStream_18);
            }
#line 2159 "mercury_compile.m"
            {
#line 2159 "mercury_compile.m"
              transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_23);
            }
#line 2160 "mercury_compile.m"
            {
#line 2160 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_18, &top_level__mercury_compile__V_19_19);
            }
#line 2161 "mercury_compile.m"
            {
#line 2161 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_17);
            }
#line 2157 "mercury_compile.m"
          }
#line 2168 "mercury_compile.m"
        {
#line 2168 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
        }
#line 2169 "mercury_compile.m"
        {
#line 2169 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2169 "mercury_compile.m"
          return;
        }
#line 2150 "mercury_compile.m"
      }
#line 2170 "mercury_compile.m"
    else
#line 2171 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2140 "mercury_compile.m"
  }
#line 2137 "mercury_compile.m"
}

#line 2101 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2101 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2101 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22)
#line 2101 "mercury_compile.m"
{
#line 2104 "mercury_compile.m"
  {
#line 2104 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2104 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2104 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ShowDepGraph_12;

#line 2105 "mercury_compile.m"
    {
#line 2105 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__Globals_11);
    }
#line 2106 "mercury_compile.m"
    {
#line 2106 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 140, &top_level__mercury_compile__ShowDepGraph_12);
    }
#line 2128 "mercury_compile.m"
    if ((top_level__mercury_compile__ShowDepGraph_12 == (MR_Integer) 0))
#line 2129 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2128 "mercury_compile.m"
    else
#line 2108 "mercury_compile.m"
      {
#line 2108 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_13;
#line 2108 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_14;
#line 2108 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_15;

#line 2109 "mercury_compile.m"
        {
#line 2109 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Writing dependency graph...");
        }
#line 2110 "mercury_compile.m"
        {
#line 2110 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__ModuleName_13);
        }
#line 2111 "mercury_compile.m"
        {
#line 2111 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_13, (MR_String) ".dependency_graph", (MR_Integer) 0, &top_level__mercury_compile__FileName_14);
        }
#line 2113 "mercury_compile.m"
        {
#line 2113 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__FileName_14, &top_level__mercury_compile__Res_15);
        }
#line 2121 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 2122 "mercury_compile.m"
          {
#line 2122 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2122 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_20;
#line 2122 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_33_33;

#line 2124 "mercury_compile.m"
            {
#line 2124 "mercury_compile.m"
              top_level__mercury_compile__V_33_33 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_19);
            }
#line 2123 "mercury_compile.m"
            {
#line 2123 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", top_level__mercury_compile__V_33_33);
            }
#line 2125 "mercury_compile.m"
            {
#line 2125 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_20);
            }
#line 2125 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2122 "mercury_compile.m"
          }
#line 2121 "mercury_compile.m"
        else
#line 2115 "mercury_compile.m"
          {
#line 2115 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2115 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_17;
#line 2118 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_18_18;

#line 2116 "mercury_compile.m"
            {
#line 2116 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_16, &top_level__mercury_compile__OutputStream_17);
            }
#line 2117 "mercury_compile.m"
            {
#line 2117 "mercury_compile.m"
              transform_hlds__dependency_graph__write_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile__STATE_VARIABLE_HLDS_22);
            }
#line 2118 "mercury_compile.m"
            {
#line 2118 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_17, &top_level__mercury_compile__V_18_18);
            }
#line 2119 "mercury_compile.m"
            {
#line 2119 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_16);
            }
#line 2120 "mercury_compile.m"
            {
#line 2120 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
            }
#line 2115 "mercury_compile.m"
          }
#line 2127 "mercury_compile.m"
        {
#line 2127 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2127 "mercury_compile.m"
          return;
        }
#line 2108 "mercury_compile.m"
      }
#line 2104 "mercury_compile.m"
  }
#line 2101 "mercury_compile.m"
}

#line 2064 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_30,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_31,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 2064 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 2064 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42)
#line 2064 "mercury_compile.m"
{
#line 2072 "mercury_compile.m"
  {
#line 2072 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2072 "mercury_compile.m"
    MR_String top_level__mercury_compile__DumpBaseFileName_35;
#line 2072 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ParseTree_36;
#line 2072 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeSpecs_37;
#line 2072 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Status_38;
#line 2072 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SpecsErrors_39;
#line 2072 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_45_45;
#line 2072 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52;
#line 2072 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_53_53;

#line 2073 "mercury_compile.m"
    {
#line 2073 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_0_41, &top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 2074 "mercury_compile.m"
    {
#line 2074 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% Converting parse tree to hlds...\n");
    }
#line 2075 "mercury_compile.m"
    {
#line 2075 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__ModuleName_20, (MR_String) ".hlds_dump", (MR_Integer) 0, &top_level__mercury_compile__DumpBaseFileName_35);
    }
#line 2077 "mercury_compile.m"
    {
#line 2077 "mercury_compile.m"
      top_level__mercury_compile__ParseTree_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2077 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_20));
#line 2077 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 1) = ((MR_Box) (top_level__mercury_compile__Items_21));
#line 2077 "mercury_compile.m"
    }
#line 2078 "mercury_compile.m"
    {
#line 2078 "mercury_compile.m"
      hlds__make_hlds__parse_tree_to_hlds_11_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__DumpBaseFileName_35, top_level__mercury_compile__ParseTree_36, top_level__mercury_compile__MQInfo_23, top_level__mercury_compile__EqvMap_24, top_level__mercury_compile__UsedModules_25, top_level__mercury_compile__QualInfo_29, top_level__mercury_compile__UndefTypes_30, top_level__mercury_compile__UndefModes_31, &top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, &top_level__mercury_compile__MakeSpecs_37);
    }
#line 2080 "mercury_compile.m"
    {
#line 2080 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__MakeSpecs_37, top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 2081 "mercury_compile.m"
    {
#line 2081 "mercury_compile.m"
      hlds__hlds_module__module_info_set_event_set_3_p_0(top_level__mercury_compile__EventSet_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, top_level__mercury_compile__STATE_VARIABLE_HLDS_40);
    }
#line 2082 "mercury_compile.m"
    {
#line 2082 "mercury_compile.m"
      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__Status_38);
    }
#line 2083 "mercury_compile.m"
    {
#line 2083 "mercury_compile.m"
      top_level__mercury_compile__SpecsErrors_39 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53);
    }
#line 2085 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Status_38 == (MR_Integer) 0);
#line 2085 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 2086 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2086 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__SpecsErrors_39 == (MR_Integer) 1);
#line 2091 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2089 "mercury_compile.m"
      {
#line 2089 "mercury_compile.m"
        *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 1;
#line 2090 "mercury_compile.m"
        {
#line 2090 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 2089 "mercury_compile.m"
      }
#line 2091 "mercury_compile.m"
    else
#line 2092 "mercury_compile.m"
      *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 0;
#line 2094 "mercury_compile.m"
    {
#line 2094 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_42);
    }
#line 2095 "mercury_compile.m"
    {
#line 2095 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% done.\n");
    }
#line 2096 "mercury_compile.m"
    {
#line 2096 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_27);
#line 2096 "mercury_compile.m"
      return;
    }
#line 2072 "mercury_compile.m"
  }
#line 2064 "mercury_compile.m"
}

#line 2041 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 2041 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 2041 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35)
#line 2041 "mercury_compile.m"
{
#line 2049 "mercury_compile.m"
  {
#line 2049 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2049 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandSpecs_33;
#line 2049 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_38_38;
#line 2049 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_43_43;

#line 2050 "mercury_compile.m"
    {
#line 2050 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_0_34, &top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 2051 "mercury_compile.m"
    {
#line 2051 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% Expanding equivalence types...\n");
    }
#line 2052 "mercury_compile.m"
    {
#line 2052 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_20);
    }
#line 2053 "mercury_compile.m"
    {
#line 2053 "mercury_compile.m"
      parse_tree__equiv_type__expand_eqv_types_10_p_0(top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__Items0_22, top_level__mercury_compile__Items_23, top_level__mercury_compile__EventSpecMap0_24, top_level__mercury_compile__EventSpecMap_25, top_level__mercury_compile__EqvMap_26, top_level__mercury_compile__UsedModules_27, top_level__mercury_compile__RecompInfo0_28, top_level__mercury_compile__RecompInfo_29, &top_level__mercury_compile__ExpandSpecs_33);
    }
#line 2056 "mercury_compile.m"
    {
#line 2056 "mercury_compile.m"
      *top_level__mercury_compile__FoundError_30 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__ExpandSpecs_33);
    }
#line 2057 "mercury_compile.m"
    {
#line 2057 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ExpandSpecs_33, top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 2058 "mercury_compile.m"
    {
#line 2058 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_43_43, top_level__mercury_compile__STATE_VARIABLE_Specs_35);
    }
#line 2059 "mercury_compile.m"
    {
#line 2059 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% done.\n");
    }
#line 2060 "mercury_compile.m"
    {
#line 2060 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_21);
#line 2060 "mercury_compile.m"
      return;
    }
#line 2049 "mercury_compile.m"
  }
#line 2041 "mercury_compile.m"
}

#line 1951 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1951 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1951 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1951 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14)
#line 1951 "mercury_compile.m"
{
#line 1956 "mercury_compile.m"
  {
#line 1956 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodOpt_16;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UseOptInt_17;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_18;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_19;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_20;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_21;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Imports1_22;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error1_23;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error2_25;

#line 1957 "mercury_compile.m"
    {
#line 1957 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 326, &top_level__mercury_compile__IntermodOpt_16);
    }
#line 1959 "mercury_compile.m"
    {
#line 1959 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 328, &top_level__mercury_compile__UseOptInt_17);
    }
#line 1960 "mercury_compile.m"
    {
#line 1960 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 86, &top_level__mercury_compile__MakeOptInt_18);
    }
#line 1962 "mercury_compile.m"
    {
#line 1962 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 330, &top_level__mercury_compile__TransOpt_19);
    }
#line 1963 "mercury_compile.m"
    {
#line 1963 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 87, &top_level__mercury_compile__MakeTransOptInt_20);
    }
#line 1965 "mercury_compile.m"
    {
#line 1965 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 331, &top_level__mercury_compile__IntermodAnalysis_21);
    }
#line 1968 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__UseOptInt_17 == (MR_Integer) 1);
#line 1969 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1969 "mercury_compile.m"
      {
#line 1969 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodOpt_16 == (MR_Integer) 1);
#line 1969 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1970 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodAnalysis_21 == (MR_Integer) 1);
#line 1969 "mercury_compile.m"
      }
#line 1971 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1972 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 0);
#line 1978 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1974 "mercury_compile.m"
      {
#line 1974 "mercury_compile.m"
        {
#line 1974 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading .opt files...\n");
        }
#line 1975 "mercury_compile.m"
        {
#line 1975 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 1976 "mercury_compile.m"
        {
#line 1976 "mercury_compile.m"
          transform_hlds__intermod__grab_opt_files_6_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__Imports0_10, &top_level__mercury_compile__Imports1_22, &top_level__mercury_compile__Error1_23);
        }
#line 1977 "mercury_compile.m"
        {
#line 1977 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Done.\n");
        }
#line 1974 "mercury_compile.m"
      }
#line 1978 "mercury_compile.m"
    else
#line 1979 "mercury_compile.m"
      {
#line 1979 "mercury_compile.m"
        top_level__mercury_compile__Imports1_22 = top_level__mercury_compile__Imports0_10;
#line 1980 "mercury_compile.m"
        top_level__mercury_compile__Error1_23 = (MR_Integer) 0;
#line 1979 "mercury_compile.m"
      }
#line 1982 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_20 == (MR_Integer) 1);
#line 2011 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1989 "mercury_compile.m"
      if ((top_level__mercury_compile__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1990 "mercury_compile.m"
        {
#line 1990 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_26;
#line 1990 "mercury_compile.m"
          MR_Word top_level__mercury_compile__WarnNoTransOptDeps_27;

#line 1991 "mercury_compile.m"
          *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1992 "mercury_compile.m"
          top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1993 "mercury_compile.m"
          {
#line 1993 "mercury_compile.m"
            parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*top_level__mercury_compile__Imports_13, &top_level__mercury_compile__ModuleName_26);
          }
#line 1994 "mercury_compile.m"
          {
#line 1994 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 14, &top_level__mercury_compile__WarnNoTransOptDeps_27);
          }
#line 2007 "mercury_compile.m"
          if ((top_level__mercury_compile__WarnNoTransOptDeps_27 == (MR_Integer) 0))
#line 2008 "mercury_compile.m"
            {
#line 2008 "mercury_compile.m"
            }
#line 2007 "mercury_compile.m"
          else
#line 1997 "mercury_compile.m"
            {
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Pieces_28;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Msg_29;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Spec_30;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_52_52;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_55_55;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_56_56;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_71_71;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_72_72;
#line 1997 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_76_76;
#line 2005 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumWarnings_31;
#line 2005 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumErrors_32;

#line 1999 "mercury_compile.m"
              {
#line 1999 "mercury_compile.m"
                top_level__mercury_compile__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1999 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 1) = ((MR_Box) (top_level__mercury_compile__ModuleName_26));
#line 1999 "mercury_compile.m"
              }
#line 1999 "mercury_compile.m"
              {
#line 1999 "mercury_compile.m"
                top_level__mercury_compile__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 0) = ((MR_Box) (top_level__mercury_compile__V_56_56));
#line 1999 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[20])));
#line 1999 "mercury_compile.m"
              }
#line 1999 "mercury_compile.m"
              {
#line 1999 "mercury_compile.m"
                top_level__mercury_compile__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[31])));
#line 1999 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 1) = ((MR_Box) (top_level__mercury_compile__V_55_55));
#line 1999 "mercury_compile.m"
              }
#line 1998 "mercury_compile.m"
              {
#line 1998 "mercury_compile.m"
                top_level__mercury_compile__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[30])));
#line 1998 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 1) = ((MR_Box) (top_level__mercury_compile__V_52_52));
#line 1998 "mercury_compile.m"
              }
#line 2002 "mercury_compile.m"
              {
#line 2002 "mercury_compile.m"
                top_level__mercury_compile__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2002 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (top_level__mercury_compile__Pieces_28));
#line 2002 "mercury_compile.m"
              }
#line 2002 "mercury_compile.m"
              {
#line 2002 "mercury_compile.m"
                top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 2002 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2002 "mercury_compile.m"
              }
#line 2001 "mercury_compile.m"
              {
#line 2001 "mercury_compile.m"
                top_level__mercury_compile__Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2001 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2001 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2001 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 3) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 2001 "mercury_compile.m"
              }
#line 2003 "mercury_compile.m"
              {
#line 2003 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2003 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 0) = ((MR_Box) (top_level__mercury_compile__Msg_29));
#line 2003 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2003 "mercury_compile.m"
              }
#line 2003 "mercury_compile.m"
              {
#line 2003 "mercury_compile.m"
                top_level__mercury_compile__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2003 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2003 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2003 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 2) = ((MR_Box) (top_level__mercury_compile__V_76_76));
#line 2003 "mercury_compile.m"
              }
#line 2005 "mercury_compile.m"
              {
#line 2005 "mercury_compile.m"
                parse_tree__error_util__write_error_spec_8_p_0(top_level__mercury_compile__Spec_30, top_level__mercury_compile__Globals_9, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_31, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_32);
              }
#line 1997 "mercury_compile.m"
            }
#line 1990 "mercury_compile.m"
        }
#line 1989 "mercury_compile.m"
      else
#line 1984 "mercury_compile.m"
        {
#line 1984 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTransOptDeps_12, (MR_Integer) 0)));

#line 1987 "mercury_compile.m"
          {
#line 1987 "mercury_compile.m"
            transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptDeps_24, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
          }
#line 1984 "mercury_compile.m"
        }
#line 2011 "mercury_compile.m"
    else
#line 2017 "mercury_compile.m"
      {
#line 2011 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 1);
#line 2017 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2015 "mercury_compile.m"
          {
#line 2015 "mercury_compile.m"
            *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2016 "mercury_compile.m"
            top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2015 "mercury_compile.m"
          }
#line 2017 "mercury_compile.m"
        else
#line 2031 "mercury_compile.m"
          if ((top_level__mercury_compile__TransOpt_19 == (MR_Integer) 0))
#line 2032 "mercury_compile.m"
            {
#line 2033 "mercury_compile.m"
              *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2034 "mercury_compile.m"
              top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2032 "mercury_compile.m"
            }
#line 2031 "mercury_compile.m"
          else
#line 2019 "mercury_compile.m"
            {
#line 2019 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptFilesList_33;
#line 2019 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptFiles_34;
#line 2019 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 3)));
#line 2019 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_83_83;
#line 2019 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_85_85;
#line 2019 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 4)));
#line 2019 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 5)));
#line 2025 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 0)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 1)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 2)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 6)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 7)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 8)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 9)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 10)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 11)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 12)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 13)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 14)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 15)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 16)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 17)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 18)));
#line 2025 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 19)));
#line 2025 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 20)));

#line 2027 "mercury_compile.m"
              {
#line 2027 "mercury_compile.m"
                top_level__mercury_compile__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 0) = ((MR_Box) (top_level__mercury_compile__V_93_93));
#line 2027 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2027 "mercury_compile.m"
              }
#line 2026 "mercury_compile.m"
              {
#line 2026 "mercury_compile.m"
                top_level__mercury_compile__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2026 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 0) = ((MR_Box) (top_level__mercury_compile__V_92_92));
#line 2026 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 1) = ((MR_Box) (top_level__mercury_compile__V_85_85));
#line 2026 "mercury_compile.m"
              }
#line 2025 "mercury_compile.m"
              {
#line 2025 "mercury_compile.m"
                top_level__mercury_compile__TransOptFilesList_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 0) = ((MR_Box) (top_level__mercury_compile__V_82_82));
#line 2025 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 1) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 2025 "mercury_compile.m"
              }
#line 2028 "mercury_compile.m"
              {
#line 2028 "mercury_compile.m"
                mercury__list__condense_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, top_level__mercury_compile__TransOptFilesList_33, &top_level__mercury_compile__TransOptFiles_34);
              }
#line 2029 "mercury_compile.m"
              {
#line 2029 "mercury_compile.m"
                transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptFiles_34, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
              }
#line 2019 "mercury_compile.m"
            }
#line 2017 "mercury_compile.m"
      }
#line 2037 "mercury_compile.m"
    {
#line 2037 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__Error1_23, top_level__mercury_compile__Error2_25, top_level__mercury_compile__Error_14);
#line 2037 "mercury_compile.m"
      return;
    }
#line 1956 "mercury_compile.m"
  }
#line 1951 "mercury_compile.m"
}

#line 1930 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1930 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1930 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1930 "mercury_compile.m"
{
#line 1930 "mercury_compile.m"
  {
#line 1930 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1930 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1930 "mercury_compile.m"
    {
#line 1930 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1931__1_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1930 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1930 "mercury_compile.m"
  }
#line 1930 "mercury_compile.m"
}

#line 1929 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1929 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1929 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1929 "mercury_compile.m"
{
#line 1929 "mercury_compile.m"
  {
#line 1929 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1929 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1929 "mercury_compile.m"
    {
#line 1929 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1929 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1929 "mercury_compile.m"
  }
#line 1929 "mercury_compile.m"
}

#line 1920 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1920 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4)
#line 1920 "mercury_compile.m"
{
#line 1923 "mercury_compile.m"
  {
#line 1923 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1923 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Result_6;
#line 1945 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_15;
#line 1926 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_30_30;
#line 1926 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList0_7;
#line 1926 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList1_9;
#line 1926 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NotIsWhitespace_10;
#line 1926 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList_12;
#line 1926 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName0_14;
#line 1926 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_23_23;
#line 1926 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_25_25;
#line 1929 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_8_8;
#line 1933 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_13_13;

#line 1924 "mercury_compile.m"
    {
#line 1924 "mercury_compile.m"
      mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_6);
    }
#line 1926 "mercury_compile.m"
    top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__Result_6)) == (MR_mktag((MR_Integer) 1)));
#line 1926 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1926 "mercury_compile.m"
      {
#line 1926 "mercury_compile.m"
        top_level__mercury_compile__CharList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_6, (MR_Integer) 0)));
#line 1929 "mercury_compile.m"
        top_level__mercury_compile__V_23_23 = (MR_Word) &top_level__mercury_compile_scalar_common_3[6];
#line 4594 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1929 "mercury_compile.m"
        {
#line 1929 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__V_23_23, top_level__mercury_compile__CharList0_7, &top_level__mercury_compile__V_8_8, &top_level__mercury_compile__CharList1_9);
        }
#line 1930 "mercury_compile.m"
        top_level__mercury_compile__NotIsWhitespace_10 = (MR_Word) &top_level__mercury_compile_scalar_common_3[7];
#line 1933 "mercury_compile.m"
        {
#line 1933 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__NotIsWhitespace_10, top_level__mercury_compile__CharList1_9, &top_level__mercury_compile__CharList_12, &top_level__mercury_compile__V_13_13);
        }
#line 1934 "mercury_compile.m"
        {
#line 1934 "mercury_compile.m"
          mercury__string__from_char_list_2_p_0(top_level__mercury_compile__CharList_12, &top_level__mercury_compile__FileName0_14);
        }
#line 1935 "mercury_compile.m"
        top_level__mercury_compile__V_25_25 = (MR_String) ".trans_opt";
#line 1935 "mercury_compile.m"
        {
#line 1935 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__FileName0_14, top_level__mercury_compile__V_25_25, &top_level__mercury_compile__FileName_15);
        }
#line 1926 "mercury_compile.m"
      }
#line 1945 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1941 "mercury_compile.m"
      {
#line 1941 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleFileName_17;
#line 1941 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Module_18;
#line 1941 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TransOptDeps0_19;
#line 1939 "mercury_compile.m"
        MR_String top_level__mercury_compile__BaseFileName_16;

#line 1937 "mercury_compile.m"
        {
#line 1937 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__append_3_p_1((MR_String) "Mercury/trans_opts/", &top_level__mercury_compile__BaseFileName_16, top_level__mercury_compile__FileName_15);
        }
#line 1939 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1938 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__BaseFileName_16;
#line 1939 "mercury_compile.m"
        else
#line 1940 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__FileName_15;
#line 1942 "mercury_compile.m"
        {
#line 1942 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__ModuleFileName_17, &top_level__mercury_compile__Module_18);
        }
#line 1943 "mercury_compile.m"
        {
#line 1943 "mercury_compile.m"
          top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps0_19);
        }
#line 1944 "mercury_compile.m"
        {
#line 1944 "mercury_compile.m"
          MR_Word base;
#line 1944 "mercury_compile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1944 "mercury_compile.m"
          *top_level__mercury_compile__TransOptDeps_4 = base;
#line 1944 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__Module_18));
#line 1944 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__TransOptDeps0_19));
#line 1944 "mercury_compile.m"
        }
#line 1941 "mercury_compile.m"
      }
#line 1945 "mercury_compile.m"
    else
#line 1946 "mercury_compile.m"
      *top_level__mercury_compile__TransOptDeps_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1923 "mercury_compile.m"
  }
#line 1920 "mercury_compile.m"
}

#line 1899 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1899 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1899 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6)
#line 1899 "mercury_compile.m"
{
#line 1902 "mercury_compile.m"
  while (MR_TRUE)
#line 1902 "mercury_compile.m"
    {
#line 1902 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 1902 "mercury_compile.m"
      {
#line 1902 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 1902 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Result_8;
#line 1911 "mercury_compile.m"
        MR_Word top_level__mercury_compile__CharList_9;

#line 1903 "mercury_compile.m"
        {
#line 1903 "mercury_compile.m"
          mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_8);
        }
#line 1904 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__Result_8)) == (MR_mktag((MR_Integer) 1)));
#line 1904 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1904 "mercury_compile.m"
          {
#line 1904 "mercury_compile.m"
            top_level__mercury_compile__CharList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_8, (MR_Integer) 0)));
#line 1908 "mercury_compile.m"
            {
#line 1905 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_10_10;

#line 1905 "mercury_compile.m"
              {
#line 1905 "mercury_compile.m"
                top_level__mercury_compile__succeeded = mercury__list__append_3_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__SearchPattern_5, &top_level__mercury_compile__V_10_10, top_level__mercury_compile__CharList_9);
              }
#line 1908 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1907 "mercury_compile.m"
                *top_level__mercury_compile__Success_6 = (MR_Integer) 1;
#line 1908 "mercury_compile.m"
              else
#line 1909 "mercury_compile.m"
                {
#line 1909 "mercury_compile.m"
                  /* direct tailcall eliminated */
#line 1909 "mercury_compile.m"
                  continue;
#line 1909 "mercury_compile.m"
                }
#line 1908 "mercury_compile.m"
            }
#line 1904 "mercury_compile.m"
          }
#line 1904 "mercury_compile.m"
        else
#line 1912 "mercury_compile.m"
          *top_level__mercury_compile__Success_6 = (MR_Integer) 0;
#line 1902 "mercury_compile.m"
      }
#line 1902 "mercury_compile.m"
      break;
#line 1902 "mercury_compile.m"
    }
#line 1899 "mercury_compile.m"
}

#line 1846 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8)
#line 1846 "mercury_compile.m"
{
#line 1849 "mercury_compile.m"
  {
#line 1849 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1849 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_10;

#line 1850 "mercury_compile.m"
    {
#line 1850 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 330, &top_level__mercury_compile__TransOpt_10);
    }
#line 1891 "mercury_compile.m"
    if ((top_level__mercury_compile__TransOpt_10 == (MR_Integer) 0))
#line 1893 "mercury_compile.m"
      *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1891 "mercury_compile.m"
    else
#line 1852 "mercury_compile.m"
      {
#line 1852 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_11;
#line 1852 "mercury_compile.m"
        MR_String top_level__mercury_compile__DependencyFileName_12;
#line 1852 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OpenResult_13;

#line 1853 "mercury_compile.m"
        {
#line 1853 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 45, &top_level__mercury_compile__Verbose_11);
        }
#line 1854 "mercury_compile.m"
        {
#line 1854 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".d", (MR_Integer) 1, &top_level__mercury_compile__DependencyFileName_12);
        }
#line 1856 "mercury_compile.m"
        {
#line 1856 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading auto-dependency file \140");
        }
#line 1857 "mercury_compile.m"
        {
#line 1857 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, top_level__mercury_compile__DependencyFileName_12);
        }
#line 1858 "mercury_compile.m"
        {
#line 1858 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "\'...");
        }
#line 1859 "mercury_compile.m"
        {
#line 1859 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 1860 "mercury_compile.m"
        {
#line 1860 "mercury_compile.m"
          mercury__io__open_input_4_p_0(top_level__mercury_compile__DependencyFileName_12, &top_level__mercury_compile__OpenResult_13);
        }
#line 1881 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 1882 "mercury_compile.m"
          {
#line 1882 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1882 "mercury_compile.m"
            MR_String top_level__mercury_compile__IOErrorMessage_23;
#line 1882 "mercury_compile.m"
            MR_String top_level__mercury_compile__Message_24;
#line 1882 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_42_42;
#line 1882 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_44_44;
#line 1882 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_45_45;
#line 1882 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_47_47;

#line 1883 "mercury_compile.m"
            {
#line 1883 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " failed.\n");
            }
#line 1884 "mercury_compile.m"
            {
#line 1884 "mercury_compile.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
            }
#line 1885 "mercury_compile.m"
            {
#line 1885 "mercury_compile.m"
              mercury__io__error_message_2_p_0(top_level__mercury_compile__IOError_22, &top_level__mercury_compile__IOErrorMessage_23);
            }
#line 1887 "mercury_compile.m"
            {
#line 1887 "mercury_compile.m"
              top_level__mercury_compile__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 0) = ((MR_Box) (top_level__mercury_compile__IOErrorMessage_23));
#line 1887 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1887 "mercury_compile.m"
            }
#line 1887 "mercury_compile.m"
            {
#line 1887 "mercury_compile.m"
              top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) ((MR_String) "\' for input: "));
#line 1887 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 1) = ((MR_Box) (top_level__mercury_compile__V_47_47));
#line 1887 "mercury_compile.m"
            }
#line 1886 "mercury_compile.m"
            {
#line 1886 "mercury_compile.m"
              top_level__mercury_compile__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1886 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (top_level__mercury_compile__DependencyFileName_12));
#line 1886 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__V_45_45));
#line 1886 "mercury_compile.m"
            }
#line 1886 "mercury_compile.m"
            {
#line 1886 "mercury_compile.m"
              top_level__mercury_compile__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1886 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1886 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 1) = ((MR_Box) (top_level__mercury_compile__V_44_44));
#line 1886 "mercury_compile.m"
            }
#line 1886 "mercury_compile.m"
            {
#line 1886 "mercury_compile.m"
              mercury__string__append_list_2_p_0(top_level__mercury_compile__V_42_42, &top_level__mercury_compile__Message_24);
            }
#line 1888 "mercury_compile.m"
            {
#line 1888 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__Message_24);
            }
#line 1889 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1882 "mercury_compile.m"
          }
#line 1881 "mercury_compile.m"
        else
#line 1862 "mercury_compile.m"
          {
#line 1862 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1862 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldStream_15;
#line 1862 "mercury_compile.m"
            MR_String top_level__mercury_compile__TransOptDateFileName0_16;
#line 1862 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TransOptDateFileName_17;
#line 1862 "mercury_compile.m"
            MR_Word top_level__mercury_compile__SearchPattern_18;
#line 1862 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FindResult_19;
#line 1878 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_21_21;

#line 1863 "mercury_compile.m"
            {
#line 1863 "mercury_compile.m"
              mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__Stream_14, &top_level__mercury_compile__OldStream_15);
            }
#line 1864 "mercury_compile.m"
            {
#line 1864 "mercury_compile.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".trans_opt_date", (MR_Integer) 1, &top_level__mercury_compile__TransOptDateFileName0_16);
            }
#line 1866 "mercury_compile.m"
            {
#line 1866 "mercury_compile.m"
              mercury__string__to_char_list_2_p_0(top_level__mercury_compile__TransOptDateFileName0_16, &top_level__mercury_compile__TransOptDateFileName_17);
            }
#line 1867 "mercury_compile.m"
            {
#line 1867 "mercury_compile.m"
              top_level__mercury_compile__SearchPattern_18 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__TransOptDateFileName_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[16]));
            }
#line 1868 "mercury_compile.m"
            {
#line 1868 "mercury_compile.m"
              top_level__mercury_compile__read_dependency_file_find_start_4_p_0(top_level__mercury_compile__SearchPattern_18, &top_level__mercury_compile__FindResult_19);
            }
#line 1873 "mercury_compile.m"
            if ((top_level__mercury_compile__FindResult_19 == (MR_Integer) 0))
#line 1876 "mercury_compile.m"
              *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1873 "mercury_compile.m"
            else
#line 1870 "mercury_compile.m"
              {
#line 1870 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TransOptDeps_20;

#line 1871 "mercury_compile.m"
                {
#line 1871 "mercury_compile.m"
                  top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps_20);
                }
#line 1872 "mercury_compile.m"
                {
#line 1872 "mercury_compile.m"
                  MR_Word base;
#line 1872 "mercury_compile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "mercury_compile.m"
                  *top_level__mercury_compile__MaybeTransOptDeps_8 = base;
#line 1872 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__TransOptDeps_20));
#line 1872 "mercury_compile.m"
                }
#line 1870 "mercury_compile.m"
              }
#line 1878 "mercury_compile.m"
            {
#line 1878 "mercury_compile.m"
              mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__OldStream_15, &top_level__mercury_compile__V_21_21);
            }
#line 1879 "mercury_compile.m"
            {
#line 1879 "mercury_compile.m"
              mercury__io__close_input_3_p_0(top_level__mercury_compile__Stream_14);
            }
#line 1880 "mercury_compile.m"
            {
#line 1880 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " done.\n");
#line 1880 "mercury_compile.m"
              return;
            }
#line 1862 "mercury_compile.m"
          }
#line 1852 "mercury_compile.m"
      }
#line 1849 "mercury_compile.m"
  }
#line 1846 "mercury_compile.m"
}

#line 1816 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1816 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1816 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1816 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34)
#line 1816 "mercury_compile.m"
{
#line 1824 "mercury_compile.m"
  {
#line 1824 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1824 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_31;
#line 1824 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualifySpecs_32;
#line 1824 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_37_37;
#line 1824 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_45_45;
#line 1824 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_47_47;

#line 1825 "mercury_compile.m"
    {
#line 1825 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1826 "mercury_compile.m"
    {
#line 1826 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% Module qualifying items...\n");
    }
#line 1827 "mercury_compile.m"
    {
#line 1827 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_24);
    }
#line 1828 "mercury_compile.m"
    {
#line 1828 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, (MR_String) ".m", (MR_Integer) 1, &top_level__mercury_compile__FileName_31);
    }
#line 1831 "mercury_compile.m"
    {
#line 1831 "mercury_compile.m"
      top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1831 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) (top_level__mercury_compile__FileName_31));
#line 1831 "mercury_compile.m"
    }
#line 1830 "mercury_compile.m"
    {
#line 1830 "mercury_compile.m"
      parse_tree__module_qual__module_qualify_items_13_p_0(top_level__mercury_compile__Items0_18, top_level__mercury_compile__Items_19, top_level__mercury_compile__EventSpecMap0_20, top_level__mercury_compile__EventSpecMap_21, top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, top_level__mercury_compile__V_45_45, top_level__mercury_compile__EventSpecFileName_23, top_level__mercury_compile__MQInfo_26, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__QualifySpecs_32);
    }
#line 1833 "mercury_compile.m"
    {
#line 1833 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__QualifySpecs_32, top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1834 "mercury_compile.m"
    {
#line 1834 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_47_47, top_level__mercury_compile__STATE_VARIABLE_Specs_34);
    }
#line 1835 "mercury_compile.m"
    {
#line 1835 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% done.\n");
    }
#line 1836 "mercury_compile.m"
    {
#line 1836 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_25);
#line 1836 "mercury_compile.m"
      return;
    }
#line 1824 "mercury_compile.m"
  }
#line 1816 "mercury_compile.m"
}

#line 1701 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_24,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1701 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1701 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70)
#line 1701 "mercury_compile.m"
{
#line 1708 "mercury_compile.m"
  {
#line 1708 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_121_121;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_28;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_29;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MMCMake_30;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile1_31;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_32;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_33;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_34;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTransOptDeps_35;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports1_36;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodError_37;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items1_38;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ItemSpecs_39;
#line 1708 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetFileName_41;
#line 1708 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetName_42;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap1_43;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSetErrors_44;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items2_48;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap2_49;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo0_50;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefTypes_51;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefModes_52;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo0_53;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_54;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap_55;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EqvMap_56;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UsedModules_57;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo_58;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandErrors_59;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo_60;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSet_61;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS0_62;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSUndefTypes_63;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSUndefModes_64;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_82_82;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_83_83;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_85_85;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_89_89;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_90_90;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_91_91;
#line 1708 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_92_92;
#line 1738 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Error_40;
#line 1741 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_101_101;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_102_102;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_103_103;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_104_104;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_105_105;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_106_106;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_107_107;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_108_108;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_109_109;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_110_110;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_111_111;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_112_112;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_113_113;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_114_114;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_115_115;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_116_116;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_117_117;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_118_118;
#line 1741 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_119_119;
#line 1741 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_120_120;

#line 1709 "mercury_compile.m"
    {
#line 1709 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_28);
    }
#line 1710 "mercury_compile.m"
    {
#line 1710 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 45, &top_level__mercury_compile__Verbose_29);
    }
#line 1711 "mercury_compile.m"
    {
#line 1711 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 625, &top_level__mercury_compile__MMCMake_30);
    }
#line 1712 "mercury_compile.m"
    {
#line 1712 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile1_31 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile0_18, top_level__mercury_compile__MMCMake_30);
    }
#line 1716 "mercury_compile.m"
    {
#line 1716 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 86, &top_level__mercury_compile__MakeOptInt_32);
    }
#line 1718 "mercury_compile.m"
    {
#line 1718 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile_33 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile1_31, top_level__mercury_compile__MakeOptInt_32);
    }
#line 1720 "mercury_compile.m"
    {
#line 1720 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports0_17, &top_level__mercury_compile__ModuleName_34);
    }
#line 1728 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1730 "mercury_compile.m"
      {
#line 1730 "mercury_compile.m"
        top_level__mercury_compile__maybe_read_dependency_file_5_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, &top_level__mercury_compile__MaybeTransOptDeps_35);
      }
#line 1728 "mercury_compile.m"
    else
#line 1727 "mercury_compile.m"
      top_level__mercury_compile__MaybeTransOptDeps_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1734 "mercury_compile.m"
    {
#line 1734 "mercury_compile.m"
      top_level__mercury_compile__maybe_grab_optfiles_8_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__MaybeTransOptDeps_35, &top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__IntermodError_37);
    }
#line 1738 "mercury_compile.m"
    {
#line 1738 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__Items1_38, &top_level__mercury_compile__ItemSpecs_39, &top_level__mercury_compile___Error_40);
    }
#line 5348 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1740 "mercury_compile.m"
    {
#line 1740 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_79_79 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_121_121, top_level__mercury_compile__ItemSpecs_39, top_level__mercury_compile__STATE_VARIABLE_Specs_0_69);
    }
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 0)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 1)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 2)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 3)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 4)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 5)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 6)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 7)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 8)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 9)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 10)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 11)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 12)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 13)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 14)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 15)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 16)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 17)));
#line 1741 "mercury_compile.m"
    *top_level__mercury_compile__MaybeTimestamps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 18)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 19)));
#line 1741 "mercury_compile.m"
    top_level__mercury_compile__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 20)));
#line 1743 "mercury_compile.m"
    {
#line 1743 "mercury_compile.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 171, &top_level__mercury_compile__EventSetFileName_41);
    }
#line 1745 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__EventSetFileName_41, (MR_String) "") == 0);
#line 1749 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1746 "mercury_compile.m"
      {
#line 1746 "mercury_compile.m"
        top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1747 "mercury_compile.m"
        {
#line 1747 "mercury_compile.m"
          top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 1748 "mercury_compile.m"
        top_level__mercury_compile__EventSetErrors_44 = (MR_Integer) 0;
#line 1748 "mercury_compile.m"
        top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1746 "mercury_compile.m"
      }
#line 1749 "mercury_compile.m"
    else
#line 1751 "mercury_compile.m"
      {
#line 1751 "mercury_compile.m"
        MR_String top_level__mercury_compile__EventSetName0_45;
#line 1751 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSpecMap0_46;
#line 1751 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSetSpecs_47;

#line 1750 "mercury_compile.m"
        {
#line 1750 "mercury_compile.m"
          parse_tree__prog_event__read_event_set_6_p_0(top_level__mercury_compile__EventSetFileName_41, &top_level__mercury_compile__EventSetName0_45, &top_level__mercury_compile__EventSpecMap0_46, &top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1752 "mercury_compile.m"
        {
#line 1752 "mercury_compile.m"
          top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_121_121, top_level__mercury_compile__EventSetSpecs_47, top_level__mercury_compile__STATE_VARIABLE_Specs_79_79);
        }
#line 1753 "mercury_compile.m"
        {
#line 1753 "mercury_compile.m"
          top_level__mercury_compile__EventSetErrors_44 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1758 "mercury_compile.m"
        if ((top_level__mercury_compile__EventSetErrors_44 == (MR_Integer) 0))
#line 1755 "mercury_compile.m"
          {
#line 1756 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = top_level__mercury_compile__EventSetName0_45;
#line 1757 "mercury_compile.m"
            top_level__mercury_compile__EventSpecMap1_43 = top_level__mercury_compile__EventSpecMap0_46;
#line 1755 "mercury_compile.m"
          }
#line 1758 "mercury_compile.m"
        else
#line 1759 "mercury_compile.m"
          {
#line 1760 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1761 "mercury_compile.m"
            {
#line 1761 "mercury_compile.m"
              top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
            }
#line 1759 "mercury_compile.m"
          }
#line 1751 "mercury_compile.m"
      }
#line 1765 "mercury_compile.m"
    {
#line 1765 "mercury_compile.m"
      top_level__mercury_compile__invoke_module_qualify_items_16_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__Items1_38, &top_level__mercury_compile__Items2_48, top_level__mercury_compile__EventSpecMap1_43, &top_level__mercury_compile__EventSpecMap2_49, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__EventSetFileName_41, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQUndefTypes_51, &top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__STATE_VARIABLE_Specs_82_82, &top_level__mercury_compile__STATE_VARIABLE_Specs_83_83);
    }
#line 1769 "mercury_compile.m"
    {
#line 1769 "mercury_compile.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__RecompInfo0_53);
    }
#line 1770 "mercury_compile.m"
    {
#line 1770 "mercury_compile.m"
      top_level__mercury_compile__expand_equiv_types_17_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, top_level__mercury_compile__Items2_48, &top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSpecMap2_49, &top_level__mercury_compile__EventSpecMap_55, &top_level__mercury_compile__EqvMap_56, &top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__RecompInfo0_53, &top_level__mercury_compile__RecompInfo_58, &top_level__mercury_compile__ExpandErrors_59, top_level__mercury_compile__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile__STATE_VARIABLE_Specs_85_85);
    }
#line 1773 "mercury_compile.m"
    {
#line 1773 "mercury_compile.m"
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(top_level__mercury_compile__RecompInfo_58, top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQInfo_60);
    }
#line 1775 "mercury_compile.m"
    {
#line 1775 "mercury_compile.m"
      top_level__mercury_compile__EventSet_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1775 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 0) = ((MR_Box) (top_level__mercury_compile__EventSetName_42));
#line 1775 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 1) = ((MR_Box) (top_level__mercury_compile__EventSpecMap_55));
#line 1775 "mercury_compile.m"
    }
#line 1776 "mercury_compile.m"
    {
#line 1776 "mercury_compile.m"
      top_level__mercury_compile__make_hlds_18_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSet_61, top_level__mercury_compile__MQInfo_60, top_level__mercury_compile__EqvMap_56, top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__QualInfo_20, &top_level__mercury_compile__MakeHLDSUndefTypes_63, &top_level__mercury_compile__MakeHLDSUndefModes_64, top_level__mercury_compile__FoundError_24, top_level__mercury_compile__STATE_VARIABLE_Specs_85_85, top_level__mercury_compile__STATE_VARIABLE_Specs_70);
    }
#line 1781 "mercury_compile.m"
    {
#line 1781 "mercury_compile.m"
      top_level__mercury_compile__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_92_92, 0) = ((MR_Box) (top_level__mercury_compile__MakeHLDSUndefTypes_63));
#line 1781 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1781 "mercury_compile.m"
    }
#line 1780 "mercury_compile.m"
    {
#line 1780 "mercury_compile.m"
      top_level__mercury_compile__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_91_91, 0) = ((MR_Box) (top_level__mercury_compile__ExpandErrors_59));
#line 1780 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_91_91, 1) = ((MR_Box) (top_level__mercury_compile__V_92_92));
#line 1780 "mercury_compile.m"
    }
#line 1780 "mercury_compile.m"
    {
#line 1780 "mercury_compile.m"
      top_level__mercury_compile__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_90_90, 0) = ((MR_Box) (top_level__mercury_compile__EventSetErrors_44));
#line 1780 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_90_90, 1) = ((MR_Box) (top_level__mercury_compile__V_91_91));
#line 1780 "mercury_compile.m"
    }
#line 1780 "mercury_compile.m"
    {
#line 1780 "mercury_compile.m"
      top_level__mercury_compile__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_89_89, 0) = ((MR_Box) (top_level__mercury_compile__MQUndefTypes_51));
#line 1780 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_89_89, 1) = ((MR_Box) (top_level__mercury_compile__V_90_90));
#line 1780 "mercury_compile.m"
    }
#line 1780 "mercury_compile.m"
    {
#line 1780 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_89_89, top_level__mercury_compile__UndefTypes_22);
    }
#line 1782 "mercury_compile.m"
    {
#line 1782 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__MakeHLDSUndefModes_64, top_level__mercury_compile__UndefModes_23);
    }
#line 1784 "mercury_compile.m"
    {
#line 1784 "mercury_compile.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile__HLDS0_62, (MR_Integer) 1, (MR_String) "initial", top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68);
    }
#line 1788 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1789 "mercury_compile.m"
      {
#line 1789 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AllDeps_65;
#line 1789 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OutputMMCMakeDeps_66;

#line 1790 "mercury_compile.m"
        {
#line 1790 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__HLDS0_62, &top_level__mercury_compile__AllDeps_65);
        }
#line 1791 "mercury_compile.m"
        {
#line 1791 "mercury_compile.m"
          parse_tree__write_deps_file__write_dependency_file_6_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__AllDeps_65, top_level__mercury_compile__MaybeTransOptDeps_35);
        }
#line 1793 "mercury_compile.m"
        {
#line 1793 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 116, &top_level__mercury_compile__OutputMMCMakeDeps_66);
        }
#line 1798 "mercury_compile.m"
        if ((top_level__mercury_compile__OutputMMCMakeDeps_66 == (MR_Integer) 0))
#line 1799 "mercury_compile.m"
          {
#line 1799 "mercury_compile.m"
          }
#line 1798 "mercury_compile.m"
        else
#line 1797 "mercury_compile.m"
          {
#line 1797 "mercury_compile.m"
            make__make_write_module_dep_file_4_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17);
          }
#line 1789 "mercury_compile.m"
      }
#line 1788 "mercury_compile.m"
    else
#line 1787 "mercury_compile.m"
      {
#line 1787 "mercury_compile.m"
      }
#line 1805 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (*top_level__mercury_compile__FoundError_24 == (MR_Integer) 1);
#line 1806 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1806 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodError_37 == (MR_Integer) 1);
#line 1810 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1809 "mercury_compile.m"
      {
#line 1809 "mercury_compile.m"
        hlds__hlds_module__module_info_incr_errors_2_p_0(top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__HLDS1_19);
#line 1809 "mercury_compile.m"
        return;
      }
#line 1810 "mercury_compile.m"
    else
#line 1811 "mercury_compile.m"
      *top_level__mercury_compile__HLDS1_19 = top_level__mercury_compile__HLDS0_62;
#line 1708 "mercury_compile.m"
  }
#line 1701 "mercury_compile.m"
}

#line 1681 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1681 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1681 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1681 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1681 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1681 "mercury_compile.m"
{
#line 1681 "mercury_compile.m"
  {
#line 1681 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1681 "mercury_compile.m"
    {
#line 1681 "mercury_compile.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 1681 "mercury_compile.m"
      return;
    }
#line 1681 "mercury_compile.m"
  }
#line 1681 "mercury_compile.m"
}

#line 1552 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1552 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1552 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1552 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54)
#line 1552 "mercury_compile.m"
{
#line 1560 "mercury_compile.m"
  {
#line 1560 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_21;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_22;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_23;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HighLevelCode_24;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Target_25;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TargetCodeOnly_26;
#line 1560 "mercury_compile.m"
    MR_String top_level__mercury_compile__UsageFileName_27;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FrontEndErrors_29;
#line 1560 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__NumErrors_30;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1560 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1577 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1561 "mercury_compile.m"
    {
#line 1561 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__Globals_21);
    }
#line 1562 "mercury_compile.m"
    {
#line 1562 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 45, &top_level__mercury_compile__Verbose_22);
    }
#line 1563 "mercury_compile.m"
    {
#line 1563 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 55, &top_level__mercury_compile__Stats_23);
    }
#line 1564 "mercury_compile.m"
    {
#line 1564 "mercury_compile.m"
      top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(top_level__mercury_compile__Verbose_22, top_level__mercury_compile__Stats_23, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59);
    }
#line 1565 "mercury_compile.m"
    {
#line 1565 "mercury_compile.m"
      top_level__mercury_compile_middle_passes__middle_pass_7_p_0(top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62);
    }
#line 1566 "mercury_compile.m"
    {
#line 1566 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 251, &top_level__mercury_compile__HighLevelCode_24);
    }
#line 1567 "mercury_compile.m"
    {
#line 1567 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Target_25);
    }
#line 1568 "mercury_compile.m"
    {
#line 1568 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 98, &top_level__mercury_compile__TargetCodeOnly_26);
    }
#line 1575 "mercury_compile.m"
    {
#line 1575 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".used", (MR_Integer) 1, &top_level__mercury_compile__UsageFileName_27);
    }
#line 1577 "mercury_compile.m"
    {
#line 1577 "mercury_compile.m"
      mercury__io__remove_file_4_p_0(top_level__mercury_compile__UsageFileName_27, &top_level__mercury_compile__V_28_28);
    }
#line 1579 "mercury_compile.m"
    {
#line 1579 "mercury_compile.m"
      top_level__mercury_compile__FrontEndErrors_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__Specs_17);
    }
#line 1580 "mercury_compile.m"
    {
#line 1580 "mercury_compile.m"
      hlds__hlds_module__module_info_get_num_errors_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__NumErrors_30);
    }
#line 1582 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__FrontEndErrors_29 == (MR_Integer) 0);
#line 1582 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1583 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__NumErrors_30 == (MR_Integer) 0);
#line 1686 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1598 "mercury_compile.m"
      {
#line 1598 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Succeeded_37;
#line 1598 "mercury_compile.m"
        MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74;

#line 5790 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__Target_25 == (MR_Integer) 0))
#line 5792 "top_level.mercury_compile.c"
          {
#line 5794 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__ExportDecls_31;

#line 1590 "mercury_compile.m"
            {
#line 1590 "mercury_compile.m"
              backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ExportDecls_31);
            }
#line 1591 "mercury_compile.m"
            {
#line 1591 "mercury_compile.m"
              backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ExportDecls_31, top_level__mercury_compile__ModuleName_15);
            }
#line 1664 "mercury_compile.m"
            if ((top_level__mercury_compile__HighLevelCode_24 == (MR_Integer) 0))
#line 1665 "mercury_compile.m"
              {
#line 1665 "mercury_compile.m"
                MR_Word top_level__mercury_compile__GlobalData_47;
#line 1665 "mercury_compile.m"
                MR_Word top_level__mercury_compile__LLDS_48;

#line 1666 "mercury_compile.m"
                {
#line 1666 "mercury_compile.m"
                  top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, &top_level__mercury_compile__GlobalData_47, &top_level__mercury_compile__LLDS_48, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1667 "mercury_compile.m"
                {
#line 1667 "mercury_compile.m"
                  top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__GlobalData_47, top_level__mercury_compile__LLDS_48, top_level__mercury_compile__ModuleName_15, &top_level__mercury_compile__Succeeded_37, top_level__mercury_compile__ExtraObjFiles_18);
                }
#line 1665 "mercury_compile.m"
              }
#line 1664 "mercury_compile.m"
            else
#line 1642 "mercury_compile.m"
              {
#line 1642 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MLDS_124;
#line 1642 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1643 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_41_41;

#line 1643 "mercury_compile.m"
                {
#line 1643 "mercury_compile.m"
                  top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_41_41, &top_level__mercury_compile__MLDS_124, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1644 "mercury_compile.m"
                {
#line 1644 "mercury_compile.m"
                  top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_124, &top_level__mercury_compile__TargetCodeSucceeded_125);
                }
#line 1646 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_125 == (MR_Integer) 1);
#line 1646 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1647 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1660 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1650 "mercury_compile.m"
                  {
#line 1650 "mercury_compile.m"
                    MR_String top_level__mercury_compile__C_File_42;
#line 1650 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TargetType_43;
#line 1650 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__PIC_44;
#line 1650 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Obj_45;
#line 1650 "mercury_compile.m"
                    MR_String top_level__mercury_compile__O_File_46;
#line 1650 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__OutputStream_122;

#line 1649 "mercury_compile.m"
                    {
#line 1649 "mercury_compile.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile__C_File_42);
                    }
#line 1651 "mercury_compile.m"
                    {
#line 1651 "mercury_compile.m"
                      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__TargetType_43);
                    }
#line 1652 "mercury_compile.m"
                    {
#line 1652 "mercury_compile.m"
                      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__TargetType_43, &top_level__mercury_compile__PIC_44);
                    }
#line 1653 "mercury_compile.m"
                    {
#line 1653 "mercury_compile.m"
                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__PIC_44, &top_level__mercury_compile__Obj_45);
                    }
#line 1654 "mercury_compile.m"
                    {
#line 1654 "mercury_compile.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__Obj_45, (MR_Integer) 0, &top_level__mercury_compile__O_File_46);
                    }
#line 1656 "mercury_compile.m"
                    {
#line 1656 "mercury_compile.m"
                      mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_122);
                    }
#line 1657 "mercury_compile.m"
                    {
#line 1657 "mercury_compile.m"
                      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile__OutputStream_122, top_level__mercury_compile__PIC_44, top_level__mercury_compile__C_File_42, top_level__mercury_compile__O_File_46, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                    }
#line 1659 "mercury_compile.m"
                    {
#line 1659 "mercury_compile.m"
                      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                    }
#line 1650 "mercury_compile.m"
                  }
#line 1660 "mercury_compile.m"
                else
#line 1661 "mercury_compile.m"
                  top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1663 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1663 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1642 "mercury_compile.m"
              }
#line 5924 "top_level.mercury_compile.c"
          }
#line 5926 "top_level.mercury_compile.c"
        else
#line 5928 "top_level.mercury_compile.c"
          if ((top_level__mercury_compile__Target_25 == (MR_Integer) 2))
#line 5930 "top_level.mercury_compile.c"
            {
#line 5932 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__MLDS_116;
#line 1618 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_38_38;

#line 1618 "mercury_compile.m"
              {
#line 1618 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MLDS_116, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
              }
#line 1619 "mercury_compile.m"
              {
#line 1619 "mercury_compile.m"
                top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_116, &top_level__mercury_compile__Succeeded_37);
              }
#line 1620 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1620 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5951 "top_level.mercury_compile.c"
            }
#line 5953 "top_level.mercury_compile.c"
          else
#line 5955 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__Target_25 == (MR_Integer) 4))
#line 5957 "top_level.mercury_compile.c"
              {
#line 5959 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__ELDS_49;

#line 1672 "mercury_compile.m"
                {
#line 1672 "mercury_compile.m"
                  top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ELDS_49, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1673 "mercury_compile.m"
                {
#line 1673 "mercury_compile.m"
                  top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ELDS_49, &top_level__mercury_compile__Succeeded_37);
                }
#line 1674 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1674 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5976 "top_level.mercury_compile.c"
              }
#line 5978 "top_level.mercury_compile.c"
            else
#line 5980 "top_level.mercury_compile.c"
              if ((top_level__mercury_compile__Target_25 == (MR_Integer) 1))
#line 5982 "top_level.mercury_compile.c"
                {
#line 5984 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__MLDS_33;
#line 5986 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1601 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_32_32;

#line 1601 "mercury_compile.m"
                  {
#line 1601 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_32_32, &top_level__mercury_compile__MLDS_33, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                  }
#line 1602 "mercury_compile.m"
                  {
#line 1602 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_33, &top_level__mercury_compile__TargetCodeSucceeded_34);
                  }
#line 1604 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_34 == (MR_Integer) 1);
#line 1604 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1605 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1612 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1607 "mercury_compile.m"
                    {
#line 1607 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__HasMain_35;
#line 1607 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__OutputStream_36;

#line 1607 "mercury_compile.m"
                      {
#line 1607 "mercury_compile.m"
                        top_level__mercury_compile__HasMain_35 = top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(top_level__mercury_compile__MLDS_33);
                      }
#line 1608 "mercury_compile.m"
                      {
#line 1608 "mercury_compile.m"
                        mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_36);
                      }
#line 1609 "mercury_compile.m"
                      {
#line 1609 "mercury_compile.m"
                        backend_libs__compile_target_code__il_assemble_7_p_0(top_level__mercury_compile__OutputStream_36, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__HasMain_35, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                      }
#line 1611 "mercury_compile.m"
                      {
#line 1611 "mercury_compile.m"
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                      }
#line 1607 "mercury_compile.m"
                    }
#line 1612 "mercury_compile.m"
                  else
#line 1613 "mercury_compile.m"
                    top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1615 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1615 "mercury_compile.m"
                  top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6046 "top_level.mercury_compile.c"
                }
#line 6048 "top_level.mercury_compile.c"
              else
#line 6050 "top_level.mercury_compile.c"
                {
#line 6052 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__MLDS_119;
#line 6054 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1623 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_39_39;

#line 1623 "mercury_compile.m"
                  {
#line 1623 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_39_39, &top_level__mercury_compile__MLDS_119, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                  }
#line 1624 "mercury_compile.m"
                  {
#line 1624 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_119, &top_level__mercury_compile__TargetCodeSucceeded_120);
                  }
#line 1626 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_120 == (MR_Integer) 1);
#line 1626 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1627 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1635 "mercury_compile.m"
                  if (top_level__mercury_compile__succeeded)
#line 1629 "mercury_compile.m"
                    {
#line 1629 "mercury_compile.m"
                      MR_String top_level__mercury_compile__JavaFile_40;
#line 1629 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_96_96;
#line 1629 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__OutputStream_117;

#line 1629 "mercury_compile.m"
                      {
#line 1629 "mercury_compile.m"
                        mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_117);
                      }
#line 1630 "mercury_compile.m"
                      {
#line 1630 "mercury_compile.m"
                        parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".java", (MR_Integer) 1, &top_level__mercury_compile__JavaFile_40);
                      }
#line 1632 "mercury_compile.m"
                      {
#line 1632 "mercury_compile.m"
                        top_level__mercury_compile__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1632 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 0) = ((MR_Box) (top_level__mercury_compile__JavaFile_40));
#line 1632 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1632 "mercury_compile.m"
                      }
#line 1632 "mercury_compile.m"
                      {
#line 1632 "mercury_compile.m"
                        backend_libs__compile_target_code__compile_java_files_6_p_0(top_level__mercury_compile__OutputStream_117, top_level__mercury_compile__V_96_96, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                      }
#line 1634 "mercury_compile.m"
                      {
#line 1634 "mercury_compile.m"
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                      }
#line 1629 "mercury_compile.m"
                    }
#line 1635 "mercury_compile.m"
                  else
#line 1636 "mercury_compile.m"
                    top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1638 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1638 "mercury_compile.m"
                  top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6126 "top_level.mercury_compile.c"
                }
#line 1682 "mercury_compile.m"
        if ((top_level__mercury_compile__Succeeded_37 == (MR_Integer) 0))
#line 1683 "mercury_compile.m"
          {
#line 1683 "mercury_compile.m"
          }
#line 1682 "mercury_compile.m"
        else
#line 1677 "mercury_compile.m"
          {
#line 1677 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TimestampFiles_50;
#line 1677 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_111_111;
#line 1680 "mercury_compile.m"
            void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1680 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv2_TimestampFiles_50;
#line 1680 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110;
#line 1681 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56;

#line 1678 "mercury_compile.m"
            {
#line 1678 "mercury_compile.m"
              recompilation__usage__write_usage_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__NestedSubModules_12, top_level__mercury_compile__MaybeTimestamps_14);
            }
#line 1680 "mercury_compile.m"
            top_level__mercury_compile__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FindTimestampFiles_13, (MR_Integer) 1)));
#line 1680 "mercury_compile.m"
            {
#line 1680 "mercury_compile.m"
              top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__FindTimestampFiles_13), ((MR_Box) (top_level__mercury_compile__ModuleName_15)), &top_level__mercury_compile__conv2_TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110);
            }
#line 1680 "mercury_compile.m"
            top_level__mercury_compile__TimestampFiles_50 = ((MR_Word) top_level__mercury_compile__conv2_TimestampFiles_50);
#line 1681 "mercury_compile.m"
            {
#line 1681 "mercury_compile.m"
              top_level__mercury_compile__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1681 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_11[0]));
#line 1681 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 1) = ((MR_Box) (top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1));
#line 1681 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1681 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 3) = ((MR_Box) (top_level__mercury_compile__Globals_21));
#line 1681 "mercury_compile.m"
            }
#line 1681 "mercury_compile.m"
            {
#line 1681 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_111_111, top_level__mercury_compile__TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56);
            }
#line 1677 "mercury_compile.m"
          }
#line 1598 "mercury_compile.m"
      }
#line 1686 "mercury_compile.m"
    else
#line 1689 "mercury_compile.m"
      {
#line 1689 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_51;

#line 1689 "mercury_compile.m"
        {
#line 1689 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_51);
        }
#line 1690 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_51 == (MR_Integer) 0);
#line 1692 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1691 "mercury_compile.m"
          {
#line 1691 "mercury_compile.m"
            {
#line 1691 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1691 "mercury_compile.m"
          }
#line 1692 "mercury_compile.m"
        else
#line 1691 "mercury_compile.m"
          {
#line 1691 "mercury_compile.m"
          }
#line 1695 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1695 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1689 "mercury_compile.m"
      }
#line 1560 "mercury_compile.m"
  }
#line 1552 "mercury_compile.m"
}

#line 1539 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1539 "mercury_compile.m"
{
#line 1539 "mercury_compile.m"
  {
#line 1539 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1539 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1539 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1539 "mercury_compile.m"
    {
#line 1539 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1539 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1539 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1539 "mercury_compile.m"
  }
#line 1539 "mercury_compile.m"
}

#line 1528 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1528 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20)
#line 1528 "mercury_compile.m"
{
#line 1531 "mercury_compile.m"
  {
#line 1531 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_33_33;
#line 1531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleNames_13;
#line 1531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModulesList_14;
#line 1531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SymNames_15;
#line 1531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModuleNames_16;
#line 1531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo0_17;
#line 1531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo_18;

#line 1532 "mercury_compile.m"
    {
#line 1532 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    }
#line 1535 "mercury_compile.m"
    {
#line 1535 "mercury_compile.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__ModuleNames_13);
    }
#line 1537 "mercury_compile.m"
    {
#line 1537 "mercury_compile.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 664, &top_level__mercury_compile__LocalModulesList_14);
    }
#line 6311 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1539 "mercury_compile.m"
    {
#line 1539 "mercury_compile.m"
      top_level__mercury_compile__SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_scalar_common_3[5], top_level__mercury_compile__LocalModulesList_14);
    }
#line 1540 "mercury_compile.m"
    {
#line 1540 "mercury_compile.m"
      top_level__mercury_compile__LocalModuleNames_16 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_33, top_level__mercury_compile__SymNames_15);
    }
#line 1542 "mercury_compile.m"
    {
#line 1542 "mercury_compile.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__AnalysisInfo0_17);
    }
#line 1543 "mercury_compile.m"
    {
#line 1543 "mercury_compile.m"
      analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_13, top_level__mercury_compile__LocalModuleNames_16, top_level__mercury_compile__AnalysisInfo0_17, &top_level__mercury_compile__AnalysisInfo_18);
    }
#line 1545 "mercury_compile.m"
    {
#line 1545 "mercury_compile.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_18, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile__STATE_VARIABLE_HLDS_20);
    }
#line 1547 "mercury_compile.m"
    {
#line 1547 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
    }
#line 1548 "mercury_compile.m"
    {
#line 1548 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1548 "mercury_compile.m"
      return;
    }
#line 1531 "mercury_compile.m"
  }
#line 1528 "mercury_compile.m"
}

#line 1539 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1539 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1539 "mercury_compile.m"
{
#line 1539 "mercury_compile.m"
  {
#line 1539 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1539 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1539 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1539 "mercury_compile.m"
    {
#line 1539 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1539 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1539 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1539 "mercury_compile.m"
  }
#line 1539 "mercury_compile.m"
}

#line 1515 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1515 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1515 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15)
#line 1515 "mercury_compile.m"
{
#line 1518 "mercury_compile.m"
  {
#line 1518 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1518 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_13;

#line 1519 "mercury_compile.m"
    {
#line 1519 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 331, &top_level__mercury_compile__IntermodAnalysis_13);
    }
#line 1524 "mercury_compile.m"
    if ((top_level__mercury_compile__IntermodAnalysis_13 == (MR_Integer) 0))
#line 1525 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14;
#line 1524 "mercury_compile.m"
    else
#line 1531 "mercury_compile.m"
      {
#line 1531 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_33_46;
#line 1531 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleNames_30;
#line 1531 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModulesList_31;
#line 1531 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SymNames_32;
#line 1531 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModuleNames_33;
#line 1531 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo0_34;
#line 1531 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo_35;

#line 1532 "mercury_compile.m"
        {
#line 1532 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
        }
#line 1535 "mercury_compile.m"
        {
#line 1535 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__ModuleNames_30);
        }
#line 1537 "mercury_compile.m"
        {
#line 1537 "mercury_compile.m"
          libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 664, &top_level__mercury_compile__LocalModulesList_31);
        }
#line 6452 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1539 "mercury_compile.m"
        {
#line 1539 "mercury_compile.m"
          top_level__mercury_compile__SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_scalar_common_3[4], top_level__mercury_compile__LocalModulesList_31);
        }
#line 1540 "mercury_compile.m"
        {
#line 1540 "mercury_compile.m"
          top_level__mercury_compile__LocalModuleNames_33 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_46, top_level__mercury_compile__SymNames_32);
        }
#line 1542 "mercury_compile.m"
        {
#line 1542 "mercury_compile.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__AnalysisInfo0_34);
        }
#line 1543 "mercury_compile.m"
        {
#line 1543 "mercury_compile.m"
          analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_30, top_level__mercury_compile__LocalModuleNames_33, top_level__mercury_compile__AnalysisInfo0_34, &top_level__mercury_compile__AnalysisInfo_35);
        }
#line 1545 "mercury_compile.m"
        {
#line 1545 "mercury_compile.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_35, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile__STATE_VARIABLE_HLDS_15);
        }
#line 1547 "mercury_compile.m"
        {
#line 1547 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
        }
#line 1548 "mercury_compile.m"
        {
#line 1548 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1548 "mercury_compile.m"
          return;
        }
#line 1531 "mercury_compile.m"
      }
#line 1518 "mercury_compile.m"
  }
#line 1515 "mercury_compile.m"
}

#line 1428 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1428 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1428 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1428 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1428 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48)
#line 1428 "mercury_compile.m"
{
#line 1435 "mercury_compile.m"
  {
#line 1435 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_20;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCheckOnly_21;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ErrorCheckOnly_22;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_23;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS1_24;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualInfo_25;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamps_26;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefTypes_27;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefModes_28;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors1_29;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors2_30;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS20_31;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_54_54;
#line 1435 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1448 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;

#line 1436 "mercury_compile.m"
    {
#line 1436 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports_13, &top_level__mercury_compile__ModuleName_20);
    }
#line 1439 "mercury_compile.m"
    {
#line 1439 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 96, &top_level__mercury_compile__TypeCheckOnly_21);
    }
#line 1440 "mercury_compile.m"
    {
#line 1440 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 97, &top_level__mercury_compile__ErrorCheckOnly_22);
    }
#line 1441 "mercury_compile.m"
    {
#line 1441 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__TypeCheckOnly_21, top_level__mercury_compile__ErrorCheckOnly_22, &top_level__mercury_compile__DontWriteDFile_23);
    }
#line 1442 "mercury_compile.m"
    {
#line 1442 "mercury_compile.m"
      top_level__mercury_compile__pre_hlds_pass_15_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleAndImports_13, top_level__mercury_compile__DontWriteDFile_23, &top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__QualInfo_25, &top_level__mercury_compile__MaybeTimestamps_26, &top_level__mercury_compile__UndefTypes_27, &top_level__mercury_compile__UndefModes_28, &top_level__mercury_compile__Errors1_29, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_0_47, &top_level__mercury_compile__STATE_VARIABLE_Specs_54_54);
    }
#line 1445 "mercury_compile.m"
    {
#line 1445 "mercury_compile.m"
      top_level__mercury_compile_front_end__frontend_pass_13_p_0(top_level__mercury_compile__QualInfo_25, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, top_level__mercury_compile__Errors1_29, &top_level__mercury_compile__Errors2_30, top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__HLDS20_31, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_Specs_54_54, top_level__mercury_compile__STATE_VARIABLE_Specs_48);
    }
#line 1448 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors1_29 == (MR_Integer) 0);
#line 1448 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1448 "mercury_compile.m"
      {
#line 1449 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors2_30 == (MR_Integer) 0);
#line 1448 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1448 "mercury_compile.m"
          {
#line 1450 "mercury_compile.m"
            {
#line 1450 "mercury_compile.m"
              top_level__mercury_compile__V_59_59 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_12, *top_level__mercury_compile__STATE_VARIABLE_Specs_48);
            }
#line 1450 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_59_59 == (MR_Integer) 0);
#line 1448 "mercury_compile.m"
          }
#line 1448 "mercury_compile.m"
      }
#line 1501 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1452 "mercury_compile.m"
      {
#line 1452 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_32;
#line 1452 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_33;
#line 1452 "mercury_compile.m"
        MR_Word top_level__mercury_compile__HLDS21_34;
#line 1452 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeOptInt_35;
#line 1452 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeTransOptInt_36;
#line 1452 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeAnalysisRegistry_37;
#line 1452 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeXmlDocumentation_38;

#line 1452 "mercury_compile.m"
        {
#line 1452 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 45, &top_level__mercury_compile__Verbose_32);
        }
#line 1453 "mercury_compile.m"
        {
#line 1453 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 55, &top_level__mercury_compile__Stats_33);
        }
#line 1454 "mercury_compile.m"
        {
#line 1454 "mercury_compile.m"
          top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS20_31, &top_level__mercury_compile__HLDS21_34);
        }
#line 1455 "mercury_compile.m"
        {
#line 1455 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 86, &top_level__mercury_compile__MakeOptInt_35);
        }
#line 1457 "mercury_compile.m"
        {
#line 1457 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 87, &top_level__mercury_compile__MakeTransOptInt_36);
        }
#line 1459 "mercury_compile.m"
        {
#line 1459 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 88, &top_level__mercury_compile__MakeAnalysisRegistry_37);
        }
#line 1461 "mercury_compile.m"
        {
#line 1461 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 89, &top_level__mercury_compile__MakeXmlDocumentation_38);
        }
#line 1463 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__TypeCheckOnly_21 == (MR_Integer) 1);
#line 1465 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1464 "mercury_compile.m"
          {
#line 1464 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1464 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1464 "mercury_compile.m"
          }
#line 1465 "mercury_compile.m"
        else
#line 1480 "mercury_compile.m"
          {
#line 1465 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__ErrorCheckOnly_22 == (MR_Integer) 1);
#line 1480 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1468 "mercury_compile.m"
              {
#line 1468 "mercury_compile.m"
                MR_Word top_level__mercury_compile__UnusedArgs_39;

#line 1468 "mercury_compile.m"
                {
#line 1468 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 10, &top_level__mercury_compile__UnusedArgs_39);
                }
#line 1476 "mercury_compile.m"
                if ((top_level__mercury_compile__UnusedArgs_39 == (MR_Integer) 0))
#line 1477 "mercury_compile.m"
                  {
#line 1477 "mercury_compile.m"
                  }
#line 1476 "mercury_compile.m"
                else
#line 1470 "mercury_compile.m"
                  {
#line 1470 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__NoOptUnusedArgsGlobals_40;
#line 1470 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__HLDS21a_41;
#line 1475 "mercury_compile.m"
                    MR_Word top_level__mercury_compile___HLDS22_42;

#line 1471 "mercury_compile.m"
                    {
#line 1471 "mercury_compile.m"
                      libs__globals__set_option_4_p_0((MR_Integer) 350, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals_12, &top_level__mercury_compile__NoOptUnusedArgsGlobals_40);
                    }
#line 1473 "mercury_compile.m"
                    {
#line 1473 "mercury_compile.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile__NoOptUnusedArgsGlobals_40, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS21a_41);
                    }
#line 1475 "mercury_compile.m"
                    {
#line 1475 "mercury_compile.m"
                      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21a_41, &top_level__mercury_compile___HLDS22_42);
                    }
#line 1470 "mercury_compile.m"
                  }
#line 1479 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1479 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1468 "mercury_compile.m"
              }
#line 1480 "mercury_compile.m"
            else
#line 1483 "mercury_compile.m"
              {
#line 1480 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_35 == (MR_Integer) 1);
#line 1483 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1482 "mercury_compile.m"
                  {
#line 1482 "mercury_compile.m"
                    *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1482 "mercury_compile.m"
                    *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1482 "mercury_compile.m"
                  }
#line 1483 "mercury_compile.m"
                else
#line 1486 "mercury_compile.m"
                  {
#line 1483 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_36 == (MR_Integer) 1);
#line 1486 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 1484 "mercury_compile.m"
                      {
#line 1484 "mercury_compile.m"
                        {
#line 1484 "mercury_compile.m"
                          top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(top_level__mercury_compile__HLDS21_34, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                        }
#line 1485 "mercury_compile.m"
                        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1484 "mercury_compile.m"
                      }
#line 1486 "mercury_compile.m"
                    else
#line 1491 "mercury_compile.m"
                      {
#line 1486 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeAnalysisRegistry_37 == (MR_Integer) 1);
#line 1491 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 1488 "mercury_compile.m"
                          {
#line 1488 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__HLDS22_43;

#line 1487 "mercury_compile.m"
                            {
#line 1487 "mercury_compile.m"
                              top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_43);
                            }
#line 1489 "mercury_compile.m"
                            {
#line 1489 "mercury_compile.m"
                              top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(top_level__mercury_compile__HLDS22_43, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                            }
#line 1490 "mercury_compile.m"
                            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1488 "mercury_compile.m"
                          }
#line 1491 "mercury_compile.m"
                        else
#line 1494 "mercury_compile.m"
                          {
#line 1491 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeXmlDocumentation_38 == (MR_Integer) 1);
#line 1494 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 1492 "mercury_compile.m"
                              {
#line 1492 "mercury_compile.m"
                                {
#line 1492 "mercury_compile.m"
                                  check_hlds__xml_documentation__xml_documentation_3_p_0(top_level__mercury_compile__HLDS21_34);
                                }
#line 1493 "mercury_compile.m"
                                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1493 "mercury_compile.m"
                                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1492 "mercury_compile.m"
                              }
#line 1494 "mercury_compile.m"
                            else
#line 1496 "mercury_compile.m"
                              {
#line 1496 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__HLDS22_84;

#line 1495 "mercury_compile.m"
                                {
#line 1495 "mercury_compile.m"
                                  top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_84);
                                }
#line 1497 "mercury_compile.m"
                                {
#line 1497 "mercury_compile.m"
                                  top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(top_level__mercury_compile__NestedSubModules_14, top_level__mercury_compile__FindTimestampFiles_15, top_level__mercury_compile__MaybeTimestamps_26, top_level__mercury_compile__ModuleName_20, top_level__mercury_compile__HLDS22_84, *top_level__mercury_compile__STATE_VARIABLE_Specs_48, top_level__mercury_compile__ExtraObjFiles_16, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
#line 1497 "mercury_compile.m"
                                  return;
                                }
#line 1496 "mercury_compile.m"
                              }
#line 1494 "mercury_compile.m"
                          }
#line 1491 "mercury_compile.m"
                      }
#line 1486 "mercury_compile.m"
                  }
#line 1483 "mercury_compile.m"
              }
#line 1480 "mercury_compile.m"
          }
#line 1452 "mercury_compile.m"
      }
#line 1501 "mercury_compile.m"
    else
#line 1504 "mercury_compile.m"
      {
#line 1504 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_44;

#line 1504 "mercury_compile.m"
        {
#line 1504 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_44);
        }
#line 1505 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_44 == (MR_Integer) 0);
#line 1507 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1506 "mercury_compile.m"
          {
#line 1506 "mercury_compile.m"
            {
#line 1506 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1506 "mercury_compile.m"
          }
#line 1507 "mercury_compile.m"
        else
#line 1506 "mercury_compile.m"
          {
#line 1506 "mercury_compile.m"
          }
#line 1510 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1510 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1504 "mercury_compile.m"
      }
#line 1435 "mercury_compile.m"
  }
#line 1428 "mercury_compile.m"
}

#line 1399 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1399 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1399 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1399 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1399 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34)
#line 1399 "mercury_compile.m"
{
#line 1408 "mercury_compile.m"
  {
#line 1408 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_46_46;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 0)));
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 1)));
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NestedSubModules_26;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Module_27;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ImportedSpecs_29;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_30;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_31;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_37_37;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_40_40;
#line 1408 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_41_41;
#line 1418 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1409 "mercury_compile.m"
    {
#line 1409 "mercury_compile.m"
      parse_tree__modules__check_for_no_exports_7_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Items_22, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1410 "mercury_compile.m"
    {
#line 1410 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__SourceFileModuleName_16);
    }
#line 1412 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1411 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = top_level__mercury_compile__NestedSubModules0_17;
#line 1412 "mercury_compile.m"
    else
#line 1413 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1415 "mercury_compile.m"
    {
#line 1415 "mercury_compile.m"
      parse_tree__modules__grab_imported_modules_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__SourceFileName_15, top_level__mercury_compile__SourceFileModuleName_16, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__HaveReadModuleMap_19, top_level__mercury_compile__MaybeTimestamp_18, top_level__mercury_compile__Items_22, &top_level__mercury_compile__Module_27);
    }
#line 1418 "mercury_compile.m"
    {
#line 1418 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__Module_27, &top_level__mercury_compile__V_28_28, &top_level__mercury_compile__ImportedSpecs_29, &top_level__mercury_compile__Errors_30);
    }
#line 1419 "mercury_compile.m"
    {
#line 1419 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ImportedSpecs_29, top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1420 "mercury_compile.m"
    {
#line 1420 "mercury_compile.m"
      top_level__mercury_compile__V_41_41 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 6987 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1420 "mercury_compile.m"
    {
#line 1420 "mercury_compile.m"
      mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_46_46, top_level__mercury_compile__Errors_30, top_level__mercury_compile__V_41_41, &top_level__mercury_compile__FatalErrors_31);
    }
#line 1421 "mercury_compile.m"
    {
#line 1421 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_46_46, top_level__mercury_compile__FatalErrors_31);
    }
#line 1424 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1422 "mercury_compile.m"
      {
#line 1422 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_32_32;

#line 1422 "mercury_compile.m"
        {
#line 1422 "mercury_compile.m"
          top_level__mercury_compile__mercury_compile_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Module_27, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__FindTimestampFiles_20, top_level__mercury_compile__ExtraObjFiles_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__V_32_32, top_level__mercury_compile__STATE_VARIABLE_Specs_40_40, top_level__mercury_compile__STATE_VARIABLE_Specs_34);
        }
#line 1422 "mercury_compile.m"
      }
#line 1424 "mercury_compile.m"
    else
#line 1425 "mercury_compile.m"
      {
#line 1425 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1425 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_Specs_34 = top_level__mercury_compile__STATE_VARIABLE_Specs_40_40;
#line 1425 "mercury_compile.m"
      }
#line 1408 "mercury_compile.m"
  }
#line 1399 "mercury_compile.m"
}

#line 1374 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1374 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1374 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1374 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1374 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10)
#line 1374 "mercury_compile.m"
{
#line 1378 "mercury_compile.m"
  {
#line 1378 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1378 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1379 "mercury_compile.m"
    {
#line 1379 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TimestampSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1381 "mercury_compile.m"
    {
#line 1381 "mercury_compile.m"
      MR_Word base;
#line 1381 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "mercury_compile.m"
      *top_level__mercury_compile__TimestampFiles_10 = base;
#line 1381 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1381 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "mercury_compile.m"
    }
#line 1378 "mercury_compile.m"
  }
#line 1374 "mercury_compile.m"
}

#line 1372 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1372 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1372 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1372 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1372 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1372 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1372 "mercury_compile.m"
{
#line 1372 "mercury_compile.m"
  {
#line 1372 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1372 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TimestampFiles_10;

#line 1372 "mercury_compile.m"
    {
#line 1372 "mercury_compile.m"
      top_level__mercury_compile__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TimestampFiles_10);
    }
#line 1372 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TimestampFiles_10));
#line 1372 "mercury_compile.m"
  }
#line 1372 "mercury_compile.m"
}

#line 1351 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1351 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1351 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4)
#line 1351 "mercury_compile.m"
{
#line 1354 "mercury_compile.m"
  {
#line 1354 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1354 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1354 "mercury_compile.m"
    MR_String top_level__mercury_compile__TimestampSuffix_6;

#line 1355 "mercury_compile.m"
    {
#line 1355 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1359 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1358 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".c_date";
#line 1359 "mercury_compile.m"
    else
#line 1359 "mercury_compile.m"
      if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1364 "mercury_compile.m"
        top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".cs_date";
#line 1359 "mercury_compile.m"
      else
#line 1359 "mercury_compile.m"
        if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 4))
#line 1370 "mercury_compile.m"
          top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".erl_date";
#line 1359 "mercury_compile.m"
        else
#line 1359 "mercury_compile.m"
          if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1361 "mercury_compile.m"
            top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".il_date";
#line 1359 "mercury_compile.m"
          else
#line 1367 "mercury_compile.m"
            top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".java_date";
#line 1372 "mercury_compile.m"
    {
#line 1372 "mercury_compile.m"
      MR_Word base;
#line 1372 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "mercury_compile.m"
      *top_level__mercury_compile__FindTimestampFiles_4 = base;
#line 1372 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1372 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_timestamp_files_2_p_0_1));
#line 1372 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1372 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1372 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TimestampSuffix_6));
#line 1372 "mercury_compile.m"
    }
#line 1354 "mercury_compile.m"
  }
#line 1351 "mercury_compile.m"
}

#line 1340 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1340 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1340 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1340 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10)
#line 1340 "mercury_compile.m"
{
#line 1345 "mercury_compile.m"
  {
#line 1345 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1345 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1347 "mercury_compile.m"
    {
#line 1347 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TargetSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1349 "mercury_compile.m"
    {
#line 1349 "mercury_compile.m"
      MR_Word base;
#line 1349 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "mercury_compile.m"
      *top_level__mercury_compile__TargetFiles_10 = base;
#line 1349 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1349 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1349 "mercury_compile.m"
    }
#line 1345 "mercury_compile.m"
  }
#line 1340 "mercury_compile.m"
}

#line 1338 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1338 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1338 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1338 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1338 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1338 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1338 "mercury_compile.m"
{
#line 1338 "mercury_compile.m"
  {
#line 1338 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1338 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TargetFiles_10;

#line 1338 "mercury_compile.m"
    {
#line 1338 "mercury_compile.m"
      top_level__mercury_compile__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TargetFiles_10);
    }
#line 1338 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TargetFiles_10));
#line 1338 "mercury_compile.m"
  }
#line 1338 "mercury_compile.m"
}

#line 1327 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1327 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1327 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4)
#line 1327 "mercury_compile.m"
{
#line 1330 "mercury_compile.m"
  {
#line 1330 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1330 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1330 "mercury_compile.m"
    MR_String top_level__mercury_compile__TargetSuffix_6;

#line 1331 "mercury_compile.m"
    {
#line 1331 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1333 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1332 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".c";
#line 1333 "mercury_compile.m"
    else
#line 1333 "mercury_compile.m"
      if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1334 "mercury_compile.m"
        top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".cs";
#line 1333 "mercury_compile.m"
      else
#line 1333 "mercury_compile.m"
        if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 4))
#line 1336 "mercury_compile.m"
          top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".erl";
#line 1333 "mercury_compile.m"
        else
#line 1333 "mercury_compile.m"
          if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1333 "mercury_compile.m"
            top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".il";
#line 1333 "mercury_compile.m"
          else
#line 1335 "mercury_compile.m"
            top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".java";
#line 1338 "mercury_compile.m"
    {
#line 1338 "mercury_compile.m"
      MR_Word base;
#line 1338 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1338 "mercury_compile.m"
      *top_level__mercury_compile__FindTargetFiles_4 = base;
#line 1338 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1338 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1));
#line 1338 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1338 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1338 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TargetSuffix_6));
#line 1338 "mercury_compile.m"
    }
#line 1330 "mercury_compile.m"
  }
#line 1327 "mercury_compile.m"
}

#line 1286 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1286 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1286 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5)
#line 1286 "mercury_compile.m"
{
#line 1288 "mercury_compile.m"
  {
#line 1288 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1288 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1288 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Items_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));

#line 1289 "mercury_compile.m"
    {
#line 1289 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(top_level__mercury_compile__ModuleName_3, top_level__mercury_compile__ModuleToLink_5);
#line 1289 "mercury_compile.m"
      return;
    }
#line 1288 "mercury_compile.m"
  }
#line 1286 "mercury_compile.m"
}

#line 1275 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1275 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_3,
#line 1275 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4)
#line 1275 "mercury_compile.m"
{
#line 1277 "mercury_compile.m"
  {
#line 1277 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_5;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_6_6;

#line 1278 "mercury_compile.m"
    {
#line 1278 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__Errors_4);
    }
#line 1277 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1277 "mercury_compile.m"
      {
#line 1279 "mercury_compile.m"
        {
#line 1279 "mercury_compile.m"
          top_level__mercury_compile__V_6_6 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 1279 "mercury_compile.m"
        {
#line 1279 "mercury_compile.m"
          mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__Errors_4, top_level__mercury_compile__V_6_6, &top_level__mercury_compile__FatalErrors_5);
        }
#line 1281 "mercury_compile.m"
        {
#line 1281 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__FatalErrors_5);
        }
#line 1282 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1283 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_3 == (MR_Integer) 1);
#line 1277 "mercury_compile.m"
      }
#line 1277 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1277 "mercury_compile.m"
  }
#line 1275 "mercury_compile.m"
}

#line 1266 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1266 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1266 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1266 "mercury_compile.m"
{
#line 1271 "mercury_compile.m"
  {
#line 1271 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1271 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1271 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1272 "mercury_compile.m"
    {
#line 1272 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_private_interface_file_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1272 "mercury_compile.m"
      return;
    }
#line 1271 "mercury_compile.m"
  }
#line 1266 "mercury_compile.m"
}

#line 1257 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1257 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1257 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1257 "mercury_compile.m"
{
#line 1262 "mercury_compile.m"
  {
#line 1262 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1262 "mercury_compile.m"
    {
#line 1262 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__HeadVar__5_5);
#line 1262 "mercury_compile.m"
      return;
    }
#line 1262 "mercury_compile.m"
  }
#line 1257 "mercury_compile.m"
}

#line 1248 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1248 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1248 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1248 "mercury_compile.m"
{
#line 1253 "mercury_compile.m"
  {
#line 1253 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1253 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1253 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1254 "mercury_compile.m"
    {
#line 1254 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_interface_file_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1254 "mercury_compile.m"
      return;
    }
#line 1253 "mercury_compile.m"
  }
#line 1248 "mercury_compile.m"
}

#line 1245 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1245 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1245 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1245 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2)
#line 1245 "mercury_compile.m"
{
#line 1245 "mercury_compile.m"
  {
#line 1245 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1245 "mercury_compile.m"
    MR_String top_level__mercury_compile__conv4_ModuleToLink_5;

#line 1245 "mercury_compile.m"
    {
#line 1245 "mercury_compile.m"
      top_level__mercury_compile__module_to_link_2_p_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv4_ModuleToLink_5);
    }
#line 1245 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv4_ModuleToLink_5));
#line 1245 "mercury_compile.m"
  }
#line 1245 "mercury_compile.m"
}

#line 1240 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1240 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1240 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1240 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1240 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1240 "mercury_compile.m"
{
#line 1240 "mercury_compile.m"
  {
#line 1240 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1240 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_ExtraObjFiles_23;
#line 1240 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_34;

#line 1240 "mercury_compile.m"
    {
#line 1240 "mercury_compile.m"
      top_level__mercury_compile__compile_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 9))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv1_ExtraObjFiles_23, ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_34);
    }
#line 1240 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv1_ExtraObjFiles_23));
#line 1240 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_34));
#line 1240 "mercury_compile.m"
  }
#line 1240 "mercury_compile.m"
}

#line 1229 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1229 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1229 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1229 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24)
#line 1229 "mercury_compile.m"
{
#line 1238 "mercury_compile.m"
  {
#line 1238 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1238 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeInfo_45_45;
#line 1238 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_51_51;
#line 1238 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFileLists_26;
#line 1238 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_32_32;
#line 1238 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_33_33;
#line 1239 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33;
#line 1239 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34;
#line 1244 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumWarnings_27;
#line 1244 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumErrors_28;

#line 1240 "mercury_compile.m"
    {
#line 1240 "mercury_compile.m"
      top_level__mercury_compile__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_10[0]));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile__compile_all_submodules_13_p_0_1));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile__Globals_14));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 4) = ((MR_Box) (top_level__mercury_compile__FileName_15));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 5) = ((MR_Box) (top_level__mercury_compile__SourceFileModuleName_16));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 6) = ((MR_Box) (top_level__mercury_compile__NestedSubModules_17));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 7) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_18));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 8) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMap_19));
#line 1240 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 9) = ((MR_Box) (top_level__mercury_compile__FindTimestampFiles_20));
#line 1240 "mercury_compile.m"
    }
#line 7671 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeInfo_45_45 = (MR_Word) &top_level__mercury_compile_scalar_common_3[1];
#line 1239 "mercury_compile.m"
    {
#line 1239 "mercury_compile.m"
      mercury__list__map_foldl2_7_p_2(top_level__mercury_compile__TypeInfo_45_45, (MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_32_32, top_level__mercury_compile__SubModuleList_21, &top_level__mercury_compile__ExtraObjFileLists_26, ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_Specs_0_29)), &top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34);
    }
#line 1239 "mercury_compile.m"
    top_level__mercury_compile__STATE_VARIABLE_Specs_33_33 = ((MR_Word) top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33);
#line 1244 "mercury_compile.m"
    {
#line 1244 "mercury_compile.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile__Globals_14, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_27, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_28);
    }
#line 7685 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1245 "mercury_compile.m"
    {
#line 1245 "mercury_compile.m"
      mercury__list__map_3_p_0(top_level__mercury_compile__TypeInfo_45_45, top_level__mercury_compile__TypeCtorInfo_51_51, (MR_Word) &top_level__mercury_compile_scalar_common_3[3], top_level__mercury_compile__SubModuleList_21, top_level__mercury_compile__ModulesToLink_23);
    }
#line 1246 "mercury_compile.m"
    {
#line 1246 "mercury_compile.m"
      mercury__list__condense_2_p_0(top_level__mercury_compile__TypeCtorInfo_51_51, top_level__mercury_compile__ExtraObjFileLists_26, top_level__mercury_compile__ExtraObjFiles_24);
#line 1246 "mercury_compile.m"
      return;
    }
#line 1238 "mercury_compile.m"
  }
#line 1229 "mercury_compile.m"
}

#line 1177 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1177 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1177 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1177 "mercury_compile.m"
{
#line 1177 "mercury_compile.m"
  {
#line 1177 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1177 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1177 "mercury_compile.m"
    {
#line 1177 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1177__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1177 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1177 "mercury_compile.m"
  }
#line 1177 "mercury_compile.m"
}

#line 1133 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 1133 "mercury_compile.m"
{
#line 1138 "mercury_compile.m"
  {
#line 1138 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInt_18;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInt_19;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_20;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_21;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeAnalysisRegistry_22;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeXmlDocumentation_23;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DirectReport_24;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_26;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 1138 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_28;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamp_29;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_30;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Specs0_31;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_32;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaveReadModuleMap_33;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_34;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_60_60;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_61_61;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_62_62;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_63_63;
#line 1138 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_64_64;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_7_94;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_92;
#line 1277 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_93_93;

#line 1139 "mercury_compile.m"
    {
#line 1139 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 83, &top_level__mercury_compile__MakeShortInt_18);
    }
#line 1141 "mercury_compile.m"
    {
#line 1141 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 84, &top_level__mercury_compile__MakeInt_19);
    }
#line 1143 "mercury_compile.m"
    {
#line 1143 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 86, &top_level__mercury_compile__MakeOptInt_20);
    }
#line 1145 "mercury_compile.m"
    {
#line 1145 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 87, &top_level__mercury_compile__MakeTransOptInt_21);
    }
#line 1147 "mercury_compile.m"
    {
#line 1147 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 88, &top_level__mercury_compile__MakeAnalysisRegistry_22);
    }
#line 1149 "mercury_compile.m"
    {
#line 1149 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 89, &top_level__mercury_compile__MakeXmlDocumentation_23);
    }
#line 1152 "mercury_compile.m"
    {
#line 1152 "mercury_compile.m"
      top_level__mercury_compile__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 0) = ((MR_Box) (top_level__mercury_compile__MakeXmlDocumentation_23));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1152 "mercury_compile.m"
    }
#line 1152 "mercury_compile.m"
    {
#line 1152 "mercury_compile.m"
      top_level__mercury_compile__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 0) = ((MR_Box) (top_level__mercury_compile__MakeAnalysisRegistry_22));
#line 1152 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 1) = ((MR_Box) (top_level__mercury_compile__V_64_64));
#line 1152 "mercury_compile.m"
    }
#line 1151 "mercury_compile.m"
    {
#line 1151 "mercury_compile.m"
      top_level__mercury_compile__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile__MakeTransOptInt_21));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 1) = ((MR_Box) (top_level__mercury_compile__V_63_63));
#line 1151 "mercury_compile.m"
    }
#line 1151 "mercury_compile.m"
    {
#line 1151 "mercury_compile.m"
      top_level__mercury_compile__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 0) = ((MR_Box) (top_level__mercury_compile__MakeOptInt_20));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 1) = ((MR_Box) (top_level__mercury_compile__V_62_62));
#line 1151 "mercury_compile.m"
    }
#line 1151 "mercury_compile.m"
    {
#line 1151 "mercury_compile.m"
      top_level__mercury_compile__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 0) = ((MR_Box) (top_level__mercury_compile__MakeInt_19));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 1) = ((MR_Box) (top_level__mercury_compile__V_61_61));
#line 1151 "mercury_compile.m"
    }
#line 1151 "mercury_compile.m"
    {
#line 1151 "mercury_compile.m"
      top_level__mercury_compile__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 0) = ((MR_Box) (top_level__mercury_compile__MakeShortInt_18));
#line 1151 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 1) = ((MR_Box) (top_level__mercury_compile__V_60_60));
#line 1151 "mercury_compile.m"
    }
#line 1151 "mercury_compile.m"
    {
#line 1151 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_59_59, &top_level__mercury_compile__DirectReport_24);
    }
#line 1155 "mercury_compile.m"
    if ((top_level__mercury_compile__DirectReport_24 == (MR_Integer) 0))
#line 1156 "mercury_compile.m"
      {
#line 1156 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ReportCmdLineArgsDotErr_25;

#line 1157 "mercury_compile.m"
        {
#line 1157 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 54, &top_level__mercury_compile__ReportCmdLineArgsDotErr_25);
        }
#line 1159 "mercury_compile.m"
        {
#line 1159 "mercury_compile.m"
          top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgsDotErr_25, top_level__mercury_compile__OptionArgs_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1156 "mercury_compile.m"
      }
#line 1155 "mercury_compile.m"
    else
#line 1154 "mercury_compile.m"
      {
#line 1154 "mercury_compile.m"
      }
#line 1162 "mercury_compile.m"
    {
#line 1162 "mercury_compile.m"
      top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_10, &top_level__mercury_compile__Globals_26, top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0, &top_level__mercury_compile__ModuleName_27, &top_level__mercury_compile__FileName_28, &top_level__mercury_compile__MaybeTimestamp_29, &top_level__mercury_compile__Items_30, &top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Errors_32, top_level__mercury_compile__HaveReadModuleMap0_14, &top_level__mercury_compile__HaveReadModuleMap_33);
    }
#line 1165 "mercury_compile.m"
    {
#line 1165 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_34);
    }
#line 7936 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_7_94 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1278 "mercury_compile.m"
    {
#line 1278 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_94, top_level__mercury_compile__Errors_32);
    }
#line 1277 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1277 "mercury_compile.m"
      {
#line 1279 "mercury_compile.m"
        {
#line 1279 "mercury_compile.m"
          top_level__mercury_compile__V_93_93 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 1279 "mercury_compile.m"
        {
#line 1279 "mercury_compile.m"
          mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_7_94, top_level__mercury_compile__Errors_32, top_level__mercury_compile__V_93_93, &top_level__mercury_compile__FatalErrors_92);
        }
#line 1281 "mercury_compile.m"
        {
#line 1281 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_94, top_level__mercury_compile__FatalErrors_92);
        }
#line 1282 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1283 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_34 == (MR_Integer) 1);
#line 1277 "mercury_compile.m"
      }
#line 1172 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1169 "mercury_compile.m"
      {
#line 1168 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumWarnings_35;
#line 1168 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumErrors_36;

#line 1168 "mercury_compile.m"
        {
#line 1168 "mercury_compile.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs0_31, top_level__mercury_compile__Globals_26, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_35, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_36);
        }
#line 1170 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1171 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1169 "mercury_compile.m"
      }
#line 1172 "mercury_compile.m"
    else
#line 1174 "mercury_compile.m"
      {
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_86_86;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleList0_37;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs1_38;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleListToCompile_43;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules0_44;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules_45;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FindTimestampFiles_46;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TraceProf_47;
#line 1174 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GlobalsToUse_50;
#line 1195 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_88_88;

#line 1173 "mercury_compile.m"
        {
#line 1173 "mercury_compile.m"
          parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__Items_30, &top_level__mercury_compile__SubModuleList0_37, top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Specs1_38);
        }
#line 1181 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeModulesToRecompile_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "mercury_compile.m"
          top_level__mercury_compile__SubModuleListToCompile_43 = top_level__mercury_compile__SubModuleList0_37;
#line 1181 "mercury_compile.m"
        else
#line 1176 "mercury_compile.m"
          {
#line 1176 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeModulesToRecompile_13, (MR_Integer) 0)));
#line 1176 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ToRecompile_40;

#line 1177 "mercury_compile.m"
            {
#line 1177 "mercury_compile.m"
              top_level__mercury_compile__ToRecompile_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 1177 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 1) = ((MR_Box) (top_level__mercury_compile__process_module_2_9_p_0_1));
#line 1177 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1177 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToRecompile_39));
#line 1177 "mercury_compile.m"
            }
#line 1180 "mercury_compile.m"
            {
#line 1180 "mercury_compile.m"
              mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[1], top_level__mercury_compile__ToRecompile_40, top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__SubModuleListToCompile_43);
            }
#line 1176 "mercury_compile.m"
          }
#line 8052 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1185 "mercury_compile.m"
        {
#line 1185 "mercury_compile.m"
          mercury__assoc_list__keys_2_p_0(top_level__mercury_compile__TypeCtorInfo_86_86, (MR_Word) &top_level__mercury_compile_scalar_common_1[1], top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__NestedSubModules0_44);
        }
#line 1186 "mercury_compile.m"
        {
#line 1186 "mercury_compile.m"
          mercury__list__delete_all_3_p_1(top_level__mercury_compile__TypeCtorInfo_86_86, top_level__mercury_compile__NestedSubModules0_44, ((MR_Box) (top_level__mercury_compile__ModuleName_27)), &top_level__mercury_compile__NestedSubModules_45);
        }
#line 1188 "mercury_compile.m"
        {
#line 1188 "mercury_compile.m"
          top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_26, &top_level__mercury_compile__FindTimestampFiles_46);
        }
#line 1190 "mercury_compile.m"
        {
#line 1190 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 120, &top_level__mercury_compile__TraceProf_47);
        }
#line 1193 "mercury_compile.m"
        {
#line 1193 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(top_level__mercury_compile__ModuleName_27);
        }
#line 1193 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1193 "mercury_compile.m"
          {
#line 1195 "mercury_compile.m"
            {
#line 1195 "mercury_compile.m"
              top_level__mercury_compile__V_88_88 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
            }
#line 1195 "mercury_compile.m"
            {
#line 1195 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__V_88_88);
            }
#line 1195 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1196 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TraceProf_47 == (MR_Integer) 1);
#line 1194 "mercury_compile.m"
            top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1193 "mercury_compile.m"
          }
#line 1209 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1205 "mercury_compile.m"
          {
#line 1205 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GlobalsNoTrace0_48;

#line 1204 "mercury_compile.m"
            {
#line 1204 "mercury_compile.m"
              libs__globals__set_option_4_p_0((MR_Integer) 267, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals_26, &top_level__mercury_compile__GlobalsNoTrace0_48);
            }
#line 1206 "mercury_compile.m"
            {
#line 1206 "mercury_compile.m"
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile__GlobalsNoTrace0_48, &top_level__mercury_compile__GlobalsToUse_50);
            }
#line 1205 "mercury_compile.m"
          }
#line 1209 "mercury_compile.m"
        else
#line 1210 "mercury_compile.m"
          top_level__mercury_compile__GlobalsToUse_50 = top_level__mercury_compile__Globals_26;
#line 1212 "mercury_compile.m"
        {
#line 1212 "mercury_compile.m"
          top_level__mercury_compile__compile_all_submodules_13_p_0(top_level__mercury_compile__GlobalsToUse_50, top_level__mercury_compile__FileName_28, top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__NestedSubModules_45, top_level__mercury_compile__MaybeTimestamp_29, top_level__mercury_compile__HaveReadModuleMap_33, top_level__mercury_compile__FindTimestampFiles_46, top_level__mercury_compile__SubModuleListToCompile_43, top_level__mercury_compile__Specs1_38, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 1212 "mercury_compile.m"
          return;
        }
#line 1174 "mercury_compile.m"
      }
#line 1138 "mercury_compile.m"
  }
#line 1133 "mercury_compile.m"
}

#line 1111 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1111 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1111 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12)
#line 1111 "mercury_compile.m"
{
#line 1120 "mercury_compile.m"
  {
#line 1120 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1120 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_8, (MR_Integer) 1)));
#line 1120 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15;

#line 1120 "mercury_compile.m"
    {
#line 1120 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__ProcessModule_8), ((MR_Box) (top_level__mercury_compile__FileName_9)), ((MR_Box) (top_level__mercury_compile__ModuleName_10)), ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_11)), ((MR_Box) (top_level__mercury_compile__SubModule_12)), ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15);
    }
#line 1120 "mercury_compile.m"
  }
#line 1111 "mercury_compile.m"
}

#line 1038 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1038 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1038 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1038 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1038 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1038 "mercury_compile.m"
{
#line 1038 "mercury_compile.m"
  {
#line 1038 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1038 "mercury_compile.m"
    {
#line 1038 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
#line 1038 "mercury_compile.m"
      return;
    }
#line 1038 "mercury_compile.m"
  }
#line 1038 "mercury_compile.m"
}

#line 1019 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1019 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1019 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1019 "mercury_compile.m"
{
#line 1019 "mercury_compile.m"
  {
#line 1019 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1019 "mercury_compile.m"
    {
#line 1019 "mercury_compile.m"
      top_level__mercury_compile__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1019 "mercury_compile.m"
      return;
    }
#line 1019 "mercury_compile.m"
  }
#line 1019 "mercury_compile.m"
}

#line 1016 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1016 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1016 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1016 "mercury_compile.m"
{
#line 1016 "mercury_compile.m"
  {
#line 1016 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1016 "mercury_compile.m"
    {
#line 1016 "mercury_compile.m"
      top_level__mercury_compile__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1016 "mercury_compile.m"
      return;
    }
#line 1016 "mercury_compile.m"
  }
#line 1016 "mercury_compile.m"
}

#line 1012 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1012 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1012 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1012 "mercury_compile.m"
{
#line 1012 "mercury_compile.m"
  {
#line 1012 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1012 "mercury_compile.m"
    {
#line 1012 "mercury_compile.m"
      top_level__mercury_compile__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1012 "mercury_compile.m"
      return;
    }
#line 1012 "mercury_compile.m"
  }
#line 1012 "mercury_compile.m"
}

#line 995 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 995 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 995 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 995 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 995 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 995 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12)
#line 995 "mercury_compile.m"
{
#line 999 "mercury_compile.m"
  {
#line 999 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 999 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_14;
#line 999 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInterface_15;
#line 999 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInterface_16;
#line 999 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakePrivateInterface_17;
#line 999 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ConvertToMercury_18;
#line 999 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateVersionNumbers_19;
#line 1044 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProcessModule_20;
#line 1044 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReturnTimestamp_21;

#line 1000 "mercury_compile.m"
    {
#line 1000 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_14);
    }
#line 1001 "mercury_compile.m"
    {
#line 1001 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 84, &top_level__mercury_compile__MakeInterface_15);
    }
#line 1002 "mercury_compile.m"
    {
#line 1002 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 83, &top_level__mercury_compile__MakeShortInterface_16);
    }
#line 1004 "mercury_compile.m"
    {
#line 1004 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 85, &top_level__mercury_compile__MakePrivateInterface_17);
    }
#line 1006 "mercury_compile.m"
    {
#line 1006 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 95, &top_level__mercury_compile__ConvertToMercury_18);
    }
#line 1008 "mercury_compile.m"
    {
#line 1008 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 115, &top_level__mercury_compile__GenerateVersionNumbers_19);
    }
#line 1011 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeInterface_15 == (MR_Integer) 1);
#line 1015 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1012 "mercury_compile.m"
      {
#line 1012 "mercury_compile.m"
        {
#line 1012 "mercury_compile.m"
          top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1012 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_1));
#line 1012 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1012 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1012 "mercury_compile.m"
        }
#line 1013 "mercury_compile.m"
        {
#line 1013 "mercury_compile.m"
          top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
        }
#line 1012 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_TRUE;
#line 1012 "mercury_compile.m"
      }
#line 1015 "mercury_compile.m"
    else
#line 1018 "mercury_compile.m"
      {
#line 1015 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeShortInterface_16 == (MR_Integer) 1);
#line 1018 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1016 "mercury_compile.m"
          {
#line 1016 "mercury_compile.m"
            {
#line 1016 "mercury_compile.m"
              top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1016 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_2));
#line 1016 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1016 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1016 "mercury_compile.m"
            }
#line 1017 "mercury_compile.m"
            top_level__mercury_compile__ReturnTimestamp_21 = (MR_Integer) 1;
#line 1016 "mercury_compile.m"
            top_level__mercury_compile__succeeded = MR_TRUE;
#line 1016 "mercury_compile.m"
          }
#line 1018 "mercury_compile.m"
        else
#line 1022 "mercury_compile.m"
          {
#line 1018 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakePrivateInterface_17 == (MR_Integer) 1);
#line 1022 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1022 "mercury_compile.m"
              {
#line 1019 "mercury_compile.m"
                {
#line 1019 "mercury_compile.m"
                  top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1019 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_3));
#line 1019 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1019 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1019 "mercury_compile.m"
                }
#line 1020 "mercury_compile.m"
                {
#line 1020 "mercury_compile.m"
                  top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
                }
#line 1020 "mercury_compile.m"
                top_level__mercury_compile__succeeded = MR_TRUE;
#line 1022 "mercury_compile.m"
              }
#line 1022 "mercury_compile.m"
          }
#line 1018 "mercury_compile.m"
      }
#line 1044 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1028 "mercury_compile.m"
      {
#line 1028 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Globals_22;
#line 1028 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_23;
#line 1028 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_24;
#line 1028 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestamp_25;
#line 1028 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Items_26;
#line 1028 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs0_27;
#line 1028 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Errors_28;
#line 1028 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_53_53;
#line 1026 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_29_29;

#line 1028 "mercury_compile.m"
        {
#line 1028 "mercury_compile.m"
          top_level__mercury_compile__V_53_53 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
        }
#line 1026 "mercury_compile.m"
        {
#line 1026 "mercury_compile.m"
          top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_22, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ReturnTimestamp_21, &top_level__mercury_compile__ModuleName_23, &top_level__mercury_compile__FileName_24, &top_level__mercury_compile__MaybeTimestamp_25, &top_level__mercury_compile__Items_26, &top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Errors_28, top_level__mercury_compile__V_53_53, &top_level__mercury_compile__V_29_29);
        }
#line 1029 "mercury_compile.m"
        {
#line 1029 "mercury_compile.m"
          top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Errors_28);
        }
#line 1031 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1029 "mercury_compile.m"
          {
#line 1029 "mercury_compile.m"
          }
#line 1031 "mercury_compile.m"
        else
#line 1033 "mercury_compile.m"
          {
#line 1033 "mercury_compile.m"
            MR_Word top_level__mercury_compile__SubModuleList_30;
#line 1033 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_31;
#line 1033 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_58_58;
#line 1035 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_32;
#line 1035 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_33;
#line 1037 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46;

#line 1032 "mercury_compile.m"
            {
#line 1032 "mercury_compile.m"
              parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_23, top_level__mercury_compile__Items_26, &top_level__mercury_compile__SubModuleList_30, top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Specs_31);
            }
#line 1035 "mercury_compile.m"
            {
#line 1035 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_31, top_level__mercury_compile__Globals_22, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_32, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_33);
            }
#line 1038 "mercury_compile.m"
            {
#line 1038 "mercury_compile.m"
              top_level__mercury_compile__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[1]));
#line 1038 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_4));
#line 1038 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1038 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_20));
#line 1038 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 4) = ((MR_Box) (top_level__mercury_compile__FileName_24));
#line 1038 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_23));
#line 1038 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_25));
#line 1038 "mercury_compile.m"
            }
#line 1037 "mercury_compile.m"
            {
#line 1037 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &top_level__mercury_compile_scalar_common_3[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_58_58, top_level__mercury_compile__SubModuleList_30, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46);
            }
#line 1033 "mercury_compile.m"
          }
#line 1042 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1043 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1028 "mercury_compile.m"
      }
#line 1044 "mercury_compile.m"
    else
#line 1061 "mercury_compile.m"
      {
#line 1045 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ConvertToMercury_18 == (MR_Integer) 1);
#line 1061 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1049 "mercury_compile.m"
          {
#line 1049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_61_61;
#line 1049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_80;
#line 1049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_81;
#line 1049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Items_82;
#line 1049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Errors_83;
#line 1049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_84;
#line 1047 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_34_34;
#line 1047 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_35_35;
#line 1047 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_36_36;
#line 1051 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_78;
#line 1051 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_79;

#line 1049 "mercury_compile.m"
            {
#line 1049 "mercury_compile.m"
              top_level__mercury_compile__V_61_61 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
            }
#line 1047 "mercury_compile.m"
            {
#line 1047 "mercury_compile.m"
              top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_80, top_level__mercury_compile__FileOrModule_10, (MR_Integer) 1, &top_level__mercury_compile__ModuleName_81, &top_level__mercury_compile__V_34_34, &top_level__mercury_compile__V_35_35, &top_level__mercury_compile__Items_82, &top_level__mercury_compile__Specs_84, &top_level__mercury_compile__Errors_83, top_level__mercury_compile__V_61_61, &top_level__mercury_compile__V_36_36);
            }
#line 1051 "mercury_compile.m"
            {
#line 1051 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_84, top_level__mercury_compile__Globals_80, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_78, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_79);
            }
#line 1052 "mercury_compile.m"
            {
#line 1052 "mercury_compile.m"
              top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Errors_83);
            }
#line 1054 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1052 "mercury_compile.m"
              {
#line 1052 "mercury_compile.m"
              }
#line 1054 "mercury_compile.m"
            else
#line 1056 "mercury_compile.m"
              {
#line 1056 "mercury_compile.m"
                MR_String top_level__mercury_compile__OutputFileName_37;

#line 1055 "mercury_compile.m"
                {
#line 1055 "mercury_compile.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, (MR_String) ".ugly", (MR_Integer) 0, &top_level__mercury_compile__OutputFileName_37);
                }
#line 1057 "mercury_compile.m"
                {
#line 1057 "mercury_compile.m"
                  parse_tree__mercury_to_mercury__convert_to_mercury_6_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, top_level__mercury_compile__OutputFileName_37, top_level__mercury_compile__Items_82);
                }
#line 1056 "mercury_compile.m"
              }
#line 1059 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1060 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "mercury_compile.m"
          }
#line 1061 "mercury_compile.m"
        else
#line 1062 "mercury_compile.m"
          {
#line 1062 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart0_38;
#line 1062 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_39;
#line 1062 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_43;
#line 1062 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMap_44;
#line 1062 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_93;
#line 1098 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_76_76;

#line 1062 "mercury_compile.m"
            {
#line 1062 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 114, &top_level__mercury_compile__Smart0_38);
            }
#line 1063 "mercury_compile.m"
            {
#line 1063 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_39);
            }
#line 8687 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__DisableSmart_39 == (MR_Integer) 0))
#line 8689 "top_level.mercury_compile.c"
              {
#line 1071 "mercury_compile.m"
                top_level__mercury_compile__Globals_93 = top_level__mercury_compile__Globals0_8;
#line 1093 "mercury_compile.m"
                if ((top_level__mercury_compile__Smart0_38 == (MR_Integer) 0))
#line 1094 "mercury_compile.m"
                  {
#line 1095 "mercury_compile.m"
                    {
#line 1095 "mercury_compile.m"
                      mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1096 "mercury_compile.m"
                    top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1094 "mercury_compile.m"
                  }
#line 1093 "mercury_compile.m"
                else
#line 1075 "mercury_compile.m"
                  {
#line 1075 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTargetFiles_41;
#line 1075 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTimestampFiles_42;
#line 1075 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_89;

#line 1078 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 1079 "mercury_compile.m"
                      {
#line 1079 "mercury_compile.m"
                        MR_String top_level__mercury_compile__FileName_87 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 1086 "mercury_compile.m"
                        {
#line 1086 "mercury_compile.m"
                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_87, &top_level__mercury_compile__ModuleName_89);
                        }
#line 1079 "mercury_compile.m"
                      }
#line 1078 "mercury_compile.m"
                    else
#line 1077 "mercury_compile.m"
                      top_level__mercury_compile__ModuleName_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));
#line 1088 "mercury_compile.m"
                    {
#line 1088 "mercury_compile.m"
                      top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTargetFiles_41);
                    }
#line 1089 "mercury_compile.m"
                    {
#line 1089 "mercury_compile.m"
                      top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTimestampFiles_42);
                    }
#line 1090 "mercury_compile.m"
                    {
#line 1090 "mercury_compile.m"
                      recompilation__check__should_recompile_8_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__ModuleName_89, top_level__mercury_compile__FindTargetFiles_41, top_level__mercury_compile__FindTimestampFiles_42, &top_level__mercury_compile__ModulesToRecompile_43, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1075 "mercury_compile.m"
                  }
#line 8752 "top_level.mercury_compile.c"
              }
#line 8754 "top_level.mercury_compile.c"
            else
#line 8756 "top_level.mercury_compile.c"
              {
#line 1066 "mercury_compile.m"
                {
#line 1066 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 114, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_93);
                }
#line 1095 "mercury_compile.m"
                {
#line 1095 "mercury_compile.m"
                  mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                }
#line 1096 "mercury_compile.m"
                top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8770 "top_level.mercury_compile.c"
              }
#line 1098 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToRecompile_43)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1098 "mercury_compile.m"
              {
#line 1098 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToRecompile_43, (MR_Integer) 0)));
#line 1098 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1098 "mercury_compile.m"
              }
#line 1104 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1102 "mercury_compile.m"
              {
#line 1102 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1103 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1102 "mercury_compile.m"
              }
#line 1104 "mercury_compile.m"
            else
#line 1105 "mercury_compile.m"
              {
#line 1105 "mercury_compile.m"
                top_level__mercury_compile__process_module_2_9_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ModulesToRecompile_43, top_level__mercury_compile__HaveReadModuleMap_44, top_level__mercury_compile__ModulesToLink_11, top_level__mercury_compile__ExtraObjFiles_12);
#line 1105 "mercury_compile.m"
                return;
              }
#line 1062 "mercury_compile.m"
          }
#line 1061 "mercury_compile.m"
      }
#line 999 "mercury_compile.m"
  }
#line 995 "mercury_compile.m"
}

#line 990 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 990 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1)
#line 990 "mercury_compile.m"
{
#line 992 "mercury_compile.m"
  {
#line 992 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 992 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HeadVar__2_2;

#line 992 "mercury_compile.m"
    if ((top_level__mercury_compile__HeadVar__1_1 == (MR_Integer) 0))
#line 992 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 1;
#line 992 "mercury_compile.m"
    else
#line 993 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 0;
#line 992 "mercury_compile.m"
    return top_level__mercury_compile__HeadVar__2_2;
#line 992 "mercury_compile.m"
  }
#line 990 "mercury_compile.m"
}

#line 857 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 857 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 857 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 857 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43)
#line 857 "mercury_compile.m"
{
#line 868 "mercury_compile.m"
  {
#line 868 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 868 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
#line 910 "mercury_compile.m"
      {
#line 910 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 910 "mercury_compile.m"
        MR_Word top_level__mercury_compile__DefaultModuleName_37;
#line 910 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_136;
#line 910 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_142;
#line 933 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_131;
#line 933 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_132;
#line 933 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_133;
#line 933 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_134;
#line 920 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_38_38;

#line 911 "mercury_compile.m"
        {
#line 911 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 45, &top_level__mercury_compile__Verbose_136);
        }
#line 912 "mercury_compile.m"
        {
#line 912 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, (MR_String) "% Parsing file \140");
        }
#line 913 "mercury_compile.m"
        {
#line 913 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, top_level__mercury_compile__FileName_36);
        }
#line 914 "mercury_compile.m"
        {
#line 914 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, (MR_String) "\' and imported interfaces...\n");
        }
#line 916 "mercury_compile.m"
        {
#line 916 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_36, &top_level__mercury_compile__DefaultModuleName_37);
        }
#line 920 "mercury_compile.m"
        {
#line 920 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__DefaultModuleName_37, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_131, &top_level__mercury_compile__SpecsPrime_132, &top_level__mercury_compile__ErrorsPrime_133, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MaybeTimestampPrime_134);
        }
#line 933 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 926 "mercury_compile.m"
          {
#line 926 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_53_53;

#line 926 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 928 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_19 = top_level__mercury_compile__DefaultModuleName_37;
#line 927 "mercury_compile.m"
            {
#line 927 "mercury_compile.m"
              top_level__mercury_compile__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 927 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 1) = ((MR_Box) ((MR_String) ".m"));
#line 927 "mercury_compile.m"
            }
#line 927 "mercury_compile.m"
            {
#line 927 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_53_53)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 929 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_131;
#line 930 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_132;
#line 931 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_133;
#line 932 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_134;
#line 926 "mercury_compile.m"
          }
#line 933 "mercury_compile.m"
        else
#line 939 "mercury_compile.m"
          {
#line 939 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart_39;
#line 939 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_130;

#line 937 "mercury_compile.m"
            {
#line 937 "mercury_compile.m"
              parse_tree__read_modules__read_module_from_file_13_p_0(top_level__mercury_compile__Globals0_15, top_level__mercury_compile__FileName_36, (MR_String) ".m", (MR_String) "Reading file", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24, top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 940 "mercury_compile.m"
            {
#line 940 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_130);
            }
#line 945 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_130 == (MR_Integer) 0))
#line 947 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 945 "mercury_compile.m"
            else
#line 942 "mercury_compile.m"
              {
#line 943 "mercury_compile.m"
                {
#line 943 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 114, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 942 "mercury_compile.m"
              }
#line 956 "mercury_compile.m"
            {
#line 956 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 114, &top_level__mercury_compile__Smart_39);
            }
#line 958 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Smart_39 == (MR_Integer) 1);
#line 958 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 958 "mercury_compile.m"
              {
#line 959 "mercury_compile.m"
                {
#line 959 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__DefaultModuleName_37);
                }
#line 959 "mercury_compile.m"
                top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 958 "mercury_compile.m"
              }
#line 981 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 964 "mercury_compile.m"
              {
#line 964 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Warn_40;

#line 963 "mercury_compile.m"
                {
#line 963 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 23, &top_level__mercury_compile__Warn_40);
                }
#line 977 "mercury_compile.m"
                if ((top_level__mercury_compile__Warn_40 == (MR_Integer) 0))
#line 978 "mercury_compile.m"
                  {
#line 978 "mercury_compile.m"
                  }
#line 977 "mercury_compile.m"
                else
#line 966 "mercury_compile.m"
                  {
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Pieces_41;
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_68_68;
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_71_71;
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_73_73;
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_74_74;
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_75_75;
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_78_78;
#line 966 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_79_79;

#line 970 "mercury_compile.m"
                    {
#line 970 "mercury_compile.m"
                      top_level__mercury_compile__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_74_74, 0) = ((MR_Box) (top_level__mercury_compile__FileName_36));
#line 970 "mercury_compile.m"
                    }
#line 971 "mercury_compile.m"
                    {
#line 971 "mercury_compile.m"
                      top_level__mercury_compile__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 971 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 1) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 971 "mercury_compile.m"
                    }
#line 971 "mercury_compile.m"
                    {
#line 971 "mercury_compile.m"
                      top_level__mercury_compile__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile__V_79_79));
#line 971 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[14])));
#line 971 "mercury_compile.m"
                    }
#line 970 "mercury_compile.m"
                    {
#line 970 "mercury_compile.m"
                      top_level__mercury_compile__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[29])));
#line 970 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 1) = ((MR_Box) (top_level__mercury_compile__V_78_78));
#line 970 "mercury_compile.m"
                    }
#line 970 "mercury_compile.m"
                    {
#line 970 "mercury_compile.m"
                      top_level__mercury_compile__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 0) = ((MR_Box) (top_level__mercury_compile__V_74_74));
#line 970 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 1) = ((MR_Box) (top_level__mercury_compile__V_75_75));
#line 970 "mercury_compile.m"
                    }
#line 969 "mercury_compile.m"
                    {
#line 969 "mercury_compile.m"
                      top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 969 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (top_level__mercury_compile__V_73_73));
#line 969 "mercury_compile.m"
                    }
#line 969 "mercury_compile.m"
                    {
#line 969 "mercury_compile.m"
                      top_level__mercury_compile__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[28])));
#line 969 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 1) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 969 "mercury_compile.m"
                    }
#line 968 "mercury_compile.m"
                    {
#line 968 "mercury_compile.m"
                      top_level__mercury_compile__Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[27])));
#line 968 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 1) = ((MR_Box) (top_level__mercury_compile__V_68_68));
#line 968 "mercury_compile.m"
                    }
#line 975 "mercury_compile.m"
                    {
#line 975 "mercury_compile.m"
                      parse_tree__error_util__write_error_pieces_plain_4_p_0(*top_level__mercury_compile__Globals_16, top_level__mercury_compile__Pieces_41);
                    }
#line 976 "mercury_compile.m"
                    {
#line 976 "mercury_compile.m"
                      libs__compiler_util__record_warning_3_p_0(*top_level__mercury_compile__Globals_16);
                    }
#line 966 "mercury_compile.m"
                  }
#line 980 "mercury_compile.m"
                {
#line 980 "mercury_compile.m"
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
#line 964 "mercury_compile.m"
              }
#line 981 "mercury_compile.m"
            else
#line 980 "mercury_compile.m"
              {
#line 980 "mercury_compile.m"
              }
#line 980 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 939 "mercury_compile.m"
          }
#line 985 "mercury_compile.m"
        {
#line 985 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 56, &top_level__mercury_compile__Stats_142);
        }
#line 986 "mercury_compile.m"
        {
#line 986 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_142);
        }
#line 987 "mercury_compile.m"
        {
#line 987 "mercury_compile.m"
          *top_level__mercury_compile__SourceFileName_20 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__FileName_36, (MR_String) ".m");
        }
#line 910 "mercury_compile.m"
      }
#line 868 "mercury_compile.m"
    else
#line 868 "mercury_compile.m"
      {
#line 868 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_27;
#line 868 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleNameString_28;
#line 868 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_35;
#line 890 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_29;
#line 890 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_30;
#line 890 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_31;
#line 890 "mercury_compile.m"
        MR_String top_level__mercury_compile__SourceFileNamePrime_32;
#line 890 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_33;

#line 868 "mercury_compile.m"
        *top_level__mercury_compile__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 869 "mercury_compile.m"
        {
#line 869 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 45, &top_level__mercury_compile__Verbose_27);
        }
#line 870 "mercury_compile.m"
        {
#line 870 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "% Parsing module \140");
        }
#line 871 "mercury_compile.m"
        {
#line 871 "mercury_compile.m"
          top_level__mercury_compile__ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*top_level__mercury_compile__ModuleName_19);
        }
#line 872 "mercury_compile.m"
        {
#line 872 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, top_level__mercury_compile__ModuleNameString_28);
        }
#line 873 "mercury_compile.m"
        {
#line 873 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "\' and imported interfaces...\n");
        }
#line 877 "mercury_compile.m"
        {
#line 877 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_29, &top_level__mercury_compile__SpecsPrime_30, &top_level__mercury_compile__ErrorsPrime_31, &top_level__mercury_compile__SourceFileNamePrime_32, &top_level__mercury_compile__MaybeTimestampPrime_33);
        }
#line 890 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 883 "mercury_compile.m"
          {
#line 883 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_117_117;

#line 883 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 884 "mercury_compile.m"
            {
#line 884 "mercury_compile.m"
              top_level__mercury_compile__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 884 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_117_117, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 884 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_117_117, 1) = ((MR_Box) ((MR_String) ".m"));
#line 884 "mercury_compile.m"
            }
#line 884 "mercury_compile.m"
            {
#line 884 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_117_117)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 885 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_29;
#line 886 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_30;
#line 887 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_31;
#line 888 "mercury_compile.m"
            *top_level__mercury_compile__SourceFileName_20 = top_level__mercury_compile__SourceFileNamePrime_32;
#line 889 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_33;
#line 883 "mercury_compile.m"
          }
#line 890 "mercury_compile.m"
        else
#line 896 "mercury_compile.m"
          {
#line 896 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_34;

#line 894 "mercury_compile.m"
            {
#line 894 "mercury_compile.m"
              parse_tree__read_modules__read_module_13_p_0(top_level__mercury_compile__Globals0_15, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", (MR_String) "Reading module", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24, top_level__mercury_compile__SourceFileName_20, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 897 "mercury_compile.m"
            {
#line 897 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_34);
            }
#line 902 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_34 == (MR_Integer) 0))
#line 904 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 902 "mercury_compile.m"
            else
#line 899 "mercury_compile.m"
              {
#line 900 "mercury_compile.m"
                {
#line 900 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 114, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 899 "mercury_compile.m"
              }
#line 904 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 896 "mercury_compile.m"
          }
#line 907 "mercury_compile.m"
        {
#line 907 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_35);
        }
#line 908 "mercury_compile.m"
        {
#line 908 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_35);
#line 908 "mercury_compile.m"
          return;
        }
#line 868 "mercury_compile.m"
      }
#line 868 "mercury_compile.m"
  }
#line 857 "mercury_compile.m"
}

#line 782 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 782 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 782 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 782 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 782 "mercury_compile.m"
{
#line 788 "mercury_compile.m"
  {
#line 788 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 788 "mercury_compile.m"
    {
#line 788 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Globals_12, top_level__mercury_compile__HeadVar__5_5, top_level__mercury_compile__HeadVar__7_7);
#line 788 "mercury_compile.m"
      return;
    }
#line 788 "mercury_compile.m"
  }
#line 782 "mercury_compile.m"
}

#line 765 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 765 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 765 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 765 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 765 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 765 "mercury_compile.m"
{
#line 765 "mercury_compile.m"
  {
#line 765 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 765 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_HeadVar__5_5;
#line 765 "mercury_compile.m"
    MR_Tuple top_level__mercury_compile__conv0_HeadVar__7_7;

#line 765 "mercury_compile.m"
    {
#line 765 "mercury_compile.m"
      top_level__mercury_compile__process_arg_build_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile__wrapper_arg_4), &top_level__mercury_compile__conv0_HeadVar__7_7);
    }
#line 765 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv1_HeadVar__5_5));
#line 765 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__7_7));
#line 765 "mercury_compile.m"
  }
#line 765 "mercury_compile.m"
}

#line 752 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 752 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 752 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 752 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 752 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 752 "mercury_compile.m"
{
#line 757 "mercury_compile.m"
  {
#line 757 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 757 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileOrModule_18;
#line 757 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_19;
#line 842 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_43;

#line 839 "mercury_compile.m"
    {
#line 839 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__Arg_14, (MR_String) ".m", &top_level__mercury_compile__FileName_43);
    }
#line 842 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 841 "mercury_compile.m"
      {
#line 841 "mercury_compile.m"
        top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 841 "mercury_compile.m"
        MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__FileName_43));
#line 841 "mercury_compile.m"
      }
#line 842 "mercury_compile.m"
    else
#line 846 "mercury_compile.m"
      {
#line 846 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_44;

#line 846 "mercury_compile.m"
        {
#line 846 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__Arg_14, &top_level__mercury_compile__ModuleName_44);
        }
#line 847 "mercury_compile.m"
        {
#line 847 "mercury_compile.m"
          top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_44));
#line 847 "mercury_compile.m"
        }
#line 846 "mercury_compile.m"
      }
#line 759 "mercury_compile.m"
    {
#line 759 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 625, &top_level__mercury_compile__InvokedByMake_19);
    }
#line 775 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_19 == (MR_Integer) 0))
#line 761 "mercury_compile.m"
      {
#line 761 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTuple_21;
#line 761 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_27_27;
#line 761 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_29_29;
#line 762 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_20_20;

#line 852 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 852 "mercury_compile.m"
          {
#line 852 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 854 "mercury_compile.m"
            {
#line 854 "mercury_compile.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_46, &top_level__mercury_compile__V_27_27);
            }
#line 852 "mercury_compile.m"
          }
#line 852 "mercury_compile.m"
        else
#line 855 "mercury_compile.m"
          top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));
#line 765 "mercury_compile.m"
        {
#line 765 "mercury_compile.m"
          top_level__mercury_compile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[0]));
#line 765 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_9_p_0_1));
#line 765 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 765 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 3) = ((MR_Box) (top_level__mercury_compile__FileOrModule_18));
#line 765 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 4) = ((MR_Box) (top_level__mercury_compile__OptionArgs_13));
#line 765 "mercury_compile.m"
        }
#line 762 "mercury_compile.m"
        {
#line 762 "mercury_compile.m"
          make__util__build_with_module_options_args_12_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_2[0], top_level__mercury_compile__Globals_10, top_level__mercury_compile__V_27_27, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_29_29, &top_level__mercury_compile__V_20_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeTuple_21);
        }
#line 770 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeTuple_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "mercury_compile.m"
          {
#line 772 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "mercury_compile.m"
          }
#line 770 "mercury_compile.m"
        else
#line 768 "mercury_compile.m"
          {
#line 768 "mercury_compile.m"
            MR_Tuple top_level__mercury_compile__Tuple_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTuple_21, (MR_Integer) 0)));

#line 769 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 0)));
#line 769 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 1)));
#line 768 "mercury_compile.m"
          }
#line 761 "mercury_compile.m"
      }
#line 775 "mercury_compile.m"
    else
#line 797 "mercury_compile.m"
      {
#line 797 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDeps_57;

#line 798 "mercury_compile.m"
        {
#line 798 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 92, &top_level__mercury_compile__GenerateDeps_57);
        }
#line 810 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDeps_57 == (MR_Integer) 0))
#line 811 "mercury_compile.m"
          {
#line 811 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GenerateDepFile_60;

#line 812 "mercury_compile.m"
            {
#line 812 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 91, &top_level__mercury_compile__GenerateDepFile_60);
            }
#line 825 "mercury_compile.m"
            if ((top_level__mercury_compile__GenerateDepFile_60 == (MR_Integer) 0))
#line 827 "mercury_compile.m"
              {
#line 827 "mercury_compile.m"
                top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__FileOrModule_18, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 827 "mercury_compile.m"
                return;
              }
#line 825 "mercury_compile.m"
            else
#line 815 "mercury_compile.m"
              {
#line 816 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 817 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 821 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 819 "mercury_compile.m"
                  {
#line 819 "mercury_compile.m"
                    MR_String top_level__mercury_compile__FileName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 820 "mercury_compile.m"
                    {
#line 820 "mercury_compile.m"
                      parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_68);
#line 820 "mercury_compile.m"
                      return;
                    }
#line 819 "mercury_compile.m"
                  }
#line 821 "mercury_compile.m"
                else
#line 822 "mercury_compile.m"
                  {
#line 822 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 823 "mercury_compile.m"
                    {
#line 823 "mercury_compile.m"
                      parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_69);
#line 823 "mercury_compile.m"
                      return;
                    }
#line 822 "mercury_compile.m"
                  }
#line 815 "mercury_compile.m"
              }
#line 811 "mercury_compile.m"
          }
#line 810 "mercury_compile.m"
        else
#line 800 "mercury_compile.m"
          {
#line 801 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 802 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 804 "mercury_compile.m"
              {
#line 804 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 805 "mercury_compile.m"
                {
#line 805 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_58);
#line 805 "mercury_compile.m"
                  return;
                }
#line 804 "mercury_compile.m"
              }
#line 806 "mercury_compile.m"
            else
#line 807 "mercury_compile.m"
              {
#line 807 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 808 "mercury_compile.m"
                {
#line 808 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_59);
#line 808 "mercury_compile.m"
                  return;
                }
#line 807 "mercury_compile.m"
              }
#line 800 "mercury_compile.m"
          }
#line 797 "mercury_compile.m"
      }
#line 757 "mercury_compile.m"
  }
#line 752 "mercury_compile.m"
}

#line 724 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9)
#line 724 "mercury_compile.m"
{
#line 729 "mercury_compile.m"
  while (MR_TRUE)
#line 729 "mercury_compile.m"
    {
#line 729 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 729 "mercury_compile.m"
      {
#line 729 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 729 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "mercury_compile.m"
          {
#line 730 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8;
#line 730 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_7 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_6;
#line 729 "mercury_compile.m"
          }
#line 729 "mercury_compile.m"
        else
#line 732 "mercury_compile.m"
          {
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TypeCtorInfo_53_53;
#line 732 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgModules_34;
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgExtraObjFiles_35;
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_47_47;
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;
#line 732 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_49_49;

#line 733 "mercury_compile.m"
            {
#line 733 "mercury_compile.m"
              top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_1, top_level__mercury_compile__DetectedGradeFlags_2, top_level__mercury_compile__OptionVariables_3, top_level__mercury_compile__OptionArgs_4, top_level__mercury_compile__Arg_29, &top_level__mercury_compile__ArgModules_34, &top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 738 "mercury_compile.m"
            if ((top_level__mercury_compile__Args_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "mercury_compile.m"
              {
#line 739 "mercury_compile.m"
              }
#line 738 "mercury_compile.m"
            else
#line 737 "mercury_compile.m"
              {
#line 737 "mercury_compile.m"
                mercury__gc__garbage_collect_2_p_0();
              }
#line 9765 "top_level.mercury_compile.c"
            top_level__mercury_compile__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 741 "mercury_compile.m"
            {
#line 741 "mercury_compile.m"
              top_level__mercury_compile__V_47_47 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgModules_34);
            }
#line 741 "mercury_compile.m"
            {
#line 741 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_46_46 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Modules_0_6, top_level__mercury_compile__V_47_47);
            }
#line 742 "mercury_compile.m"
            {
#line 742 "mercury_compile.m"
              top_level__mercury_compile__V_49_49 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 742 "mercury_compile.m"
            {
#line 742 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8, top_level__mercury_compile__V_49_49);
            }
#line 743 "mercury_compile.m"
            /* direct tailcall eliminated */
#line 743 "mercury_compile.m"
            {
#line 743 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HeadVar__5__tmp_copy_5 = top_level__mercury_compile__Args_30;
#line 743 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 743 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;

#line 743 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8;
#line 743 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_0_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6;
#line 743 "mercury_compile.m"
              top_level__mercury_compile__HeadVar__5_5 = top_level__mercury_compile__HeadVar__5__tmp_copy_5;
#line 743 "mercury_compile.m"
            }
#line 743 "mercury_compile.m"
            continue;
#line 732 "mercury_compile.m"
          }
#line 729 "mercury_compile.m"
      }
#line 729 "mercury_compile.m"
      break;
#line 729 "mercury_compile.m"
    }
#line 724 "mercury_compile.m"
}

#line 691 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 691 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 691 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 691 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28)
#line 691 "mercury_compile.m"
{
#line 698 "mercury_compile.m"
  while (MR_TRUE)
#line 698 "mercury_compile.m"
    {
#line 698 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 698 "mercury_compile.m"
      {
#line 698 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 698 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FileResult_18;

#line 699 "mercury_compile.m"
        {
#line 699 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25);
        }
#line 701 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 699 "mercury_compile.m"
          {
#line 699 "mercury_compile.m"
          }
#line 701 "mercury_compile.m"
        else
#line 702 "mercury_compile.m"
          {
#line 702 "mercury_compile.m"
            mercury__gc__garbage_collect_2_p_0();
          }
#line 704 "mercury_compile.m"
        {
#line 704 "mercury_compile.m"
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile__FileResult_18);
        }
#line 714 "mercury_compile.m"
        if ((top_level__mercury_compile__FileResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "mercury_compile.m"
          {
#line 715 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 715 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 715 "mercury_compile.m"
          }
#line 714 "mercury_compile.m"
        else
#line 714 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__FileResult_18)) == (MR_mktag((MR_Integer) 2))))
#line 717 "mercury_compile.m"
            {
#line 717 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 717 "mercury_compile.m"
              MR_String top_level__mercury_compile__Msg_24;

#line 718 "mercury_compile.m"
              {
#line 718 "mercury_compile.m"
                mercury__io__error_message_2_p_0(top_level__mercury_compile__Error_23, &top_level__mercury_compile__Msg_24);
              }
#line 719 "mercury_compile.m"
              {
#line 719 "mercury_compile.m"
                mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
              }
#line 720 "mercury_compile.m"
              {
#line 720 "mercury_compile.m"
                mercury__io__write_string_3_p_0(top_level__mercury_compile__Msg_24);
              }
#line 721 "mercury_compile.m"
              {
#line 721 "mercury_compile.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 721 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 721 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 717 "mercury_compile.m"
            }
#line 714 "mercury_compile.m"
          else
#line 706 "mercury_compile.m"
            {
#line 706 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 706 "mercury_compile.m"
              MR_String top_level__mercury_compile__Line_19 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 706 "mercury_compile.m"
              MR_String top_level__mercury_compile__Arg_20;
#line 706 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgModules_21;
#line 706 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgExtraObjFiles_22;
#line 706 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 706 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_40_40;
#line 706 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;
#line 706 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_42_42;

#line 707 "mercury_compile.m"
              {
#line 707 "mercury_compile.m"
                top_level__mercury_compile__Arg_20 = mercury__string__rstrip_1_f_0(top_level__mercury_compile__Line_19);
              }
#line 708 "mercury_compile.m"
              {
#line 708 "mercury_compile.m"
                top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, top_level__mercury_compile__Arg_20, &top_level__mercury_compile__ArgModules_21, &top_level__mercury_compile__ArgExtraObjFiles_22);
              }
#line 9956 "top_level.mercury_compile.c"
              top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 710 "mercury_compile.m"
              {
#line 710 "mercury_compile.m"
                top_level__mercury_compile__V_40_40 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgModules_21);
              }
#line 710 "mercury_compile.m"
              {
#line 710 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_39_39 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25, top_level__mercury_compile__V_40_40);
              }
#line 711 "mercury_compile.m"
              {
#line 711 "mercury_compile.m"
                top_level__mercury_compile__V_42_42 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgExtraObjFiles_22);
              }
#line 711 "mercury_compile.m"
              {
#line 711 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27, top_level__mercury_compile__V_42_42);
              }
#line 712 "mercury_compile.m"
              /* direct tailcall eliminated */
#line 712 "mercury_compile.m"
              {
#line 712 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 712 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;

#line 712 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27;
#line 712 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_0_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25;
#line 712 "mercury_compile.m"
              }
#line 712 "mercury_compile.m"
              continue;
#line 706 "mercury_compile.m"
            }
#line 698 "mercury_compile.m"
      }
#line 698 "mercury_compile.m"
      break;
#line 698 "mercury_compile.m"
    }
#line 691 "mercury_compile.m"
}

#line 584 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 584 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 584 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 584 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 584 "mercury_compile.m"
{
#line 674 "mercury_compile.m"
  {
#line 674 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 674 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_32_43;
#line 674 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_31;
#line 674 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModulesToLinkCord_32;
#line 674 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFilesCord_33;

#line 675 "mercury_compile.m"
    {
#line 675 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 657, &top_level__mercury_compile__FileNamesFromStdin_31);
    }
#line 682 "mercury_compile.m"
    if ((top_level__mercury_compile__FileNamesFromStdin_31 == (MR_Integer) 0))
#line 683 "mercury_compile.m"
      {
#line 683 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_31_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 683 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_35_35;
#line 683 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_36_36;

#line 685 "mercury_compile.m"
        {
#line 685 "mercury_compile.m"
          top_level__mercury_compile__V_35_35 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
        }
#line 686 "mercury_compile.m"
        {
#line 686 "mercury_compile.m"
          top_level__mercury_compile__V_36_36 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
        }
#line 684 "mercury_compile.m"
        {
#line 684 "mercury_compile.m"
          top_level__mercury_compile__process_arg_list_11_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__Args_14, top_level__mercury_compile__V_35_35, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_36_36, &top_level__mercury_compile__ExtraObjFilesCord_33);
        }
#line 683 "mercury_compile.m"
      }
#line 682 "mercury_compile.m"
    else
#line 678 "mercury_compile.m"
      {
#line 678 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_30_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 678 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_38_38;
#line 678 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_39_39;

#line 680 "mercury_compile.m"
        {
#line 680 "mercury_compile.m"
          top_level__mercury_compile__V_38_38 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
        }
#line 681 "mercury_compile.m"
        {
#line 681 "mercury_compile.m"
          top_level__mercury_compile__V_39_39 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
        }
#line 679 "mercury_compile.m"
        {
#line 679 "mercury_compile.m"
          top_level__mercury_compile__process_stdin_arg_list_10_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__V_38_38, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_39_39, &top_level__mercury_compile__ExtraObjFilesCord_33);
        }
#line 678 "mercury_compile.m"
      }
#line 10099 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_32_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 688 "mercury_compile.m"
    {
#line 688 "mercury_compile.m"
      *top_level__mercury_compile__ModulesToLink_15 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ModulesToLinkCord_32);
    }
#line 689 "mercury_compile.m"
    {
#line 689 "mercury_compile.m"
      *top_level__mercury_compile__ExtraObjFiles_16 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ExtraObjFilesCord_33);
    }
#line 674 "mercury_compile.m"
  }
#line 584 "mercury_compile.m"
}

#line 568 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 568 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 568 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 568 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8)
#line 568 "mercury_compile.m"
{
#line 573 "mercury_compile.m"
  {
#line 573 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 573 "mercury_compile.m"
    if ((top_level__mercury_compile__Report_6 == (MR_Integer) 0))
#line 573 "mercury_compile.m"
      {
#line 573 "mercury_compile.m"
      }
#line 573 "mercury_compile.m"
    else
#line 575 "mercury_compile.m"
      {
#line 575 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_19_19;
#line 575 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_21_21;
#line 575 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_31_31;

#line 576 "mercury_compile.m"
        {
#line 576 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
        }
#line 577 "mercury_compile.m"
        {
#line 577 "mercury_compile.m"
          top_level__mercury_compile__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__OptionArgs_7, top_level__mercury_compile__Args_8);
        }
#line 577 "mercury_compile.m"
        {
#line 577 "mercury_compile.m"
          top_level__mercury_compile__V_19_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", top_level__mercury_compile__V_21_21);
        }
#line 577 "mercury_compile.m"
        {
#line 577 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 577 "mercury_compile.m"
        {
#line 577 "mercury_compile.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_5[3], top_level__mercury_compile__V_19_19, &top_level__mercury_compile__V_31_31);
        }
#line 577 "mercury_compile.m"
        {
#line 577 "mercury_compile.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_31_31);
        }
#line 577 "mercury_compile.m"
        {
#line 577 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 579 "mercury_compile.m"
        {
#line 579 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
#line 579 "mercury_compile.m"
          return;
        }
#line 575 "mercury_compile.m"
      }
#line 573 "mercury_compile.m"
  }
#line 568 "mercury_compile.m"
}

#line 531 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0_2(
#line 531 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 531 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 531 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 531 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 531 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 531 "mercury_compile.m"
{
#line 531 "mercury_compile.m"
  {
#line 531 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 531 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_4;

#line 531 "mercury_compile.m"
    {
#line 531 "mercury_compile.m"
      backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_HeadVar__4_4);
    }
#line 531 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_4));
#line 531 "mercury_compile.m"
  }
#line 531 "mercury_compile.m"
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

#line 352 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_8_p_0(
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_9,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_13,
#line 352 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14)
#line 352 "mercury_compile.m"
{
#line 357 "mercury_compile.m"
  {
#line 357 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Version_16;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Help_17;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateMapping_18;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGrade_19;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLinkCommand_20;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputShLibLinkCommand_21;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_22;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibGrades_23;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCC_24;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCCType_25;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCFlags_26;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCSCType_27;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibraryLinkFlags_28;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGradeDefines_29;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCInclDirFlags_30;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputTargetArch_31;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputClassDir_32;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Make_33;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateStandaloneInt_34;
#line 357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReportCmdLineArgs_35;

#line 358 "mercury_compile.m"
    {
#line 358 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 661, &top_level__mercury_compile__Version_16);
    }
#line 359 "mercury_compile.m"
    {
#line 359 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 660, &top_level__mercury_compile__Help_17);
    }
#line 360 "mercury_compile.m"
    {
#line 360 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 90, &top_level__mercury_compile__GenerateMapping_18);
    }
#line 362 "mercury_compile.m"
    {
#line 362 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 101, &top_level__mercury_compile__OutputGrade_19);
    }
#line 364 "mercury_compile.m"
    {
#line 364 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 102, &top_level__mercury_compile__OutputLinkCommand_20);
    }
#line 366 "mercury_compile.m"
    {
#line 366 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 103, &top_level__mercury_compile__OutputShLibLinkCommand_21);
    }
#line 368 "mercury_compile.m"
    {
#line 368 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 657, &top_level__mercury_compile__FileNamesFromStdin_22);
    }
#line 370 "mercury_compile.m"
    {
#line 370 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 104, &top_level__mercury_compile__OutputLibGrades_23);
    }
#line 372 "mercury_compile.m"
    {
#line 372 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 105, &top_level__mercury_compile__OutputCC_24);
    }
#line 373 "mercury_compile.m"
    {
#line 373 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 106, &top_level__mercury_compile__OutputCCType_25);
    }
#line 374 "mercury_compile.m"
    {
#line 374 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 108, &top_level__mercury_compile__OutputCFlags_26);
    }
#line 375 "mercury_compile.m"
    {
#line 375 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 107, &top_level__mercury_compile__OutputCSCType_27);
    }
#line 377 "mercury_compile.m"
    {
#line 377 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 109, &top_level__mercury_compile__OutputLibraryLinkFlags_28);
    }
#line 379 "mercury_compile.m"
    {
#line 379 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 110, &top_level__mercury_compile__OutputGradeDefines_29);
    }
#line 381 "mercury_compile.m"
    {
#line 381 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 111, &top_level__mercury_compile__OutputCInclDirFlags_30);
    }
#line 383 "mercury_compile.m"
    {
#line 383 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 112, &top_level__mercury_compile__OutputTargetArch_31);
    }
#line 385 "mercury_compile.m"
    {
#line 385 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 113, &top_level__mercury_compile__OutputClassDir_32);
    }
#line 387 "mercury_compile.m"
    {
#line 387 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 620, &top_level__mercury_compile__Make_33);
    }
#line 388 "mercury_compile.m"
    {
#line 388 "mercury_compile.m"
      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 94, &top_level__mercury_compile__GenerateStandaloneInt_34);
    }
#line 390 "mercury_compile.m"
    {
#line 390 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 53, &top_level__mercury_compile__ReportCmdLineArgs_35);
    }
#line 392 "mercury_compile.m"
    {
#line 392 "mercury_compile.m"
      top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgs_35, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12);
    }
#line 393 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Version_16 == (MR_Integer) 1);
#line 398 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 394 "mercury_compile.m"
      {
#line 394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stdout_36;
#line 394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OldOutputStream_37;
#line 397 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_38_38;

#line 394 "mercury_compile.m"
        {
#line 394 "mercury_compile.m"
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_36);
        }
#line 395 "mercury_compile.m"
        {
#line 395 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_36, &top_level__mercury_compile__OldOutputStream_37);
        }
#line 396 "mercury_compile.m"
        {
#line 396 "mercury_compile.m"
          libs__handle_options__display_compiler_version_2_p_0();
        }
#line 397 "mercury_compile.m"
        {
#line 397 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_37, &top_level__mercury_compile__V_38_38);
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
            MR_Word top_level__mercury_compile__Stdout_204;
#line 399 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldOutputStream_205;
#line 402 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_39_39;

#line 399 "mercury_compile.m"
            {
#line 399 "mercury_compile.m"
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_204);
            }
#line 400 "mercury_compile.m"
            {
#line 400 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_204, &top_level__mercury_compile__OldOutputStream_205);
            }
#line 401 "mercury_compile.m"
            {
#line 401 "mercury_compile.m"
              libs__handle_options__long_usage_2_p_0();
            }
#line 402 "mercury_compile.m"
            {
#line 402 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_205, &top_level__mercury_compile__V_39_39);
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
                MR_String top_level__mercury_compile__Grade_40;
#line 407 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Stdout_206;

#line 407 "mercury_compile.m"
                {
#line 407 "mercury_compile.m"
                  libs__handle_options__grade_directory_component_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Grade_40);
                }
#line 408 "mercury_compile.m"
                {
#line 408 "mercury_compile.m"
                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_206);
                }
#line 409 "mercury_compile.m"
                {
#line 409 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_206, top_level__mercury_compile__Grade_40);
                }
#line 410 "mercury_compile.m"
                {
#line 410 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_206, (MR_String) "\n");
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
                    MR_String top_level__mercury_compile__LinkCommand_41;
#line 413 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Stdout_207;

#line 412 "mercury_compile.m"
                    {
#line 412 "mercury_compile.m"
                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 574, &top_level__mercury_compile__LinkCommand_41);
                    }
#line 414 "mercury_compile.m"
                    {
#line 414 "mercury_compile.m"
                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_207);
                    }
#line 415 "mercury_compile.m"
                    {
#line 415 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_207, top_level__mercury_compile__LinkCommand_41);
                    }
#line 416 "mercury_compile.m"
                    {
#line 416 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_207, (MR_String) "\n");
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
                        MR_Word top_level__mercury_compile__Stdout_208;
#line 419 "mercury_compile.m"
                        MR_String top_level__mercury_compile__LinkCommand_209;

#line 418 "mercury_compile.m"
                        {
#line 418 "mercury_compile.m"
                          libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 575, &top_level__mercury_compile__LinkCommand_209);
                        }
#line 420 "mercury_compile.m"
                        {
#line 420 "mercury_compile.m"
                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_208);
                        }
#line 421 "mercury_compile.m"
                        {
#line 421 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_208, top_level__mercury_compile__LinkCommand_209);
                        }
#line 422 "mercury_compile.m"
                        {
#line 422 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_208, (MR_String) "\n");
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
                            MR_Word top_level__mercury_compile__LibGrades_42;

#line 424 "mercury_compile.m"
                            {
#line 424 "mercury_compile.m"
                              libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 635, &top_level__mercury_compile__LibGrades_42);
                            }
#line 427 "mercury_compile.m"
                            if ((top_level__mercury_compile__LibGrades_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "mercury_compile.m"
                              {
#line 426 "mercury_compile.m"
                              }
#line 427 "mercury_compile.m"
                            else
#line 428 "mercury_compile.m"
                              {
#line 428 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__Stdout_210;

#line 429 "mercury_compile.m"
                                {
#line 429 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_210);
                                }
#line 430 "mercury_compile.m"
                                {
#line 430 "mercury_compile.m"
                                  mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__Stdout_210, top_level__mercury_compile__LibGrades_42, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_scalar_common_3[2]);
                                }
#line 431 "mercury_compile.m"
                                {
#line 431 "mercury_compile.m"
                                  mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_210);
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
                                MR_String top_level__mercury_compile__CC_45;
#line 434 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__StdOut_46;
#line 434 "mercury_compile.m"
                                MR_String top_level__mercury_compile__V_118_118;

#line 434 "mercury_compile.m"
                                {
#line 434 "mercury_compile.m"
                                  libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 485, &top_level__mercury_compile__CC_45);
                                }
#line 435 "mercury_compile.m"
                                {
#line 435 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_46);
                                }
#line 436 "mercury_compile.m"
                                {
#line 436 "mercury_compile.m"
                                  top_level__mercury_compile__V_118_118 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_45, (MR_String) "\n");
                                }
#line 436 "mercury_compile.m"
                                {
#line 436 "mercury_compile.m"
                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_46, top_level__mercury_compile__V_118_118);
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
                                    MR_String top_level__mercury_compile__CC_Type_47;
#line 438 "mercury_compile.m"
                                    MR_String top_level__mercury_compile__V_123_123;
#line 438 "mercury_compile.m"
                                    MR_Word top_level__mercury_compile__StdOut_213;

#line 438 "mercury_compile.m"
                                    {
#line 438 "mercury_compile.m"
                                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 510, &top_level__mercury_compile__CC_Type_47);
                                    }
#line 439 "mercury_compile.m"
                                    {
#line 439 "mercury_compile.m"
                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_213);
                                    }
#line 440 "mercury_compile.m"
                                    {
#line 440 "mercury_compile.m"
                                      top_level__mercury_compile__V_123_123 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_Type_47, (MR_String) "\n");
                                    }
#line 440 "mercury_compile.m"
                                    {
#line 440 "mercury_compile.m"
                                      mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_213, top_level__mercury_compile__V_123_123);
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
                                        MR_Word top_level__mercury_compile__StdOut_214;

#line 442 "mercury_compile.m"
                                        {
#line 442 "mercury_compile.m"
                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_214);
                                        }
#line 443 "mercury_compile.m"
                                        {
#line 443 "mercury_compile.m"
                                          backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_214);
                                        }
#line 444 "mercury_compile.m"
                                        {
#line 444 "mercury_compile.m"
                                          mercury__io__nl_3_p_0(top_level__mercury_compile__StdOut_214);
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
                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCSCType_27 == (MR_Integer) 1);
#line 449 "mercury_compile.m"
                                        if (top_level__mercury_compile__succeeded)
#line 446 "mercury_compile.m"
                                          {
#line 446 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__CSC_Type_48;
#line 446 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__V_131_131;
#line 446 "mercury_compile.m"
                                            MR_Word top_level__mercury_compile__StdOut_215;

#line 446 "mercury_compile.m"
                                            {
#line 446 "mercury_compile.m"
                                              libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 511, &top_level__mercury_compile__CSC_Type_48);
                                            }
#line 447 "mercury_compile.m"
                                            {
#line 447 "mercury_compile.m"
                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_215);
                                            }
#line 448 "mercury_compile.m"
                                            {
#line 448 "mercury_compile.m"
                                              top_level__mercury_compile__V_131_131 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_Type_48, (MR_String) "\n");
                                            }
#line 448 "mercury_compile.m"
                                            {
#line 448 "mercury_compile.m"
                                              mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_215, top_level__mercury_compile__V_131_131);
#line 448 "mercury_compile.m"
                                              return;
                                            }
#line 446 "mercury_compile.m"
                                          }
#line 449 "mercury_compile.m"
                                        else
#line 452 "mercury_compile.m"
                                          {
#line 449 "mercury_compile.m"
                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLibraryLinkFlags_28 == (MR_Integer) 1);
#line 452 "mercury_compile.m"
                                            if (top_level__mercury_compile__succeeded)
#line 450 "mercury_compile.m"
                                              {
#line 450 "mercury_compile.m"
                                                MR_Word top_level__mercury_compile__StdOut_216;

#line 450 "mercury_compile.m"
                                                {
#line 450 "mercury_compile.m"
                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_216);
                                                }
#line 451 "mercury_compile.m"
                                                {
#line 451 "mercury_compile.m"
                                                  backend_libs__compile_target_code__output_library_link_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_216);
#line 451 "mercury_compile.m"
                                                  return;
                                                }
#line 450 "mercury_compile.m"
                                              }
#line 452 "mercury_compile.m"
                                            else
#line 455 "mercury_compile.m"
                                              {
#line 452 "mercury_compile.m"
                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputGradeDefines_29 == (MR_Integer) 1);
#line 455 "mercury_compile.m"
                                                if (top_level__mercury_compile__succeeded)
#line 453 "mercury_compile.m"
                                                  {
#line 453 "mercury_compile.m"
                                                    MR_Word top_level__mercury_compile__StdOut_217;

#line 453 "mercury_compile.m"
                                                    {
#line 453 "mercury_compile.m"
                                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_217);
                                                    }
#line 454 "mercury_compile.m"
                                                    {
#line 454 "mercury_compile.m"
                                                      backend_libs__compile_target_code__output_grade_defines_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_217);
#line 454 "mercury_compile.m"
                                                      return;
                                                    }
#line 453 "mercury_compile.m"
                                                  }
#line 455 "mercury_compile.m"
                                                else
#line 458 "mercury_compile.m"
                                                  {
#line 455 "mercury_compile.m"
                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCInclDirFlags_30 == (MR_Integer) 1);
#line 458 "mercury_compile.m"
                                                    if (top_level__mercury_compile__succeeded)
#line 456 "mercury_compile.m"
                                                      {
#line 456 "mercury_compile.m"
                                                        MR_Word top_level__mercury_compile__StdOut_218;

#line 456 "mercury_compile.m"
                                                        {
#line 456 "mercury_compile.m"
                                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_218);
                                                        }
#line 457 "mercury_compile.m"
                                                        {
#line 457 "mercury_compile.m"
                                                          backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_218);
#line 457 "mercury_compile.m"
                                                          return;
                                                        }
#line 456 "mercury_compile.m"
                                                      }
#line 458 "mercury_compile.m"
                                                    else
#line 462 "mercury_compile.m"
                                                      {
#line 458 "mercury_compile.m"
                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputTargetArch_31 == (MR_Integer) 1);
#line 462 "mercury_compile.m"
                                                        if (top_level__mercury_compile__succeeded)
#line 459 "mercury_compile.m"
                                                          {
#line 459 "mercury_compile.m"
                                                            MR_String top_level__mercury_compile__TargetArch_49;
#line 459 "mercury_compile.m"
                                                            MR_String top_level__mercury_compile__V_142_142;
#line 459 "mercury_compile.m"
                                                            MR_Word top_level__mercury_compile__StdOut_219;

#line 459 "mercury_compile.m"
                                                            {
#line 459 "mercury_compile.m"
                                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_219);
                                                            }
#line 460 "mercury_compile.m"
                                                            {
#line 460 "mercury_compile.m"
                                                              libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 662, &top_level__mercury_compile__TargetArch_49);
                                                            }
#line 461 "mercury_compile.m"
                                                            {
#line 461 "mercury_compile.m"
                                                              top_level__mercury_compile__V_142_142 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__TargetArch_49, (MR_String) "\n");
                                                            }
#line 461 "mercury_compile.m"
                                                            {
#line 461 "mercury_compile.m"
                                                              mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_219, top_level__mercury_compile__V_142_142);
#line 461 "mercury_compile.m"
                                                              return;
                                                            }
#line 459 "mercury_compile.m"
                                                          }
#line 462 "mercury_compile.m"
                                                        else
#line 466 "mercury_compile.m"
                                                          {
#line 462 "mercury_compile.m"
                                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputClassDir_32 == (MR_Integer) 1);
#line 466 "mercury_compile.m"
                                                            if (top_level__mercury_compile__succeeded)
#line 463 "mercury_compile.m"
                                                              {
#line 463 "mercury_compile.m"
                                                                MR_String top_level__mercury_compile__ClassName_50;
#line 463 "mercury_compile.m"
                                                                MR_String top_level__mercury_compile__V_146_146;
#line 463 "mercury_compile.m"
                                                                MR_Word top_level__mercury_compile__StdOut_220;

#line 463 "mercury_compile.m"
                                                                {
#line 463 "mercury_compile.m"
                                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_220);
                                                                }
#line 464 "mercury_compile.m"
                                                                {
#line 464 "mercury_compile.m"
                                                                  parse_tree__file_names__get_class_dir_name_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__ClassName_50);
                                                                }
#line 465 "mercury_compile.m"
                                                                {
#line 465 "mercury_compile.m"
                                                                  top_level__mercury_compile__V_146_146 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__ClassName_50, (MR_String) "\n");
                                                                }
#line 465 "mercury_compile.m"
                                                                {
#line 465 "mercury_compile.m"
                                                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_220, top_level__mercury_compile__V_146_146);
#line 465 "mercury_compile.m"
                                                                  return;
                                                                }
#line 463 "mercury_compile.m"
                                                              }
#line 466 "mercury_compile.m"
                                                            else
#line 468 "mercury_compile.m"
                                                              {
#line 466 "mercury_compile.m"
                                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__GenerateMapping_18 == (MR_Integer) 1);
#line 468 "mercury_compile.m"
                                                                if (top_level__mercury_compile__succeeded)
#line 467 "mercury_compile.m"
                                                                  {
#line 467 "mercury_compile.m"
                                                                    parse_tree__source_file_map__write_source_file_map_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Args_12);
#line 467 "mercury_compile.m"
                                                                    return;
                                                                  }
#line 468 "mercury_compile.m"
                                                                else
#line 499 "mercury_compile.m"
                                                                  {
#line 499 "mercury_compile.m"
                                                                    MR_String top_level__mercury_compile__StandaloneIntBasename_51;

#line 468 "mercury_compile.m"
                                                                    top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__GenerateStandaloneInt_34)) == (MR_mktag((MR_Integer) 1)));
#line 468 "mercury_compile.m"
                                                                    if (top_level__mercury_compile__succeeded)
#line 468 "mercury_compile.m"
                                                                      {
#line 468 "mercury_compile.m"
                                                                        top_level__mercury_compile__StandaloneIntBasename_51 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__GenerateStandaloneInt_34, (MR_Integer) 0)));
#line 469 "mercury_compile.m"
                                                                        {
#line 469 "mercury_compile.m"
                                                                          MR_Word top_level__mercury_compile__Target_52;

#line 469 "mercury_compile.m"
                                                                          {
#line 469 "mercury_compile.m"
                                                                            libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Target_52);
                                                                          }
#line 484 "mercury_compile.m"
                                                                          if ((top_level__mercury_compile__Target_52 == (MR_Integer) 0))
#line 497 "mercury_compile.m"
                                                                            {
#line 497 "mercury_compile.m"
                                                                              backend_libs__compile_target_code__make_standalone_interface_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StandaloneIntBasename_51);
#line 497 "mercury_compile.m"
                                                                              return;
                                                                            }
#line 484 "mercury_compile.m"
                                                                          else
#line 484 "mercury_compile.m"
                                                                            if ((top_level__mercury_compile__Target_52 == (MR_Integer) 4))
#line 485 "mercury_compile.m"
                                                                              {
#line 485 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__NYIMsg_54;
#line 485 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_153_153;
#line 485 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_156_156;
#line 485 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_159_159;
#line 485 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_160_160;
#line 485 "mercury_compile.m"
                                                                                MR_String top_level__mercury_compile__V_161_161;

#line 490 "mercury_compile.m"
                                                                                {
#line 490 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_161_161 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_52);
                                                                                }
#line 490 "mercury_compile.m"
                                                                                {
#line 490 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_160_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_160_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 490 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_160_160, 1) = ((MR_Box) (top_level__mercury_compile__V_161_161));
#line 490 "mercury_compile.m"
                                                                                }
#line 490 "mercury_compile.m"
                                                                                {
#line 490 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_159_159, 0) = ((MR_Box) (top_level__mercury_compile__V_160_160));
#line 490 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[24])));
#line 490 "mercury_compile.m"
                                                                                }
#line 489 "mercury_compile.m"
                                                                                {
#line 489 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_156_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[22])));
#line 489 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_156_156, 1) = ((MR_Box) (top_level__mercury_compile__V_159_159));
#line 489 "mercury_compile.m"
                                                                                }
#line 488 "mercury_compile.m"
                                                                                {
#line 488 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_153_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_scalar_common_5[2])));
#line 488 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_153_153, 1) = ((MR_Box) (top_level__mercury_compile__V_156_156));
#line 488 "mercury_compile.m"
                                                                                }
#line 487 "mercury_compile.m"
                                                                                {
#line 487 "mercury_compile.m"
                                                                                  top_level__mercury_compile__NYIMsg_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[21])));
#line 487 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_54, 1) = ((MR_Box) (top_level__mercury_compile__V_153_153));
#line 487 "mercury_compile.m"
                                                                                }
#line 493 "mercury_compile.m"
                                                                                {
#line 493 "mercury_compile.m"
                                                                                  parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__NYIMsg_54);
                                                                                }
#line 494 "mercury_compile.m"
                                                                                {
#line 494 "mercury_compile.m"
                                                                                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 494 "mercury_compile.m"
                                                                                  return;
                                                                                }
#line 485 "mercury_compile.m"
                                                                              }
#line 484 "mercury_compile.m"
                                                                            else
#line 474 "mercury_compile.m"
                                                                              {
#line 474 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__NotRequiredMsg_53;
#line 474 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_171_171;
#line 474 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_174_174;
#line 474 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_177_177;
#line 474 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__V_178_178;
#line 474 "mercury_compile.m"
                                                                                MR_String top_level__mercury_compile__V_179_179;

#line 479 "mercury_compile.m"
                                                                                {
#line 479 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_179_179 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_52);
                                                                                }
#line 479 "mercury_compile.m"
                                                                                {
#line 479 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_178_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_178_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 479 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_178_178, 1) = ((MR_Box) (top_level__mercury_compile__V_179_179));
#line 479 "mercury_compile.m"
                                                                                }
#line 479 "mercury_compile.m"
                                                                                {
#line 479 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_177_177, 0) = ((MR_Box) (top_level__mercury_compile__V_178_178));
#line 479 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[24])));
#line 479 "mercury_compile.m"
                                                                                }
#line 478 "mercury_compile.m"
                                                                                {
#line 478 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_174_174, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[26])));
#line 478 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_174_174, 1) = ((MR_Box) (top_level__mercury_compile__V_177_177));
#line 478 "mercury_compile.m"
                                                                                }
#line 477 "mercury_compile.m"
                                                                                {
#line 477 "mercury_compile.m"
                                                                                  top_level__mercury_compile__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_171_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_scalar_common_5[2])));
#line 477 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_171_171, 1) = ((MR_Box) (top_level__mercury_compile__V_174_174));
#line 477 "mercury_compile.m"
                                                                                }
#line 476 "mercury_compile.m"
                                                                                {
#line 476 "mercury_compile.m"
                                                                                  top_level__mercury_compile__NotRequiredMsg_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[25])));
#line 476 "mercury_compile.m"
                                                                                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_53, 1) = ((MR_Box) (top_level__mercury_compile__V_171_171));
#line 476 "mercury_compile.m"
                                                                                }
#line 482 "mercury_compile.m"
                                                                                {
#line 482 "mercury_compile.m"
                                                                                  parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__NotRequiredMsg_53);
                                                                                }
#line 483 "mercury_compile.m"
                                                                                {
#line 483 "mercury_compile.m"
                                                                                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 483 "mercury_compile.m"
                                                                                  return;
                                                                                }
#line 474 "mercury_compile.m"
                                                                              }
#line 469 "mercury_compile.m"
                                                                        }
#line 468 "mercury_compile.m"
                                                                      }
#line 468 "mercury_compile.m"
                                                                    else
#line 502 "mercury_compile.m"
                                                                      {
#line 499 "mercury_compile.m"
                                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Make_33 == (MR_Integer) 1);
#line 502 "mercury_compile.m"
                                                                        if (top_level__mercury_compile__succeeded)
#line 500 "mercury_compile.m"
                                                                          {
#line 500 "mercury_compile.m"
                                                                            make__make_process_args_7_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12);
#line 500 "mercury_compile.m"
                                                                            return;
                                                                          }
#line 502 "mercury_compile.m"
                                                                        else
#line 504 "mercury_compile.m"
                                                                          {
#line 502 "mercury_compile.m"
                                                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "mercury_compile.m"
                                                                            if (top_level__mercury_compile__succeeded)
#line 502 "mercury_compile.m"
                                                                              top_level__mercury_compile__succeeded = (top_level__mercury_compile__FileNamesFromStdin_22 == (MR_Integer) 0);
#line 504 "mercury_compile.m"
                                                                            if (top_level__mercury_compile__succeeded)
#line 503 "mercury_compile.m"
                                                                              {
#line 503 "mercury_compile.m"
                                                                                libs__handle_options__usage_2_p_0();
#line 503 "mercury_compile.m"
                                                                                return;
                                                                              }
#line 504 "mercury_compile.m"
                                                                            else
#line 506 "mercury_compile.m"
                                                                              {
#line 506 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__ModulesToLink_55;
#line 506 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__ExtraObjFiles_56;
#line 506 "mercury_compile.m"
                                                                                MR_Integer top_level__mercury_compile__ExitStatus_57;
#line 506 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__Statistics_64;

#line 505 "mercury_compile.m"
                                                                                {
#line 505 "mercury_compile.m"
                                                                                  top_level__mercury_compile__process_all_args_9_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12, &top_level__mercury_compile__ModulesToLink_55, &top_level__mercury_compile__ExtraObjFiles_56);
                                                                                }
#line 507 "mercury_compile.m"
                                                                                {
#line 507 "mercury_compile.m"
                                                                                  mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_57);
                                                                                }
#line 508 "mercury_compile.m"
                                                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_57 == (MR_Integer) 0);
#line 538 "mercury_compile.m"
                                                                                if (top_level__mercury_compile__succeeded)
#line 535 "mercury_compile.m"
                                                                                  {
#line 535 "mercury_compile.m"
                                                                                    MR_String top_level__mercury_compile__FirstModule_58;
#line 511 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_59_59;

#line 510 "mercury_compile.m"
                                                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Link_13 == (MR_Integer) 1);
#line 510 "mercury_compile.m"
                                                                                    if (top_level__mercury_compile__succeeded)
#line 510 "mercury_compile.m"
                                                                                      {
#line 511 "mercury_compile.m"
                                                                                        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToLink_55)) == (MR_mktag((MR_Integer) 1)));
#line 511 "mercury_compile.m"
                                                                                        if (top_level__mercury_compile__succeeded)
#line 511 "mercury_compile.m"
                                                                                          {
#line 511 "mercury_compile.m"
                                                                                            top_level__mercury_compile__FirstModule_58 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_55, (MR_Integer) 0)));
#line 511 "mercury_compile.m"
                                                                                            top_level__mercury_compile__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_55, (MR_Integer) 1)));
#line 511 "mercury_compile.m"
                                                                                          }
#line 510 "mercury_compile.m"
                                                                                      }
#line 535 "mercury_compile.m"
                                                                                    if (top_level__mercury_compile__succeeded)
#line 514 "mercury_compile.m"
                                                                                      {
#line 514 "mercury_compile.m"
                                                                                        MR_Word top_level__mercury_compile__MainModuleName_60;
#line 514 "mercury_compile.m"
                                                                                        MR_Word top_level__mercury_compile__Succeeded_61;
#line 514 "mercury_compile.m"
                                                                                        MR_Word top_level__mercury_compile__Target_221;

#line 513 "mercury_compile.m"
                                                                                        {
#line 513 "mercury_compile.m"
                                                                                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FirstModule_58, &top_level__mercury_compile__MainModuleName_60);
                                                                                        }
#line 515 "mercury_compile.m"
                                                                                        {
#line 515 "mercury_compile.m"
                                                                                          libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Target_221);
                                                                                        }
#line 523 "mercury_compile.m"
                                                                                        if ((top_level__mercury_compile__Target_221 == (MR_Integer) 3))
#line 521 "mercury_compile.m"
                                                                                          {
#line 521 "mercury_compile.m"
                                                                                            parse_tree__module_cmds__create_java_shell_script_5_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__MainModuleName_60, &top_level__mercury_compile__Succeeded_61);
                                                                                          }
#line 523 "mercury_compile.m"
                                                                                        else
#line 528 "mercury_compile.m"
                                                                                          {
#line 528 "mercury_compile.m"
                                                                                            MR_Word top_level__mercury_compile__V_191_191;

#line 531 "mercury_compile.m"
                                                                                            {
#line 531 "mercury_compile.m"
                                                                                              top_level__mercury_compile__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_191_191, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[0]));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_191_191, 1) = ((MR_Box) (top_level__mercury_compile__main_after_setup_8_p_0_2));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_191_191, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_191_191, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToLink_55));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_191_191, 4) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_56));
#line 531 "mercury_compile.m"
                                                                                            }
#line 529 "mercury_compile.m"
                                                                                            {
#line 529 "mercury_compile.m"
                                                                                              top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(top_level__mercury_compile__ModulesToLink_55, top_level__mercury_compile__ExtraObjFiles_56, top_level__mercury_compile__Globals_14, top_level__mercury_compile__MainModuleName_60, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__V_191_191, &top_level__mercury_compile__Succeeded_61);
                                                                                            }
#line 528 "mercury_compile.m"
                                                                                          }
#line 534 "mercury_compile.m"
                                                                                        {
#line 534 "mercury_compile.m"
                                                                                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_61);
                                                                                        }
#line 514 "mercury_compile.m"
                                                                                      }
#line 535 "mercury_compile.m"
                                                                                    else
#line 534 "mercury_compile.m"
                                                                                      {
#line 534 "mercury_compile.m"
                                                                                      }
#line 535 "mercury_compile.m"
                                                                                  }
#line 538 "mercury_compile.m"
                                                                                else
#line 544 "mercury_compile.m"
                                                                                  {
#line 544 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__VerboseErrors_62;
#line 544 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__ExtraErrorInfo_63;

#line 543 "mercury_compile.m"
                                                                                    {
#line 543 "mercury_compile.m"
                                                                                      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 47, &top_level__mercury_compile__VerboseErrors_62);
                                                                                    }
#line 545 "mercury_compile.m"
                                                                                    {
#line 545 "mercury_compile.m"
                                                                                      libs__globals__io_get_extra_error_info_3_p_0(&top_level__mercury_compile__ExtraErrorInfo_63);
                                                                                    }
#line 555 "mercury_compile.m"
                                                                                    if ((top_level__mercury_compile__VerboseErrors_62 == (MR_Integer) 0))
#line 552 "mercury_compile.m"
                                                                                      if ((top_level__mercury_compile__ExtraErrorInfo_63 == (MR_Integer) 0))
#line 553 "mercury_compile.m"
                                                                                        {
#line 553 "mercury_compile.m"
                                                                                        }
#line 552 "mercury_compile.m"
                                                                                      else
#line 549 "mercury_compile.m"
                                                                                        {
#line 550 "mercury_compile.m"
                                                                                          {
#line 550 "mercury_compile.m"
                                                                                            mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                                                                                          }
#line 549 "mercury_compile.m"
                                                                                        }
#line 555 "mercury_compile.m"
                                                                                    else
#line 556 "mercury_compile.m"
                                                                                      {
#line 556 "mercury_compile.m"
                                                                                      }
#line 544 "mercury_compile.m"
                                                                                  }
#line 559 "mercury_compile.m"
                                                                                {
#line 559 "mercury_compile.m"
                                                                                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 55, &top_level__mercury_compile__Statistics_64);
                                                                                }
#line 563 "mercury_compile.m"
                                                                                if ((top_level__mercury_compile__Statistics_64 == (MR_Integer) 0))
#line 564 "mercury_compile.m"
                                                                                  {
#line 564 "mercury_compile.m"
                                                                                  }
#line 563 "mercury_compile.m"
                                                                                else
#line 561 "mercury_compile.m"
                                                                                  {
#line 562 "mercury_compile.m"
                                                                                    {
#line 562 "mercury_compile.m"
                                                                                      mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
#line 562 "mercury_compile.m"
                                                                                      return;
                                                                                    }
#line 561 "mercury_compile.m"
                                                                                  }
#line 506 "mercury_compile.m"
                                                                              }
#line 504 "mercury_compile.m"
                                                                          }
#line 502 "mercury_compile.m"
                                                                      }
#line 499 "mercury_compile.m"
                                                                  }
#line 468 "mercury_compile.m"
                                                              }
#line 466 "mercury_compile.m"
                                                          }
#line 462 "mercury_compile.m"
                                                      }
#line 458 "mercury_compile.m"
                                                  }
#line 455 "mercury_compile.m"
                                              }
#line 452 "mercury_compile.m"
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
#line 357 "mercury_compile.m"
  }
#line 352 "mercury_compile.m"
}

#line 204 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__real_main_after_expansion_3_p_0(
#line 204 "mercury_compile.m"
  MR_Word top_level__mercury_compile__CmdLineArgs_4)
#line 204 "mercury_compile.m"
{
#line 11498 "top_level.mercury_compile.c"
  {
#line 11500 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__CmdLineArgs_4)) == (MR_mktag((MR_Integer) 1)));
#line 11502 "top_level.mercury_compile.c"
    MR_String top_level__mercury_compile__ArgFile_6;
#line 11504 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__ExtraArgs_7;
#line 209 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_47_47;
#line 209 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_48_48;

#line 209 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 209 "mercury_compile.m"
      {
#line 209 "mercury_compile.m"
        top_level__mercury_compile__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 0)));
#line 209 "mercury_compile.m"
        top_level__mercury_compile__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__CmdLineArgs_4, (MR_Integer) 1)));
#line 209 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_47_47, (MR_String) "--arg-file") == 0);
#line 209 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 209 "mercury_compile.m"
          {
#line 209 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 209 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 209 "mercury_compile.m"
              {
#line 209 "mercury_compile.m"
                top_level__mercury_compile__ArgFile_6 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_48_48, (MR_Integer) 0)));
#line 209 "mercury_compile.m"
                top_level__mercury_compile__ExtraArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_48_48, (MR_Integer) 1)));
#line 209 "mercury_compile.m"
              }
#line 209 "mercury_compile.m"
          }
#line 209 "mercury_compile.m"
      }
#line 11541 "top_level.mercury_compile.c"
    if (top_level__mercury_compile__succeeded)
#line 11543 "top_level.mercury_compile.c"
      {
#line 11545 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__TypeCtorInfo_79_79;
#line 11547 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DummyGlobals_11;
#line 11549 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeArgs1_12;
#line 11551 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_14;
#line 11553 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_15;
#line 11555 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DetectedGradeFlags_16;
#line 11557 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Variables_17;
#line 11559 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__AllFlags_37;
#line 11561 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Errors_41;
#line 11563 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ActualGlobals_42;
#line 11565 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_73_73;
#line 328 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_38_38;
#line 328 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_39_39;
#line 328 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_40_40;

#line 220 "mercury_compile.m"
        if ((top_level__mercury_compile__ExtraArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "mercury_compile.m"
          {
#line 219 "mercury_compile.m"
          }
#line 220 "mercury_compile.m"
        else
#line 221 "mercury_compile.m"
          {
#line 221 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_51_51;
#line 221 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_53_53;

#line 223 "mercury_compile.m"
            {
#line 223 "mercury_compile.m"
              top_level__mercury_compile__V_53_53 = mercury__string__string_1_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], ((MR_Box) (top_level__mercury_compile__ExtraArgs_7)));
            }
#line 223 "mercury_compile.m"
            {
#line 223 "mercury_compile.m"
              top_level__mercury_compile__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", top_level__mercury_compile__V_53_53);
            }
#line 222 "mercury_compile.m"
            {
#line 222 "mercury_compile.m"
              mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile", (MR_String) "predicate \140top_level.mercury_compile.real_main_after_expansion\'/3", top_level__mercury_compile__V_51_51);
#line 222 "mercury_compile.m"
              return;
            }
#line 221 "mercury_compile.m"
          }
#line 231 "mercury_compile.m"
        {
#line 231 "mercury_compile.m"
          libs__handle_options__generate_default_globals_3_p_0(&top_level__mercury_compile__DummyGlobals_11);
        }
#line 232 "mercury_compile.m"
        {
#line 232 "mercury_compile.m"
          make__options_file__read_args_file_5_p_0(top_level__mercury_compile__DummyGlobals_11, top_level__mercury_compile__ArgFile_6, &top_level__mercury_compile__MaybeArgs1_12);
        }
#line 236 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeArgs1_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "mercury_compile.m"
          {
#line 238 "mercury_compile.m"
            top_level__mercury_compile__OptionArgs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 239 "mercury_compile.m"
            top_level__mercury_compile__NonOptionArgs_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 237 "mercury_compile.m"
          }
#line 236 "mercury_compile.m"
        else
#line 234 "mercury_compile.m"
          {
#line 234 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeArgs1_12, (MR_Integer) 0)));

#line 235 "mercury_compile.m"
            {
#line 235 "mercury_compile.m"
              libs__handle_options__separate_option_args_5_p_0(top_level__mercury_compile__Args1_13, &top_level__mercury_compile__OptionArgs_14, &top_level__mercury_compile__NonOptionArgs_15);
            }
#line 234 "mercury_compile.m"
          }
#line 241 "mercury_compile.m"
        top_level__mercury_compile__DetectedGradeFlags_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "mercury_compile.m"
        {
#line 242 "mercury_compile.m"
          top_level__mercury_compile__Variables_17 = make__options_file__options_variables_init_0_f_0();
        }
#line 11649 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 327 "mercury_compile.m"
        {
#line 327 "mercury_compile.m"
          top_level__mercury_compile__V_73_73 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__OptionArgs_14);
        }
#line 327 "mercury_compile.m"
        {
#line 327 "mercury_compile.m"
          top_level__mercury_compile__AllFlags_37 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_79, top_level__mercury_compile__DetectedGradeFlags_16, top_level__mercury_compile__V_73_73);
        }
#line 328 "mercury_compile.m"
        {
#line 328 "mercury_compile.m"
          libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__AllFlags_37, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__V_39_39, &top_level__mercury_compile__V_40_40, &top_level__mercury_compile__Errors_41, &top_level__mercury_compile__ActualGlobals_42);
        }
#line 335 "mercury_compile.m"
        if ((top_level__mercury_compile__Errors_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "mercury_compile.m"
          {
#line 337 "mercury_compile.m"
            top_level__mercury_compile__main_after_setup_8_p_0(top_level__mercury_compile__DetectedGradeFlags_16, top_level__mercury_compile__Variables_17, top_level__mercury_compile__OptionArgs_14, top_level__mercury_compile__NonOptionArgs_15, (MR_Integer) 0, top_level__mercury_compile__ActualGlobals_42);
#line 337 "mercury_compile.m"
            return;
          }
#line 335 "mercury_compile.m"
        else
#line 334 "mercury_compile.m"
          {
#line 334 "mercury_compile.m"
            libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_41);
#line 334 "mercury_compile.m"
            return;
          }
#line 11684 "top_level.mercury_compile.c"
      }
#line 11686 "top_level.mercury_compile.c"
    else
#line 11688 "top_level.mercury_compile.c"
      {
#line 11690 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ArgsGlobals_20;
#line 11692 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeVariables0_21;
#line 11694 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_59_59;
#line 11696 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Link_103;
#line 11698 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_104;
#line 11700 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_105;
#line 248 "mercury_compile.m"
        MR_Word top_level__mercury_compile___Errors0_19;

#line 248 "mercury_compile.m"
        {
#line 248 "mercury_compile.m"
          libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__CmdLineArgs_4, &top_level__mercury_compile__OptionArgs_104, &top_level__mercury_compile__NonOptionArgs_105, &top_level__mercury_compile__Link_103, &top_level__mercury_compile___Errors0_19, &top_level__mercury_compile__ArgsGlobals_20);
        }
#line 250 "mercury_compile.m"
        {
#line 250 "mercury_compile.m"
          top_level__mercury_compile__V_59_59 = make__options_file__options_variables_init_0_f_0();
        }
#line 250 "mercury_compile.m"
        {
#line 250 "mercury_compile.m"
          make__options_file__read_options_files_5_p_0(top_level__mercury_compile__ArgsGlobals_20, top_level__mercury_compile__V_59_59, &top_level__mercury_compile__MaybeVariables0_21);
        }
#line 11720 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__MaybeVariables0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11722 "top_level.mercury_compile.c"
          {
#line 306 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Variables_107;

#line 306 "mercury_compile.m"
            {
#line 306 "mercury_compile.m"
              top_level__mercury_compile__Variables_107 = make__options_file__options_variables_init_0_f_0();
            }
#line 342 "mercury_compile.m"
            {
#line 342 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 342 "mercury_compile.m"
              return;
            }
#line 11739 "top_level.mercury_compile.c"
          }
#line 11741 "top_level.mercury_compile.c"
        else
#line 11743 "top_level.mercury_compile.c"
          {
#line 11745 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Variables0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables0_21, (MR_Integer) 0)));
#line 11747 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MaybeMCFlags0_23;

#line 254 "mercury_compile.m"
            {
#line 254 "mercury_compile.m"
              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__ArgsGlobals_20, top_level__mercury_compile__Variables0_22, &top_level__mercury_compile__MaybeMCFlags0_23);
            }
#line 11755 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__MaybeMCFlags0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11757 "top_level.mercury_compile.c"
              {
#line 300 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Variables_124;

#line 300 "mercury_compile.m"
                {
#line 300 "mercury_compile.m"
                  top_level__mercury_compile__Variables_124 = make__options_file__options_variables_init_0_f_0();
                }
#line 342 "mercury_compile.m"
                {
#line 342 "mercury_compile.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 342 "mercury_compile.m"
                  return;
                }
#line 11774 "top_level.mercury_compile.c"
              }
#line 11776 "top_level.mercury_compile.c"
            else
#line 11778 "top_level.mercury_compile.c"
              {
#line 11780 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MCFlags0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags0_23, (MR_Integer) 0)));
#line 11782 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsErrors_28;
#line 11784 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsArgsGlobals_29;
#line 11786 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__V_62_62;
#line 11788 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__DetectedGradeFlags_130;
#line 11790 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__Variables_131;
#line 11792 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MaybeMCFlags_132;
#line 260 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_25_25;
#line 260 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_26_26;
#line 260 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_27_27;

#line 260 "mercury_compile.m"
                {
#line 260 "mercury_compile.m"
                  top_level__mercury_compile__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__MCFlags0_24, top_level__mercury_compile__CmdLineArgs_4);
                }
#line 260 "mercury_compile.m"
                {
#line 260 "mercury_compile.m"
                  libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__V_62_62, &top_level__mercury_compile__V_25_25, &top_level__mercury_compile__V_26_26, &top_level__mercury_compile__V_27_27, &top_level__mercury_compile__FlagsErrors_28, &top_level__mercury_compile__FlagsArgsGlobals_29);
                }
#line 268 "mercury_compile.m"
                if ((top_level__mercury_compile__FlagsErrors_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "mercury_compile.m"
                  {
#line 269 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MaybeConfigFile_32;

#line 270 "mercury_compile.m"
                    {
#line 270 "mercury_compile.m"
                      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, (MR_Integer) 641, &top_level__mercury_compile__MaybeConfigFile_32);
                    }
#line 290 "mercury_compile.m"
                    if ((top_level__mercury_compile__MaybeConfigFile_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "mercury_compile.m"
                      {
#line 292 "mercury_compile.m"
                        top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "mercury_compile.m"
                        {
#line 293 "mercury_compile.m"
                          top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                        }
#line 294 "mercury_compile.m"
                        {
#line 294 "mercury_compile.m"
                          make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMCFlags_132);
                        }
#line 291 "mercury_compile.m"
                      }
#line 290 "mercury_compile.m"
                    else
#line 273 "mercury_compile.m"
                      {
#line 273 "mercury_compile.m"
                        MR_String top_level__mercury_compile__ConfigFile_33 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigFile_32, (MR_Integer) 0)));
#line 273 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__MaybeVariables_34;

#line 274 "mercury_compile.m"
                        {
#line 274 "mercury_compile.m"
                          make__options_file__read_options_file_6_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__ConfigFile_33, top_level__mercury_compile__Variables0_22, &top_level__mercury_compile__MaybeVariables_34);
                        }
#line 284 "mercury_compile.m"
                        if ((top_level__mercury_compile__MaybeVariables_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "mercury_compile.m"
                          {
#line 286 "mercury_compile.m"
                            top_level__mercury_compile__MaybeMCFlags_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "mercury_compile.m"
                            top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "mercury_compile.m"
                            {
#line 288 "mercury_compile.m"
                              top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                            }
#line 285 "mercury_compile.m"
                          }
#line 284 "mercury_compile.m"
                        else
#line 277 "mercury_compile.m"
                          {
#line 277 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__MaybeMerStdLibDir_35;

#line 277 "mercury_compile.m"
                            top_level__mercury_compile__Variables_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables_34, (MR_Integer) 0)));
#line 278 "mercury_compile.m"
                            {
#line 278 "mercury_compile.m"
                              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMCFlags_132);
                            }
#line 280 "mercury_compile.m"
                            {
#line 280 "mercury_compile.m"
                              make__options_file__lookup_mercury_stdlib_dir_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__Variables_131, &top_level__mercury_compile__MaybeMerStdLibDir_35);
                            }
#line 282 "mercury_compile.m"
                            {
#line 282 "mercury_compile.m"
                              top_level__mercury_compile__detect_libgrades_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, top_level__mercury_compile__MaybeMerStdLibDir_35, &top_level__mercury_compile__DetectedGradeFlags_130);
                            }
#line 277 "mercury_compile.m"
                          }
#line 273 "mercury_compile.m"
                      }
#line 269 "mercury_compile.m"
                  }
#line 268 "mercury_compile.m"
                else
#line 263 "mercury_compile.m"
                  {
#line 264 "mercury_compile.m"
                    {
#line 264 "mercury_compile.m"
                      libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__FlagsErrors_28);
                    }
#line 265 "mercury_compile.m"
                    top_level__mercury_compile__DetectedGradeFlags_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "mercury_compile.m"
                    {
#line 266 "mercury_compile.m"
                      top_level__mercury_compile__Variables_131 = make__options_file__options_variables_init_0_f_0();
                    }
#line 267 "mercury_compile.m"
                    top_level__mercury_compile__MaybeMCFlags_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 263 "mercury_compile.m"
                  }
#line 340 "mercury_compile.m"
                if ((top_level__mercury_compile__MaybeMCFlags_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "mercury_compile.m"
                  {
#line 342 "mercury_compile.m"
                    {
#line 342 "mercury_compile.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 342 "mercury_compile.m"
                      return;
                    }
#line 341 "mercury_compile.m"
                  }
#line 340 "mercury_compile.m"
                else
#line 312 "mercury_compile.m"
                  {
#line 312 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TypeCtorInfo_79_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 312 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__MCFlags_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags_132, (MR_Integer) 0)));
#line 312 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__AllFlags_84;
#line 312 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Errors_88;
#line 312 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ActualGlobals_89;
#line 312 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_90_90;
#line 328 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_80_80;
#line 328 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_81_81;
#line 328 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_82_82;

#line 327 "mercury_compile.m"
                    {
#line 327 "mercury_compile.m"
                      top_level__mercury_compile__V_90_90 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_92, top_level__mercury_compile__MCFlags_83, top_level__mercury_compile__OptionArgs_104);
                    }
#line 327 "mercury_compile.m"
                    {
#line 327 "mercury_compile.m"
                      top_level__mercury_compile__AllFlags_84 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_79_92, top_level__mercury_compile__DetectedGradeFlags_130, top_level__mercury_compile__V_90_90);
                    }
#line 328 "mercury_compile.m"
                    {
#line 328 "mercury_compile.m"
                      libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__AllFlags_84, &top_level__mercury_compile__V_80_80, &top_level__mercury_compile__V_81_81, &top_level__mercury_compile__V_82_82, &top_level__mercury_compile__Errors_88, &top_level__mercury_compile__ActualGlobals_89);
                    }
#line 335 "mercury_compile.m"
                    if ((top_level__mercury_compile__Errors_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "mercury_compile.m"
                      {
#line 337 "mercury_compile.m"
                        top_level__mercury_compile__main_after_setup_8_p_0(top_level__mercury_compile__DetectedGradeFlags_130, top_level__mercury_compile__Variables_131, top_level__mercury_compile__OptionArgs_104, top_level__mercury_compile__NonOptionArgs_105, top_level__mercury_compile__Link_103, top_level__mercury_compile__ActualGlobals_89);
#line 337 "mercury_compile.m"
                        return;
                      }
#line 335 "mercury_compile.m"
                    else
#line 334 "mercury_compile.m"
                      {
#line 334 "mercury_compile.m"
                        libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_88);
#line 334 "mercury_compile.m"
                        return;
                      }
#line 312 "mercury_compile.m"
                  }
#line 11991 "top_level.mercury_compile.c"
              }
#line 11993 "top_level.mercury_compile.c"
          }
#line 11995 "top_level.mercury_compile.c"
      }
#line 11997 "top_level.mercury_compile.c"
  }
#line 204 "mercury_compile.m"
}

#line 176 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 176 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 176 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6)
#line 176 "mercury_compile.m"
{
#line 179 "mercury_compile.m"
  {
#line 179 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 179 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LineRes_8;

#line 180 "mercury_compile.m"
    {
#line 180 "mercury_compile.m"
      mercury__io__read_line_as_string_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__LineRes_8);
    }
#line 194 "mercury_compile.m"
    if ((top_level__mercury_compile__LineRes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "mercury_compile.m"
      {
#line 196 "mercury_compile.m"
        *top_level__mercury_compile__Res_6 = (MR_Word) &top_level__mercury_compile_scalar_common_5[1];
#line 195 "mercury_compile.m"
      }
#line 194 "mercury_compile.m"
    else
#line 194 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__LineRes_8)) == (MR_mktag((MR_Integer) 2))))
#line 198 "mercury_compile.m"
        {
#line 198 "mercury_compile.m"
          MR_Word top_level__mercury_compile__E_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));

#line 199 "mercury_compile.m"
          {
#line 199 "mercury_compile.m"
            MR_Word base;
#line 199 "mercury_compile.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = base;
#line 199 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__E_14));
#line 199 "mercury_compile.m"
          }
#line 198 "mercury_compile.m"
        }
#line 194 "mercury_compile.m"
      else
#line 182 "mercury_compile.m"
        {
#line 182 "mercury_compile.m"
          MR_String top_level__mercury_compile__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));
#line 182 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res0_10;

#line 183 "mercury_compile.m"
          {
#line 183 "mercury_compile.m"
            top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__Res0_10);
          }
#line 191 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res0_10)) == (MR_mktag((MR_Integer) 1))))
#line 192 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 191 "mercury_compile.m"
          else
#line 184 "mercury_compile.m"
            {
#line 184 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Lines_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res0_10, (MR_Integer) 0)));
#line 184 "mercury_compile.m"
              MR_String top_level__mercury_compile__StrippedLine_12;

#line 185 "mercury_compile.m"
              {
#line 185 "mercury_compile.m"
                top_level__mercury_compile__StrippedLine_12 = mercury__string__strip_1_f_0(top_level__mercury_compile__Line_9);
              }
#line 186 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__StrippedLine_12, (MR_String) "") == 0);
#line 188 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 187 "mercury_compile.m"
                *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 188 "mercury_compile.m"
              else
#line 189 "mercury_compile.m"
                {
#line 189 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_20_20;

#line 189 "mercury_compile.m"
                  {
#line 189 "mercury_compile.m"
                    top_level__mercury_compile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 0) = ((MR_Box) (top_level__mercury_compile__StrippedLine_12));
#line 189 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 1) = ((MR_Box) (top_level__mercury_compile__Lines_11));
#line 189 "mercury_compile.m"
                  }
#line 189 "mercury_compile.m"
                  {
#line 189 "mercury_compile.m"
                    MR_Word base;
#line 189 "mercury_compile.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 189 "mercury_compile.m"
                    *top_level__mercury_compile__Res_6 = base;
#line 189 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_20_20));
#line 189 "mercury_compile.m"
                  }
#line 189 "mercury_compile.m"
                }
#line 184 "mercury_compile.m"
            }
#line 182 "mercury_compile.m"
        }
#line 179 "mercury_compile.m"
  }
#line 176 "mercury_compile.m"
}

#line 136 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 136 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 136 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2)
#line 136 "mercury_compile.m"
{
#line 139 "mercury_compile.m"
  while (MR_TRUE)
#line 139 "mercury_compile.m"
    {
#line 139 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 139 "mercury_compile.m"
      {
#line 139 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 139 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 139 "mercury_compile.m"
          {
#line 139 "mercury_compile.m"
            *top_level__mercury_compile__HeadVar__2_2 = (MR_Word) &top_level__mercury_compile_scalar_common_5[1];
#line 139 "mercury_compile.m"
          }
#line 139 "mercury_compile.m"
        else
#line 140 "mercury_compile.m"
          {
#line 140 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "mercury_compile.m"
            MR_String top_level__mercury_compile__File_13;

#line 141 "mercury_compile.m"
            {
#line 141 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", top_level__mercury_compile__Arg_9, &top_level__mercury_compile__File_13);
            }
#line 156 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 142 "mercury_compile.m"
              {
#line 142 "mercury_compile.m"
                MR_Word top_level__mercury_compile__OpenRes_14;

#line 142 "mercury_compile.m"
                {
#line 142 "mercury_compile.m"
                  mercury__io__open_input_4_p_0(top_level__mercury_compile__File_13, &top_level__mercury_compile__OpenRes_14);
                }
#line 151 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 152 "mercury_compile.m"
                  {
#line 152 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Msg_20;
#line 152 "mercury_compile.m"
                    MR_String top_level__mercury_compile__V_28_28;
#line 152 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_30_30;

#line 153 "mercury_compile.m"
                    {
#line 153 "mercury_compile.m"
                      top_level__mercury_compile__V_28_28 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, (MR_String) "\'");
                    }
#line 153 "mercury_compile.m"
                    {
#line 153 "mercury_compile.m"
                      top_level__mercury_compile__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", top_level__mercury_compile__V_28_28);
                    }
#line 154 "mercury_compile.m"
                    {
#line 154 "mercury_compile.m"
                      top_level__mercury_compile__V_30_30 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__Msg_20);
                    }
#line 154 "mercury_compile.m"
                    {
#line 154 "mercury_compile.m"
                      MR_Word base;
#line 154 "mercury_compile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 154 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 154 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 154 "mercury_compile.m"
                    }
#line 152 "mercury_compile.m"
                  }
#line 151 "mercury_compile.m"
                else
#line 144 "mercury_compile.m"
                  {
#line 144 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__S_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenRes_14, (MR_Integer) 0)));
#line 144 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ReadRes_16;

#line 145 "mercury_compile.m"
                    {
#line 145 "mercury_compile.m"
                      top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_15, &top_level__mercury_compile__ReadRes_16);
                    }
#line 148 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__ReadRes_16)) == (MR_mktag((MR_Integer) 1))))
#line 148 "mercury_compile.m"
                      {
#line 148 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__E_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 148 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_32_32;
#line 148 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_43_43;
#line 148 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_45_45;
#line 148 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_46_46;
#line 148 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_48_48;

#line 171 "mercury_compile.m"
                        {
#line 171 "mercury_compile.m"
                          top_level__mercury_compile__V_48_48 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_18);
                        }
#line 171 "mercury_compile.m"
                        {
#line 171 "mercury_compile.m"
                          top_level__mercury_compile__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", top_level__mercury_compile__V_48_48);
                        }
#line 170 "mercury_compile.m"
                        {
#line 170 "mercury_compile.m"
                          top_level__mercury_compile__V_45_45 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, top_level__mercury_compile__V_46_46);
                        }
#line 170 "mercury_compile.m"
                        {
#line 170 "mercury_compile.m"
                          top_level__mercury_compile__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", top_level__mercury_compile__V_45_45);
                        }
#line 170 "mercury_compile.m"
                        {
#line 170 "mercury_compile.m"
                          top_level__mercury_compile__V_32_32 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__V_43_43);
                        }
#line 149 "mercury_compile.m"
                        {
#line 149 "mercury_compile.m"
                          MR_Word base;
#line 149 "mercury_compile.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 149 "mercury_compile.m"
                          *top_level__mercury_compile__HeadVar__2_2 = base;
#line 149 "mercury_compile.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_32_32));
#line 149 "mercury_compile.m"
                        }
#line 148 "mercury_compile.m"
                      }
#line 148 "mercury_compile.m"
                    else
#line 146 "mercury_compile.m"
                      {
#line 146 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__FileArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 146 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_33_33;

#line 147 "mercury_compile.m"
                        {
#line 147 "mercury_compile.m"
                          top_level__mercury_compile__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__FileArgs_17, top_level__mercury_compile__Args_10);
                        }
#line 147 "mercury_compile.m"
                        /* direct tailcall eliminated */
#line 147 "mercury_compile.m"
                        {
#line 147 "mercury_compile.m"
                          MR_Word top_level__mercury_compile__HeadVar__1__tmp_copy_1 = top_level__mercury_compile__V_33_33;

#line 147 "mercury_compile.m"
                          top_level__mercury_compile__HeadVar__1_1 = top_level__mercury_compile__HeadVar__1__tmp_copy_1;
#line 147 "mercury_compile.m"
                        }
#line 147 "mercury_compile.m"
                        continue;
#line 146 "mercury_compile.m"
                      }
#line 144 "mercury_compile.m"
                  }
#line 142 "mercury_compile.m"
              }
#line 156 "mercury_compile.m"
            else
#line 157 "mercury_compile.m"
              {
#line 157 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Result0_21;

#line 157 "mercury_compile.m"
                {
#line 157 "mercury_compile.m"
                  top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__Args_10, &top_level__mercury_compile__Result0_21);
                }
#line 161 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__Result0_21)) == (MR_mktag((MR_Integer) 1))))
#line 163 "mercury_compile.m"
                  *top_level__mercury_compile__HeadVar__2_2 = top_level__mercury_compile__Result0_21;
#line 161 "mercury_compile.m"
                else
#line 159 "mercury_compile.m"
                  {
#line 159 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ExpandedArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Result0_21, (MR_Integer) 0)));
#line 159 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_36_36;

#line 160 "mercury_compile.m"
                    {
#line 160 "mercury_compile.m"
                      top_level__mercury_compile__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 0) = ((MR_Box) (top_level__mercury_compile__Arg_9));
#line 160 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile__ExpandedArgs_22));
#line 160 "mercury_compile.m"
                    }
#line 160 "mercury_compile.m"
                    {
#line 160 "mercury_compile.m"
                      MR_Word base;
#line 160 "mercury_compile.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 160 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 160 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_36_36));
#line 160 "mercury_compile.m"
                    }
#line 159 "mercury_compile.m"
                  }
#line 157 "mercury_compile.m"
              }
#line 140 "mercury_compile.m"
          }
#line 139 "mercury_compile.m"
      }
#line 139 "mercury_compile.m"
      break;
#line 139 "mercury_compile.m"
    }
#line 136 "mercury_compile.m"
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
#line 347 "mercury_compile.m"
  {
#line 347 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_11_11;

#line 348 "mercury_compile.m"
    {
#line 348 "mercury_compile.m"
      top_level__mercury_compile__V_11_11 = make__options_file__options_variables_init_0_f_0();
    }
#line 348 "mercury_compile.m"
    {
#line 348 "mercury_compile.m"
      top_level__mercury_compile__main_after_setup_8_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_11_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Args_6, (MR_Integer) 0, top_level__mercury_compile__Globals_5);
#line 348 "mercury_compile.m"
      return;
    }
#line 347 "mercury_compile.m"
  }
#line 36 "mercury_compile.m"
}

#line 31 "mercury_compile.m"
void MR_CALL 
top_level__mercury_compile__real_main_2_p_0(void)
#line 31 "mercury_compile.m"
{
#line 108 "mercury_compile.m"
  {
#line 108 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 108 "mercury_compile.m"
    MR_Word top_level__mercury_compile__StdErr_4;
#line 108 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CmdLineArgs_6;
#line 108 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Res_7;
#line 113 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_5_5;

#line 2307 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__real_main_2_p_0


		{
#line 2307 "mercury_compile.m"

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

#line 12467 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2307 "mercury_compile.m"
}
#line 112 "mercury_compile.m"
    {
#line 112 "mercury_compile.m"
      mercury__io__stderr_stream_3_p_0(&top_level__mercury_compile__StdErr_4);
    }
#line 113 "mercury_compile.m"
    {
#line 113 "mercury_compile.m"
      mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__StdErr_4, &top_level__mercury_compile__V_5_5);
    }
#line 114 "mercury_compile.m"
    {
#line 114 "mercury_compile.m"
      mercury__io__command_line_arguments_3_p_0(&top_level__mercury_compile__CmdLineArgs_6);
    }
#line 116 "mercury_compile.m"
    {
#line 116 "mercury_compile.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 119 "mercury_compile.m"
    {
#line 119 "mercury_compile.m"
      top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__CmdLineArgs_6, &top_level__mercury_compile__Res_7);
    }
#line 123 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__Res_7)) == (MR_mktag((MR_Integer) 1))))
#line 124 "mercury_compile.m"
      {
#line 124 "mercury_compile.m"
        MR_Word top_level__mercury_compile__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_7, (MR_Integer) 0)));
#line 124 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_20_20;

#line 125 "mercury_compile.m"
        {
#line 125 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 127 "mercury_compile.m"
        {
#line 127 "mercury_compile.m"
          top_level__mercury_compile__V_20_20 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_9);
        }
#line 127 "mercury_compile.m"
        {
#line 127 "mercury_compile.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_20_20);
        }
#line 128 "mercury_compile.m"
        {
#line 128 "mercury_compile.m"
          mercury__io__nl_2_p_0();
#line 128 "mercury_compile.m"
          return;
        }
#line 124 "mercury_compile.m"
      }
#line 123 "mercury_compile.m"
    else
#line 121 "mercury_compile.m"
      {
#line 121 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ExpandedCmdLineArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_7, (MR_Integer) 0)));

#line 122 "mercury_compile.m"
        {
#line 122 "mercury_compile.m"
          top_level__mercury_compile__real_main_after_expansion_3_p_0(top_level__mercury_compile__ExpandedCmdLineArgs_8);
#line 122 "mercury_compile.m"
          return;
        }
#line 121 "mercury_compile.m"
      }
#line 108 "mercury_compile.m"
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
