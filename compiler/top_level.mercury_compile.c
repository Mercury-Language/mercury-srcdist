/*
** Automatically generated from `mercury_compile.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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
#include "ll_backend.llds_to_x86_64.mih"
#include "ll_backend.llds_to_x86_64_out.mih"
#include "ll_backend.x86_64_instrs.mih"
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




#line 190 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 193 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0;

#line 196 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 199 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 202 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 205 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 208 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

#line 211 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 214 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 217 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 220 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 223 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0;

#line 226 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile____vpti_pred_4__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

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

#line 1242 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_50_52_50_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_13,
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_27,
#line 1242 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_29);

#line 1199 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1199 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 724 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 724 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 1242 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_8_p_0_1(
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1242 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1242 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1242 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 1229 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_8_p_0(
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_46_46,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_47_47,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_11,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_12,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_13,
#line 1229 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_14);

#line 1242 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1242__1_8_p_0(
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_13,
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_27,
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_28,
#line 1242 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_29);

#line 1119 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1119__1_2_p_0(
#line 1119 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1119 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75);

#line 774 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 774 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 774 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1226 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1226 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3);

#line 1226 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 2027 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void);

#line 1988 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 1988 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 1988 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 1988 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 1988 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23);

#line 1952 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 1952 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 1952 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 1952 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 1952 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22);

#line 1915 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_30,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_31,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42);

#line 1892 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35);

#line 1802 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1802 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1802 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14);

#line 1778 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1778 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34);

#line 1663 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_24,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70);

#line 1630 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1630 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1630 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1630 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1630 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 1494 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_56,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1494 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_57,
#line 1494 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);

#line 1481 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1470 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1470 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20);

#line 1481 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1457 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1457 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15);

#line 1370 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1370 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1370 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1370 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48);

#line 1338 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1338 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1338 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_32,
#line 1338 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_33);

#line 1313 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1313 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1313 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1313 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1313 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10);

#line 1311 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1311 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1311 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1311 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1311 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1311 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1287 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1287 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1287 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4);

#line 1276 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1276 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1276 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1276 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1276 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10);

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 1262 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1262 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4);

#line 1221 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1221 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1221 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5);

#line 1216 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1216 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_1,
#line 1216 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2);

#line 1207 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1207 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1199 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1199 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1190 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1190 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5);

#line 1187 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1187 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1187 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1187 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2);

#line 1181 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1181 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1181 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1181 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 1171 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1171 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1171 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1171 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24);

#line 1119 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1119 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1119 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1);

#line 1075 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1075 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1075 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16);

#line 1053 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1053 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12);

#line 979 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 979 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 961 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 961 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 958 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 958 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 954 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 954 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6);

#line 937 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 937 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 937 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 937 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 937 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 937 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12);

#line 932 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 932 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1);

#line 799 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 799 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_24,
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);

#line 724 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 724 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7);

#line 704 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_8_p_0_1(
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 704 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 704 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 704 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7);

#line 694 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_8_p_0(
#line 694 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 694 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 694 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 694 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_12,
#line 694 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_13,
#line 694 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_14);

#line 666 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_10_p_0(
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_2,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_3,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_4,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_5,
#line 666 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_6,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_7,
#line 666 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_8);

#line 633 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_9_p_0(
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_11,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_12,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_23,
#line 633 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_24,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_25,
#line 633 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_26);

#line 528 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_8_p_0(
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 528 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_13,
#line 528 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_14);

#line 512 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8);

#line 473 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0_2(
#line 473 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 473 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 473 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 473 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 473 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4);

#line 393 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0_1(
#line 393 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 393 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 393 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 393 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3);

#line 325 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0(
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_8,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_10,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_11,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12);

#line 173 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 173 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 173 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6);

#line 133 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2);


static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[26][2];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_2[1][4];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_3[6][3];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_4[2][6];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[3][1];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_6[2][9];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[1][12];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_8[2][10];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_9[3][5];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_10[1][16];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_11[1][7];

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_12[1][11];




static /* final */ const MR_Box top_level__mercury_compile_scalar_common_1[26][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "using \140mmc -f *.m\'."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "a module name to file name mapping is created"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work unless"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[3])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for module"))
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
    ((MR_Box) (top_level__mercury_compile__main_after_setup_7_p_0_1)),
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 2 */
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

static /* final */ const MR_Box top_level__mercury_compile_scalar_common_7[1][12] = {
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



#line 1660 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1668 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1676 "top_level.mercury_compile.c"
static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 1686 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1694 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1702 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1711 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1719 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &top_level__mercury_compile__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1728 "top_level.mercury_compile.c"
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

#line 1742 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 1750 "top_level.mercury_compile.c"
static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1759 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0
  }
};

#line 1768 "top_level.mercury_compile.c"
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

#line 1780 "top_level.mercury_compile.c"
static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1788 "top_level.mercury_compile.c"
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

#line 1800 "top_level.mercury_compile.c"
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

#line 1812 "top_level.mercury_compile.c"
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

#line 1833 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1838 "top_level.mercury_compile.c"
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

#line 1853 "top_level.mercury_compile.c"
static const MR_PseudoTypeInfo top_level__mercury_compile__top_level__mercury_compile__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 1858 "top_level.mercury_compile.c"
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

#line 1873 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0
};

#line 1878 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 1883 "top_level.mercury_compile.c"
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

#line 1897 "top_level.mercury_compile.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile__top_level__mercury_compile__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile__top_level__mercury_compile__du_functor_desc_file_or_module_0_1
};

#line 1903 "top_level.mercury_compile.c"
static const MR_Integer top_level__mercury_compile__top_level__mercury_compile__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1909 "top_level.mercury_compile.c"
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

#line 1930 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0_10001(
#line 1933 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1935 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 1937 "top_level.mercury_compile.c"
{
#line 1939 "top_level.mercury_compile.c"
  {
#line 1941 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 1944 "top_level.mercury_compile.c"
    {
#line 1946 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____compile_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 1949 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 1951 "top_level.mercury_compile.c"
  }
#line 1953 "top_level.mercury_compile.c"
}

#line 1956 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0_10001(
#line 1959 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 1961 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1963 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 1965 "top_level.mercury_compile.c"
{
#line 1967 "top_level.mercury_compile.c"
  {
#line 1969 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 1972 "top_level.mercury_compile.c"
    {
#line 1974 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____compile_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 1977 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 1979 "top_level.mercury_compile.c"
  }
#line 1981 "top_level.mercury_compile.c"
}

#line 1984 "top_level.mercury_compile.c"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0_10001(
#line 1987 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1989 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2)
#line 1991 "top_level.mercury_compile.c"
{
#line 1993 "top_level.mercury_compile.c"
  {
#line 1995 "top_level.mercury_compile.c"
    MR_bool top_level__mercury_compile__succeeded;

#line 1998 "top_level.mercury_compile.c"
    {
#line 2000 "top_level.mercury_compile.c"
      top_level__mercury_compile__succeeded = top_level__mercury_compile____Unify____file_or_module_0_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2));
    }
#line 2003 "top_level.mercury_compile.c"
    return top_level__mercury_compile__succeeded;
#line 2005 "top_level.mercury_compile.c"
  }
#line 2007 "top_level.mercury_compile.c"
}

#line 2010 "top_level.mercury_compile.c"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0_10001(
#line 2013 "top_level.mercury_compile.c"
  MR_Box * top_level__mercury_compile__wrapper_arg_1,
#line 2015 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 2017 "top_level.mercury_compile.c"
  MR_Box top_level__mercury_compile__wrapper_arg_3)
#line 2019 "top_level.mercury_compile.c"
{
#line 2021 "top_level.mercury_compile.c"
  {
#line 2023 "top_level.mercury_compile.c"
    MR_Word top_level__mercury_compile__conv0_HeadVar__1_1;

#line 2026 "top_level.mercury_compile.c"
    {
#line 2028 "top_level.mercury_compile.c"
      top_level__mercury_compile____Compare____file_or_module_0_0(&top_level__mercury_compile__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3));
    }
#line 2031 "top_level.mercury_compile.c"
    *top_level__mercury_compile__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__1_1));
#line 2033 "top_level.mercury_compile.c"
  }
#line 2035 "top_level.mercury_compile.c"
}

#line 1242 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_50_52_50_95_95_49_95_95_91_51_93_95_48_8_p_0(
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_13,
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_27,
#line 1242 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_29)
#line 1242 "mercury_compile.m"
{
#line 1242 "mercury_compile.m"
  {
#line 1242 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1245 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Compile_13, (MR_Integer) 1)));
#line 1245 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_HeadVar__4_29;
#line 1245 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_HeadVar__8_33;

#line 1245 "mercury_compile.m"
    {
#line 1245 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__Compile_13), ((MR_Box) (top_level__mercury_compile__HeadVar__2_27)), &top_level__mercury_compile__conv2_HeadVar__4_29, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_HeadVar__8_33);
    }
#line 1245 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__4_29 = ((MR_Word) top_level__mercury_compile__conv2_HeadVar__4_29);
#line 1242 "mercury_compile.m"
  }
#line 1242 "mercury_compile.m"
}

#line 1199 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1199 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1199 "mercury_compile.m"
{
#line 1204 "mercury_compile.m"
  {
#line 1204 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1204 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1204 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1205 "mercury_compile.m"
    {
#line 1205 "mercury_compile.m"
      parse_tree__modules__make_short_interface_6_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__Items_13);
#line 1205 "mercury_compile.m"
      return;
    }
#line 1204 "mercury_compile.m"
  }
#line 1199 "mercury_compile.m"
}

#line 724 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 724 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 724 "mercury_compile.m"
{
#line 730 "mercury_compile.m"
  {
#line 730 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 730 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Modules_15;
#line 730 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFiles_16;
#line 730 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateDeps_29;

#line 730 "mercury_compile.m"
    *top_level__mercury_compile__HeadVar__5_5 = (MR_Integer) 1;
#line 740 "mercury_compile.m"
    {
#line 740 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 91, &top_level__mercury_compile__GenerateDeps_29);
    }
#line 752 "mercury_compile.m"
    if ((top_level__mercury_compile__GenerateDeps_29 == (MR_Integer) 0))
#line 753 "mercury_compile.m"
      {
#line 753 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDepFile_32;

#line 754 "mercury_compile.m"
        {
#line 754 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 90, &top_level__mercury_compile__GenerateDepFile_32);
        }
#line 767 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDepFile_32 == (MR_Integer) 0))
#line 769 "mercury_compile.m"
          {
#line 769 "mercury_compile.m"
            top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__FileOrModule_10, &top_level__mercury_compile__Modules_15, &top_level__mercury_compile__ExtraObjFiles_16);
          }
#line 767 "mercury_compile.m"
        else
#line 757 "mercury_compile.m"
          {
#line 758 "mercury_compile.m"
            top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "mercury_compile.m"
            top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 761 "mercury_compile.m"
              {
#line 761 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 762 "mercury_compile.m"
                {
#line 762 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_40);
                }
#line 761 "mercury_compile.m"
              }
#line 763 "mercury_compile.m"
            else
#line 764 "mercury_compile.m"
              {
#line 764 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 765 "mercury_compile.m"
                {
#line 765 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_41);
                }
#line 764 "mercury_compile.m"
              }
#line 757 "mercury_compile.m"
          }
#line 753 "mercury_compile.m"
      }
#line 752 "mercury_compile.m"
    else
#line 742 "mercury_compile.m"
      {
#line 743 "mercury_compile.m"
        top_level__mercury_compile__Modules_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 744 "mercury_compile.m"
        top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 746 "mercury_compile.m"
          {
#line 746 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 747 "mercury_compile.m"
            {
#line 747 "mercury_compile.m"
              parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__FileName_30);
            }
#line 746 "mercury_compile.m"
          }
#line 748 "mercury_compile.m"
        else
#line 749 "mercury_compile.m"
          {
#line 749 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 750 "mercury_compile.m"
            {
#line 750 "mercury_compile.m"
              parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleName_31);
            }
#line 749 "mercury_compile.m"
          }
#line 742 "mercury_compile.m"
      }
#line 730 "mercury_compile.m"
    {
#line 730 "mercury_compile.m"
      MR_Tuple base;
#line 730 "mercury_compile.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 730 "mercury_compile.m"
      *top_level__mercury_compile__HeadVar__7_7 = base;
#line 730 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__Modules_15));
#line 730 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_16));
#line 730 "mercury_compile.m"
    }
#line 730 "mercury_compile.m"
  }
#line 724 "mercury_compile.m"
}

#line 1242 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_8_p_0_1(
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1242 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 1242 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 1242 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 1242 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 1242 "mercury_compile.m"
{
#line 1242 "mercury_compile.m"
  {
#line 1242 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1242 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_29;

#line 1242 "mercury_compile.m"
    {
#line 1242 "mercury_compile.m"
      top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1242__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv0_HeadVar__4_29);
    }
#line 1242 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_29));
#line 1242 "mercury_compile.m"
  }
#line 1242 "mercury_compile.m"
}

#line 1229 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_with_module_options__ho1_8_p_0(
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_46_46,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__V_47_47,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_11,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_12,
#line 1229 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_13,
#line 1229 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Succeeded_14)
#line 1229 "mercury_compile.m"
{
#line 1234 "mercury_compile.m"
  {
#line 1234 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1234 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_16;

#line 1235 "mercury_compile.m"
    {
#line 1235 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 615, &top_level__mercury_compile__InvokedByMake_16);
    }
#line 1240 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_16 == (MR_Integer) 0))
#line 1241 "mercury_compile.m"
      {
#line 1241 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_45_45;
#line 1241 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Builder_17;
#line 1247 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_23_23;

#line 1242 "mercury_compile.m"
        {
#line 1242 "mercury_compile.m"
          top_level__mercury_compile__Builder_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_17, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_12[0]));
#line 1242 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_17, 1) = ((MR_Box) (top_level__mercury_compile__compile_with_module_options__ho1_8_p_0_1));
#line 1242 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1242 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__Builder_17, 3) = ((MR_Box) (top_level__mercury_compile__Compile_13));
#line 1242 "mercury_compile.m"
        }
#line 1247 "mercury_compile.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2353 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_45_45 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1247 "mercury_compile.m"
        {
#line 1247 "mercury_compile.m"
          make__util__build_with_module_options_args_11_p_0(top_level__mercury_compile__TypeCtorInfo_45_45, top_level__mercury_compile__TypeCtorInfo_45_45, top_level__mercury_compile__Globals_9, top_level__mercury_compile__ModuleName_10, top_level__mercury_compile__OptionVariables_11, top_level__mercury_compile__OptionArgs_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Builder_17, top_level__mercury_compile__Succeeded_14, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__V_23_23);
        }
#line 1241 "mercury_compile.m"
      }
#line 1240 "mercury_compile.m"
    else
#line 1239 "mercury_compile.m"
      {
#line 1239 "mercury_compile.m"
        backend_libs__compile_target_code__link_module_list_6_p_0(top_level__mercury_compile__V_46_46, top_level__mercury_compile__V_47_47, top_level__mercury_compile__Globals_9, top_level__mercury_compile__Succeeded_14);
#line 1239 "mercury_compile.m"
        return;
      }
#line 1234 "mercury_compile.m"
  }
#line 1229 "mercury_compile.m"
}

#line 1242 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__compile_with_module_options__1242__1_8_p_0(
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Compile_13,
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_27,
#line 1242 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_28,
#line 1242 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__4_29)
#line 1242 "mercury_compile.m"
{
#line 1242 "mercury_compile.m"
  {
#line 1242 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1242 "mercury_compile.m"
    {
#line 1242 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_49_50_52_50_95_95_49_95_95_91_51_93_95_48_8_p_0(top_level__mercury_compile__Compile_13, top_level__mercury_compile__HeadVar__2_27, top_level__mercury_compile__HeadVar__4_29);
#line 1242 "mercury_compile.m"
      return;
    }
#line 1242 "mercury_compile.m"
  }
#line 1242 "mercury_compile.m"
}

#line 1119 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1119__1_2_p_0(
#line 1119 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModulesToRecompile_39,
#line 1119 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_75)
#line 1119 "mercury_compile.m"
{
#line 1119 "mercury_compile.m"
  {
#line 1119 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1119 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SubModule_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 0)));
#line 1119 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_75, (MR_Integer) 1)));

#line 1120 "mercury_compile.m"
    {
#line 1120 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (top_level__mercury_compile__SubModule_82)), top_level__mercury_compile__ModulesToRecompile_39);
    }
#line 1119 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1119 "mercury_compile.m"
  }
#line 1119 "mercury_compile.m"
}

#line 774 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____file_or_module_0_0(
#line 774 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 774 "mercury_compile.m"
{
#line 774 "mercury_compile.m"
  {
#line 774 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 774 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_12 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;
#line 774 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_13 = (MR_Integer) top_level__mercury_compile__HeadVar__3_3;

#line 774 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_12 == top_level__mercury_compile__CastY_13);
#line 774 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2460 "top_level.mercury_compile.c"
      *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 0;
#line 774 "mercury_compile.m"
    else
#line 774 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 774 "mercury_compile.m"
        {
#line 774 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 774 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 774 "mercury_compile.m"
            {
#line 774 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 774 "mercury_compile.m"
              {
#line 774 "mercury_compile.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_16_16, top_level__mercury_compile__V_5_5);
#line 774 "mercury_compile.m"
                return;
              }
#line 774 "mercury_compile.m"
            }
#line 774 "mercury_compile.m"
          else
#line 2489 "top_level.mercury_compile.c"
            *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 1;
#line 774 "mercury_compile.m"
        }
#line 774 "mercury_compile.m"
      else
#line 774 "mercury_compile.m"
        {
#line 774 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));

#line 774 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2502 "top_level.mercury_compile.c"
            *top_level__mercury_compile__HeadVar__1_1 = (MR_Integer) 2;
#line 774 "mercury_compile.m"
          else
#line 774 "mercury_compile.m"
            {
#line 774 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__3_3, (MR_Integer) 0)));

#line 774 "mercury_compile.m"
              {
#line 774 "mercury_compile.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(top_level__mercury_compile__HeadVar__1_1, top_level__mercury_compile__V_17_17, top_level__mercury_compile__V_11_11);
#line 774 "mercury_compile.m"
                return;
              }
#line 774 "mercury_compile.m"
            }
#line 774 "mercury_compile.m"
        }
#line 774 "mercury_compile.m"
  }
#line 774 "mercury_compile.m"
}

#line 774 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____file_or_module_0_0(
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 774 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 774 "mercury_compile.m"
{
#line 774 "mercury_compile.m"
  {
#line 774 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 774 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastX_7 = (MR_Integer) top_level__mercury_compile__HeadVar__1_1;
#line 774 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__CastY_8 = (MR_Integer) top_level__mercury_compile__HeadVar__2_2;

#line 774 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__CastX_7 == top_level__mercury_compile__CastY_8);
#line 774 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 774 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 774 "mercury_compile.m"
    else
#line 774 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 774 "mercury_compile.m"
        {
#line 774 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 774 "mercury_compile.m"
          MR_String top_level__mercury_compile__V_4_4;

#line 774 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 774 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 774 "mercury_compile.m"
            {
#line 774 "mercury_compile.m"
              top_level__mercury_compile__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 2570 "top_level.mercury_compile.c"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_3_3, top_level__mercury_compile__V_4_4) == 0);
#line 774 "mercury_compile.m"
            }
#line 774 "mercury_compile.m"
        }
#line 774 "mercury_compile.m"
      else
#line 774 "mercury_compile.m"
        {
#line 774 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 774 "mercury_compile.m"
          MR_Word top_level__mercury_compile__V_6_6;

#line 774 "mercury_compile.m"
          top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 774 "mercury_compile.m"
          if (top_level__mercury_compile__succeeded)
#line 774 "mercury_compile.m"
            {
#line 774 "mercury_compile.m"
              top_level__mercury_compile__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__2_2, (MR_Integer) 0)));
#line 2593 "top_level.mercury_compile.c"
              {
#line 2595 "top_level.mercury_compile.c"
                return top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile__V_5_5, top_level__mercury_compile__V_6_6);
              }
#line 774 "mercury_compile.m"
            }
#line 774 "mercury_compile.m"
        }
#line 774 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 774 "mercury_compile.m"
  }
#line 774 "mercury_compile.m"
}

#line 1226 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile____Compare____compile_0_0(
#line 1226 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__1_1,
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2,
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_3)
#line 1226 "mercury_compile.m"
{
#line 1226 "mercury_compile.m"
  {
#line 1226 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_4 = top_level__mercury_compile__HeadVar__2_2;
#line 1226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_5 = top_level__mercury_compile__HeadVar__3_3;

#line 1226 "mercury_compile.m"
    {
#line 1226 "mercury_compile.m"
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_4[0], top_level__mercury_compile__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile__Cast_HeadVar2_5)));
#line 1226 "mercury_compile.m"
      return;
    }
#line 1226 "mercury_compile.m"
  }
#line 1226 "mercury_compile.m"
}

#line 1226 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile____Unify____compile_0_0(
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1226 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1226 "mercury_compile.m"
{
#line 1226 "mercury_compile.m"
  {
#line 1226 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar1_3 = top_level__mercury_compile__HeadVar__1_1;
#line 1226 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Cast_HeadVar2_4 = top_level__mercury_compile__HeadVar__2_2;

#line 1226 "mercury_compile.m"
    {
#line 1226 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) top_level__mercury_compile__Cast_HeadVar1_3, (MR_Word) top_level__mercury_compile__Cast_HeadVar2_4);
    }
#line 1226 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1226 "mercury_compile.m"
  }
#line 1226 "mercury_compile.m"
}

#line 2027 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__gc_init_2_p_0(void)
#line 2027 "mercury_compile.m"
{
#line 2032 "mercury_compile.m"
  {
#line 2032 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 2035 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__gc_init_2_p_0


		{
#line 2035 "mercury_compile.m"

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

#line 2704 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2035 "mercury_compile.m"
}
#line 2032 "mercury_compile.m"
  }
#line 2027 "mercury_compile.m"
}

#line 1988 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(
#line 1988 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 1988 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 1988 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22,
#line 1988 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_23)
#line 1988 "mercury_compile.m"
{
#line 1991 "mercury_compile.m"
  {
#line 1991 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1991 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 1991 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileCalls_12;
#line 1991 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProfileTime_13;

#line 1992 "mercury_compile.m"
    {
#line 1992 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__Globals_11);
    }
#line 1993 "mercury_compile.m"
    {
#line 1993 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 188, &top_level__mercury_compile__ProfileCalls_12);
    }
#line 1994 "mercury_compile.m"
    {
#line 1994 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 189, &top_level__mercury_compile__ProfileTime_13);
    }
#line 1996 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileCalls_12 == (MR_Integer) 1);
#line 1997 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1997 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__ProfileTime_13 == (MR_Integer) 1);
#line 2021 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 2001 "mercury_compile.m"
      {
#line 2001 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_14;
#line 2001 "mercury_compile.m"
        MR_String top_level__mercury_compile__ProfFileName_15;
#line 2001 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_16;

#line 2000 "mercury_compile.m"
        {
#line 2000 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Outputing profiling call graph...");
        }
#line 2002 "mercury_compile.m"
        {
#line 2002 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_7);
        }
#line 2003 "mercury_compile.m"
        {
#line 2003 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile__ModuleName_14);
        }
#line 2004 "mercury_compile.m"
        {
#line 2004 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_14, (MR_String) ".prof", (MR_Integer) 0, &top_level__mercury_compile__ProfFileName_15);
        }
#line 2006 "mercury_compile.m"
        {
#line 2006 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__ProfFileName_15, &top_level__mercury_compile__Res_16);
        }
#line 2013 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_16)) == (MR_mktag((MR_Integer) 1))))
#line 2014 "mercury_compile.m"
          {
#line 2014 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2014 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_21;
#line 2014 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_36_36;

#line 2015 "mercury_compile.m"
            {
#line 2015 "mercury_compile.m"
              top_level__mercury_compile__V_36_36 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_20);
            }
#line 2015 "mercury_compile.m"
            {
#line 2015 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", top_level__mercury_compile__V_36_36);
            }
#line 2017 "mercury_compile.m"
            {
#line 2017 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_21);
            }
#line 2017 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 2014 "mercury_compile.m"
          }
#line 2013 "mercury_compile.m"
        else
#line 2008 "mercury_compile.m"
          {
#line 2008 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_16, (MR_Integer) 0)));
#line 2008 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_18;
#line 2011 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_19_19;

#line 2009 "mercury_compile.m"
            {
#line 2009 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_17, &top_level__mercury_compile__OutputStream_18);
            }
#line 2010 "mercury_compile.m"
            {
#line 2010 "mercury_compile.m"
              transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_23);
            }
#line 2011 "mercury_compile.m"
            {
#line 2011 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_18, &top_level__mercury_compile__V_19_19);
            }
#line 2012 "mercury_compile.m"
            {
#line 2012 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_17);
            }
#line 2008 "mercury_compile.m"
          }
#line 2019 "mercury_compile.m"
        {
#line 2019 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
        }
#line 2020 "mercury_compile.m"
        {
#line 2020 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 2020 "mercury_compile.m"
          return;
        }
#line 2001 "mercury_compile.m"
      }
#line 2021 "mercury_compile.m"
    else
#line 2022 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_22;
#line 1991 "mercury_compile.m"
  }
#line 1988 "mercury_compile.m"
}

#line 1952 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(
#line 1952 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_7,
#line 1952 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_8,
#line 1952 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21,
#line 1952 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_22)
#line 1952 "mercury_compile.m"
{
#line 1955 "mercury_compile.m"
  {
#line 1955 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1955 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_11;
#line 1955 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ShowDepGraph_12;

#line 1956 "mercury_compile.m"
    {
#line 1956 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__Globals_11);
    }
#line 1957 "mercury_compile.m"
    {
#line 1957 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_11, (MR_Integer) 137, &top_level__mercury_compile__ShowDepGraph_12);
    }
#line 1979 "mercury_compile.m"
    if ((top_level__mercury_compile__ShowDepGraph_12 == (MR_Integer) 0))
#line 1980 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 1979 "mercury_compile.m"
    else
#line 1959 "mercury_compile.m"
      {
#line 1959 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_13;
#line 1959 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_14;
#line 1959 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Res_15;

#line 1960 "mercury_compile.m"
        {
#line 1960 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) "% Writing dependency graph...");
        }
#line 1961 "mercury_compile.m"
        {
#line 1961 "mercury_compile.m"
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile__ModuleName_13);
        }
#line 1962 "mercury_compile.m"
        {
#line 1962 "mercury_compile.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_11, top_level__mercury_compile__ModuleName_13, (MR_String) ".dependency_graph", (MR_Integer) 0, &top_level__mercury_compile__FileName_14);
        }
#line 1964 "mercury_compile.m"
        {
#line 1964 "mercury_compile.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile__FileName_14, &top_level__mercury_compile__Res_15);
        }
#line 1972 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__Res_15)) == (MR_mktag((MR_Integer) 1))))
#line 1973 "mercury_compile.m"
          {
#line 1973 "mercury_compile.m"
            MR_Word top_level__mercury_compile__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 1973 "mercury_compile.m"
            MR_String top_level__mercury_compile__ErrorMsg_20;
#line 1973 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_33_33;

#line 1974 "mercury_compile.m"
            {
#line 1974 "mercury_compile.m"
              top_level__mercury_compile__V_33_33 = mercury__io__error_message_1_f_0(top_level__mercury_compile__IOError_19);
            }
#line 1974 "mercury_compile.m"
            {
#line 1974 "mercury_compile.m"
              top_level__mercury_compile__ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", top_level__mercury_compile__V_33_33);
            }
#line 1976 "mercury_compile.m"
            {
#line 1976 "mercury_compile.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile__ErrorMsg_20);
            }
#line 1976 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21;
#line 1973 "mercury_compile.m"
          }
#line 1972 "mercury_compile.m"
        else
#line 1966 "mercury_compile.m"
          {
#line 1966 "mercury_compile.m"
            MR_Word top_level__mercury_compile__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_15, (MR_Integer) 0)));
#line 1966 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OutputStream_17;
#line 1969 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_18_18;

#line 1967 "mercury_compile.m"
            {
#line 1967 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__FileStream_16, &top_level__mercury_compile__OutputStream_17);
            }
#line 1968 "mercury_compile.m"
            {
#line 1968 "mercury_compile.m"
              transform_hlds__dependency_graph__write_dependency_graph_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile__STATE_VARIABLE_HLDS_22);
            }
#line 1969 "mercury_compile.m"
            {
#line 1969 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OutputStream_17, &top_level__mercury_compile__V_18_18);
            }
#line 1970 "mercury_compile.m"
            {
#line 1970 "mercury_compile.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile__FileStream_16);
            }
#line 1971 "mercury_compile.m"
            {
#line 1971 "mercury_compile.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_7, (MR_String) " done.\n");
            }
#line 1966 "mercury_compile.m"
          }
#line 1978 "mercury_compile.m"
        {
#line 1978 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_8);
#line 1978 "mercury_compile.m"
          return;
        }
#line 1959 "mercury_compile.m"
      }
#line 1955 "mercury_compile.m"
  }
#line 1952 "mercury_compile.m"
}

#line 1915 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__make_hlds_18_p_0(
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_19,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_20,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items_21,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSet_22,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MQInfo_23,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EqvMap_24,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__UsedModules_25,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_26,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_27,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_40,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_29,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_30,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_31,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundSemanticError_32,
#line 1915 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_41,
#line 1915 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_42)
#line 1915 "mercury_compile.m"
{
#line 1923 "mercury_compile.m"
  {
#line 1923 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1923 "mercury_compile.m"
    MR_String top_level__mercury_compile__DumpBaseFileName_35;
#line 1923 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ParseTree_36;
#line 1923 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeSpecs_37;
#line 1923 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__Status_38;
#line 1923 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SpecsErrors_39;
#line 1923 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_45_45;
#line 1923 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52;
#line 1923 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_53_53;

#line 1924 "mercury_compile.m"
    {
#line 1924 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_0_41, &top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 1925 "mercury_compile.m"
    {
#line 1925 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% Converting parse tree to hlds...\n");
    }
#line 1926 "mercury_compile.m"
    {
#line 1926 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__ModuleName_20, (MR_String) ".hlds_dump", (MR_Integer) 0, &top_level__mercury_compile__DumpBaseFileName_35);
    }
#line 1928 "mercury_compile.m"
    {
#line 1928 "mercury_compile.m"
      top_level__mercury_compile__ParseTree_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1928 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_20));
#line 1928 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__ParseTree_36, 1) = ((MR_Box) (top_level__mercury_compile__Items_21));
#line 1928 "mercury_compile.m"
    }
#line 1929 "mercury_compile.m"
    {
#line 1929 "mercury_compile.m"
      hlds__make_hlds__parse_tree_to_hlds_11_p_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__DumpBaseFileName_35, top_level__mercury_compile__ParseTree_36, top_level__mercury_compile__MQInfo_23, top_level__mercury_compile__EqvMap_24, top_level__mercury_compile__UsedModules_25, top_level__mercury_compile__QualInfo_29, top_level__mercury_compile__UndefTypes_30, top_level__mercury_compile__UndefModes_31, &top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, &top_level__mercury_compile__MakeSpecs_37);
    }
#line 1931 "mercury_compile.m"
    {
#line 1931 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__MakeSpecs_37, top_level__mercury_compile__STATE_VARIABLE_Specs_45_45);
    }
#line 1932 "mercury_compile.m"
    {
#line 1932 "mercury_compile.m"
      hlds__hlds_module__module_info_set_event_set_3_p_0(top_level__mercury_compile__EventSet_22, top_level__mercury_compile__STATE_VARIABLE_HLDS_52_52, top_level__mercury_compile__STATE_VARIABLE_HLDS_40);
    }
#line 1933 "mercury_compile.m"
    {
#line 1933 "mercury_compile.m"
      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__Status_38);
    }
#line 1934 "mercury_compile.m"
    {
#line 1934 "mercury_compile.m"
      top_level__mercury_compile__SpecsErrors_39 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53);
    }
