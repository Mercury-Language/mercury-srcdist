/*
** Automatically generated from `mercury_compile.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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




#line 196 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 199 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0;

#line 202 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 205 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 208 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 211 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 214 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

#line 217 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 220 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 223 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 226 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 229 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0;

#line 232 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 235 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 238 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 241 "top_level.mercury_compile.c"
static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 244 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1];

#line 247 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0;

#line 250 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1];

#line 253 "top_level.mercury_compile.c"
static const MR_DuFunctorDesc top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1;

#line 256 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1];

#line 259 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1];

#line 262 "top_level.mercury_compile.c"
static const MR_DuPtagLayout top_level__mercury_compile__top_level__mercury_compile__du_ptag_ordered_file_or_module_0[2];

#line 265 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2];

#line 268 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2];

#line 271 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 274 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 276 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 279 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 282 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 284 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 286 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 289 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 292 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 294 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2);

#line 297 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 300 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 302 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 304 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3);

#line 1321 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_50_49_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1321 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 2267 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 1271 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1271 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 796 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 796 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 796 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 1321 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1321 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1321 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1321 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 1308 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1308 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16);

#line 1961 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1961__1_1_p_0(
#line 1961 "mercury_compile.m"
  MR_Char top_level__mercury_compile__HeadVar__1_24);

#line 1321 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1321__1_8_p_0(
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1321 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31);

#line 1191 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1191__1_2_p_0(
#line 1191 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1191 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75);

#line 846 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 846 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1305 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1305 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 1305 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 2331 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void);

#line 2267 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);

#line 2258 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2258 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8);

#line 2214 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2214 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2214 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2214 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8);

#line 2169 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2169 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2169 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2169 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2169 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23);

#line 2133 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22);

#line 2094 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidType_30,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidInstOrMode_31,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42);

#line 2071 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35);

#line 1981 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1981 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1981 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14);

#line 1960 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1960 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1960 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1959 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1959 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1959 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1950 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1950 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4);

#line 1929 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1929 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1929 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6);

#line 1876 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1876 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1876 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1876 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8);

#line 1846 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1846 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34);

#line 1715 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_24,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70);

#line 1695 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1695 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1695 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1695 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1695 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1566 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1566 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1566 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);

#line 1553 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1542 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1542 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20);

#line 1553 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1529 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1529 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15);

#line 1442 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1442 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1442 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1442 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48);

#line 1413 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1413 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1413 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1413 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34);

#line 1388 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1388 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1388 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1388 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1388 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10);

#line 1386 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1386 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1386 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1386 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1386 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1386 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1365 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1365 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1365 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4);

#line 1354 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1354 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1354 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1354 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1354 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10);

#line 1352 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1352 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1352 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1352 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1352 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1352 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1341 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1341 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1341 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4);

#line 1300 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1300 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1300 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5);

#line 1289 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1289 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_3,
#line 1289 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4);

#line 1280 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1280 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1271 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1271 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1262 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1262 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1259 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1259 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1259 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1259 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2);

#line 1254 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1254 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1254 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1254 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1243 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1243 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1243 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1243 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24);

#line 1191 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1191 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1191 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1147 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1147 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1147 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 1125 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1125 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12);

#line 1052 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1052 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1052 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1052 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1052 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1033 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1033 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1030 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1030 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1026 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1026 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1009 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 1009 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 1009 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 1009 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 1009 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 1009 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12);

#line 1004 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 1004 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1);

#line 871 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 871 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);

#line 796 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 796 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 796 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 779 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 779 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 779 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 779 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 766 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 766 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 766 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 766 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 738 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 738 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 738 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9);

#line 705 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 705 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 705 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28);

#line 598 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 598 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 598 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 582 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 582 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 582 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 582 "mercury_compile.m"
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



#line 1897 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1905 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1913 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1923 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1931 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1939 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1948 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1956 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1965 "top_level.mercury_compile.c"
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

#line 1979 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1987 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1996 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0
  }
};

#line 2005 "top_level.mercury_compile.c"
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

#line 2017 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2025 "top_level.mercury_compile.c"
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

#line 2037 "top_level.mercury_compile.c"
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

#line 2049 "top_level.mercury_compile.c"
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

#line 2066 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2071 "top_level.mercury_compile.c"
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

#line 2086 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2091 "top_level.mercury_compile.c"
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

#line 2106 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0
};

#line 2111 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2116 "top_level.mercury_compile.c"
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

#line 2130 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 2136 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2142 "top_level.mercury_compile.c"
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

#line 2159 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 2162 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2164 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2166 "top_level.mercury_compile.c"
{
#line 2168 "top_level.mercury_compile.c"
  {
#line 2170 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2173 "top_level.mercury_compile.c"
    {
#line 2175 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____compile_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2178 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2180 "top_level.mercury_compile.c"
  }
#line 2182 "top_level.mercury_compile.c"
}

#line 2185 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 2188 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2190 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2192 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2194 "top_level.mercury_compile.c"
{
#line 2196 "top_level.mercury_compile.c"
  {
#line 2198 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2201 "top_level.mercury_compile.c"
    {
#line 2203 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____compile_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2206 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2208 "top_level.mercury_compile.c"
  }
#line 2210 "top_level.mercury_compile.c"
}

#line 2213 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 2216 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2218 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 2220 "top_level.mercury_compile.c"
{
#line 2222 "top_level.mercury_compile.c"
  {
#line 2224 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 2227 "top_level.mercury_compile.c"
    {
#line 2229 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____file_or_module_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2232 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2234 "top_level.mercury_compile.c"
  }
#line 2236 "top_level.mercury_compile.c"
}

#line 2239 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 2242 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2244 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2246 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2248 "top_level.mercury_compile.c"
{
#line 2250 "top_level.mercury_compile.c"
  {
#line 2252 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2255 "top_level.mercury_compile.c"
    {
#line 2257 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____file_or_module_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2260 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2262 "top_level.mercury_compile.c"
  }
#line 2264 "top_level.mercury_compile.c"
}

#line 1321 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_50_49_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1321 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1321 "mercury_compile.m"
{
#line 1321 "mercury_compile.m"
  {
#line 1321 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1324 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Compile_15, (MR_Integer) 1)));
#line 1324 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_HeadVar__4_31;
#line 1324 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_HeadVar__8_35;

#line 1324 "mercury_compile.m"
    {
#line 1324 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__Compile_15), ((MR_Box) (top_level__mercury_compile__HeadVar__2_29)), &top_level__mercury_compile__conv2_HeadVar__4_31, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_HeadVar__8_35);
    }
#line 1324 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__4_31 = ((MR_Word) top_level__mercury_compile__conv2_HeadVar__4_31);
#line 1321 "mercury_compile.m"
  }
#line 1321 "mercury_compile.m"
}

#line 2267 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2267 "mercury_compile.m"
{
#line 2273 "mercury_compile.m"
  {
#line 2273 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2273 "mercury_compile.m"
    if ((top_level__mercury_compile__FileType_13 == (MR_Integer) 1))
#line 2273 "mercury_compile.m"
      {
#line 2279 "mercury_compile.m"
        {
#line 2279 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "csharp");
        }
#line 2280 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 2280 "mercury_compile.m"
          {
#line 2280 "mercury_compile.m"
            {
#line 2280 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "erlang");
            }
#line 2280 "mercury_compile.m"
            if (!(top_level__mercury_compile__succeeded))
#line 2281 "mercury_compile.m"
              {
#line 2281 "mercury_compile.m"
                {
#line 2281 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile__FileName_12, (MR_String) "java");
                }
#line 2281 "mercury_compile.m"
              }
#line 2280 "mercury_compile.m"
          }
#line 2286 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2284 "mercury_compile.m"
          {
#line 2284 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_30_30;

#line 2285 "mercury_compile.m"
            {
#line 2285 "mercury_compile.m"
              top_level__mercury_compile__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2285 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2285 "mercury_compile.m"
            }
#line 2285 "mercury_compile.m"
            {
#line 2285 "mercury_compile.m"
              MR_Word base;
#line 2285 "mercury_compile.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2285 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2285 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 2285 "mercury_compile.m"
            }
#line 2284 "mercury_compile.m"
          }
#line 2286 "mercury_compile.m"
        else
#line 2290 "mercury_compile.m"
          {
#line 2290 "mercury_compile.m"
            MR_String top_level__mercury_compile__InitFile_17;
#line 2290 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Result_18;
#line 2290 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_31_31;

#line 2290 "mercury_compile.m"
            {
#line 2290 "mercury_compile.m"
              top_level__mercury_compile__V_31_31 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12);
            }
#line 2290 "mercury_compile.m"
            {
#line 2290 "mercury_compile.m"
              top_level__mercury_compile__InitFile_17 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__V_31_31, (MR_String) "mer_std.init");
            }
#line 2291 "mercury_compile.m"
            {
#line 2291 "mercury_compile.m"
              mercury__io__check_file_accessibility_5_p_0(top_level__mercury_compile__InitFile_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[32]), &top_level__mercury_compile__Result_18);
            }
#line 2296 "mercury_compile.m"
            if ((top_level__mercury_compile__Result_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2293 "mercury_compile.m"
              {
#line 2293 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_40_40;

#line 2295 "mercury_compile.m"
                {
#line 2295 "mercury_compile.m"
                  top_level__mercury_compile__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2295 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 2295 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_40_40, 1) = ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20));
#line 2295 "mercury_compile.m"
                }
#line 2295 "mercury_compile.m"
                {
#line 2295 "mercury_compile.m"
                  MR_Word base;
#line 2295 "mercury_compile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2295 "mercury_compile.m"
                  *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = base;
#line 2295 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
#line 2295 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__V_40_40));
#line 2295 "mercury_compile.m"
                }
#line 2293 "mercury_compile.m"
              }
#line 2296 "mercury_compile.m"
            else
#line 2297 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2290 "mercury_compile.m"
          }
#line 2300 "mercury_compile.m"
        *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2273 "mercury_compile.m"
      }
#line 2273 "mercury_compile.m"
    else
#line 2312 "mercury_compile.m"
      {
#line 2313 "mercury_compile.m"
        *top_level__mercury_compile__Continue_14 = (MR_Integer) 1;
#line 2312 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20;
#line 2312 "mercury_compile.m"
      }
#line 2273 "mercury_compile.m"
  }
#line 2267 "mercury_compile.m"
}

#line 1271 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1271 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1271 "mercury_compile.m"
{
#line 1276 "mercury_compile.m"
  {
#line 1276 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1276 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1276 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1277 "mercury_compile.m"
    {
#line 1277 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_short_interface_file_6_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__Items_13);
#line 1277 "mercury_compile.m"
      return;
    }
#line 1276 "mercury_compile.m"
  }
#line 1271 "mercury_compile.m"
}

#line 796 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 796 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 796 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 796 "mercury_compile.m"
{
#line 802 "mercury_compile.m"
  {
#line 802 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 802 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Modules_15;
#line 802 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFiles_16;
#line 802 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateDeps_29;

#line 801 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__5_5 = (MR_Integer) 1;
#line 812 "mercury_compile.m"
    {
#line 812 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 93, &top_level__mercury_compile__GenerateDeps_29);
    }
#line 824 "mercury_compile.m"
    if ((top_level__mercury_compile__GenerateDeps_29 == (MR_Integer) 0))
#line 825 "mercury_compile.m"
      {
#line 825 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDepFile_32;

#line 826 "mercury_compile.m"
        {
#line 826 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 92, &top_level__mercury_compile__GenerateDepFile_32);
        }
#line 839 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDepFile_32 == (MR_Integer) 0))
#line 841 "mercury_compile.m"
          {
#line 841 "mercury_compile.m"
            top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__FileOrModule_10, &top_level__mercury_compile__Modules_15, &top_level__mercury_compile__ExtraObjFiles_16);
          }
#line 839 "mercury_compile.m"
        else
#line 829 "mercury_compile.m"
          {
#line 830 "mercury_compile.m"
            top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 831 "mercury_compile.m"
            top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 835 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 833 "mercury_compile.m"
              {
#line 833 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 834 "mercury_compile.m"
                {
#line 834 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_40);
                }
#line 833 "mercury_compile.m"
              }
#line 835 "mercury_compile.m"
            else
#line 836 "mercury_compile.m"
              {
#line 836 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 837 "mercury_compile.m"
                {
#line 837 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_41);
                }
#line 836 "mercury_compile.m"
              }
#line 829 "mercury_compile.m"
          }
#line 825 "mercury_compile.m"
      }
#line 824 "mercury_compile.m"
    else
#line 814 "mercury_compile.m"
      {
#line 815 "mercury_compile.m"
        top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 816 "mercury_compile.m"
        top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 818 "mercury_compile.m"
          {
#line 818 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 819 "mercury_compile.m"
            {
#line 819 "mercury_compile.m"
              parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_30);
            }
#line 818 "mercury_compile.m"
          }
#line 820 "mercury_compile.m"
        else
#line 821 "mercury_compile.m"
          {
#line 821 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 822 "mercury_compile.m"
            {
#line 822 "mercury_compile.m"
              parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_31);
            }
#line 821 "mercury_compile.m"
          }
#line 814 "mercury_compile.m"
      }
#line 802 "mercury_compile.m"
    {
#line 802 "mercury_compile.m"
      MR_Tuple base;
#line 802 "mercury_compile.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "mercury_compile.m"
      *top_level__mercury_compile__HeadVar__7_7 = base;
#line 802 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__Modules_15));
#line 802 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_16));
#line 802 "mercury_compile.m"
    }
#line 802 "mercury_compile.m"
  }
#line 796 "mercury_compile.m"
}

#line 1321 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1(
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1321 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1321 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1321 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1321 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 1321 "mercury_compile.m"
{
#line 1321 "mercury_compile.m"
  {
#line 1321 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1321 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_31;

#line 1321 "mercury_compile.m"
    {
#line 1321 "mercury_compile.m"
      top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1321__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv0_HeadVar__4_31);
    }
#line 1321 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_31));
#line 1321 "mercury_compile.m"
  }
#line 1321 "mercury_compile.m"
}

#line 1308 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_48_48,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_49_49,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_11,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 1308 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1308 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_16)
#line 1308 "mercury_compile.m"
{
#line 1313 "mercury_compile.m"
  {
#line 1313 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1313 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_18;

#line 1314 "mercury_compile.m"
    {
#line 1314 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 628, &top_level__mercury_compile__InvokedByMake_18);
    }
#line 1319 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_18 == (MR_Integer) 0))
#line 1320 "mercury_compile.m"
      {
#line 1320 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 1320 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Builder_19;
#line 1326 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_25_25;

#line 1321 "mercury_compile.m"
        {
#line 1321 "mercury_compile.m"
          top_level__mercury_compile__Builder_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_12[0]));
#line 1321 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 1) = ((MR_Box) (top_level__mercury_compile__compile_with_module_options__ho1_9_p_0_1));
#line 1321 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1321 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_19, 3) = ((MR_Box) (top_level__mercury_compile__Compile_15));
#line 1321 "mercury_compile.m"
        }
#line 1327 "mercury_compile.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2754 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1326 "mercury_compile.m"
        {
#line 1326 "mercury_compile.m"
          make__util__build_with_module_options_args_12_p_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Builder_19, top_level__mercury_compile__Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__V_25_25);
        }
#line 1320 "mercury_compile.m"
      }
#line 1319 "mercury_compile.m"
    else
#line 1318 "mercury_compile.m"
      {
#line 1318 "mercury_compile.m"
        backend_libs__compile_target_code__link_module_list_6_p_0(top_level__mercury_compile__V_48_48, top_level__mercury_compile__V_49_49, top_level__mercury_compile__Globals_10, top_level__mercury_compile__Succeeded_16);
#line 1318 "mercury_compile.m"
        return;
      }
#line 1313 "mercury_compile.m"
  }
#line 1308 "mercury_compile.m"
}

#line 1961 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1961__1_1_p_0(
#line 1961 "mercury_compile.m"
  MR_Char top_level__mercury_compile__HeadVar__1_24)
#line 1961 "mercury_compile.m"
{
#line 1961 "mercury_compile.m"
  {
#line 1961 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1961 "mercury_compile.m"
    {
#line 1961 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(top_level__mercury_compile__HeadVar__1_24);
    }
#line 1961 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1961 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1961 "mercury_compile.m"
  }
#line 1961 "mercury_compile.m"
}

#line 1321 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1321__1_8_p_0(
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_15,
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_29,
#line 1321 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_30,
#line 1321 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_31)
#line 1321 "mercury_compile.m"
{
#line 1321 "mercury_compile.m"
  {
#line 1321 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1321 "mercury_compile.m"
    {
#line 1321 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_51_50_49_95_95_49_95_95_91_51_93_95_48_8_p_0(top_level__mercury_compile__Compile_15, top_level__mercury_compile__HeadVar__2_29, top_level__mercury_compile__HeadVar__4_31);
#line 1321 "mercury_compile.m"
      return;
    }
#line 1321 "mercury_compile.m"
  }
#line 1321 "mercury_compile.m"
}

#line 1191 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1191__1_2_p_0(
#line 1191 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1191 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75)
#line 1191 "mercury_compile.m"
{
#line 1191 "mercury_compile.m"
  {
#line 1191 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1191 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SubModule_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 0)));
#line 1191 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 1)));

#line 1192 "mercury_compile.m"
    {
#line 1192 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (top_level__mercury_compile__SubModule_82)), top_level__mercury_compile__ModulesToRecompile_39);
    }
#line 1191 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1191 "mercury_compile.m"
  }
#line 1191 "mercury_compile.m"
}

#line 846 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 846 "mercury_compile.m"
{
#line 846 "mercury_compile.m"
  {
#line 846 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 846 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_12 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;
#line 846 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_13 = (MR_Integer) top_level__mercury_compile__HeadVar__3_3;

#line 846 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_12 == top_level__mercury_compile__CastY_13);
#line 846 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2887 "top_level.mercury_compile.c"
      *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 0;
#line 846 "mercury_compile.m"
    else
#line 846 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 846 "mercury_compile.m"
      {
#line 846 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 846 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 846 "mercury_compile.m"
          {
#line 846 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 846 "mercury_compile.m"
            {
#line 846 "mercury_compile.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_16_16, top_level__mercury_compile__V_5_5);
#line 846 "mercury_compile.m"
              return;
            }
#line 846 "mercury_compile.m"
          }
#line 846 "mercury_compile.m"
        else
#line 2916 "top_level.mercury_compile.c"
          *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 1;
#line 846 "mercury_compile.m"
      }
#line 846 "mercury_compile.m"
    else
#line 846 "mercury_compile.m"
      {
#line 846 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 846 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2929 "top_level.mercury_compile.c"
          *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 2;
#line 846 "mercury_compile.m"
        else
#line 846 "mercury_compile.m"
          {
#line 846 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 846 "mercury_compile.m"
            {
#line 846 "mercury_compile.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_17_17, top_level__mercury_compile__V_11_11);
#line 846 "mercury_compile.m"
              return;
            }
#line 846 "mercury_compile.m"
          }
#line 846 "mercury_compile.m"
      }
#line 846 "mercury_compile.m"
  }
#line 846 "mercury_compile.m"
}

#line 846 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 846 "mercury_compile.m"
{
#line 846 "mercury_compile.m"
  {
#line 846 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 846 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_7 = (MR_Integer) top_level__mercury_compile__HeadVar__1_1;
#line 846 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_8 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;

#line 846 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_7 == top_level__mercury_compile__CastY_8);
#line 846 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 846 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 846 "mercury_compile.m"
    else
#line 846 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 846 "mercury_compile.m"
      {
#line 846 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_4_4;

#line 846 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 846 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 846 "mercury_compile.m"
          {
#line 846 "mercury_compile.m"
            top_level__mercury_compile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 2997 "top_level.mercury_compile.c"
            top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_3_3, top_level__mercury_compile__V_4_4) == 0);
#line 846 "mercury_compile.m"
          }
#line 846 "mercury_compile.m"
      }
#line 846 "mercury_compile.m"
    else
#line 846 "mercury_compile.m"
      {
#line 846 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_6_6;

#line 846 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 846 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 846 "mercury_compile.m"
          {
#line 846 "mercury_compile.m"
            top_level__mercury_compile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 3020 "top_level.mercury_compile.c"
            {
#line 3022 "top_level.mercury_compile.c"
              return top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__V_5_5, top_level__mercury_compile__V_6_6);
            }
#line 846 "mercury_compile.m"
          }
#line 846 "mercury_compile.m"
      }
#line 846 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 846 "mercury_compile.m"
  }
#line 846 "mercury_compile.m"
}

#line 1305 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1305 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 1305 "mercury_compile.m"
{
#line 1305 "mercury_compile.m"
  {
#line 1305 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1305 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_4 = top_level__mercury_compile__HeadVar__2_2;
#line 1305 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_5 = top_level__mercury_compile__HeadVar__3_3;

#line 1305 "mercury_compile.m"
    {
#line 1305 "mercury_compile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_4[0], top_level__mercury_compile__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile__Cast_HeadVar2_5)));
#line 1305 "mercury_compile.m"
      return;
    }
#line 1305 "mercury_compile.m"
  }
#line 1305 "mercury_compile.m"
}

#line 1305 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1305 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1305 "mercury_compile.m"
{
#line 1305 "mercury_compile.m"
  {
#line 1305 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1305 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_3 = top_level__mercury_compile__HeadVar__1_1;
#line 1305 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_4 = top_level__mercury_compile__HeadVar__2_2;

#line 1305 "mercury_compile.m"
    {
#line 1305 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) top_level__mercury_compile__Cast_HeadVar1_3, (MR_Word) top_level__mercury_compile__Cast_HeadVar2_4);
    }
#line 1305 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1305 "mercury_compile.m"
  }
#line 1305 "mercury_compile.m"
}

#line 2331 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void)
#line 2331 "mercury_compile.m"
{
#line 2336 "mercury_compile.m"
  {
#line 2336 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2339 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__gc_init_2_p_0


		{
#line 2339 "mercury_compile.m"

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

#line 3131 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2339 "mercury_compile.m"
}
#line 2336 "mercury_compile.m"
  }
#line 2331 "mercury_compile.m"
}

#line 2267 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__do_detect_libgrade_9_p_0(
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__VeryVerbose_10,
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__DirName_11,
#line 2267 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_12,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileType_13,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Continue_14,
#line 2267 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20,
#line 2267 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21)
#line 2267 "mercury_compile.m"
{
#line 2273 "mercury_compile.m"
  {
#line 2273 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2273 "mercury_compile.m"
    {
#line 2273 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(top_level__mercury_compile__DirName_11, top_level__mercury_compile__FileName_12, top_level__mercury_compile__FileType_13, top_level__mercury_compile__Continue_14, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_0_20, top_level__mercury_compile__STATE_VARIABLE_GradeOpts_21);
#line 2273 "mercury_compile.m"
      return;
    }
#line 2273 "mercury_compile.m"
  }
#line 2267 "mercury_compile.m"
}

#line 2258 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_2(
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2258 "mercury_compile.m"
{
#line 2258 "mercury_compile.m"
  {
#line 2258 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv3_Continue_14;
#line 2258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21;

#line 2258 "mercury_compile.m"
    {
#line 2258 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv3_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21);
    }
#line 2258 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv3_Continue_14));
#line 2258 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv2_STATE_VARIABLE_GradeOpts_21));
#line 2258 "mercury_compile.m"
  }
#line 2258 "mercury_compile.m"
}

#line 2258 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0_1(
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6,
#line 2258 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_7,
#line 2258 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_8)
#line 2258 "mercury_compile.m"
{
#line 2258 "mercury_compile.m"
  {
#line 2258 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 2258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_Continue_14;
#line 2258 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21;

#line 2258 "mercury_compile.m"
    {
#line 2258 "mercury_compile.m"
      top_level__mercury_compile__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_String) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv1_Continue_14, ((MR_Word) top_level__mercury_compile__wrapper_arg_5), &top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21);
    }
#line 2258 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv1_Continue_14));
#line 2258 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_GradeOpts_21));
#line 2258 "mercury_compile.m"
  }
#line 2258 "mercury_compile.m"
}

#line 2214 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__detect_libgrades_5_p_0(
#line 2214 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 2214 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeConfigMerStdLibDir_7,
#line 2214 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__GradeOpts_8)
#line 2214 "mercury_compile.m"
{
#line 2217 "mercury_compile.m"
  {
#line 2217 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2217 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Detect_10;

#line 2218 "mercury_compile.m"
    {
#line 2218 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 637, &top_level__mercury_compile__Detect_10);
    }
#line 2248 "mercury_compile.m"
    if ((top_level__mercury_compile__Detect_10 == (MR_Integer) 0))
#line 2250 "mercury_compile.m"
      *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2248 "mercury_compile.m"
    else
#line 2220 "mercury_compile.m"
      {
#line 2220 "mercury_compile.m"
        MR_Word top_level__mercury_compile__VeryVerbose_13;
#line 2221 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_11;
#line 2236 "mercury_compile.m"
        MR_String top_level__mercury_compile__MerStdLibDir_15;
#line 2232 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeStdLibDir_14;

#line 2221 "mercury_compile.m"
        {
#line 2221 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 45, &top_level__mercury_compile__Verbose_11);
        }
#line 2225 "mercury_compile.m"
        {
#line 2225 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 46, &top_level__mercury_compile__VeryVerbose_13);
        }
#line 2231 "mercury_compile.m"
        {
#line 2231 "mercury_compile.m"
          libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 554, &top_level__mercury_compile__MaybeStdLibDir_14);
        }
#line 2233 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeStdLibDir_14)) == (MR_mktag((MR_Integer) 1)));
#line 2233 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2233 "mercury_compile.m"
          {
#line 2233 "mercury_compile.m"
            top_level__mercury_compile__MerStdLibDir_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeStdLibDir_14, (MR_Integer) 0)));
#line 2256 "mercury_compile.m"
            {
#line 2256 "mercury_compile.m"
              MR_String top_level__mercury_compile__ModulesDir_39;
#line 2256 "mercury_compile.m"
              MR_Word top_level__mercury_compile__MaybeGradeOpts_40;
#line 2256 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_44_44;

#line 2257 "mercury_compile.m"
              {
#line 2257 "mercury_compile.m"
                top_level__mercury_compile__ModulesDir_39 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_15, (MR_String) "modules");
              }
#line 2258 "mercury_compile.m"
              {
#line 2258 "mercury_compile.m"
                top_level__mercury_compile__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2258 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2258 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_1));
#line 2258 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2258 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_44_44, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2258 "mercury_compile.m"
              }
#line 2258 "mercury_compile.m"
              {
#line 2258 "mercury_compile.m"
                mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_44_44, top_level__mercury_compile__ModulesDir_39, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_40);
              }
#line 2262 "mercury_compile.m"
              if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_40)) == (MR_mktag((MR_Integer) 1))))
#line 2264 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2262 "mercury_compile.m"
              else
#line 2261 "mercury_compile.m"
                *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_40, (MR_Integer) 0)));
#line 2256 "mercury_compile.m"
            }
#line 2233 "mercury_compile.m"
          }
#line 2233 "mercury_compile.m"
        else
#line 2242 "mercury_compile.m"
          {
#line 2242 "mercury_compile.m"
            MR_String top_level__mercury_compile__MerStdLibDir_32;
#line 2239 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_26_26;
#line 2239 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_27_27;

#line 2239 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__MaybeConfigMerStdLibDir_7)) == (MR_mktag((MR_Integer) 1)));
#line 2239 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 2239 "mercury_compile.m"
              {
#line 2239 "mercury_compile.m"
                top_level__mercury_compile__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigMerStdLibDir_7, (MR_Integer) 0)));
#line 2239 "mercury_compile.m"
                top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 2239 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 2239 "mercury_compile.m"
                  {
#line 2239 "mercury_compile.m"
                    top_level__mercury_compile__MerStdLibDir_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 0)));
#line 2239 "mercury_compile.m"
                    top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_26_26, (MR_Integer) 1)));
#line 2239 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2239 "mercury_compile.m"
                  }
#line 2239 "mercury_compile.m"
              }
#line 2242 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 2256 "mercury_compile.m"
              {
#line 2256 "mercury_compile.m"
                MR_String top_level__mercury_compile__ModulesDir_62;
#line 2256 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MaybeGradeOpts_63;
#line 2256 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_67_67;

#line 2257 "mercury_compile.m"
                {
#line 2257 "mercury_compile.m"
                  top_level__mercury_compile__ModulesDir_62 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile__MerStdLibDir_32, (MR_String) "modules");
                }
#line 2258 "mercury_compile.m"
                {
#line 2258 "mercury_compile.m"
                  top_level__mercury_compile__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2258 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[1]));
#line 2258 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 1) = ((MR_Box) (top_level__mercury_compile__detect_libgrades_5_p_0_2));
#line 2258 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2258 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_67_67, 3) = ((MR_Box) (top_level__mercury_compile__VeryVerbose_13));
#line 2258 "mercury_compile.m"
                }
#line 2258 "mercury_compile.m"
                {
#line 2258 "mercury_compile.m"
                  mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], top_level__mercury_compile__V_67_67, top_level__mercury_compile__ModulesDir_62, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeGradeOpts_63);
                }
#line 2262 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__MaybeGradeOpts_63)) == (MR_mktag((MR_Integer) 1))))
#line 2264 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2262 "mercury_compile.m"
                else
#line 2261 "mercury_compile.m"
                  *top_level__mercury_compile__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__MaybeGradeOpts_63, (MR_Integer) 0)));
#line 2256 "mercury_compile.m"
              }
#line 2242 "mercury_compile.m"
            else
#line 2243 "mercury_compile.m"
              *top_level__mercury_compile__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2242 "mercury_compile.m"
          }
#line 2220 "mercury_compile.m"
      }
#line 2217 "mercury_compile.m"
  }
#line 2214 "mercury_compile.m"
}

#line 2169 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 2169 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2169 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2169 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 2169 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23)
#line 2169 "mercury_compile.m"
{
#line 2172 "mercury_compile.m"
  {
#line 2172 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2172 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2172 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileCalls_12;
#line 2172 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileTime_13;

#line 2173 "mercury_compile.m"
    {
#line 2173 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__Globals_11);
    }
#line 2174 "mercury_compile.m"
    {
#line 2174 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 192, &top_level__mercury_compile__ProfileCalls_12);
    }
#line 2175 "mercury_compile.m"
    {
#line 2175 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 193, &top_level__mercury_compile__ProfileTime_13);
    }
#line 2177 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileCalls_12 == (MR_Integer) 1);
#line 2178 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2178 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileTime_13 == (MR_Integer) 1);
#line 2202 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2182 "mercury_compile.m"
      {
#line 2182 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_14;
#line 2182 "mercury_compile.m"
        MR_String top_level__mercury_compile__ProfFileName_15;
#line 2182 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_16;

#line 2181 "mercury_compile.m"
        {
#line 2181 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Outputing profiling call graph...");
        }
#line 2183 "mercury_compile.m"
        {
#line 2183 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_7);
        }
#line 2184 "mercury_compile.m"
        {
#line 2184 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__ModuleName_14);
        }
#line 2185 "mercury_compile.m"
        {
#line 2185 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_14, (MR_String) ".prof", (MR_Integer) 0, &top_level__mercury_compile__ProfFileName_15);
        }
#line 2187 "mercury_compile.m"
        {
#line 2187 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__ProfFileName_15, &top_level__mercury_compile__Res_16);
        }
#line 2194 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_16)) == (MR_mktag((MR_Integer) 1))))
#line 2195 "mercury_compile.m"
          {
#line 2195 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2195 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_21;
#line 2195 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_36_36;

#line 2197 "mercury_compile.m"
            {
#line 2197 "mercury_compile.m"
              top_level__mercury_compile__V_36_36 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_20);
            }
#line 2196 "mercury_compile.m"
            {
#line 2196 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", top_level__mercury_compile__V_36_36);
            }
#line 2198 "mercury_compile.m"
            {
#line 2198 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_21);
            }
#line 2195 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2195 "mercury_compile.m"
          }
#line 2194 "mercury_compile.m"
        else
#line 2189 "mercury_compile.m"
          {
#line 2189 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2189 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_18;
#line 2192 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_19_19;

#line 2190 "mercury_compile.m"
            {
#line 2190 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_17, &top_level__mercury_compile__OutputStream_18);
            }
#line 2191 "mercury_compile.m"
            {
#line 2191 "mercury_compile.m"
              transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_23);
            }
#line 2192 "mercury_compile.m"
            {
#line 2192 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_18, &top_level__mercury_compile__V_19_19);
            }
#line 2193 "mercury_compile.m"
            {
#line 2193 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_17);
            }
#line 2189 "mercury_compile.m"
          }
#line 2200 "mercury_compile.m"
        {
#line 2200 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
        }
#line 2201 "mercury_compile.m"
        {
#line 2201 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2201 "mercury_compile.m"
          return;
        }
#line 2182 "mercury_compile.m"
      }
#line 2202 "mercury_compile.m"
    else
#line 2203 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2172 "mercury_compile.m"
  }
#line 2169 "mercury_compile.m"
}

#line 2133 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 2133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 2133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 2133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 2133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22)
#line 2133 "mercury_compile.m"
{
#line 2136 "mercury_compile.m"
  {
#line 2136 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2136 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 2136 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ShowDepGraph_12;

#line 2137 "mercury_compile.m"
    {
#line 2137 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__Globals_11);
    }
#line 2138 "mercury_compile.m"
    {
#line 2138 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 142, &top_level__mercury_compile__ShowDepGraph_12);
    }
#line 2160 "mercury_compile.m"
    if ((top_level__mercury_compile__ShowDepGraph_12 == (MR_Integer) 0))
#line 2161 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2160 "mercury_compile.m"
    else
#line 2140 "mercury_compile.m"
      {
#line 2140 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_13;
#line 2140 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_14;
#line 2140 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_15;

#line 2141 "mercury_compile.m"
        {
#line 2141 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Writing dependency graph...");
        }
#line 2142 "mercury_compile.m"
        {
#line 2142 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__ModuleName_13);
        }
#line 2143 "mercury_compile.m"
        {
#line 2143 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_13, (MR_String) ".dependency_graph", (MR_Integer) 0, &top_level__mercury_compile__FileName_14);
        }
#line 2145 "mercury_compile.m"
        {
#line 2145 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__FileName_14, &top_level__mercury_compile__Res_15);
        }
#line 2153 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 2154 "mercury_compile.m"
          {
#line 2154 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2154 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_20;
#line 2154 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_33_33;

#line 2156 "mercury_compile.m"
            {
#line 2156 "mercury_compile.m"
              top_level__mercury_compile__V_33_33 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_19);
            }
#line 2155 "mercury_compile.m"
            {
#line 2155 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", top_level__mercury_compile__V_33_33);
            }
#line 2157 "mercury_compile.m"
            {
#line 2157 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_20);
            }
#line 2154 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 2154 "mercury_compile.m"
          }
#line 2153 "mercury_compile.m"
        else
#line 2147 "mercury_compile.m"
          {
#line 2147 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 2147 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_17;
#line 2150 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_18_18;

#line 2148 "mercury_compile.m"
            {
#line 2148 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_16, &top_level__mercury_compile__OutputStream_17);
            }
#line 2149 "mercury_compile.m"
            {
#line 2149 "mercury_compile.m"
              transform_hlds__dependency_graph__write_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile__STATE_VARIABLE_HLDS_22);
            }
#line 2150 "mercury_compile.m"
            {
#line 2150 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_17, &top_level__mercury_compile__V_18_18);
            }
#line 2151 "mercury_compile.m"
            {
#line 2151 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_16);
            }
#line 2152 "mercury_compile.m"
            {
#line 2152 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
            }
#line 2147 "mercury_compile.m"
          }
#line 2159 "mercury_compile.m"
        {
#line 2159 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2159 "mercury_compile.m"
          return;
        }
#line 2140 "mercury_compile.m"
      }
#line 2136 "mercury_compile.m"
  }
#line 2133 "mercury_compile.m"
}

#line 2094 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidType_30,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundInvalidInstOrMode_31,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 2094 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 2094 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42)
#line 2094 "mercury_compile.m"
{
#line 2103 "mercury_compile.m"
  {
#line 2103 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2103 "mercury_compile.m"
    MR_String top_level__mercury_compile__DumpBaseFileName_35;
#line 2103 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ParseTree_36;
#line 2103 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeSpecs_37;
#line 2103 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Status_38;
#line 2103 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SpecsErrors_39;
#line 2103 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_45_45;
#line 2103 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52;
#line 2103 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_53_53;

#line 2104 "mercury_compile.m"
    {
#line 2104 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_0_41, &top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 2105 "mercury_compile.m"
    {
#line 2105 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% Converting parse tree to hlds...\n");
    }
#line 2106 "mercury_compile.m"
    {
#line 2106 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__ModuleName_20, (MR_String) ".hlds_dump", (MR_Integer) 0, &top_level__mercury_compile__DumpBaseFileName_35);
    }
#line 2108 "mercury_compile.m"
    {
#line 2108 "mercury_compile.m"
      top_level__mercury_compile__ParseTree_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2108 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_20));
#line 2108 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 1) = ((MR_Box) (top_level__mercury_compile__Items_21));
#line 2108 "mercury_compile.m"
    }
#line 2109 "mercury_compile.m"
    {
#line 2109 "mercury_compile.m"
      hlds__make_hlds__parse_tree_to_hlds_11_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__DumpBaseFileName_35, top_level__mercury_compile__ParseTree_36, top_level__mercury_compile__MQInfo_23, top_level__mercury_compile__EqvMap_24, top_level__mercury_compile__UsedModules_25, top_level__mercury_compile__QualInfo_29, top_level__mercury_compile__FoundInvalidType_30, top_level__mercury_compile__FoundInvalidInstOrMode_31, &top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, &top_level__mercury_compile__MakeSpecs_37);
    }
#line 2112 "mercury_compile.m"
    {
#line 2112 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__MakeSpecs_37, top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 2113 "mercury_compile.m"
    {
#line 2113 "mercury_compile.m"
      hlds__hlds_module__module_info_set_event_set_3_p_0(top_level__mercury_compile__EventSet_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, top_level__mercury_compile__STATE_VARIABLE_HLDS_40);
    }
#line 2114 "mercury_compile.m"
    {
#line 2114 "mercury_compile.m"
      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__Status_38);
    }
#line 2115 "mercury_compile.m"
    {
#line 2115 "mercury_compile.m"
      top_level__mercury_compile__SpecsErrors_39 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53);
    }
#line 2117 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Status_38 == (MR_Integer) 0);
#line 2117 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 2118 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 2118 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__SpecsErrors_39 == (MR_Integer) 1);
#line 2123 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2121 "mercury_compile.m"
      {
#line 2121 "mercury_compile.m"
        *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 1;
#line 2122 "mercury_compile.m"
        {
#line 2122 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 2121 "mercury_compile.m"
      }
#line 2123 "mercury_compile.m"
    else
#line 2124 "mercury_compile.m"
      *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 0;
#line 2126 "mercury_compile.m"
    {
#line 2126 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_42);
    }
#line 2127 "mercury_compile.m"
    {
#line 2127 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% done.\n");
    }
#line 2128 "mercury_compile.m"
    {
#line 2128 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_27);
#line 2128 "mercury_compile.m"
      return;
    }
#line 2103 "mercury_compile.m"
  }
#line 2094 "mercury_compile.m"
}

#line 2071 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 2071 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 2071 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35)
#line 2071 "mercury_compile.m"
{
#line 2079 "mercury_compile.m"
  {
#line 2079 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 2079 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandSpecs_33;
#line 2079 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_38_38;
#line 2079 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_43_43;

#line 2080 "mercury_compile.m"
    {
#line 2080 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_0_34, &top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 2081 "mercury_compile.m"
    {
#line 2081 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% Expanding equivalence types...\n");
    }
#line 2082 "mercury_compile.m"
    {
#line 2082 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_20);
    }
#line 2083 "mercury_compile.m"
    {
#line 2083 "mercury_compile.m"
      parse_tree__equiv_type__expand_eqv_types_10_p_0(top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__Items0_22, top_level__mercury_compile__Items_23, top_level__mercury_compile__EventSpecMap0_24, top_level__mercury_compile__EventSpecMap_25, top_level__mercury_compile__EqvMap_26, top_level__mercury_compile__UsedModules_27, top_level__mercury_compile__RecompInfo0_28, top_level__mercury_compile__RecompInfo_29, &top_level__mercury_compile__ExpandSpecs_33);
    }
#line 2086 "mercury_compile.m"
    {
#line 2086 "mercury_compile.m"
      *top_level__mercury_compile__FoundError_30 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__ExpandSpecs_33);
    }
#line 2087 "mercury_compile.m"
    {
#line 2087 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ExpandSpecs_33, top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 2088 "mercury_compile.m"
    {
#line 2088 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_43_43, top_level__mercury_compile__STATE_VARIABLE_Specs_35);
    }
#line 2089 "mercury_compile.m"
    {
#line 2089 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% done.\n");
    }
#line 2090 "mercury_compile.m"
    {
#line 2090 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_21);
#line 2090 "mercury_compile.m"
      return;
    }
#line 2079 "mercury_compile.m"
  }
#line 2071 "mercury_compile.m"
}

#line 1981 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1981 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1981 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1981 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14)
#line 1981 "mercury_compile.m"
{
#line 1986 "mercury_compile.m"
  {
#line 1986 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodOpt_16;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UseOptInt_17;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_18;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_19;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_20;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_21;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Imports1_22;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error1_23;
#line 1986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error2_25;

#line 1987 "mercury_compile.m"
    {
#line 1987 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 328, &top_level__mercury_compile__IntermodOpt_16);
    }
#line 1989 "mercury_compile.m"
    {
#line 1989 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 330, &top_level__mercury_compile__UseOptInt_17);
    }
#line 1990 "mercury_compile.m"
    {
#line 1990 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_18);
    }
#line 1992 "mercury_compile.m"
    {
#line 1992 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 332, &top_level__mercury_compile__TransOpt_19);
    }
#line 1993 "mercury_compile.m"
    {
#line 1993 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_20);
    }
#line 1995 "mercury_compile.m"
    {
#line 1995 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 333, &top_level__mercury_compile__IntermodAnalysis_21);
    }
#line 1998 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__UseOptInt_17 == (MR_Integer) 1);
#line 1999 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1999 "mercury_compile.m"
      {
#line 1999 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodOpt_16 == (MR_Integer) 1);
#line 1999 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 2000 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodAnalysis_21 == (MR_Integer) 1);
#line 1999 "mercury_compile.m"
      }
#line 2001 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2002 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 0);
#line 2008 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2004 "mercury_compile.m"
      {
#line 2004 "mercury_compile.m"
        {
#line 2004 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading .opt files...\n");
        }
#line 2005 "mercury_compile.m"
        {
#line 2005 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 2006 "mercury_compile.m"
        {
#line 2006 "mercury_compile.m"
          transform_hlds__intermod__grab_opt_files_6_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__Imports0_10, &top_level__mercury_compile__Imports1_22, &top_level__mercury_compile__Error1_23);
        }
#line 2007 "mercury_compile.m"
        {
#line 2007 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Done.\n");
        }
#line 2004 "mercury_compile.m"
      }
#line 2008 "mercury_compile.m"
    else
#line 2009 "mercury_compile.m"
      {
#line 2009 "mercury_compile.m"
        top_level__mercury_compile__Imports1_22 = top_level__mercury_compile__Imports0_10;
#line 2010 "mercury_compile.m"
        top_level__mercury_compile__Error1_23 = (MR_Integer) 0;
#line 2009 "mercury_compile.m"
      }
#line 2012 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_20 == (MR_Integer) 1);
#line 2041 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2019 "mercury_compile.m"
      if ((top_level__mercury_compile__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2020 "mercury_compile.m"
        {
#line 2020 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_26;
#line 2020 "mercury_compile.m"
          MR_Word top_level__mercury_compile__WarnNoTransOptDeps_27;

#line 2021 "mercury_compile.m"
          *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2022 "mercury_compile.m"
          top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2023 "mercury_compile.m"
          {
#line 2023 "mercury_compile.m"
            parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*top_level__mercury_compile__Imports_13, &top_level__mercury_compile__ModuleName_26);
          }
#line 2024 "mercury_compile.m"
          {
#line 2024 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 14, &top_level__mercury_compile__WarnNoTransOptDeps_27);
          }
#line 2037 "mercury_compile.m"
          if ((top_level__mercury_compile__WarnNoTransOptDeps_27 == (MR_Integer) 0))
#line 2038 "mercury_compile.m"
            {
#line 2038 "mercury_compile.m"
            }
#line 2037 "mercury_compile.m"
          else
#line 2027 "mercury_compile.m"
            {
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Pieces_28;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Msg_29;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Spec_30;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_52_52;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_55_55;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_56_56;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_71_71;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_72_72;
#line 2027 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_76_76;
#line 2035 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumWarnings_31;
#line 2035 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumErrors_32;

#line 2029 "mercury_compile.m"
              {
#line 2029 "mercury_compile.m"
                top_level__mercury_compile__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2029 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2029 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 1) = ((MR_Box) (top_level__mercury_compile__ModuleName_26));
#line 2029 "mercury_compile.m"
              }
#line 2029 "mercury_compile.m"
              {
#line 2029 "mercury_compile.m"
                top_level__mercury_compile__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2029 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 0) = ((MR_Box) (top_level__mercury_compile__V_56_56));
#line 2029 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[20])));
#line 2029 "mercury_compile.m"
              }
#line 2029 "mercury_compile.m"
              {
#line 2029 "mercury_compile.m"
                top_level__mercury_compile__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2029 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[31])));
#line 2029 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 1) = ((MR_Box) (top_level__mercury_compile__V_55_55));
#line 2029 "mercury_compile.m"
              }
#line 2028 "mercury_compile.m"
              {
#line 2028 "mercury_compile.m"
                top_level__mercury_compile__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[30])));
#line 2028 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 1) = ((MR_Box) (top_level__mercury_compile__V_52_52));
#line 2028 "mercury_compile.m"
              }
#line 2032 "mercury_compile.m"
              {
#line 2032 "mercury_compile.m"
                top_level__mercury_compile__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2032 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (top_level__mercury_compile__Pieces_28));
#line 2032 "mercury_compile.m"
              }
#line 2032 "mercury_compile.m"
              {
#line 2032 "mercury_compile.m"
                top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2032 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 2032 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2032 "mercury_compile.m"
              }
#line 2031 "mercury_compile.m"
              {
#line 2031 "mercury_compile.m"
                top_level__mercury_compile__Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2031 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2031 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2031 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 3) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 2031 "mercury_compile.m"
              }
#line 2033 "mercury_compile.m"
              {
#line 2033 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2033 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 0) = ((MR_Box) (top_level__mercury_compile__Msg_29));
#line 2033 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2033 "mercury_compile.m"
              }
#line 2033 "mercury_compile.m"
              {
#line 2033 "mercury_compile.m"
                top_level__mercury_compile__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2033 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2033 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2033 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 2) = ((MR_Box) (top_level__mercury_compile__V_76_76));
#line 2033 "mercury_compile.m"
              }
#line 2035 "mercury_compile.m"
              {
#line 2035 "mercury_compile.m"
                parse_tree__error_util__write_error_spec_8_p_0(top_level__mercury_compile__Spec_30, top_level__mercury_compile__Globals_9, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_31, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_32);
              }
#line 2027 "mercury_compile.m"
            }
#line 2020 "mercury_compile.m"
        }
#line 2019 "mercury_compile.m"
      else
#line 2014 "mercury_compile.m"
        {
#line 2014 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTransOptDeps_12, (MR_Integer) 0)));

#line 2017 "mercury_compile.m"
          {
#line 2017 "mercury_compile.m"
            transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptDeps_24, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
          }
#line 2014 "mercury_compile.m"
        }
#line 2041 "mercury_compile.m"
    else
#line 2047 "mercury_compile.m"
      {
#line 2041 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 1);
#line 2047 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 2045 "mercury_compile.m"
          {
#line 2045 "mercury_compile.m"
            *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2046 "mercury_compile.m"
            top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2045 "mercury_compile.m"
          }
#line 2047 "mercury_compile.m"
        else
#line 2061 "mercury_compile.m"
        if ((top_level__mercury_compile__TransOpt_19 == (MR_Integer) 0))
#line 2062 "mercury_compile.m"
          {
#line 2063 "mercury_compile.m"
            *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 2064 "mercury_compile.m"
            top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 2062 "mercury_compile.m"
          }
#line 2061 "mercury_compile.m"
        else
#line 2049 "mercury_compile.m"
          {
#line 2049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TransOptFilesList_33;
#line 2049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TransOptFiles_34;
#line 2049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 3)));
#line 2049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_83_83;
#line 2049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_85_85;
#line 2049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 4)));
#line 2049 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 5)));
#line 2055 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 0)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 1)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 2)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 6)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 7)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 8)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 9)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 10)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 11)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 12)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 13)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 14)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 15)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 16)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 17)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 18)));
#line 2055 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 19)));
#line 2055 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 20)));

#line 2057 "mercury_compile.m"
            {
#line 2057 "mercury_compile.m"
              top_level__mercury_compile__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 0) = ((MR_Box) (top_level__mercury_compile__V_93_93));
#line 2057 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2057 "mercury_compile.m"
            }
#line 2056 "mercury_compile.m"
            {
#line 2056 "mercury_compile.m"
              top_level__mercury_compile__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2056 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 0) = ((MR_Box) (top_level__mercury_compile__V_92_92));
#line 2056 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 1) = ((MR_Box) (top_level__mercury_compile__V_85_85));
#line 2056 "mercury_compile.m"
            }
#line 2055 "mercury_compile.m"
            {
#line 2055 "mercury_compile.m"
              top_level__mercury_compile__TransOptFilesList_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 0) = ((MR_Box) (top_level__mercury_compile__V_82_82));
#line 2055 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 1) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 2055 "mercury_compile.m"
            }
#line 2058 "mercury_compile.m"
            {
#line 2058 "mercury_compile.m"
              mercury__list__condense_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, top_level__mercury_compile__TransOptFilesList_33, &top_level__mercury_compile__TransOptFiles_34);
            }
#line 2059 "mercury_compile.m"
            {
#line 2059 "mercury_compile.m"
              transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptFiles_34, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
            }
#line 2049 "mercury_compile.m"
          }
#line 2047 "mercury_compile.m"
      }
#line 2067 "mercury_compile.m"
    {
#line 2067 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__Error1_23, top_level__mercury_compile__Error2_25, top_level__mercury_compile__Error_14);
#line 2067 "mercury_compile.m"
      return;
    }
#line 1986 "mercury_compile.m"
  }
#line 1981 "mercury_compile.m"
}

#line 1960 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_2(
#line 1960 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1960 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1960 "mercury_compile.m"
{
#line 1960 "mercury_compile.m"
  {
#line 1960 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1960 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1960 "mercury_compile.m"
    {
#line 1960 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__read_dependency_file_get_modules__1961__1_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1960 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1960 "mercury_compile.m"
  }
#line 1960 "mercury_compile.m"
}

#line 1959 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0_1(
#line 1959 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1959 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1959 "mercury_compile.m"
{
#line 1959 "mercury_compile.m"
  {
#line 1959 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1959 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1959 "mercury_compile.m"
    {
#line 1959 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1959 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1959 "mercury_compile.m"
  }
#line 1959 "mercury_compile.m"
}

#line 1950 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(
#line 1950 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TransOptDeps_4)
#line 1950 "mercury_compile.m"
{
#line 1953 "mercury_compile.m"
  {
#line 1953 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1953 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Result_6;
#line 1975 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_15;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_30_30;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList0_7;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList1_9;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NotIsWhitespace_10;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CharList_12;
#line 1956 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName0_14;
#line 1956 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_23_23;
#line 1956 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_25_25;
#line 1959 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_8_8;
#line 1963 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_13_13;

#line 1954 "mercury_compile.m"
    {
#line 1954 "mercury_compile.m"
      mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_6);
    }
#line 1956 "mercury_compile.m"
    top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__Result_6)) == (MR_mktag((MR_Integer) 1)));
#line 1956 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1956 "mercury_compile.m"
      {
#line 1956 "mercury_compile.m"
        top_level__mercury_compile__CharList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_6, (MR_Integer) 0)));
#line 1959 "mercury_compile.m"
        top_level__mercury_compile__V_23_23 = (MR_Word) &top_level__mercury_compile_scalar_common_3[6];
#line 4587 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1959 "mercury_compile.m"
        {
#line 1959 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__V_23_23, top_level__mercury_compile__CharList0_7, &top_level__mercury_compile__V_8_8, &top_level__mercury_compile__CharList1_9);
        }
#line 1960 "mercury_compile.m"
        top_level__mercury_compile__NotIsWhitespace_10 = (MR_Word) &top_level__mercury_compile_scalar_common_3[7];
#line 1963 "mercury_compile.m"
        {
#line 1963 "mercury_compile.m"
          mercury__list__takewhile_4_p_0(top_level__mercury_compile__TypeCtorInfo_30_30, top_level__mercury_compile__NotIsWhitespace_10, top_level__mercury_compile__CharList1_9, &top_level__mercury_compile__CharList_12, &top_level__mercury_compile__V_13_13);
        }
#line 1964 "mercury_compile.m"
        {
#line 1964 "mercury_compile.m"
          mercury__string__from_char_list_2_p_0(top_level__mercury_compile__CharList_12, &top_level__mercury_compile__FileName0_14);
        }
#line 1965 "mercury_compile.m"
        top_level__mercury_compile__V_25_25 = (MR_String) ".trans_opt";
#line 1965 "mercury_compile.m"
        {
#line 1965 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__FileName0_14, top_level__mercury_compile__V_25_25, &top_level__mercury_compile__FileName_15);
        }
#line 1956 "mercury_compile.m"
      }
#line 1975 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1971 "mercury_compile.m"
      {
#line 1971 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleFileName_17;
#line 1971 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Module_18;
#line 1971 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TransOptDeps0_19;
#line 1969 "mercury_compile.m"
        MR_String top_level__mercury_compile__BaseFileName_16;

#line 1967 "mercury_compile.m"
        {
#line 1967 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__string__append_3_p_1((MR_String) "Mercury/trans_opts/", &top_level__mercury_compile__BaseFileName_16, top_level__mercury_compile__FileName_15);
        }
#line 1969 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1968 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__BaseFileName_16;
#line 1969 "mercury_compile.m"
        else
#line 1970 "mercury_compile.m"
          top_level__mercury_compile__ModuleFileName_17 = top_level__mercury_compile__FileName_15;
#line 1972 "mercury_compile.m"
        {
#line 1972 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__ModuleFileName_17, &top_level__mercury_compile__Module_18);
        }
#line 1973 "mercury_compile.m"
        {
#line 1973 "mercury_compile.m"
          top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps0_19);
        }
#line 1974 "mercury_compile.m"
        {
#line 1974 "mercury_compile.m"
          MR_Word base;
#line 1974 "mercury_compile.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "mercury_compile.m"
          *top_level__mercury_compile__TransOptDeps_4 = base;
#line 1974 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__Module_18));
#line 1974 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile__TransOptDeps0_19));
#line 1974 "mercury_compile.m"
        }
#line 1971 "mercury_compile.m"
      }
#line 1975 "mercury_compile.m"
    else
#line 1976 "mercury_compile.m"
      *top_level__mercury_compile__TransOptDeps_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1953 "mercury_compile.m"
  }
#line 1950 "mercury_compile.m"
}

#line 1929 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_dependency_file_find_start_4_p_0(
#line 1929 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SearchPattern_5,
#line 1929 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Success_6)
#line 1929 "mercury_compile.m"
{
#line 1932 "mercury_compile.m"
  while (MR_TRUE)
#line 1932 "mercury_compile.m"
    {
#line 1932 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 1932 "mercury_compile.m"
      {
#line 1932 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 1932 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Result_8;
#line 1941 "mercury_compile.m"
        MR_Word top_level__mercury_compile__CharList_9;

#line 1933 "mercury_compile.m"
        {
#line 1933 "mercury_compile.m"
          mercury__io__read_line_3_p_0(&top_level__mercury_compile__Result_8);
        }
#line 1934 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__Result_8)) == (MR_mktag((MR_Integer) 1)));
#line 1934 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1934 "mercury_compile.m"
          {
#line 1934 "mercury_compile.m"
            top_level__mercury_compile__CharList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Result_8, (MR_Integer) 0)));
#line 1938 "mercury_compile.m"
            {
#line 1935 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_10_10;

#line 1935 "mercury_compile.m"
              {
#line 1935 "mercury_compile.m"
                top_level__mercury_compile__succeeded = mercury__list__append_3_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__SearchPattern_5, &top_level__mercury_compile__V_10_10, top_level__mercury_compile__CharList_9);
              }
#line 1938 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 1937 "mercury_compile.m"
                *top_level__mercury_compile__Success_6 = (MR_Integer) 1;
#line 1938 "mercury_compile.m"
              else
#line 1939 "mercury_compile.m"
                {
#line 1939 "mercury_compile.m"
                  /* direct tailcall eliminated */