#line 1936 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Status_38 == (MR_Integer) 0);
#line 1936 "mercury_compile.m"
    top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1937 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1937 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__SpecsErrors_39 == (MR_Integer) 1);
#line 1942 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1940 "mercury_compile.m"
      {
#line 1940 "mercury_compile.m"
        *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 1;
#line 1941 "mercury_compile.m"
        {
#line 1941 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 1940 "mercury_compile.m"
      }
#line 1942 "mercury_compile.m"
    else
#line 1943 "mercury_compile.m"
      *top_level__mercury_compile__FoundSemanticError_32 = (MR_Integer) 0;
#line 1945 "mercury_compile.m"
    {
#line 1945 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_26, top_level__mercury_compile__Globals_19, top_level__mercury_compile__STATE_VARIABLE_Specs_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_42);
    }
#line 1946 "mercury_compile.m"
    {
#line 1946 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_26, (MR_String) "% done.\n");
    }
#line 1947 "mercury_compile.m"
    {
#line 1947 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_27);
#line 1947 "mercury_compile.m"
      return;
    }
#line 1923 "mercury_compile.m"
  }
#line 1915 "mercury_compile.m"
}

#line 1892 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_equiv_types_17_p_0(
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_18,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_19,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_20,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_21,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_22,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_23,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_24,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_25,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EqvMap_26,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UsedModules_27,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__RecompInfo0_28,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__RecompInfo_29,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_30,
#line 1892 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_34,
#line 1892 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_35)
#line 1892 "mercury_compile.m"
{
#line 1900 "mercury_compile.m"
  {
#line 1900 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1900 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandSpecs_33;
#line 1900 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_38_38;
#line 1900 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_43_43;

#line 1901 "mercury_compile.m"
    {
#line 1901 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_0_34, &top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 1902 "mercury_compile.m"
    {
#line 1902 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% Expanding equivalence types...\n");
    }
#line 1903 "mercury_compile.m"
    {
#line 1903 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_20);
    }
#line 1904 "mercury_compile.m"
    {
#line 1904 "mercury_compile.m"
      parse_tree__equiv_type__expand_eqv_types_10_p_0(top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__Items0_22, top_level__mercury_compile__Items_23, top_level__mercury_compile__EventSpecMap0_24, top_level__mercury_compile__EventSpecMap_25, top_level__mercury_compile__EqvMap_26, top_level__mercury_compile__UsedModules_27, top_level__mercury_compile__RecompInfo0_28, top_level__mercury_compile__RecompInfo_29, &top_level__mercury_compile__ExpandSpecs_33);
    }
#line 1907 "mercury_compile.m"
    {
#line 1907 "mercury_compile.m"
      *top_level__mercury_compile__FoundError_30 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_18, top_level__mercury_compile__ExpandSpecs_33);
    }
#line 1908 "mercury_compile.m"
    {
#line 1908 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ExpandSpecs_33, top_level__mercury_compile__STATE_VARIABLE_Specs_38_38);
    }
#line 1909 "mercury_compile.m"
    {
#line 1909 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_20, top_level__mercury_compile__Globals_18, top_level__mercury_compile__STATE_VARIABLE_Specs_43_43, top_level__mercury_compile__STATE_VARIABLE_Specs_35);
    }
#line 1910 "mercury_compile.m"
    {
#line 1910 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_20, (MR_String) "% done.\n");
    }
#line 1911 "mercury_compile.m"
    {
#line 1911 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_21);
#line 1911 "mercury_compile.m"
      return;
    }
#line 1900 "mercury_compile.m"
  }
#line 1892 "mercury_compile.m"
}

#line 1802 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_grab_optfiles_8_p_0(
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Imports0_10,
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_11,
#line 1802 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTransOptDeps_12,
#line 1802 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Imports_13,
#line 1802 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_14)
#line 1802 "mercury_compile.m"
{
#line 1807 "mercury_compile.m"
  {
#line 1807 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodOpt_16;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UseOptInt_17;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_18;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TransOpt_19;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_20;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_21;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Imports1_22;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error1_23;
#line 1807 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error2_25;

#line 1808 "mercury_compile.m"
    {
#line 1808 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 325, &top_level__mercury_compile__IntermodOpt_16);
    }
#line 1810 "mercury_compile.m"
    {
#line 1810 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 327, &top_level__mercury_compile__UseOptInt_17);
    }
#line 1811 "mercury_compile.m"
    {
#line 1811 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_18);
    }
#line 1813 "mercury_compile.m"
    {
#line 1813 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 329, &top_level__mercury_compile__TransOpt_19);
    }
#line 1814 "mercury_compile.m"
    {
#line 1814 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 86, &top_level__mercury_compile__MakeTransOptInt_20);
    }
#line 1816 "mercury_compile.m"
    {
#line 1816 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 330, &top_level__mercury_compile__IntermodAnalysis_21);
    }
#line 1819 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__UseOptInt_17 == (MR_Integer) 1);
#line 1820 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1820 "mercury_compile.m"
      {
#line 1820 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodOpt_16 == (MR_Integer) 1);
#line 1820 "mercury_compile.m"
        if (!(top_level__mercury_compile__succeeded))
#line 1821 "mercury_compile.m"
          top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodAnalysis_21 == (MR_Integer) 1);
#line 1820 "mercury_compile.m"
      }
#line 1822 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1823 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 0);
#line 1829 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1825 "mercury_compile.m"
      {
#line 1825 "mercury_compile.m"
        {
#line 1825 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Reading .opt files...\n");
        }
#line 1826 "mercury_compile.m"
        {
#line 1826 "mercury_compile.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_11);
        }
#line 1827 "mercury_compile.m"
        {
#line 1827 "mercury_compile.m"
          transform_hlds__intermod__grab_opt_files_6_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__Imports0_10, &top_level__mercury_compile__Imports1_22, &top_level__mercury_compile__Error1_23);
        }
#line 1828 "mercury_compile.m"
        {
#line 1828 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_11, (MR_String) "% Done.\n");
        }
#line 1825 "mercury_compile.m"
      }
#line 1829 "mercury_compile.m"
    else
#line 1830 "mercury_compile.m"
      {
#line 1830 "mercury_compile.m"
        top_level__mercury_compile__Imports1_22 = top_level__mercury_compile__Imports0_10;
#line 1831 "mercury_compile.m"
        top_level__mercury_compile__Error1_23 = (MR_Integer) 0;
#line 1830 "mercury_compile.m"
      }
#line 1833 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_20 == (MR_Integer) 1);
#line 1862 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1840 "mercury_compile.m"
      if ((top_level__mercury_compile__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1841 "mercury_compile.m"
        {
#line 1841 "mercury_compile.m"
          MR_Word top_level__mercury_compile__ModuleName_26;
#line 1841 "mercury_compile.m"
          MR_Word top_level__mercury_compile__WarnNoTransOptDeps_27;

#line 1842 "mercury_compile.m"
          *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1843 "mercury_compile.m"
          top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1844 "mercury_compile.m"
          {
#line 1844 "mercury_compile.m"
            parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*top_level__mercury_compile__Imports_13, &top_level__mercury_compile__ModuleName_26);
          }
#line 1845 "mercury_compile.m"
          {
#line 1845 "mercury_compile.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 14, &top_level__mercury_compile__WarnNoTransOptDeps_27);
          }
#line 1858 "mercury_compile.m"
          if ((top_level__mercury_compile__WarnNoTransOptDeps_27 == (MR_Integer) 0))
#line 1859 "mercury_compile.m"
            {
#line 1859 "mercury_compile.m"
            }
#line 1858 "mercury_compile.m"
          else
#line 1848 "mercury_compile.m"
            {
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Pieces_28;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Msg_29;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Spec_30;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_52_52;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_55_55;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_56_56;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_71_71;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_72_72;
#line 1848 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_76_76;
#line 1856 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumWarnings_31;
#line 1856 "mercury_compile.m"
              MR_Integer top_level__mercury_compile___NumErrors_32;

#line 1850 "mercury_compile.m"
              {
#line 1850 "mercury_compile.m"
                top_level__mercury_compile__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1850 "mercury_compile.m"
                MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_56_56, 1) = ((MR_Box) (top_level__mercury_compile__ModuleName_26));
#line 1850 "mercury_compile.m"
              }
#line 1850 "mercury_compile.m"
              {
#line 1850 "mercury_compile.m"
                top_level__mercury_compile__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 0) = ((MR_Box) (top_level__mercury_compile__V_56_56));
#line 1850 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[16])));
#line 1850 "mercury_compile.m"
              }
#line 1849 "mercury_compile.m"
              {
#line 1849 "mercury_compile.m"
                top_level__mercury_compile__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[25])));
#line 1849 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_52_52, 1) = ((MR_Box) (top_level__mercury_compile__V_55_55));
#line 1849 "mercury_compile.m"
              }
#line 1849 "mercury_compile.m"
              {
#line 1849 "mercury_compile.m"
                top_level__mercury_compile__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[24])));
#line 1849 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_28, 1) = ((MR_Box) (top_level__mercury_compile__V_52_52));
#line 1849 "mercury_compile.m"
              }
#line 1853 "mercury_compile.m"
              {
#line 1853 "mercury_compile.m"
                top_level__mercury_compile__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1853 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_72_72, 0) = ((MR_Box) (top_level__mercury_compile__Pieces_28));
#line 1853 "mercury_compile.m"
              }
#line 1852 "mercury_compile.m"
              {
#line 1852 "mercury_compile.m"
                top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (top_level__mercury_compile__V_72_72));
#line 1852 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1852 "mercury_compile.m"
              }
#line 1852 "mercury_compile.m"
              {
#line 1852 "mercury_compile.m"
                top_level__mercury_compile__Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1852 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1852 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1852 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__Msg_29, 3) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 1852 "mercury_compile.m"
              }
#line 1854 "mercury_compile.m"
              {
#line 1854 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 0) = ((MR_Box) (top_level__mercury_compile__Msg_29));
#line 1854 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1854 "mercury_compile.m"
              }
#line 1854 "mercury_compile.m"
              {
#line 1854 "mercury_compile.m"
                top_level__mercury_compile__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1854 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1854 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1854 "mercury_compile.m"
                MR_hl_field(MR_mktag(0), top_level__mercury_compile__Spec_30, 2) = ((MR_Box) (top_level__mercury_compile__V_76_76));
#line 1854 "mercury_compile.m"
              }
#line 1856 "mercury_compile.m"
              {
#line 1856 "mercury_compile.m"
                parse_tree__error_util__write_error_spec_8_p_0(top_level__mercury_compile__Spec_30, top_level__mercury_compile__Globals_9, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_31, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_32);
              }
#line 1848 "mercury_compile.m"
            }
#line 1841 "mercury_compile.m"
        }
#line 1840 "mercury_compile.m"
      else
#line 1835 "mercury_compile.m"
        {
#line 1835 "mercury_compile.m"
          MR_Word top_level__mercury_compile__TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTransOptDeps_12, (MR_Integer) 0)));

#line 1838 "mercury_compile.m"
          {
#line 1838 "mercury_compile.m"
            transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptDeps_24, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
          }
#line 1835 "mercury_compile.m"
        }
#line 1862 "mercury_compile.m"
    else
#line 1868 "mercury_compile.m"
      {
#line 1862 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_18 == (MR_Integer) 1);
#line 1868 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1866 "mercury_compile.m"
          {
#line 1866 "mercury_compile.m"
            *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1867 "mercury_compile.m"
            top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1866 "mercury_compile.m"
          }
#line 1868 "mercury_compile.m"
        else
#line 1882 "mercury_compile.m"
          if ((top_level__mercury_compile__TransOpt_19 == (MR_Integer) 0))
#line 1883 "mercury_compile.m"
            {
#line 1884 "mercury_compile.m"
              *top_level__mercury_compile__Imports_13 = top_level__mercury_compile__Imports1_22;
#line 1885 "mercury_compile.m"
              top_level__mercury_compile__Error2_25 = (MR_Integer) 0;
#line 1883 "mercury_compile.m"
            }
#line 1882 "mercury_compile.m"
          else
#line 1870 "mercury_compile.m"
            {
#line 1870 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptFilesList_33;
#line 1870 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TransOptFiles_34;
#line 1870 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 3)));
#line 1870 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_83_83;
#line 1870 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_85_85;
#line 1870 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 4)));
#line 1870 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 5)));
#line 1876 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 0)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 1)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 2)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 6)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 7)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 8)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 9)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 10)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 11)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 12)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 13)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 14)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 15)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 16)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 17)));
#line 1876 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 18)));
#line 1876 "mercury_compile.m"
              MR_String top_level__mercury_compile__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Imports0_10, (MR_Integer) 19)));

#line 1877 "mercury_compile.m"
              {
#line 1877 "mercury_compile.m"
                top_level__mercury_compile__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 0) = ((MR_Box) (top_level__mercury_compile__V_93_93));
#line 1877 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1877 "mercury_compile.m"
              }
#line 1876 "mercury_compile.m"
              {
#line 1876 "mercury_compile.m"
                top_level__mercury_compile__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 0) = ((MR_Box) (top_level__mercury_compile__V_92_92));
#line 1876 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_83_83, 1) = ((MR_Box) (top_level__mercury_compile__V_85_85));
#line 1876 "mercury_compile.m"
              }
#line 1875 "mercury_compile.m"
              {
#line 1875 "mercury_compile.m"
                top_level__mercury_compile__TransOptFilesList_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 0) = ((MR_Box) (top_level__mercury_compile__V_82_82));
#line 1875 "mercury_compile.m"
                MR_hl_field(MR_mktag(1), top_level__mercury_compile__TransOptFilesList_33, 1) = ((MR_Box) (top_level__mercury_compile__V_83_83));
#line 1875 "mercury_compile.m"
              }
#line 1879 "mercury_compile.m"
              {
#line 1879 "mercury_compile.m"
                mercury__list__condense_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, top_level__mercury_compile__TransOptFilesList_33, &top_level__mercury_compile__TransOptFiles_34);
              }
#line 1880 "mercury_compile.m"
              {
#line 1880 "mercury_compile.m"
                transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__TransOptFiles_34, top_level__mercury_compile__Imports1_22, top_level__mercury_compile__Imports_13, &top_level__mercury_compile__Error2_25);
              }
#line 1870 "mercury_compile.m"
            }
#line 1868 "mercury_compile.m"
      }
#line 1888 "mercury_compile.m"
    {
#line 1888 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__Error1_23, top_level__mercury_compile__Error2_25, top_level__mercury_compile__Error_14);
#line 1888 "mercury_compile.m"
      return;
    }
#line 1807 "mercury_compile.m"
  }
#line 1802 "mercury_compile.m"
}

#line 1778 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__invoke_module_qualify_items_16_p_0(
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_17,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Items0_18,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_19,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__EventSpecMap0_20,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__EventSpecMap_21,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_22,
#line 1778 "mercury_compile.m"
  MR_String top_level__mercury_compile__EventSpecFileName_23,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_24,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_25,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MQInfo_26,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_27,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_28,
#line 1778 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_33,
#line 1778 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_34)
#line 1778 "mercury_compile.m"
{
#line 1786 "mercury_compile.m"
  {
#line 1786 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1786 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_31;
#line 1786 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualifySpecs_32;
#line 1786 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_37_37;
#line 1786 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_45_45;
#line 1786 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_47_47;

#line 1787 "mercury_compile.m"
    {
#line 1787 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_0_33, &top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1788 "mercury_compile.m"
    {
#line 1788 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% Module qualifying items...\n");
    }
#line 1789 "mercury_compile.m"
    {
#line 1789 "mercury_compile.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile__Verbose_24);
    }
#line 1790 "mercury_compile.m"
    {
#line 1790 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, (MR_String) ".m", (MR_Integer) 1, &top_level__mercury_compile__FileName_31);
    }
#line 1792 "mercury_compile.m"
    {
#line 1792 "mercury_compile.m"
      top_level__mercury_compile__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1792 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_45_45, 0) = ((MR_Box) (top_level__mercury_compile__FileName_31));
#line 1792 "mercury_compile.m"
    }
#line 1792 "mercury_compile.m"
    {
#line 1792 "mercury_compile.m"
      parse_tree__module_qual__module_qualify_items_13_p_0(top_level__mercury_compile__Items0_18, top_level__mercury_compile__Items_19, top_level__mercury_compile__EventSpecMap0_20, top_level__mercury_compile__EventSpecMap_21, top_level__mercury_compile__Globals_17, top_level__mercury_compile__ModuleName_22, top_level__mercury_compile__V_45_45, top_level__mercury_compile__EventSpecFileName_23, top_level__mercury_compile__MQInfo_26, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__QualifySpecs_32);
    }
#line 1795 "mercury_compile.m"
    {
#line 1795 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_47_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__QualifySpecs_32, top_level__mercury_compile__STATE_VARIABLE_Specs_37_37);
    }
#line 1796 "mercury_compile.m"
    {
#line 1796 "mercury_compile.m"
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile__Verbose_24, top_level__mercury_compile__Globals_17, top_level__mercury_compile__STATE_VARIABLE_Specs_47_47, top_level__mercury_compile__STATE_VARIABLE_Specs_34);
    }
#line 1797 "mercury_compile.m"
    {
#line 1797 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_24, (MR_String) "% done.\n");
    }
#line 1798 "mercury_compile.m"
    {
#line 1798 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_25);
#line 1798 "mercury_compile.m"
      return;
    }
#line 1786 "mercury_compile.m"
  }
#line 1778 "mercury_compile.m"
}

#line 1663 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__pre_hlds_pass_15_p_0(
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_16,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports0_17,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__DontWriteDFile0_18,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HLDS1_19,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__QualInfo_20,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamps_21,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefTypes_22,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__UndefModes_23,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FoundError_24,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68,
#line 1663 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_69,
#line 1663 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_70)
#line 1663 "mercury_compile.m"
{
#line 1670 "mercury_compile.m"
  {
#line 1670 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_120_120;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_28;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_29;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MMCMake_30;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile1_31;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_32;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_33;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_34;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTransOptDeps_35;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleAndImports1_36;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodError_37;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items1_38;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ItemSpecs_39;
#line 1670 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetFileName_41;
#line 1670 "mercury_compile.m"
    MR_String top_level__mercury_compile__EventSetName_42;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap1_43;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSetErrors_44;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items2_48;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap2_49;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo0_50;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefTypes_51;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQUndefModes_52;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo0_53;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_54;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSpecMap_55;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EqvMap_56;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UsedModules_57;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__RecompInfo_58;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExpandErrors_59;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MQInfo_60;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__EventSet_61;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS0_62;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSUndefTypes_63;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeHLDSUndefModes_64;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_82_82;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_83_83;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_85_85;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_89_89;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_90_90;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_91_91;
#line 1670 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_92_92;
#line 1700 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Error_40;
#line 1703 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_101_101;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_102_102;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_103_103;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_104_104;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_105_105;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_106_106;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_107_107;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_108_108;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_109_109;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_110_110;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_111_111;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_112_112;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_113_113;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_114_114;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_115_115;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_116_116;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_117_117;
#line 1703 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_118_118;
#line 1703 "mercury_compile.m"
    MR_String top_level__mercury_compile__V_119_119;

#line 1671 "mercury_compile.m"
    {
#line 1671 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 54, &top_level__mercury_compile__Stats_28);
    }
#line 1672 "mercury_compile.m"
    {
#line 1672 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 44, &top_level__mercury_compile__Verbose_29);
    }
#line 1673 "mercury_compile.m"
    {
#line 1673 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 615, &top_level__mercury_compile__MMCMake_30);
    }
#line 1674 "mercury_compile.m"
    {
#line 1674 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile1_31 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile0_18, top_level__mercury_compile__MMCMake_30);
    }
#line 1678 "mercury_compile.m"
    {
#line 1678 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_32);
    }
#line 1680 "mercury_compile.m"
    {
#line 1680 "mercury_compile.m"
      top_level__mercury_compile__DontWriteDFile_33 = mercury__bool__or_2_f_0(top_level__mercury_compile__DontWriteDFile1_31, top_level__mercury_compile__MakeOptInt_32);
    }
#line 1682 "mercury_compile.m"
    {
#line 1682 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports0_17, &top_level__mercury_compile__ModuleName_34);
    }
#line 1690 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1692 "mercury_compile.m"
      {
#line 1692 "mercury_compile.m"
        parse_tree__modules__maybe_read_dependency_file_5_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, &top_level__mercury_compile__MaybeTransOptDeps_35);
      }
#line 1690 "mercury_compile.m"
    else
#line 1689 "mercury_compile.m"
      top_level__mercury_compile__MaybeTransOptDeps_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1696 "mercury_compile.m"
    {
#line 1696 "mercury_compile.m"
      top_level__mercury_compile__maybe_grab_optfiles_8_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__MaybeTransOptDeps_35, &top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__IntermodError_37);
    }
#line 1700 "mercury_compile.m"
    {
#line 1700 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__ModuleAndImports1_36, &top_level__mercury_compile__Items1_38, &top_level__mercury_compile__ItemSpecs_39, &top_level__mercury_compile___Error_40);
    }
#line 4046 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1702 "mercury_compile.m"
    {
#line 1702 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_79_79 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_120_120, top_level__mercury_compile__ItemSpecs_39, top_level__mercury_compile__STATE_VARIABLE_Specs_0_69);
    }
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 0)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 1)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 2)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 3)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 4)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 5)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 6)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 7)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 8)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 9)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 10)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 11)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 12)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 13)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 14)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 15)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 16)));
#line 1703 "mercury_compile.m"
    *top_level__mercury_compile__MaybeTimestamps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 17)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 18)));
#line 1703 "mercury_compile.m"
    top_level__mercury_compile__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ModuleAndImports1_36, (MR_Integer) 19)));
#line 1705 "mercury_compile.m"
    {
#line 1705 "mercury_compile.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 168, &top_level__mercury_compile__EventSetFileName_41);
    }
#line 1707 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__EventSetFileName_41, (MR_String) "") == 0);
#line 1711 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1708 "mercury_compile.m"
      {
#line 1708 "mercury_compile.m"
        top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1709 "mercury_compile.m"
        {
#line 1709 "mercury_compile.m"
          top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 1710 "mercury_compile.m"
        top_level__mercury_compile__EventSetErrors_44 = (MR_Integer) 0;
#line 1710 "mercury_compile.m"
        top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = top_level__mercury_compile__STATE_VARIABLE_Specs_79_79;
#line 1708 "mercury_compile.m"
      }
#line 1711 "mercury_compile.m"
    else
#line 1713 "mercury_compile.m"
      {
#line 1713 "mercury_compile.m"
        MR_String top_level__mercury_compile__EventSetName0_45;
#line 1713 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSpecMap0_46;
#line 1713 "mercury_compile.m"
        MR_Word top_level__mercury_compile__EventSetSpecs_47;

#line 1712 "mercury_compile.m"
        {
#line 1712 "mercury_compile.m"
          parse_tree__prog_event__read_event_set_6_p_0(top_level__mercury_compile__EventSetFileName_41, &top_level__mercury_compile__EventSetName0_45, &top_level__mercury_compile__EventSpecMap0_46, &top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1714 "mercury_compile.m"
        {
#line 1714 "mercury_compile.m"
          top_level__mercury_compile__STATE_VARIABLE_Specs_82_82 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_120_120, top_level__mercury_compile__EventSetSpecs_47, top_level__mercury_compile__STATE_VARIABLE_Specs_79_79);
        }
#line 1715 "mercury_compile.m"
        {
#line 1715 "mercury_compile.m"
          top_level__mercury_compile__EventSetErrors_44 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__EventSetSpecs_47);
        }
#line 1720 "mercury_compile.m"
        if ((top_level__mercury_compile__EventSetErrors_44 == (MR_Integer) 0))
#line 1717 "mercury_compile.m"
          {
#line 1718 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = top_level__mercury_compile__EventSetName0_45;
#line 1719 "mercury_compile.m"
            top_level__mercury_compile__EventSpecMap1_43 = top_level__mercury_compile__EventSpecMap0_46;
#line 1717 "mercury_compile.m"
          }
#line 1720 "mercury_compile.m"
        else
#line 1721 "mercury_compile.m"
          {
#line 1722 "mercury_compile.m"
            top_level__mercury_compile__EventSetName_42 = (MR_String) "";
#line 1723 "mercury_compile.m"
            {
#line 1723 "mercury_compile.m"
              top_level__mercury_compile__EventSpecMap1_43 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
            }
#line 1721 "mercury_compile.m"
          }
#line 1713 "mercury_compile.m"
      }
#line 1727 "mercury_compile.m"
    {
#line 1727 "mercury_compile.m"
      top_level__mercury_compile__invoke_module_qualify_items_16_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__Items1_38, &top_level__mercury_compile__Items2_48, top_level__mercury_compile__EventSpecMap1_43, &top_level__mercury_compile__EventSpecMap2_49, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__EventSetFileName_41, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQUndefTypes_51, &top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__STATE_VARIABLE_Specs_82_82, &top_level__mercury_compile__STATE_VARIABLE_Specs_83_83);
    }
#line 1731 "mercury_compile.m"
    {
#line 1731 "mercury_compile.m"
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__RecompInfo0_53);
    }
#line 1732 "mercury_compile.m"
    {
#line 1732 "mercury_compile.m"
      top_level__mercury_compile__expand_equiv_types_17_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, top_level__mercury_compile__Items2_48, &top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSpecMap2_49, &top_level__mercury_compile__EventSpecMap_55, &top_level__mercury_compile__EqvMap_56, &top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__RecompInfo0_53, &top_level__mercury_compile__RecompInfo_58, &top_level__mercury_compile__ExpandErrors_59, top_level__mercury_compile__STATE_VARIABLE_Specs_83_83, &top_level__mercury_compile__STATE_VARIABLE_Specs_85_85);
    }
#line 1735 "mercury_compile.m"
    {
#line 1735 "mercury_compile.m"
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(top_level__mercury_compile__RecompInfo_58, top_level__mercury_compile__MQInfo0_50, &top_level__mercury_compile__MQInfo_60);
    }
#line 1737 "mercury_compile.m"
    {
#line 1737 "mercury_compile.m"
      top_level__mercury_compile__EventSet_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1737 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 0) = ((MR_Box) (top_level__mercury_compile__EventSetName_42));
#line 1737 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__EventSet_61, 1) = ((MR_Box) (top_level__mercury_compile__EventSpecMap_55));
#line 1737 "mercury_compile.m"
    }
#line 1738 "mercury_compile.m"
    {
#line 1738 "mercury_compile.m"
      top_level__mercury_compile__make_hlds_18_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleName_34, top_level__mercury_compile__Items_54, top_level__mercury_compile__EventSet_61, top_level__mercury_compile__MQInfo_60, top_level__mercury_compile__EqvMap_56, top_level__mercury_compile__UsedModules_57, top_level__mercury_compile__Verbose_29, top_level__mercury_compile__Stats_28, &top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__QualInfo_20, &top_level__mercury_compile__MakeHLDSUndefTypes_63, &top_level__mercury_compile__MakeHLDSUndefModes_64, top_level__mercury_compile__FoundError_24, top_level__mercury_compile__STATE_VARIABLE_Specs_85_85, top_level__mercury_compile__STATE_VARIABLE_Specs_70);
    }
#line 1742 "mercury_compile.m"
    {
#line 1742 "mercury_compile.m"
      top_level__mercury_compile__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_92_92, 0) = ((MR_Box) (top_level__mercury_compile__MakeHLDSUndefTypes_63));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1742 "mercury_compile.m"
    }
#line 1742 "mercury_compile.m"
    {
#line 1742 "mercury_compile.m"
      top_level__mercury_compile__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_91_91, 0) = ((MR_Box) (top_level__mercury_compile__ExpandErrors_59));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_91_91, 1) = ((MR_Box) (top_level__mercury_compile__V_92_92));
#line 1742 "mercury_compile.m"
    }
#line 1742 "mercury_compile.m"
    {
#line 1742 "mercury_compile.m"
      top_level__mercury_compile__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_90_90, 0) = ((MR_Box) (top_level__mercury_compile__EventSetErrors_44));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_90_90, 1) = ((MR_Box) (top_level__mercury_compile__V_91_91));
#line 1742 "mercury_compile.m"
    }
#line 1742 "mercury_compile.m"
    {
#line 1742 "mercury_compile.m"
      top_level__mercury_compile__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_89_89, 0) = ((MR_Box) (top_level__mercury_compile__MQUndefTypes_51));
#line 1742 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_89_89, 1) = ((MR_Box) (top_level__mercury_compile__V_90_90));
#line 1742 "mercury_compile.m"
    }
#line 1742 "mercury_compile.m"
    {
#line 1742 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_89_89, top_level__mercury_compile__UndefTypes_22);
    }
#line 1744 "mercury_compile.m"
    {
#line 1744 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__MQUndefModes_52, top_level__mercury_compile__MakeHLDSUndefModes_64, top_level__mercury_compile__UndefModes_23);
    }
#line 1746 "mercury_compile.m"
    {
#line 1746 "mercury_compile.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile__HLDS0_62, (MR_Integer) 1, (MR_String) "initial", top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_67, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_68);
    }
#line 1750 "mercury_compile.m"
    if ((top_level__mercury_compile__DontWriteDFile_33 == (MR_Integer) 0))
#line 1751 "mercury_compile.m"
      {
#line 1751 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AllDeps_65;
#line 1751 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OutputMMCMakeDeps_66;

#line 1752 "mercury_compile.m"
        {
#line 1752 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__HLDS0_62, &top_level__mercury_compile__AllDeps_65);
        }
#line 1753 "mercury_compile.m"
        {
#line 1753 "mercury_compile.m"
          parse_tree__write_deps_file__write_dependency_file_6_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17, top_level__mercury_compile__AllDeps_65, top_level__mercury_compile__MaybeTransOptDeps_35);
        }
#line 1755 "mercury_compile.m"
        {
#line 1755 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_16, (MR_Integer) 113, &top_level__mercury_compile__OutputMMCMakeDeps_66);
        }
#line 1760 "mercury_compile.m"
        if ((top_level__mercury_compile__OutputMMCMakeDeps_66 == (MR_Integer) 0))
#line 1761 "mercury_compile.m"
          {
#line 1761 "mercury_compile.m"
          }
#line 1760 "mercury_compile.m"
        else
#line 1759 "mercury_compile.m"
          {
#line 1759 "mercury_compile.m"
            make__make_write_module_dep_file_4_p_0(top_level__mercury_compile__Globals_16, top_level__mercury_compile__ModuleAndImports0_17);
          }
#line 1751 "mercury_compile.m"
      }
#line 1750 "mercury_compile.m"
    else
#line 1749 "mercury_compile.m"
      {
#line 1749 "mercury_compile.m"
      }
#line 1767 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (*top_level__mercury_compile__FoundError_24 == (MR_Integer) 1);
#line 1768 "mercury_compile.m"
    if (!(top_level__mercury_compile__succeeded))
#line 1768 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__IntermodError_37 == (MR_Integer) 1);
#line 1772 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1771 "mercury_compile.m"
      {
#line 1771 "mercury_compile.m"
        hlds__hlds_module__module_info_incr_errors_2_p_0(top_level__mercury_compile__HLDS0_62, top_level__mercury_compile__HLDS1_19);
#line 1771 "mercury_compile.m"
        return;
      }
#line 1772 "mercury_compile.m"
    else
#line 1773 "mercury_compile.m"
      *top_level__mercury_compile__HLDS1_19 = top_level__mercury_compile__HLDS0_62;
#line 1670 "mercury_compile.m"
  }
#line 1663 "mercury_compile.m"
}

#line 1630 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1(
#line 1630 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1630 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1630 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 1630 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 1630 "mercury_compile.m"
{
#line 1630 "mercury_compile.m"
  {
#line 1630 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1630 "mercury_compile.m"
    {
#line 1630 "mercury_compile.m"
      parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 1630 "mercury_compile.m"
      return;
    }
#line 1630 "mercury_compile.m"
  }
#line 1630 "mercury_compile.m"
}

#line 1494 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_12,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_13,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamps_14,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_15,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_56,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Specs_17,
#line 1494 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_18,
#line 1494 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_57,
#line 1494 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58)
#line 1494 "mercury_compile.m"
{
#line 1502 "mercury_compile.m"
  {
#line 1502 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_21;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Verbose_22;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Stats_23;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HighLevelCode_24;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Target_25;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TargetCodeOnly_26;
#line 1502 "mercury_compile.m"
    MR_String top_level__mercury_compile__UsageFileName_27;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FrontEndErrors_29;
#line 1502 "mercury_compile.m"
    MR_Integer top_level__mercury_compile__NumErrors_30;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_63_63;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65;
#line 1502 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66;
#line 1519 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1503 "mercury_compile.m"
    {
#line 1503 "mercury_compile.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_56, &top_level__mercury_compile__Globals_21);
    }
#line 1504 "mercury_compile.m"
    {
#line 1504 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 44, &top_level__mercury_compile__Verbose_22);
    }
#line 1505 "mercury_compile.m"
    {
#line 1505 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 54, &top_level__mercury_compile__Stats_23);
    }
#line 1506 "mercury_compile.m"
    {
#line 1506 "mercury_compile.m"
      top_level__mercury_compile__maybe_output_prof_call_graph_6_p_0(top_level__mercury_compile__Verbose_22, top_level__mercury_compile__Stats_23, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_56, &top_level__mercury_compile__STATE_VARIABLE_HLDS_63_63);
    }
#line 1507 "mercury_compile.m"
    {
#line 1507 "mercury_compile.m"
      top_level__mercury_compile_middle_passes__middle_pass_7_p_0(top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_57, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66);
    }
#line 1508 "mercury_compile.m"
    {
#line 1508 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 250, &top_level__mercury_compile__HighLevelCode_24);
    }
#line 1509 "mercury_compile.m"
    {
#line 1509 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Target_25);
    }
#line 1510 "mercury_compile.m"
    {
#line 1510 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_21, (MR_Integer) 97, &top_level__mercury_compile__TargetCodeOnly_26);
    }
#line 1517 "mercury_compile.m"
    {
#line 1517 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".used", (MR_Integer) 1, &top_level__mercury_compile__UsageFileName_27);
    }
#line 1519 "mercury_compile.m"
    {
#line 1519 "mercury_compile.m"
      mercury__io__remove_file_4_p_0(top_level__mercury_compile__UsageFileName_27, &top_level__mercury_compile__V_28_28);
    }
#line 1521 "mercury_compile.m"
    {
#line 1521 "mercury_compile.m"
      top_level__mercury_compile__FrontEndErrors_29 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__Specs_17);
    }
#line 1522 "mercury_compile.m"
    {
#line 1522 "mercury_compile.m"
      hlds__hlds_module__module_info_get_num_errors_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__NumErrors_30);
    }
#line 1524 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__FrontEndErrors_29 == (MR_Integer) 0);
#line 1524 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1525 "mercury_compile.m"
      top_level__mercury_compile__succeeded = (top_level__mercury_compile__NumErrors_30 == (MR_Integer) 0);
#line 1631 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1542 "mercury_compile.m"
      {
#line 1542 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TimestampFiles_54;
#line 1542 "mercury_compile.m"
        MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83;
#line 1542 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_121_121;
#line 1629 "mercury_compile.m"
        void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1629 "mercury_compile.m"
        MR_Box top_level__mercury_compile__conv2_TimestampFiles_54;
#line 1629 "mercury_compile.m"
        MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_120_120;
#line 1630 "mercury_compile.m"
        MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_IO_60;

#line 4496 "top_level.mercury_compile.c"
        if ((top_level__mercury_compile__Target_25 == (MR_Integer) 2))
#line 4498 "top_level.mercury_compile.c"
          {
#line 4500 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MLDS_126;
#line 1561 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_37_37;

#line 1561 "mercury_compile.m"
            {
#line 1561 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__V_37_37, &top_level__mercury_compile__MLDS_126, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);
            }
#line 1562 "mercury_compile.m"
            {
#line 1562 "mercury_compile.m"
              top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile__MLDS_126);
            }
#line 1563 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1563 "mercury_compile.m"
            top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83 = top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65;
#line 4519 "top_level.mercury_compile.c"
          }
#line 4521 "top_level.mercury_compile.c"
        else
#line 4523 "top_level.mercury_compile.c"
          if ((top_level__mercury_compile__Target_25 == (MR_Integer) 5))
#line 4525 "top_level.mercury_compile.c"
            {
#line 4527 "top_level.mercury_compile.c"
              MR_Word top_level__mercury_compile__ELDS_53;

#line 1623 "mercury_compile.m"
              {
#line 1623 "mercury_compile.m"
                top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__ELDS_53, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);
              }
#line 1624 "mercury_compile.m"
              {
#line 1624 "mercury_compile.m"
                top_level__mercury_compile_erl_back_end__elds_to_erlang_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile__ELDS_53);
              }
#line 1625 "mercury_compile.m"
              *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1625 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83 = top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65;
#line 4544 "top_level.mercury_compile.c"
            }
#line 4546 "top_level.mercury_compile.c"
          else
#line 4548 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__Target_25 == (MR_Integer) 1))
#line 4550 "top_level.mercury_compile.c"
              {
#line 4552 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MLDS_33;
#line 1545 "mercury_compile.m"
                MR_Word top_level__mercury_compile__V_32_32;

#line 1545 "mercury_compile.m"
                {
#line 1545 "mercury_compile.m"
                  top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__V_32_32, &top_level__mercury_compile__MLDS_33, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);
                }
#line 1549 "mercury_compile.m"
                if ((top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0))
#line 1550 "mercury_compile.m"
                  {
#line 1550 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__HasMain_34;
#line 1550 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__OutputStream_35;
#line 1550 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Succeeded_36;

#line 1551 "mercury_compile.m"
                    {
#line 1551 "mercury_compile.m"
                      top_level__mercury_compile__HasMain_34 = top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(top_level__mercury_compile__MLDS_33);
                    }
#line 1552 "mercury_compile.m"
                    {
#line 1552 "mercury_compile.m"
                      top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_33);
                    }
#line 1553 "mercury_compile.m"
                    {
#line 1553 "mercury_compile.m"
                      mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_35);
                    }
#line 1554 "mercury_compile.m"
                    {
#line 1554 "mercury_compile.m"
                      backend_libs__compile_target_code__il_assemble_7_p_0(top_level__mercury_compile__OutputStream_35, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__HasMain_34, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_36);
                    }
#line 1556 "mercury_compile.m"
                    {
#line 1556 "mercury_compile.m"
                      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_36);
                    }
#line 1550 "mercury_compile.m"
                  }
#line 1549 "mercury_compile.m"
                else
#line 1548 "mercury_compile.m"
                  {
#line 1548 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_33);
                  }
#line 1558 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1558 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83 = top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65;
#line 4611 "top_level.mercury_compile.c"
              }
#line 4613 "top_level.mercury_compile.c"
            else
#line 4615 "top_level.mercury_compile.c"
              if ((top_level__mercury_compile__Target_25 == (MR_Integer) 3))
#line 4617 "top_level.mercury_compile.c"
                {
#line 4619 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__MLDS_131;
#line 1566 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_38_38;

#line 1566 "mercury_compile.m"
                  {
#line 1566 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MLDS_131, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);
                  }
#line 1567 "mercury_compile.m"
                  {
#line 1567 "mercury_compile.m"
                    top_level__mercury_compile_mlds_back_end__mlds_to_java_4_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile__MLDS_131);
                  }
#line 1570 "mercury_compile.m"
                  if ((top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0))
#line 1571 "mercury_compile.m"
                    {
#line 1571 "mercury_compile.m"
                      MR_String top_level__mercury_compile__JavaFile_39;
#line 1571 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__V_105_105;
#line 1571 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__OutputStream_127;
#line 1571 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__Succeeded_128;

#line 1572 "mercury_compile.m"
                      {
#line 1572 "mercury_compile.m"
                        mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_127);
                      }
#line 1573 "mercury_compile.m"
                      {
#line 1573 "mercury_compile.m"
                        parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".java", (MR_Integer) 1, &top_level__mercury_compile__JavaFile_39);
                      }
#line 1575 "mercury_compile.m"
                      {
#line 1575 "mercury_compile.m"
                        top_level__mercury_compile__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_105_105, 0) = ((MR_Box) (top_level__mercury_compile__JavaFile_39));
#line 1575 "mercury_compile.m"
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1575 "mercury_compile.m"
                      }
#line 1575 "mercury_compile.m"
                      {
#line 1575 "mercury_compile.m"
                        backend_libs__compile_target_code__compile_java_files_6_p_0(top_level__mercury_compile__OutputStream_127, top_level__mercury_compile__V_105_105, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__Succeeded_128);
                      }
#line 1577 "mercury_compile.m"
                      {
#line 1577 "mercury_compile.m"
                        parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_128);
                      }
#line 1571 "mercury_compile.m"
                    }
#line 1570 "mercury_compile.m"
                  else
#line 1569 "mercury_compile.m"
                    {
#line 1569 "mercury_compile.m"
                    }
#line 1579 "mercury_compile.m"
                  *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1579 "mercury_compile.m"
                  top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83 = top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65;
#line 4689 "top_level.mercury_compile.c"
                }
#line 4691 "top_level.mercury_compile.c"
              else
#line 4693 "top_level.mercury_compile.c"
                {
#line 4695 "top_level.mercury_compile.c"
                  MR_Word top_level__mercury_compile__ExportDecls_31;

#line 1534 "mercury_compile.m"
                  {
#line 1534 "mercury_compile.m"
                    backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__ExportDecls_31);
                  }
#line 1535 "mercury_compile.m"
                  {
#line 1535 "mercury_compile.m"
                    backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile__ExportDecls_31, top_level__mercury_compile__ModuleName_15);
                  }
#line 1559 "mercury_compile.m"
                  if ((top_level__mercury_compile__Target_25 == (MR_Integer) 0))
#line 1603 "mercury_compile.m"
                    if ((top_level__mercury_compile__HighLevelCode_24 == (MR_Integer) 0))
#line 1604 "mercury_compile.m"
                      {
#line 1604 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__GlobalData_47;
#line 1604 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__LLDS_48;
#line 1606 "mercury_compile.m"
                        MR_Word top_level__mercury_compile___CompileErrors_49;

#line 1605 "mercury_compile.m"
                        {
#line 1605 "mercury_compile.m"
                          top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile__GlobalData_47, &top_level__mercury_compile__LLDS_48, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);
                        }
#line 1606 "mercury_compile.m"
                        {
#line 1606 "mercury_compile.m"
                          top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83, top_level__mercury_compile__GlobalData_47, top_level__mercury_compile__LLDS_48, top_level__mercury_compile__ModuleName_15, &top_level__mercury_compile___CompileErrors_49, top_level__mercury_compile__ExtraObjFiles_18);
                        }
#line 1604 "mercury_compile.m"
                      }
#line 1603 "mercury_compile.m"
                    else
#line 1583 "mercury_compile.m"
                      {
#line 1583 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__MLDS_136;
#line 1584 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_40_40;

#line 1584 "mercury_compile.m"
                        {
#line 1584 "mercury_compile.m"
                          top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__V_40_40, &top_level__mercury_compile__MLDS_136, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);
                        }
#line 1585 "mercury_compile.m"
                        {
#line 1585 "mercury_compile.m"
                          top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__MLDS_136);
                        }
#line 1588 "mercury_compile.m"
                        if ((top_level__mercury_compile__TargetCodeOnly_26 == (MR_Integer) 0))
#line 1589 "mercury_compile.m"
                          {
#line 1589 "mercury_compile.m"
                            MR_String top_level__mercury_compile__C_File_41;
#line 1589 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__TargetType_42;
#line 1589 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__PIC_43;
#line 1589 "mercury_compile.m"
                            MR_String top_level__mercury_compile__Obj_44;
#line 1589 "mercury_compile.m"
                            MR_String top_level__mercury_compile__O_File_45;
#line 1589 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__CompileOK_46;
#line 1589 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__OutputStream_134;

#line 1590 "mercury_compile.m"
                            {
#line 1590 "mercury_compile.m"
                              parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile__C_File_41);
                            }
#line 1592 "mercury_compile.m"
                            {
#line 1592 "mercury_compile.m"
                              backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile__Globals_21, &top_level__mercury_compile__TargetType_42);
                            }
#line 1593 "mercury_compile.m"
                            {
#line 1593 "mercury_compile.m"
                              backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__TargetType_42, &top_level__mercury_compile__PIC_43);
                            }
#line 1594 "mercury_compile.m"
                            {
#line 1594 "mercury_compile.m"
                              backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__PIC_43, &top_level__mercury_compile__Obj_44);
                            }
#line 1595 "mercury_compile.m"
                            {
#line 1595 "mercury_compile.m"
                              parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_21, top_level__mercury_compile__ModuleName_15, top_level__mercury_compile__Obj_44, (MR_Integer) 0, &top_level__mercury_compile__O_File_45);
                            }
#line 1597 "mercury_compile.m"
                            {
#line 1597 "mercury_compile.m"
                              mercury__io__output_stream_3_p_0(&top_level__mercury_compile__OutputStream_134);
                            }
#line 1598 "mercury_compile.m"
                            {
#line 1598 "mercury_compile.m"
                              backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile__OutputStream_134, top_level__mercury_compile__PIC_43, top_level__mercury_compile__C_File_41, top_level__mercury_compile__O_File_45, top_level__mercury_compile__Globals_21, &top_level__mercury_compile__CompileOK_46);
                            }
#line 1600 "mercury_compile.m"
                            {
#line 1600 "mercury_compile.m"
                              parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__CompileOK_46);
                            }
#line 1589 "mercury_compile.m"
                          }
#line 1588 "mercury_compile.m"
                        else
#line 1587 "mercury_compile.m"
                          {
#line 1587 "mercury_compile.m"
                          }
#line 1602 "mercury_compile.m"
                        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1602 "mercury_compile.m"
                        top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83 = top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65;
#line 1583 "mercury_compile.m"
                      }
#line 1559 "mercury_compile.m"
                  else
#line 1610 "mercury_compile.m"
                    {
#line 1610 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__X86_64_Asm_51;
#line 1610 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__Stdout_52;
#line 1610 "mercury_compile.m"
                      MR_Word top_level__mercury_compile__LLDS_142;
#line 1611 "mercury_compile.m"
                      MR_Word top_level__mercury_compile___GlobalData_50;

#line 1611 "mercury_compile.m"
                      {
#line 1611 "mercury_compile.m"
                        top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83, &top_level__mercury_compile___GlobalData_50, &top_level__mercury_compile__LLDS_142, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58);
                      }
#line 1615 "mercury_compile.m"
                      {
#line 1615 "mercury_compile.m"
                        ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83, top_level__mercury_compile__LLDS_142, &top_level__mercury_compile__X86_64_Asm_51);
                      }
#line 1618 "mercury_compile.m"
                      {
#line 1618 "mercury_compile.m"
                        mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_52);
                      }
#line 1619 "mercury_compile.m"
                      {
#line 1619 "mercury_compile.m"
                        ll_backend__llds_to_x86_64_out__output_x86_64_asm_4_p_0(top_level__mercury_compile__Stdout_52, top_level__mercury_compile__X86_64_Asm_51);
                      }
#line 1620 "mercury_compile.m"
                      *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1610 "mercury_compile.m"
                    }
#line 4862 "top_level.mercury_compile.c"
                }
#line 1627 "mercury_compile.m"
        {
#line 1627 "mercury_compile.m"
          recompilation__usage__write_usage_file_5_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_83_83, top_level__mercury_compile__NestedSubModules_12, top_level__mercury_compile__MaybeTimestamps_14);
        }
#line 1629 "mercury_compile.m"
        top_level__mercury_compile__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FindTimestampFiles_13, (MR_Integer) 1)));
#line 1629 "mercury_compile.m"
        {
#line 1629 "mercury_compile.m"
          top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__FindTimestampFiles_13), ((MR_Box) (top_level__mercury_compile__ModuleName_15)), &top_level__mercury_compile__conv2_TimestampFiles_54, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_120_120);
        }
#line 1629 "mercury_compile.m"
        top_level__mercury_compile__TimestampFiles_54 = ((MR_Word) top_level__mercury_compile__conv2_TimestampFiles_54);
#line 1630 "mercury_compile.m"
        {
#line 1630 "mercury_compile.m"
          top_level__mercury_compile__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1630 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_11[0]));
#line 1630 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 1) = ((MR_Box) (top_level__mercury_compile__mercury_compile_after_front_end_11_p_0_1));
#line 1630 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1630 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_121_121, 3) = ((MR_Box) (top_level__mercury_compile__Globals_21));
#line 1630 "mercury_compile.m"
        }
#line 1630 "mercury_compile.m"
        {
#line 1630 "mercury_compile.m"
          mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_121_121, top_level__mercury_compile__TimestampFiles_54, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv3_STATE_VARIABLE_IO_60);
        }
#line 1542 "mercury_compile.m"
      }
#line 1631 "mercury_compile.m"
    else
#line 1634 "mercury_compile.m"
      {
#line 1634 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_55;

#line 1634 "mercury_compile.m"
        {
#line 1634 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_55);
        }
#line 1635 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_55 == (MR_Integer) 0);
#line 1637 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1636 "mercury_compile.m"
          {
#line 1636 "mercury_compile.m"
            {
#line 1636 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1636 "mercury_compile.m"
          }
#line 1637 "mercury_compile.m"
        else
#line 1636 "mercury_compile.m"
          {
#line 1636 "mercury_compile.m"
          }
#line 1640 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1640 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_58 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_66_66;
#line 1634 "mercury_compile.m"
      }
#line 1502 "mercury_compile.m"
  }
#line 1494 "mercury_compile.m"
}

#line 1481 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0_1(
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1481 "mercury_compile.m"
{
#line 1481 "mercury_compile.m"
  {
#line 1481 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1481 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1481 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1481 "mercury_compile.m"
    {
#line 1481 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__prim_data__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1481 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1481 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1481 "mercury_compile.m"
  }
#line 1481 "mercury_compile.m"
}

#line 1470 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1470 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19,
#line 1470 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_20)
#line 1470 "mercury_compile.m"
{
#line 1473 "mercury_compile.m"
  {
#line 1473 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_33_33;
#line 1473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleNames_13;
#line 1473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModulesList_14;
#line 1473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__SymNames_15;
#line 1473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LocalModuleNames_16;
#line 1473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo0_17;
#line 1473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__AnalysisInfo_18;

#line 1474 "mercury_compile.m"
    {
#line 1474 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    }
#line 1477 "mercury_compile.m"
    {
#line 1477 "mercury_compile.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__ModuleNames_13);
    }
#line 1479 "mercury_compile.m"
    {
#line 1479 "mercury_compile.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 652, &top_level__mercury_compile__LocalModulesList_14);
    }
#line 5022 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1481 "mercury_compile.m"
    {
#line 1481 "mercury_compile.m"
      top_level__mercury_compile__SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_scalar_common_3[5], top_level__mercury_compile__LocalModulesList_14);
    }
#line 1482 "mercury_compile.m"
    {
#line 1482 "mercury_compile.m"
      top_level__mercury_compile__LocalModuleNames_16 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_33, top_level__mercury_compile__SymNames_15);
    }
#line 1484 "mercury_compile.m"
    {
#line 1484 "mercury_compile.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile__AnalysisInfo0_17);
    }
#line 1485 "mercury_compile.m"
    {
#line 1485 "mercury_compile.m"
      analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_13, top_level__mercury_compile__LocalModuleNames_16, top_level__mercury_compile__AnalysisInfo0_17, &top_level__mercury_compile__AnalysisInfo_18);
    }
#line 1487 "mercury_compile.m"
    {
#line 1487 "mercury_compile.m"
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_18, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile__STATE_VARIABLE_HLDS_20);
    }
#line 1489 "mercury_compile.m"
    {
#line 1489 "mercury_compile.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
    }
#line 1490 "mercury_compile.m"
    {
#line 1490 "mercury_compile.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1490 "mercury_compile.m"
      return;
    }
#line 1473 "mercury_compile.m"
  }
#line 1470 "mercury_compile.m"
}

#line 1481 "mercury_compile.m"
static MR_Box MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0_1(
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1481 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1481 "mercury_compile.m"
{
#line 1481 "mercury_compile.m"
  {
#line 1481 "mercury_compile.m"
    MR_Box top_level__mercury_compile__wrapper_arg_2;
#line 1481 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1481 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__2_2;

#line 1481 "mercury_compile.m"
    {
#line 1481 "mercury_compile.m"
      top_level__mercury_compile__conv0_HeadVar__2_2 = mdbcomp__prim_data__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1481 "mercury_compile.m"
    top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__2_2));
#line 1481 "mercury_compile.m"
    return top_level__mercury_compile__wrapper_arg_2;
#line 1481 "mercury_compile.m"
  }
#line 1481 "mercury_compile.m"
}

#line 1457 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Verbose_9,
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Stats_10,
#line 1457 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14,
#line 1457 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HLDS_15)
#line 1457 "mercury_compile.m"
{
#line 1460 "mercury_compile.m"
  {
#line 1460 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1460 "mercury_compile.m"
    MR_Word top_level__mercury_compile__IntermodAnalysis_13;

#line 1461 "mercury_compile.m"
    {
#line 1461 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 330, &top_level__mercury_compile__IntermodAnalysis_13);
    }
#line 1466 "mercury_compile.m"
    if ((top_level__mercury_compile__IntermodAnalysis_13 == (MR_Integer) 0))
#line 1467 "mercury_compile.m"
      *top_level__mercury_compile__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14;
#line 1466 "mercury_compile.m"
    else
#line 1473 "mercury_compile.m"
      {
#line 1473 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_33_46;
#line 1473 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleNames_30;
#line 1473 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModulesList_31;
#line 1473 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SymNames_32;
#line 1473 "mercury_compile.m"
        MR_Word top_level__mercury_compile__LocalModuleNames_33;
#line 1473 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo0_34;
#line 1473 "mercury_compile.m"
        MR_Word top_level__mercury_compile__AnalysisInfo_35;

#line 1474 "mercury_compile.m"
        {
#line 1474 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
        }
#line 1477 "mercury_compile.m"
        {
#line 1477 "mercury_compile.m"
          hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__ModuleNames_30);
        }
#line 1479 "mercury_compile.m"
        {
#line 1479 "mercury_compile.m"
          libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_8, (MR_Integer) 652, &top_level__mercury_compile__LocalModulesList_31);
        }
#line 5163 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1481 "mercury_compile.m"
        {
#line 1481 "mercury_compile.m"
          top_level__mercury_compile__SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_scalar_common_3[4], top_level__mercury_compile__LocalModulesList_31);
        }
#line 1482 "mercury_compile.m"
        {
#line 1482 "mercury_compile.m"
          top_level__mercury_compile__LocalModuleNames_33 = mercury__set__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_33_46, top_level__mercury_compile__SymNames_32);
        }
#line 1484 "mercury_compile.m"
        {
#line 1484 "mercury_compile.m"
          hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile__AnalysisInfo0_34);
        }
#line 1485 "mercury_compile.m"
        {
#line 1485 "mercury_compile.m"
          analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__ModuleNames_30, top_level__mercury_compile__LocalModuleNames_33, top_level__mercury_compile__AnalysisInfo0_34, &top_level__mercury_compile__AnalysisInfo_35);
        }
#line 1487 "mercury_compile.m"
        {
#line 1487 "mercury_compile.m"
          hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile__AnalysisInfo_35, top_level__mercury_compile__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile__STATE_VARIABLE_HLDS_15);
        }
#line 1489 "mercury_compile.m"
        {
#line 1489 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_9, (MR_String) "% done.\n");
        }
#line 1490 "mercury_compile.m"
        {
#line 1490 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_10);
#line 1490 "mercury_compile.m"
          return;
        }
#line 1473 "mercury_compile.m"
      }
#line 1460 "mercury_compile.m"
  }
#line 1457 "mercury_compile.m"
}

#line 1370 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__mercury_compile_11_p_0(
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleAndImports_13,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_14,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_15,
#line 1370 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45,
#line 1370 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46,
#line 1370 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_47,
#line 1370 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_48)
#line 1370 "mercury_compile.m"
{
#line 1377 "mercury_compile.m"
  {
#line 1377 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_20;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCheckOnly_21;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ErrorCheckOnly_22;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DontWriteDFile_23;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS1_24;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__QualInfo_25;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamps_26;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefTypes_27;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__UndefModes_28;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors1_29;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Errors2_30;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HLDS20_31;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_54_54;
#line 1377 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1390 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;

#line 1378 "mercury_compile.m"
    {
#line 1378 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile__ModuleAndImports_13, &top_level__mercury_compile__ModuleName_20);
    }
#line 1381 "mercury_compile.m"
    {
#line 1381 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 95, &top_level__mercury_compile__TypeCheckOnly_21);
    }
#line 1382 "mercury_compile.m"
    {
#line 1382 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 96, &top_level__mercury_compile__ErrorCheckOnly_22);
    }
#line 1383 "mercury_compile.m"
    {
#line 1383 "mercury_compile.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile__TypeCheckOnly_21, top_level__mercury_compile__ErrorCheckOnly_22, &top_level__mercury_compile__DontWriteDFile_23);
    }
#line 1384 "mercury_compile.m"
    {
#line 1384 "mercury_compile.m"
      top_level__mercury_compile__pre_hlds_pass_15_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__ModuleAndImports_13, top_level__mercury_compile__DontWriteDFile_23, &top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__QualInfo_25, &top_level__mercury_compile__MaybeTimestamps_26, &top_level__mercury_compile__UndefTypes_27, &top_level__mercury_compile__UndefModes_28, &top_level__mercury_compile__Errors1_29, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_0_45, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, top_level__mercury_compile__STATE_VARIABLE_Specs_0_47, &top_level__mercury_compile__STATE_VARIABLE_Specs_54_54);
    }
#line 1387 "mercury_compile.m"
    {
#line 1387 "mercury_compile.m"
      top_level__mercury_compile_front_end__frontend_pass_13_p_0(top_level__mercury_compile__QualInfo_25, top_level__mercury_compile__UndefTypes_27, top_level__mercury_compile__UndefModes_28, top_level__mercury_compile__Errors1_29, &top_level__mercury_compile__Errors2_30, top_level__mercury_compile__HLDS1_24, &top_level__mercury_compile__HLDS20_31, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_53_53, &top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_Specs_54_54, top_level__mercury_compile__STATE_VARIABLE_Specs_48);
    }
#line 1390 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors1_29 == (MR_Integer) 0);
#line 1390 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1390 "mercury_compile.m"
      {
#line 1391 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Errors2_30 == (MR_Integer) 0);
#line 1390 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1390 "mercury_compile.m"
          {
#line 1392 "mercury_compile.m"
            {
#line 1392 "mercury_compile.m"
              top_level__mercury_compile__V_59_59 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile__Globals_12, *top_level__mercury_compile__STATE_VARIABLE_Specs_48);
            }
#line 1392 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_59_59 == (MR_Integer) 0);
#line 1390 "mercury_compile.m"
          }
#line 1390 "mercury_compile.m"
      }
#line 1443 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1394 "mercury_compile.m"
      {
#line 1394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_32;
#line 1394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_33;
#line 1394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__HLDS21_34;
#line 1394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeOptInt_35;
#line 1394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeTransOptInt_36;
#line 1394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeAnalysisRegistry_37;
#line 1394 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MakeXmlDocumentation_38;

#line 1394 "mercury_compile.m"
        {
#line 1394 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 44, &top_level__mercury_compile__Verbose_32);
        }
#line 1395 "mercury_compile.m"
        {
#line 1395 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 54, &top_level__mercury_compile__Stats_33);
        }
#line 1396 "mercury_compile.m"
        {
#line 1396 "mercury_compile.m"
          top_level__mercury_compile__maybe_write_dependency_graph_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS20_31, &top_level__mercury_compile__HLDS21_34);
        }
#line 1397 "mercury_compile.m"
        {
#line 1397 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_35);
        }
#line 1399 "mercury_compile.m"
        {
#line 1399 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 86, &top_level__mercury_compile__MakeTransOptInt_36);
        }
#line 1401 "mercury_compile.m"
        {
#line 1401 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 87, &top_level__mercury_compile__MakeAnalysisRegistry_37);
        }
#line 1403 "mercury_compile.m"
        {
#line 1403 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 88, &top_level__mercury_compile__MakeXmlDocumentation_38);
        }
#line 1405 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__TypeCheckOnly_21 == (MR_Integer) 1);
#line 1407 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1406 "mercury_compile.m"
          {
#line 1406 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1406 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1406 "mercury_compile.m"
          }
#line 1407 "mercury_compile.m"
        else
#line 1422 "mercury_compile.m"
          {
#line 1407 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__ErrorCheckOnly_22 == (MR_Integer) 1);
#line 1422 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1410 "mercury_compile.m"
              {
#line 1410 "mercury_compile.m"
                MR_Word top_level__mercury_compile__UnusedArgs_39;

#line 1410 "mercury_compile.m"
                {
#line 1410 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 10, &top_level__mercury_compile__UnusedArgs_39);
                }
#line 1418 "mercury_compile.m"
                if ((top_level__mercury_compile__UnusedArgs_39 == (MR_Integer) 0))
#line 1419 "mercury_compile.m"
                  {
#line 1419 "mercury_compile.m"
                  }
#line 1418 "mercury_compile.m"
                else
#line 1412 "mercury_compile.m"
                  {
#line 1412 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__NoOptUnusedArgsGlobals_40;
#line 1412 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__HLDS21a_41;
#line 1417 "mercury_compile.m"
                    MR_Word top_level__mercury_compile___HLDS22_42;

#line 1413 "mercury_compile.m"
                    {
#line 1413 "mercury_compile.m"
                      libs__globals__set_option_4_p_0((MR_Integer) 350, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[2]), top_level__mercury_compile__Globals_12, &top_level__mercury_compile__NoOptUnusedArgsGlobals_40);
                    }
#line 1415 "mercury_compile.m"
                    {
#line 1415 "mercury_compile.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile__NoOptUnusedArgsGlobals_40, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS21a_41);
                    }
#line 1417 "mercury_compile.m"
                    {
#line 1417 "mercury_compile.m"
                      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21a_41, &top_level__mercury_compile___HLDS22_42);
                    }
#line 1412 "mercury_compile.m"
                  }
#line 1421 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "mercury_compile.m"
                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1410 "mercury_compile.m"
              }
#line 1422 "mercury_compile.m"
            else