#line 1939 "mercury_compile.m"
                  continue;
#line 1939 "mercury_compile.m"
                }
#line 1938 "mercury_compile.m"
            }
#line 1934 "mercury_compile.m"
          }
#line 1934 "mercury_compile.m"
        else
#line 1942 "mercury_compile.m"
          *top_level__mercury_compile__Success_6 = (MR_Integer) 0;
#line 1932 "mercury_compile.m"
      }
#line 1932 "mercury_compile.m"
      break;
#line 1932 "mercury_compile.m"
    }
#line 1929 "mercury_compile.m"
}

#line 1876 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_read_dependency_file_5_p_0(
#line 1876 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_6,
#line 1876 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_7,
#line 1876 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTransOptDeps_8)
#line 1876 "mercury_compile.m"
{
#line 1879 "mercury_compile.m"
  {
#line 1879 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1879 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_10;

#line 1880 "mercury_compile.m"
    {
#line 1880 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 332, &top_level__mercury_compile__TransOpt_10);
    }
#line 1921 "mercury_compile.m"
    if ((top_level__mercury_compile__TransOpt_10 == (MR_Integer) 0))
#line 1923 "mercury_compile.m"
      *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1921 "mercury_compile.m"
    else
#line 1882 "mercury_compile.m"
      {
#line 1882 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_11;
#line 1882 "mercury_compile.m"
        MR_String top_level__mercury_compile__DependencyFileName_12;
#line 1882 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OpenResult_13;

#line 1883 "mercury_compile.m"
        {
#line 1883 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_6, (MR_Integer) 45, &top_level__mercury_compile__Verbose_11);
        }
#line 1884 "mercury_compile.m"
        {
#line 1884 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".d", (MR_Integer) 1, &top_level__mercury_compile__DependencyFileName_12);
        }
#line 1886 "mercury_compile.m"
        {
#line 1886 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading auto-dependency file \140");
        }
#line 1887 "mercury_compile.m"
        {
#line 1887 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, top_level__mercury_compile__DependencyFileName_12);
        }
#line 1888 "mercury_compile.m"
        {
#line 1888 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "\'...");
        }
#line 1889 "mercury_compile.m"
        {
#line 1889 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 1890 "mercury_compile.m"
        {
#line 1890 "mercury_compile.m"
          mercury__io__open_input_4_p_0(top_level__mercury_compile__DependencyFileName_12, &top_level__mercury_compile__OpenResult_13);
        }
#line 1911 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 1912 "mercury_compile.m"
          {
#line 1912 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1912 "mercury_compile.m"
            MR_String top_level__mercury_compile__IOErrorMessage_23;
#line 1912 "mercury_compile.m"
            MR_String top_level__mercury_compile__Message_24;
#line 1912 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_42_42;
#line 1912 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_44_44;
#line 1912 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_45_45;
#line 1912 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_47_47;

#line 1913 "mercury_compile.m"
            {
#line 1913 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " failed.\n");
            }
#line 1914 "mercury_compile.m"
            {
#line 1914 "mercury_compile.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
            }
#line 1915 "mercury_compile.m"
            {
#line 1915 "mercury_compile.m"
              mercury__io__error_message_2_p_0(top_level__mercury_compile__IOError_22, &top_level__mercury_compile__IOErrorMessage_23);
            }
#line 1917 "mercury_compile.m"
            {
#line 1917 "mercury_compile.m"
              top_level__mercury_compile__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 0) = ((MR_Box) (top_level__mercury_compile__IOErrorMessage_23));
#line 1917 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1917 "mercury_compile.m"
            }
#line 1917 "mercury_compile.m"
            {
#line 1917 "mercury_compile.m"
              top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) ((MR_String) "\' for input: "));
#line 1917 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 1) = ((MR_Box) (top_level__mercury_compile__V_47_47));
#line 1917 "mercury_compile.m"
            }
#line 1916 "mercury_compile.m"
            {
#line 1916 "mercury_compile.m"
              top_level__mercury_compile__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 0) = ((MR_Box) (top_level__mercury_compile__DependencyFileName_12));
#line 1916 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile__V_45_45));
#line 1916 "mercury_compile.m"
            }
#line 1916 "mercury_compile.m"
            {
#line 1916 "mercury_compile.m"
              top_level__mercury_compile__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1916 "mercury_compile.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_42_42, 1) = ((MR_Box) (top_level__mercury_compile__V_44_44));
#line 1916 "mercury_compile.m"
            }
#line 1916 "mercury_compile.m"
            {
#line 1916 "mercury_compile.m"
              mercury__string__append_list_2_p_0(top_level__mercury_compile__V_42_42, &top_level__mercury_compile__Message_24);
            }
#line 1918 "mercury_compile.m"
            {
#line 1918 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__Message_24);
            }
#line 1919 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1912 "mercury_compile.m"
          }
#line 1911 "mercury_compile.m"
        else
#line 1892 "mercury_compile.m"
          {
#line 1892 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenResult_13, (MR_Integer) 0)));
#line 1892 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldStream_15;
#line 1892 "mercury_compile.m"
            MR_String top_level__mercury_compile__TransOptDateFileName0_16;
#line 1892 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TransOptDateFileName_17;
#line 1892 "mercury_compile.m"
            MR_Word top_level__mercury_compile__SearchPattern_18;
#line 1892 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FindResult_19;
#line 1908 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_21_21;

#line 1893 "mercury_compile.m"
            {
#line 1893 "mercury_compile.m"
              mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__Stream_14, &top_level__mercury_compile__OldStream_15);
            }
#line 1894 "mercury_compile.m"
            {
#line 1894 "mercury_compile.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_6, top_level__mercury_compile__ModuleName_7, (MR_String) ".trans_opt_date", (MR_Integer) 1, &top_level__mercury_compile__TransOptDateFileName0_16);
            }
#line 1896 "mercury_compile.m"
            {
#line 1896 "mercury_compile.m"
              mercury__string__to_char_list_2_p_0(top_level__mercury_compile__TransOptDateFileName0_16, &top_level__mercury_compile__TransOptDateFileName_17);
            }
#line 1897 "mercury_compile.m"
            {
#line 1897 "mercury_compile.m"
              top_level__mercury_compile__SearchPattern_18 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, top_level__mercury_compile__TransOptDateFileName_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[16]));
            }
#line 1898 "mercury_compile.m"
            {
#line 1898 "mercury_compile.m"
              top_level__mercury_compile__read_dependency_file_find_start_4_p_0(top_level__mercury_compile__SearchPattern_18, &top_level__mercury_compile__FindResult_19);
            }
#line 1903 "mercury_compile.m"
            if ((top_level__mercury_compile__FindResult_19 == (MR_Integer) 0))
#line 1906 "mercury_compile.m"
              *top_level__mercury_compile__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1903 "mercury_compile.m"
            else
#line 1900 "mercury_compile.m"
              {
#line 1900 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TransOptDeps_20;

#line 1901 "mercury_compile.m"
                {
#line 1901 "mercury_compile.m"
                  top_level__mercury_compile__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile__TransOptDeps_20);
                }
#line 1902 "mercury_compile.m"
                {
#line 1902 "mercury_compile.m"
                  MR_Word base;
#line 1902 "mercury_compile.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "mercury_compile.m"
                  *top_level__mercury_compile__MaybeTransOptDeps_8 = base;
#line 1902 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__TransOptDeps_20));
#line 1902 "mercury_compile.m"
                }
#line 1900 "mercury_compile.m"
              }
#line 1908 "mercury_compile.m"
            {
#line 1908 "mercury_compile.m"
              mercury__io__set_input_stream_4_p_0(top_level__mercury_compile__OldStream_15, &top_level__mercury_compile__V_21_21);
            }
#line 1909 "mercury_compile.m"
            {
#line 1909 "mercury_compile.m"
              mercury__io__close_input_3_p_0(top_level__mercury_compile__Stream_14);
            }
#line 1910 "mercury_compile.m"
            {
#line 1910 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) " done.\n");
#line 1910 "mercury_compile.m"
              return;
            }
#line 1892 "mercury_compile.m"
          }
#line 1882 "mercury_compile.m"
      }
#line 1879 "mercury_compile.m"
  }
#line 1876 "mercury_compile.m"
}

#line 1846 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1846 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1846 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1846 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34)
#line 1846 "mercury_compile.m"
{
#line 1854 "mercury_compile.m"
  {
#line 1854 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1854 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_31;
#line 1854 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualifySpecs_32;
#line 1854 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_37_37;
#line 1854 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_45_45;
#line 1854 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_47_47;

#line 1855 "mercury_compile.m"
    {
#line 1855 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1856 "mercury_compile.m"
    {
#line 1856 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% Module qualifying items...\n");
    }
#line 1857 "mercury_compile.m"
    {
#line 1857 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_24);
    }
#line 1858 "mercury_compile.m"
    {
#line 1858 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, (MR_String) ".m", (MR_Integer) 1, &top_level__mercury_compile__FileName_31);
    }
#line 1861 "mercury_compile.m"
    {
#line 1861 "mercury_compile.m"
      top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1861 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) (top_level__mercury_compile__FileName_31));
#line 1861 "mercury_compile.m"
    }
#line 1860 "mercury_compile.m"
    {
#line 1860 "mercury_compile.m"
      parse_tree__module_qual__module_qualify_items_13_p_0(top_level__mercury_compile__Items0_18, top_level__mercury_compile__Items_19, top_level__mercury_compile__EventSpecMap0_20, top_level__mercury_compile__EventSpecMap_21, top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, top_level__mercury_compile__V_45_45, top_level__mercury_compile__EventSpecFileName_23, top_level__mercury_compile__MQInfo_26, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__QualifySpecs_32);
    }
#line 1863 "mercury_compile.m"
    {
#line 1863 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__QualifySpecs_32, top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1864 "mercury_compile.m"
    {
#line 1864 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_47_47, top_level__mercury_compile__STATE_VARIABLE_Specs_34);
    }
#line 1865 "mercury_compile.m"
    {
#line 1865 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% done.\n");
    }
#line 1866 "mercury_compile.m"
    {
#line 1866 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_25);
#line 1866 "mercury_compile.m"
      return;
    }
#line 1854 "mercury_compile.m"
  }
#line 1846 "mercury_compile.m"
}

#line 1715 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_24,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1715 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1715 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70)
#line 1715 "mercury_compile.m"
{
#line 1722 "mercury_compile.m"
  {
#line 1722 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_116_116;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_28;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_29;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MMCMake_30;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile1_31;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_32;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_33;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_34;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTransOptDeps_35;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports1_36;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodError_37;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items1_38;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ItemSpecs_39;
#line 1722 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetFileName_41;
#line 1722 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetName_42;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap1_43;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSetErrors_44;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items2_48;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap2_49;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo0_50;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefTypes_51;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefModes_52;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo0_53;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_54;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap_55;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EqvMap_56;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UsedModules_57;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo_58;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandErrors_59;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo_60;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSet_61;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS0_62;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSFoundInvalidType_63;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_64;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_82_82;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_83_83;
#line 1722 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_85_85;
#line 1752 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Error_40;
#line 1755 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_96_96;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_97_97;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_98_98;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_99_99;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_100_100;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_101_101;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_102_102;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_103_103;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_104_104;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_105_105;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_106_106;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_107_107;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_108_108;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_109_109;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_110_110;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_111_111;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_112_112;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_113_113;
#line 1755 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_114_114;
#line 1755 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_115_115;

#line 1723 "mercury_compile.m"
    {
#line 1723 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_28);
    }
#line 1724 "mercury_compile.m"
    {
#line 1724 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 45, &top_level__mercury_compile__Verbose_29);
    }
#line 1725 "mercury_compile.m"
    {
#line 1725 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 628, &top_level__mercury_compile__MMCMake_30);
    }
#line 1726 "mercury_compile.m"
    {
#line 1726 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile1_31 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile0_18, top_level__mercury_compile__MMCMake_30);
    }
#line 1730 "mercury_compile.m"
    {
#line 1730 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_32);
    }
#line 1732 "mercury_compile.m"
    {
#line 1732 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile_33 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile1_31, top_level__mercury_compile__MakeOptInt_32);
    }
#line 1734 "mercury_compile.m"
    {
#line 1734 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports0_17, &top_level__mercury_compile__ModuleName_34);
    }
#line 1742 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1744 "mercury_compile.m"
      {
#line 1744 "mercury_compile.m"
        top_level__mercury_compile__maybe_read_dependency_file_5_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, &top_level__mercury_compile__MaybeTransOptDeps_35);
      }
#line 1742 "mercury_compile.m"
    else
#line 1741 "mercury_compile.m"
      top_level__mercury_compile__MaybeTransOptDeps_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1748 "mercury_compile.m"
    {
#line 1748 "mercury_compile.m"
      top_level__mercury_compile__maybe_grab_optfiles_8_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__MaybeTransOptDeps_35, &top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__IntermodError_37);
    }
#line 1752 "mercury_compile.m"
    {
#line 1752 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__Items1_38, &top_level__mercury_compile__ItemSpecs_39, &top_level__mercury_compile___Error_40);
    }
#line 5333 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1754 "mercury_compile.m"
    {
#line 1754 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_79_79 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_116_116, top_level__mercury_compile__ItemSpecs_39, top_level__mercury_compile__STATE_VARIABLE_Specs_0_69);
    }
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 0)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 1)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 2)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 3)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 4)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 5)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 6)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 7)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 8)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 9)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 10)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 11)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 12)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 13)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 14)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 15)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 16)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 17)));
#line 1755 "mercury_compile.m"
    *top_level__mercury_compile__MaybeTimestamps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 18)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 19)));
#line 1755 "mercury_compile.m"
    top_level__mercury_compile__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 20)));
#line 1757 "mercury_compile.m"
    {
#line 1757 "mercury_compile.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 174, &top_level__mercury_compile__EventSetFileName_41);
    }
#line 1759 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__EventSetFileName_41, (MR_String) "") == 0);
#line 1763 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1760 "mercury_compile.m"
      {
#line 1760 "mercury_compile.m"
        top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1761 "mercury_compile.m"
        {
#line 1761 "mercury_compile.m"
          top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 1762 "mercury_compile.m"
        top_level__mercury_compile__EventSetErrors_44 = (MR_Integer) 0;
#line 1760 "mercury_compile.m"
        top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1760 "mercury_compile.m"
      }
#line 1763 "mercury_compile.m"
    else
#line 1765 "mercury_compile.m"
      {
#line 1765 "mercury_compile.m"
        MR_String top_level__mercury_compile__EventSetName0_45;
#line 1765 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSpecMap0_46;
#line 1765 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSetSpecs_47;

#line 1764 "mercury_compile.m"
        {
#line 1764 "mercury_compile.m"
          parse_tree__prog_event__read_event_set_6_p_0(top_level__mercury_compile__EventSetFileName_41, &top_level__mercury_compile__EventSetName0_45, &top_level__mercury_compile__EventSpecMap0_46, &top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1766 "mercury_compile.m"
        {
#line 1766 "mercury_compile.m"
          top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_116_116, top_level__mercury_compile__EventSetSpecs_47, top_level__mercury_compile__STATE_VARIABLE_Specs_79_79);
        }
#line 1767 "mercury_compile.m"
        {
#line 1767 "mercury_compile.m"
          top_level__mercury_compile__EventSetErrors_44 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1772 "mercury_compile.m"
        if ((top_level__mercury_compile__EventSetErrors_44 == (MR_Integer) 0))
#line 1769 "mercury_compile.m"
          {
#line 1770 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = top_level__mercury_compile__EventSetName0_45;
#line 1771 "mercury_compile.m"
            top_level__mercury_compile__EventSpecMap1_43 = top_level__mercury_compile__EventSpecMap0_46;
#line 1769 "mercury_compile.m"
          }
#line 1772 "mercury_compile.m"
        else
#line 1773 "mercury_compile.m"
          {
#line 1774 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1775 "mercury_compile.m"
            {
#line 1775 "mercury_compile.m"
              top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
            }
#line 1773 "mercury_compile.m"
          }
#line 1765 "mercury_compile.m"
      }
#line 1779 "mercury_compile.m"
    {
#line 1779 "mercury_compile.m"
      top_level__mercury_compile__invoke_module_qualify_items_16_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__Items1_38, &top_level__mercury_compile__Items2_48, top_level__mercury_compile__EventSpecMap1_43, &top_level__mercury_compile__EventSpecMap2_49, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__EventSetFileName_41, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQUndefTypes_51, &top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__STATE_VARIABLE_Specs_82_82, &top_level__mercury_compile__STATE_VARIABLE_Specs_83_83);
    }
#line 1783 "mercury_compile.m"
    {
#line 1783 "mercury_compile.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__RecompInfo0_53);
    }
#line 1784 "mercury_compile.m"
    {
#line 1784 "mercury_compile.m"
      top_level__mercury_compile__expand_equiv_types_17_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, top_level__mercury_compile__Items2_48, &top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSpecMap2_49, &top_level__mercury_compile__EventSpecMap_55, &top_level__mercury_compile__EqvMap_56, &top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__RecompInfo0_53, &top_level__mercury_compile__RecompInfo_58, &top_level__mercury_compile__ExpandErrors_59, top_level__mercury_compile__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile__STATE_VARIABLE_Specs_85_85);
    }
#line 1787 "mercury_compile.m"
    {
#line 1787 "mercury_compile.m"
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(top_level__mercury_compile__RecompInfo_58, top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQInfo_60);
    }
#line 1789 "mercury_compile.m"
    {
#line 1789 "mercury_compile.m"
      top_level__mercury_compile__EventSet_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1789 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 0) = ((MR_Box) (top_level__mercury_compile__EventSetName_42));
#line 1789 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 1) = ((MR_Box) (top_level__mercury_compile__EventSpecMap_55));
#line 1789 "mercury_compile.m"
    }
#line 1790 "mercury_compile.m"
    {
#line 1790 "mercury_compile.m"
      top_level__mercury_compile__make_hlds_18_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSet_61, top_level__mercury_compile__MQInfo_60, top_level__mercury_compile__EqvMap_56, top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__QualInfo_20, &top_level__mercury_compile__MakeHLDSFoundInvalidType_63, &top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_64, top_level__mercury_compile__FoundSemanticError_24, top_level__mercury_compile__STATE_VARIABLE_Specs_85_85, top_level__mercury_compile__STATE_VARIABLE_Specs_70);
    }
#line 1796 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefTypes_51 == (MR_Integer) 0);
#line 1796 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1796 "mercury_compile.m"
      {
#line 1797 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__EventSetErrors_44 == (MR_Integer) 0);
#line 1796 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1796 "mercury_compile.m"
          {
#line 1798 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExpandErrors_59 == (MR_Integer) 0);
#line 1796 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1799 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeHLDSFoundInvalidType_63 == (MR_Integer) 0);
#line 1796 "mercury_compile.m"
          }
#line 1796 "mercury_compile.m"
      }
#line 1802 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1801 "mercury_compile.m"
      *top_level__mercury_compile__UndefTypes_22 = (MR_Integer) 0;