#line 1425 "mercury_compile.m"
              {
#line 1422 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeOptInt_35 == (MR_Integer) 1);
#line 1425 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 1424 "mercury_compile.m"
                  {
#line 1424 "mercury_compile.m"
                    *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1424 "mercury_compile.m"
                    *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1424 "mercury_compile.m"
                  }
#line 1425 "mercury_compile.m"
                else
#line 1428 "mercury_compile.m"
                  {
#line 1425 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeTransOptInt_36 == (MR_Integer) 1);
#line 1428 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 1426 "mercury_compile.m"
                      {
#line 1426 "mercury_compile.m"
                        {
#line 1426 "mercury_compile.m"
                          top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(top_level__mercury_compile__HLDS21_34, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                        }
#line 1427 "mercury_compile.m"
                        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1426 "mercury_compile.m"
                      }
#line 1428 "mercury_compile.m"
                    else
#line 1433 "mercury_compile.m"
                      {
#line 1428 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeAnalysisRegistry_37 == (MR_Integer) 1);
#line 1433 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 1430 "mercury_compile.m"
                          {
#line 1430 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__HLDS22_43;

#line 1429 "mercury_compile.m"
                            {
#line 1429 "mercury_compile.m"
                              top_level__mercury_compile__prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_43);
                            }
#line 1431 "mercury_compile.m"
                            {
#line 1431 "mercury_compile.m"
                              top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(top_level__mercury_compile__HLDS22_43, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
                            }
#line 1432 "mercury_compile.m"
                            *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1430 "mercury_compile.m"
                          }
#line 1433 "mercury_compile.m"
                        else
#line 1436 "mercury_compile.m"
                          {
#line 1433 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeXmlDocumentation_38 == (MR_Integer) 1);
#line 1436 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 1434 "mercury_compile.m"
                              {
#line 1434 "mercury_compile.m"
                                {
#line 1434 "mercury_compile.m"
                                  check_hlds__xml_documentation__xml_documentation_3_p_0(top_level__mercury_compile__HLDS21_34);
                                }
#line 1435 "mercury_compile.m"
                                *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1435 "mercury_compile.m"
                                *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1434 "mercury_compile.m"
                              }
#line 1436 "mercury_compile.m"
                            else
#line 1438 "mercury_compile.m"
                              {
#line 1438 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__HLDS22_84;

#line 1437 "mercury_compile.m"
                                {
#line 1437 "mercury_compile.m"
                                  top_level__mercury_compile__maybe_prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Verbose_32, top_level__mercury_compile__Stats_33, top_level__mercury_compile__HLDS21_34, &top_level__mercury_compile__HLDS22_84);
                                }
#line 1439 "mercury_compile.m"
                                {
#line 1439 "mercury_compile.m"
                                  top_level__mercury_compile__mercury_compile_after_front_end_11_p_0(top_level__mercury_compile__NestedSubModules_14, top_level__mercury_compile__FindTimestampFiles_15, top_level__mercury_compile__MaybeTimestamps_26, top_level__mercury_compile__ModuleName_20, top_level__mercury_compile__HLDS22_84, *top_level__mercury_compile__STATE_VARIABLE_Specs_48, top_level__mercury_compile__ExtraObjFiles_16, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56, top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46);
#line 1439 "mercury_compile.m"
                                  return;
                                }
#line 1438 "mercury_compile.m"
                              }
#line 1436 "mercury_compile.m"
                          }
#line 1433 "mercury_compile.m"
                      }
#line 1428 "mercury_compile.m"
                  }
#line 1425 "mercury_compile.m"
              }
#line 1422 "mercury_compile.m"
          }
#line 1394 "mercury_compile.m"
      }
#line 1443 "mercury_compile.m"
    else
#line 1446 "mercury_compile.m"
      {
#line 1446 "mercury_compile.m"
        MR_Integer top_level__mercury_compile__ExitStatus_44;

#line 1446 "mercury_compile.m"
        {
#line 1446 "mercury_compile.m"
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_44);
        }
#line 1447 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_44 == (MR_Integer) 0);
#line 1449 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1448 "mercury_compile.m"
          {
#line 1448 "mercury_compile.m"
            {
#line 1448 "mercury_compile.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 1448 "mercury_compile.m"
          }
#line 1449 "mercury_compile.m"
        else
#line 1448 "mercury_compile.m"
          {
#line 1448 "mercury_compile.m"
          }
#line 1452 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1452 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_DumpInfo_46 = top_level__mercury_compile__STATE_VARIABLE_DumpInfo_56_56;
#line 1446 "mercury_compile.m"
      }
#line 1377 "mercury_compile.m"
  }
#line 1370 "mercury_compile.m"
}

#line 1338 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_13_p_0(
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1338 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_15,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules0_17,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__8_8,
#line 1338 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_23,
#line 1338 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_32,
#line 1338 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Specs_33)
#line 1338 "mercury_compile.m"
{
#line 1347 "mercury_compile.m"
  {
#line 1347 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 0)));
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__8_8, (MR_Integer) 1)));
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__NestedSubModules_26;
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Module_27;
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ImportedSpecs_29;
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error_30;
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_36_36;
#line 1347 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_39_39;
#line 1357 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_28_28;

#line 1348 "mercury_compile.m"
    {
#line 1348 "mercury_compile.m"
      parse_tree__modules__check_for_no_exports_7_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Items_22, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__STATE_VARIABLE_Specs_0_32, &top_level__mercury_compile__STATE_VARIABLE_Specs_36_36);
    }
#line 1349 "mercury_compile.m"
    {
#line 1349 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__SourceFileModuleName_16);
    }
#line 1351 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1350 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = top_level__mercury_compile__NestedSubModules0_17;
#line 1351 "mercury_compile.m"
    else
#line 1352 "mercury_compile.m"
      top_level__mercury_compile__NestedSubModules_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1354 "mercury_compile.m"
    {
#line 1354 "mercury_compile.m"
      parse_tree__modules__grab_imported_modules_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__SourceFileName_15, top_level__mercury_compile__SourceFileModuleName_16, top_level__mercury_compile__ModuleName_21, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__HaveReadModuleMap_19, top_level__mercury_compile__MaybeTimestamp_18, top_level__mercury_compile__Items_22, &top_level__mercury_compile__Module_27);
    }
#line 1357 "mercury_compile.m"
    {
#line 1357 "mercury_compile.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(top_level__mercury_compile__Module_27, &top_level__mercury_compile__V_28_28, &top_level__mercury_compile__ImportedSpecs_29, &top_level__mercury_compile__Error_30);
    }
#line 1358 "mercury_compile.m"
    {
#line 1358 "mercury_compile.m"
      top_level__mercury_compile__STATE_VARIABLE_Specs_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile__ImportedSpecs_29, top_level__mercury_compile__STATE_VARIABLE_Specs_36_36);
    }
#line 1365 "mercury_compile.m"
    if ((top_level__mercury_compile__Error_30 == (MR_Integer) 2))
#line 1366 "mercury_compile.m"
      {
#line 1367 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1367 "mercury_compile.m"
        *top_level__mercury_compile__STATE_VARIABLE_Specs_33 = top_level__mercury_compile__STATE_VARIABLE_Specs_39_39;
#line 1366 "mercury_compile.m"
      }
#line 1365 "mercury_compile.m"
    else
#line 1362 "mercury_compile.m"
      {
#line 1363 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_31_31;

#line 1363 "mercury_compile.m"
        {
#line 1363 "mercury_compile.m"
          top_level__mercury_compile__mercury_compile_11_p_0(top_level__mercury_compile__Globals_14, top_level__mercury_compile__Module_27, top_level__mercury_compile__NestedSubModules_26, top_level__mercury_compile__FindTimestampFiles_20, top_level__mercury_compile__ExtraObjFiles_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile__V_31_31, top_level__mercury_compile__STATE_VARIABLE_Specs_39_39, top_level__mercury_compile__STATE_VARIABLE_Specs_33);
        }
#line 1362 "mercury_compile.m"
      }
#line 1347 "mercury_compile.m"
  }
#line 1338 "mercury_compile.m"
}

#line 1313 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_6_p_0(
#line 1313 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1313 "mercury_compile.m"
  MR_String top_level__mercury_compile__TimestampSuffix_8,
#line 1313 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1313 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TimestampFiles_10)
#line 1313 "mercury_compile.m"
{
#line 1317 "mercury_compile.m"
  {
#line 1317 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1317 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1318 "mercury_compile.m"
    {
#line 1318 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TimestampSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1320 "mercury_compile.m"
    {
#line 1320 "mercury_compile.m"
      MR_Word base;
#line 1320 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "mercury_compile.m"
      *top_level__mercury_compile__TimestampFiles_10 = base;
#line 1320 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1320 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "mercury_compile.m"
    }
#line 1317 "mercury_compile.m"
  }
#line 1313 "mercury_compile.m"
}

#line 1311 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0_1(
#line 1311 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1311 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1311 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1311 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1311 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1311 "mercury_compile.m"
{
#line 1311 "mercury_compile.m"
  {
#line 1311 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1311 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TimestampFiles_10;

#line 1311 "mercury_compile.m"
    {
#line 1311 "mercury_compile.m"
      top_level__mercury_compile__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TimestampFiles_10);
    }
#line 1311 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TimestampFiles_10));
#line 1311 "mercury_compile.m"
  }
#line 1311 "mercury_compile.m"
}

#line 1287 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_timestamp_files_2_p_0(
#line 1287 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1287 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTimestampFiles_4)
#line 1287 "mercury_compile.m"
{
#line 1290 "mercury_compile.m"
  {
#line 1290 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1290 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1290 "mercury_compile.m"
    MR_String top_level__mercury_compile__TimestampSuffix_6;

#line 1291 "mercury_compile.m"
    {
#line 1291 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1295 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1294 "mercury_compile.m"
      top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".c_date";
#line 1295 "mercury_compile.m"
    else
#line 1295 "mercury_compile.m"
      if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1300 "mercury_compile.m"
        top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".cs_date";
#line 1295 "mercury_compile.m"
      else
#line 1295 "mercury_compile.m"
        if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 5))
#line 1309 "mercury_compile.m"
          top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".erl_date";
#line 1295 "mercury_compile.m"
        else
#line 1295 "mercury_compile.m"
          if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1297 "mercury_compile.m"
            top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".il_date";
#line 1295 "mercury_compile.m"
          else
#line 1295 "mercury_compile.m"
            if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 3))
#line 1303 "mercury_compile.m"
              top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".java_date";
#line 1295 "mercury_compile.m"
            else
#line 1306 "mercury_compile.m"
              top_level__mercury_compile__TimestampSuffix_6 = (MR_String) ".s_date";
#line 1311 "mercury_compile.m"
    {
#line 1311 "mercury_compile.m"
      MR_Word base;
#line 1311 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "mercury_compile.m"
      *top_level__mercury_compile__FindTimestampFiles_4 = base;
#line 1311 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1311 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_timestamp_files_2_p_0_1));
#line 1311 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1311 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1311 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TimestampSuffix_6));
#line 1311 "mercury_compile.m"
    }
#line 1290 "mercury_compile.m"
  }
#line 1287 "mercury_compile.m"
}

#line 1276 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__usual_find_target_files_6_p_0(
#line 1276 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_7,
#line 1276 "mercury_compile.m"
  MR_String top_level__mercury_compile__TargetSuffix_8,
#line 1276 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_9,
#line 1276 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__TargetFiles_10)
#line 1276 "mercury_compile.m"
{
#line 1281 "mercury_compile.m"
  {
#line 1281 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1281 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_12;

#line 1283 "mercury_compile.m"
    {
#line 1283 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_7, top_level__mercury_compile__ModuleName_9, top_level__mercury_compile__TargetSuffix_8, (MR_Integer) 0, &top_level__mercury_compile__FileName_12);
    }
#line 1285 "mercury_compile.m"
    {
#line 1285 "mercury_compile.m"
      MR_Word base;
#line 1285 "mercury_compile.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "mercury_compile.m"
      *top_level__mercury_compile__TargetFiles_10 = base;
#line 1285 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__FileName_12));
#line 1285 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1285 "mercury_compile.m"
    }
#line 1281 "mercury_compile.m"
  }
#line 1276 "mercury_compile.m"
}

#line 1274 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1(
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1274 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1274 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 1274 "mercury_compile.m"
{
#line 1274 "mercury_compile.m"
  {
#line 1274 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1274 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_TargetFiles_10;

#line 1274 "mercury_compile.m"
    {
#line 1274 "mercury_compile.m"
      top_level__mercury_compile__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_TargetFiles_10);
    }
#line 1274 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_TargetFiles_10));
#line 1274 "mercury_compile.m"
  }
#line 1274 "mercury_compile.m"
}

#line 1262 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(
#line 1262 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_3,
#line 1262 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__FindTargetFiles_4)
#line 1262 "mercury_compile.m"
{
#line 1265 "mercury_compile.m"
  {
#line 1265 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1265 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CompilationTarget_5;
#line 1265 "mercury_compile.m"
    MR_String top_level__mercury_compile__TargetSuffix_6;

#line 1266 "mercury_compile.m"
    {
#line 1266 "mercury_compile.m"
      libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_3, &top_level__mercury_compile__CompilationTarget_5);
    }
#line 1268 "mercury_compile.m"
    if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 0))
#line 1267 "mercury_compile.m"
      top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".c";
#line 1268 "mercury_compile.m"
    else
#line 1268 "mercury_compile.m"
      if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 2))
#line 1269 "mercury_compile.m"
        top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".cs";
#line 1268 "mercury_compile.m"
      else
#line 1268 "mercury_compile.m"
        if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 5))
#line 1272 "mercury_compile.m"
          top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".erl";
#line 1268 "mercury_compile.m"
        else
#line 1268 "mercury_compile.m"
          if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 1))
#line 1268 "mercury_compile.m"
            top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".il";
#line 1268 "mercury_compile.m"
          else
#line 1268 "mercury_compile.m"
            if ((top_level__mercury_compile__CompilationTarget_5 == (MR_Integer) 3))
#line 1270 "mercury_compile.m"
              top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".java";
#line 1268 "mercury_compile.m"
            else
#line 1271 "mercury_compile.m"
              top_level__mercury_compile__TargetSuffix_6 = (MR_String) ".s";
#line 1274 "mercury_compile.m"
    {
#line 1274 "mercury_compile.m"
      MR_Word base;
#line 1274 "mercury_compile.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "mercury_compile.m"
      *top_level__mercury_compile__FindTargetFiles_4 = base;
#line 1274 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[1]));
#line 1274 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0_1));
#line 1274 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1274 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile__Globals_3));
#line 1274 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile__TargetSuffix_6));
#line 1274 "mercury_compile.m"
    }
#line 1265 "mercury_compile.m"
  }
#line 1262 "mercury_compile.m"
}

#line 1221 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__module_to_link_2_p_0(
#line 1221 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 1221 "mercury_compile.m"
  MR_String * top_level__mercury_compile__ModuleToLink_5)
#line 1221 "mercury_compile.m"
{
#line 1223 "mercury_compile.m"
  {
#line 1223 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1223 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 1223 "mercury_compile.m"
    MR_Word top_level__mercury_compile___Items_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));

#line 1224 "mercury_compile.m"
    {
#line 1224 "mercury_compile.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(top_level__mercury_compile__ModuleName_3, top_level__mercury_compile__ModuleToLink_5);
#line 1224 "mercury_compile.m"
      return;
    }
#line 1223 "mercury_compile.m"
  }
#line 1221 "mercury_compile.m"
}

#line 1216 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__halt_at_module_error_2_p_0(
#line 1216 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaltSyntax_1,
#line 1216 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__2_2)
#line 1216 "mercury_compile.m"
{
#line 1218 "mercury_compile.m"
  {
#line 1218 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1218 "mercury_compile.m"
    if ((top_level__mercury_compile__HeadVar__2_2 == (MR_Integer) 2))
#line 1218 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 1218 "mercury_compile.m"
    else
#line 1218 "mercury_compile.m"
      if ((top_level__mercury_compile__HeadVar__2_2 == (MR_Integer) 1))
#line 1219 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_1 == (MR_Integer) 1);
#line 1218 "mercury_compile.m"
      else
#line 1218 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_FALSE;
#line 1218 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1218 "mercury_compile.m"
  }
#line 1216 "mercury_compile.m"
}

#line 1207 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_private_interface_7_p_0(
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1207 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1207 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1207 "mercury_compile.m"
{
#line 1212 "mercury_compile.m"
  {
#line 1212 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1212 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1213 "mercury_compile.m"
    {
#line 1213 "mercury_compile.m"
      parse_tree__modules__make_private_interface_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1213 "mercury_compile.m"
      return;
    }
#line 1212 "mercury_compile.m"
  }
#line 1207 "mercury_compile.m"
}

#line 1199 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_short_interface_7_p_0(
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1199 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__3_10,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_11,
#line 1199 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1199 "mercury_compile.m"
{
#line 1204 "mercury_compile.m"
  {
#line 1204 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 1204 "mercury_compile.m"
    {
#line 1204 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__HeadVar__5_5);
#line 1204 "mercury_compile.m"
      return;
    }
#line 1204 "mercury_compile.m"
  }
#line 1199 "mercury_compile.m"
}

#line 1190 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__call_make_interface_7_p_0(
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_8,
#line 1190 "mercury_compile.m"
  MR_String top_level__mercury_compile__SourceFileName_9,
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_10,
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1190 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__5_5)
#line 1190 "mercury_compile.m"
{
#line 1195 "mercury_compile.m"
  {
#line 1195 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1195 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 0)));
#line 1195 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__HeadVar__5_5, (MR_Integer) 1)));

#line 1196 "mercury_compile.m"
    {
#line 1196 "mercury_compile.m"
      parse_tree__modules__make_interface_8_p_0(top_level__mercury_compile__Globals_8, top_level__mercury_compile__SourceFileName_9, top_level__mercury_compile__SourceFileModuleName_10, top_level__mercury_compile__ModuleName_12, top_level__mercury_compile__MaybeTimestamp_11, top_level__mercury_compile__Items_13);
#line 1196 "mercury_compile.m"
      return;
    }
#line 1195 "mercury_compile.m"
  }
#line 1190 "mercury_compile.m"
}

#line 1187 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_2(
#line 1187 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1187 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1187 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2)
#line 1187 "mercury_compile.m"
{
#line 1187 "mercury_compile.m"
  {
#line 1187 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1187 "mercury_compile.m"
    MR_String top_level__mercury_compile__conv4_ModuleToLink_5;

#line 1187 "mercury_compile.m"
    {
#line 1187 "mercury_compile.m"
      top_level__mercury_compile__module_to_link_2_p_0(((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv4_ModuleToLink_5);
    }
#line 1187 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv4_ModuleToLink_5));
#line 1187 "mercury_compile.m"
  }
#line 1187 "mercury_compile.m"
}

#line 1181 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0_1(
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 1181 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 1181 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4,
#line 1181 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 1181 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 1181 "mercury_compile.m"
{
#line 1181 "mercury_compile.m"
  {
#line 1181 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 1181 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_ExtraObjFiles_23;
#line 1181 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_33;

#line 1181 "mercury_compile.m"
    {
#line 1181 "mercury_compile.m"
      top_level__mercury_compile__compile_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 9))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv1_ExtraObjFiles_23, ((MR_Word) top_level__mercury_compile__wrapper_arg_3), &top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_33);
    }
#line 1181 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv1_ExtraObjFiles_23));
#line 1181 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile__conv0_STATE_VARIABLE_Specs_33));
#line 1181 "mercury_compile.m"
  }
#line 1181 "mercury_compile.m"
}

#line 1171 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__compile_all_submodules_13_p_0(
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_14,
#line 1171 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_15,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SourceFileModuleName_16,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__NestedSubModules_17,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_18,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap_19,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FindTimestampFiles_20,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModuleList_21,
#line 1171 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_0_29,
#line 1171 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_23,
#line 1171 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_24)
#line 1171 "mercury_compile.m"
{
#line 1180 "mercury_compile.m"
  {
#line 1180 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1180 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeInfo_45_45;
#line 1180 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_51_51;
#line 1180 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFileLists_26;
#line 1180 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_32_32;
#line 1180 "mercury_compile.m"
    MR_Word top_level__mercury_compile__STATE_VARIABLE_Specs_33_33;
#line 1181 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33;
#line 1181 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34;
#line 1186 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumWarnings_27;
#line 1186 "mercury_compile.m"
    MR_Integer top_level__mercury_compile___NumErrors_28;

#line 1181 "mercury_compile.m"
    {
#line 1181 "mercury_compile.m"
      top_level__mercury_compile__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_10[0]));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile__compile_all_submodules_13_p_0_1));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile__Globals_14));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 4) = ((MR_Box) (top_level__mercury_compile__FileName_15));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 5) = ((MR_Box) (top_level__mercury_compile__SourceFileModuleName_16));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 6) = ((MR_Box) (top_level__mercury_compile__NestedSubModules_17));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 7) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_18));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 8) = ((MR_Box) (top_level__mercury_compile__HaveReadModuleMap_19));
#line 1181 "mercury_compile.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_32_32, 9) = ((MR_Box) (top_level__mercury_compile__FindTimestampFiles_20));
#line 1181 "mercury_compile.m"
    }
#line 6349 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeInfo_45_45 = (MR_Word) &top_level__mercury_compile_scalar_common_3[1];
#line 1181 "mercury_compile.m"
    {
#line 1181 "mercury_compile.m"
      mercury__list__map_foldl2_7_p_2(top_level__mercury_compile__TypeInfo_45_45, (MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_32_32, top_level__mercury_compile__SubModuleList_21, &top_level__mercury_compile__ExtraObjFileLists_26, ((MR_Box) (top_level__mercury_compile__STATE_VARIABLE_Specs_0_29)), &top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv2_STATE_VARIABLE_IO_34_34);
    }
#line 1181 "mercury_compile.m"
    top_level__mercury_compile__STATE_VARIABLE_Specs_33_33 = ((MR_Word) top_level__mercury_compile__conv3_STATE_VARIABLE_Specs_33_33);
#line 1186 "mercury_compile.m"
    {
#line 1186 "mercury_compile.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__STATE_VARIABLE_Specs_33_33, top_level__mercury_compile__Globals_14, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_27, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_28);
    }
#line 6363 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1187 "mercury_compile.m"
    {
#line 1187 "mercury_compile.m"
      mercury__list__map_3_p_0(top_level__mercury_compile__TypeInfo_45_45, top_level__mercury_compile__TypeCtorInfo_51_51, (MR_Word) &top_level__mercury_compile_scalar_common_3[3], top_level__mercury_compile__SubModuleList_21, top_level__mercury_compile__ModulesToLink_23);
    }
#line 1188 "mercury_compile.m"
    {
#line 1188 "mercury_compile.m"
      mercury__list__condense_2_p_0(top_level__mercury_compile__TypeCtorInfo_51_51, top_level__mercury_compile__ExtraObjFileLists_26, top_level__mercury_compile__ExtraObjFiles_24);
#line 1188 "mercury_compile.m"
      return;
    }
#line 1180 "mercury_compile.m"
  }
#line 1171 "mercury_compile.m"
}

#line 1119 "mercury_compile.m"
static MR_bool MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0_1(
#line 1119 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 1119 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1)
#line 1119 "mercury_compile.m"
{
#line 1119 "mercury_compile.m"
  {
#line 1119 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1119 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 1119 "mercury_compile.m"
    {
#line 1119 "mercury_compile.m"
      return top_level__mercury_compile__succeeded = top_level__mercury_compile__IntroducedFrom__pred__process_module_2__1119__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
    }
#line 1119 "mercury_compile.m"
    return top_level__mercury_compile__succeeded;
#line 1119 "mercury_compile.m"
  }
#line 1119 "mercury_compile.m"
}

#line 1075 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_2_9_p_0(
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_10,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_12,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeModulesToRecompile_13,
#line 1075 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HaveReadModuleMap0_14,
#line 1075 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_15,
#line 1075 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_16)
#line 1075 "mercury_compile.m"
{
#line 1080 "mercury_compile.m"
  {
#line 1080 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInt_18;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInt_19;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeOptInt_20;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeTransOptInt_21;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeAnalysisRegistry_22;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeXmlDocumentation_23;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__DirectReport_24;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Globals_26;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModuleName_27;
#line 1080 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_28;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MaybeTimestamp_29;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Items_30;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Specs0_31;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Error_32;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaveReadModuleMap_33;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_34;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_59_59;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_60_60;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_61_61;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_62_62;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_63_63;
#line 1080 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_64_64;

#line 1081 "mercury_compile.m"
    {
#line 1081 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 82, &top_level__mercury_compile__MakeShortInt_18);
    }
#line 1083 "mercury_compile.m"
    {
#line 1083 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 83, &top_level__mercury_compile__MakeInt_19);
    }
#line 1085 "mercury_compile.m"
    {
#line 1085 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 85, &top_level__mercury_compile__MakeOptInt_20);
    }
#line 1087 "mercury_compile.m"
    {
#line 1087 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 86, &top_level__mercury_compile__MakeTransOptInt_21);
    }
#line 1089 "mercury_compile.m"
    {
#line 1089 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 87, &top_level__mercury_compile__MakeAnalysisRegistry_22);
    }
#line 1091 "mercury_compile.m"
    {
#line 1091 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 88, &top_level__mercury_compile__MakeXmlDocumentation_23);
    }
#line 1094 "mercury_compile.m"
    {
#line 1094 "mercury_compile.m"
      top_level__mercury_compile__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 0) = ((MR_Box) (top_level__mercury_compile__MakeXmlDocumentation_23));
#line 1094 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1094 "mercury_compile.m"
    }
#line 1093 "mercury_compile.m"
    {
#line 1093 "mercury_compile.m"
      top_level__mercury_compile__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 0) = ((MR_Box) (top_level__mercury_compile__MakeAnalysisRegistry_22));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_63_63, 1) = ((MR_Box) (top_level__mercury_compile__V_64_64));
#line 1093 "mercury_compile.m"
    }
#line 1093 "mercury_compile.m"
    {
#line 1093 "mercury_compile.m"
      top_level__mercury_compile__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile__MakeTransOptInt_21));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_62_62, 1) = ((MR_Box) (top_level__mercury_compile__V_63_63));
#line 1093 "mercury_compile.m"
    }
#line 1093 "mercury_compile.m"
    {
#line 1093 "mercury_compile.m"
      top_level__mercury_compile__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 0) = ((MR_Box) (top_level__mercury_compile__MakeOptInt_20));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_61_61, 1) = ((MR_Box) (top_level__mercury_compile__V_62_62));
#line 1093 "mercury_compile.m"
    }
#line 1093 "mercury_compile.m"
    {
#line 1093 "mercury_compile.m"
      top_level__mercury_compile__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 0) = ((MR_Box) (top_level__mercury_compile__MakeInt_19));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_60_60, 1) = ((MR_Box) (top_level__mercury_compile__V_61_61));
#line 1093 "mercury_compile.m"
    }
#line 1093 "mercury_compile.m"
    {
#line 1093 "mercury_compile.m"
      top_level__mercury_compile__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 0) = ((MR_Box) (top_level__mercury_compile__MakeShortInt_18));
#line 1093 "mercury_compile.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_59_59, 1) = ((MR_Box) (top_level__mercury_compile__V_60_60));
#line 1093 "mercury_compile.m"
    }
#line 1093 "mercury_compile.m"
    {
#line 1093 "mercury_compile.m"
      mercury__bool__or_list_2_p_0(top_level__mercury_compile__V_59_59, &top_level__mercury_compile__DirectReport_24);
    }
#line 1097 "mercury_compile.m"
    if ((top_level__mercury_compile__DirectReport_24 == (MR_Integer) 0))
#line 1098 "mercury_compile.m"
      {
#line 1098 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ReportCmdLineArgsDotErr_25;

#line 1099 "mercury_compile.m"
        {
#line 1099 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_10, (MR_Integer) 53, &top_level__mercury_compile__ReportCmdLineArgsDotErr_25);
        }
#line 1101 "mercury_compile.m"
        {
#line 1101 "mercury_compile.m"
          top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgsDotErr_25, top_level__mercury_compile__OptionArgs_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1098 "mercury_compile.m"
      }
#line 1097 "mercury_compile.m"
    else
#line 1096 "mercury_compile.m"
      {
#line 1096 "mercury_compile.m"
      }
#line 1104 "mercury_compile.m"
    {
#line 1104 "mercury_compile.m"
      top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_10, &top_level__mercury_compile__Globals_26, top_level__mercury_compile__FileOrModule_12, (MR_Integer) 0, &top_level__mercury_compile__ModuleName_27, &top_level__mercury_compile__FileName_28, &top_level__mercury_compile__MaybeTimestamp_29, &top_level__mercury_compile__Items_30, &top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Error_32, top_level__mercury_compile__HaveReadModuleMap0_14, &top_level__mercury_compile__HaveReadModuleMap_33);
    }
#line 1107 "mercury_compile.m"
    {
#line 1107 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_34);
    }
#line 1218 "mercury_compile.m"
    if ((top_level__mercury_compile__Error_32 == (MR_Integer) 2))
#line 1218 "mercury_compile.m"
      top_level__mercury_compile__succeeded = MR_TRUE;
#line 1218 "mercury_compile.m"
    else
#line 1218 "mercury_compile.m"
      if ((top_level__mercury_compile__Error_32 == (MR_Integer) 1))
#line 1219 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__HaltSyntax_34 == (MR_Integer) 1);
#line 1218 "mercury_compile.m"
      else
#line 1218 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_FALSE;
#line 1114 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 1111 "mercury_compile.m"
      {
#line 1110 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumWarnings_35;
#line 1110 "mercury_compile.m"
        MR_Integer top_level__mercury_compile___NumErrors_36;

#line 1110 "mercury_compile.m"
        {
#line 1110 "mercury_compile.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs0_31, top_level__mercury_compile__Globals_26, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_35, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_36);
        }
#line 1112 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1113 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1111 "mercury_compile.m"
      }
#line 1114 "mercury_compile.m"
    else
#line 1116 "mercury_compile.m"
      {
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_86_86;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleList0_37;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs1_38;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SubModuleListToCompile_43;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules0_44;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__NestedSubModules_45;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FindTimestampFiles_46;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TraceProf_47;
#line 1116 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GlobalsToUse_50;
#line 1137 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_88_88;

#line 1115 "mercury_compile.m"
        {
#line 1115 "mercury_compile.m"
          parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__Items_30, &top_level__mercury_compile__SubModuleList0_37, top_level__mercury_compile__Specs0_31, &top_level__mercury_compile__Specs1_38);
        }
#line 1123 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeModulesToRecompile_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "mercury_compile.m"
          top_level__mercury_compile__SubModuleListToCompile_43 = top_level__mercury_compile__SubModuleList0_37;
#line 1123 "mercury_compile.m"
        else
#line 1118 "mercury_compile.m"
          {
#line 1118 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeModulesToRecompile_13, (MR_Integer) 0)));
#line 1118 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ToRecompile_40;

#line 1119 "mercury_compile.m"
            {
#line 1119 "mercury_compile.m"
              top_level__mercury_compile__ToRecompile_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_9[0]));
#line 1119 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 1) = ((MR_Box) (top_level__mercury_compile__process_module_2_9_p_0_1));
#line 1119 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1119 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ToRecompile_40, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToRecompile_39));
#line 1119 "mercury_compile.m"
            }
#line 1122 "mercury_compile.m"
            {
#line 1122 "mercury_compile.m"
              mercury__list__filter_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[1], top_level__mercury_compile__ToRecompile_40, top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__SubModuleListToCompile_43);
            }
#line 1118 "mercury_compile.m"
          }
#line 6706 "top_level.mercury_compile.c"
        top_level__mercury_compile__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1127 "mercury_compile.m"
        {
#line 1127 "mercury_compile.m"
          mercury__assoc_list__keys_2_p_0(top_level__mercury_compile__TypeCtorInfo_86_86, (MR_Word) &top_level__mercury_compile_scalar_common_1[1], top_level__mercury_compile__SubModuleList0_37, &top_level__mercury_compile__NestedSubModules0_44);
        }
#line 1128 "mercury_compile.m"
        {
#line 1128 "mercury_compile.m"
          mercury__list__delete_all_3_p_1(top_level__mercury_compile__TypeCtorInfo_86_86, top_level__mercury_compile__NestedSubModules0_44, ((MR_Box) (top_level__mercury_compile__ModuleName_27)), &top_level__mercury_compile__NestedSubModules_45);
        }
#line 1130 "mercury_compile.m"
        {
#line 1130 "mercury_compile.m"
          top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_26, &top_level__mercury_compile__FindTimestampFiles_46);
        }
#line 1132 "mercury_compile.m"
        {
#line 1132 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_26, (MR_Integer) 117, &top_level__mercury_compile__TraceProf_47);
        }
#line 1135 "mercury_compile.m"
        {
#line 1135 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mdbcomp__prim_data__non_traced_mercury_builtin_module_1_p_0(top_level__mercury_compile__ModuleName_27);
        }
#line 1135 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1135 "mercury_compile.m"
          {
#line 1137 "mercury_compile.m"
            {
#line 1137 "mercury_compile.m"
              top_level__mercury_compile__V_88_88 = mdbcomp__prim_data__mercury_profiling_builtin_module_0_f_0();
            }
#line 1137 "mercury_compile.m"
            {
#line 1137 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__V_88_88);
            }
#line 1137 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1138 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (top_level__mercury_compile__TraceProf_47 == (MR_Integer) 1);
#line 1136 "mercury_compile.m"
            top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 1135 "mercury_compile.m"
          }