#line 1802 "mercury_compile.m"
    else
#line 1803 "mercury_compile.m"
      *top_level__mercury_compile__UndefTypes_22 = (MR_Integer) 1;
#line 1806 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MQUndefModes_52 == (MR_Integer) 0);
#line 1806 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1807 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeHLDSFoundInvalidInstOrMode_64 == (MR_Integer) 0);
#line 1810 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1809 "mercury_compile.m"
      *top_level__mercury_compile__UndefModes_23 = (MR_Integer) 0;
#line 1810 "mercury_compile.m"
    else
#line 1811 "mercury_compile.m"
      *top_level__mercury_compile__UndefModes_23 = (MR_Integer) 1;
#line 1814 "mercury_compile.m"
    {
#line 1814 "mercury_compile.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile__HLDS0_62, (MR_Integer) 1, (MR_String) "initial", top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68);
    }
#line 1818 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1819 "mercury_compile.m"
      {
#line 1819 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AllDeps_65;
#line 1819 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OutputMMCMakeDeps_66;

#line 1820 "mercury_compile.m"
        {
#line 1820 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__HLDS0_62, &top_level__mercury_compile__AllDeps_65);
        }
#line 1821 "mercury_compile.m"
        {
#line 1821 "mercury_compile.m"
          parse_tree__write_deps_file__write_dependency_file_6_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__AllDeps_65, top_level__mercury_compile__MaybeTransOptDeps_35);
        }
#line 1823 "mercury_compile.m"
        {
#line 1823 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 117, &top_level__mercury_compile__OutputMMCMakeDeps_66);
        }
#line 1828 "mercury_compile.m"
        if ((top_level__mercury_compile__OutputMMCMakeDeps_66 == (MR_Integer) 0))
#line 1829 "mercury_compile.m"
          {
#line 1829 "mercury_compile.m"
          }
#line 1828 "mercury_compile.m"
        else
#line 1827 "mercury_compile.m"
          {
#line 1827 "mercury_compile.m"
            make__make_write_module_dep_file_4_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17);
          }
#line 1819 "mercury_compile.m"
      }
#line 1818 "mercury_compile.m"
    else
#line 1817 "mercury_compile.m"
      {
#line 1817 "mercury_compile.m"
      }
#line 1835 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (*top_level__mercury_compile__FoundSemanticError_24 == (MR_Integer) 1);
#line 1836 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1836 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodError_37 == (MR_Integer) 1);
#line 1840 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1839 "mercury_compile.m"
      {
#line 1839 "mercury_compile.m"
        hlds__hlds_module__module_info_incr_errors_2_p_0(top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__HLDS1_19);
#line 1839 "mercury_compile.m"
        return;
      }
#line 1840 "mercury_compile.m"
    else
#line 1841 "mercury_compile.m"
      *top_level__mercury_compile__HLDS1_19 = top_level__mercury_compile__HLDS0_62;
#line 1722 "mercury_compile.m"
  }
#line 1715 "mercury_compile.m"
}

#line 1695 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1695 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1695 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1695 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1695 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1695 "mercury_compile.m"
{
#line 1695 "mercury_compile.m"
  {
#line 1695 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1695 "mercury_compile.m"
    {
#line 1695 "mercury_compile.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 1695 "mercury_compile.m"
      return;
    }
#line 1695 "mercury_compile.m"
  }
#line 1695 "mercury_compile.m"
}

#line 1566 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1566 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1566 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53,
#line 1566 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54)
#line 1566 "mercury_compile.m"
{
#line 1574 "mercury_compile.m"
  {
#line 1574 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_21;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_22;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_23;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HighLevelCode_24;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Target_25;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TargetCodeOnly_26;
#line 1574 "mercury_compile.m"
    MR_String top_level__mercury_compile__UsageFileName_27;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FrontEndErrors_29;
#line 1574 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__NumErrors_30;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1574 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1591 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1575 "mercury_compile.m"
    {
#line 1575 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__Globals_21);
    }
#line 1576 "mercury_compile.m"
    {
#line 1576 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 45, &top_level__mercury_compile__Verbose_22);
    }
#line 1577 "mercury_compile.m"
    {
#line 1577 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 55, &top_level__mercury_compile__Stats_23);
    }
#line 1578 "mercury_compile.m"
    {
#line 1578 "mercury_compile.m"
      top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(top_level__mercury_compile__Verbose_22, top_level__mercury_compile__Stats_23, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_52, &top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59);
    }
#line 1579 "mercury_compile.m"
    {
#line 1579 "mercury_compile.m"
      top_level__mercury_compile_middle_passes__middle_pass_7_p_0(top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62);
    }
#line 1580 "mercury_compile.m"
    {
#line 1580 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 254, &top_level__mercury_compile__HighLevelCode_24);
    }
#line 1581 "mercury_compile.m"
    {
#line 1581 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Target_25);
    }
#line 1582 "mercury_compile.m"
    {
#line 1582 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 99, &top_level__mercury_compile__TargetCodeOnly_26);
    }
#line 1589 "mercury_compile.m"
    {
#line 1589 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".used", (MR_Integer) 1, &top_level__mercury_compile__UsageFileName_27);
    }
#line 1591 "mercury_compile.m"
    {
#line 1591 "mercury_compile.m"
      mercury__io__remove_file_4_p_0(top_level__mercury_compile__UsageFileName_27, &top_level__mercury_compile__V_28_28);
    }
#line 1593 "mercury_compile.m"
    {
#line 1593 "mercury_compile.m"
      top_level__mercury_compile__FrontEndErrors_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__Specs_17);
    }
#line 1594 "mercury_compile.m"
    {
#line 1594 "mercury_compile.m"
      hlds__hlds_module__module_info_get_num_errors_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__NumErrors_30);
    }
#line 1596 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__FrontEndErrors_29 == (MR_Integer) 0);
#line 1596 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1597 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__NumErrors_30 == (MR_Integer) 0);
#line 1700 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1612 "mercury_compile.m"
      {
#line 1612 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Succeeded_37;
#line 1612 "mercury_compile.m"
        MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74;

#line 5769 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__Target_25 == (MR_Integer) 0))
#line 5771 "top_level.mercury_compile.c"
          {
#line 5773 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__ExportDecls_31;

#line 1604 "mercury_compile.m"
            {
#line 1604 "mercury_compile.m"
              backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ExportDecls_31);
            }
#line 1605 "mercury_compile.m"
            {
#line 1605 "mercury_compile.m"
              backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ExportDecls_31, top_level__mercury_compile__ModuleName_15);
            }
#line 1678 "mercury_compile.m"
            if ((top_level__mercury_compile__HighLevelCode_24 == (MR_Integer) 0))
#line 1679 "mercury_compile.m"
              {
#line 1679 "mercury_compile.m"
                MR_Word top_level__mercury_compile__GlobalData_47;
#line 1679 "mercury_compile.m"
                MR_Word top_level__mercury_compile__LLDS_48;

#line 1680 "mercury_compile.m"
                {
#line 1680 "mercury_compile.m"
                  top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, &top_level__mercury_compile__GlobalData_47, &top_level__mercury_compile__LLDS_48, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1681 "mercury_compile.m"
                {
#line 1681 "mercury_compile.m"
                  top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__GlobalData_47, top_level__mercury_compile__LLDS_48, top_level__mercury_compile__ModuleName_15, &top_level__mercury_compile__Succeeded_37, top_level__mercury_compile__ExtraObjFiles_18);
                }
#line 1679 "mercury_compile.m"
              }
#line 1678 "mercury_compile.m"
            else
#line 1656 "mercury_compile.m"
              {
#line 1656 "mercury_compile.m"
                MR_Word top_level__mercury_compile__MLDS_124;
#line 1656 "mercury_compile.m"
                MR_Word top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1657 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_41_41;

#line 1657 "mercury_compile.m"
                {
#line 1657 "mercury_compile.m"
                  top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_41_41, &top_level__mercury_compile__MLDS_124, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
                }
#line 1658 "mercury_compile.m"
                {
#line 1658 "mercury_compile.m"
                  top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_124, &top_level__mercury_compile__TargetCodeSucceeded_125);
                }
#line 1660 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_125 == (MR_Integer) 1);
#line 1660 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1661 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1674 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1664 "mercury_compile.m"
                  {
#line 1664 "mercury_compile.m"
                    MR_String top_level__mercury_compile__C_File_42;
#line 1664 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__TargetType_43;
#line 1664 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__PIC_44;
#line 1664 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Obj_45;
#line 1664 "mercury_compile.m"
                    MR_String top_level__mercury_compile__O_File_46;
#line 1664 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__OutputStream_122;

#line 1663 "mercury_compile.m"
                    {
#line 1663 "mercury_compile.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile__C_File_42);
                    }
#line 1665 "mercury_compile.m"
                    {
#line 1665 "mercury_compile.m"
                      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__TargetType_43);
                    }
#line 1666 "mercury_compile.m"
                    {
#line 1666 "mercury_compile.m"
                      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__TargetType_43, &top_level__mercury_compile__PIC_44);
                    }
#line 1667 "mercury_compile.m"
                    {
#line 1667 "mercury_compile.m"
                      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__PIC_44, &top_level__mercury_compile__Obj_45);
                    }
#line 1668 "mercury_compile.m"
                    {
#line 1668 "mercury_compile.m"
                      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__Obj_45, (MR_Integer) 0, &top_level__mercury_compile__O_File_46);
                    }
#line 1670 "mercury_compile.m"
                    {
#line 1670 "mercury_compile.m"
                      mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_122);
                    }
#line 1671 "mercury_compile.m"
                    {
#line 1671 "mercury_compile.m"
                      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile__OutputStream_122, top_level__mercury_compile__PIC_44, top_level__mercury_compile__C_File_42, top_level__mercury_compile__O_File_46, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                    }
#line 1673 "mercury_compile.m"
                    {
#line 1673 "mercury_compile.m"
                      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                    }
#line 1664 "mercury_compile.m"
                  }
#line 1674 "mercury_compile.m"
                else
#line 1675 "mercury_compile.m"
                  top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_125;
#line 1677 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1656 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 1656 "mercury_compile.m"
              }
#line 5903 "top_level.mercury_compile.c"
          }
#line 5905 "top_level.mercury_compile.c"
        else
#line 5907 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__Target_25 == (MR_Integer) 2))
#line 5909 "top_level.mercury_compile.c"
          {
#line 5911 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MLDS_116;
#line 1632 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_38_38;

#line 1632 "mercury_compile.m"
            {
#line 1632 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MLDS_116, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
            }
#line 1633 "mercury_compile.m"
            {
#line 1633 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_116, &top_level__mercury_compile__Succeeded_37);
            }
#line 1634 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1631 "mercury_compile.m"
            top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5930 "top_level.mercury_compile.c"
          }
#line 5932 "top_level.mercury_compile.c"
        else
#line 5934 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__Target_25 == (MR_Integer) 4))
#line 5936 "top_level.mercury_compile.c"
          {
#line 5938 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__ELDS_49;

#line 1686 "mercury_compile.m"
            {
#line 1686 "mercury_compile.m"
              top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__ELDS_49, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
            }
#line 1687 "mercury_compile.m"
            {
#line 1687 "mercury_compile.m"
              top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__ELDS_49, &top_level__mercury_compile__Succeeded_37);
            }
#line 1688 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1685 "mercury_compile.m"
            top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 5955 "top_level.mercury_compile.c"
          }
#line 5957 "top_level.mercury_compile.c"
        else
#line 5959 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__Target_25 == (MR_Integer) 1))
#line 5961 "top_level.mercury_compile.c"
          {
#line 5963 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MLDS_33;
#line 5965 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1615 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_32_32;

#line 1615 "mercury_compile.m"
            {
#line 1615 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_32_32, &top_level__mercury_compile__MLDS_33, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
            }
#line 1616 "mercury_compile.m"
            {
#line 1616 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_5_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_33, &top_level__mercury_compile__TargetCodeSucceeded_34);
            }
#line 1618 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_34 == (MR_Integer) 1);
#line 1618 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1619 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1626 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1621 "mercury_compile.m"
              {
#line 1621 "mercury_compile.m"
                MR_Word top_level__mercury_compile__HasMain_35;
#line 1621 "mercury_compile.m"
                MR_Word top_level__mercury_compile__OutputStream_36;

#line 1621 "mercury_compile.m"
                {
#line 1621 "mercury_compile.m"
                  top_level__mercury_compile__HasMain_35 = top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(top_level__mercury_compile__MLDS_33);
                }
#line 1622 "mercury_compile.m"
                {
#line 1622 "mercury_compile.m"
                  mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_36);
                }
#line 1623 "mercury_compile.m"
                {
#line 1623 "mercury_compile.m"
                  backend_libs__compile_target_code__il_assemble_7_p_0(top_level__mercury_compile__OutputStream_36, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__HasMain_35, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                }
#line 1625 "mercury_compile.m"
                {
#line 1625 "mercury_compile.m"
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                }
#line 1621 "mercury_compile.m"
              }
#line 1626 "mercury_compile.m"
            else
#line 1627 "mercury_compile.m"
              top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_34;
#line 1629 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1614 "mercury_compile.m"
            top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6025 "top_level.mercury_compile.c"
          }
#line 6027 "top_level.mercury_compile.c"
        else
#line 6029 "top_level.mercury_compile.c"
          {
#line 6031 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MLDS_119;
#line 6033 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1637 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_39_39;

#line 1637 "mercury_compile.m"
            {
#line 1637 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile__V_39_39, &top_level__mercury_compile__MLDS_119, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54);
            }
#line 1638 "mercury_compile.m"
            {
#line 1638 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61, top_level__mercury_compile__MLDS_119, &top_level__mercury_compile__TargetCodeSucceeded_120);
            }
#line 1640 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeSucceeded_120 == (MR_Integer) 1);
#line 1640 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1641 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0);
#line 1649 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1643 "mercury_compile.m"
              {
#line 1643 "mercury_compile.m"
                MR_String top_level__mercury_compile__JavaFile_40;
#line 1643 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_96_96;
#line 1643 "mercury_compile.m"
                MR_Word top_level__mercury_compile__OutputStream_117;

#line 1643 "mercury_compile.m"
                {
#line 1643 "mercury_compile.m"
                  mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_117);
                }
#line 1644 "mercury_compile.m"
                {
#line 1644 "mercury_compile.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".java", (MR_Integer) 1, &top_level__mercury_compile__JavaFile_40);
                }
#line 1646 "mercury_compile.m"
                {
#line 1646 "mercury_compile.m"
                  top_level__mercury_compile__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 0) = ((MR_Box) (top_level__mercury_compile__JavaFile_40));
#line 1646 "mercury_compile.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1646 "mercury_compile.m"
                }
#line 1646 "mercury_compile.m"
                {
#line 1646 "mercury_compile.m"
                  backend_libs__compile_target_code__compile_java_files_6_p_0(top_level__mercury_compile__OutputStream_117, top_level__mercury_compile__V_96_96, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_37);
                }
#line 1648 "mercury_compile.m"
                {
#line 1648 "mercury_compile.m"
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_37);
                }
#line 1643 "mercury_compile.m"
              }
#line 1649 "mercury_compile.m"
            else
#line 1650 "mercury_compile.m"
              top_level__mercury_compile__Succeeded_37 = top_level__mercury_compile__TargetCodeSucceeded_120;
#line 1652 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1636 "mercury_compile.m"
            top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74 = top_level__mercury_compile__STATE_VARIABLE_HLDS_61_61;
#line 6105 "top_level.mercury_compile.c"
          }
#line 1696 "mercury_compile.m"
        if ((top_level__mercury_compile__Succeeded_37 == (MR_Integer) 0))
#line 1697 "mercury_compile.m"
          {
#line 1697 "mercury_compile.m"
          }
#line 1696 "mercury_compile.m"
        else
#line 1691 "mercury_compile.m"
          {
#line 1691 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TimestampFiles_50;
#line 1691 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_111_111;
#line 1694 "mercury_compile.m"
            void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1694 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv2_TimestampFiles_50;
#line 1694 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110;
#line 1695 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56;

#line 1692 "mercury_compile.m"
            {
#line 1692 "mercury_compile.m"
              recompilation__usage__write_usage_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile__NestedSubModules_12, top_level__mercury_compile__MaybeTimestamps_14);
            }
#line 1694 "mercury_compile.m"
            top_level__mercury_compile__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FindTimestampFiles_13, (MR_Integer) 1)));
#line 1694 "mercury_compile.m"
            {
#line 1694 "mercury_compile.m"
              top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__FindTimestampFiles_13), ((MR_Box) (top_level__mercury_compile__ModuleName_15)), &top_level__mercury_compile__conv2_TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_110_110);
            }
#line 1694 "mercury_compile.m"
            top_level__mercury_compile__TimestampFiles_50 = ((MR_Word) top_level__mercury_compile__conv2_TimestampFiles_50);
#line 1695 "mercury_compile.m"
            {
#line 1695 "mercury_compile.m"
              top_level__mercury_compile__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1695 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_11[0]));
#line 1695 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 1) = ((MR_Box) (top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1));
#line 1695 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1695 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 3) = ((MR_Box) (top_level__mercury_compile__Globals_21));
#line 1695 "mercury_compile.m"
            }
#line 1695 "mercury_compile.m"
            {
#line 1695 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_111_111, top_level__mercury_compile__TimestampFiles_50, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv3_STATE_VARIABLE_IO_56);
            }
#line 1691 "mercury_compile.m"
          }
#line 1612 "mercury_compile.m"
      }
#line 1700 "mercury_compile.m"
    else
#line 1703 "mercury_compile.m"
      {
#line 1703 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_51;

#line 1703 "mercury_compile.m"
        {
#line 1703 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_51);
        }
#line 1704 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_51 == (MR_Integer) 0);
#line 1706 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1705 "mercury_compile.m"
          {
#line 1705 "mercury_compile.m"
            {
#line 1705 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1705 "mercury_compile.m"
          }
#line 1706 "mercury_compile.m"
        else
#line 1706 "mercury_compile.m"
          {
#line 1706 "mercury_compile.m"
          }
#line 1709 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1703 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_54 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_62_62;
#line 1703 "mercury_compile.m"
      }
#line 1574 "mercury_compile.m"
  }
#line 1566 "mercury_compile.m"
}

#line 1553 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1553 "mercury_compile.m"
{
#line 1553 "mercury_compile.m"
  {
#line 1553 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1553 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1553 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1553 "mercury_compile.m"
    {
#line 1553 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1553 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1553 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1553 "mercury_compile.m"
  }
#line 1553 "mercury_compile.m"
}

#line 1542 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1542 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1542 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20)
#line 1542 "mercury_compile.m"
{
#line 1545 "mercury_compile.m"
  {
#line 1545 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1545 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_33_33;
#line 1545 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleNames_13;
#line 1545 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModulesList_14;
#line 1545 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SymNames_15;
#line 1545 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModuleNames_16;
#line 1545 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo0_17;
#line 1545 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo_18;

#line 1546 "mercury_compile.m"
    {
#line 1546 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    }
#line 1549 "mercury_compile.m"
    {
#line 1549 "mercury_compile.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__ModuleNames_13);
    }
#line 1551 "mercury_compile.m"
    {
#line 1551 "mercury_compile.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 667, &top_level__mercury_compile__LocalModulesList_14);
    }
#line 6290 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1553 "mercury_compile.m"
    {
#line 1553 "mercury_compile.m"
      top_level__mercury_compile__SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_scalar_common_3[5], top_level__mercury_compile__LocalModulesList_14);
    }
#line 1554 "mercury_compile.m"
    {
#line 1554 "mercury_compile.m"
      top_level__mercury_compile__LocalModuleNames_16 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_33, top_level__mercury_compile__SymNames_15);
    }
#line 1556 "mercury_compile.m"
    {
#line 1556 "mercury_compile.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__AnalysisInfo0_17);
    }
#line 1557 "mercury_compile.m"
    {
#line 1557 "mercury_compile.m"
      analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_13, top_level__mercury_compile__LocalModuleNames_16, top_level__mercury_compile__AnalysisInfo0_17, &top_level__mercury_compile__AnalysisInfo_18);
    }
#line 1559 "mercury_compile.m"
    {
#line 1559 "mercury_compile.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_18, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile__STATE_VARIABLE_HLDS_20);
    }
#line 1561 "mercury_compile.m"
    {
#line 1561 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
    }
#line 1562 "mercury_compile.m"
    {
#line 1562 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1562 "mercury_compile.m"
      return;
    }
#line 1545 "mercury_compile.m"
  }
#line 1542 "mercury_compile.m"
}

#line 1553 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1553 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1553 "mercury_compile.m"
{
#line 1553 "mercury_compile.m"
  {
#line 1553 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1553 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1553 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1553 "mercury_compile.m"
    {
#line 1553 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1553 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1553 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1553 "mercury_compile.m"
  }
#line 1553 "mercury_compile.m"
}

#line 1529 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1529 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1529 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15)
#line 1529 "mercury_compile.m"
{
#line 1532 "mercury_compile.m"
  {
#line 1532 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1532 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_13;

#line 1533 "mercury_compile.m"
    {
#line 1533 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 333, &top_level__mercury_compile__IntermodAnalysis_13);
    }
#line 1538 "mercury_compile.m"
    if ((top_level__mercury_compile__IntermodAnalysis_13 == (MR_Integer) 0))
#line 1539 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14;
#line 1538 "mercury_compile.m"
    else
#line 1545 "mercury_compile.m"
      {
#line 1545 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_33_46;
#line 1545 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleNames_30;
#line 1545 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModulesList_31;
#line 1545 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SymNames_32;
#line 1545 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModuleNames_33;
#line 1545 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo0_34;
#line 1545 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo_35;

#line 1546 "mercury_compile.m"
        {
#line 1546 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
        }
#line 1549 "mercury_compile.m"
        {
#line 1549 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__ModuleNames_30);
        }
#line 1551 "mercury_compile.m"
        {
#line 1551 "mercury_compile.m"
          libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 667, &top_level__mercury_compile__LocalModulesList_31);
        }
#line 6431 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1553 "mercury_compile.m"
        {
#line 1553 "mercury_compile.m"
          top_level__mercury_compile__SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_scalar_common_3[4], top_level__mercury_compile__LocalModulesList_31);
        }
#line 1554 "mercury_compile.m"
        {
#line 1554 "mercury_compile.m"
          top_level__mercury_compile__LocalModuleNames_33 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_46, top_level__mercury_compile__SymNames_32);
        }
#line 1556 "mercury_compile.m"
        {
#line 1556 "mercury_compile.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__AnalysisInfo0_34);
        }
#line 1557 "mercury_compile.m"
        {
#line 1557 "mercury_compile.m"
          analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_30, top_level__mercury_compile__LocalModuleNames_33, top_level__mercury_compile__AnalysisInfo0_34, &top_level__mercury_compile__AnalysisInfo_35);
        }
#line 1559 "mercury_compile.m"
        {
#line 1559 "mercury_compile.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_35, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile__STATE_VARIABLE_HLDS_15);
        }
#line 1561 "mercury_compile.m"
        {
#line 1561 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
        }
#line 1562 "mercury_compile.m"
        {
#line 1562 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1562 "mercury_compile.m"
          return;
        }
#line 1545 "mercury_compile.m"
      }
#line 1532 "mercury_compile.m"
  }
#line 1529 "mercury_compile.m"
}

#line 1442 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1442 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1442 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1442 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1442 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48)
#line 1442 "mercury_compile.m"
{
#line 1449 "mercury_compile.m"
  {
#line 1449 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_20;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCheckOnly_21;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ErrorCheckOnly_22;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_23;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS1_24;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualInfo_25;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamps_26;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefTypes_27;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefModes_28;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors1_29;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors2_30;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS20_31;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_54_54;
#line 1449 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1462 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;

#line 1450 "mercury_compile.m"
    {
#line 1450 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports_13, &top_level__mercury_compile__ModuleName_20);
    }
#line 1453 "mercury_compile.m"
    {
#line 1453 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 97, &top_level__mercury_compile__TypeCheckOnly_21);
    }
#line 1454 "mercury_compile.m"
    {
#line 1454 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 98, &top_level__mercury_compile__ErrorCheckOnly_22);
    }
#line 1455 "mercury_compile.m"
    {
#line 1455 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__TypeCheckOnly_21, top_level__mercury_compile__ErrorCheckOnly_22, &top_level__mercury_compile__DontWriteDFile_23);
    }
#line 1456 "mercury_compile.m"
    {
#line 1456 "mercury_compile.m"
      top_level__mercury_compile__pre_hlds_pass_15_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleAndImports_13, top_level__mercury_compile__DontWriteDFile_23, &top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__QualInfo_25, &top_level__mercury_compile__MaybeTimestamps_26, &top_level__mercury_compile__UndefTypes_27, &top_level__mercury_compile__UndefModes_28, &top_level__mercury_compile__Errors1_29, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_0_47, &top_level__mercury_compile__STATE_VARIABLE_Specs_54_54);
    }
#line 1459 "mercury_compile.m"
    {
#line 1459 "mercury_compile.m"
      top_level__mercury_compile_front_end__frontend_pass_13_p_0(top_level__mercury_compile__QualInfo_25, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, top_level__mercury_compile__Errors1_29, &top_level__mercury_compile__Errors2_30, top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__HLDS20_31, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_Specs_54_54, top_level__mercury_compile__STATE_VARIABLE_Specs_48);
    }
#line 1462 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors1_29 == (MR_Integer) 0);
#line 1462 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1462 "mercury_compile.m"
      {
#line 1463 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors2_30 == (MR_Integer) 0);
#line 1462 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1462 "mercury_compile.m"
          {
#line 1464 "mercury_compile.m"
            {
#line 1464 "mercury_compile.m"
              top_level__mercury_compile__V_59_59 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_12, *top_level__mercury_compile__STATE_VARIABLE_Specs_48);
            }
#line 1464 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_59_59 == (MR_Integer) 0);
#line 1462 "mercury_compile.m"
          }
#line 1462 "mercury_compile.m"
      }
#line 1515 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1466 "mercury_compile.m"
      {
#line 1466 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_32;
#line 1466 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_33;
#line 1466 "mercury_compile.m"
        MR_Word top_level__mercury_compile__HLDS21_34;
#line 1466 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeOptInt_35;
#line 1466 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeTransOptInt_36;
#line 1466 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeAnalysisRegistry_37;
#line 1466 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeXmlDocumentation_38;

#line 1466 "mercury_compile.m"
        {
#line 1466 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 45, &top_level__mercury_compile__Verbose_32);
        }
#line 1467 "mercury_compile.m"
        {
#line 1467 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 55, &top_level__mercury_compile__Stats_33);
        }
#line 1468 "mercury_compile.m"
        {
#line 1468 "mercury_compile.m"
          top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS20_31, &top_level__mercury_compile__HLDS21_34);
        }
#line 1469 "mercury_compile.m"
        {
#line 1469 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_35);
        }
#line 1471 "mercury_compile.m"
        {
#line 1471 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_36);
        }
#line 1473 "mercury_compile.m"
        {
#line 1473 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 89, &top_level__mercury_compile__MakeAnalysisRegistry_37);
        }
#line 1475 "mercury_compile.m"
        {
#line 1475 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 90, &top_level__mercury_compile__MakeXmlDocumentation_38);
        }
#line 1477 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__TypeCheckOnly_21 == (MR_Integer) 1);
#line 1479 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1478 "mercury_compile.m"
          {
#line 1478 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1478 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1478 "mercury_compile.m"
          }
#line 1479 "mercury_compile.m"
        else
#line 1494 "mercury_compile.m"
          {
#line 1479 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__ErrorCheckOnly_22 == (MR_Integer) 1);
#line 1494 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1482 "mercury_compile.m"
              {
#line 1482 "mercury_compile.m"
                MR_Word top_level__mercury_compile__UnusedArgs_39;

#line 1482 "mercury_compile.m"
                {
#line 1482 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 10, &top_level__mercury_compile__UnusedArgs_39);
                }
#line 1490 "mercury_compile.m"
                if ((top_level__mercury_compile__UnusedArgs_39 == (MR_Integer) 0))
#line 1491 "mercury_compile.m"
                  {
#line 1491 "mercury_compile.m"
                  }
#line 1490 "mercury_compile.m"
                else
#line 1484 "mercury_compile.m"
                  {
#line 1484 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__NoOptUnusedArgsGlobals_40;
#line 1484 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__HLDS21a_41;
#line 1489 "mercury_compile.m"
                    MR_Word top_level__mercury_compile___HLDS22_42;

#line 1485 "mercury_compile.m"
                    {
#line 1485 "mercury_compile.m"
                      libs__globals__set_option_4_p_0((MR_Integer) 352, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals_12, &top_level__mercury_compile__NoOptUnusedArgsGlobals_40);
                    }
#line 1487 "mercury_compile.m"
                    {
#line 1487 "mercury_compile.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile__NoOptUnusedArgsGlobals_40, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS21a_41);
                    }
#line 1489 "mercury_compile.m"
                    {
#line 1489 "mercury_compile.m"
                      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21a_41, &top_level__mercury_compile___HLDS22_42);
                    }
#line 1484 "mercury_compile.m"
                  }
#line 1493 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1482 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1482 "mercury_compile.m"
              }
#line 1494 "mercury_compile.m"
            else
#line 1497 "mercury_compile.m"
              {
#line 1494 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_35 == (MR_Integer) 1);
#line 1497 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1496 "mercury_compile.m"
                  {
#line 1496 "mercury_compile.m"
                    *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1496 "mercury_compile.m"
                    *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1496 "mercury_compile.m"
                  }
#line 1497 "mercury_compile.m"
                else
#line 1500 "mercury_compile.m"
                  {
#line 1497 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_36 == (MR_Integer) 1);
#line 1500 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 1498 "mercury_compile.m"
                      {
#line 1498 "mercury_compile.m"
                        {
#line 1498 "mercury_compile.m"
                          top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(top_level__mercury_compile__HLDS21_34, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                        }
#line 1499 "mercury_compile.m"
                        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1498 "mercury_compile.m"
                      }
#line 1500 "mercury_compile.m"
                    else
#line 1505 "mercury_compile.m"
                      {
#line 1500 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeAnalysisRegistry_37 == (MR_Integer) 1);
#line 1505 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 1502 "mercury_compile.m"
                          {
#line 1502 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__HLDS22_43;

#line 1501 "mercury_compile.m"
                            {
#line 1501 "mercury_compile.m"
                              top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_43);
                            }
#line 1503 "mercury_compile.m"
                            {
#line 1503 "mercury_compile.m"
                              top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(top_level__mercury_compile__HLDS22_43, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                            }
#line 1504 "mercury_compile.m"
                            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1502 "mercury_compile.m"
                          }
#line 1505 "mercury_compile.m"
                        else
#line 1508 "mercury_compile.m"
                          {
#line 1505 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeXmlDocumentation_38 == (MR_Integer) 1);
#line 1508 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 1506 "mercury_compile.m"
                              {
#line 1506 "mercury_compile.m"
                                {
#line 1506 "mercury_compile.m"
                                  check_hlds__xml_documentation__xml_documentation_3_p_0(top_level__mercury_compile__HLDS21_34);
                                }
#line 1507 "mercury_compile.m"
                                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1506 "mercury_compile.m"
                                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1506 "mercury_compile.m"
                              }
#line 1508 "mercury_compile.m"
                            else
#line 1510 "mercury_compile.m"
                              {
#line 1510 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__HLDS22_84;

#line 1509 "mercury_compile.m"
                                {
#line 1509 "mercury_compile.m"
                                  top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_84);
                                }
#line 1511 "mercury_compile.m"
                                {
#line 1511 "mercury_compile.m"
                                  top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(top_level__mercury_compile__NestedSubModules_14, top_level__mercury_compile__FindTimestampFiles_15, top_level__mercury_compile__MaybeTimestamps_26, top_level__mercury_compile__ModuleName_20, top_level__mercury_compile__HLDS22_84, *top_level__mercury_compile__STATE_VARIABLE_Specs_48, top_level__mercury_compile__ExtraObjFiles_16, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
#line 1511 "mercury_compile.m"
                                  return;
                                }
#line 1510 "mercury_compile.m"
                              }
#line 1508 "mercury_compile.m"
                          }
#line 1505 "mercury_compile.m"
                      }
#line 1500 "mercury_compile.m"
                  }
#line 1497 "mercury_compile.m"
              }
#line 1494 "mercury_compile.m"
          }
#line 1466 "mercury_compile.m"
      }
#line 1515 "mercury_compile.m"
    else
#line 1518 "mercury_compile.m"
      {
#line 1518 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_44;

#line 1518 "mercury_compile.m"
        {
#line 1518 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_44);
        }
#line 1519 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_44 == (MR_Integer) 0);
#line 1521 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1520 "mercury_compile.m"
          {
#line 1520 "mercury_compile.m"
            {
#line 1520 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1520 "mercury_compile.m"
          }
#line 1521 "mercury_compile.m"
        else
#line 1521 "mercury_compile.m"
          {
#line 1521 "mercury_compile.m"
          }
#line 1524 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1518 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1518 "mercury_compile.m"
      }
#line 1449 "mercury_compile.m"
  }
#line 1442 "mercury_compile.m"
}

#line 1413 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1413 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1413 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1413 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1413 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34)
#line 1413 "mercury_compile.m"
{
#line 1422 "mercury_compile.m"
  {
#line 1422 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_46_46;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 0)));
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 1)));
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NestedSubModules_26;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Module_27;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ImportedSpecs_29;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_30;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_31;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_37_37;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_40_40;
#line 1422 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_41_41;
#line 1432 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1423 "mercury_compile.m"
    {
#line 1423 "mercury_compile.m"
      parse_tree__modules__check_for_no_exports_7_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Items_22, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1424 "mercury_compile.m"
    {
#line 1424 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__SourceFileModuleName_16);
    }
#line 1426 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1425 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = top_level__mercury_compile__NestedSubModules0_17;
#line 1426 "mercury_compile.m"
    else
#line 1427 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1429 "mercury_compile.m"
    {
#line 1429 "mercury_compile.m"
      parse_tree__modules__grab_imported_modules_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__SourceFileName_15, top_level__mercury_compile__SourceFileModuleName_16, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__HaveReadModuleMap_19, top_level__mercury_compile__MaybeTimestamp_18, top_level__mercury_compile__Items_22, &top_level__mercury_compile__Module_27);
    }
#line 1432 "mercury_compile.m"
    {
#line 1432 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__Module_27, &top_level__mercury_compile__V_28_28, &top_level__mercury_compile__ImportedSpecs_29, &top_level__mercury_compile__Errors_30);
    }
#line 1433 "mercury_compile.m"
    {
#line 1433 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ImportedSpecs_29, top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1434 "mercury_compile.m"
    {
#line 1434 "mercury_compile.m"
      top_level__mercury_compile__V_41_41 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
    }
#line 6966 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1434 "mercury_compile.m"
    {
#line 1434 "mercury_compile.m"
      mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_46_46, top_level__mercury_compile__Errors_30, top_level__mercury_compile__V_41_41, &top_level__mercury_compile__FatalErrors_31);
    }
#line 1435 "mercury_compile.m"
    {
#line 1435 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_46_46, top_level__mercury_compile__FatalErrors_31);
    }
#line 1438 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1436 "mercury_compile.m"
      {
#line 1436 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_32_32;

#line 1436 "mercury_compile.m"
        {
#line 1436 "mercury_compile.m"
          top_level__mercury_compile__mercury_compile_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Module_27, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__FindTimestampFiles_20, top_level__mercury_compile__ExtraObjFiles_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__V_32_32, top_level__mercury_compile__STATE_VARIABLE_Specs_40_40, top_level__mercury_compile__STATE_VARIABLE_Specs_34);
        }
#line 1436 "mercury_compile.m"
      }
#line 1438 "mercury_compile.m"
    else
#line 1439 "mercury_compile.m"
      {
#line 1439 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1439 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_Specs_34 = top_level__mercury_compile__STATE_VARIABLE_Specs_40_40;
#line 1439 "mercury_compile.m"
      }
#line 1422 "mercury_compile.m"
  }
#line 1413 "mercury_compile.m"
}

#line 1388 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1388 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1388 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1388 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1388 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10)
#line 1388 "mercury_compile.m"
{
#line 1392 "mercury_compile.m"
  {
#line 1392 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1392 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1393 "mercury_compile.m"
    {
#line 1393 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TimestampSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1395 "mercury_compile.m"
    {
#line 1395 "mercury_compile.m"
      MR_Word base;
#line 1395 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "mercury_compile.m"
      *top_level__mercury_compile__TimestampFiles_10 = base;
#line 1395 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1395 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1395 "mercury_compile.m"
    }
#line 1392 "mercury_compile.m"
  }
#line 1388 "mercury_compile.m"
}

#line 1386 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1386 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1386 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1386 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1386 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1386 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1386 "mercury_compile.m"
{
#line 1386 "mercury_compile.m"
  {
#line 1386 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1386 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TimestampFiles_10;

#line 1386 "mercury_compile.m"
    {
#line 1386 "mercury_compile.m"
      top_level__mercury_compile__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TimestampFiles_10);
    }
#line 1386 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TimestampFiles_10));
#line 1386 "mercury_compile.m"
  }
#line 1386 "mercury_compile.m"
}

#line 1365 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1365 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1365 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4)
#line 1365 "mercury_compile.m"
{
#line 1368 "mercury_compile.m"
  {
#line 1368 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1368 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1368 "mercury_compile.m"
    MR_String top_level__mercury_compile__TimestampSuffix_6;

#line 1369 "mercury_compile.m"
    {
#line 1369 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1373 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1372 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".c_date";
#line 1373 "mercury_compile.m"
    else
#line 1373 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1378 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".cs_date";
#line 1373 "mercury_compile.m"
    else
#line 1373 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 4))
#line 1384 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".erl_date";
#line 1373 "mercury_compile.m"
    else
#line 1373 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1375 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".il_date";
#line 1373 "mercury_compile.m"
    else
#line 1381 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".java_date";
#line 1386 "mercury_compile.m"
    {
#line 1386 "mercury_compile.m"
      MR_Word base;
#line 1386 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "mercury_compile.m"
      *top_level__mercury_compile__FindTimestampFiles_4 = base;
#line 1386 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1386 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_timestamp_files_2_p_0_1));
#line 1386 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1386 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1386 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TimestampSuffix_6));
#line 1386 "mercury_compile.m"
    }
#line 1368 "mercury_compile.m"
  }
#line 1365 "mercury_compile.m"
}

#line 1354 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1354 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1354 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1354 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1354 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10)
#line 1354 "mercury_compile.m"
{
#line 1359 "mercury_compile.m"
  {
#line 1359 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1359 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1361 "mercury_compile.m"
    {
#line 1361 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TargetSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1363 "mercury_compile.m"
    {
#line 1363 "mercury_compile.m"
      MR_Word base;
#line 1363 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "mercury_compile.m"
      *top_level__mercury_compile__TargetFiles_10 = base;
#line 1363 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1363 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1363 "mercury_compile.m"
    }
#line 1359 "mercury_compile.m"
  }
#line 1354 "mercury_compile.m"
}

#line 1352 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1352 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1352 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1352 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1352 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1352 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1352 "mercury_compile.m"
{
#line 1352 "mercury_compile.m"
  {
#line 1352 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1352 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TargetFiles_10;

#line 1352 "mercury_compile.m"
    {
#line 1352 "mercury_compile.m"
      top_level__mercury_compile__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TargetFiles_10);
    }
#line 1352 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TargetFiles_10));
#line 1352 "mercury_compile.m"
  }
#line 1352 "mercury_compile.m"
}

#line 1341 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1341 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1341 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4)
#line 1341 "mercury_compile.m"
{
#line 1344 "mercury_compile.m"
  {
#line 1344 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1344 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1344 "mercury_compile.m"
    MR_String top_level__mercury_compile__TargetSuffix_6;

#line 1345 "mercury_compile.m"
    {
#line 1345 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1347 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1346 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".c";
#line 1347 "mercury_compile.m"
    else
#line 1347 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1348 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".cs";
#line 1347 "mercury_compile.m"
    else
#line 1347 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 4))
#line 1350 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".erl";
#line 1347 "mercury_compile.m"
    else
#line 1347 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1347 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".il";
#line 1347 "mercury_compile.m"
    else
#line 1349 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".java";
#line 1352 "mercury_compile.m"
    {
#line 1352 "mercury_compile.m"
      MR_Word base;
#line 1352 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "mercury_compile.m"
      *top_level__mercury_compile__FindTargetFiles_4 = base;
#line 1352 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1352 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1));
#line 1352 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1352 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1352 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TargetSuffix_6));
#line 1352 "mercury_compile.m"
    }
#line 1344 "mercury_compile.m"
  }
#line 1341 "mercury_compile.m"
}

#line 1300 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1300 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1300 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5)
#line 1300 "mercury_compile.m"
{
#line 1302 "mercury_compile.m"
  {
#line 1302 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1302 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1302 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Items_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));

#line 1303 "mercury_compile.m"
    {
#line 1303 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(top_level__mercury_compile__ModuleName_3, top_level__mercury_compile__ModuleToLink_5);
#line 1303 "mercury_compile.m"
      return;
    }
#line 1302 "mercury_compile.m"
  }
#line 1300 "mercury_compile.m"
}

#line 1289 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1289 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_3,
#line 1289 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Errors_4)
#line 1289 "mercury_compile.m"
{
#line 1291 "mercury_compile.m"
  {
#line 1291 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_5;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_6_6;

#line 1292 "mercury_compile.m"
    {
#line 1292 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__Errors_4);
    }
#line 1291 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1291 "mercury_compile.m"
      {
#line 1293 "mercury_compile.m"
        {
#line 1293 "mercury_compile.m"
          top_level__mercury_compile__V_6_6 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 1293 "mercury_compile.m"
        {
#line 1293 "mercury_compile.m"
          mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__Errors_4, top_level__mercury_compile__V_6_6, &top_level__mercury_compile__FatalErrors_5);
        }
#line 1295 "mercury_compile.m"
        {
#line 1295 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_7, top_level__mercury_compile__FatalErrors_5);
        }
#line 1296 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1297 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_3 == (MR_Integer) 1);
#line 1291 "mercury_compile.m"
      }
#line 1291 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1291 "mercury_compile.m"
  }
#line 1289 "mercury_compile.m"
}

#line 1280 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1280 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1280 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1280 "mercury_compile.m"
{
#line 1285 "mercury_compile.m"
  {
#line 1285 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1285 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1285 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1286 "mercury_compile.m"
    {
#line 1286 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_private_interface_file_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1286 "mercury_compile.m"
      return;
    }
#line 1285 "mercury_compile.m"
  }
#line 1280 "mercury_compile.m"
}

#line 1271 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1271 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1271 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1271 "mercury_compile.m"
{
#line 1276 "mercury_compile.m"
  {
#line 1276 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1276 "mercury_compile.m"
    {
#line 1276 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__HeadVar__5_5);
#line 1276 "mercury_compile.m"
      return;
    }
#line 1276 "mercury_compile.m"
  }
#line 1271 "mercury_compile.m"
}

#line 1262 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1262 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1262 "mercury_compile.m"
{
#line 1267 "mercury_compile.m"
  {
#line 1267 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1267 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1267 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1268 "mercury_compile.m"
    {
#line 1268 "mercury_compile.m"
      parse_tree__write_module_interface_files__write_interface_file_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1268 "mercury_compile.m"
      return;
    }
#line 1267 "mercury_compile.m"
  }
#line 1262 "mercury_compile.m"
}

#line 1259 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1259 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1259 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1259 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2)
#line 1259 "mercury_compile.m"
{
#line 1259 "mercury_compile.m"
  {
#line 1259 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1259 "mercury_compile.m"
    MR_String top_level__mercury_compile__conv4_ModuleToLink_5;

#line 1259 "mercury_compile.m"
    {
#line 1259 "mercury_compile.m"
      top_level__mercury_compile__module_to_link_2_p_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv4_ModuleToLink_5);
    }
#line 1259 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv4_ModuleToLink_5));
#line 1259 "mercury_compile.m"
  }
#line 1259 "mercury_compile.m"
}

#line 1254 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1254 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1254 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1254 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1254 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1254 "mercury_compile.m"
{
#line 1254 "mercury_compile.m"
  {
#line 1254 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1254 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_ExtraObjFiles_23;
#line 1254 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_34;

#line 1254 "mercury_compile.m"
    {
#line 1254 "mercury_compile.m"
      top_level__mercury_compile__compile_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 9))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv1_ExtraObjFiles_23, ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_34);
    }
#line 1254 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv1_ExtraObjFiles_23));
#line 1254 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_34));
#line 1254 "mercury_compile.m"
  }
#line 1254 "mercury_compile.m"
}

#line 1243 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1243 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1243 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1243 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1243 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24)
#line 1243 "mercury_compile.m"
{
#line 1252 "mercury_compile.m"
  {
#line 1252 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1252 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeInfo_45_45;
#line 1252 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_51_51;
#line 1252 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFileLists_26;
#line 1252 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_32_32;
#line 1252 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_33_33;
#line 1253 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33;
#line 1253 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34;
#line 1258 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumWarnings_27;
#line 1258 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumErrors_28;

#line 1254 "mercury_compile.m"
    {
#line 1254 "mercury_compile.m"
      top_level__mercury_compile__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_10[0]));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile__compile_all_submodules_13_p_0_1));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile__Globals_14));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 4) = ((MR_Box) (top_level__mercury_compile__FileName_15));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 5) = ((MR_Box) (top_level__mercury_compile__SourceFileModuleName_16));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 6) = ((MR_Box) (top_level__mercury_compile__NestedSubModules_17));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 7) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_18));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 8) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMap_19));
#line 1254 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 9) = ((MR_Box) (top_level__mercury_compile__FindTimestampFiles_20));
#line 1254 "mercury_compile.m"
    }
#line 7650 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeInfo_45_45 = (MR_Word) &top_level__mercury_compile_scalar_common_3[1];
#line 1253 "mercury_compile.m"
    {
#line 1253 "mercury_compile.m"
      mercury__list__map_foldl2_7_p_2(top_level__mercury_compile__TypeInfo_45_45, (MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_32_32, top_level__mercury_compile__SubModuleList_21, &top_level__mercury_compile__ExtraObjFileLists_26, ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_Specs_0_29)), &top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34);
    }
#line 1253 "mercury_compile.m"
    top_level__mercury_compile__STATE_VARIABLE_Specs_33_33 = ((MR_Word) top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33);
#line 1258 "mercury_compile.m"
    {
#line 1258 "mercury_compile.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile__Globals_14, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_27, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_28);
    }
#line 7664 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1259 "mercury_compile.m"
    {
#line 1259 "mercury_compile.m"
      mercury__list__map_3_p_0(top_level__mercury_compile__TypeInfo_45_45, top_level__mercury_compile__TypeCtorInfo_51_51, (MR_Word) &top_level__mercury_compile_scalar_common_3[3], top_level__mercury_compile__SubModuleList_21, top_level__mercury_compile__ModulesToLink_23);
    }
#line 1260 "mercury_compile.m"
    {
#line 1260 "mercury_compile.m"
      mercury__list__condense_2_p_0(top_level__mercury_compile__TypeCtorInfo_51_51, top_level__mercury_compile__ExtraObjFileLists_26, top_level__mercury_compile__ExtraObjFiles_24);
#line 1260 "mercury_compile.m"
      return;
    }
#line 1252 "mercury_compile.m"
  }
#line 1243 "mercury_compile.m"
}

#line 1191 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1191 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1191 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1191 "mercury_compile.m"
{
#line 1191 "mercury_compile.m"
  {
#line 1191 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1191 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1191 "mercury_compile.m"
    {
#line 1191 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1191__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1191 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1191 "mercury_compile.m"
  }
#line 1191 "mercury_compile.m"
}

#line 1147 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1147 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1147 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1147 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 1147 "mercury_compile.m"
{
#line 1152 "mercury_compile.m"
  {
#line 1152 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInt_18;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInt_19;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_20;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_21;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeAnalysisRegistry_22;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeXmlDocumentation_23;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DirectReport_24;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_26;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 1152 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_28;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamp_29;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_30;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Specs0_31;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors_32;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaveReadModuleMap_33;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_34;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_60_60;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_61_61;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_62_62;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_63_63;
#line 1152 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_64_64;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_7_94;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FatalErrors_92;
#line 1291 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_93_93;

#line 1153 "mercury_compile.m"
    {
#line 1153 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 84, &top_level__mercury_compile__MakeShortInt_18);
    }
#line 1155 "mercury_compile.m"
    {
#line 1155 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 85, &top_level__mercury_compile__MakeInt_19);
    }
#line 1157 "mercury_compile.m"
    {
#line 1157 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 87, &top_level__mercury_compile__MakeOptInt_20);
    }
#line 1159 "mercury_compile.m"
    {
#line 1159 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 88, &top_level__mercury_compile__MakeTransOptInt_21);
    }
#line 1161 "mercury_compile.m"
    {
#line 1161 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 89, &top_level__mercury_compile__MakeAnalysisRegistry_22);
    }
#line 1163 "mercury_compile.m"
    {
#line 1163 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 90, &top_level__mercury_compile__MakeXmlDocumentation_23);
    }
#line 1166 "mercury_compile.m"
    {
#line 1166 "mercury_compile.m"
      top_level__mercury_compile__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 0) = ((MR_Box) (top_level__mercury_compile__MakeXmlDocumentation_23));
#line 1166 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "mercury_compile.m"
    }
#line 1166 "mercury_compile.m"
    {
#line 1166 "mercury_compile.m"
      top_level__mercury_compile__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 0) = ((MR_Box) (top_level__mercury_compile__MakeAnalysisRegistry_22));
#line 1166 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 1) = ((MR_Box) (top_level__mercury_compile__V_64_64));
#line 1166 "mercury_compile.m"
    }
#line 1165 "mercury_compile.m"
    {
#line 1165 "mercury_compile.m"
      top_level__mercury_compile__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile__MakeTransOptInt_21));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 1) = ((MR_Box) (top_level__mercury_compile__V_63_63));
#line 1165 "mercury_compile.m"
    }
#line 1165 "mercury_compile.m"
    {
#line 1165 "mercury_compile.m"
      top_level__mercury_compile__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 0) = ((MR_Box) (top_level__mercury_compile__MakeOptInt_20));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 1) = ((MR_Box) (top_level__mercury_compile__V_62_62));
#line 1165 "mercury_compile.m"
    }
#line 1165 "mercury_compile.m"
    {
#line 1165 "mercury_compile.m"
      top_level__mercury_compile__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 0) = ((MR_Box) (top_level__mercury_compile__MakeInt_19));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 1) = ((MR_Box) (top_level__mercury_compile__V_61_61));