#line 1151 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 1147 "mercury_compile.m"
          {
#line 1147 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GlobalsNoTrace0_48;

#line 1146 "mercury_compile.m"
            {
#line 1146 "mercury_compile.m"
              libs__globals__set_option_4_p_0((MR_Integer) 266, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[2]), top_level__mercury_compile__Globals_26, &top_level__mercury_compile__GlobalsNoTrace0_48);
            }
#line 1148 "mercury_compile.m"
            {
#line 1148 "mercury_compile.m"
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile__GlobalsNoTrace0_48, &top_level__mercury_compile__GlobalsToUse_50);
            }
#line 1147 "mercury_compile.m"
          }
#line 1151 "mercury_compile.m"
        else
#line 1152 "mercury_compile.m"
          top_level__mercury_compile__GlobalsToUse_50 = top_level__mercury_compile__Globals_26;
#line 1154 "mercury_compile.m"
        {
#line 1154 "mercury_compile.m"
          top_level__mercury_compile__compile_all_submodules_13_p_0(top_level__mercury_compile__GlobalsToUse_50, top_level__mercury_compile__FileName_28, top_level__mercury_compile__ModuleName_27, top_level__mercury_compile__NestedSubModules_45, top_level__mercury_compile__MaybeTimestamp_29, top_level__mercury_compile__HaveReadModuleMap_33, top_level__mercury_compile__FindTimestampFiles_46, top_level__mercury_compile__SubModuleListToCompile_43, top_level__mercury_compile__Specs1_38, top_level__mercury_compile__ModulesToLink_15, top_level__mercury_compile__ExtraObjFiles_16);
#line 1154 "mercury_compile.m"
          return;
        }
#line 1116 "mercury_compile.m"
      }
#line 1080 "mercury_compile.m"
  }
#line 1075 "mercury_compile.m"
}

#line 1053 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__apply_process_module_7_p_0(
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ProcessModule_8,
#line 1053 "mercury_compile.m"
  MR_String top_level__mercury_compile__FileName_9,
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ModuleName_10,
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__MaybeTimestamp_11,
#line 1053 "mercury_compile.m"
  MR_Word top_level__mercury_compile__SubModule_12)
#line 1053 "mercury_compile.m"
{
#line 1062 "mercury_compile.m"
  {
#line 1062 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 1062 "mercury_compile.m"
    void MR_CALL (* top_level__mercury_compile__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_8, (MR_Integer) 1)));
#line 1062 "mercury_compile.m"
    MR_Box top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15;

#line 1062 "mercury_compile.m"
    {
#line 1062 "mercury_compile.m"
      top_level__mercury_compile__func_0(((MR_Box) top_level__mercury_compile__ProcessModule_8), ((MR_Box) (top_level__mercury_compile__FileName_9)), ((MR_Box) (top_level__mercury_compile__ModuleName_10)), ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_11)), ((MR_Box) (top_level__mercury_compile__SubModule_12)), ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv1_STATE_VARIABLE_IO_15);
    }
#line 1062 "mercury_compile.m"
  }
#line 1053 "mercury_compile.m"
}

#line 979 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_4(
#line 979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 979 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 979 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 979 "mercury_compile.m"
{
#line 979 "mercury_compile.m"
  {
#line 979 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 979 "mercury_compile.m"
    {
#line 979 "mercury_compile.m"
      top_level__mercury_compile__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1));
#line 979 "mercury_compile.m"
      return;
    }
#line 979 "mercury_compile.m"
  }
#line 979 "mercury_compile.m"
}

#line 961 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_3(
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 961 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 961 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 961 "mercury_compile.m"
{
#line 961 "mercury_compile.m"
  {
#line 961 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 961 "mercury_compile.m"
    {
#line 961 "mercury_compile.m"
      top_level__mercury_compile__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 961 "mercury_compile.m"
      return;
    }
#line 961 "mercury_compile.m"
  }
#line 961 "mercury_compile.m"
}

#line 958 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_2(
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 958 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 958 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 958 "mercury_compile.m"
{
#line 958 "mercury_compile.m"
  {
#line 958 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 958 "mercury_compile.m"
    {
#line 958 "mercury_compile.m"
      top_level__mercury_compile__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 958 "mercury_compile.m"
      return;
    }
#line 958 "mercury_compile.m"
  }
#line 958 "mercury_compile.m"
}

#line 954 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0_1(
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 954 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_5,
#line 954 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_6)
#line 954 "mercury_compile.m"
{
#line 954 "mercury_compile.m"
  {
#line 954 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 954 "mercury_compile.m"
    {
#line 954 "mercury_compile.m"
      top_level__mercury_compile__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), ((MR_Word) top_level__mercury_compile__wrapper_arg_3), ((MR_Word) top_level__mercury_compile__wrapper_arg_4));
#line 954 "mercury_compile.m"
      return;
    }
#line 954 "mercury_compile.m"
  }
#line 954 "mercury_compile.m"
}

#line 937 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_module_7_p_0(
#line 937 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_8,
#line 937 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 937 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 937 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_11,
#line 937 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_12)
#line 937 "mercury_compile.m"
{
#line 941 "mercury_compile.m"
  {
#line 941 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 941 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HaltSyntax_14;
#line 941 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeInterface_15;
#line 941 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakeShortInterface_16;
#line 941 "mercury_compile.m"
    MR_Word top_level__mercury_compile__MakePrivateInterface_17;
#line 941 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ConvertToMercury_18;
#line 941 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateVersionNumbers_19;
#line 986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ProcessModule_20;
#line 986 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReturnTimestamp_21;

#line 942 "mercury_compile.m"
    {
#line 942 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 3, &top_level__mercury_compile__HaltSyntax_14);
    }
#line 943 "mercury_compile.m"
    {
#line 943 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 83, &top_level__mercury_compile__MakeInterface_15);
    }
#line 944 "mercury_compile.m"
    {
#line 944 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 82, &top_level__mercury_compile__MakeShortInterface_16);
    }
#line 946 "mercury_compile.m"
    {
#line 946 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 84, &top_level__mercury_compile__MakePrivateInterface_17);
    }
#line 948 "mercury_compile.m"
    {
#line 948 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 94, &top_level__mercury_compile__ConvertToMercury_18);
    }
#line 950 "mercury_compile.m"
    {
#line 950 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 112, &top_level__mercury_compile__GenerateVersionNumbers_19);
    }
#line 953 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeInterface_15 == (MR_Integer) 1);
#line 957 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 954 "mercury_compile.m"
      {
#line 954 "mercury_compile.m"
        {
#line 954 "mercury_compile.m"
          top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 954 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 954 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_1));
#line 954 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 954 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 954 "mercury_compile.m"
        }
#line 955 "mercury_compile.m"
        {
#line 955 "mercury_compile.m"
          top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
        }
#line 954 "mercury_compile.m"
        top_level__mercury_compile__succeeded = MR_TRUE;
#line 954 "mercury_compile.m"
      }
#line 957 "mercury_compile.m"
    else
#line 960 "mercury_compile.m"
      {
#line 957 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakeShortInterface_16 == (MR_Integer) 1);
#line 960 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 958 "mercury_compile.m"
          {
#line 958 "mercury_compile.m"
            {
#line 958 "mercury_compile.m"
              top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 958 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 958 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_2));
#line 958 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 958 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 958 "mercury_compile.m"
            }
#line 959 "mercury_compile.m"
            top_level__mercury_compile__ReturnTimestamp_21 = (MR_Integer) 1;
#line 958 "mercury_compile.m"
            top_level__mercury_compile__succeeded = MR_TRUE;
#line 958 "mercury_compile.m"
          }
#line 960 "mercury_compile.m"
        else
#line 964 "mercury_compile.m"
          {
#line 960 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__MakePrivateInterface_17 == (MR_Integer) 1);
#line 964 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 964 "mercury_compile.m"
              {
#line 961 "mercury_compile.m"
                {
#line 961 "mercury_compile.m"
                  top_level__mercury_compile__ProcessModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 961 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[0]));
#line 961 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_3));
#line 961 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 961 "mercury_compile.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile__ProcessModule_20, 3) = ((MR_Box) (top_level__mercury_compile__Globals0_8));
#line 961 "mercury_compile.m"
                }
#line 962 "mercury_compile.m"
                {
#line 962 "mercury_compile.m"
                  top_level__mercury_compile__ReturnTimestamp_21 = top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile__GenerateVersionNumbers_19);
                }
#line 962 "mercury_compile.m"
                top_level__mercury_compile__succeeded = MR_TRUE;
#line 964 "mercury_compile.m"
              }
#line 964 "mercury_compile.m"
          }
#line 960 "mercury_compile.m"
      }
#line 986 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 970 "mercury_compile.m"
      {
#line 970 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Globals_22;
#line 970 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_23;
#line 970 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_24;
#line 970 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestamp_25;
#line 970 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Items_26;
#line 970 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Specs0_27;
#line 970 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Error_28;
#line 970 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_53_53;
#line 968 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_29_29;

#line 968 "mercury_compile.m"
        {
#line 968 "mercury_compile.m"
          top_level__mercury_compile__V_53_53 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
        }
#line 968 "mercury_compile.m"
        {
#line 968 "mercury_compile.m"
          top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_22, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ReturnTimestamp_21, &top_level__mercury_compile__ModuleName_23, &top_level__mercury_compile__FileName_24, &top_level__mercury_compile__MaybeTimestamp_25, &top_level__mercury_compile__Items_26, &top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Error_28, top_level__mercury_compile__V_53_53, &top_level__mercury_compile__V_29_29);
        }
#line 971 "mercury_compile.m"
        {
#line 971 "mercury_compile.m"
          top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Error_28);
        }
#line 973 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 971 "mercury_compile.m"
          {
#line 971 "mercury_compile.m"
          }
#line 973 "mercury_compile.m"
        else
#line 975 "mercury_compile.m"
          {
#line 975 "mercury_compile.m"
            MR_Word top_level__mercury_compile__SubModuleList_30;
#line 975 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_31;
#line 975 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_58_58;
#line 977 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_32;
#line 977 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_33;
#line 979 "mercury_compile.m"
            MR_Box top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46;

#line 974 "mercury_compile.m"
            {
#line 974 "mercury_compile.m"
              parse_tree__modules__split_into_submodules_5_p_0(top_level__mercury_compile__ModuleName_23, top_level__mercury_compile__Items_26, &top_level__mercury_compile__SubModuleList_30, top_level__mercury_compile__Specs0_27, &top_level__mercury_compile__Specs_31);
            }
#line 977 "mercury_compile.m"
            {
#line 977 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_31, top_level__mercury_compile__Globals_22, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_32, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_33);
            }
#line 979 "mercury_compile.m"
            {
#line 979 "mercury_compile.m"
              top_level__mercury_compile__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 979 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_8[1]));
#line 979 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 1) = ((MR_Box) (top_level__mercury_compile__process_module_7_p_0_4));
#line 979 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 979 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 3) = ((MR_Box) (top_level__mercury_compile__ProcessModule_20));
#line 979 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 4) = ((MR_Box) (top_level__mercury_compile__FileName_24));
#line 979 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 5) = ((MR_Box) (top_level__mercury_compile__ModuleName_23));
#line 979 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_58_58, 6) = ((MR_Box) (top_level__mercury_compile__MaybeTimestamp_25));
#line 979 "mercury_compile.m"
            }
#line 979 "mercury_compile.m"
            {
#line 979 "mercury_compile.m"
              mercury__list__foldl_4_p_2((MR_Word) &top_level__mercury_compile_scalar_common_3[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile__V_58_58, top_level__mercury_compile__SubModuleList_30, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile__conv0_STATE_VARIABLE_IO_46);
            }
#line 975 "mercury_compile.m"
          }
#line 984 "mercury_compile.m"
        *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "mercury_compile.m"
        *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "mercury_compile.m"
      }
#line 986 "mercury_compile.m"
    else
#line 1003 "mercury_compile.m"
      {
#line 987 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ConvertToMercury_18 == (MR_Integer) 1);
#line 1003 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 991 "mercury_compile.m"
          {
#line 991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_61_61;
#line 991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_80;
#line 991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModuleName_81;
#line 991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Items_82;
#line 991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Error_83;
#line 991 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Specs_84;
#line 989 "mercury_compile.m"
            MR_String top_level__mercury_compile__V_34_34;
#line 989 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_35_35;
#line 989 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_36_36;
#line 993 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumWarnings_78;
#line 993 "mercury_compile.m"
            MR_Integer top_level__mercury_compile___NumErrors_79;

#line 989 "mercury_compile.m"
            {
#line 989 "mercury_compile.m"
              top_level__mercury_compile__V_61_61 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0);
            }
#line 989 "mercury_compile.m"
            {
#line 989 "mercury_compile.m"
              top_level__mercury_compile__read_module_or_file_14_p_0(top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_80, top_level__mercury_compile__FileOrModule_10, (MR_Integer) 1, &top_level__mercury_compile__ModuleName_81, &top_level__mercury_compile__V_34_34, &top_level__mercury_compile__V_35_35, &top_level__mercury_compile__Items_82, &top_level__mercury_compile__Specs_84, &top_level__mercury_compile__Error_83, top_level__mercury_compile__V_61_61, &top_level__mercury_compile__V_36_36);
            }
#line 993 "mercury_compile.m"
            {
#line 993 "mercury_compile.m"
              parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile__Specs_84, top_level__mercury_compile__Globals_80, (MR_Integer) 0, &top_level__mercury_compile___NumWarnings_78, (MR_Integer) 0, &top_level__mercury_compile___NumErrors_79);
            }
#line 994 "mercury_compile.m"
            {
#line 994 "mercury_compile.m"
              top_level__mercury_compile__succeeded = top_level__mercury_compile__halt_at_module_error_2_p_0(top_level__mercury_compile__HaltSyntax_14, top_level__mercury_compile__Error_83);
            }
#line 996 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 994 "mercury_compile.m"
              {
#line 994 "mercury_compile.m"
              }
#line 996 "mercury_compile.m"
            else
#line 998 "mercury_compile.m"
              {
#line 998 "mercury_compile.m"
                MR_String top_level__mercury_compile__OutputFileName_37;

#line 997 "mercury_compile.m"
                {
#line 997 "mercury_compile.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, (MR_String) ".ugly", (MR_Integer) 0, &top_level__mercury_compile__OutputFileName_37);
                }
#line 999 "mercury_compile.m"
                {
#line 999 "mercury_compile.m"
                  parse_tree__mercury_to_mercury__convert_to_mercury_6_p_0(top_level__mercury_compile__Globals_80, top_level__mercury_compile__ModuleName_81, top_level__mercury_compile__OutputFileName_37, top_level__mercury_compile__Items_82);
                }
#line 998 "mercury_compile.m"
              }
#line 1001 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 991 "mercury_compile.m"
          }
#line 1003 "mercury_compile.m"
        else
#line 1004 "mercury_compile.m"
          {
#line 1004 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart0_38;
#line 1004 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_39;
#line 1004 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ModulesToRecompile_43;
#line 1004 "mercury_compile.m"
            MR_Word top_level__mercury_compile__HaveReadModuleMap_44;
#line 1004 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Globals_93;
#line 1040 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_76_76;

#line 1004 "mercury_compile.m"
            {
#line 1004 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_8, (MR_Integer) 111, &top_level__mercury_compile__Smart0_38);
            }
#line 1005 "mercury_compile.m"
            {
#line 1005 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_39);
            }
#line 7341 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__DisableSmart_39 == (MR_Integer) 0))
#line 7343 "top_level.mercury_compile.c"
              {
#line 1013 "mercury_compile.m"
                top_level__mercury_compile__Globals_93 = top_level__mercury_compile__Globals0_8;
#line 1035 "mercury_compile.m"
                if ((top_level__mercury_compile__Smart0_38 == (MR_Integer) 0))
#line 1036 "mercury_compile.m"
                  {
#line 1037 "mercury_compile.m"
                    {
#line 1037 "mercury_compile.m"
                      mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1038 "mercury_compile.m"
                    top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1036 "mercury_compile.m"
                  }
#line 1035 "mercury_compile.m"
                else
#line 1017 "mercury_compile.m"
                  {
#line 1017 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTargetFiles_41;
#line 1017 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__FindTimestampFiles_42;
#line 1017 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_89;

#line 1020 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_10)) == (MR_mktag((MR_Integer) 0))))
#line 1021 "mercury_compile.m"
                      {
#line 1021 "mercury_compile.m"
                        MR_String top_level__mercury_compile__FileName_87 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));

#line 1028 "mercury_compile.m"
                        {
#line 1028 "mercury_compile.m"
                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_87, &top_level__mercury_compile__ModuleName_89);
                        }
#line 1021 "mercury_compile.m"
                      }
#line 1020 "mercury_compile.m"
                    else
#line 1019 "mercury_compile.m"
                      top_level__mercury_compile__ModuleName_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_10, (MR_Integer) 0)));
#line 1030 "mercury_compile.m"
                    {
#line 1030 "mercury_compile.m"
                      top_level__mercury_compile__find_smart_recompilation_target_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTargetFiles_41);
                    }
#line 1031 "mercury_compile.m"
                    {
#line 1031 "mercury_compile.m"
                      top_level__mercury_compile__find_timestamp_files_2_p_0(top_level__mercury_compile__Globals_93, &top_level__mercury_compile__FindTimestampFiles_42);
                    }
#line 1032 "mercury_compile.m"
                    {
#line 1032 "mercury_compile.m"
                      recompilation__check__should_recompile_8_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__ModuleName_89, top_level__mercury_compile__FindTargetFiles_41, top_level__mercury_compile__FindTimestampFiles_42, &top_level__mercury_compile__ModulesToRecompile_43, &top_level__mercury_compile__HaveReadModuleMap_44);
                    }
#line 1017 "mercury_compile.m"
                  }
#line 7406 "top_level.mercury_compile.c"
              }
#line 7408 "top_level.mercury_compile.c"
            else
#line 7410 "top_level.mercury_compile.c"
              {
#line 1008 "mercury_compile.m"
                {
#line 1008 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[2]), top_level__mercury_compile__Globals0_8, &top_level__mercury_compile__Globals_93);
                }
#line 1037 "mercury_compile.m"
                {
#line 1037 "mercury_compile.m"
                  mercury__map__init_1_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &top_level__mercury_compile__HaveReadModuleMap_44);
                }
#line 1038 "mercury_compile.m"
                top_level__mercury_compile__ModulesToRecompile_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7424 "top_level.mercury_compile.c"
              }
#line 1040 "mercury_compile.m"
            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToRecompile_43)) == (MR_mktag((MR_Integer) 1)));
#line 1040 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1040 "mercury_compile.m"
              {
#line 1040 "mercury_compile.m"
                top_level__mercury_compile__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToRecompile_43, (MR_Integer) 0)));
#line 1040 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "mercury_compile.m"
              }
#line 1046 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 1044 "mercury_compile.m"
              {
#line 1044 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1045 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1044 "mercury_compile.m"
              }
#line 1046 "mercury_compile.m"
            else
#line 1047 "mercury_compile.m"
              {
#line 1047 "mercury_compile.m"
                top_level__mercury_compile__process_module_2_9_p_0(top_level__mercury_compile__Globals_93, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__ModulesToRecompile_43, top_level__mercury_compile__HaveReadModuleMap_44, top_level__mercury_compile__ModulesToLink_11, top_level__mercury_compile__ExtraObjFiles_12);
#line 1047 "mercury_compile.m"
                return;
              }
#line 1004 "mercury_compile.m"
          }
#line 1003 "mercury_compile.m"
      }
#line 941 "mercury_compile.m"
  }
#line 937 "mercury_compile.m"
}

#line 932 "mercury_compile.m"
static MR_Word MR_CALL 
top_level__mercury_compile__version_numbers_return_timestamp_1_f_0(
#line 932 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1)
#line 932 "mercury_compile.m"
{
#line 934 "mercury_compile.m"
  {
#line 934 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 934 "mercury_compile.m"
    MR_Word top_level__mercury_compile__HeadVar__2_2;

#line 934 "mercury_compile.m"
    if ((top_level__mercury_compile__HeadVar__1_1 == (MR_Integer) 0))
#line 934 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 1;
#line 934 "mercury_compile.m"
    else
#line 935 "mercury_compile.m"
      top_level__mercury_compile__HeadVar__2_2 = (MR_Integer) 0;
#line 934 "mercury_compile.m"
    return top_level__mercury_compile__HeadVar__2_2;
#line 934 "mercury_compile.m"
  }
#line 932 "mercury_compile.m"
}

#line 799 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__read_module_or_file_14_p_0(
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals0_15,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Globals_16,
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModuleName_17,
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__ReturnTimestamp_18,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModuleName_19,
#line 799 "mercury_compile.m"
  MR_String * top_level__mercury_compile__SourceFileName_20,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__MaybeTimestamp_21,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Items_22,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Specs_23,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Error_24,
#line 799 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42,
#line 799 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43)
#line 799 "mercury_compile.m"
{
#line 810 "mercury_compile.m"
  {
#line 810 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 810 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
#line 852 "mercury_compile.m"
      {
#line 852 "mercury_compile.m"
        MR_String top_level__mercury_compile__FileName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 852 "mercury_compile.m"
        MR_Word top_level__mercury_compile__DefaultModuleName_37;
#line 852 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_130;
#line 852 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_136;
#line 875 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_125;
#line 875 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_126;
#line 875 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorPrime_127;
#line 875 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_128;
#line 862 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_38_38;

#line 853 "mercury_compile.m"
        {
#line 853 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 44, &top_level__mercury_compile__Verbose_130);
        }
#line 854 "mercury_compile.m"
        {
#line 854 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_130, (MR_String) "% Parsing file \140");
        }
#line 855 "mercury_compile.m"
        {
#line 855 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_130, top_level__mercury_compile__FileName_36);
        }
#line 856 "mercury_compile.m"
        {
#line 856 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_130, (MR_String) "\' and imported interfaces...\n");
        }
#line 858 "mercury_compile.m"
        {
#line 858 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_36, &top_level__mercury_compile__DefaultModuleName_37);
        }
#line 862 "mercury_compile.m"
        {
#line 862 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__DefaultModuleName_37, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_125, &top_level__mercury_compile__SpecsPrime_126, &top_level__mercury_compile__ErrorPrime_127, &top_level__mercury_compile__V_38_38, &top_level__mercury_compile__MaybeTimestampPrime_128);
        }
#line 875 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 868 "mercury_compile.m"
          {
#line 868 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_53_53;

#line 868 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 870 "mercury_compile.m"
            *top_level__mercury_compile__ModuleName_19 = top_level__mercury_compile__DefaultModuleName_37;
#line 869 "mercury_compile.m"
            {
#line 869 "mercury_compile.m"
              top_level__mercury_compile__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 869 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_53_53, 1) = ((MR_Box) ((MR_String) ".m"));
#line 869 "mercury_compile.m"
            }
#line 869 "mercury_compile.m"
            {
#line 869 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_53_53)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 871 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_125;
#line 872 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_126;
#line 873 "mercury_compile.m"
            *top_level__mercury_compile__Error_24 = top_level__mercury_compile__ErrorPrime_127;
#line 874 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_128;
#line 868 "mercury_compile.m"
          }
#line 875 "mercury_compile.m"
        else
#line 881 "mercury_compile.m"
          {
#line 881 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Smart_39;
#line 881 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_124;

#line 879 "mercury_compile.m"
            {
#line 879 "mercury_compile.m"
              parse_tree__read_modules__read_module_from_file_13_p_0(top_level__mercury_compile__Globals0_15, top_level__mercury_compile__FileName_36, (MR_String) ".m", (MR_String) "Reading file", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Error_24, top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 882 "mercury_compile.m"
            {
#line 882 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_124);
            }
#line 887 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_124 == (MR_Integer) 0))
#line 889 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 887 "mercury_compile.m"
            else
#line 884 "mercury_compile.m"
              {
#line 885 "mercury_compile.m"
                {
#line 885 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[2]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 884 "mercury_compile.m"
              }
#line 898 "mercury_compile.m"
            {
#line 898 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 111, &top_level__mercury_compile__Smart_39);
            }
#line 900 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Smart_39 == (MR_Integer) 1);
#line 900 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 900 "mercury_compile.m"
              {
#line 901 "mercury_compile.m"
                {
#line 901 "mercury_compile.m"
                  top_level__mercury_compile__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(*top_level__mercury_compile__ModuleName_19, top_level__mercury_compile__DefaultModuleName_37);
                }
#line 901 "mercury_compile.m"
                top_level__mercury_compile__succeeded = !(top_level__mercury_compile__succeeded);
#line 900 "mercury_compile.m"
              }
#line 923 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 906 "mercury_compile.m"
              {
#line 906 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Warn_40;

#line 905 "mercury_compile.m"
                {
#line 905 "mercury_compile.m"
                  libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 23, &top_level__mercury_compile__Warn_40);
                }
#line 919 "mercury_compile.m"
                if ((top_level__mercury_compile__Warn_40 == (MR_Integer) 0))
#line 920 "mercury_compile.m"
                  {
#line 920 "mercury_compile.m"
                  }
#line 919 "mercury_compile.m"
                else
#line 908 "mercury_compile.m"
                  {
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Pieces_41;
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_68_68;
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_71_71;
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_73_73;
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_74_74;
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_75_75;
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_78_78;
#line 908 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_79_79;

#line 912 "mercury_compile.m"
                    {
#line 912 "mercury_compile.m"
                      top_level__mercury_compile__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 912 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_74_74, 0) = ((MR_Box) (top_level__mercury_compile__FileName_36));
#line 912 "mercury_compile.m"
                    }
#line 913 "mercury_compile.m"
                    {
#line 913 "mercury_compile.m"
                      top_level__mercury_compile__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 913 "mercury_compile.m"
                      MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_79_79, 1) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 913 "mercury_compile.m"
                    }
#line 912 "mercury_compile.m"
                    {
#line 912 "mercury_compile.m"
                      top_level__mercury_compile__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile__V_79_79));
#line 912 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[12])));
#line 912 "mercury_compile.m"
                    }
#line 912 "mercury_compile.m"
                    {
#line 912 "mercury_compile.m"
                      top_level__mercury_compile__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[23])));
#line 912 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_75_75, 1) = ((MR_Box) (top_level__mercury_compile__V_78_78));
#line 912 "mercury_compile.m"
                    }
#line 911 "mercury_compile.m"
                    {
#line 911 "mercury_compile.m"
                      top_level__mercury_compile__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 0) = ((MR_Box) (top_level__mercury_compile__V_74_74));
#line 911 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_73_73, 1) = ((MR_Box) (top_level__mercury_compile__V_75_75));
#line 911 "mercury_compile.m"
                    }
#line 911 "mercury_compile.m"
                    {
#line 911 "mercury_compile.m"
                      top_level__mercury_compile__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 911 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_71_71, 1) = ((MR_Box) (top_level__mercury_compile__V_73_73));
#line 911 "mercury_compile.m"
                    }
#line 910 "mercury_compile.m"
                    {
#line 910 "mercury_compile.m"
                      top_level__mercury_compile__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[22])));
#line 910 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, 1) = ((MR_Box) (top_level__mercury_compile__V_71_71));
#line 910 "mercury_compile.m"
                    }
#line 909 "mercury_compile.m"
                    {
#line 909 "mercury_compile.m"
                      top_level__mercury_compile__Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[21])));
#line 909 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__Pieces_41, 1) = ((MR_Box) (top_level__mercury_compile__V_68_68));
#line 909 "mercury_compile.m"
                    }
#line 917 "mercury_compile.m"
                    {
#line 917 "mercury_compile.m"
                      parse_tree__error_util__write_error_pieces_plain_4_p_0(*top_level__mercury_compile__Globals_16, top_level__mercury_compile__Pieces_41);
                    }
#line 918 "mercury_compile.m"
                    {
#line 918 "mercury_compile.m"
                      libs__compiler_util__record_warning_3_p_0(*top_level__mercury_compile__Globals_16);
                    }
#line 908 "mercury_compile.m"
                  }
#line 922 "mercury_compile.m"
                {
#line 922 "mercury_compile.m"
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
#line 906 "mercury_compile.m"
              }
#line 923 "mercury_compile.m"
            else
#line 922 "mercury_compile.m"
              {
#line 922 "mercury_compile.m"
              }
#line 922 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 881 "mercury_compile.m"
          }
#line 927 "mercury_compile.m"
        {
#line 927 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 55, &top_level__mercury_compile__Stats_136);
        }
#line 928 "mercury_compile.m"
        {
#line 928 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_136);
        }
#line 929 "mercury_compile.m"
        {
#line 929 "mercury_compile.m"
          *top_level__mercury_compile__SourceFileName_20 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__FileName_36, (MR_String) ".m");
        }
#line 852 "mercury_compile.m"
      }
#line 810 "mercury_compile.m"
    else
#line 810 "mercury_compile.m"
      {
#line 810 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Verbose_27;
#line 810 "mercury_compile.m"
        MR_String top_level__mercury_compile__ModuleNameString_28;
#line 810 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stats_35;
#line 832 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ItemsPrime_29;
#line 832 "mercury_compile.m"
        MR_Word top_level__mercury_compile__SpecsPrime_30;
#line 832 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ErrorPrime_31;
#line 832 "mercury_compile.m"
        MR_String top_level__mercury_compile__SourceFileNamePrime_32;
#line 832 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTimestampPrime_33;

#line 810 "mercury_compile.m"
        *top_level__mercury_compile__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModuleName_17, (MR_Integer) 0)));
#line 811 "mercury_compile.m"
        {
#line 811 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals0_15, (MR_Integer) 44, &top_level__mercury_compile__Verbose_27);
        }
#line 812 "mercury_compile.m"
        {
#line 812 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "% Parsing module \140");
        }
#line 813 "mercury_compile.m"
        {
#line 813 "mercury_compile.m"
          top_level__mercury_compile__ModuleNameString_28 = mdbcomp__prim_data__sym_name_to_string_1_f_0(*top_level__mercury_compile__ModuleName_19);
        }
#line 814 "mercury_compile.m"
        {
#line 814 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, top_level__mercury_compile__ModuleNameString_28);
        }
#line 815 "mercury_compile.m"
        {
#line 815 "mercury_compile.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile__Verbose_27, (MR_String) "\' and imported interfaces...\n");
        }
#line 819 "mercury_compile.m"
        {
#line 819 "mercury_compile.m"
          top_level__mercury_compile__succeeded = parse_tree__read_modules__find_read_module_9_p_0(top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", top_level__mercury_compile__ReturnTimestamp_18, &top_level__mercury_compile__ItemsPrime_29, &top_level__mercury_compile__SpecsPrime_30, &top_level__mercury_compile__ErrorPrime_31, &top_level__mercury_compile__SourceFileNamePrime_32, &top_level__mercury_compile__MaybeTimestampPrime_33);
        }
#line 832 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 825 "mercury_compile.m"
          {
#line 825 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_111_111;

#line 825 "mercury_compile.m"
            *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 826 "mercury_compile.m"
            {
#line 826 "mercury_compile.m"
              top_level__mercury_compile__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 0) = ((MR_Box) (*top_level__mercury_compile__ModuleName_19));
#line 826 "mercury_compile.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_111_111, 1) = ((MR_Box) ((MR_String) ".m"));
#line 826 "mercury_compile.m"
            }
#line 826 "mercury_compile.m"
            {
#line 826 "mercury_compile.m"
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_scalar_common_3[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, ((MR_Box) (top_level__mercury_compile__V_111_111)), top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42, top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43);
            }
#line 827 "mercury_compile.m"
            *top_level__mercury_compile__Items_22 = top_level__mercury_compile__ItemsPrime_29;
#line 828 "mercury_compile.m"
            *top_level__mercury_compile__Specs_23 = top_level__mercury_compile__SpecsPrime_30;
#line 829 "mercury_compile.m"
            *top_level__mercury_compile__Error_24 = top_level__mercury_compile__ErrorPrime_31;
#line 830 "mercury_compile.m"
            *top_level__mercury_compile__SourceFileName_20 = top_level__mercury_compile__SourceFileNamePrime_32;
#line 831 "mercury_compile.m"
            *top_level__mercury_compile__MaybeTimestamp_21 = top_level__mercury_compile__MaybeTimestampPrime_33;
#line 825 "mercury_compile.m"
          }