#line 1165 "mercury_compile.m"
    }
#line 1165 "mercury_compile.m"
    {
#line 1165 "mercury_compile.m"
      top_level__mercury_compile__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 0) = ((MR_Box) (top_level__mercury_compile__MakeShortInt_18));
#line 1165 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 1) = ((MR_Box) (top_level__mercury_compile__V_60_60));
#line 1165 "mercury_compile.m"
    }
#line 1165 "mercury_compile.m"
    {
#line 1165 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_59_59, &top_level__mercury_compile__DirectReport_24);
    }
#line 1169 "mercury_compile.m"
    if ((top_level__mercury_compile__DirectReport_24 == (MR_Integer) 0))
#line 1170 "mercury_compile.m"
      {
#line 1170 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ReportCmdLineArgsDotErr_25;

#line 1171 "mercury_compile.m"
        {
#line 1171 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 54, &top_level__mercury_compile__ReportCmdLineArgsDotErr_25);
        }
#line 1173 "mercury_compile.m"
        {
#line 1173 "mercury_compile.m"
          top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgsDotErr_25, top_level__mercury_compile__OptionArgs_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1170 "mercury_compile.m"
      }
#line 1169 "mercury_compile.m"
    else
#line 1168 "mercury_compile.m"
      {
#line 1168 "mercury_compile.m"
      }
#line 1176 "mercury_compile.m"
    {
#line 1176 "mercury_compile.m"
      top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_10, &top_level__mercury_compile__Globals_26, top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0, &top_level__mercury_compile__ModuleName_27, &top_level__mercury_compile__FileName_28, &top_level__mercury_compile__MaybeTimestamp_29, &top_level__mercury_compile__Items_30, &top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Errors_32, top_level__mercury_compile__HaveReadModuleMap0_14, &top_level__mercury_compile__HaveReadModuleMap_33);
    }
#line 1179 "mercury_compile.m"
    {
#line 1179 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_34);
    }
#line 7915 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_7_94 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1292 "mercury_compile.m"
    {
#line 1292 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_94, top_level__mercury_compile__Errors_32);
    }
#line 1291 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1291 "mercury_compile.m"
      {
#line 1293 "mercury_compile.m"
        {
#line 1293 "mercury_compile.m"
          top_level__mercury_compile__V_93_93 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 1293 "mercury_compile.m"
        {
#line 1293 "mercury_compile.m"
          mercury__set__intersect_3_p_0(top_level__mercury_compile__TypeCtorInfo_7_94, top_level__mercury_compile__Errors_32, top_level__mercury_compile__V_93_93, &top_level__mercury_compile__FatalErrors_92);
        }
#line 1295 "mercury_compile.m"
        {
#line 1295 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile__TypeCtorInfo_7_94, top_level__mercury_compile__FatalErrors_92);
        }
#line 1296 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1297 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_34 == (MR_Integer) 1);
#line 1291 "mercury_compile.m"
      }
#line 1186 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1183 "mercury_compile.m"
      {
#line 1182 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumWarnings_35;
#line 1182 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumErrors_36;

#line 1182 "mercury_compile.m"
        {
#line 1182 "mercury_compile.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs0_31, top_level__mercury_compile__Globals_26, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_35, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_36);
        }
#line 1184 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1185 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1183 "mercury_compile.m"
      }
#line 1186 "mercury_compile.m"
    else
#line 1188 "mercury_compile.m"
      {
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_86_86;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleList0_37;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs1_38;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleListToCompile_43;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules0_44;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules_45;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FindTimestampFiles_46;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TraceProf_47;
#line 1188 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GlobalsToUse_50;
#line 1209 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_88_88;

#line 1187 "mercury_compile.m"
        {
#line 1187 "mercury_compile.m"
          parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__Items_30, &top_level__mercury_compile__SubModuleList0_37, top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Specs1_38);
        }
#line 1195 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeModulesToRecompile_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "mercury_compile.m"
          top_level__mercury_compile__SubModuleListToCompile_43 = top_level__mercury_compile__SubModuleList0_37;
#line 1195 "mercury_compile.m"
        else
#line 1190 "mercury_compile.m"
          {
#line 1190 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeModulesToRecompile_13, (MR_Integer) 0)));
#line 1190 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ToRecompile_40;

#line 1191 "mercury_compile.m"
            {
#line 1191 "mercury_compile.m"
              top_level__mercury_compile__ToRecompile_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 1191 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 1) = ((MR_Box) (top_level__mercury_compile__process_module_2_9_p_0_1));
#line 1191 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1191 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToRecompile_39));
#line 1191 "mercury_compile.m"
            }
#line 1194 "mercury_compile.m"
            {
#line 1194 "mercury_compile.m"
              mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[1], top_level__mercury_compile__ToRecompile_40, top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__SubModuleListToCompile_43);
            }
#line 1190 "mercury_compile.m"
          }
#line 8031 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1199 "mercury_compile.m"
        {
#line 1199 "mercury_compile.m"
          mercury__assoc_list__keys_2_p_0(top_level__mercury_compile__TypeCtorInfo_86_86, (MR_Word) &top_level__mercury_compile_scalar_common_1[1], top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__NestedSubModules0_44);
        }
#line 1200 "mercury_compile.m"
        {
#line 1200 "mercury_compile.m"
          mercury__list__delete_all_3_p_1(top_level__mercury_compile__TypeCtorInfo_86_86, top_level__mercury_compile__NestedSubModules0_44, ((MR_Box) (top_level__mercury_compile__ModuleName_27)), &top_level__mercury_compile__NestedSubModules_45);
        }
#line 1202 "mercury_compile.m"
        {
#line 1202 "mercury_compile.m"
          top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_26, &top_level__mercury_compile__FindTimestampFiles_46);
        }
#line 1204 "mercury_compile.m"
        {
#line 1204 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 121, &top_level__mercury_compile__TraceProf_47);
        }
#line 1207 "mercury_compile.m"
        {
#line 1207 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(top_level__mercury_compile__ModuleName_27);
        }
#line 1207 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1207 "mercury_compile.m"
          {
#line 1209 "mercury_compile.m"
            {
#line 1209 "mercury_compile.m"
              top_level__mercury_compile__V_88_88 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
            }
#line 1209 "mercury_compile.m"
            {
#line 1209 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__V_88_88);
            }
#line 1209 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1210 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TraceProf_47 == (MR_Integer) 1);
#line 1208 "mercury_compile.m"
            top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1207 "mercury_compile.m"
          }
#line 1223 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1219 "mercury_compile.m"
          {
#line 1219 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GlobalsNoTrace0_48;

#line 1218 "mercury_compile.m"
            {
#line 1218 "mercury_compile.m"
              libs__globals__set_option_4_p_0((MR_Integer) 270, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals_26, &top_level__mercury_compile__GlobalsNoTrace0_48);
            }
#line 1220 "mercury_compile.m"
            {
#line 1220 "mercury_compile.m"
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile__GlobalsNoTrace0_48, &top_level__mercury_compile__GlobalsToUse_50);
            }
#line 1219 "mercury_compile.m"
          }
#line 1223 "mercury_compile.m"
        else
#line 1224 "mercury_compile.m"
          top_level__mercury_compile__GlobalsToUse_50 = top_level__mercury_compile__Globals_26;
#line 1226 "mercury_compile.m"
        {
#line 1226 "mercury_compile.m"
          top_level__mercury_compile__compile_all_submodules_13_p_0(top_level__mercury_compile__GlobalsToUse_50, top_level__mercury_compile__FileName_28, top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__NestedSubModules_45, top_level__mercury_compile__MaybeTimestamp_29, top_level__mercury_compile__HaveReadModuleMap_33, top_level__mercury_compile__FindTimestampFiles_46, top_level__mercury_compile__SubModuleListToCompile_43, top_level__mercury_compile__Specs1_38, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 1226 "mercury_compile.m"
          return;
        }
#line 1188 "mercury_compile.m"
      }
#line 1152 "mercury_compile.m"
  }
#line 1147 "mercury_compile.m"
}

#line 1125 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1125 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1125 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12)
#line 1125 "mercury_compile.m"
{
#line 1134 "mercury_compile.m"
  {
#line 1134 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1134 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_8, (MR_Integer) 1)));
#line 1134 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15;

#line 1134 "mercury_compile.m"
    {
#line 1134 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__ProcessModule_8), ((MR_Box) (top_level__mercury_compile__FileName_9)), ((MR_Box) (top_level__mercury_compile__ModuleName_10)), ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_11)), ((MR_Box) (top_level__mercury_compile__SubModule_12)), ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15);
    }
#line 1134 "mercury_compile.m"
  }
#line 1125 "mercury_compile.m"
}

#line 1052 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 1052 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1052 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1052 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1052 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1052 "mercury_compile.m"
{
#line 1052 "mercury_compile.m"
  {
#line 1052 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1052 "mercury_compile.m"
    {
#line 1052 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
#line 1052 "mercury_compile.m"
      return;
    }
#line 1052 "mercury_compile.m"
  }
#line 1052 "mercury_compile.m"
}

#line 1033 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1033 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1033 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1033 "mercury_compile.m"
{
#line 1033 "mercury_compile.m"
  {
#line 1033 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1033 "mercury_compile.m"
    {
#line 1033 "mercury_compile.m"
      top_level__mercury_compile__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1033 "mercury_compile.m"
      return;
    }
#line 1033 "mercury_compile.m"
  }
#line 1033 "mercury_compile.m"
}

#line 1030 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1030 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1030 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1030 "mercury_compile.m"
{
#line 1030 "mercury_compile.m"
  {
#line 1030 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1030 "mercury_compile.m"
    {
#line 1030 "mercury_compile.m"
      top_level__mercury_compile__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1030 "mercury_compile.m"
      return;
    }
#line 1030 "mercury_compile.m"
  }
#line 1030 "mercury_compile.m"
}

#line 1026 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1026 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1026 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1026 "mercury_compile.m"
{
#line 1026 "mercury_compile.m"
  {
#line 1026 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1026 "mercury_compile.m"
    {
#line 1026 "mercury_compile.m"
      top_level__mercury_compile__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 1026 "mercury_compile.m"
      return;
    }
#line 1026 "mercury_compile.m"
  }
#line 1026 "mercury_compile.m"
}

#line 1009 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 1009 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 1009 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 1009 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 1009 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 1009 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12)
#line 1009 "mercury_compile.m"
{
#line 1013 "mercury_compile.m"
  {
#line 1013 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1013 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_14;
#line 1013 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInterface_15;
#line 1013 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInterface_16;
#line 1013 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakePrivateInterface_17;
#line 1013 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ConvertToMercury_18;
#line 1013 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateVersionNumbers_19;
#line 1058 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProcessModule_20;
#line 1058 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReturnTimestamp_21;

#line 1014 "mercury_compile.m"
    {
#line 1014 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_14);
    }
#line 1015 "mercury_compile.m"
    {
#line 1015 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 85, &top_level__mercury_compile__MakeInterface_15);
    }
#line 1016 "mercury_compile.m"
    {
#line 1016 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 84, &top_level__mercury_compile__MakeShortInterface_16);
    }
#line 1018 "mercury_compile.m"
    {
#line 1018 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 86, &top_level__mercury_compile__MakePrivateInterface_17);
    }
#line 1020 "mercury_compile.m"
    {
#line 1020 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 96, &top_level__mercury_compile__ConvertToMercury_18);
    }
#line 1022 "mercury_compile.m"
    {
#line 1022 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 116, &top_level__mercury_compile__GenerateVersionNumbers_19);
    }
#line 1025 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeInterface_15 == (MR_Integer) 1);
#line 1029 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1026 "mercury_compile.m"
      {
#line 1026 "mercury_compile.m"
        {
#line 1026 "mercury_compile.m"
          top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1026 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_1));
#line 1026 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1026 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1026 "mercury_compile.m"
        }
#line 1027 "mercury_compile.m"
        {
#line 1027 "mercury_compile.m"
          top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
        }
#line 1026 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_TRUE;
#line 1026 "mercury_compile.m"
      }
#line 1029 "mercury_compile.m"
    else
#line 1032 "mercury_compile.m"
      {
#line 1029 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeShortInterface_16 == (MR_Integer) 1);
#line 1032 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1030 "mercury_compile.m"
          {
#line 1030 "mercury_compile.m"
            {
#line 1030 "mercury_compile.m"
              top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1030 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_2));
#line 1030 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1030 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1030 "mercury_compile.m"
            }
#line 1031 "mercury_compile.m"
            top_level__mercury_compile__ReturnTimestamp_21 = (MR_Integer) 1;
#line 1030 "mercury_compile.m"
            top_level__mercury_compile__succeeded = MR_TRUE;
#line 1030 "mercury_compile.m"
          }
#line 1032 "mercury_compile.m"
        else
#line 1036 "mercury_compile.m"
          {
#line 1032 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakePrivateInterface_17 == (MR_Integer) 1);
#line 1036 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1036 "mercury_compile.m"
              {
#line 1033 "mercury_compile.m"
                {
#line 1033 "mercury_compile.m"
                  top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 1033 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_3));
#line 1033 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1033 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 1033 "mercury_compile.m"
                }
#line 1034 "mercury_compile.m"
                {
#line 1034 "mercury_compile.m"
                  top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
                }
#line 1034 "mercury_compile.m"
                top_level__mercury_compile__succeeded = MR_TRUE;
#line 1036 "mercury_compile.m"
              }
#line 1036 "mercury_compile.m"
          }
#line 1032 "mercury_compile.m"
      }
#line 1058 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1042 "mercury_compile.m"
      {
#line 1042 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Globals_22;
#line 1042 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_23;
#line 1042 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_24;
#line 1042 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestamp_25;
#line 1042 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Items_26;
#line 1042 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs0_27;
#line 1042 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Errors_28;
#line 1042 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_53_53;
#line 1040 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_29_29;

#line 1042 "mercury_compile.m"
        {
#line 1042 "mercury_compile.m"
          top_level__mercury_compile__V_53_53 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
        }
#line 1040 "mercury_compile.m"
        {
#line 1040 "mercury_compile.m"
          top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_22, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ReturnTimestamp_21, &top_level__mercury_compile__ModuleName_23, &top_level__mercury_compile__FileName_24, &top_level__mercury_compile__MaybeTimestamp_25, &top_level__mercury_compile__Items_26, &top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Errors_28, top_level__mercury_compile__V_53_53, &top_level__mercury_compile__V_29_29);
        }
#line 1043 "mercury_compile.m"
        {
#line 1043 "mercury_compile.m"
          top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Errors_28);
        }
#line 1045 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1045 "mercury_compile.m"
          {
#line 1045 "mercury_compile.m"
          }
#line 1045 "mercury_compile.m"
        else
#line 1047 "mercury_compile.m"
          {
#line 1047 "mercury_compile.m"
            MR_Word top_level__mercury_compile__SubModuleList_30;
#line 1047 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_31;
#line 1047 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_58_58;
#line 1049 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_32;
#line 1049 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_33;
#line 1051 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46;

#line 1046 "mercury_compile.m"
            {
#line 1046 "mercury_compile.m"
              parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_23, top_level__mercury_compile__Items_26, &top_level__mercury_compile__SubModuleList_30, top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Specs_31);
            }
#line 1049 "mercury_compile.m"
            {
#line 1049 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_31, top_level__mercury_compile__Globals_22, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_32, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_33);
            }
#line 1052 "mercury_compile.m"
            {
#line 1052 "mercury_compile.m"
              top_level__mercury_compile__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[1]));
#line 1052 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_4));
#line 1052 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1052 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_20));
#line 1052 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 4) = ((MR_Box) (top_level__mercury_compile__FileName_24));
#line 1052 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_23));
#line 1052 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_25));
#line 1052 "mercury_compile.m"
            }
#line 1051 "mercury_compile.m"
            {
#line 1051 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &top_level__mercury_compile_scalar_common_3[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_58_58, top_level__mercury_compile__SubModuleList_30, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46);
            }
#line 1047 "mercury_compile.m"
          }
#line 1056 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1042 "mercury_compile.m"
      }
#line 1058 "mercury_compile.m"
    else
#line 1075 "mercury_compile.m"
      {
#line 1059 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ConvertToMercury_18 == (MR_Integer) 1);
#line 1075 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1063 "mercury_compile.m"
          {
#line 1063 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_61_61;
#line 1063 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_80;
#line 1063 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_81;
#line 1063 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Items_82;
#line 1063 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Errors_83;
#line 1063 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_84;
#line 1061 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_34_34;
#line 1061 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_35_35;
#line 1061 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_36_36;
#line 1065 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_78;
#line 1065 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_79;

#line 1063 "mercury_compile.m"
            {
#line 1063 "mercury_compile.m"
              top_level__mercury_compile__V_61_61 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
            }
#line 1061 "mercury_compile.m"
            {
#line 1061 "mercury_compile.m"
              top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_80, top_level__mercury_compile__FileOrModule_10, (MR_Integer) 1, &top_level__mercury_compile__ModuleName_81, &top_level__mercury_compile__V_34_34, &top_level__mercury_compile__V_35_35, &top_level__mercury_compile__Items_82, &top_level__mercury_compile__Specs_84, &top_level__mercury_compile__Errors_83, top_level__mercury_compile__V_61_61, &top_level__mercury_compile__V_36_36);
            }
#line 1065 "mercury_compile.m"
            {
#line 1065 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_84, top_level__mercury_compile__Globals_80, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_78, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_79);
            }
#line 1066 "mercury_compile.m"
            {
#line 1066 "mercury_compile.m"
              top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Errors_83);
            }
#line 1068 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1068 "mercury_compile.m"
              {
#line 1068 "mercury_compile.m"
              }
#line 1068 "mercury_compile.m"
            else
#line 1070 "mercury_compile.m"
              {
#line 1070 "mercury_compile.m"
                MR_String top_level__mercury_compile__OutputFileName_37;

#line 1069 "mercury_compile.m"
                {
#line 1069 "mercury_compile.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, (MR_String) ".ugly", (MR_Integer) 0, &top_level__mercury_compile__OutputFileName_37);
                }
#line 1071 "mercury_compile.m"
                {
#line 1071 "mercury_compile.m"
                  parse_tree__mercury_to_mercury__convert_to_mercury_6_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, top_level__mercury_compile__OutputFileName_37, top_level__mercury_compile__Items_82);
                }
#line 1070 "mercury_compile.m"
              }
#line 1073 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1074 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1063 "mercury_compile.m"
          }
#line 1075 "mercury_compile.m"
        else
#line 1076 "mercury_compile.m"
          {
#line 1076 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart0_38;
#line 1076 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_39;
#line 1076 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_43;
#line 1076 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMap_44;
#line 1076 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_93;
#line 1112 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_76_76;

#line 1076 "mercury_compile.m"
            {
#line 1076 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 115, &top_level__mercury_compile__Smart0_38);
            }
#line 1077 "mercury_compile.m"
            {
#line 1077 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_39);
            }
#line 8666 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__DisableSmart_39 == (MR_Integer) 0))
#line 8668 "top_level.mercury_compile.c"
              {
#line 1085 "mercury_compile.m"
                top_level__mercury_compile__Globals_93 = top_level__mercury_compile__Globals0_8;
#line 1107 "mercury_compile.m"
                if ((top_level__mercury_compile__Smart0_38 == (MR_Integer) 0))
#line 1108 "mercury_compile.m"
                  {
#line 1109 "mercury_compile.m"
                    {
#line 1109 "mercury_compile.m"
                      mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1110 "mercury_compile.m"
                    top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1108 "mercury_compile.m"
                  }
#line 1107 "mercury_compile.m"
                else
#line 1089 "mercury_compile.m"
                  {
#line 1089 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTargetFiles_41;
#line 1089 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTimestampFiles_42;
#line 1089 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_89;

#line 1092 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 1093 "mercury_compile.m"
                      {
#line 1093 "mercury_compile.m"
                        MR_String top_level__mercury_compile__FileName_87 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 1100 "mercury_compile.m"
                        {
#line 1100 "mercury_compile.m"
                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_87, &top_level__mercury_compile__ModuleName_89);
                        }
#line 1093 "mercury_compile.m"
                      }
#line 1092 "mercury_compile.m"
                    else
#line 1091 "mercury_compile.m"
                      top_level__mercury_compile__ModuleName_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));
#line 1102 "mercury_compile.m"
                    {
#line 1102 "mercury_compile.m"
                      top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTargetFiles_41);
                    }
#line 1103 "mercury_compile.m"
                    {
#line 1103 "mercury_compile.m"
                      top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTimestampFiles_42);
                    }
#line 1104 "mercury_compile.m"
                    {
#line 1104 "mercury_compile.m"
                      recompilation__check__should_recompile_8_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__ModuleName_89, top_level__mercury_compile__FindTargetFiles_41, top_level__mercury_compile__FindTimestampFiles_42, &top_level__mercury_compile__ModulesToRecompile_43, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1089 "mercury_compile.m"
                  }
#line 8731 "top_level.mercury_compile.c"
              }
#line 8733 "top_level.mercury_compile.c"
            else
#line 8735 "top_level.mercury_compile.c"
              {
#line 1080 "mercury_compile.m"
                {
#line 1080 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_93);
                }
#line 1109 "mercury_compile.m"
                {
#line 1109 "mercury_compile.m"
                  mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                }
#line 1110 "mercury_compile.m"
                top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8749 "top_level.mercury_compile.c"
              }
#line 1112 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToRecompile_43)) == (MR_mktag((MR_Integer) 1)));
#line 1112 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1112 "mercury_compile.m"
              {
#line 1112 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToRecompile_43, (MR_Integer) 0)));
#line 1112 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "mercury_compile.m"
              }
#line 1118 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1116 "mercury_compile.m"
              {
#line 1116 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1117 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1116 "mercury_compile.m"
              }
#line 1118 "mercury_compile.m"
            else
#line 1119 "mercury_compile.m"
              {
#line 1119 "mercury_compile.m"
                top_level__mercury_compile__process_module_2_9_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ModulesToRecompile_43, top_level__mercury_compile__HaveReadModuleMap_44, top_level__mercury_compile__ModulesToLink_11, top_level__mercury_compile__ExtraObjFiles_12);
#line 1119 "mercury_compile.m"
                return;
              }
#line 1076 "mercury_compile.m"
          }
#line 1075 "mercury_compile.m"
      }
#line 1013 "mercury_compile.m"
  }
#line 1009 "mercury_compile.m"
}

#line 1004 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 1004 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1)
#line 1004 "mercury_compile.m"
{
#line 1006 "mercury_compile.m"
  {
#line 1006 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1006 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HeadVar__2_2;

#line 1006 "mercury_compile.m"
    if ((top_level__mercury_compile__HeadVar__1_1 == (MR_Integer) 0))
#line 1006 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 1;
#line 1006 "mercury_compile.m"
    else
#line 1007 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 0;
#line 1006 "mercury_compile.m"
    return top_level__mercury_compile__HeadVar__2_2;
#line 1006 "mercury_compile.m"
  }
#line 1004 "mercury_compile.m"
}

#line 871 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 871 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Errors_24,
#line 871 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 871 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43)
#line 871 "mercury_compile.m"
{
#line 882 "mercury_compile.m"
  {
#line 882 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 882 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
#line 924 "mercury_compile.m"
      {
#line 924 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 924 "mercury_compile.m"
        MR_Word top_level__mercury_compile__DefaultModuleName_37;
#line 924 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_136;
#line 924 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_142;
#line 947 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_131;
#line 947 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_132;
#line 947 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_133;
#line 947 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_134;
#line 934 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_38_38;

#line 925 "mercury_compile.m"
        {
#line 925 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 45, &top_level__mercury_compile__Verbose_136);
        }
#line 926 "mercury_compile.m"
        {
#line 926 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, (MR_String) "% Parsing file \140");
        }
#line 927 "mercury_compile.m"
        {
#line 927 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, top_level__mercury_compile__FileName_36);
        }
#line 928 "mercury_compile.m"
        {
#line 928 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_136, (MR_String) "\' and imported interfaces...\n");
        }
#line 930 "mercury_compile.m"
        {
#line 930 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_36, &top_level__mercury_compile__DefaultModuleName_37);
        }
#line 934 "mercury_compile.m"
        {
#line 934 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__DefaultModuleName_37, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_131, &top_level__mercury_compile__SpecsPrime_132, &top_level__mercury_compile__ErrorsPrime_133, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MaybeTimestampPrime_134);
        }
#line 947 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 940 "mercury_compile.m"
          {
#line 940 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_53_53;

#line 940 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 942 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_19 = top_level__mercury_compile__DefaultModuleName_37;
#line 941 "mercury_compile.m"
            {
#line 941 "mercury_compile.m"
              top_level__mercury_compile__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 941 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 941 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 1) = ((MR_Box) ((MR_String) ".m"));
#line 941 "mercury_compile.m"
            }
#line 941 "mercury_compile.m"
            {
#line 941 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_53_53)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 943 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_131;
#line 944 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_132;
#line 945 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_133;
#line 946 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_134;
#line 940 "mercury_compile.m"
          }
#line 947 "mercury_compile.m"
        else
#line 953 "mercury_compile.m"
          {
#line 953 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart_39;
#line 953 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_130;

#line 951 "mercury_compile.m"
            {
#line 951 "mercury_compile.m"
              parse_tree__read_modules__read_module_from_file_13_p_0(top_level__mercury_compile__Globals0_15, top_level__mercury_compile__FileName_36, (MR_String) ".m", (MR_String) "Reading file", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24, top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 954 "mercury_compile.m"
            {
#line 954 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_130);
            }
#line 959 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_130 == (MR_Integer) 0))
#line 961 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 959 "mercury_compile.m"
            else
#line 956 "mercury_compile.m"
              {
#line 957 "mercury_compile.m"
                {
#line 957 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 956 "mercury_compile.m"
              }
#line 970 "mercury_compile.m"
            {
#line 970 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 115, &top_level__mercury_compile__Smart_39);
            }
#line 972 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Smart_39 == (MR_Integer) 1);
#line 972 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 972 "mercury_compile.m"
              {
#line 973 "mercury_compile.m"
                {
#line 973 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__DefaultModuleName_37);
                }
#line 973 "mercury_compile.m"
                top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 972 "mercury_compile.m"
              }
#line 995 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 978 "mercury_compile.m"
              {
#line 978 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Warn_40;

#line 977 "mercury_compile.m"
                {
#line 977 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 23, &top_level__mercury_compile__Warn_40);
                }
#line 991 "mercury_compile.m"
                if ((top_level__mercury_compile__Warn_40 == (MR_Integer) 0))
#line 992 "mercury_compile.m"
                  {
#line 992 "mercury_compile.m"
                  }
#line 991 "mercury_compile.m"
                else
#line 980 "mercury_compile.m"
                  {
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Pieces_41;
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_68_68;
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_71_71;
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_73_73;
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_74_74;
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_75_75;
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_78_78;
#line 980 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_79_79;

#line 984 "mercury_compile.m"
                    {
#line 984 "mercury_compile.m"
                      top_level__mercury_compile__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 984 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_74_74, 0) = ((MR_Box) (top_level__mercury_compile__FileName_36));
#line 984 "mercury_compile.m"
                    }
#line 985 "mercury_compile.m"
                    {
#line 985 "mercury_compile.m"
                      top_level__mercury_compile__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 985 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 1) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 985 "mercury_compile.m"
                    }
#line 985 "mercury_compile.m"
                    {
#line 985 "mercury_compile.m"
                      top_level__mercury_compile__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile__V_79_79));
#line 985 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[14])));
#line 985 "mercury_compile.m"
                    }
#line 984 "mercury_compile.m"
                    {
#line 984 "mercury_compile.m"
                      top_level__mercury_compile__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[29])));
#line 984 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 1) = ((MR_Box) (top_level__mercury_compile__V_78_78));
#line 984 "mercury_compile.m"
                    }
#line 984 "mercury_compile.m"
                    {
#line 984 "mercury_compile.m"
                      top_level__mercury_compile__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 0) = ((MR_Box) (top_level__mercury_compile__V_74_74));
#line 984 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 1) = ((MR_Box) (top_level__mercury_compile__V_75_75));
#line 984 "mercury_compile.m"
                    }
#line 983 "mercury_compile.m"
                    {
#line 983 "mercury_compile.m"
                      top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 983 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (top_level__mercury_compile__V_73_73));
#line 983 "mercury_compile.m"
                    }
#line 983 "mercury_compile.m"
                    {
#line 983 "mercury_compile.m"
                      top_level__mercury_compile__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[28])));
#line 983 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 1) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 983 "mercury_compile.m"
                    }
#line 982 "mercury_compile.m"
                    {
#line 982 "mercury_compile.m"
                      top_level__mercury_compile__Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[27])));
#line 982 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 1) = ((MR_Box) (top_level__mercury_compile__V_68_68));
#line 982 "mercury_compile.m"
                    }
#line 989 "mercury_compile.m"
                    {
#line 989 "mercury_compile.m"
                      parse_tree__error_util__write_error_pieces_plain_4_p_0(*top_level__mercury_compile__Globals_16, top_level__mercury_compile__Pieces_41);
                    }
#line 990 "mercury_compile.m"
                    {
#line 990 "mercury_compile.m"
                      libs__compiler_util__record_warning_3_p_0(*top_level__mercury_compile__Globals_16);
                    }
#line 980 "mercury_compile.m"
                  }
#line 994 "mercury_compile.m"
                {
#line 994 "mercury_compile.m"
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
#line 978 "mercury_compile.m"
              }
#line 995 "mercury_compile.m"
            else
#line 995 "mercury_compile.m"
              {
#line 995 "mercury_compile.m"
              }
#line 953 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 953 "mercury_compile.m"
          }
#line 999 "mercury_compile.m"
        {
#line 999 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 56, &top_level__mercury_compile__Stats_142);
        }
#line 1000 "mercury_compile.m"
        {
#line 1000 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_142);
        }
#line 1001 "mercury_compile.m"
        {
#line 1001 "mercury_compile.m"
          *top_level__mercury_compile__SourceFileName_20 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__FileName_36, (MR_String) ".m");
        }
#line 924 "mercury_compile.m"
      }
#line 882 "mercury_compile.m"
    else
#line 882 "mercury_compile.m"
      {
#line 882 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_27;
#line 882 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleNameString_28;
#line 882 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_35;
#line 904 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_29;
#line 904 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_30;
#line 904 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorsPrime_31;
#line 904 "mercury_compile.m"
        MR_String top_level__mercury_compile__SourceFileNamePrime_32;
#line 904 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_33;

#line 882 "mercury_compile.m"
        *top_level__mercury_compile__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 883 "mercury_compile.m"
        {
#line 883 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 45, &top_level__mercury_compile__Verbose_27);
        }
#line 884 "mercury_compile.m"
        {
#line 884 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "% Parsing module \140");
        }
#line 885 "mercury_compile.m"
        {
#line 885 "mercury_compile.m"
          top_level__mercury_compile__ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*top_level__mercury_compile__ModuleName_19);
        }
#line 886 "mercury_compile.m"
        {
#line 886 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, top_level__mercury_compile__ModuleNameString_28);
        }
#line 887 "mercury_compile.m"
        {
#line 887 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "\' and imported interfaces...\n");
        }
#line 891 "mercury_compile.m"
        {
#line 891 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_29, &top_level__mercury_compile__SpecsPrime_30, &top_level__mercury_compile__ErrorsPrime_31, &top_level__mercury_compile__SourceFileNamePrime_32, &top_level__mercury_compile__MaybeTimestampPrime_33);
        }
#line 904 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 897 "mercury_compile.m"
          {
#line 897 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_117_117;

#line 897 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 898 "mercury_compile.m"
            {
#line 898 "mercury_compile.m"
              top_level__mercury_compile__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 898 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_117_117, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 898 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_117_117, 1) = ((MR_Box) ((MR_String) ".m"));
#line 898 "mercury_compile.m"
            }
#line 898 "mercury_compile.m"
            {
#line 898 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_117_117)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 899 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_29;
#line 900 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_30;
#line 901 "mercury_compile.m"
            *top_level__mercury_compile__Errors_24 = top_level__mercury_compile__ErrorsPrime_31;
#line 902 "mercury_compile.m"
            *top_level__mercury_compile__SourceFileName_20 = top_level__mercury_compile__SourceFileNamePrime_32;
#line 903 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_33;
#line 897 "mercury_compile.m"
          }
#line 904 "mercury_compile.m"
        else
#line 910 "mercury_compile.m"
          {
#line 910 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_34;

#line 908 "mercury_compile.m"
            {
#line 908 "mercury_compile.m"
              parse_tree__read_modules__read_module_13_p_0(top_level__mercury_compile__Globals0_15, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", (MR_String) "Reading module", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Errors_24, top_level__mercury_compile__SourceFileName_20, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 911 "mercury_compile.m"
            {
#line 911 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_34);
            }
#line 916 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_34 == (MR_Integer) 0))
#line 918 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 916 "mercury_compile.m"
            else
#line 913 "mercury_compile.m"
              {
#line 914 "mercury_compile.m"
                {
#line 914 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 115, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[4]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 913 "mercury_compile.m"
              }
#line 910 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 910 "mercury_compile.m"
          }
#line 921 "mercury_compile.m"
        {
#line 921 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_35);
        }
#line 922 "mercury_compile.m"
        {
#line 922 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_35);
#line 922 "mercury_compile.m"
          return;
        }
#line 882 "mercury_compile.m"
      }
#line 882 "mercury_compile.m"
  }
#line 871 "mercury_compile.m"
}

#line 796 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 796 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 796 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 796 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 796 "mercury_compile.m"
{
#line 802 "mercury_compile.m"
  {
#line 802 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 802 "mercury_compile.m"
    {
#line 802 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Globals_12, top_level__mercury_compile__HeadVar__5_5, top_level__mercury_compile__HeadVar__7_7);
#line 802 "mercury_compile.m"
      return;
    }
#line 802 "mercury_compile.m"
  }
#line 796 "mercury_compile.m"
}

#line 779 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0_1(
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 779 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 779 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 779 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 779 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 779 "mercury_compile.m"
{
#line 779 "mercury_compile.m"
  {
#line 779 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 779 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_HeadVar__5_5;
#line 779 "mercury_compile.m"
    MR_Tuple top_level__mercury_compile__conv0_HeadVar__7_7;

#line 779 "mercury_compile.m"
    {
#line 779 "mercury_compile.m"
      top_level__mercury_compile__process_arg_build_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile__wrapper_arg_4), &top_level__mercury_compile__conv0_HeadVar__7_7);
    }
#line 779 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv1_HeadVar__5_5));
#line 779 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__7_7));
#line 779 "mercury_compile.m"
  }
#line 779 "mercury_compile.m"
}

#line 766 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_9_p_0(
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 766 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 766 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_14,
#line 766 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 766 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 766 "mercury_compile.m"
{
#line 771 "mercury_compile.m"
  {
#line 771 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 771 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileOrModule_18;
#line 771 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_19;
#line 856 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_43;

#line 853 "mercury_compile.m"
    {
#line 853 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__Arg_14, (MR_String) ".m", &top_level__mercury_compile__FileName_43);
    }
#line 856 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 855 "mercury_compile.m"
      {
#line 855 "mercury_compile.m"
        top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 855 "mercury_compile.m"
        MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__FileName_43));
#line 855 "mercury_compile.m"
      }
#line 856 "mercury_compile.m"
    else
#line 860 "mercury_compile.m"
      {
#line 860 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_44;

#line 860 "mercury_compile.m"
        {
#line 860 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__Arg_14, &top_level__mercury_compile__ModuleName_44);
        }
#line 861 "mercury_compile.m"
        {
#line 861 "mercury_compile.m"
          top_level__mercury_compile__FileOrModule_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_44));
#line 861 "mercury_compile.m"
        }
#line 860 "mercury_compile.m"
      }
#line 773 "mercury_compile.m"
    {
#line 773 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 628, &top_level__mercury_compile__InvokedByMake_19);
    }
#line 789 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_19 == (MR_Integer) 0))
#line 775 "mercury_compile.m"
      {
#line 775 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTuple_21;
#line 775 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_27_27;
#line 775 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_29_29;
#line 776 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_20_20;

#line 866 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 866 "mercury_compile.m"
          {
#line 866 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 868 "mercury_compile.m"
            {
#line 868 "mercury_compile.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_46, &top_level__mercury_compile__V_27_27);
            }
#line 866 "mercury_compile.m"
          }
#line 866 "mercury_compile.m"
        else
#line 869 "mercury_compile.m"
          top_level__mercury_compile__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));
#line 779 "mercury_compile.m"
        {
#line 779 "mercury_compile.m"
          top_level__mercury_compile__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 779 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[0]));
#line 779 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_9_p_0_1));
#line 779 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 779 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 3) = ((MR_Box) (top_level__mercury_compile__FileOrModule_18));
#line 779 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_29_29, 4) = ((MR_Box) (top_level__mercury_compile__OptionArgs_13));
#line 779 "mercury_compile.m"
        }
#line 776 "mercury_compile.m"
        {
#line 776 "mercury_compile.m"
          make__util__build_with_module_options_args_12_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_2[0], top_level__mercury_compile__Globals_10, top_level__mercury_compile__V_27_27, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_29_29, &top_level__mercury_compile__V_20_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeTuple_21);
        }
#line 784 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeTuple_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "mercury_compile.m"
          {
#line 786 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 785 "mercury_compile.m"
          }
#line 784 "mercury_compile.m"
        else
#line 782 "mercury_compile.m"
          {
#line 782 "mercury_compile.m"
            MR_Tuple top_level__mercury_compile__Tuple_22 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTuple_21, (MR_Integer) 0)));

#line 783 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 0)));
#line 783 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_22, (MR_Integer) 1)));
#line 782 "mercury_compile.m"
          }
#line 775 "mercury_compile.m"
      }
#line 789 "mercury_compile.m"
    else
#line 811 "mercury_compile.m"
      {
#line 811 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDeps_57;

#line 812 "mercury_compile.m"
        {
#line 812 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 93, &top_level__mercury_compile__GenerateDeps_57);
        }
#line 824 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDeps_57 == (MR_Integer) 0))
#line 825 "mercury_compile.m"
          {
#line 825 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GenerateDepFile_60;

#line 826 "mercury_compile.m"
            {
#line 826 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 92, &top_level__mercury_compile__GenerateDepFile_60);
            }
#line 839 "mercury_compile.m"
            if ((top_level__mercury_compile__GenerateDepFile_60 == (MR_Integer) 0))
#line 841 "mercury_compile.m"
              {
#line 841 "mercury_compile.m"
                top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__FileOrModule_18, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 841 "mercury_compile.m"
                return;
              }
#line 839 "mercury_compile.m"
            else
#line 829 "mercury_compile.m"
              {
#line 830 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 831 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 835 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 833 "mercury_compile.m"
                  {
#line 833 "mercury_compile.m"
                    MR_String top_level__mercury_compile__FileName_68 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 834 "mercury_compile.m"
                    {
#line 834 "mercury_compile.m"
                      parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_68);
#line 834 "mercury_compile.m"
                      return;
                    }
#line 833 "mercury_compile.m"
                  }
#line 835 "mercury_compile.m"
                else
#line 836 "mercury_compile.m"
                  {
#line 836 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 837 "mercury_compile.m"
                    {
#line 837 "mercury_compile.m"
                      parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_69);
#line 837 "mercury_compile.m"
                      return;
                    }
#line 836 "mercury_compile.m"
                  }
#line 829 "mercury_compile.m"
              }
#line 825 "mercury_compile.m"
          }
#line 824 "mercury_compile.m"
        else
#line 814 "mercury_compile.m"
          {
#line 815 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 816 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 818 "mercury_compile.m"
              {
#line 818 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 819 "mercury_compile.m"
                {
#line 819 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__FileName_58);
#line 819 "mercury_compile.m"
                  return;
                }
#line 818 "mercury_compile.m"
              }
#line 820 "mercury_compile.m"
            else
#line 821 "mercury_compile.m"
              {
#line 821 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_18, (MR_Integer) 0)));

#line 822 "mercury_compile.m"
                {
#line 822 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__ModuleName_59);
#line 822 "mercury_compile.m"
                  return;
                }
#line 821 "mercury_compile.m"
              }
#line 814 "mercury_compile.m"
          }
#line 811 "mercury_compile.m"
      }
#line 771 "mercury_compile.m"
  }
#line 766 "mercury_compile.m"
}

#line 738 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_11_p_0(
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_2,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_3,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_4,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_6,
#line 738 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_7,
#line 738 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8,
#line 738 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9)
#line 738 "mercury_compile.m"
{
#line 743 "mercury_compile.m"
  while (MR_TRUE)
#line 743 "mercury_compile.m"
    {
#line 743 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 743 "mercury_compile.m"
      {
#line 743 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 743 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 743 "mercury_compile.m"
          {
#line 744 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_9 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8;
#line 744 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_7 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_6;
#line 743 "mercury_compile.m"
          }
#line 743 "mercury_compile.m"
        else
#line 746 "mercury_compile.m"
          {
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TypeCtorInfo_53_53;
#line 746 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgModules_34;
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgExtraObjFiles_35;
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_47_47;
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;
#line 746 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_49_49;

#line 747 "mercury_compile.m"
            {
#line 747 "mercury_compile.m"
              top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_1, top_level__mercury_compile__DetectedGradeFlags_2, top_level__mercury_compile__OptionVariables_3, top_level__mercury_compile__OptionArgs_4, top_level__mercury_compile__Arg_29, &top_level__mercury_compile__ArgModules_34, &top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 752 "mercury_compile.m"
            if ((top_level__mercury_compile__Args_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "mercury_compile.m"
              {
#line 753 "mercury_compile.m"
              }
#line 752 "mercury_compile.m"
            else
#line 751 "mercury_compile.m"
              {
#line 751 "mercury_compile.m"
                mercury__gc__garbage_collect_2_p_0();
              }
#line 9744 "top_level.mercury_compile.c"
            top_level__mercury_compile__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 755 "mercury_compile.m"
            {
#line 755 "mercury_compile.m"
              top_level__mercury_compile__V_47_47 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgModules_34);
            }
#line 755 "mercury_compile.m"
            {
#line 755 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_46_46 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Modules_0_6, top_level__mercury_compile__V_47_47);
            }
#line 756 "mercury_compile.m"
            {
#line 756 "mercury_compile.m"
              top_level__mercury_compile__V_49_49 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__ArgExtraObjFiles_35);
            }
#line 756 "mercury_compile.m"
            {
#line 756 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8, top_level__mercury_compile__V_49_49);
            }
#line 757 "mercury_compile.m"
            /* direct tailcall eliminated */
#line 757 "mercury_compile.m"
            {
#line 757 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HeadVar__5__tmp_copy_5 = top_level__mercury_compile__Args_30;
#line 757 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_46_46;
#line 757 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_48_48;

#line 757 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_8;
#line 757 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_0_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_6;
#line 757 "mercury_compile.m"
              top_level__mercury_compile__HeadVar__5_5 = top_level__mercury_compile__HeadVar__5__tmp_copy_5;
#line 757 "mercury_compile.m"
            }
#line 757 "mercury_compile.m"
            continue;
#line 746 "mercury_compile.m"
          }
#line 743 "mercury_compile.m"
      }
#line 743 "mercury_compile.m"
      break;
#line 743 "mercury_compile.m"
    }
#line 738 "mercury_compile.m"
}

#line 705 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_10_p_0(
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_11,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_12,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_13,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_14,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_25,
#line 705 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_26,
#line 705 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27,
#line 705 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28)
#line 705 "mercury_compile.m"
{
#line 712 "mercury_compile.m"
  while (MR_TRUE)
#line 712 "mercury_compile.m"
    {
#line 712 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 712 "mercury_compile.m"
      {
#line 712 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 712 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FileResult_18;

#line 713 "mercury_compile.m"
        {
#line 713 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25);
        }
#line 715 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 715 "mercury_compile.m"
          {
#line 715 "mercury_compile.m"
          }
#line 715 "mercury_compile.m"
        else
#line 716 "mercury_compile.m"
          {
#line 716 "mercury_compile.m"
            mercury__gc__garbage_collect_2_p_0();
          }
#line 718 "mercury_compile.m"
        {
#line 718 "mercury_compile.m"
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile__FileResult_18);
        }
#line 728 "mercury_compile.m"
        if ((top_level__mercury_compile__FileResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "mercury_compile.m"
          {
#line 729 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 729 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 729 "mercury_compile.m"
          }
#line 728 "mercury_compile.m"
        else
#line 728 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileResult_18)) == (MR_mktag((MR_Integer) 2))))
#line 731 "mercury_compile.m"
          {
#line 731 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 731 "mercury_compile.m"
            MR_String top_level__mercury_compile__Msg_24;

#line 732 "mercury_compile.m"
            {
#line 732 "mercury_compile.m"
              mercury__io__error_message_2_p_0(top_level__mercury_compile__Error_23, &top_level__mercury_compile__Msg_24);
            }
#line 733 "mercury_compile.m"
            {
#line 733 "mercury_compile.m"
              mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
            }
#line 734 "mercury_compile.m"
            {
#line 734 "mercury_compile.m"
              mercury__io__write_string_3_p_0(top_level__mercury_compile__Msg_24);
            }
#line 735 "mercury_compile.m"
            {
#line 735 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 731 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_26 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_25;
#line 731 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_28 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27;
#line 731 "mercury_compile.m"
          }
#line 728 "mercury_compile.m"
        else
#line 720 "mercury_compile.m"
          {
#line 720 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TypeCtorInfo_47_47;
#line 720 "mercury_compile.m"
            MR_String top_level__mercury_compile__Line_19 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileResult_18, (MR_Integer) 0)));
#line 720 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_20;
#line 720 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgModules_21;
#line 720 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgExtraObjFiles_22;
#line 720 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 720 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_40_40;
#line 720 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;
#line 720 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_42_42;

#line 721 "mercury_compile.m"
            {
#line 721 "mercury_compile.m"
              top_level__mercury_compile__Arg_20 = mercury__string__rstrip_1_f_0(top_level__mercury_compile__Line_19);
            }
#line 722 "mercury_compile.m"
            {
#line 722 "mercury_compile.m"
              top_level__mercury_compile__process_arg_9_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__DetectedGradeFlags_12, top_level__mercury_compile__OptionVariables_13, top_level__mercury_compile__OptionArgs_14, top_level__mercury_compile__Arg_20, &top_level__mercury_compile__ArgModules_21, &top_level__mercury_compile__ArgExtraObjFiles_22);
            }
#line 9935 "top_level.mercury_compile.c"
            top_level__mercury_compile__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 724 "mercury_compile.m"
            {
#line 724 "mercury_compile.m"
              top_level__mercury_compile__V_40_40 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgModules_21);
            }
#line 724 "mercury_compile.m"
            {
#line 724 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_39_39 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_Modules_0_25, top_level__mercury_compile__V_40_40);
            }
#line 725 "mercury_compile.m"
            {
#line 725 "mercury_compile.m"
              top_level__mercury_compile__V_42_42 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__ArgExtraObjFiles_22);
            }
#line 725 "mercury_compile.m"
            {
#line 725 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_47_47, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27, top_level__mercury_compile__V_42_42);
            }
#line 726 "mercury_compile.m"
            /* direct tailcall eliminated */
#line 726 "mercury_compile.m"
            {
#line 726 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_39_39;
#line 726 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_41_41;

#line 726 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_27 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_27;
#line 726 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_0_25 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_25;
#line 726 "mercury_compile.m"
            }
#line 726 "mercury_compile.m"
            continue;
#line 720 "mercury_compile.m"
          }
#line 712 "mercury_compile.m"
      }
#line 712 "mercury_compile.m"
      break;
#line 712 "mercury_compile.m"
    }
#line 705 "mercury_compile.m"
}

#line 598 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_9_p_0(
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DetectedGradeFlags_11,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_12,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_13,
#line 598 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_14,
#line 598 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 598 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 598 "mercury_compile.m"
{
#line 688 "mercury_compile.m"
  {
#line 688 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 688 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_32_43;
#line 688 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_31;
#line 688 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModulesToLinkCord_32;
#line 688 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFilesCord_33;

#line 689 "mercury_compile.m"
    {
#line 689 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_10, (MR_Integer) 660, &top_level__mercury_compile__FileNamesFromStdin_31);
    }
#line 696 "mercury_compile.m"
    if ((top_level__mercury_compile__FileNamesFromStdin_31 == (MR_Integer) 0))
#line 697 "mercury_compile.m"
      {
#line 697 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_31_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 697 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_35_35;
#line 697 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_36_36;

#line 699 "mercury_compile.m"
        {
#line 699 "mercury_compile.m"
          top_level__mercury_compile__V_35_35 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
        }
#line 700 "mercury_compile.m"
        {
#line 700 "mercury_compile.m"
          top_level__mercury_compile__V_36_36 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_31_42);
        }
#line 698 "mercury_compile.m"
        {
#line 698 "mercury_compile.m"
          top_level__mercury_compile__process_arg_list_11_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__Args_14, top_level__mercury_compile__V_35_35, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_36_36, &top_level__mercury_compile__ExtraObjFilesCord_33);
        }
#line 697 "mercury_compile.m"
      }
#line 696 "mercury_compile.m"
    else
#line 692 "mercury_compile.m"
      {
#line 692 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_30_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 692 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_38_38;
#line 692 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_39_39;

#line 694 "mercury_compile.m"
        {
#line 694 "mercury_compile.m"
          top_level__mercury_compile__V_38_38 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
        }
#line 695 "mercury_compile.m"
        {
#line 695 "mercury_compile.m"
          top_level__mercury_compile__V_39_39 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_30_41);
        }
#line 693 "mercury_compile.m"
        {
#line 693 "mercury_compile.m"
          top_level__mercury_compile__process_stdin_arg_list_10_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__DetectedGradeFlags_11, top_level__mercury_compile__OptionVariables_12, top_level__mercury_compile__OptionArgs_13, top_level__mercury_compile__V_38_38, &top_level__mercury_compile__ModulesToLinkCord_32, top_level__mercury_compile__V_39_39, &top_level__mercury_compile__ExtraObjFilesCord_33);
        }
#line 692 "mercury_compile.m"
      }
#line 10078 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_32_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 702 "mercury_compile.m"
    {
#line 702 "mercury_compile.m"
      *top_level__mercury_compile__ModulesToLink_15 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ModulesToLinkCord_32);
    }
#line 703 "mercury_compile.m"
    {
#line 703 "mercury_compile.m"
      *top_level__mercury_compile__ExtraObjFiles_16 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_32_43, top_level__mercury_compile__ExtraObjFilesCord_33);
    }