#line 832 "mercury_compile.m"
        else
#line 838 "mercury_compile.m"
          {
#line 838 "mercury_compile.m"
            MR_Word top_level__mercury_compile__DisableSmart_34;

#line 836 "mercury_compile.m"
            {
#line 836 "mercury_compile.m"
              parse_tree__read_modules__read_module_13_p_0(top_level__mercury_compile__Globals0_15, *top_level__mercury_compile__ModuleName_19, (MR_String) ".m", (MR_String) "Reading module", (MR_Integer) 1, top_level__mercury_compile__ReturnTimestamp_18, top_level__mercury_compile__Items_22, top_level__mercury_compile__Specs_23, top_level__mercury_compile__Error_24, top_level__mercury_compile__SourceFileName_20, top_level__mercury_compile__MaybeTimestamp_21);
            }
#line 839 "mercury_compile.m"
            {
#line 839 "mercury_compile.m"
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile__DisableSmart_34);
            }
#line 844 "mercury_compile.m"
            if ((top_level__mercury_compile__DisableSmart_34 == (MR_Integer) 0))
#line 846 "mercury_compile.m"
              *top_level__mercury_compile__Globals_16 = top_level__mercury_compile__Globals0_15;
#line 844 "mercury_compile.m"
            else
#line 841 "mercury_compile.m"
              {
#line 842 "mercury_compile.m"
                {
#line 842 "mercury_compile.m"
                  libs__globals__set_option_4_p_0((MR_Integer) 111, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_5[2]), top_level__mercury_compile__Globals0_15, top_level__mercury_compile__Globals_16);
                }
#line 841 "mercury_compile.m"
              }
#line 846 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_43 = top_level__mercury_compile__STATE_VARIABLE_HaveReadModuleMap_0_42;
#line 838 "mercury_compile.m"
          }
#line 849 "mercury_compile.m"
        {
#line 849 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile__Globals_16, (MR_Integer) 54, &top_level__mercury_compile__Stats_35);
        }
#line 850 "mercury_compile.m"
        {
#line 850 "mercury_compile.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile__Stats_35);
#line 850 "mercury_compile.m"
          return;
        }
#line 810 "mercury_compile.m"
      }
#line 810 "mercury_compile.m"
  }
#line 799 "mercury_compile.m"
}

#line 724 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_build_9_p_0(
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__FileOrModule_10,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_13,
#line 724 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__5_5,
#line 724 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__6_14,
#line 724 "mercury_compile.m"
  MR_Tuple * top_level__mercury_compile__HeadVar__7_7)
#line 724 "mercury_compile.m"
{
#line 730 "mercury_compile.m"
  {
#line 730 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 730 "mercury_compile.m"
    {
#line 730 "mercury_compile.m"
      top_level__mercury_compile__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_97_114_103_95_98_117_105_108_100_95_95_91_52_44_32_54_93_95_48_9_p_0(top_level__mercury_compile__FileOrModule_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Globals_12, top_level__mercury_compile__HeadVar__5_5, top_level__mercury_compile__HeadVar__7_7);
#line 730 "mercury_compile.m"
      return;
    }
#line 730 "mercury_compile.m"
  }
#line 724 "mercury_compile.m"
}

#line 704 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_8_p_0_1(
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 704 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_4,
#line 704 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_5,
#line 704 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_6,
#line 704 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_7)
#line 704 "mercury_compile.m"
{
#line 704 "mercury_compile.m"
  {
#line 704 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 704 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv1_HeadVar__5_5;
#line 704 "mercury_compile.m"
    MR_Tuple top_level__mercury_compile__conv0_HeadVar__7_7;

#line 704 "mercury_compile.m"
    {
#line 704 "mercury_compile.m"
      top_level__mercury_compile__process_arg_build_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), ((MR_Word) top_level__mercury_compile__wrapper_arg_2), &top_level__mercury_compile__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile__wrapper_arg_4), &top_level__mercury_compile__conv0_HeadVar__7_7);
    }
#line 704 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile__conv1_HeadVar__5_5));
#line 704 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__7_7));
#line 704 "mercury_compile.m"
  }
#line 704 "mercury_compile.m"
}

#line 694 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_8_p_0(
#line 694 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 694 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 694 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 694 "mercury_compile.m"
  MR_String top_level__mercury_compile__Arg_12,
#line 694 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_13,
#line 694 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_14)
#line 694 "mercury_compile.m"
{
#line 699 "mercury_compile.m"
  {
#line 699 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 699 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileOrModule_16;
#line 699 "mercury_compile.m"
    MR_Word top_level__mercury_compile__InvokedByMake_17;
#line 784 "mercury_compile.m"
    MR_String top_level__mercury_compile__FileName_41;

#line 781 "mercury_compile.m"
    {
#line 781 "mercury_compile.m"
      top_level__mercury_compile__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile__Arg_12, (MR_String) ".m", &top_level__mercury_compile__FileName_41);
    }
#line 784 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 783 "mercury_compile.m"
      {
#line 783 "mercury_compile.m"
        top_level__mercury_compile__FileOrModule_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 783 "mercury_compile.m"
        MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_16, 0) = ((MR_Box) (top_level__mercury_compile__FileName_41));
#line 783 "mercury_compile.m"
      }
#line 784 "mercury_compile.m"
    else
#line 788 "mercury_compile.m"
      {
#line 788 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ModuleName_42;

#line 788 "mercury_compile.m"
        {
#line 788 "mercury_compile.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__Arg_12, &top_level__mercury_compile__ModuleName_42);
        }
#line 789 "mercury_compile.m"
        {
#line 789 "mercury_compile.m"
          top_level__mercury_compile__FileOrModule_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 789 "mercury_compile.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_16, 0) = ((MR_Box) (top_level__mercury_compile__ModuleName_42));
#line 789 "mercury_compile.m"
        }
#line 788 "mercury_compile.m"
      }
#line 701 "mercury_compile.m"
    {
#line 701 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 615, &top_level__mercury_compile__InvokedByMake_17);
    }
#line 717 "mercury_compile.m"
    if ((top_level__mercury_compile__InvokedByMake_17 == (MR_Integer) 0))
#line 703 "mercury_compile.m"
      {
#line 703 "mercury_compile.m"
        MR_Word top_level__mercury_compile__MaybeTuple_19;
#line 703 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_25_25;
#line 703 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_27_27;
#line 704 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_18_18;

#line 794 "mercury_compile.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_16)) == (MR_mktag((MR_Integer) 0))))
#line 794 "mercury_compile.m"
          {
#line 794 "mercury_compile.m"
            MR_String top_level__mercury_compile__FileName_44 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_16, (MR_Integer) 0)));

#line 796 "mercury_compile.m"
            {
#line 796 "mercury_compile.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FileName_44, &top_level__mercury_compile__V_25_25);
            }
#line 794 "mercury_compile.m"
          }
#line 794 "mercury_compile.m"
        else
#line 797 "mercury_compile.m"
          top_level__mercury_compile__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_16, (MR_Integer) 0)));
#line 704 "mercury_compile.m"
        {
#line 704 "mercury_compile.m"
          top_level__mercury_compile__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 704 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_27_27, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_7[0]));
#line 704 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_27_27, 1) = ((MR_Box) (top_level__mercury_compile__process_arg_8_p_0_1));
#line 704 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 704 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_27_27, 3) = ((MR_Box) (top_level__mercury_compile__FileOrModule_16));
#line 704 "mercury_compile.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_27_27, 4) = ((MR_Box) (top_level__mercury_compile__OptionArgs_11));
#line 704 "mercury_compile.m"
        }
#line 704 "mercury_compile.m"
        {
#line 704 "mercury_compile.m"
          make__util__build_with_module_options_args_11_p_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_scalar_common_2[0], top_level__mercury_compile__Globals_9, top_level__mercury_compile__V_25_25, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__V_27_27, &top_level__mercury_compile__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile__MaybeTuple_19);
        }
#line 712 "mercury_compile.m"
        if ((top_level__mercury_compile__MaybeTuple_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 713 "mercury_compile.m"
          {
#line 714 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "mercury_compile.m"
          }
#line 712 "mercury_compile.m"
        else
#line 710 "mercury_compile.m"
          {
#line 710 "mercury_compile.m"
            MR_Tuple top_level__mercury_compile__Tuple_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeTuple_19, (MR_Integer) 0)));

#line 711 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_20, (MR_Integer) 0)));
#line 711 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Tuple_20, (MR_Integer) 1)));
#line 710 "mercury_compile.m"
          }
#line 703 "mercury_compile.m"
      }
#line 717 "mercury_compile.m"
    else
#line 739 "mercury_compile.m"
      {
#line 739 "mercury_compile.m"
        MR_Word top_level__mercury_compile__GenerateDeps_55;

#line 740 "mercury_compile.m"
        {
#line 740 "mercury_compile.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 91, &top_level__mercury_compile__GenerateDeps_55);
        }
#line 752 "mercury_compile.m"
        if ((top_level__mercury_compile__GenerateDeps_55 == (MR_Integer) 0))
#line 753 "mercury_compile.m"
          {
#line 753 "mercury_compile.m"
            MR_Word top_level__mercury_compile__GenerateDepFile_58;

#line 754 "mercury_compile.m"
            {
#line 754 "mercury_compile.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 90, &top_level__mercury_compile__GenerateDepFile_58);
            }
#line 767 "mercury_compile.m"
            if ((top_level__mercury_compile__GenerateDepFile_58 == (MR_Integer) 0))
#line 769 "mercury_compile.m"
              {
#line 769 "mercury_compile.m"
                top_level__mercury_compile__process_module_7_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__FileOrModule_16, top_level__mercury_compile__ModulesToLink_13, top_level__mercury_compile__ExtraObjFiles_14);
#line 769 "mercury_compile.m"
                return;
              }
#line 767 "mercury_compile.m"
            else
#line 757 "mercury_compile.m"
              {
#line 758 "mercury_compile.m"
                *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "mercury_compile.m"
                *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_16)) == (MR_mktag((MR_Integer) 0))))
#line 761 "mercury_compile.m"
                  {
#line 761 "mercury_compile.m"
                    MR_String top_level__mercury_compile__FileName_66 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_16, (MR_Integer) 0)));

#line 762 "mercury_compile.m"
                    {
#line 762 "mercury_compile.m"
                      parse_tree__modules__generate_file_dependency_file_4_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__FileName_66);
#line 762 "mercury_compile.m"
                      return;
                    }
#line 761 "mercury_compile.m"
                  }
#line 763 "mercury_compile.m"
                else
#line 764 "mercury_compile.m"
                  {
#line 764 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_16, (MR_Integer) 0)));

#line 765 "mercury_compile.m"
                    {
#line 765 "mercury_compile.m"
                      parse_tree__modules__generate_module_dependency_file_4_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__ModuleName_67);
#line 765 "mercury_compile.m"
                      return;
                    }
#line 764 "mercury_compile.m"
                  }
#line 757 "mercury_compile.m"
              }
#line 753 "mercury_compile.m"
          }
#line 752 "mercury_compile.m"
        else
#line 742 "mercury_compile.m"
          {
#line 743 "mercury_compile.m"
            *top_level__mercury_compile__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 744 "mercury_compile.m"
            *top_level__mercury_compile__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "mercury_compile.m"
            if (((MR_tag((MR_Word) top_level__mercury_compile__FileOrModule_16)) == (MR_mktag((MR_Integer) 0))))
#line 746 "mercury_compile.m"
              {
#line 746 "mercury_compile.m"
                MR_String top_level__mercury_compile__FileName_56 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__FileOrModule_16, (MR_Integer) 0)));

#line 747 "mercury_compile.m"
                {
#line 747 "mercury_compile.m"
                  parse_tree__modules__generate_file_dependencies_4_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__FileName_56);
#line 747 "mercury_compile.m"
                  return;
                }
#line 746 "mercury_compile.m"
              }
#line 748 "mercury_compile.m"
            else
#line 749 "mercury_compile.m"
              {
#line 749 "mercury_compile.m"
                MR_Word top_level__mercury_compile__ModuleName_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileOrModule_16, (MR_Integer) 0)));

#line 750 "mercury_compile.m"
                {
#line 750 "mercury_compile.m"
                  parse_tree__modules__generate_module_dependencies_4_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__ModuleName_57);
#line 750 "mercury_compile.m"
                  return;
                }
#line 749 "mercury_compile.m"
              }
#line 742 "mercury_compile.m"
          }
#line 739 "mercury_compile.m"
      }
#line 699 "mercury_compile.m"
  }
#line 694 "mercury_compile.m"
}

#line 666 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_arg_list_10_p_0(
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_1,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_2,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_3,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__4_4,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_5,
#line 666 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_6,
#line 666 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_7,
#line 666 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_8)
#line 666 "mercury_compile.m"
{
#line 671 "mercury_compile.m"
  while (MR_TRUE)
#line 671 "mercury_compile.m"
    {
#line 671 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 671 "mercury_compile.m"
      {
#line 671 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 671 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "mercury_compile.m"
          {
#line 671 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_8 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_7;
#line 671 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_6 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_5;
#line 671 "mercury_compile.m"
          }
#line 671 "mercury_compile.m"
        else
#line 674 "mercury_compile.m"
          {
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__TypeCtorInfo_50_50;
#line 674 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_26 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__4_4, (MR_Integer) 0)));
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__4_4, (MR_Integer) 1)));
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgModules_31;
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__ArgExtraObjFiles_32;
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_43_43;
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_44_44;
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_45_45;
#line 674 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_46_46;

#line 675 "mercury_compile.m"
            {
#line 675 "mercury_compile.m"
              top_level__mercury_compile__process_arg_8_p_0(top_level__mercury_compile__Globals_1, top_level__mercury_compile__OptionVariables_2, top_level__mercury_compile__OptionArgs_3, top_level__mercury_compile__Arg_26, &top_level__mercury_compile__ArgModules_31, &top_level__mercury_compile__ArgExtraObjFiles_32);
            }
#line 680 "mercury_compile.m"
            if ((top_level__mercury_compile__Args_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "mercury_compile.m"
              {
#line 681 "mercury_compile.m"
              }
#line 680 "mercury_compile.m"
            else
#line 679 "mercury_compile.m"
              {
#line 679 "mercury_compile.m"
                mercury__gc__garbage_collect_2_p_0();
              }
#line 8415 "top_level.mercury_compile.c"
            top_level__mercury_compile__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 683 "mercury_compile.m"
            {
#line 683 "mercury_compile.m"
              top_level__mercury_compile__V_44_44 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_50_50, top_level__mercury_compile__ArgModules_31);
            }
#line 683 "mercury_compile.m"
            {
#line 683 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_43_43 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_50_50, top_level__mercury_compile__STATE_VARIABLE_Modules_0_5, top_level__mercury_compile__V_44_44);
            }
#line 684 "mercury_compile.m"
            {
#line 684 "mercury_compile.m"
              top_level__mercury_compile__V_46_46 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_50_50, top_level__mercury_compile__ArgExtraObjFiles_32);
            }
#line 684 "mercury_compile.m"
            {
#line 684 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_45_45 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_50_50, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_7, top_level__mercury_compile__V_46_46);
            }
#line 685 "mercury_compile.m"
            /* direct tailcall eliminated */
#line 685 "mercury_compile.m"
            {
#line 685 "mercury_compile.m"
              MR_Word top_level__mercury_compile__HeadVar__4__tmp_copy_4 = top_level__mercury_compile__Args_27;
#line 685 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_5 = top_level__mercury_compile__STATE_VARIABLE_Modules_43_43;
#line 685 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_7 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_45_45;

#line 685 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_7 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_7;
#line 685 "mercury_compile.m"
              top_level__mercury_compile__STATE_VARIABLE_Modules_0_5 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_5;
#line 685 "mercury_compile.m"
              top_level__mercury_compile__HeadVar__4_4 = top_level__mercury_compile__HeadVar__4__tmp_copy_4;
#line 685 "mercury_compile.m"
            }
#line 685 "mercury_compile.m"
            continue;
#line 674 "mercury_compile.m"
          }
#line 671 "mercury_compile.m"
      }
#line 671 "mercury_compile.m"
      break;
#line 671 "mercury_compile.m"
    }
#line 666 "mercury_compile.m"
}

#line 633 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_stdin_arg_list_9_p_0(
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_10,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_11,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_12,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0_23,
#line 633 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_Modules_24,
#line 633 "mercury_compile.m"
  MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_25,
#line 633 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_26)
#line 633 "mercury_compile.m"
{
#line 640 "mercury_compile.m"
  while (MR_TRUE)
#line 640 "mercury_compile.m"
    {
#line 640 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 640 "mercury_compile.m"
      {
#line 640 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;
#line 640 "mercury_compile.m"
        MR_Word top_level__mercury_compile__FileResult_16;

#line 641 "mercury_compile.m"
        {
#line 641 "mercury_compile.m"
          top_level__mercury_compile__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__STATE_VARIABLE_Modules_0_23);
        }
#line 643 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 641 "mercury_compile.m"
          {
#line 641 "mercury_compile.m"
          }
#line 643 "mercury_compile.m"
        else
#line 644 "mercury_compile.m"
          {
#line 644 "mercury_compile.m"
            mercury__gc__garbage_collect_2_p_0();
          }
#line 646 "mercury_compile.m"
        {
#line 646 "mercury_compile.m"
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile__FileResult_16);
        }
#line 656 "mercury_compile.m"
        if ((top_level__mercury_compile__FileResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "mercury_compile.m"
          {
#line 657 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_Modules_24 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_23;
#line 657 "mercury_compile.m"
            *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_26 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_25;
#line 657 "mercury_compile.m"
          }
#line 656 "mercury_compile.m"
        else
#line 656 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__FileResult_16)) == (MR_mktag((MR_Integer) 2))))
#line 659 "mercury_compile.m"
            {
#line 659 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__FileResult_16, (MR_Integer) 0)));
#line 659 "mercury_compile.m"
              MR_String top_level__mercury_compile__Msg_22;

#line 660 "mercury_compile.m"
              {
#line 660 "mercury_compile.m"
                mercury__io__error_message_2_p_0(top_level__mercury_compile__Error_21, &top_level__mercury_compile__Msg_22);
              }
#line 661 "mercury_compile.m"
              {
#line 661 "mercury_compile.m"
                mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
              }
#line 662 "mercury_compile.m"
              {
#line 662 "mercury_compile.m"
                mercury__io__write_string_3_p_0(top_level__mercury_compile__Msg_22);
              }
#line 663 "mercury_compile.m"
              {
#line 663 "mercury_compile.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 663 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_Modules_24 = top_level__mercury_compile__STATE_VARIABLE_Modules_0_23;
#line 663 "mercury_compile.m"
              *top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_26 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_25;
#line 659 "mercury_compile.m"
            }
#line 656 "mercury_compile.m"
          else
#line 648 "mercury_compile.m"
            {
#line 648 "mercury_compile.m"
              MR_Word top_level__mercury_compile__TypeCtorInfo_45_45;
#line 648 "mercury_compile.m"
              MR_String top_level__mercury_compile__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__FileResult_16, (MR_Integer) 0)));
#line 648 "mercury_compile.m"
              MR_String top_level__mercury_compile__Arg_18;
#line 648 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgModules_19;
#line 648 "mercury_compile.m"
              MR_Word top_level__mercury_compile__ArgExtraObjFiles_20;
#line 648 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_37_37;
#line 648 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_38_38;
#line 648 "mercury_compile.m"
              MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_39_39;
#line 648 "mercury_compile.m"
              MR_Word top_level__mercury_compile__V_40_40;

#line 649 "mercury_compile.m"
              {
#line 649 "mercury_compile.m"
                top_level__mercury_compile__Arg_18 = mercury__string__rstrip_1_f_0(top_level__mercury_compile__Line_17);
              }
#line 650 "mercury_compile.m"
              {
#line 650 "mercury_compile.m"
                top_level__mercury_compile__process_arg_8_p_0(top_level__mercury_compile__Globals_10, top_level__mercury_compile__OptionVariables_11, top_level__mercury_compile__OptionArgs_12, top_level__mercury_compile__Arg_18, &top_level__mercury_compile__ArgModules_19, &top_level__mercury_compile__ArgExtraObjFiles_20);
              }
#line 8604 "top_level.mercury_compile.c"
              top_level__mercury_compile__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 652 "mercury_compile.m"
              {
#line 652 "mercury_compile.m"
                top_level__mercury_compile__V_38_38 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_45_45, top_level__mercury_compile__ArgModules_19);
              }
#line 652 "mercury_compile.m"
              {
#line 652 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_37_37 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_45_45, top_level__mercury_compile__STATE_VARIABLE_Modules_0_23, top_level__mercury_compile__V_38_38);
              }
#line 653 "mercury_compile.m"
              {
#line 653 "mercury_compile.m"
                top_level__mercury_compile__V_40_40 = mercury__cord__from_list_1_f_0(top_level__mercury_compile__TypeCtorInfo_45_45, top_level__mercury_compile__ArgExtraObjFiles_20);
              }
#line 653 "mercury_compile.m"
              {
#line 653 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_39_39 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile__TypeCtorInfo_45_45, top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_25, top_level__mercury_compile__V_40_40);
              }
#line 654 "mercury_compile.m"
              /* direct tailcall eliminated */
#line 654 "mercury_compile.m"
              {
#line 654 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_23 = top_level__mercury_compile__STATE_VARIABLE_Modules_37_37;
#line 654 "mercury_compile.m"
                MR_Word top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_25 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_39_39;

#line 654 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0_25 = top_level__mercury_compile__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_25;
#line 654 "mercury_compile.m"
                top_level__mercury_compile__STATE_VARIABLE_Modules_0_23 = top_level__mercury_compile__STATE_VARIABLE_Modules_0__tmp_copy_23;
#line 654 "mercury_compile.m"
              }
#line 654 "mercury_compile.m"
              continue;
#line 648 "mercury_compile.m"
            }
#line 640 "mercury_compile.m"
      }
#line 640 "mercury_compile.m"
      break;
#line 640 "mercury_compile.m"
    }
#line 633 "mercury_compile.m"
}

#line 528 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__process_all_args_8_p_0(
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_9,
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_10,
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_11,
#line 528 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_12,
#line 528 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ModulesToLink_13,
#line 528 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__ExtraObjFiles_14)
#line 528 "mercury_compile.m"
{
#line 618 "mercury_compile.m"
  {
#line 618 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 618 "mercury_compile.m"
    MR_Word top_level__mercury_compile__TypeCtorInfo_30_40;
#line 618 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_28;
#line 618 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ModulesToLinkCord_29;
#line 618 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ExtraObjFilesCord_30;

#line 619 "mercury_compile.m"
    {
#line 619 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_9, (MR_Integer) 645, &top_level__mercury_compile__FileNamesFromStdin_28);
    }
#line 625 "mercury_compile.m"
    if ((top_level__mercury_compile__FileNamesFromStdin_28 == (MR_Integer) 0))
#line 626 "mercury_compile.m"
      {
#line 626 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_29_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 626 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_32_32;
#line 626 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_33_33;

#line 627 "mercury_compile.m"
        {
#line 627 "mercury_compile.m"
          top_level__mercury_compile__V_32_32 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_29_39);
        }
#line 627 "mercury_compile.m"
        {
#line 627 "mercury_compile.m"
          top_level__mercury_compile__V_33_33 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_29_39);
        }
#line 627 "mercury_compile.m"
        {
#line 627 "mercury_compile.m"
          top_level__mercury_compile__process_arg_list_10_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__Args_12, top_level__mercury_compile__V_32_32, &top_level__mercury_compile__ModulesToLinkCord_29, top_level__mercury_compile__V_33_33, &top_level__mercury_compile__ExtraObjFilesCord_30);
        }
#line 626 "mercury_compile.m"
      }
#line 625 "mercury_compile.m"
    else
#line 622 "mercury_compile.m"
      {
#line 622 "mercury_compile.m"
        MR_Word top_level__mercury_compile__TypeCtorInfo_28_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 622 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_35_35;
#line 622 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_36_36;

#line 623 "mercury_compile.m"
        {
#line 623 "mercury_compile.m"
          top_level__mercury_compile__V_35_35 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_28_38);
        }
#line 623 "mercury_compile.m"
        {
#line 623 "mercury_compile.m"
          top_level__mercury_compile__V_36_36 = mercury__cord__empty_0_f_0(top_level__mercury_compile__TypeCtorInfo_28_38);
        }
#line 623 "mercury_compile.m"
        {
#line 623 "mercury_compile.m"
          top_level__mercury_compile__process_stdin_arg_list_9_p_0(top_level__mercury_compile__Globals_9, top_level__mercury_compile__OptionVariables_10, top_level__mercury_compile__OptionArgs_11, top_level__mercury_compile__V_35_35, &top_level__mercury_compile__ModulesToLinkCord_29, top_level__mercury_compile__V_36_36, &top_level__mercury_compile__ExtraObjFilesCord_30);
        }
#line 622 "mercury_compile.m"
      }
#line 8745 "top_level.mercury_compile.c"
    top_level__mercury_compile__TypeCtorInfo_30_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 630 "mercury_compile.m"
    {
#line 630 "mercury_compile.m"
      *top_level__mercury_compile__ModulesToLink_13 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_30_40, top_level__mercury_compile__ModulesToLinkCord_29);
    }
#line 631 "mercury_compile.m"
    {
#line 631 "mercury_compile.m"
      *top_level__mercury_compile__ExtraObjFiles_14 = mercury__cord__list_1_f_0(top_level__mercury_compile__TypeCtorInfo_30_40, top_level__mercury_compile__ExtraObjFilesCord_30);
    }
#line 618 "mercury_compile.m"
  }
#line 528 "mercury_compile.m"
}

#line 512 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__maybe_report_cmd_line_5_p_0(
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Report_6,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_7,
#line 512 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_8)
#line 512 "mercury_compile.m"
{
#line 517 "mercury_compile.m"
  {
#line 517 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;

#line 517 "mercury_compile.m"
    if ((top_level__mercury_compile__Report_6 == (MR_Integer) 0))
#line 517 "mercury_compile.m"
      {
#line 517 "mercury_compile.m"
      }
#line 517 "mercury_compile.m"
    else
#line 519 "mercury_compile.m"
      {
#line 519 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_19_19;
#line 519 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_21_21;
#line 519 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_29_29;
#line 519 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_31_31;

#line 8797 "top_level.mercury_compile.c"
        {
#line 8799 "top_level.mercury_compile.c"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
        }
#line 521 "mercury_compile.m"
        {
#line 521 "mercury_compile.m"
          top_level__mercury_compile__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__OptionArgs_7, top_level__mercury_compile__Args_8);
        }
#line 521 "mercury_compile.m"
        {
#line 521 "mercury_compile.m"
          top_level__mercury_compile__V_19_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", top_level__mercury_compile__V_21_21);
        }
#line 8812 "top_level.mercury_compile.c"
        {
#line 8814 "top_level.mercury_compile.c"
          top_level__mercury_compile__V_29_29 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__V_19_19, (MR_String) "\n");
        }
#line 8817 "top_level.mercury_compile.c"
        {
#line 8819 "top_level.mercury_compile.c"
          top_level__mercury_compile__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "% ", top_level__mercury_compile__V_29_29);
        }
#line 8822 "top_level.mercury_compile.c"
        {
#line 8824 "top_level.mercury_compile.c"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_31_31);
        }
#line 8827 "top_level.mercury_compile.c"
        {
#line 8829 "top_level.mercury_compile.c"
          mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
#line 8831 "top_level.mercury_compile.c"
          return;
        }
#line 519 "mercury_compile.m"
      }
#line 517 "mercury_compile.m"
  }
#line 512 "mercury_compile.m"
}

#line 473 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0_2(
#line 473 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 473 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 473 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_2,
#line 473 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_3,
#line 473 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_4)
#line 473 "mercury_compile.m"
{
#line 473 "mercury_compile.m"
  {
#line 473 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;
#line 473 "mercury_compile.m"
    MR_Word top_level__mercury_compile__conv0_HeadVar__4_4;

#line 473 "mercury_compile.m"
    {
#line 473 "mercury_compile.m"
      backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile__wrapper_arg_1), &top_level__mercury_compile__conv0_HeadVar__4_4);
    }
#line 473 "mercury_compile.m"
    *top_level__mercury_compile__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile__conv0_HeadVar__4_4));
#line 473 "mercury_compile.m"
  }
#line 473 "mercury_compile.m"
}

#line 393 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0_1(
#line 393 "mercury_compile.m"
  MR_Box top_level__mercury_compile__closure_arg,
#line 393 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_1,
#line 393 "mercury_compile.m"
  MR_Box top_level__mercury_compile__wrapper_arg_2,
#line 393 "mercury_compile.m"
  MR_Box * top_level__mercury_compile__wrapper_arg_3)
#line 393 "mercury_compile.m"
{
#line 393 "mercury_compile.m"
  {
#line 393 "mercury_compile.m"
    MR_Box top_level__mercury_compile__closure = top_level__mercury_compile__closure_arg;

#line 393 "mercury_compile.m"
    {
#line 393 "mercury_compile.m"
      mercury__io__write_string_3_p_0(((MR_String) top_level__mercury_compile__wrapper_arg_1));
#line 393 "mercury_compile.m"
      return;
    }
#line 393 "mercury_compile.m"
  }
#line 393 "mercury_compile.m"
}

#line 325 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__main_after_setup_7_p_0(
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionVariables_8,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__OptionArgs_9,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Args_10,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Link_11,
#line 325 "mercury_compile.m"
  MR_Word top_level__mercury_compile__Globals_12)
#line 325 "mercury_compile.m"
{
#line 328 "mercury_compile.m"
  {
#line 328 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Version_14;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Help_15;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateMapping_16;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGrade_17;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLinkCommand_18;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputShLibLinkCommand_19;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__FileNamesFromStdin_20;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibGrades_21;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCC_22;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCCType_23;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCFlags_24;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCSCType_25;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputLibraryLinkFlags_26;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputGradeDefines_27;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__OutputCInclDirFlags_28;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Make_29;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__GenerateStandaloneInt_30;
#line 328 "mercury_compile.m"
    MR_Word top_level__mercury_compile__ReportCmdLineArgs_31;

#line 329 "mercury_compile.m"
    {
#line 329 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 649, &top_level__mercury_compile__Version_14);
    }
#line 330 "mercury_compile.m"
    {
#line 330 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 648, &top_level__mercury_compile__Help_15);
    }
#line 331 "mercury_compile.m"
    {
#line 331 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 89, &top_level__mercury_compile__GenerateMapping_16);
    }
#line 333 "mercury_compile.m"
    {
#line 333 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 100, &top_level__mercury_compile__OutputGrade_17);
    }
#line 335 "mercury_compile.m"
    {
#line 335 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 101, &top_level__mercury_compile__OutputLinkCommand_18);
    }
#line 337 "mercury_compile.m"
    {
#line 337 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 102, &top_level__mercury_compile__OutputShLibLinkCommand_19);
    }
#line 339 "mercury_compile.m"
    {
#line 339 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 645, &top_level__mercury_compile__FileNamesFromStdin_20);
    }
#line 341 "mercury_compile.m"
    {
#line 341 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 103, &top_level__mercury_compile__OutputLibGrades_21);
    }
#line 343 "mercury_compile.m"
    {
#line 343 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 104, &top_level__mercury_compile__OutputCC_22);
    }
#line 344 "mercury_compile.m"
    {
#line 344 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 105, &top_level__mercury_compile__OutputCCType_23);
    }
#line 345 "mercury_compile.m"
    {
#line 345 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 107, &top_level__mercury_compile__OutputCFlags_24);
    }
#line 346 "mercury_compile.m"
    {
#line 346 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 106, &top_level__mercury_compile__OutputCSCType_25);
    }
#line 348 "mercury_compile.m"
    {
#line 348 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 108, &top_level__mercury_compile__OutputLibraryLinkFlags_26);
    }
#line 350 "mercury_compile.m"
    {
#line 350 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 109, &top_level__mercury_compile__OutputGradeDefines_27);
    }
#line 352 "mercury_compile.m"
    {
#line 352 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 110, &top_level__mercury_compile__OutputCInclDirFlags_28);
    }
#line 354 "mercury_compile.m"
    {
#line 354 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 610, &top_level__mercury_compile__Make_29);
    }
#line 355 "mercury_compile.m"
    {
#line 355 "mercury_compile.m"
      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 93, &top_level__mercury_compile__GenerateStandaloneInt_30);
    }
#line 357 "mercury_compile.m"
    {
#line 357 "mercury_compile.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 52, &top_level__mercury_compile__ReportCmdLineArgs_31);
    }
#line 359 "mercury_compile.m"
    {
#line 359 "mercury_compile.m"
      top_level__mercury_compile__maybe_report_cmd_line_5_p_0(top_level__mercury_compile__ReportCmdLineArgs_31, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__Args_10);
    }
#line 360 "mercury_compile.m"
    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Version_14 == (MR_Integer) 1);
#line 365 "mercury_compile.m"
    if (top_level__mercury_compile__succeeded)
#line 361 "mercury_compile.m"
      {
#line 361 "mercury_compile.m"
        MR_Word top_level__mercury_compile__Stdout_32;
#line 361 "mercury_compile.m"
        MR_Word top_level__mercury_compile__OldOutputStream_33;
#line 364 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_34_34;

#line 361 "mercury_compile.m"
        {
#line 361 "mercury_compile.m"
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_32);
        }
#line 362 "mercury_compile.m"
        {
#line 362 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_32, &top_level__mercury_compile__OldOutputStream_33);
        }
#line 363 "mercury_compile.m"
        {
#line 363 "mercury_compile.m"
          libs__handle_options__display_compiler_version_2_p_0();
        }
#line 364 "mercury_compile.m"
        {
#line 364 "mercury_compile.m"
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_33, &top_level__mercury_compile__V_34_34);
        }
#line 361 "mercury_compile.m"
      }
#line 365 "mercury_compile.m"
    else
#line 370 "mercury_compile.m"
      {
#line 365 "mercury_compile.m"
        top_level__mercury_compile__succeeded = (top_level__mercury_compile__Help_15 == (MR_Integer) 1);
#line 370 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 366 "mercury_compile.m"
          {
#line 366 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Stdout_164;
#line 366 "mercury_compile.m"
            MR_Word top_level__mercury_compile__OldOutputStream_165;
#line 369 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_35_35;

#line 366 "mercury_compile.m"
            {
#line 366 "mercury_compile.m"
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_164);
            }
#line 367 "mercury_compile.m"
            {
#line 367 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__Stdout_164, &top_level__mercury_compile__OldOutputStream_165);
            }
#line 368 "mercury_compile.m"
            {
#line 368 "mercury_compile.m"
              libs__handle_options__long_usage_2_p_0();
            }
#line 369 "mercury_compile.m"
            {
#line 369 "mercury_compile.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__OldOutputStream_165, &top_level__mercury_compile__V_35_35);
            }
#line 366 "mercury_compile.m"
          }
#line 370 "mercury_compile.m"
        else
#line 378 "mercury_compile.m"
          {
#line 370 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputGrade_17 == (MR_Integer) 1);
#line 378 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 374 "mercury_compile.m"
              {
#line 374 "mercury_compile.m"
                MR_String top_level__mercury_compile__Grade_36;
#line 374 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Stdout_166;

#line 374 "mercury_compile.m"
                {
#line 374 "mercury_compile.m"
                  libs__handle_options__grade_directory_component_2_p_0(top_level__mercury_compile__Globals_12, &top_level__mercury_compile__Grade_36);
                }
#line 375 "mercury_compile.m"
                {
#line 375 "mercury_compile.m"
                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_166);
                }
#line 376 "mercury_compile.m"
                {
#line 376 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_166, top_level__mercury_compile__Grade_36);
                }
#line 377 "mercury_compile.m"
                {
#line 377 "mercury_compile.m"
                  mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_166, (MR_String) "\n");
#line 377 "mercury_compile.m"
                  return;
                }
#line 374 "mercury_compile.m"
              }
#line 378 "mercury_compile.m"
            else
#line 384 "mercury_compile.m"
              {
#line 378 "mercury_compile.m"
                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLinkCommand_18 == (MR_Integer) 1);
#line 384 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 380 "mercury_compile.m"
                  {
#line 380 "mercury_compile.m"
                    MR_String top_level__mercury_compile__LinkCommand_37;
#line 380 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Stdout_167;

#line 379 "mercury_compile.m"
                    {
#line 379 "mercury_compile.m"
                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 568, &top_level__mercury_compile__LinkCommand_37);
                    }
#line 381 "mercury_compile.m"
                    {
#line 381 "mercury_compile.m"
                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_167);
                    }
#line 382 "mercury_compile.m"
                    {
#line 382 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_167, top_level__mercury_compile__LinkCommand_37);
                    }
#line 383 "mercury_compile.m"
                    {
#line 383 "mercury_compile.m"
                      mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_167, (MR_String) "\n");
#line 383 "mercury_compile.m"
                      return;
                    }
#line 380 "mercury_compile.m"
                  }
#line 384 "mercury_compile.m"
                else
#line 390 "mercury_compile.m"
                  {
#line 384 "mercury_compile.m"
                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputShLibLinkCommand_19 == (MR_Integer) 1);
#line 390 "mercury_compile.m"
                    if (top_level__mercury_compile__succeeded)
#line 386 "mercury_compile.m"
                      {
#line 386 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__Stdout_168;
#line 386 "mercury_compile.m"
                        MR_String top_level__mercury_compile__LinkCommand_169;

#line 385 "mercury_compile.m"
                        {
#line 385 "mercury_compile.m"
                          libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 569, &top_level__mercury_compile__LinkCommand_169);
                        }
#line 387 "mercury_compile.m"
                        {
#line 387 "mercury_compile.m"
                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_168);
                        }
#line 388 "mercury_compile.m"
                        {
#line 388 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_168, top_level__mercury_compile__LinkCommand_169);
                        }
#line 389 "mercury_compile.m"
                        {
#line 389 "mercury_compile.m"
                          mercury__io__write_string_4_p_0(top_level__mercury_compile__Stdout_168, (MR_String) "\n");
#line 389 "mercury_compile.m"
                          return;
                        }
#line 386 "mercury_compile.m"
                      }
#line 390 "mercury_compile.m"
                    else
#line 394 "mercury_compile.m"
                      {
#line 390 "mercury_compile.m"
                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLibGrades_21 == (MR_Integer) 1);
#line 394 "mercury_compile.m"
                        if (top_level__mercury_compile__succeeded)
#line 391 "mercury_compile.m"
                          {
#line 391 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__LibGrades_38;
#line 391 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__Stdout_170;

#line 391 "mercury_compile.m"
                            {
#line 391 "mercury_compile.m"
                              libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 624, &top_level__mercury_compile__LibGrades_38);
                            }
#line 392 "mercury_compile.m"
                            {
#line 392 "mercury_compile.m"
                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__Stdout_170);
                            }
#line 393 "mercury_compile.m"
                            {
#line 393 "mercury_compile.m"
                              mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__Stdout_170, top_level__mercury_compile__LibGrades_38, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_scalar_common_3[2]);
#line 393 "mercury_compile.m"
                              return;
                            }
#line 391 "mercury_compile.m"
                          }
#line 394 "mercury_compile.m"
                        else
#line 398 "mercury_compile.m"
                          {
#line 394 "mercury_compile.m"
                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCC_22 == (MR_Integer) 1);
#line 398 "mercury_compile.m"
                            if (top_level__mercury_compile__succeeded)
#line 395 "mercury_compile.m"
                              {
#line 395 "mercury_compile.m"
                                MR_String top_level__mercury_compile__CC_39;
#line 395 "mercury_compile.m"
                                MR_Word top_level__mercury_compile__StdOut_40;
#line 395 "mercury_compile.m"
                                MR_String top_level__mercury_compile__V_106_106;

#line 395 "mercury_compile.m"
                                {
#line 395 "mercury_compile.m"
                                  libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 481, &top_level__mercury_compile__CC_39);
                                }
#line 396 "mercury_compile.m"
                                {
#line 396 "mercury_compile.m"
                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_40);
                                }
#line 397 "mercury_compile.m"
                                {
#line 397 "mercury_compile.m"
                                  top_level__mercury_compile__V_106_106 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_39, (MR_String) "\n");
                                }
#line 397 "mercury_compile.m"
                                {
#line 397 "mercury_compile.m"
                                  mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_40, top_level__mercury_compile__V_106_106);
#line 397 "mercury_compile.m"
                                  return;
                                }
#line 395 "mercury_compile.m"
                              }
#line 398 "mercury_compile.m"
                            else
#line 402 "mercury_compile.m"
                              {
#line 398 "mercury_compile.m"
                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCCType_23 == (MR_Integer) 1);
#line 402 "mercury_compile.m"
                                if (top_level__mercury_compile__succeeded)
#line 399 "mercury_compile.m"
                                  {
#line 399 "mercury_compile.m"
                                    MR_String top_level__mercury_compile__CC_Type_41;
#line 399 "mercury_compile.m"
                                    MR_String top_level__mercury_compile__V_111_111;
#line 399 "mercury_compile.m"
                                    MR_Word top_level__mercury_compile__StdOut_171;

#line 399 "mercury_compile.m"
                                    {
#line 399 "mercury_compile.m"
                                      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 506, &top_level__mercury_compile__CC_Type_41);
                                    }
#line 400 "mercury_compile.m"
                                    {
#line 400 "mercury_compile.m"
                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_171);
                                    }
#line 401 "mercury_compile.m"
                                    {
#line 401 "mercury_compile.m"
                                      top_level__mercury_compile__V_111_111 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CC_Type_41, (MR_String) "\n");
                                    }
#line 401 "mercury_compile.m"
                                    {
#line 401 "mercury_compile.m"
                                      mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_171, top_level__mercury_compile__V_111_111);
#line 401 "mercury_compile.m"
                                      return;
                                    }
#line 399 "mercury_compile.m"
                                  }
#line 402 "mercury_compile.m"
                                else
#line 405 "mercury_compile.m"
                                  {
#line 402 "mercury_compile.m"
                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCFlags_24 == (MR_Integer) 1);
#line 405 "mercury_compile.m"
                                    if (top_level__mercury_compile__succeeded)
#line 403 "mercury_compile.m"
                                      {
#line 403 "mercury_compile.m"
                                        MR_Word top_level__mercury_compile__StdOut_172;

#line 403 "mercury_compile.m"
                                        {
#line 403 "mercury_compile.m"
                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_172);
                                        }
#line 404 "mercury_compile.m"
                                        {
#line 404 "mercury_compile.m"
                                          backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__StdOut_172);
#line 404 "mercury_compile.m"
                                          return;
                                        }
#line 403 "mercury_compile.m"
                                      }
#line 405 "mercury_compile.m"
                                    else
#line 409 "mercury_compile.m"
                                      {
#line 405 "mercury_compile.m"
                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCSCType_25 == (MR_Integer) 1);
#line 409 "mercury_compile.m"
                                        if (top_level__mercury_compile__succeeded)
#line 406 "mercury_compile.m"
                                          {
#line 406 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__CSC_Type_42;
#line 406 "mercury_compile.m"
                                            MR_String top_level__mercury_compile__V_118_118;
#line 406 "mercury_compile.m"
                                            MR_Word top_level__mercury_compile__StdOut_173;

#line 406 "mercury_compile.m"
                                            {
#line 406 "mercury_compile.m"
                                              libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 507, &top_level__mercury_compile__CSC_Type_42);
                                            }
#line 407 "mercury_compile.m"
                                            {
#line 407 "mercury_compile.m"
                                              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_173);
                                            }
#line 408 "mercury_compile.m"
                                            {
#line 408 "mercury_compile.m"
                                              top_level__mercury_compile__V_118_118 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__CSC_Type_42, (MR_String) "\n");
                                            }
#line 408 "mercury_compile.m"
                                            {
#line 408 "mercury_compile.m"
                                              mercury__io__write_string_4_p_0(top_level__mercury_compile__StdOut_173, top_level__mercury_compile__V_118_118);
#line 408 "mercury_compile.m"
                                              return;
                                            }
#line 406 "mercury_compile.m"
                                          }
#line 409 "mercury_compile.m"
                                        else
#line 412 "mercury_compile.m"
                                          {
#line 409 "mercury_compile.m"
                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputLibraryLinkFlags_26 == (MR_Integer) 1);
#line 412 "mercury_compile.m"
                                            if (top_level__mercury_compile__succeeded)
#line 410 "mercury_compile.m"
                                              {
#line 410 "mercury_compile.m"
                                                MR_Word top_level__mercury_compile__StdOut_174;

#line 410 "mercury_compile.m"
                                                {
#line 410 "mercury_compile.m"
                                                  mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_174);
                                                }
#line 411 "mercury_compile.m"
                                                {
#line 411 "mercury_compile.m"
                                                  backend_libs__compile_target_code__output_library_link_flags_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__StdOut_174);
#line 411 "mercury_compile.m"
                                                  return;
                                                }
#line 410 "mercury_compile.m"
                                              }
#line 412 "mercury_compile.m"
                                            else
#line 415 "mercury_compile.m"
                                              {
#line 412 "mercury_compile.m"
                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputGradeDefines_27 == (MR_Integer) 1);
#line 415 "mercury_compile.m"
                                                if (top_level__mercury_compile__succeeded)
#line 413 "mercury_compile.m"
                                                  {
#line 413 "mercury_compile.m"
                                                    MR_Word top_level__mercury_compile__StdOut_175;

#line 413 "mercury_compile.m"
                                                    {
#line 413 "mercury_compile.m"
                                                      mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_175);
                                                    }
#line 414 "mercury_compile.m"
                                                    {
#line 414 "mercury_compile.m"
                                                      backend_libs__compile_target_code__output_grade_defines_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__StdOut_175);
#line 414 "mercury_compile.m"
                                                      return;
                                                    }
#line 413 "mercury_compile.m"
                                                  }
#line 415 "mercury_compile.m"
                                                else
#line 418 "mercury_compile.m"
                                                  {
#line 415 "mercury_compile.m"
                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__OutputCInclDirFlags_28 == (MR_Integer) 1);
#line 418 "mercury_compile.m"
                                                    if (top_level__mercury_compile__succeeded)
#line 416 "mercury_compile.m"
                                                      {
#line 416 "mercury_compile.m"
                                                        MR_Word top_level__mercury_compile__StdOut_176;

#line 416 "mercury_compile.m"
                                                        {
#line 416 "mercury_compile.m"
                                                          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile__StdOut_176);
                                                        }
#line 417 "mercury_compile.m"
                                                        {
#line 417 "mercury_compile.m"
                                                          backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__StdOut_176);
#line 417 "mercury_compile.m"
                                                          return;
                                                        }
#line 416 "mercury_compile.m"
                                                      }
#line 418 "mercury_compile.m"
                                                    else
#line 420 "mercury_compile.m"
                                                      {
#line 418 "mercury_compile.m"
                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__GenerateMapping_16 == (MR_Integer) 1);
#line 420 "mercury_compile.m"
                                                        if (top_level__mercury_compile__succeeded)
#line 419 "mercury_compile.m"
                                                          {
#line 419 "mercury_compile.m"
                                                            parse_tree__source_file_map__write_source_file_map_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__Args_10);
#line 419 "mercury_compile.m"
                                                            return;
                                                          }
#line 420 "mercury_compile.m"
                                                        else
#line 443 "mercury_compile.m"
                                                          {
#line 443 "mercury_compile.m"
                                                            MR_String top_level__mercury_compile__StandaloneIntBasename_43;

#line 420 "mercury_compile.m"
                                                            top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__GenerateStandaloneInt_30)) == (MR_mktag((MR_Integer) 1)));
#line 420 "mercury_compile.m"
                                                            if (top_level__mercury_compile__succeeded)
#line 420 "mercury_compile.m"
                                                              {
#line 420 "mercury_compile.m"
                                                                top_level__mercury_compile__StandaloneIntBasename_43 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__GenerateStandaloneInt_30, (MR_Integer) 0)));
#line 421 "mercury_compile.m"
                                                                {
#line 421 "mercury_compile.m"
                                                                  MR_Word top_level__mercury_compile__Target_44;

#line 421 "mercury_compile.m"
                                                                  {
#line 421 "mercury_compile.m"
                                                                    libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_12, &top_level__mercury_compile__Target_44);
                                                                  }
#line 437 "mercury_compile.m"
                                                                  if ((((top_level__mercury_compile__Target_44 == (MR_Integer) 0)) || ((top_level__mercury_compile__Target_44 == (MR_Integer) 4))))
#line 441 "mercury_compile.m"
                                                                    {
#line 441 "mercury_compile.m"
                                                                      backend_libs__compile_target_code__make_standalone_interface_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__StandaloneIntBasename_43);
#line 441 "mercury_compile.m"
                                                                      return;
                                                                    }
#line 437 "mercury_compile.m"
                                                                  else
#line 427 "mercury_compile.m"
                                                                    {
#line 427 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__NYIMsg_45;
#line 427 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_131_131;
#line 427 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_134_134;
#line 427 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_137_137;
#line 427 "mercury_compile.m"
                                                                      MR_Word top_level__mercury_compile__V_138_138;
#line 427 "mercury_compile.m"
                                                                      MR_String top_level__mercury_compile__V_139_139;

#line 432 "mercury_compile.m"
                                                                      {
#line 432 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_139_139 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile__Target_44);
                                                                      }
#line 432 "mercury_compile.m"
                                                                      {
#line 432 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 432 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(3), top_level__mercury_compile__V_138_138, 1) = ((MR_Box) (top_level__mercury_compile__V_139_139));
#line 432 "mercury_compile.m"
                                                                      }
#line 431 "mercury_compile.m"
                                                                      {
#line 431 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_137_137, 0) = ((MR_Box) (top_level__mercury_compile__V_138_138));
#line 431 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_scalar_common_1[20])));
#line 431 "mercury_compile.m"
                                                                      }
#line 430 "mercury_compile.m"
                                                                      {
#line 430 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_134_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[18])));
#line 430 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_134_134, 1) = ((MR_Box) (top_level__mercury_compile__V_137_137));
#line 430 "mercury_compile.m"
                                                                      }
#line 429 "mercury_compile.m"
                                                                      {
#line 429 "mercury_compile.m"
                                                                        top_level__mercury_compile__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_scalar_common_5[1])));
#line 429 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_131_131, 1) = ((MR_Box) (top_level__mercury_compile__V_134_134));
#line 429 "mercury_compile.m"
                                                                      }
#line 428 "mercury_compile.m"
                                                                      {
#line 428 "mercury_compile.m"
                                                                        top_level__mercury_compile__NYIMsg_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_scalar_common_1[17])));
#line 428 "mercury_compile.m"
                                                                        MR_hl_field(MR_mktag(1), top_level__mercury_compile__NYIMsg_45, 1) = ((MR_Box) (top_level__mercury_compile__V_131_131));
#line 428 "mercury_compile.m"
                                                                      }
#line 435 "mercury_compile.m"
                                                                      {
#line 435 "mercury_compile.m"
                                                                        parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__NYIMsg_45);
                                                                      }
#line 436 "mercury_compile.m"
                                                                      {
#line 436 "mercury_compile.m"
                                                                        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 436 "mercury_compile.m"
                                                                        return;
                                                                      }
#line 427 "mercury_compile.m"
                                                                    }
#line 421 "mercury_compile.m"
                                                                }
#line 420 "mercury_compile.m"
                                                              }
#line 420 "mercury_compile.m"
                                                            else
#line 445 "mercury_compile.m"
                                                              {
#line 443 "mercury_compile.m"
                                                                top_level__mercury_compile__succeeded = (top_level__mercury_compile__Make_29 == (MR_Integer) 1);
#line 445 "mercury_compile.m"
                                                                if (top_level__mercury_compile__succeeded)
#line 444 "mercury_compile.m"
                                                                  {
#line 444 "mercury_compile.m"
                                                                    make__make_process_args_6_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OptionVariables_8, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__Args_10);
#line 444 "mercury_compile.m"
                                                                    return;
                                                                  }
#line 445 "mercury_compile.m"
                                                                else
#line 447 "mercury_compile.m"
                                                                  {
#line 445 "mercury_compile.m"
                                                                    top_level__mercury_compile__succeeded = (top_level__mercury_compile__Args_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "mercury_compile.m"
                                                                    if (top_level__mercury_compile__succeeded)
#line 445 "mercury_compile.m"
                                                                      top_level__mercury_compile__succeeded = (top_level__mercury_compile__FileNamesFromStdin_20 == (MR_Integer) 0);
#line 447 "mercury_compile.m"
                                                                    if (top_level__mercury_compile__succeeded)
#line 446 "mercury_compile.m"
                                                                      {
#line 446 "mercury_compile.m"
                                                                        libs__handle_options__usage_2_p_0();
#line 446 "mercury_compile.m"
                                                                        return;
                                                                      }
#line 447 "mercury_compile.m"
                                                                    else
#line 449 "mercury_compile.m"
                                                                      {
#line 449 "mercury_compile.m"
                                                                        MR_Word top_level__mercury_compile__ModulesToLink_46;
#line 449 "mercury_compile.m"
                                                                        MR_Word top_level__mercury_compile__ExtraObjFiles_47;
#line 449 "mercury_compile.m"
                                                                        MR_Integer top_level__mercury_compile__ExitStatus_48;
#line 449 "mercury_compile.m"
                                                                        MR_Word top_level__mercury_compile__Statistics_55;

#line 448 "mercury_compile.m"
                                                                        {
#line 448 "mercury_compile.m"
                                                                          top_level__mercury_compile__process_all_args_8_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__OptionVariables_8, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__Args_10, &top_level__mercury_compile__ModulesToLink_46, &top_level__mercury_compile__ExtraObjFiles_47);
                                                                        }
#line 450 "mercury_compile.m"
                                                                        {
#line 450 "mercury_compile.m"
                                                                          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile__ExitStatus_48);
                                                                        }
#line 451 "mercury_compile.m"
                                                                        top_level__mercury_compile__succeeded = (top_level__mercury_compile__ExitStatus_48 == (MR_Integer) 0);
#line 482 "mercury_compile.m"
                                                                        if (top_level__mercury_compile__succeeded)
#line 479 "mercury_compile.m"
                                                                          {
#line 479 "mercury_compile.m"
                                                                            MR_String top_level__mercury_compile__FirstModule_49;
#line 454 "mercury_compile.m"
                                                                            MR_Word top_level__mercury_compile__V_50_50;

#line 453 "mercury_compile.m"
                                                                            top_level__mercury_compile__succeeded = (top_level__mercury_compile__Link_11 == (MR_Integer) 1);
#line 453 "mercury_compile.m"
                                                                            if (top_level__mercury_compile__succeeded)
#line 453 "mercury_compile.m"
                                                                              {
#line 454 "mercury_compile.m"
                                                                                top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ModulesToLink_46)) == (MR_mktag((MR_Integer) 1)));
#line 454 "mercury_compile.m"
                                                                                if (top_level__mercury_compile__succeeded)
#line 454 "mercury_compile.m"
                                                                                  {
#line 454 "mercury_compile.m"
                                                                                    top_level__mercury_compile__FirstModule_49 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_46, (MR_Integer) 0)));
#line 454 "mercury_compile.m"
                                                                                    top_level__mercury_compile__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ModulesToLink_46, (MR_Integer) 1)));
#line 454 "mercury_compile.m"
                                                                                  }
#line 453 "mercury_compile.m"
                                                                              }
#line 479 "mercury_compile.m"
                                                                            if (top_level__mercury_compile__succeeded)
#line 457 "mercury_compile.m"
                                                                              {
#line 457 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__MainModuleName_51;
#line 457 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__Succeeded_52;
#line 457 "mercury_compile.m"
                                                                                MR_Word top_level__mercury_compile__Target_177;

#line 456 "mercury_compile.m"
                                                                                {
#line 456 "mercury_compile.m"
                                                                                  parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile__FirstModule_49, &top_level__mercury_compile__MainModuleName_51);
                                                                                }
#line 458 "mercury_compile.m"
                                                                                {
#line 458 "mercury_compile.m"
                                                                                  libs__globals__get_target_2_p_0(top_level__mercury_compile__Globals_12, &top_level__mercury_compile__Target_177);
                                                                                }
#line 466 "mercury_compile.m"
                                                                                if ((top_level__mercury_compile__Target_177 == (MR_Integer) 3))
#line 464 "mercury_compile.m"
                                                                                  {
#line 464 "mercury_compile.m"
                                                                                    parse_tree__module_cmds__create_java_shell_script_5_p_0(top_level__mercury_compile__Globals_12, top_level__mercury_compile__MainModuleName_51, &top_level__mercury_compile__Succeeded_52);
                                                                                  }
#line 466 "mercury_compile.m"
                                                                                else
#line 472 "mercury_compile.m"
                                                                                  {
#line 472 "mercury_compile.m"
                                                                                    MR_Word top_level__mercury_compile__V_151_151;

#line 473 "mercury_compile.m"
                                                                                    {
#line 473 "mercury_compile.m"
                                                                                      top_level__mercury_compile__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 473 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_151_151, 0) = ((MR_Box) (&top_level__mercury_compile_scalar_common_6[0]));
#line 473 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_151_151, 1) = ((MR_Box) (top_level__mercury_compile__main_after_setup_7_p_0_2));
#line 473 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_151_151, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 473 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_151_151, 3) = ((MR_Box) (top_level__mercury_compile__ModulesToLink_46));
#line 473 "mercury_compile.m"
                                                                                      MR_hl_field(MR_mktag(0), top_level__mercury_compile__V_151_151, 4) = ((MR_Box) (top_level__mercury_compile__ExtraObjFiles_47));
#line 473 "mercury_compile.m"
                                                                                    }
#line 473 "mercury_compile.m"
                                                                                    {
#line 473 "mercury_compile.m"
                                                                                      top_level__mercury_compile__compile_with_module_options__ho1_8_p_0(top_level__mercury_compile__ModulesToLink_46, top_level__mercury_compile__ExtraObjFiles_47, top_level__mercury_compile__Globals_12, top_level__mercury_compile__MainModuleName_51, top_level__mercury_compile__OptionVariables_8, top_level__mercury_compile__OptionArgs_9, top_level__mercury_compile__V_151_151, &top_level__mercury_compile__Succeeded_52);
                                                                                    }
#line 472 "mercury_compile.m"
                                                                                  }
#line 478 "mercury_compile.m"
                                                                                {
#line 478 "mercury_compile.m"
                                                                                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile__Succeeded_52);
                                                                                }
#line 457 "mercury_compile.m"
                                                                              }
#line 479 "mercury_compile.m"
                                                                            else
#line 478 "mercury_compile.m"
                                                                              {
#line 478 "mercury_compile.m"
                                                                              }
#line 479 "mercury_compile.m"
                                                                          }
#line 482 "mercury_compile.m"
                                                                        else
#line 488 "mercury_compile.m"
                                                                          {
#line 488 "mercury_compile.m"
                                                                            MR_Word top_level__mercury_compile__VerboseErrors_53;
#line 488 "mercury_compile.m"
                                                                            MR_Word top_level__mercury_compile__ExtraErrorInfo_54;

#line 487 "mercury_compile.m"
                                                                            {
#line 487 "mercury_compile.m"
                                                                              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 46, &top_level__mercury_compile__VerboseErrors_53);
                                                                            }
#line 489 "mercury_compile.m"
                                                                            {
#line 489 "mercury_compile.m"
                                                                              libs__globals__io_get_extra_error_info_3_p_0(&top_level__mercury_compile__ExtraErrorInfo_54);
                                                                            }
#line 499 "mercury_compile.m"
                                                                            if ((top_level__mercury_compile__VerboseErrors_53 == (MR_Integer) 0))
#line 496 "mercury_compile.m"
                                                                              if ((top_level__mercury_compile__ExtraErrorInfo_54 == (MR_Integer) 0))
#line 497 "mercury_compile.m"
                                                                                {
#line 497 "mercury_compile.m"
                                                                                }
#line 496 "mercury_compile.m"
                                                                              else
#line 493 "mercury_compile.m"
                                                                                {
#line 494 "mercury_compile.m"
                                                                                  {
#line 494 "mercury_compile.m"
                                                                                    mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                                                                                  }
#line 493 "mercury_compile.m"
                                                                                }
#line 499 "mercury_compile.m"
                                                                            else
#line 500 "mercury_compile.m"
                                                                              {
#line 500 "mercury_compile.m"
                                                                              }
#line 488 "mercury_compile.m"
                                                                          }
#line 503 "mercury_compile.m"
                                                                        {
#line 503 "mercury_compile.m"
                                                                          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile__Globals_12, (MR_Integer) 54, &top_level__mercury_compile__Statistics_55);
                                                                        }
#line 507 "mercury_compile.m"
                                                                        if ((top_level__mercury_compile__Statistics_55 == (MR_Integer) 0))
#line 508 "mercury_compile.m"
                                                                          {
#line 508 "mercury_compile.m"
                                                                          }
#line 507 "mercury_compile.m"
                                                                        else
#line 505 "mercury_compile.m"
                                                                          {
#line 506 "mercury_compile.m"
                                                                            {
#line 506 "mercury_compile.m"
                                                                              mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
#line 506 "mercury_compile.m"
                                                                              return;
                                                                            }
#line 505 "mercury_compile.m"
                                                                          }
#line 449 "mercury_compile.m"
                                                                      }
#line 447 "mercury_compile.m"
                                                                  }
#line 445 "mercury_compile.m"
                                                              }
#line 443 "mercury_compile.m"
                                                          }
#line 420 "mercury_compile.m"
                                                      }
#line 418 "mercury_compile.m"
                                                  }
#line 415 "mercury_compile.m"
                                              }
#line 412 "mercury_compile.m"
                                          }
#line 409 "mercury_compile.m"
                                      }
#line 405 "mercury_compile.m"
                                  }
#line 402 "mercury_compile.m"
                              }
#line 398 "mercury_compile.m"
                          }
#line 394 "mercury_compile.m"
                      }
#line 390 "mercury_compile.m"
                  }
#line 384 "mercury_compile.m"
              }
#line 378 "mercury_compile.m"
          }
#line 370 "mercury_compile.m"
      }
#line 328 "mercury_compile.m"
  }
#line 325 "mercury_compile.m"
}

#line 173 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_file_into_arg_list_4_p_0(
#line 173 "mercury_compile.m"
  MR_Word top_level__mercury_compile__S_5,
#line 173 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__Res_6)
#line 173 "mercury_compile.m"
{
#line 176 "mercury_compile.m"
  {
#line 176 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 176 "mercury_compile.m"
    MR_Word top_level__mercury_compile__LineRes_8;

#line 177 "mercury_compile.m"
    {
#line 177 "mercury_compile.m"
      mercury__io__read_line_as_string_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__LineRes_8);
    }
#line 191 "mercury_compile.m"
    if ((top_level__mercury_compile__LineRes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "mercury_compile.m"
      {
#line 193 "mercury_compile.m"
        *top_level__mercury_compile__Res_6 = (MR_Word) &top_level__mercury_compile_scalar_common_5[0];
#line 192 "mercury_compile.m"
      }
#line 191 "mercury_compile.m"
    else
#line 191 "mercury_compile.m"
      if (((MR_tag((MR_Word) top_level__mercury_compile__LineRes_8)) == (MR_mktag((MR_Integer) 2))))
#line 195 "mercury_compile.m"
        {
#line 195 "mercury_compile.m"
          MR_Word top_level__mercury_compile__E_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));

#line 196 "mercury_compile.m"
          {
#line 196 "mercury_compile.m"
            MR_Word base;
#line 196 "mercury_compile.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 196 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = base;
#line 196 "mercury_compile.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__E_14));
#line 196 "mercury_compile.m"
          }
#line 195 "mercury_compile.m"
        }
#line 191 "mercury_compile.m"
      else
#line 179 "mercury_compile.m"
        {
#line 179 "mercury_compile.m"
          MR_String top_level__mercury_compile__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__LineRes_8, (MR_Integer) 0)));