#line 688 "mercury_compile.m"
  }
#line 598 "mercury_compile.m"
}

#line 582 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 582 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 582 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 582 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8)
#line 582 "mercury_compile.m"
{
#line 587 "mercury_compile.m"
  {
#line 587 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 587 "mercury_compile.m"
    if ((top_level__mercury_compile__Report_6 == (MR_Integer) 0))
#line 587 "mercury_compile.m"
      {
#line 587 "mercury_compile.m"
      }
#line 587 "mercury_compile.m"
    else
#line 589 "mercury_compile.m"
      {
#line 589 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_19_19;
#line 589 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_21_21;
#line 589 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_31_31;

#line 590 "mercury_compile.m"
        {
#line 590 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
        }
#line 591 "mercury_compile.m"
        {
#line 591 "mercury_compile.m"
          top_level__mercury_compile__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__OptionArgs_7, top_level__mercury_compile__Args_8);
        }
#line 591 "mercury_compile.m"
        {
#line 591 "mercury_compile.m"
          top_level__mercury_compile__V_19_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", top_level__mercury_compile__V_21_21);
        }
#line 591 "mercury_compile.m"
        {
#line 591 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 591 "mercury_compile.m"
        {
#line 591 "mercury_compile.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_5[3], top_level__mercury_compile__V_19_19, &top_level__mercury_compile__V_31_31);
        }
#line 591 "mercury_compile.m"
        {
#line 591 "mercury_compile.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_31_31);
        }
#line 591 "mercury_compile.m"
        {
#line 591 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 593 "mercury_compile.m"
        {
#line 593 "mercury_compile.m"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
#line 593 "mercury_compile.m"
          return;
        }
#line 589 "mercury_compile.m"
      }
#line 587 "mercury_compile.m"
  }
#line 582 "mercury_compile.m"
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
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 664, &top_level__mercury_compile__Version_16);
    }
#line 359 "mercury_compile.m"
    {
#line 359 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 663, &top_level__mercury_compile__Help_17);
    }
#line 360 "mercury_compile.m"
    {
#line 360 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 91, &top_level__mercury_compile__GenerateMapping_18);
    }
#line 362 "mercury_compile.m"
    {
#line 362 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 102, &top_level__mercury_compile__OutputGrade_19);
    }
#line 364 "mercury_compile.m"
    {
#line 364 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 103, &top_level__mercury_compile__OutputLinkCommand_20);
    }
#line 366 "mercury_compile.m"
    {
#line 366 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 104, &top_level__mercury_compile__OutputShLibLinkCommand_21);
    }
#line 368 "mercury_compile.m"
    {
#line 368 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 660, &top_level__mercury_compile__FileNamesFromStdin_22);
    }
#line 370 "mercury_compile.m"
    {
#line 370 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 105, &top_level__mercury_compile__OutputLibGrades_23);
    }
#line 372 "mercury_compile.m"
    {
#line 372 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 106, &top_level__mercury_compile__OutputCC_24);
    }
#line 373 "mercury_compile.m"
    {
#line 373 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 107, &top_level__mercury_compile__OutputCCType_25);
    }
#line 374 "mercury_compile.m"
    {
#line 374 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 109, &top_level__mercury_compile__OutputCFlags_26);
    }
#line 375 "mercury_compile.m"
    {
#line 375 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 108, &top_level__mercury_compile__OutputCSCType_27);
    }
#line 377 "mercury_compile.m"
    {
#line 377 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 110, &top_level__mercury_compile__OutputLibraryLinkFlags_28);
    }
#line 379 "mercury_compile.m"
    {
#line 379 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 111, &top_level__mercury_compile__OutputGradeDefines_29);
    }
#line 381 "mercury_compile.m"
    {
#line 381 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 112, &top_level__mercury_compile__OutputCInclDirFlags_30);
    }
#line 383 "mercury_compile.m"
    {
#line 383 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 113, &top_level__mercury_compile__OutputTargetArch_31);
    }
#line 385 "mercury_compile.m"
    {
#line 385 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 114, &top_level__mercury_compile__OutputClassDir_32);
    }
#line 387 "mercury_compile.m"
    {
#line 387 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 623, &top_level__mercury_compile__Make_33);
    }
#line 388 "mercury_compile.m"
    {
#line 388 "mercury_compile.m"
      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 95, &top_level__mercury_compile__GenerateStandaloneInt_34);
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
            MR_Word top_level__mercury_compile__Stdout_214;
#line 399 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldOutputStream_215;
#line 402 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_39_39;

#line 399 "mercury_compile.m"
            {
#line 399 "mercury_compile.m"
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_214);
            }
#line 400 "mercury_compile.m"
            {
#line 400 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_214, &top_level__mercury_compile__OldOutputStream_215);
            }
#line 401 "mercury_compile.m"
            {
#line 401 "mercury_compile.m"
              libs__handle_options__long_usage_2_p_0();
            }
#line 402 "mercury_compile.m"
            {
#line 402 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_215, &top_level__mercury_compile__V_39_39);
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
                MR_Word top_level__mercury_compile__Stdout_216;

#line 407 "mercury_compile.m"
                {
#line 407 "mercury_compile.m"
                  libs__handle_options__grade_directory_component_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Grade_40);
                }
#line 408 "mercury_compile.m"
                {
#line 408 "mercury_compile.m"
                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_216);
                }
#line 409 "mercury_compile.m"
                {
#line 409 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_216, top_level__mercury_compile__Grade_40);
                }
#line 410 "mercury_compile.m"
                {
#line 410 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_216, (MR_String) "\n");
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
                    MR_Word top_level__mercury_compile__Stdout_217;

#line 412 "mercury_compile.m"
                    {
#line 412 "mercury_compile.m"
                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 577, &top_level__mercury_compile__LinkCommand_41);
                    }
#line 414 "mercury_compile.m"
                    {
#line 414 "mercury_compile.m"
                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_217);
                    }
#line 415 "mercury_compile.m"
                    {
#line 415 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_217, top_level__mercury_compile__LinkCommand_41);
                    }
#line 416 "mercury_compile.m"
                    {
#line 416 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_217, (MR_String) "\n");
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
                        MR_Word top_level__mercury_compile__Stdout_218;
#line 419 "mercury_compile.m"
                        MR_String top_level__mercury_compile__LinkCommand_219;

#line 418 "mercury_compile.m"
                        {
#line 418 "mercury_compile.m"
                          libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 578, &top_level__mercury_compile__LinkCommand_219);
                        }
#line 420 "mercury_compile.m"
                        {
#line 420 "mercury_compile.m"
                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_218);
                        }
#line 421 "mercury_compile.m"
                        {
#line 421 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_218, top_level__mercury_compile__LinkCommand_219);
                        }
#line 422 "mercury_compile.m"
                        {
#line 422 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_218, (MR_String) "\n");
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
                              libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 638, &top_level__mercury_compile__LibGrades_42);
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
                                MR_Word top_level__mercury_compile__Stdout_220;

#line 429 "mercury_compile.m"
                                {
#line 429 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_220);
                                }
#line 430 "mercury_compile.m"
                                {
#line 430 "mercury_compile.m"
                                  mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__Stdout_220, top_level__mercury_compile__LibGrades_42, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_scalar_common_3[2]);
                                }
#line 431 "mercury_compile.m"
                                {
#line 431 "mercury_compile.m"
                                  mercury__io__nl_3_p_0(top_level__mercury_compile__Stdout_220);
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
                                MR_String top_level__mercury_compile__V_119_119;

#line 434 "mercury_compile.m"
                                {
#line 434 "mercury_compile.m"
                                  libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 488, &top_level__mercury_compile__CC_45);
                                }
#line 435 "mercury_compile.m"
                                {
#line 435 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_46);
                                }
#line 436 "mercury_compile.m"
                                {
#line 436 "mercury_compile.m"
                                  top_level__mercury_compile__V_119_119 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_45, (MR_String) "\n");
                                }
#line 436 "mercury_compile.m"
                                {
#line 436 "mercury_compile.m"
                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_46, top_level__mercury_compile__V_119_119);
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
                                    MR_String top_level__mercury_compile__V_124_124;
#line 438 "mercury_compile.m"
                                    MR_Word top_level__mercury_compile__StdOut_223;

#line 438 "mercury_compile.m"
                                    {
#line 438 "mercury_compile.m"
                                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 513, &top_level__mercury_compile__CC_Type_47);
                                    }
#line 439 "mercury_compile.m"
                                    {
#line 439 "mercury_compile.m"
                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_223);
                                    }
#line 440 "mercury_compile.m"
                                    {
#line 440 "mercury_compile.m"
                                      top_level__mercury_compile__V_124_124 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_Type_47, (MR_String) "\n");
                                    }
#line 440 "mercury_compile.m"
                                    {
#line 440 "mercury_compile.m"
                                      mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_223, top_level__mercury_compile__V_124_124);
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
                                        MR_Word top_level__mercury_compile__StdOut_224;

#line 442 "mercury_compile.m"
                                        {
#line 442 "mercury_compile.m"
                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_224);
                                        }
#line 443 "mercury_compile.m"
                                        {
#line 443 "mercury_compile.m"
                                          backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_224);
                                        }
#line 444 "mercury_compile.m"
                                        {
#line 444 "mercury_compile.m"
                                          mercury__io__nl_3_p_0(top_level__mercury_compile__StdOut_224);
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
                                            MR_String top_level__mercury_compile__V_132_132;
#line 446 "mercury_compile.m"
                                            MR_Word top_level__mercury_compile__StdOut_225;

#line 446 "mercury_compile.m"
                                            {
#line 446 "mercury_compile.m"
                                              libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 514, &top_level__mercury_compile__CSC_Type_48);
                                            }
#line 447 "mercury_compile.m"
                                            {
#line 447 "mercury_compile.m"
                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_225);
                                            }
#line 448 "mercury_compile.m"
                                            {
#line 448 "mercury_compile.m"
                                              top_level__mercury_compile__V_132_132 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_Type_48, (MR_String) "\n");
                                            }
#line 448 "mercury_compile.m"
                                            {
#line 448 "mercury_compile.m"
                                              mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_225, top_level__mercury_compile__V_132_132);
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
                                                MR_Word top_level__mercury_compile__StdOut_226;

#line 450 "mercury_compile.m"
                                                {
#line 450 "mercury_compile.m"
                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_226);
                                                }
#line 451 "mercury_compile.m"
                                                {
#line 451 "mercury_compile.m"
                                                  backend_libs__compile_target_code__output_library_link_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_226);
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
                                                    MR_Word top_level__mercury_compile__StdOut_227;

#line 453 "mercury_compile.m"
                                                    {
#line 453 "mercury_compile.m"
                                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_227);
                                                    }
#line 454 "mercury_compile.m"
                                                    {
#line 454 "mercury_compile.m"
                                                      backend_libs__compile_target_code__output_grade_defines_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_227);
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
                                                        MR_Word top_level__mercury_compile__StdOut_228;

#line 456 "mercury_compile.m"
                                                        {
#line 456 "mercury_compile.m"
                                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_228);
                                                        }
#line 457 "mercury_compile.m"
                                                        {
#line 457 "mercury_compile.m"
                                                          backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__StdOut_228);
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
                                                            MR_String top_level__mercury_compile__V_143_143;
#line 459 "mercury_compile.m"
                                                            MR_Word top_level__mercury_compile__StdOut_229;

#line 459 "mercury_compile.m"
                                                            {
#line 459 "mercury_compile.m"
                                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_229);
                                                            }
#line 460 "mercury_compile.m"
                                                            {
#line 460 "mercury_compile.m"
                                                              libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 665, &top_level__mercury_compile__TargetArch_49);
                                                            }
#line 461 "mercury_compile.m"
                                                            {
#line 461 "mercury_compile.m"
                                                              top_level__mercury_compile__V_143_143 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__TargetArch_49, (MR_String) "\n");
                                                            }
#line 461 "mercury_compile.m"
                                                            {
#line 461 "mercury_compile.m"
                                                              mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_229, top_level__mercury_compile__V_143_143);
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
                                                                MR_String top_level__mercury_compile__V_147_147;
#line 463 "mercury_compile.m"
                                                                MR_Word top_level__mercury_compile__StdOut_230;

#line 463 "mercury_compile.m"
                                                                {
#line 463 "mercury_compile.m"
                                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_230);
                                                                }
#line 464 "mercury_compile.m"
                                                                {
#line 464 "mercury_compile.m"
                                                                  parse_tree__file_names__get_class_dir_name_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__ClassName_50);
                                                                }
#line 465 "mercury_compile.m"
                                                                {
#line 465 "mercury_compile.m"
                                                                  top_level__mercury_compile__V_147_147 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__ClassName_50, (MR_String) "\n");
                                                                }
#line 465 "mercury_compile.m"
                                                                {
#line 465 "mercury_compile.m"
                                                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_230, top_level__mercury_compile__V_147_147);
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
                                                                              MR_Word top_level__mercury_compile__V_154_154;
#line 485 "mercury_compile.m"
                                                                              MR_Word top_level__mercury_compile__V_157_157;
#line 485 "mercury_compile.m"
                                                                              MR_Word top_level__mercury_compile__V_160_160;
#line 485 "mercury_compile.m"
                                                                              MR_Word top_level__mercury_compile__V_161_161;
#line 485 "mercury_compile.m"
                                                                              MR_String top_level__mercury_compile__V_162_162;

#line 490 "mercury_compile.m"
                                                                              {
#line 490 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_162_162 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_52);
                                                                              }
#line 490 "mercury_compile.m"
                                                                              {
#line 490 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 490 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_161_161, 1) = ((MR_Box) (top_level__mercury_compile__V_162_162));
#line 490 "mercury_compile.m"
                                                                              }
#line 490 "mercury_compile.m"
                                                                              {
#line 490 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_160_160, 0) = ((MR_Box) (top_level__mercury_compile__V_161_161));
#line 490 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[24])));
#line 490 "mercury_compile.m"
                                                                              }
#line 489 "mercury_compile.m"
                                                                              {
#line 489 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[22])));
#line 489 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_157_157, 1) = ((MR_Box) (top_level__mercury_compile__V_160_160));
#line 489 "mercury_compile.m"
                                                                              }
#line 488 "mercury_compile.m"
                                                                              {
#line 488 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_154_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_scalar_common_5[2])));
#line 488 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_154_154, 1) = ((MR_Box) (top_level__mercury_compile__V_157_157));
#line 488 "mercury_compile.m"
                                                                              }
#line 487 "mercury_compile.m"
                                                                              {
#line 487 "mercury_compile.m"
                                                                                top_level__mercury_compile__NYIMsg_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[21])));
#line 487 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_54, 1) = ((MR_Box) (top_level__mercury_compile__V_154_154));
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
                                                                              MR_Word top_level__mercury_compile__V_172_172;
#line 474 "mercury_compile.m"
                                                                              MR_Word top_level__mercury_compile__V_175_175;
#line 474 "mercury_compile.m"
                                                                              MR_Word top_level__mercury_compile__V_178_178;
#line 474 "mercury_compile.m"
                                                                              MR_Word top_level__mercury_compile__V_179_179;
#line 474 "mercury_compile.m"
                                                                              MR_String top_level__mercury_compile__V_180_180;

#line 479 "mercury_compile.m"
                                                                              {
#line 479 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_180_180 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_52);
                                                                              }
#line 479 "mercury_compile.m"
                                                                              {
#line 479 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 479 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_179_179, 1) = ((MR_Box) (top_level__mercury_compile__V_180_180));
#line 479 "mercury_compile.m"
                                                                              }
#line 479 "mercury_compile.m"
                                                                              {
#line 479 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_178_178, 0) = ((MR_Box) (top_level__mercury_compile__V_179_179));
#line 479 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[24])));
#line 479 "mercury_compile.m"
                                                                              }
#line 478 "mercury_compile.m"
                                                                              {
#line 478 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_175_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[26])));
#line 478 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_175_175, 1) = ((MR_Box) (top_level__mercury_compile__V_178_178));
#line 478 "mercury_compile.m"
                                                                              }
#line 477 "mercury_compile.m"
                                                                              {
#line 477 "mercury_compile.m"
                                                                                top_level__mercury_compile__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_scalar_common_5[2])));
#line 477 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_172_172, 1) = ((MR_Box) (top_level__mercury_compile__V_175_175));
#line 477 "mercury_compile.m"
                                                                              }
#line 476 "mercury_compile.m"
                                                                              {
#line 476 "mercury_compile.m"
                                                                                top_level__mercury_compile__NotRequiredMsg_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[25])));
#line 476 "mercury_compile.m"
                                                                                MR_hl_field(MR_mktag(1), top_level__mercury_compile__NotRequiredMsg_53, 1) = ((MR_Box) (top_level__mercury_compile__V_172_172));
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
                                                                                MR_Word top_level__mercury_compile__Statistics_65;

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
                                                                                        MR_Word top_level__mercury_compile__Target_231;

#line 513 "mercury_compile.m"
                                                                                        {
#line 513 "mercury_compile.m"
                                                                                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FirstModule_58, &top_level__mercury_compile__MainModuleName_60);
                                                                                        }
#line 515 "mercury_compile.m"
                                                                                        {
#line 515 "mercury_compile.m"
                                                                                          libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_14, &top_level__mercury_compile__Target_231);
                                                                                        }
#line 523 "mercury_compile.m"
                                                                                        if ((top_level__mercury_compile__Target_231 == (MR_Integer) 3))
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
                                                                                            MR_Word top_level__mercury_compile__V_192_192;

#line 531 "mercury_compile.m"
                                                                                            {
#line 531 "mercury_compile.m"
                                                                                              top_level__mercury_compile__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_192_192, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[0]));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_192_192, 1) = ((MR_Box) (top_level__mercury_compile__main_after_setup_8_p_0_2));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_192_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_192_192, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToLink_55));
#line 531 "mercury_compile.m"
                                                                                              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_192_192, 4) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_56));
#line 531 "mercury_compile.m"
                                                                                            }
#line 529 "mercury_compile.m"
                                                                                            {
#line 529 "mercury_compile.m"
                                                                                              top_level__mercury_compile__compile_with_module_options__ho1_9_p_0(top_level__mercury_compile__ModulesToLink_55, top_level__mercury_compile__ExtraObjFiles_56, top_level__mercury_compile__Globals_14, top_level__mercury_compile__MainModuleName_60, top_level__mercury_compile__DetectedGradeFlags_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__V_192_192, &top_level__mercury_compile__Succeeded_61);
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
#line 535 "mercury_compile.m"
                                                                                      {
#line 535 "mercury_compile.m"
                                                                                      }
#line 535 "mercury_compile.m"
                                                                                  }
#line 538 "mercury_compile.m"
                                                                                else
#line 543 "mercury_compile.m"
                                                                                  {
#line 543 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__Limited_62;
#line 543 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__VerboseErrors_63;
#line 543 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__ExtraErrorInfo_64;

#line 543 "mercury_compile.m"
                                                                                    {
#line 543 "mercury_compile.m"
                                                                                      libs__globals__io_get_some_errors_were_context_limited_3_p_0(&top_level__mercury_compile__Limited_62);
                                                                                    }
#line 546 "mercury_compile.m"
                                                                                    if ((top_level__mercury_compile__Limited_62 == (MR_Integer) 0))
#line 545 "mercury_compile.m"
                                                                                      {
#line 545 "mercury_compile.m"
                                                                                      }
#line 546 "mercury_compile.m"
                                                                                    else
#line 547 "mercury_compile.m"
                                                                                      {
#line 548 "mercury_compile.m"
                                                                                        {
#line 548 "mercury_compile.m"
                                                                                          mercury__io__write_string_3_p_0((MR_String) "Some error messages were suppressed by \140--limit-error-contexts\' options.\n");
                                                                                        }
#line 550 "mercury_compile.m"
                                                                                        {
#line 550 "mercury_compile.m"
                                                                                          mercury__io__write_string_3_p_0((MR_String) "You can see the suppressed messages if you recompile without these options.\n");
                                                                                        }
#line 547 "mercury_compile.m"
                                                                                      }
#line 558 "mercury_compile.m"
                                                                                    {
#line 558 "mercury_compile.m"
                                                                                      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 47, &top_level__mercury_compile__VerboseErrors_63);
                                                                                    }
#line 559 "mercury_compile.m"
                                                                                    {
#line 559 "mercury_compile.m"
                                                                                      libs__globals__io_get_extra_error_info_3_p_0(&top_level__mercury_compile__ExtraErrorInfo_64);
                                                                                    }
#line 569 "mercury_compile.m"
                                                                                    if ((top_level__mercury_compile__VerboseErrors_63 == (MR_Integer) 0))
#line 566 "mercury_compile.m"
                                                                                      if ((top_level__mercury_compile__ExtraErrorInfo_64 == (MR_Integer) 0))
#line 567 "mercury_compile.m"
                                                                                        {
#line 567 "mercury_compile.m"
                                                                                        }
#line 566 "mercury_compile.m"
                                                                                      else
#line 563 "mercury_compile.m"
                                                                                        {
#line 564 "mercury_compile.m"
                                                                                          {
#line 564 "mercury_compile.m"
                                                                                            mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                                                                                          }
#line 563 "mercury_compile.m"
                                                                                        }
#line 569 "mercury_compile.m"
                                                                                    else
#line 570 "mercury_compile.m"
                                                                                      {
#line 570 "mercury_compile.m"
                                                                                      }
#line 543 "mercury_compile.m"
                                                                                  }
#line 573 "mercury_compile.m"
                                                                                {
#line 573 "mercury_compile.m"
                                                                                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_14, (MR_Integer) 55, &top_level__mercury_compile__Statistics_65);
                                                                                }
#line 577 "mercury_compile.m"
                                                                                if ((top_level__mercury_compile__Statistics_65 == (MR_Integer) 0))
#line 578 "mercury_compile.m"
                                                                                  {
#line 578 "mercury_compile.m"
                                                                                  }
#line 577 "mercury_compile.m"
                                                                                else
#line 575 "mercury_compile.m"
                                                                                  {
#line 576 "mercury_compile.m"
                                                                                    {
#line 576 "mercury_compile.m"
                                                                                      mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
#line 576 "mercury_compile.m"
                                                                                      return;
                                                                                    }
#line 575 "mercury_compile.m"
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
#line 11506 "top_level.mercury_compile.c"
  {
#line 11508 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__CmdLineArgs_4)) == (MR_mktag((MR_Integer) 1)));
#line 11510 "top_level.mercury_compile.c"
    MR_String top_level__mercury_compile__ArgFile_6;
#line 11512 "top_level.mercury_compile.c"
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
#line 11549 "top_level.mercury_compile.c"
    if (top_level__mercury_compile__succeeded)
#line 11551 "top_level.mercury_compile.c"
      {
#line 11553 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__TypeCtorInfo_79_79;
#line 11555 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DummyGlobals_11;
#line 11557 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeArgs1_12;
#line 11559 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_14;
#line 11561 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__NonOptionArgs_15;
#line 11563 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__DetectedGradeFlags_16;
#line 11565 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Variables_17;
#line 11567 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__AllFlags_37;
#line 11569 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Errors_41;
#line 11571 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ActualGlobals_42;
#line 11573 "top_level.mercury_compile.c"
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
#line 11657 "top_level.mercury_compile.c"
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
#line 11692 "top_level.mercury_compile.c"
      }
#line 11694 "top_level.mercury_compile.c"
    else
#line 11696 "top_level.mercury_compile.c"
      {
#line 11698 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ArgsGlobals_20;
#line 11700 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__MaybeVariables0_21;
#line 11702 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__V_59_59;
#line 11704 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__Link_103;
#line 11706 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__OptionArgs_104;
#line 11708 "top_level.mercury_compile.c"
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
#line 11728 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__MaybeVariables0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11730 "top_level.mercury_compile.c"
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
#line 11747 "top_level.mercury_compile.c"
          }
#line 11749 "top_level.mercury_compile.c"
        else
#line 11751 "top_level.mercury_compile.c"
          {
#line 11753 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Variables0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables0_21, (MR_Integer) 0)));
#line 11755 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MaybeMCFlags0_23;

#line 254 "mercury_compile.m"
            {
#line 254 "mercury_compile.m"
              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__ArgsGlobals_20, top_level__mercury_compile__Variables0_22, &top_level__mercury_compile__MaybeMCFlags0_23);
            }
#line 11763 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__MaybeMCFlags0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11765 "top_level.mercury_compile.c"
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
#line 11782 "top_level.mercury_compile.c"
              }
#line 11784 "top_level.mercury_compile.c"
            else
#line 11786 "top_level.mercury_compile.c"
              {
#line 11788 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MCFlags0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags0_23, (MR_Integer) 0)));
#line 11790 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsErrors_28;
#line 11792 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__FlagsArgsGlobals_29;
#line 11794 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__V_62_62;
#line 11796 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__DetectedGradeFlags_130;
#line 11798 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__Variables_131;
#line 11800 "top_level.mercury_compile.c"
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
                      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__FlagsArgsGlobals_29, (MR_Integer) 644, &top_level__mercury_compile__MaybeConfigFile_32);
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
#line 11999 "top_level.mercury_compile.c"
              }
#line 12001 "top_level.mercury_compile.c"
          }
#line 12003 "top_level.mercury_compile.c"
      }
#line 12005 "top_level.mercury_compile.c"
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

#line 2339 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__real_main_2_p_0


		{
#line 2339 "mercury_compile.m"

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

#line 12475 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2339 "mercury_compile.m"
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