#line 179 "mercury_compile.m"
          MR_Word top_level__mercury_compile__Res0_10;

#line 180 "mercury_compile.m"
          {
#line 180 "mercury_compile.m"
            top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_5, &top_level__mercury_compile__Res0_10);
          }
#line 188 "mercury_compile.m"
          if (((MR_tag((MR_Word) top_level__mercury_compile__Res0_10)) == (MR_mktag((MR_Integer) 1))))
#line 189 "mercury_compile.m"
            *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 188 "mercury_compile.m"
          else
#line 181 "mercury_compile.m"
            {
#line 181 "mercury_compile.m"
              MR_Word top_level__mercury_compile__Lines_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res0_10, (MR_Integer) 0)));
#line 181 "mercury_compile.m"
              MR_String top_level__mercury_compile__StrippedLine_12;

#line 182 "mercury_compile.m"
              {
#line 182 "mercury_compile.m"
                top_level__mercury_compile__StrippedLine_12 = mercury__string__strip_1_f_0(top_level__mercury_compile__Line_9);
              }
#line 183 "mercury_compile.m"
              top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__StrippedLine_12, (MR_String) "") == 0);
#line 185 "mercury_compile.m"
              if (top_level__mercury_compile__succeeded)
#line 184 "mercury_compile.m"
                *top_level__mercury_compile__Res_6 = top_level__mercury_compile__Res0_10;
#line 185 "mercury_compile.m"
              else
#line 186 "mercury_compile.m"
                {
#line 186 "mercury_compile.m"
                  MR_Word top_level__mercury_compile__V_20_20;

#line 186 "mercury_compile.m"
                  {
#line 186 "mercury_compile.m"
                    top_level__mercury_compile__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 0) = ((MR_Box) (top_level__mercury_compile__StrippedLine_12));
#line 186 "mercury_compile.m"
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_20_20, 1) = ((MR_Box) (top_level__mercury_compile__Lines_11));
#line 186 "mercury_compile.m"
                  }
#line 186 "mercury_compile.m"
                  {
#line 186 "mercury_compile.m"
                    MR_Word base;
#line 186 "mercury_compile.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 186 "mercury_compile.m"
                    *top_level__mercury_compile__Res_6 = base;
#line 186 "mercury_compile.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_20_20));
#line 186 "mercury_compile.m"
                  }
#line 186 "mercury_compile.m"
                }
#line 181 "mercury_compile.m"
            }
#line 179 "mercury_compile.m"
        }
#line 176 "mercury_compile.m"
  }
#line 173 "mercury_compile.m"
}

#line 133 "mercury_compile.m"
static void MR_CALL 
top_level__mercury_compile__expand_at_file_arguments_4_p_0(
#line 133 "mercury_compile.m"
  MR_Word top_level__mercury_compile__HeadVar__1_1,
#line 133 "mercury_compile.m"
  MR_Word * top_level__mercury_compile__HeadVar__2_2)
#line 133 "mercury_compile.m"
{
#line 136 "mercury_compile.m"
  while (MR_TRUE)
#line 136 "mercury_compile.m"
    {
#line 136 "mercury_compile.m"
      /* tailcall optimized into a loop */
#line 136 "mercury_compile.m"
      {
#line 136 "mercury_compile.m"
        MR_bool top_level__mercury_compile__succeeded;

#line 136 "mercury_compile.m"
        if ((top_level__mercury_compile__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "mercury_compile.m"
          {
#line 136 "mercury_compile.m"
            *top_level__mercury_compile__HeadVar__2_2 = (MR_Word) &top_level__mercury_compile_scalar_common_5[0];
#line 136 "mercury_compile.m"
          }
#line 136 "mercury_compile.m"
        else
#line 137 "mercury_compile.m"
          {
#line 137 "mercury_compile.m"
            MR_String top_level__mercury_compile__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "mercury_compile.m"
            MR_Word top_level__mercury_compile__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "mercury_compile.m"
            MR_String top_level__mercury_compile__File_13;

#line 138 "mercury_compile.m"
            {
#line 138 "mercury_compile.m"
              top_level__mercury_compile__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", top_level__mercury_compile__Arg_9, &top_level__mercury_compile__File_13);
            }
#line 153 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 139 "mercury_compile.m"
              {
#line 139 "mercury_compile.m"
                MR_Word top_level__mercury_compile__OpenRes_14;

#line 139 "mercury_compile.m"
                {
#line 139 "mercury_compile.m"
                  mercury__io__open_input_4_p_0(top_level__mercury_compile__File_13, &top_level__mercury_compile__OpenRes_14);
                }
#line 148 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 149 "mercury_compile.m"
                  {
#line 149 "mercury_compile.m"
                    MR_String top_level__mercury_compile__Msg_20;
#line 149 "mercury_compile.m"
                    MR_String top_level__mercury_compile__V_28_28;
#line 149 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_30_30;

#line 150 "mercury_compile.m"
                    {
#line 150 "mercury_compile.m"
                      top_level__mercury_compile__V_28_28 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, (MR_String) "\'");
                    }
#line 150 "mercury_compile.m"
                    {
#line 150 "mercury_compile.m"
                      top_level__mercury_compile__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", top_level__mercury_compile__V_28_28);
                    }
#line 151 "mercury_compile.m"
                    {
#line 151 "mercury_compile.m"
                      top_level__mercury_compile__V_30_30 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__Msg_20);
                    }
#line 151 "mercury_compile.m"
                    {
#line 151 "mercury_compile.m"
                      MR_Word base;
#line 151 "mercury_compile.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 151 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 151 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_30_30));
#line 151 "mercury_compile.m"
                    }
#line 149 "mercury_compile.m"
                  }
#line 148 "mercury_compile.m"
                else
#line 141 "mercury_compile.m"
                  {
#line 141 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__S_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__OpenRes_14, (MR_Integer) 0)));
#line 141 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ReadRes_16;

#line 142 "mercury_compile.m"
                    {
#line 142 "mercury_compile.m"
                      top_level__mercury_compile__expand_file_into_arg_list_4_p_0(top_level__mercury_compile__S_15, &top_level__mercury_compile__ReadRes_16);
                    }
#line 145 "mercury_compile.m"
                    if (((MR_tag((MR_Word) top_level__mercury_compile__ReadRes_16)) == (MR_mktag((MR_Integer) 1))))
#line 145 "mercury_compile.m"
                      {
#line 145 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__E_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 145 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_32_32;
#line 145 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_43_43;
#line 145 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_45_45;
#line 145 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_46_46;
#line 145 "mercury_compile.m"
                        MR_String top_level__mercury_compile__V_48_48;

#line 168 "mercury_compile.m"
                        {
#line 168 "mercury_compile.m"
                          top_level__mercury_compile__V_48_48 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_18);
                        }
#line 167 "mercury_compile.m"
                        {
#line 167 "mercury_compile.m"
                          top_level__mercury_compile__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", top_level__mercury_compile__V_48_48);
                        }
#line 167 "mercury_compile.m"
                        {
#line 167 "mercury_compile.m"
                          top_level__mercury_compile__V_45_45 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile__File_13, top_level__mercury_compile__V_46_46);
                        }
#line 167 "mercury_compile.m"
                        {
#line 167 "mercury_compile.m"
                          top_level__mercury_compile__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", top_level__mercury_compile__V_45_45);
                        }
#line 166 "mercury_compile.m"
                        {
#line 166 "mercury_compile.m"
                          top_level__mercury_compile__V_32_32 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile__V_43_43);
                        }
#line 146 "mercury_compile.m"
                        {
#line 146 "mercury_compile.m"
                          MR_Word base;
#line 146 "mercury_compile.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 146 "mercury_compile.m"
                          *top_level__mercury_compile__HeadVar__2_2 = base;
#line 146 "mercury_compile.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile__V_32_32));
#line 146 "mercury_compile.m"
                        }
#line 145 "mercury_compile.m"
                      }
#line 145 "mercury_compile.m"
                    else
#line 143 "mercury_compile.m"
                      {
#line 143 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__FileArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__ReadRes_16, (MR_Integer) 0)));
#line 143 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_33_33;

#line 144 "mercury_compile.m"
                        {
#line 144 "mercury_compile.m"
                          top_level__mercury_compile__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__FileArgs_17, top_level__mercury_compile__Args_10);
                        }
#line 144 "mercury_compile.m"
                        /* direct tailcall eliminated */
#line 144 "mercury_compile.m"
                        {
#line 144 "mercury_compile.m"
                          MR_Word top_level__mercury_compile__HeadVar__1__tmp_copy_1 = top_level__mercury_compile__V_33_33;

#line 144 "mercury_compile.m"
                          top_level__mercury_compile__HeadVar__1_1 = top_level__mercury_compile__HeadVar__1__tmp_copy_1;
#line 144 "mercury_compile.m"
                        }
#line 144 "mercury_compile.m"
                        continue;
#line 143 "mercury_compile.m"
                      }
#line 141 "mercury_compile.m"
                  }
#line 139 "mercury_compile.m"
              }
#line 153 "mercury_compile.m"
            else
#line 154 "mercury_compile.m"
              {
#line 154 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Result0_21;

#line 154 "mercury_compile.m"
                {
#line 154 "mercury_compile.m"
                  top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__Args_10, &top_level__mercury_compile__Result0_21);
                }
#line 158 "mercury_compile.m"
                if (((MR_tag((MR_Word) top_level__mercury_compile__Result0_21)) == (MR_mktag((MR_Integer) 1))))
#line 160 "mercury_compile.m"
                  *top_level__mercury_compile__HeadVar__2_2 = top_level__mercury_compile__Result0_21;
#line 158 "mercury_compile.m"
                else
#line 156 "mercury_compile.m"
                  {
#line 156 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__ExpandedArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Result0_21, (MR_Integer) 0)));
#line 156 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_36_36;

#line 157 "mercury_compile.m"
                    {
#line 157 "mercury_compile.m"
                      top_level__mercury_compile__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 0) = ((MR_Box) (top_level__mercury_compile__Arg_9));
#line 157 "mercury_compile.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile__ExpandedArgs_22));
#line 157 "mercury_compile.m"
                    }
#line 157 "mercury_compile.m"
                    {
#line 157 "mercury_compile.m"
                      MR_Word base;
#line 157 "mercury_compile.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 157 "mercury_compile.m"
                      *top_level__mercury_compile__HeadVar__2_2 = base;
#line 157 "mercury_compile.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile__V_36_36));
#line 157 "mercury_compile.m"
                    }
#line 156 "mercury_compile.m"
                  }
#line 154 "mercury_compile.m"
              }
#line 137 "mercury_compile.m"
          }
#line 136 "mercury_compile.m"
      }
#line 136 "mercury_compile.m"
      break;
#line 136 "mercury_compile.m"
    }
#line 133 "mercury_compile.m"
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
#line 320 "mercury_compile.m"
  {
#line 320 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 320 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_10_10;

#line 321 "mercury_compile.m"
    {
#line 321 "mercury_compile.m"
      top_level__mercury_compile__V_10_10 = make__options_file__options_variables_init_0_f_0();
    }
#line 321 "mercury_compile.m"
    {
#line 321 "mercury_compile.m"
      top_level__mercury_compile__main_after_setup_7_p_0(top_level__mercury_compile__V_10_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__Args_6, (MR_Integer) 0, top_level__mercury_compile__Globals_5);
#line 321 "mercury_compile.m"
      return;
    }
#line 320 "mercury_compile.m"
  }
#line 36 "mercury_compile.m"
}

#line 31 "mercury_compile.m"
void MR_CALL 
top_level__mercury_compile__real_main_2_p_0(void)
#line 31 "mercury_compile.m"
{
#line 105 "mercury_compile.m"
  {
#line 105 "mercury_compile.m"
    MR_bool top_level__mercury_compile__succeeded;
#line 105 "mercury_compile.m"
    MR_Word top_level__mercury_compile__StdErr_4;
#line 105 "mercury_compile.m"
    MR_Word top_level__mercury_compile__CmdLineArgs_6;
#line 105 "mercury_compile.m"
    MR_Word top_level__mercury_compile__Res_7;
#line 110 "mercury_compile.m"
    MR_Word top_level__mercury_compile__V_5_5;

#line 2035 "mercury_compile.m"
{
#define MR_PROC_LABEL top_level__mercury_compile__real_main_2_p_0


		{
#line 2035 "mercury_compile.m"

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

#line 10386 "top_level.mercury_compile.c"

		;}
#undef MR_PROC_LABEL
#line 2035 "mercury_compile.m"
}
#line 109 "mercury_compile.m"
    {
#line 109 "mercury_compile.m"
      mercury__io__stderr_stream_3_p_0(&top_level__mercury_compile__StdErr_4);
    }
#line 110 "mercury_compile.m"
    {
#line 110 "mercury_compile.m"
      mercury__io__set_output_stream_4_p_0(top_level__mercury_compile__StdErr_4, &top_level__mercury_compile__V_5_5);
    }
#line 111 "mercury_compile.m"
    {
#line 111 "mercury_compile.m"
      mercury__io__command_line_arguments_3_p_0(&top_level__mercury_compile__CmdLineArgs_6);
    }
#line 113 "mercury_compile.m"
    {
#line 113 "mercury_compile.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 116 "mercury_compile.m"
    {
#line 116 "mercury_compile.m"
      top_level__mercury_compile__expand_at_file_arguments_4_p_0(top_level__mercury_compile__CmdLineArgs_6, &top_level__mercury_compile__Res_7);
    }
#line 120 "mercury_compile.m"
    if (((MR_tag((MR_Word) top_level__mercury_compile__Res_7)) == (MR_mktag((MR_Integer) 1))))
#line 121 "mercury_compile.m"
      {
#line 121 "mercury_compile.m"
        MR_Word top_level__mercury_compile__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__Res_7, (MR_Integer) 0)));
#line 121 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_20_20;

#line 122 "mercury_compile.m"
        {
#line 122 "mercury_compile.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 124 "mercury_compile.m"
        {
#line 124 "mercury_compile.m"
          top_level__mercury_compile__V_20_20 = mercury__io__error_message_1_f_0(top_level__mercury_compile__E_9);
        }
#line 124 "mercury_compile.m"
        {
#line 124 "mercury_compile.m"
          mercury__io__write_string_3_p_0(top_level__mercury_compile__V_20_20);
        }
#line 125 "mercury_compile.m"
        {
#line 125 "mercury_compile.m"
          mercury__io__nl_2_p_0();
#line 125 "mercury_compile.m"
          return;
        }
#line 121 "mercury_compile.m"
      }
#line 120 "mercury_compile.m"
    else
#line 118 "mercury_compile.m"
      {
#line 118 "mercury_compile.m"
        MR_Word top_level__mercury_compile__ExpandedCmdLineArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile__Res_7, (MR_Integer) 0)));
#line 10456 "top_level.mercury_compile.c"
        MR_String top_level__mercury_compile__ArgFile_31;
#line 10458 "top_level.mercury_compile.c"
        MR_Word top_level__mercury_compile__ExtraArgs_32;
#line 206 "mercury_compile.m"
        MR_String top_level__mercury_compile__V_67_67;
#line 206 "mercury_compile.m"
        MR_Word top_level__mercury_compile__V_68_68;

#line 206 "mercury_compile.m"
        top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__ExpandedCmdLineArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 206 "mercury_compile.m"
        if (top_level__mercury_compile__succeeded)
#line 206 "mercury_compile.m"
          {
#line 206 "mercury_compile.m"
            top_level__mercury_compile__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ExpandedCmdLineArgs_8, (MR_Integer) 0)));
#line 206 "mercury_compile.m"
            top_level__mercury_compile__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__ExpandedCmdLineArgs_8, (MR_Integer) 1)));
#line 206 "mercury_compile.m"
            top_level__mercury_compile__succeeded = (strcmp(top_level__mercury_compile__V_67_67, (MR_String) "--arg-file") == 0);
#line 206 "mercury_compile.m"
            if (top_level__mercury_compile__succeeded)
#line 206 "mercury_compile.m"
              {
#line 206 "mercury_compile.m"
                top_level__mercury_compile__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 206 "mercury_compile.m"
                if (top_level__mercury_compile__succeeded)
#line 206 "mercury_compile.m"
                  {
#line 206 "mercury_compile.m"
                    top_level__mercury_compile__ArgFile_31 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, (MR_Integer) 0)));
#line 206 "mercury_compile.m"
                    top_level__mercury_compile__ExtraArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__V_68_68, (MR_Integer) 1)));
#line 206 "mercury_compile.m"
                  }
#line 206 "mercury_compile.m"
              }
#line 206 "mercury_compile.m"
          }
#line 10497 "top_level.mercury_compile.c"
        if (top_level__mercury_compile__succeeded)
#line 10499 "top_level.mercury_compile.c"
          {
#line 10501 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__DummyGlobals_36;
#line 10503 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MaybeArgs1_37;
#line 10505 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__OptionArgs_39;
#line 10507 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__NonOptionArgs_40;
#line 10509 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Variables_41;
#line 10511 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Errors_63;
#line 10513 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__ActualGlobals_64;
#line 10515 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__V_91_91;
#line 300 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_60_60;
#line 300 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_61_61;
#line 300 "mercury_compile.m"
            MR_Word top_level__mercury_compile__V_62_62;

#line 217 "mercury_compile.m"
            if ((top_level__mercury_compile__ExtraArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "mercury_compile.m"
              {
#line 216 "mercury_compile.m"
              }
#line 217 "mercury_compile.m"
            else
#line 218 "mercury_compile.m"
              {
#line 218 "mercury_compile.m"
                MR_String top_level__mercury_compile__V_71_71;
#line 218 "mercury_compile.m"
                MR_String top_level__mercury_compile__V_73_73;

#line 220 "mercury_compile.m"
                {
#line 220 "mercury_compile.m"
                  top_level__mercury_compile__V_73_73 = mercury__string__string_1_f_0((MR_Word) &top_level__mercury_compile_scalar_common_1[0], ((MR_Box) (top_level__mercury_compile__ExtraArgs_32)));
                }
#line 219 "mercury_compile.m"
                {
#line 219 "mercury_compile.m"
                  top_level__mercury_compile__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", top_level__mercury_compile__V_73_73);
                }
#line 219 "mercury_compile.m"
                {
#line 219 "mercury_compile.m"
                  mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile", (MR_String) "predicate \140top_level.mercury_compile.real_main_after_expansion\'/3", top_level__mercury_compile__V_71_71);
#line 219 "mercury_compile.m"
                  return;
                }
#line 218 "mercury_compile.m"
              }
#line 228 "mercury_compile.m"
            {
#line 228 "mercury_compile.m"
              libs__handle_options__generate_default_globals_3_p_0(&top_level__mercury_compile__DummyGlobals_36);
            }
#line 229 "mercury_compile.m"
            {
#line 229 "mercury_compile.m"
              make__options_file__read_args_file_5_p_0(top_level__mercury_compile__DummyGlobals_36, top_level__mercury_compile__ArgFile_31, &top_level__mercury_compile__MaybeArgs1_37);
            }
#line 233 "mercury_compile.m"
            if ((top_level__mercury_compile__MaybeArgs1_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "mercury_compile.m"
              {
#line 235 "mercury_compile.m"
                top_level__mercury_compile__OptionArgs_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 236 "mercury_compile.m"
                top_level__mercury_compile__NonOptionArgs_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 234 "mercury_compile.m"
              }
#line 233 "mercury_compile.m"
            else
#line 231 "mercury_compile.m"
              {
#line 231 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Args1_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeArgs1_37, (MR_Integer) 0)));

#line 232 "mercury_compile.m"
                {
#line 232 "mercury_compile.m"
                  libs__handle_options__separate_option_args_5_p_0(top_level__mercury_compile__Args1_38, &top_level__mercury_compile__OptionArgs_39, &top_level__mercury_compile__NonOptionArgs_40);
                }
#line 231 "mercury_compile.m"
              }
#line 238 "mercury_compile.m"
            {
#line 238 "mercury_compile.m"
              top_level__mercury_compile__Variables_41 = make__options_file__options_variables_init_0_f_0();
            }
#line 300 "mercury_compile.m"
            {
#line 300 "mercury_compile.m"
              top_level__mercury_compile__V_91_91 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile__OptionArgs_39);
            }
#line 300 "mercury_compile.m"
            {
#line 300 "mercury_compile.m"
              libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__V_91_91, &top_level__mercury_compile__V_60_60, &top_level__mercury_compile__V_61_61, &top_level__mercury_compile__V_62_62, &top_level__mercury_compile__Errors_63, &top_level__mercury_compile__ActualGlobals_64);
            }
#line 308 "mercury_compile.m"
            if ((top_level__mercury_compile__Errors_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "mercury_compile.m"
              {
#line 310 "mercury_compile.m"
                top_level__mercury_compile__main_after_setup_7_p_0(top_level__mercury_compile__Variables_41, top_level__mercury_compile__OptionArgs_39, top_level__mercury_compile__NonOptionArgs_40, (MR_Integer) 0, top_level__mercury_compile__ActualGlobals_64);
#line 310 "mercury_compile.m"
                return;
              }
#line 308 "mercury_compile.m"
            else
#line 307 "mercury_compile.m"
              {
#line 307 "mercury_compile.m"
                libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_63);
#line 307 "mercury_compile.m"
                return;
              }
#line 10625 "top_level.mercury_compile.c"
          }
#line 10627 "top_level.mercury_compile.c"
        else
#line 10629 "top_level.mercury_compile.c"
          {
#line 10631 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__ArgsGlobals_44;
#line 10633 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__MaybeVariables0_45;
#line 10635 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__V_79_79;
#line 10637 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__Link_119;
#line 10639 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__OptionArgs_120;
#line 10641 "top_level.mercury_compile.c"
            MR_Word top_level__mercury_compile__NonOptionArgs_121;
#line 244 "mercury_compile.m"
            MR_Word top_level__mercury_compile___Errors0_43;

#line 244 "mercury_compile.m"
            {
#line 244 "mercury_compile.m"
              libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__ExpandedCmdLineArgs_8, &top_level__mercury_compile__OptionArgs_120, &top_level__mercury_compile__NonOptionArgs_121, &top_level__mercury_compile__Link_119, &top_level__mercury_compile___Errors0_43, &top_level__mercury_compile__ArgsGlobals_44);
            }
#line 246 "mercury_compile.m"
            {
#line 246 "mercury_compile.m"
              top_level__mercury_compile__V_79_79 = make__options_file__options_variables_init_0_f_0();
            }
#line 246 "mercury_compile.m"
            {
#line 246 "mercury_compile.m"
              make__options_file__read_options_files_5_p_0(top_level__mercury_compile__ArgsGlobals_44, top_level__mercury_compile__V_79_79, &top_level__mercury_compile__MaybeVariables0_45);
            }
#line 10661 "top_level.mercury_compile.c"
            if ((top_level__mercury_compile__MaybeVariables0_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10663 "top_level.mercury_compile.c"
              {
#line 294 "mercury_compile.m"
                MR_Word top_level__mercury_compile__Variables_122;

#line 294 "mercury_compile.m"
                {
#line 294 "mercury_compile.m"
                  top_level__mercury_compile__Variables_122 = make__options_file__options_variables_init_0_f_0();
                }
#line 315 "mercury_compile.m"
                {
#line 315 "mercury_compile.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 315 "mercury_compile.m"
                  return;
                }
#line 10680 "top_level.mercury_compile.c"
              }
#line 10682 "top_level.mercury_compile.c"
            else
#line 10684 "top_level.mercury_compile.c"
              {
#line 10686 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__Variables0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables0_45, (MR_Integer) 0)));
#line 10688 "top_level.mercury_compile.c"
                MR_Word top_level__mercury_compile__MaybeMCFlags0_47;

#line 250 "mercury_compile.m"
                {
#line 250 "mercury_compile.m"
                  make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__ArgsGlobals_44, top_level__mercury_compile__Variables0_46, &top_level__mercury_compile__MaybeMCFlags0_47);
                }
#line 10696 "top_level.mercury_compile.c"
                if ((top_level__mercury_compile__MaybeMCFlags0_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10698 "top_level.mercury_compile.c"
                  {
#line 289 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__Variables_137;

#line 289 "mercury_compile.m"
                    {
#line 289 "mercury_compile.m"
                      top_level__mercury_compile__Variables_137 = make__options_file__options_variables_init_0_f_0();
                    }
#line 315 "mercury_compile.m"
                    {
#line 315 "mercury_compile.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 315 "mercury_compile.m"
                      return;
                    }
#line 10715 "top_level.mercury_compile.c"
                  }
#line 10717 "top_level.mercury_compile.c"
                else
#line 10719 "top_level.mercury_compile.c"
                  {
#line 10721 "top_level.mercury_compile.c"
                    MR_Word top_level__mercury_compile__MCFlags0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags0_47, (MR_Integer) 0)));
#line 10723 "top_level.mercury_compile.c"
                    MR_Word top_level__mercury_compile__FlagsErrors_52;
#line 10725 "top_level.mercury_compile.c"
                    MR_Word top_level__mercury_compile__FlagsArgsGlobals_53;
#line 10727 "top_level.mercury_compile.c"
                    MR_Word top_level__mercury_compile__V_82_82;
#line 10729 "top_level.mercury_compile.c"
                    MR_Word top_level__mercury_compile__Variables_143;
#line 10731 "top_level.mercury_compile.c"
                    MR_Word top_level__mercury_compile__MaybeMCFlags_144;
#line 256 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_49_49;
#line 256 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_50_50;
#line 256 "mercury_compile.m"
                    MR_Word top_level__mercury_compile__V_51_51;

#line 256 "mercury_compile.m"
                    {
#line 256 "mercury_compile.m"
                      top_level__mercury_compile__V_82_82 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__MCFlags0_48, top_level__mercury_compile__ExpandedCmdLineArgs_8);
                    }
#line 256 "mercury_compile.m"
                    {
#line 256 "mercury_compile.m"
                      libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__V_82_82, &top_level__mercury_compile__V_49_49, &top_level__mercury_compile__V_50_50, &top_level__mercury_compile__V_51_51, &top_level__mercury_compile__FlagsErrors_52, &top_level__mercury_compile__FlagsArgsGlobals_53);
                    }
#line 263 "mercury_compile.m"
                    if ((top_level__mercury_compile__FlagsErrors_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "mercury_compile.m"
                      {
#line 264 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__MaybeConfigFile_56;

#line 265 "mercury_compile.m"
                        {
#line 265 "mercury_compile.m"
                          libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile__FlagsArgsGlobals_53, (MR_Integer) 630, &top_level__mercury_compile__MaybeConfigFile_56);
                        }
#line 280 "mercury_compile.m"
                        if ((top_level__mercury_compile__MaybeConfigFile_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "mercury_compile.m"
                          {
#line 282 "mercury_compile.m"
                            {
#line 282 "mercury_compile.m"
                              top_level__mercury_compile__Variables_143 = make__options_file__options_variables_init_0_f_0();
                            }
#line 283 "mercury_compile.m"
                            {
#line 283 "mercury_compile.m"
                              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_53, top_level__mercury_compile__Variables_143, &top_level__mercury_compile__MaybeMCFlags_144);
                            }
#line 281 "mercury_compile.m"
                          }
#line 280 "mercury_compile.m"
                        else
#line 268 "mercury_compile.m"
                          {
#line 268 "mercury_compile.m"
                            MR_String top_level__mercury_compile__ConfigFile_57 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeConfigFile_56, (MR_Integer) 0)));
#line 268 "mercury_compile.m"
                            MR_Word top_level__mercury_compile__MaybeVariables_58;

#line 269 "mercury_compile.m"
                            {
#line 269 "mercury_compile.m"
                              make__options_file__read_options_file_6_p_0(top_level__mercury_compile__FlagsArgsGlobals_53, top_level__mercury_compile__ConfigFile_57, top_level__mercury_compile__Variables0_46, &top_level__mercury_compile__MaybeVariables_58);
                            }
#line 275 "mercury_compile.m"
                            if ((top_level__mercury_compile__MaybeVariables_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "mercury_compile.m"
                              {
#line 277 "mercury_compile.m"
                                top_level__mercury_compile__MaybeMCFlags_144 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 278 "mercury_compile.m"
                                {
#line 278 "mercury_compile.m"
                                  top_level__mercury_compile__Variables_143 = make__options_file__options_variables_init_0_f_0();
                                }
#line 276 "mercury_compile.m"
                              }
#line 275 "mercury_compile.m"
                            else
#line 272 "mercury_compile.m"
                              {
#line 272 "mercury_compile.m"
                                top_level__mercury_compile__Variables_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeVariables_58, (MR_Integer) 0)));
#line 273 "mercury_compile.m"
                                {
#line 273 "mercury_compile.m"
                                  make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile__FlagsArgsGlobals_53, top_level__mercury_compile__Variables_143, &top_level__mercury_compile__MaybeMCFlags_144);
                                }
#line 272 "mercury_compile.m"
                              }
#line 268 "mercury_compile.m"
                          }
#line 264 "mercury_compile.m"
                      }
#line 263 "mercury_compile.m"
                    else
#line 259 "mercury_compile.m"
                      {
#line 260 "mercury_compile.m"
                        {
#line 260 "mercury_compile.m"
                          libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__FlagsErrors_52);
                        }
#line 261 "mercury_compile.m"
                        {
#line 261 "mercury_compile.m"
                          top_level__mercury_compile__Variables_143 = make__options_file__options_variables_init_0_f_0();
                        }
#line 262 "mercury_compile.m"
                        top_level__mercury_compile__MaybeMCFlags_144 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 259 "mercury_compile.m"
                      }
#line 313 "mercury_compile.m"
                    if ((top_level__mercury_compile__MaybeMCFlags_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "mercury_compile.m"
                      {
#line 315 "mercury_compile.m"
                        {
#line 315 "mercury_compile.m"
                          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 315 "mercury_compile.m"
                          return;
                        }
#line 314 "mercury_compile.m"
                      }
#line 313 "mercury_compile.m"
                    else
#line 299 "mercury_compile.m"
                      {
#line 299 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__MCFlags_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile__MaybeMCFlags_144, (MR_Integer) 0)));
#line 299 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__Errors_105;
#line 299 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__ActualGlobals_106;
#line 299 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_107_107;
#line 300 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_98_98;
#line 300 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_99_99;
#line 300 "mercury_compile.m"
                        MR_Word top_level__mercury_compile__V_100_100;

#line 300 "mercury_compile.m"
                        {
#line 300 "mercury_compile.m"
                          top_level__mercury_compile__V_107_107 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile__MCFlags_101, top_level__mercury_compile__OptionArgs_120);
                        }
#line 300 "mercury_compile.m"
                        {
#line 300 "mercury_compile.m"
                          libs__handle_options__handle_given_options_8_p_0(top_level__mercury_compile__V_107_107, &top_level__mercury_compile__V_98_98, &top_level__mercury_compile__V_99_99, &top_level__mercury_compile__V_100_100, &top_level__mercury_compile__Errors_105, &top_level__mercury_compile__ActualGlobals_106);
                        }
#line 308 "mercury_compile.m"
                        if ((top_level__mercury_compile__Errors_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "mercury_compile.m"
                          {
#line 310 "mercury_compile.m"
                            top_level__mercury_compile__main_after_setup_7_p_0(top_level__mercury_compile__Variables_143, top_level__mercury_compile__OptionArgs_120, top_level__mercury_compile__NonOptionArgs_121, top_level__mercury_compile__Link_119, top_level__mercury_compile__ActualGlobals_106);
#line 310 "mercury_compile.m"
                            return;
                          }
#line 308 "mercury_compile.m"
                        else
#line 307 "mercury_compile.m"
                          {
#line 307 "mercury_compile.m"
                            libs__handle_options__usage_errors_3_p_0(top_level__mercury_compile__Errors_105);
#line 307 "mercury_compile.m"
                            return;
                          }
#line 299 "mercury_compile.m"
                      }
#line 10902 "top_level.mercury_compile.c"
                  }
#line 10904 "top_level.mercury_compile.c"
              }
#line 10906 "top_level.mercury_compile.c"
          }
#line 118 "mercury_compile.m"
      }
#line 105 "mercury_compile.m"
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
