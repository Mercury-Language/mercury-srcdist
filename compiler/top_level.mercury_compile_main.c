/*
** Automatically generated from `mercury_compile_main.m'
** by the Mercury compiler,
** version rotd-2016-09-27
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


/* :- module top_level.mercury_compile_main. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile_main__init
ENDINIT
*/

#include "top_level.mercury_compile_main.mih"


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
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile_main____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile_main____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1];

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1;

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1];

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2];

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0[2];

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0;

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1;

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_value_ordered_maybe_write_d_file_0[2];

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0[2];

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0[2];

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____compile_0_0_10001(
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____compile_0_0_10001(
  MR_Box * top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0_10001(
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0_10001(
  MR_Box * top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001(
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001(
  MR_Box * top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
  MR_Word top_level__mercury_compile_main__Compile_15,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__1_29,
  MR_Word * top_level__mercury_compile_main__LambdaHeadVar__3_31);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(
  MR_Word top_level__mercury_compile_main__OpModeArgs_11,
  MR_Word top_level__mercury_compile_main__FileOrModule_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__Globals_14,
  MR_Word * top_level__mercury_compile_main__Succeeded_16,
  MR_Tuple * top_level__mercury_compile_main__HeadVar__8_8);

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
  MR_String top_level__mercury_compile_main__DirName_11,
  MR_String top_level__mercury_compile_main__FileName_12,
  MR_Word top_level__mercury_compile_main__FileType_13,
  MR_Word * top_level__mercury_compile_main__Continue_14,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21);

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(
  MR_Word top_level__mercury_compile_main__V_48_48,
  MR_Word top_level__mercury_compile_main__V_49_49,
  MR_Word top_level__mercury_compile_main__Globals_10,
  MR_Word top_level__mercury_compile_main__ModuleName_11,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_12,
  MR_Word top_level__mercury_compile_main__OptionVariables_13,
  MR_Word top_level__mercury_compile_main__OptionArgs_14,
  MR_Word top_level__mercury_compile_main__Compile_15,
  MR_Word * top_level__mercury_compile_main__Succeeded_16);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1867__1_1_p_0(
  MR_Char top_level__mercury_compile_main__LambdaHeadVar__1_22);

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1191__1_2_p_0(
  MR_Word top_level__mercury_compile_main__ModulesToRecompile_34,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__1_58);

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__780__1_8_p_0(
  MR_Word top_level__mercury_compile_main__Compile_15,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__1_29,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__2_30,
  MR_Word * top_level__mercury_compile_main__LambdaHeadVar__3_31);

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(
  MR_Word * top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2,
  MR_Word top_level__mercury_compile_main__HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0(
  MR_Word top_level__mercury_compile_main__HeadVar__2_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0(
  MR_Word * top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2,
  MR_Word top_level__mercury_compile_main__HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main____Compare____compile_0_0(
  MR_Word * top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2,
  MR_Word top_level__mercury_compile_main__HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____compile_0_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void);

static MR_bool MR_CALL 
top_level__mercury_compile_main__halt_at_module_error_2_p_0(
  MR_Word top_level__mercury_compile_main__Globals_3,
  MR_Word top_level__mercury_compile_main__Errors_4);

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word top_level__mercury_compile_main__Verbose_7,
  MR_Word top_level__mercury_compile_main__Stats_8,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_22,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_23);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word top_level__mercury_compile_main__Globals_14,
  MR_Word top_level__mercury_compile_main__OpModeCodeGen_15,
  MR_Word top_level__mercury_compile_main__NestedSubModules_16,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_17,
  MR_Word top_level__mercury_compile_main__MaybeTimestampMap_18,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_54,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_20,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_56,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_57,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58);

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_Word top_level__mercury_compile_main__Verbose_9,
  MR_Word top_level__mercury_compile_main__Stats_10,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_19,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_20);

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_Word top_level__mercury_compile_main__Verbose_9,
  MR_Word top_level__mercury_compile_main__Stats_10,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_14,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word top_level__mercury_compile_main__Verbose_7,
  MR_Word top_level__mercury_compile_main__Stats_8,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_21,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_22);

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definitions_5_p_0(
  MR_Word top_level__mercury_compile_main__Verbose_6,
  MR_Word top_level__mercury_compile_main__Stats_7,
  MR_Word top_level__mercury_compile_main__HLDS_8);

static void MR_CALL 
top_level__mercury_compile_main__make_hlds_17_p_0(
  MR_Word top_level__mercury_compile_main__Globals_18,
  MR_Word top_level__mercury_compile_main__AugCompUnit_19,
  MR_Word top_level__mercury_compile_main__EventSet_20,
  MR_Word top_level__mercury_compile_main__MQInfo_21,
  MR_Word top_level__mercury_compile_main__TypeEqvMap_22,
  MR_Word top_level__mercury_compile_main__UsedModules_23,
  MR_Word top_level__mercury_compile_main__Verbose_24,
  MR_Word top_level__mercury_compile_main__Stats_25,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_38,
  MR_Word * top_level__mercury_compile_main__QualInfo_27,
  MR_Word * top_level__mercury_compile_main__FoundInvalidType_28,
  MR_Word * top_level__mercury_compile_main__FoundInvalidInstOrMode_29,
  MR_Word * top_level__mercury_compile_main__FoundSemanticError_30,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_39,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_40);

static void MR_CALL 
top_level__mercury_compile_main__maybe_grab_optfiles_9_p_0(
  MR_Word top_level__mercury_compile_main__Globals_10,
  MR_Word top_level__mercury_compile_main__OpModeAugment_11,
  MR_Word top_level__mercury_compile_main__Verbose_12,
  MR_Word top_level__mercury_compile_main__MaybeTransOptDeps_13,
  MR_Word top_level__mercury_compile_main__Imports0_14,
  MR_Word * top_level__mercury_compile_main__Imports_15,
  MR_Word * top_level__mercury_compile_main__Error_16);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(
  MR_Word * top_level__mercury_compile_main__TransOptDeps_4);

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_find_start_4_p_0(
  MR_String top_level__mercury_compile_main__SearchPattern_5,
  MR_Word * top_level__mercury_compile_main__Success_6);

static void MR_CALL 
top_level__mercury_compile_main__maybe_read_dependency_file_5_p_0(
  MR_Word top_level__mercury_compile_main__Globals_6,
  MR_Word top_level__mercury_compile_main__ModuleName_7,
  MR_Word * top_level__mercury_compile_main__MaybeTransOptDeps_8);

static void MR_CALL 
top_level__mercury_compile_main__pre_hlds_pass_16_p_0(
  MR_Word top_level__mercury_compile_main__Globals_17,
  MR_Word top_level__mercury_compile_main__OpModeAugment_18,
  MR_Word top_level__mercury_compile_main__WriteDFile0_19,
  MR_Word top_level__mercury_compile_main__ModuleAndImports0_20,
  MR_Word * top_level__mercury_compile_main__HLDS1_21,
  MR_Word * top_level__mercury_compile_main__QualInfo_22,
  MR_Word * top_level__mercury_compile_main__MaybeTimestampMap_23,
  MR_Word * top_level__mercury_compile_main__UndefTypes_24,
  MR_Word * top_level__mercury_compile_main__UndefModes_25,
  MR_Word * top_level__mercury_compile_main__FoundSemanticError_26,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_72,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_73,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_74,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_75);

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_12_p_0(
  MR_Word top_level__mercury_compile_main__Globals_13,
  MR_Word top_level__mercury_compile_main__OpModeAugment_14,
  MR_Word top_level__mercury_compile_main__ModuleAndImports_15,
  MR_Word top_level__mercury_compile_main__NestedSubModules_16,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_17,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_18,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_45,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_46);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_14_p_0(
  MR_Word top_level__mercury_compile_main__Globals_15,
  MR_Word top_level__mercury_compile_main__OpModeAugment_16,
  MR_String top_level__mercury_compile_main__SourceFileName_17,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_18,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_19,
  MR_Word top_level__mercury_compile_main__NestedSubModules0_20,
  MR_Word top_level__mercury_compile_main__HaveReadModuleMaps_21,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_22,
  MR_Word top_level__mercury_compile_main__RawCompUnit_23,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_24,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_37,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_38);

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_String * top_level__mercury_compile_main__ModuleToLink_6);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0(
  MR_Word top_level__mercury_compile_main__Globals_15,
  MR_Word top_level__mercury_compile_main__OpModeAugment_16,
  MR_String top_level__mercury_compile_main__FileName_17,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_18,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_19,
  MR_Word top_level__mercury_compile_main__NestedSubModules_20,
  MR_Word top_level__mercury_compile_main__HaveReadModuleMaps_21,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_22,
  MR_Word top_level__mercury_compile_main__RawCompUnits_23,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_31,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_25,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_26);

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word top_level__mercury_compile_main__Globals0_15,
  MR_Word * top_level__mercury_compile_main__Globals_16,
  MR_Word top_level__mercury_compile_main__FileOrModuleName_17,
  MR_Word * top_level__mercury_compile_main__ModuleName_18,
  MR_String * top_level__mercury_compile_main__SourceFileName_19,
  MR_Word top_level__mercury_compile_main__ReturnTimestamp_20,
  MR_Word * top_level__mercury_compile_main__MaybeTimestamp_21,
  MR_Word * top_level__mercury_compile_main__ParseTreeSrc_22,
  MR_Word * top_level__mercury_compile_main__Specs_23,
  MR_Word * top_level__mercury_compile_main__Errors_24,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_47);

static void MR_CALL 
top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(
  MR_Word top_level__mercury_compile_main__Report_6,
  MR_Word top_level__mercury_compile_main__OptionArgs_7,
  MR_Word top_level__mercury_compile_main__Args_8);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_3(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4);

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1);

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0(
  MR_Word top_level__mercury_compile_main__Globals0_11,
  MR_Word top_level__mercury_compile_main__OpModeAugment_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__FileOrModule_14,
  MR_Word top_level__mercury_compile_main__MaybeModulesToRecompile_15,
  MR_Word top_level__mercury_compile_main__HaveReadModuleMap0_16,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_17,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_18);

static void MR_CALL 
top_level__mercury_compile_main__apply_process_module_7_p_0(
  MR_Word top_level__mercury_compile_main__ProcessModule_8,
  MR_String top_level__mercury_compile_main__FileName_9,
  MR_Word top_level__mercury_compile_main__ModuleName_10,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__call_make_private_interface_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_10,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__call_make_short_interface_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__HeadVar__3_10,
  MR_Word top_level__mercury_compile_main__HeadVar__4_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__call_make_interface_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_10,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word top_level__mercury_compile_main__Globals_7,
  MR_String top_level__mercury_compile_main__TimestampSuffix_8,
  MR_Word top_level__mercury_compile_main__ModuleName_9,
  MR_Word * top_level__mercury_compile_main__TimestampFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0(
  MR_Word top_level__mercury_compile_main__Globals_3,
  MR_Word * top_level__mercury_compile_main__FindTimestampFiles_4);

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word top_level__mercury_compile_main__Globals_7,
  MR_String top_level__mercury_compile_main__TargetSuffix_8,
  MR_Word top_level__mercury_compile_main__ModuleName_9,
  MR_Word * top_level__mercury_compile_main__TargetFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0(
  MR_Word top_level__mercury_compile_main__Globals_3,
  MR_Word * top_level__mercury_compile_main__FindTargetFiles_4);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_6(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_5(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_4(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(
  MR_Word top_level__mercury_compile_main__Globals0_9,
  MR_Word top_level__mercury_compile_main__OpModeArgs_10,
  MR_Word top_level__mercury_compile_main__OptionArgs_11,
  MR_Word top_level__mercury_compile_main__FileOrModule_12,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_13,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_14);

static MR_Word MR_CALL 
top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(
  MR_Word top_level__mercury_compile_main__OpModeArgs_11,
  MR_Word top_level__mercury_compile_main__FileOrModule_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__Globals_14,
  MR_Word top_level__mercury_compile_main__HeadVar__5_15,
  MR_Word * top_level__mercury_compile_main__Succeeded_16,
  MR_Tuple * top_level__mercury_compile_main__HeadVar__8_8);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0(
  MR_Word top_level__mercury_compile_main__Globals_11,
  MR_Word top_level__mercury_compile_main__OpModeArgs_12,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_13,
  MR_Word top_level__mercury_compile_main__OptionVariables_14,
  MR_Word top_level__mercury_compile_main__OptionArgs_15,
  MR_String top_level__mercury_compile_main__Arg_16,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_17,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_18);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_cmd_line_args_12_p_0(
  MR_Word top_level__mercury_compile_main__Globals_1,
  MR_Word top_level__mercury_compile_main__OpModeArgs_2,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_3,
  MR_Word top_level__mercury_compile_main__OptionVariables_4,
  MR_Word top_level__mercury_compile_main__OptionArgs_5,
  MR_Word top_level__mercury_compile_main__HeadVar__6_6,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_7,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Modules_8,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_10);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0(
  MR_Word top_level__mercury_compile_main__Globals_12,
  MR_Word top_level__mercury_compile_main__OpModeArgs_13,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_14,
  MR_Word top_level__mercury_compile_main__OptionVariables_15,
  MR_Word top_level__mercury_compile_main__OptionArgs_16,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_27,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Modules_28,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_29,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_30);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0(
  MR_Word top_level__mercury_compile_main__Globals_5,
  MR_Word top_level__mercury_compile_main__OpModeQuery_6);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_standalone_interface_4_p_0(
  MR_Word top_level__mercury_compile_main__Globals_5,
  MR_String top_level__mercury_compile_main__StandaloneIntBasename_6);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_8_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_8_p_0(
  MR_Word top_level__mercury_compile_main__Globals_9,
  MR_Word top_level__mercury_compile_main__OpMode_10,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_11,
  MR_Word top_level__mercury_compile_main__OptionVariables_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__Args_14);

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_9,
  MR_Word top_level__mercury_compile_main__OptionVariables_10,
  MR_Word top_level__mercury_compile_main__OptionArgs_11,
  MR_Word top_level__mercury_compile_main__Args_12);

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrade_9_p_0(
  MR_Word top_level__mercury_compile_main__VeryVerbose_10,
  MR_String top_level__mercury_compile_main__DirName_11,
  MR_String top_level__mercury_compile_main__FileName_12,
  MR_Word top_level__mercury_compile_main__FileType_13,
  MR_Word * top_level__mercury_compile_main__Continue_14,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21);

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box top_level__mercury_compile_main__wrapper_arg_7,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box top_level__mercury_compile_main__wrapper_arg_7,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0(
  MR_Word top_level__mercury_compile_main__Globals_6,
  MR_Word top_level__mercury_compile_main__MaybeConfigMerStdLibDir_7,
  MR_Word * top_level__mercury_compile_main__GradeOpts_8);

static void MR_CALL 
top_level__mercury_compile_main__real_main_after_expansion_3_p_0(
  MR_Word top_level__mercury_compile_main__CmdLineArgs_4);

static void MR_CALL 
top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(
  MR_Word top_level__mercury_compile_main__S_5,
  MR_Word * top_level__mercury_compile_main__Res_6);

static void MR_CALL 
top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word * top_level__mercury_compile_main__HeadVar__2_2);


static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[36][2];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[2][4];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][6];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][1];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[1][12];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][9];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[7][3];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][13];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[2][10];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[4][5];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][17];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][7];

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_14[1][11];


/* sealed */ struct top_level__mercury_compile_main__vector_common_type_10_0_s {
  const MR_String top_level__mercury_compile_main__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct top_level__mercury_compile_main__vector_common_type_10_0_s top_level__mercury_compile_main_vector_common_10[12];



static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_1[36][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "mmc -f *.m"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a module name to file name mapping is created"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Smart recompilation will not work unless"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You need to remake the dependencies."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[8])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not required for target language"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not yet supported with target language"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "module name does not match file name: "))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains module"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot read trans-opt dependencies"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for module"))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[0])),
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_1[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_3[2][6] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_5[1][12] = {
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
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_7[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_main__do_op_mode_query_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[2])),
    ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[3])),
    ((MR_Box) (top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[3])),
    ((MR_Box) (top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0)),
    ((MR_Box) (&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_9[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_11[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_12[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_13[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_main_scalar_common_14[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&top_level__mercury_compile_main____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct top_level__mercury_compile_main__vector_common_type_10_0_s top_level__mercury_compile_main_vector_common_10[12] = {
  /* row 0 */   {     (MR_String) ".c" },
  /* row 1 */   {     (MR_String) ".cs" },
  /* row 2 */   {     (MR_String) ".java" },
  /* row 3 */   {     (MR_String) ".erl" },
  /* row 4 */   {     (MR_String) ".c_date" },
  /* row 5 */   {     (MR_String) ".cs_date" },
  /* row 6 */   {     (MR_String) ".java_date" },
  /* row 7 */   {     (MR_String) ".erl_date" },
  /* row 8 */   {     (MR_String) ".c_date" },
  /* row 9 */   {     (MR_String) ".cs_date" },
  /* row 10 */   {     (MR_String) ".java_date" },
  /* row 11 */   {     (MR_String) ".erl_date" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"
#include "top_level.mercury_compile_main.mh"



static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 top_level__mercury_compile_main____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_main__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct6 top_level__mercury_compile_main____vpti_pred_6__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &top_level__mercury_compile_main__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 top_level__mercury_compile_main____vpti_pred_4__plain_libs__globals__type_ctor_info_globals_0__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_VA_TypeInfo_Struct4 top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_compile_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile_main____Unify____compile_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____compile_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "compile",
  {     NULL },
  {     (MR_PseudoTypeInfo) &top_level__mercury_compile_main____vti_pred_4libs__globals__type_ctor_info_globals_0bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0 = {
  (MR_String) "fm_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1 = {
  (MR_String) "fm_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  top_level__mercury_compile_main__top_level__mercury_compile_main__field_types_file_or_module_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1[1] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1
};

static const MR_DuPtagLayout top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    top_level__mercury_compile_main__top_level__mercury_compile_main__du_stag_ordered_file_or_module_0_1
  }
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__du_functor_desc_file_or_module_0_1
};

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_main____Unify____file_or_module_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____file_or_module_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "file_or_module",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_name_ordered_file_or_module_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__du_ptag_ordered_file_or_module_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_file_or_module_0
};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0 = {
  (MR_String) "do_not_write_d_file",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1 = {
  (MR_String) "write_d_file",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_value_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1
};

static const MR_EnumFunctorDescPtr top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0[2] = {
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_0,
  &top_level__mercury_compile_main__top_level__mercury_compile_main__enum_functor_desc_maybe_write_d_file_0_1
};

static const MR_Integer top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_maybe_write_d_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001)),
  (MR_String) "top_level.mercury_compile_main",
  (MR_String) "maybe_write_d_file",
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_name_ordered_maybe_write_d_file_0 },
  {     top_level__mercury_compile_main__top_level__mercury_compile_main__enum_value_ordered_maybe_write_d_file_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  top_level__mercury_compile_main__top_level__mercury_compile_main__functor_number_map_maybe_write_d_file_0
};

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____compile_0_0_10001(
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main____Unify____compile_0_0(((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2));
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____compile_0_0_10001(
  MR_Box * top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Word top_level__mercury_compile_main__conv0_HeadVar__1_1;

    {
      top_level__mercury_compile_main____Compare____compile_0_0(&top_level__mercury_compile_main__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3));
    }
    *top_level__mercury_compile_main__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0_10001(
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main____Unify____file_or_module_0_0(((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2));
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0_10001(
  MR_Box * top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Word top_level__mercury_compile_main__conv0_HeadVar__1_1;

    {
      top_level__mercury_compile_main____Compare____file_or_module_0_0(&top_level__mercury_compile_main__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3));
    }
    *top_level__mercury_compile_main__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0_10001(
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0(((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2));
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0_10001(
  MR_Box * top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Word top_level__mercury_compile_main__conv0_HeadVar__1_1;

    {
      top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(&top_level__mercury_compile_main__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3));
    }
    *top_level__mercury_compile_main__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_48_95_95_49_95_95_91_51_93_95_48_8_p_0(
  MR_Word top_level__mercury_compile_main__Compile_15,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__1_29,
  MR_Word * top_level__mercury_compile_main__LambdaHeadVar__3_31)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    void MR_CALL (* top_level__mercury_compile_main__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Compile_15, (MR_Integer) 1)));
    MR_Box top_level__mercury_compile_main__conv2_LambdaHeadVar__3_31;
    MR_Box top_level__mercury_compile_main__conv1_LambdaHeadVar__7_35;

    {
      top_level__mercury_compile_main__func_0(((MR_Box) top_level__mercury_compile_main__Compile_15), ((MR_Box) (top_level__mercury_compile_main__LambdaHeadVar__1_29)), &top_level__mercury_compile_main__conv2_LambdaHeadVar__3_31, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv1_LambdaHeadVar__7_35);
    }
    *top_level__mercury_compile_main__LambdaHeadVar__3_31 = ((MR_Word) top_level__mercury_compile_main__conv2_LambdaHeadVar__3_31);
  }
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(top_level__mercury_compile_main__Globals_8, top_level__mercury_compile_main__SourceFileName_9, top_level__mercury_compile_main__RawCompUnit_12);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(
  MR_Word top_level__mercury_compile_main__OpModeArgs_11,
  MR_Word top_level__mercury_compile_main__FileOrModule_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__Globals_14,
  MR_Word * top_level__mercury_compile_main__Succeeded_16,
  MR_Tuple * top_level__mercury_compile_main__HeadVar__8_8)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Modules_18;
    MR_Word top_level__mercury_compile_main__ExtraObjFiles_19;

    {
      top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__OpModeArgs_11, top_level__mercury_compile_main__OptionArgs_13, top_level__mercury_compile_main__FileOrModule_12, &top_level__mercury_compile_main__Modules_18, &top_level__mercury_compile_main__ExtraObjFiles_19);
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *top_level__mercury_compile_main__HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_main__Modules_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__ExtraObjFiles_19));
    }
    *top_level__mercury_compile_main__Succeeded_16 = (MR_Integer) 1;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(
  MR_String top_level__mercury_compile_main__DirName_11,
  MR_String top_level__mercury_compile_main__FileName_12,
  MR_Word top_level__mercury_compile_main__FileType_13,
  MR_Word * top_level__mercury_compile_main__Continue_14,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    switch (top_level__mercury_compile_main__FileType_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 6:
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 3:
      case (MR_Integer) 0:
      case (MR_Integer) 8:
      case (MR_Integer) 9:
      case (MR_Integer) 4:
      case (MR_Integer) 2:
      case (MR_Integer) 10:
        {
          *top_level__mercury_compile_main__Continue_14 = (MR_Integer) 1;
          *top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            top_level__mercury_compile_main__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile_main__FileName_12, (MR_String) "csharp");
          }
          if (!(top_level__mercury_compile_main__succeeded))
            {
              {
                top_level__mercury_compile_main__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile_main__FileName_12, (MR_String) "erlang");
              }
              if (!(top_level__mercury_compile_main__succeeded))
                {
                  {
                    top_level__mercury_compile_main__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile_main__FileName_12, (MR_String) "java");
                  }
                }
            }
          if (top_level__mercury_compile_main__succeeded)
            {
              MR_Word top_level__mercury_compile_main__V_30_30;

              {
                top_level__mercury_compile_main__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile_main__FileName_12));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_main__V_30_30));
              }
            }
          else
            {
              MR_String top_level__mercury_compile_main__InitFile_17;
              MR_Word top_level__mercury_compile_main__Result_18;
              MR_String top_level__mercury_compile_main__V_31_31;

              {
                top_level__mercury_compile_main__V_31_31 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile_main__DirName_11, top_level__mercury_compile_main__FileName_12);
              }
              {
                top_level__mercury_compile_main__InitFile_17 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile_main__V_31_31, (MR_String) "mer_std.init");
              }
              {
                mercury__io__check_file_accessibility_5_p_0(top_level__mercury_compile_main__InitFile_17, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[35]), &top_level__mercury_compile_main__Result_18);
              }
              if ((top_level__mercury_compile_main__Result_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word top_level__mercury_compile_main__V_40_40;

                  {
                    top_level__mercury_compile_main__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_40_40, 0) = ((MR_Box) (top_level__mercury_compile_main__FileName_12));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_40_40, 1) = ((MR_Box) (top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--libgrade"));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_main__V_40_40));
                  }
                }
              else
                *top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21 = top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20;
            }
          *top_level__mercury_compile_main__Continue_14 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_7)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv0_LambdaHeadVar__3_31;

    {
      top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__780__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), &top_level__mercury_compile_main__conv0_LambdaHeadVar__3_31);
    }
    *top_level__mercury_compile_main__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_main__conv0_LambdaHeadVar__3_31));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(
  MR_Word top_level__mercury_compile_main__V_48_48,
  MR_Word top_level__mercury_compile_main__V_49_49,
  MR_Word top_level__mercury_compile_main__Globals_10,
  MR_Word top_level__mercury_compile_main__ModuleName_11,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_12,
  MR_Word top_level__mercury_compile_main__OptionVariables_13,
  MR_Word top_level__mercury_compile_main__OptionArgs_14,
  MR_Word top_level__mercury_compile_main__Compile_15,
  MR_Word * top_level__mercury_compile_main__Succeeded_16)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__InvokedByMake_18;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_10, (MR_Integer) 615, &top_level__mercury_compile_main__InvokedByMake_18);
    }
    switch (top_level__mercury_compile_main__InvokedByMake_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word top_level__mercury_compile_main__TypeCtorInfo_47_47;
          MR_Word top_level__mercury_compile_main__Builder_19;
          MR_Word top_level__mercury_compile_main__V_25_25;

          {
            top_level__mercury_compile_main__Builder_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Builder_19, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_14[0]));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Builder_19, 1) = ((MR_Box) (top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0_1));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Builder_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Builder_19, 3) = ((MR_Box) (top_level__mercury_compile_main__Compile_15));
          }
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
          top_level__mercury_compile_main__TypeCtorInfo_47_47 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
          {
            make__util__build_with_module_options_args_12_p_0(top_level__mercury_compile_main__TypeCtorInfo_47_47, top_level__mercury_compile_main__TypeCtorInfo_47_47, top_level__mercury_compile_main__Globals_10, top_level__mercury_compile_main__ModuleName_11, top_level__mercury_compile_main__DetectedGradeFlags_12, top_level__mercury_compile_main__OptionVariables_13, top_level__mercury_compile_main__OptionArgs_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile_main__Builder_19, top_level__mercury_compile_main__Succeeded_16, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__V_25_25);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__compile_target_code__link_module_list_6_p_0(top_level__mercury_compile_main__V_48_48, top_level__mercury_compile_main__V_49_49, top_level__mercury_compile_main__Globals_10, top_level__mercury_compile_main__Succeeded_16);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1867__1_1_p_0(
  MR_Char top_level__mercury_compile_main__LambdaHeadVar__1_22)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__succeeded = mercury__char__is_whitespace_1_p_0(top_level__mercury_compile_main__LambdaHeadVar__1_22);
    }
    top_level__mercury_compile_main__succeeded = !(top_level__mercury_compile_main__succeeded);
    return top_level__mercury_compile_main__succeeded;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1191__1_2_p_0(
  MR_Word top_level__mercury_compile_main__ModulesToRecompile_34,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__1_58)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__RawCompUnitModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__LambdaHeadVar__1_58, (MR_Integer) 0)));
    MR_Word top_level__mercury_compile_main__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__LambdaHeadVar__1_58, (MR_Integer) 1)));
    MR_Word top_level__mercury_compile_main__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__LambdaHeadVar__1_58, (MR_Integer) 2)));

    {
      top_level__mercury_compile_main__succeeded = mercury__list__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (top_level__mercury_compile_main__RawCompUnitModuleName_37)), top_level__mercury_compile_main__ModulesToRecompile_34);
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__IntroducedFrom__pred__compile_with_module_options__780__1_8_p_0(
  MR_Word top_level__mercury_compile_main__Compile_15,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__1_29,
  MR_Word top_level__mercury_compile_main__LambdaHeadVar__2_30,
  MR_Word * top_level__mercury_compile_main__LambdaHeadVar__3_31)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_95_119_105_116_104_95_109_111_100_117_108_101_95_111_112_116_105_111_110_115_95_95_55_56_48_95_95_49_95_95_91_51_93_95_48_8_p_0(top_level__mercury_compile_main__Compile_15, top_level__mercury_compile_main__LambdaHeadVar__1_29, top_level__mercury_compile_main__LambdaHeadVar__3_31);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____maybe_write_d_file_0_0(
  MR_Word * top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2,
  MR_Word top_level__mercury_compile_main__HeadVar__3_3)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Integer top_level__mercury_compile_main__Cast_HeadVar1_4 = (MR_Integer) top_level__mercury_compile_main__HeadVar__2_2;
    MR_Integer top_level__mercury_compile_main__Cast_HeadVar2_5 = (MR_Integer) top_level__mercury_compile_main__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(top_level__mercury_compile_main__HeadVar__1_1, top_level__mercury_compile_main__Cast_HeadVar1_4, top_level__mercury_compile_main__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____maybe_write_d_file_0_0(
  MR_Word top_level__mercury_compile_main__HeadVar__2_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__HeadVar__2_1 == top_level__mercury_compile_main__HeadVar__2_2);

    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____file_or_module_0_0(
  MR_Word * top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2,
  MR_Word top_level__mercury_compile_main__HeadVar__3_3)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Integer top_level__mercury_compile_main__CastX_12 = (MR_Integer) top_level__mercury_compile_main__HeadVar__2_2;
    MR_Integer top_level__mercury_compile_main__CastY_13 = (MR_Integer) top_level__mercury_compile_main__HeadVar__3_3;

    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__CastX_12 == top_level__mercury_compile_main__CastY_13);
    if (top_level__mercury_compile_main__succeeded)
      *top_level__mercury_compile_main__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) top_level__mercury_compile_main__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String top_level__mercury_compile_main__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) top_level__mercury_compile_main__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_String top_level__mercury_compile_main__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(top_level__mercury_compile_main__HeadVar__1_1, top_level__mercury_compile_main__V_16_16, top_level__mercury_compile_main__V_5_5);
            }
          }
        else
          *top_level__mercury_compile_main__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word top_level__mercury_compile_main__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) top_level__mercury_compile_main__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *top_level__mercury_compile_main__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word top_level__mercury_compile_main__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__3_3, (MR_Integer) 0)));

            {
              mdbcomp__sym_name____Compare____sym_name_0_0(top_level__mercury_compile_main__HeadVar__1_1, top_level__mercury_compile_main__V_17_17, top_level__mercury_compile_main__V_11_11);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____file_or_module_0_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Integer top_level__mercury_compile_main__CastX_7 = (MR_Integer) top_level__mercury_compile_main__HeadVar__1_1;
    MR_Integer top_level__mercury_compile_main__CastY_8 = (MR_Integer) top_level__mercury_compile_main__HeadVar__2_2;

    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__CastX_7 == top_level__mercury_compile_main__CastY_8);
    if (top_level__mercury_compile_main__succeeded)
      top_level__mercury_compile_main__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) top_level__mercury_compile_main__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String top_level__mercury_compile_main__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HeadVar__1_1, (MR_Integer) 0)));
        MR_String top_level__mercury_compile_main__V_4_4;

        top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (top_level__mercury_compile_main__succeeded)
          {
            top_level__mercury_compile_main__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HeadVar__2_2, (MR_Integer) 0)));
            top_level__mercury_compile_main__succeeded = (strcmp(top_level__mercury_compile_main__V_3_3, top_level__mercury_compile_main__V_4_4) == 0);
          }
      }
    else
      {
        MR_Word top_level__mercury_compile_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_main__V_6_6;

        top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (top_level__mercury_compile_main__succeeded)
          {
            top_level__mercury_compile_main__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__2_2, (MR_Integer) 0)));
            {
              top_level__mercury_compile_main__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_main__V_5_5, top_level__mercury_compile_main__V_6_6);
            }
          }
      }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main____Compare____compile_0_0(
  MR_Word * top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2,
  MR_Word top_level__mercury_compile_main__HeadVar__3_3)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Cast_HeadVar1_4 = top_level__mercury_compile_main__HeadVar__2_2;
    MR_Word top_level__mercury_compile_main__Cast_HeadVar2_5 = top_level__mercury_compile_main__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_3[0], top_level__mercury_compile_main__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile_main__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile_main__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main____Unify____compile_0_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word top_level__mercury_compile_main__HeadVar__2_2)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Cast_HeadVar1_3 = top_level__mercury_compile_main__HeadVar__1_1;
    MR_Word top_level__mercury_compile_main__Cast_HeadVar2_4 = top_level__mercury_compile_main__HeadVar__2_2;

    {
      top_level__mercury_compile_main__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) top_level__mercury_compile_main__Cast_HeadVar1_3, (MR_Word) top_level__mercury_compile_main__Cast_HeadVar2_4);
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__gc_init_2_p_0(void)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

{
#define MR_PROC_LABEL top_level__mercury_compile_main__gc_init_2_p_0


		{

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


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__halt_at_module_error_2_p_0(
  MR_Word top_level__mercury_compile_main__Globals_3,
  MR_Word top_level__mercury_compile_main__Errors_4)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;

    {
      top_level__mercury_compile_main__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile_main__TypeCtorInfo_9_9, top_level__mercury_compile_main__Errors_4);
    }
    if (top_level__mercury_compile_main__succeeded)
      {
        {
          MR_Word top_level__mercury_compile_main__HaltSyntax_5;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_3, (MR_Integer) 3, &top_level__mercury_compile_main__HaltSyntax_5);
          }
          top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__HaltSyntax_5 == (MR_Integer) 1);
        }
        if (!(top_level__mercury_compile_main__succeeded))
          {
            MR_Word top_level__mercury_compile_main__FatalErrors_6;
            MR_Word top_level__mercury_compile_main__V_7_7;

            {
              top_level__mercury_compile_main__V_7_7 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
            }
            {
              mercury__set__intersect_3_p_0(top_level__mercury_compile_main__TypeCtorInfo_9_9, top_level__mercury_compile_main__Errors_4, top_level__mercury_compile_main__V_7_7, &top_level__mercury_compile_main__FatalErrors_6);
            }
            {
              top_level__mercury_compile_main__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile_main__TypeCtorInfo_9_9, top_level__mercury_compile_main__FatalErrors_6);
            }
          }
      }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(
  MR_Word top_level__mercury_compile_main__Verbose_7,
  MR_Word top_level__mercury_compile_main__Stats_8,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_22,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_23)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Globals_11;
    MR_Word top_level__mercury_compile_main__ProfileCalls_12;
    MR_Word top_level__mercury_compile_main__ProfileTime_13;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_main__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_11, (MR_Integer) 192, &top_level__mercury_compile_main__ProfileCalls_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_11, (MR_Integer) 193, &top_level__mercury_compile_main__ProfileTime_13);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__ProfileCalls_12 == (MR_Integer) 1);
    if (!(top_level__mercury_compile_main__succeeded))
      top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__ProfileTime_13 == (MR_Integer) 1);
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Word top_level__mercury_compile_main__ModuleName_14;
        MR_String top_level__mercury_compile_main__ProfFileName_15;
        MR_Word top_level__mercury_compile_main__Res_16;

        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_7, (MR_String) "% Outputting profiling call graph...");
        }
        {
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_main__Verbose_7);
        }
        {
          hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_main__ModuleName_14);
        }
        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_11, top_level__mercury_compile_main__ModuleName_14, (MR_String) ".prof", (MR_Integer) 0, &top_level__mercury_compile_main__ProfFileName_15);
        }
        {
          mercury__io__open_output_4_p_0(top_level__mercury_compile_main__ProfFileName_15, &top_level__mercury_compile_main__Res_16);
        }
        if (((MR_tag((MR_Word) top_level__mercury_compile_main__Res_16)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word top_level__mercury_compile_main__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Res_16, (MR_Integer) 0)));
            MR_String top_level__mercury_compile_main__ErrorMsg_21;
            MR_String top_level__mercury_compile_main__V_36_36;

            {
              top_level__mercury_compile_main__V_36_36 = mercury__io__error_message_1_f_0(top_level__mercury_compile_main__IOError_20);
            }
            {
              top_level__mercury_compile_main__ErrorMsg_21 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write profiling static call graph: ", top_level__mercury_compile_main__V_36_36);
            }
            {
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_main__ErrorMsg_21);
            }
            *top_level__mercury_compile_main__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_22;
          }
        else
          {
            MR_Word top_level__mercury_compile_main__FileStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Res_16, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_main__OutputStream_18;
            MR_Word top_level__mercury_compile_main__V_19_19;

            {
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__FileStream_17, &top_level__mercury_compile_main__OutputStream_18);
            }
            {
              transform_hlds__dependency_graph__write_prof_dependency_graph_4_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_23);
            }
            {
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__OutputStream_18, &top_level__mercury_compile_main__V_19_19);
            }
            {
              mercury__io__close_output_3_p_0(top_level__mercury_compile_main__FileStream_17);
            }
          }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_7, (MR_String) " done.\n");
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_8);
        }
      }
    else
      *top_level__mercury_compile_main__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_22;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile_main__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__after_front_end_passes_13_p_0(
  MR_Word top_level__mercury_compile_main__Globals_14,
  MR_Word top_level__mercury_compile_main__OpModeCodeGen_15,
  MR_Word top_level__mercury_compile_main__NestedSubModules_16,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_17,
  MR_Word top_level__mercury_compile_main__MaybeTimestampMap_18,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_54,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_20,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_56,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_57,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Verbose_24;
    MR_Word top_level__mercury_compile_main__Stats_25;
    MR_Word top_level__mercury_compile_main__HighLevelCode_26;
    MR_Word top_level__mercury_compile_main__Target_27;
    MR_Word top_level__mercury_compile_main__ModuleName_28;
    MR_String top_level__mercury_compile_main__UsageFileName_29;
    MR_Word top_level__mercury_compile_main__HaltAtWarn_31;
    MR_Word top_level__mercury_compile_main__FrontEndErrors_32;
    MR_Integer top_level__mercury_compile_main__NumErrors_33;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_63_63;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66;
    MR_Word top_level__mercury_compile_main__V_30_30;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_14, (MR_Integer) 47, &top_level__mercury_compile_main__Verbose_24);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_14, (MR_Integer) 57, &top_level__mercury_compile_main__Stats_25);
    }
    {
      top_level__mercury_compile_main__maybe_output_prof_call_graph_6_p_0(top_level__mercury_compile_main__Verbose_24, top_level__mercury_compile_main__Stats_25, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_54, &top_level__mercury_compile_main__STATE_VARIABLE_HLDS_63_63);
    }
    {
      top_level__mercury_compile_middle_passes__middle_pass_6_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_57, &top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_14, (MR_Integer) 253, &top_level__mercury_compile_main__HighLevelCode_26);
    }
    {
      libs__globals__get_target_2_p_0(top_level__mercury_compile_main__Globals_14, &top_level__mercury_compile_main__Target_27);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__ModuleName_28);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__ModuleName_28, (MR_String) ".used", (MR_Integer) 1, &top_level__mercury_compile_main__UsageFileName_29);
    }
    {
      mercury__io__remove_file_4_p_0(top_level__mercury_compile_main__UsageFileName_29, &top_level__mercury_compile_main__V_30_30);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_14, (MR_Integer) 2, &top_level__mercury_compile_main__HaltAtWarn_31);
    }
    switch (top_level__mercury_compile_main__HaltAtWarn_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_main__FrontEndErrors_32 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55);
        }
        break;
      case (MR_Integer) 1:
        {
          top_level__mercury_compile_main__FrontEndErrors_32 = parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55);
        }
        break;
    }
    {
      hlds__hlds_module__module_info_get_num_errors_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__NumErrors_33);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__FrontEndErrors_32 == (MR_Integer) 0);
    if (top_level__mercury_compile_main__succeeded)
      top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__NumErrors_33 == (MR_Integer) 0);
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Word top_level__mercury_compile_main__Succeeded_37;
        MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78;

        switch (top_level__mercury_compile_main__Target_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word top_level__mercury_compile_main__ExportDecls_42;

              {
                backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__ExportDecls_42);
              }
              {
                backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_main__ExportDecls_42, top_level__mercury_compile_main__ModuleName_28);
              }
              switch (top_level__mercury_compile_main__HighLevelCode_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word top_level__mercury_compile_main__GlobalData_49;
                    MR_Word top_level__mercury_compile_main__LLDS_50;

                    {
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_main__GlobalData_49, &top_level__mercury_compile_main__LLDS_50, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58);
                    }
                    {
                      top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0(top_level__mercury_compile_main__OpModeCodeGen_15, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78, top_level__mercury_compile_main__GlobalData_49, top_level__mercury_compile_main__LLDS_50, top_level__mercury_compile_main__ModuleName_28, &top_level__mercury_compile_main__Succeeded_37, top_level__mercury_compile_main__ExtraObjFiles_20);
                    }
                    *top_level__mercury_compile_main__STATE_VARIABLE_Specs_56 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word top_level__mercury_compile_main__MLDS_123;
                    MR_Word top_level__mercury_compile_main__NewSpecs_124;
                    MR_Word top_level__mercury_compile_main__TargetCodeSucceeded_125;
                    MR_Word top_level__mercury_compile_main__V_43_43;

                    {
                      top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__V_43_43, &top_level__mercury_compile_main__MLDS_123, &top_level__mercury_compile_main__NewSpecs_124, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58);
                    }
                    {
                      *top_level__mercury_compile_main__STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_main__NewSpecs_124, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55);
                    }
                    {
                      top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__MLDS_123, &top_level__mercury_compile_main__TargetCodeSucceeded_125);
                    }
                    switch (top_level__mercury_compile_main__OpModeCodeGen_15) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        switch (top_level__mercury_compile_main__TargetCodeSucceeded_125) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            top_level__mercury_compile_main__Succeeded_37 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_String top_level__mercury_compile_main__C_File_44;
                              MR_Word top_level__mercury_compile_main__TargetType_45;
                              MR_Word top_level__mercury_compile_main__PIC_46;
                              MR_String top_level__mercury_compile_main__Obj_47;
                              MR_String top_level__mercury_compile_main__O_File_48;
                              MR_Word top_level__mercury_compile_main__OutputStream_119;

                              {
                                parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__ModuleName_28, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile_main__C_File_44);
                              }
                              {
                                backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_main__Globals_14, &top_level__mercury_compile_main__TargetType_45);
                              }
                              {
                                backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__TargetType_45, &top_level__mercury_compile_main__PIC_46);
                              }
                              {
                                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__PIC_46, &top_level__mercury_compile_main__Obj_47);
                              }
                              {
                                parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__ModuleName_28, top_level__mercury_compile_main__Obj_47, (MR_Integer) 0, &top_level__mercury_compile_main__O_File_48);
                              }
                              {
                                mercury__io__output_stream_3_p_0(&top_level__mercury_compile_main__OutputStream_119);
                              }
                              {
                                backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__OutputStream_119, top_level__mercury_compile_main__PIC_46, top_level__mercury_compile_main__C_File_44, top_level__mercury_compile_main__O_File_48, &top_level__mercury_compile_main__Succeeded_37);
                              }
                              {
                                parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile_main__Succeeded_37);
                              }
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 0:
                        top_level__mercury_compile_main__Succeeded_37 = top_level__mercury_compile_main__TargetCodeSucceeded_125;
                        break;
                    }
                    *top_level__mercury_compile_main__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word top_level__mercury_compile_main__MLDS_35;
              MR_Word top_level__mercury_compile_main__NewSpecs_36;
              MR_Word top_level__mercury_compile_main__V_34_34;

              {
                top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__V_34_34, &top_level__mercury_compile_main__MLDS_35, &top_level__mercury_compile_main__NewSpecs_36, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58);
              }
              {
                *top_level__mercury_compile_main__STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_main__NewSpecs_36, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55);
              }
              {
                top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_main__MLDS_35, &top_level__mercury_compile_main__Succeeded_37);
              }
              *top_level__mercury_compile_main__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word top_level__mercury_compile_main__ELDS_51;

              {
                top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__ELDS_51, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58);
              }
              {
                top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_main__ELDS_51, &top_level__mercury_compile_main__Succeeded_37);
              }
              *top_level__mercury_compile_main__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65;
              *top_level__mercury_compile_main__STATE_VARIABLE_Specs_56 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word top_level__mercury_compile_main__TargetCodeSucceeded_39;
              MR_Word top_level__mercury_compile_main__MLDS_117;
              MR_Word top_level__mercury_compile_main__NewSpecs_118;
              MR_Word top_level__mercury_compile_main__V_38_38;

              {
                top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_main__V_38_38, &top_level__mercury_compile_main__MLDS_117, &top_level__mercury_compile_main__NewSpecs_118, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58);
              }
              {
                *top_level__mercury_compile_main__STATE_VARIABLE_Specs_56 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_main__NewSpecs_118, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55);
              }
              {
                top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_main__MLDS_117, &top_level__mercury_compile_main__TargetCodeSucceeded_39);
              }
              switch (top_level__mercury_compile_main__OpModeCodeGen_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  switch (top_level__mercury_compile_main__TargetCodeSucceeded_39) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      top_level__mercury_compile_main__Succeeded_37 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word top_level__mercury_compile_main__OutputStream_40;
                        MR_String top_level__mercury_compile_main__JavaFile_41;
                        MR_Word top_level__mercury_compile_main__V_102_102;

                        {
                          mercury__io__output_stream_3_p_0(&top_level__mercury_compile_main__OutputStream_40);
                        }
                        {
                          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__ModuleName_28, (MR_String) ".java", (MR_Integer) 1, &top_level__mercury_compile_main__JavaFile_41);
                        }
                        {
                          top_level__mercury_compile_main__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_102_102, 0) = ((MR_Box) (top_level__mercury_compile_main__JavaFile_41));
                          MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          backend_libs__compile_target_code__compile_java_files_6_p_0(top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__OutputStream_40, top_level__mercury_compile_main__V_102_102, &top_level__mercury_compile_main__Succeeded_37);
                        }
                        {
                          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile_main__Succeeded_37);
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 0:
                  top_level__mercury_compile_main__Succeeded_37 = top_level__mercury_compile_main__TargetCodeSucceeded_39;
                  break;
              }
              *top_level__mercury_compile_main__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_65_65;
            }
            break;
        }
        switch (top_level__mercury_compile_main__Succeeded_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word top_level__mercury_compile_main__TimestampFiles_52;
              MR_Word top_level__mercury_compile_main__V_112_112;
              void MR_CALL (* top_level__mercury_compile_main__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
              MR_Box top_level__mercury_compile_main__conv2_TimestampFiles_52;
              MR_Box top_level__mercury_compile_main__conv1_STATE_VARIABLE_IO_111_111;
              MR_Box top_level__mercury_compile_main__conv3_STATE_VARIABLE_IO_60;

              {
                recompilation__usage__write_usage_file_5_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_78_78, top_level__mercury_compile_main__NestedSubModules_16, top_level__mercury_compile_main__MaybeTimestampMap_18);
              }
              top_level__mercury_compile_main__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FindTimestampFiles_17, (MR_Integer) 1)));
              {
                top_level__mercury_compile_main__func_0(((MR_Box) top_level__mercury_compile_main__FindTimestampFiles_17), ((MR_Box) (top_level__mercury_compile_main__ModuleName_28)), &top_level__mercury_compile_main__conv2_TimestampFiles_52, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv1_STATE_VARIABLE_IO_111_111);
              }
              top_level__mercury_compile_main__TimestampFiles_52 = ((MR_Word) top_level__mercury_compile_main__conv2_TimestampFiles_52);
              {
                top_level__mercury_compile_main__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_112_112, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_13[0]));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_112_112, 1) = ((MR_Box) (top_level__mercury_compile_main__after_front_end_passes_13_p_0_1));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_112_112, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals_14));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile_main__V_112_112, top_level__mercury_compile_main__TimestampFiles_52, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv3_STATE_VARIABLE_IO_60);
              }
            }
            break;
        }
      }
    else
      {
        MR_Integer top_level__mercury_compile_main__ExitStatus_53;

        {
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_main__ExitStatus_53);
        }
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__ExitStatus_53 == (MR_Integer) 0);
        if (top_level__mercury_compile_main__succeeded)
          {
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
          }
        else
          {
          }
        *top_level__mercury_compile_main__ExtraObjFiles_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_58 = top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_66_66;
        *top_level__mercury_compile_main__STATE_VARIABLE_Specs_56 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_55;
      }
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1)
{
  {
    MR_Box top_level__mercury_compile_main__wrapper_arg_2;
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv0_HeadVar__2_2;

    {
      top_level__mercury_compile_main__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile_main__wrapper_arg_1));
    }
    top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__2_2));
    return top_level__mercury_compile_main__wrapper_arg_2;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_Word top_level__mercury_compile_main__Verbose_9,
  MR_Word top_level__mercury_compile_main__Stats_10,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_19,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_20)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_33_33;
    MR_Word top_level__mercury_compile_main__ModuleNames_13;
    MR_Word top_level__mercury_compile_main__LocalModulesList_14;
    MR_Word top_level__mercury_compile_main__SymNames_15;
    MR_Word top_level__mercury_compile_main__LocalModuleNames_16;
    MR_Word top_level__mercury_compile_main__AnalysisInfo0_17;
    MR_Word top_level__mercury_compile_main__AnalysisInfo_18;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
    }
    {
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_main__ModuleNames_13);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_main__Globals_8, (MR_Integer) 654, &top_level__mercury_compile_main__LocalModulesList_14);
    }
    top_level__mercury_compile_main__TypeCtorInfo_33_33 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      top_level__mercury_compile_main__SymNames_15 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile_main__TypeCtorInfo_33_33, (MR_Word) &top_level__mercury_compile_main_scalar_common_7[6], top_level__mercury_compile_main__LocalModulesList_14);
    }
    {
      top_level__mercury_compile_main__LocalModuleNames_16 = mercury__set__from_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_33_33, top_level__mercury_compile_main__SymNames_15);
    }
    {
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_main__AnalysisInfo0_17);
    }
    {
      analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile_main__Globals_8, top_level__mercury_compile_main__ModuleNames_13, top_level__mercury_compile_main__LocalModuleNames_16, top_level__mercury_compile_main__AnalysisInfo0_17, &top_level__mercury_compile_main__AnalysisInfo_18);
    }
    {
      hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile_main__AnalysisInfo_18, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_20);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_9, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_10);
    }
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1)
{
  {
    MR_Box top_level__mercury_compile_main__wrapper_arg_2;
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv0_HeadVar__2_2;

    {
      top_level__mercury_compile_main__conv0_HeadVar__2_2 = mdbcomp__sym_name__string_to_sym_name_1_f_0(((MR_String) top_level__mercury_compile_main__wrapper_arg_1));
    }
    top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__2_2));
    return top_level__mercury_compile_main__wrapper_arg_2;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_Word top_level__mercury_compile_main__Verbose_9,
  MR_Word top_level__mercury_compile_main__Stats_10,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_14,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_15)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__IntermodAnalysis_13;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_8, (MR_Integer) 326, &top_level__mercury_compile_main__IntermodAnalysis_13);
    }
    switch (top_level__mercury_compile_main__IntermodAnalysis_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_main__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_main__TypeCtorInfo_33_46;
          MR_Word top_level__mercury_compile_main__ModuleNames_30;
          MR_Word top_level__mercury_compile_main__LocalModulesList_31;
          MR_Word top_level__mercury_compile_main__SymNames_32;
          MR_Word top_level__mercury_compile_main__LocalModuleNames_33;
          MR_Word top_level__mercury_compile_main__AnalysisInfo0_34;
          MR_Word top_level__mercury_compile_main__AnalysisInfo_35;

          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_9, (MR_String) "% Preparing for intermodule analysis...\n");
          }
          {
            hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_main__ModuleNames_30);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_main__Globals_8, (MR_Integer) 654, &top_level__mercury_compile_main__LocalModulesList_31);
          }
          top_level__mercury_compile_main__TypeCtorInfo_33_46 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          {
            top_level__mercury_compile_main__SymNames_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile_main__TypeCtorInfo_33_46, (MR_Word) &top_level__mercury_compile_main_scalar_common_7[5], top_level__mercury_compile_main__LocalModulesList_31);
          }
          {
            top_level__mercury_compile_main__LocalModuleNames_33 = mercury__set__from_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_33_46, top_level__mercury_compile_main__SymNames_32);
          }
          {
            hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_main__AnalysisInfo0_34);
          }
          {
            analysis__prepare_intermodule_analysis_7_p_0(top_level__mercury_compile_main__Globals_8, top_level__mercury_compile_main__ModuleNames_30, top_level__mercury_compile_main__LocalModuleNames_33, top_level__mercury_compile_main__AnalysisInfo0_34, &top_level__mercury_compile_main__AnalysisInfo_35);
          }
          {
            hlds__hlds_module__module_info_set_analysis_info_3_p_0(top_level__mercury_compile_main__AnalysisInfo_35, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_15);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_9, (MR_String) "% done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_10);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(
  MR_Word top_level__mercury_compile_main__Verbose_7,
  MR_Word top_level__mercury_compile_main__Stats_8,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_21,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_22)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Globals_11;
    MR_Word top_level__mercury_compile_main__ShowDepGraph_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_main__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_11, (MR_Integer) 146, &top_level__mercury_compile_main__ShowDepGraph_12);
    }
    switch (top_level__mercury_compile_main__ShowDepGraph_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_main__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_21;
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_main__ModuleName_13;
          MR_String top_level__mercury_compile_main__FileName_14;
          MR_Word top_level__mercury_compile_main__Res_15;

          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_7, (MR_String) "% Writing dependency graph...");
          }
          {
            hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_main__ModuleName_13);
          }
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_11, top_level__mercury_compile_main__ModuleName_13, (MR_String) ".dependency_graph", (MR_Integer) 0, &top_level__mercury_compile_main__FileName_14);
          }
          {
            mercury__io__open_output_4_p_0(top_level__mercury_compile_main__FileName_14, &top_level__mercury_compile_main__Res_15);
          }
          if (((MR_tag((MR_Word) top_level__mercury_compile_main__Res_15)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word top_level__mercury_compile_main__IOError_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Res_15, (MR_Integer) 0)));
              MR_String top_level__mercury_compile_main__ErrorMsg_20;
              MR_String top_level__mercury_compile_main__V_33_33;

              {
                top_level__mercury_compile_main__V_33_33 = mercury__io__error_message_1_f_0(top_level__mercury_compile_main__IOError_19);
              }
              {
                top_level__mercury_compile_main__ErrorMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write dependency graph: ", top_level__mercury_compile_main__V_33_33);
              }
              {
                libs__file_util__report_error_3_p_0(top_level__mercury_compile_main__ErrorMsg_20);
              }
              *top_level__mercury_compile_main__STATE_VARIABLE_HLDS_22 = top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_21;
            }
          else
            {
              MR_Word top_level__mercury_compile_main__FileStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Res_15, (MR_Integer) 0)));
              MR_Word top_level__mercury_compile_main__OutputStream_17;
              MR_Word top_level__mercury_compile_main__V_18_18;

              {
                mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__FileStream_16, &top_level__mercury_compile_main__OutputStream_17);
              }
              {
                transform_hlds__dependency_graph__write_dependency_graph_4_p_0(top_level__mercury_compile_main__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_22);
              }
              {
                mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__OutputStream_17, &top_level__mercury_compile_main__V_18_18);
              }
              {
                mercury__io__close_output_3_p_0(top_level__mercury_compile_main__FileStream_16);
              }
              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_7, (MR_String) " done.\n");
              }
            }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_write_definitions_5_p_0(
  MR_Word top_level__mercury_compile_main__Verbose_6,
  MR_Word top_level__mercury_compile_main__Stats_7,
  MR_Word top_level__mercury_compile_main__HLDS_8)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Globals_10;
    MR_Word top_level__mercury_compile_main__ShowDefns_11;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_main__HLDS_8, &top_level__mercury_compile_main__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_10, (MR_Integer) 145, &top_level__mercury_compile_main__ShowDefns_11);
    }
    switch (top_level__mercury_compile_main__ShowDefns_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_main__ModuleName_12;
          MR_String top_level__mercury_compile_main__FileName_13;
          MR_Word top_level__mercury_compile_main__Res_14;

          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_6, (MR_String) "% Writing definitions...");
          }
          {
            hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_main__HLDS_8, &top_level__mercury_compile_main__ModuleName_12);
          }
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_10, top_level__mercury_compile_main__ModuleName_12, (MR_String) ".defns", (MR_Integer) 0, &top_level__mercury_compile_main__FileName_13);
          }
          {
            mercury__io__open_output_4_p_0(top_level__mercury_compile_main__FileName_13, &top_level__mercury_compile_main__Res_14);
          }
          if (((MR_tag((MR_Word) top_level__mercury_compile_main__Res_14)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word top_level__mercury_compile_main__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Res_14, (MR_Integer) 0)));
              MR_String top_level__mercury_compile_main__ErrorMsg_17;
              MR_String top_level__mercury_compile_main__V_28_28;

              {
                top_level__mercury_compile_main__V_28_28 = mercury__io__error_message_1_f_0(top_level__mercury_compile_main__IOError_16);
              }
              {
                top_level__mercury_compile_main__ErrorMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "unable to write definitions: ", top_level__mercury_compile_main__V_28_28);
              }
              {
                libs__file_util__report_error_3_p_0(top_level__mercury_compile_main__ErrorMsg_17);
              }
            }
          else
            {
              MR_Word top_level__mercury_compile_main__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Res_14, (MR_Integer) 0)));

              {
                hlds__hlds_defns__write_hlds_defns_4_p_0(top_level__mercury_compile_main__FileStream_15, top_level__mercury_compile_main__HLDS_8);
              }
              {
                mercury__io__close_output_3_p_0(top_level__mercury_compile_main__FileStream_15);
              }
              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_6, (MR_String) " done.\n");
              }
            }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__make_hlds_17_p_0(
  MR_Word top_level__mercury_compile_main__Globals_18,
  MR_Word top_level__mercury_compile_main__AugCompUnit_19,
  MR_Word top_level__mercury_compile_main__EventSet_20,
  MR_Word top_level__mercury_compile_main__MQInfo_21,
  MR_Word top_level__mercury_compile_main__TypeEqvMap_22,
  MR_Word top_level__mercury_compile_main__UsedModules_23,
  MR_Word top_level__mercury_compile_main__Verbose_24,
  MR_Word top_level__mercury_compile_main__Stats_25,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HLDS_38,
  MR_Word * top_level__mercury_compile_main__QualInfo_27,
  MR_Word * top_level__mercury_compile_main__FoundInvalidType_28,
  MR_Word * top_level__mercury_compile_main__FoundInvalidInstOrMode_29,
  MR_Word * top_level__mercury_compile_main__FoundSemanticError_30,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_39,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_40)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__ModuleName_33;
    MR_String top_level__mercury_compile_main__DumpBaseFileName_34;
    MR_Word top_level__mercury_compile_main__MakeSpecs_35;
    MR_Integer top_level__mercury_compile_main__Status_36;
    MR_Word top_level__mercury_compile_main__SpecsErrors_37;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_43_43;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HLDS_50_50;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_51_51;

    {
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile_main__Verbose_24, top_level__mercury_compile_main__Globals_18, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_39, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_43_43);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_24, (MR_String) "% Converting parse tree to hlds...\n");
    }
    {
      top_level__mercury_compile_main__ModuleName_33 = parse_tree__prog_item__aug_compilation_unit_project_name_1_f_0(top_level__mercury_compile_main__AugCompUnit_19);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_18, top_level__mercury_compile_main__ModuleName_33, (MR_String) ".hlds_dump", (MR_Integer) 0, &top_level__mercury_compile_main__DumpBaseFileName_34);
    }
    {
      hlds__make_hlds__parse_tree_to_hlds_11_p_0(top_level__mercury_compile_main__AugCompUnit_19, top_level__mercury_compile_main__Globals_18, top_level__mercury_compile_main__DumpBaseFileName_34, top_level__mercury_compile_main__MQInfo_21, top_level__mercury_compile_main__TypeEqvMap_22, top_level__mercury_compile_main__UsedModules_23, top_level__mercury_compile_main__QualInfo_27, top_level__mercury_compile_main__FoundInvalidType_28, top_level__mercury_compile_main__FoundInvalidInstOrMode_29, &top_level__mercury_compile_main__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_main__MakeSpecs_35);
    }
    {
      top_level__mercury_compile_main__STATE_VARIABLE_Specs_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_main__MakeSpecs_35, top_level__mercury_compile_main__STATE_VARIABLE_Specs_43_43);
    }
    {
      hlds__hlds_module__module_info_set_event_set_3_p_0(top_level__mercury_compile_main__EventSet_20, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_50_50, top_level__mercury_compile_main__STATE_VARIABLE_HLDS_38);
    }
    {
      mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_main__Status_36);
    }
    {
      top_level__mercury_compile_main__SpecsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_main__Globals_18, top_level__mercury_compile_main__STATE_VARIABLE_Specs_51_51);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__Status_36 == (MR_Integer) 0);
    top_level__mercury_compile_main__succeeded = !(top_level__mercury_compile_main__succeeded);
    if (!(top_level__mercury_compile_main__succeeded))
      top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__SpecsErrors_37 == (MR_Integer) 1);
    if (top_level__mercury_compile_main__succeeded)
      {
        *top_level__mercury_compile_main__FoundSemanticError_30 = (MR_Integer) 1;
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    else
      *top_level__mercury_compile_main__FoundSemanticError_30 = (MR_Integer) 0;
    {
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile_main__Verbose_24, top_level__mercury_compile_main__Globals_18, top_level__mercury_compile_main__STATE_VARIABLE_Specs_51_51, top_level__mercury_compile_main__STATE_VARIABLE_Specs_40);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_24, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_25);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_grab_optfiles_9_p_0(
  MR_Word top_level__mercury_compile_main__Globals_10,
  MR_Word top_level__mercury_compile_main__OpModeAugment_11,
  MR_Word top_level__mercury_compile_main__Verbose_12,
  MR_Word top_level__mercury_compile_main__MaybeTransOptDeps_13,
  MR_Word top_level__mercury_compile_main__Imports0_14,
  MR_Word * top_level__mercury_compile_main__Imports_15,
  MR_Word * top_level__mercury_compile_main__Error_16)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__IntermodOpt_18;
    MR_Word top_level__mercury_compile_main__UseOptInt_19;
    MR_Word top_level__mercury_compile_main__TransOpt_20;
    MR_Word top_level__mercury_compile_main__IntermodAnalysis_21;
    MR_Word top_level__mercury_compile_main__Imports1_22;
    MR_Word top_level__mercury_compile_main__Error1_23;
    MR_Word top_level__mercury_compile_main__Error2_25;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_10, (MR_Integer) 321, &top_level__mercury_compile_main__IntermodOpt_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_10, (MR_Integer) 323, &top_level__mercury_compile_main__UseOptInt_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_10, (MR_Integer) 325, &top_level__mercury_compile_main__TransOpt_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_10, (MR_Integer) 326, &top_level__mercury_compile_main__IntermodAnalysis_21);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__UseOptInt_19 == (MR_Integer) 1);
    if (!(top_level__mercury_compile_main__succeeded))
      {
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__IntermodOpt_18 == (MR_Integer) 1);
        if (!(top_level__mercury_compile_main__succeeded))
          top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__IntermodAnalysis_21 == (MR_Integer) 1);
      }
    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__OpModeAugment_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        top_level__mercury_compile_main__succeeded = !(top_level__mercury_compile_main__succeeded);
      }
    if (top_level__mercury_compile_main__succeeded)
      {
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_12, (MR_String) "% Reading .opt files...\n");
        }
        {
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_main__Verbose_12);
        }
        {
          parse_tree__modules__grab_opt_files_6_p_0(top_level__mercury_compile_main__Globals_10, top_level__mercury_compile_main__Imports0_14, &top_level__mercury_compile_main__Imports1_22, &top_level__mercury_compile_main__Error1_23);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_12, (MR_String) "% Done.\n");
        }
      }
    else
      {
        top_level__mercury_compile_main__Imports1_22 = top_level__mercury_compile_main__Imports0_14;
        top_level__mercury_compile_main__Error1_23 = (MR_Integer) 0;
      }
    switch (MR_tag((MR_Word) top_level__mercury_compile_main__OpModeAugment_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(top_level__mercury_compile_main__OpModeAugment_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *top_level__mercury_compile_main__Imports_15 = top_level__mercury_compile_main__Imports1_22;
              top_level__mercury_compile_main__Error2_25 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            if ((top_level__mercury_compile_main__MaybeTransOptDeps_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word top_level__mercury_compile_main__ModuleName_26;
                MR_Word top_level__mercury_compile_main__WarnNoTransOptDeps_27;

                *top_level__mercury_compile_main__Imports_15 = top_level__mercury_compile_main__Imports1_22;
                top_level__mercury_compile_main__Error2_25 = (MR_Integer) 0;
                {
                  parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(*top_level__mercury_compile_main__Imports_15, &top_level__mercury_compile_main__ModuleName_26);
                }
                {
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_10, (MR_Integer) 15, &top_level__mercury_compile_main__WarnNoTransOptDeps_27);
                }
                switch (top_level__mercury_compile_main__WarnNoTransOptDeps_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word top_level__mercury_compile_main__Pieces_28;
                      MR_Word top_level__mercury_compile_main__Msg_29;
                      MR_Word top_level__mercury_compile_main__Spec_30;
                      MR_Word top_level__mercury_compile_main__V_59_59;
                      MR_Word top_level__mercury_compile_main__V_62_62;
                      MR_Word top_level__mercury_compile_main__V_63_63;
                      MR_Word top_level__mercury_compile_main__V_78_78;
                      MR_Word top_level__mercury_compile_main__V_79_79;
                      MR_Word top_level__mercury_compile_main__V_83_83;
                      MR_Integer top_level__mercury_compile_main___NumWarnings_31;
                      MR_Integer top_level__mercury_compile_main___NumErrors_32;

                      {
                        top_level__mercury_compile_main__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_63_63, 1) = ((MR_Box) (top_level__mercury_compile_main__ModuleName_26));
                      }
                      {
                        top_level__mercury_compile_main__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile_main__V_63_63));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[24])));
                      }
                      {
                        top_level__mercury_compile_main__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[34])));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_59_59, 1) = ((MR_Box) (top_level__mercury_compile_main__V_62_62));
                      }
                      {
                        top_level__mercury_compile_main__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[33])));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Pieces_28, 1) = ((MR_Box) (top_level__mercury_compile_main__V_59_59));
                      }
                      {
                        top_level__mercury_compile_main__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_79_79, 0) = ((MR_Box) (top_level__mercury_compile_main__Pieces_28));
                      }
                      {
                        top_level__mercury_compile_main__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile_main__V_79_79));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        top_level__mercury_compile_main__Msg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Msg_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Msg_29, 1) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Msg_29, 2) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Msg_29, 3) = ((MR_Box) (top_level__mercury_compile_main__V_78_78));
                      }
                      {
                        top_level__mercury_compile_main__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_83_83, 0) = ((MR_Box) (top_level__mercury_compile_main__Msg_29));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        top_level__mercury_compile_main__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Spec_30, 2) = ((MR_Box) (top_level__mercury_compile_main__V_83_83));
                      }
                      {
                        parse_tree__error_util__write_error_spec_8_p_0(top_level__mercury_compile_main__Spec_30, top_level__mercury_compile_main__Globals_10, (MR_Integer) 0, &top_level__mercury_compile_main___NumWarnings_31, (MR_Integer) 0, &top_level__mercury_compile_main___NumErrors_32);
                      }
                    }
                    break;
                }
              }
            else
              {
                MR_Word top_level__mercury_compile_main__TransOptDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeTransOptDeps_13, (MR_Integer) 0)));

                {
                  parse_tree__modules__grab_trans_opt_files_7_p_0(top_level__mercury_compile_main__Globals_10, top_level__mercury_compile_main__TransOptDeps_24, top_level__mercury_compile_main__Imports1_22, top_level__mercury_compile_main__Imports_15, &top_level__mercury_compile_main__Error2_25);
                }
              }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            switch (top_level__mercury_compile_main__TransOpt_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *top_level__mercury_compile_main__Imports_15 = top_level__mercury_compile_main__Imports1_22;
                  top_level__mercury_compile_main__Error2_25 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word top_level__mercury_compile_main__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
                  MR_Word top_level__mercury_compile_main__TransOptFiles_34;
                  MR_Word top_level__mercury_compile_main__TransOptFilesList_35;
                  MR_Word top_level__mercury_compile_main__V_48_48;
                  MR_Word top_level__mercury_compile_main__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 4)));
                  MR_Word top_level__mercury_compile_main__V_50_50;
                  MR_Word top_level__mercury_compile_main__V_52_52;
                  MR_Word top_level__mercury_compile_main__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 5)));
                  MR_Word top_level__mercury_compile_main__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 6)));
                  MR_String top_level__mercury_compile_main__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 0)));
                  MR_Word top_level__mercury_compile_main__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 1)));
                  MR_Word top_level__mercury_compile_main__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 2)));
                  MR_Word top_level__mercury_compile_main__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 3)));
                  MR_Word top_level__mercury_compile_main__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 7)));
                  MR_Word top_level__mercury_compile_main__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 8)));
                  MR_Word top_level__mercury_compile_main__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 9)));
                  MR_Word top_level__mercury_compile_main__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 10)));
                  MR_Word top_level__mercury_compile_main__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 11)));
                  MR_Word top_level__mercury_compile_main__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 12)));
                  MR_Word top_level__mercury_compile_main__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 13)));
                  MR_Word top_level__mercury_compile_main__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 14)));
                  MR_Word top_level__mercury_compile_main__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 15)));
                  MR_Word top_level__mercury_compile_main__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 16)));
                  MR_Word top_level__mercury_compile_main__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 17)));
                  MR_Word top_level__mercury_compile_main__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 18)));
                  MR_Word top_level__mercury_compile_main__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 19)));
                  MR_Word top_level__mercury_compile_main__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 20)));
                  MR_Word top_level__mercury_compile_main__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 21)));
                  MR_Word top_level__mercury_compile_main__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 22)));
                  MR_Word top_level__mercury_compile_main__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 23)));
                  MR_Word top_level__mercury_compile_main__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 24)));
                  MR_Word top_level__mercury_compile_main__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 25)));
                  MR_String top_level__mercury_compile_main__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 26)));

                  {
                    top_level__mercury_compile_main__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_52_52, 0) = ((MR_Box) (top_level__mercury_compile_main__V_94_94));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    top_level__mercury_compile_main__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_50_50, 0) = ((MR_Box) (top_level__mercury_compile_main__V_93_93));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_50_50, 1) = ((MR_Box) (top_level__mercury_compile_main__V_52_52));
                  }
                  {
                    top_level__mercury_compile_main__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_48_48, 0) = ((MR_Box) (top_level__mercury_compile_main__V_49_49));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_48_48, 1) = ((MR_Box) (top_level__mercury_compile_main__V_50_50));
                  }
                  {
                    top_level__mercury_compile_main__TransOptFiles_34 = mercury__set__union_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_167_167, top_level__mercury_compile_main__V_48_48);
                  }
                  {
                    mercury__set__to_sorted_list_2_p_0(top_level__mercury_compile_main__TypeCtorInfo_167_167, top_level__mercury_compile_main__TransOptFiles_34, &top_level__mercury_compile_main__TransOptFilesList_35);
                  }
                  {
                    parse_tree__modules__grab_trans_opt_files_7_p_0(top_level__mercury_compile_main__Globals_10, top_level__mercury_compile_main__TransOptFilesList_35, top_level__mercury_compile_main__Imports1_22, top_level__mercury_compile_main__Imports_15, &top_level__mercury_compile_main__Error2_25);
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (top_level__mercury_compile_main__TransOpt_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *top_level__mercury_compile_main__Imports_15 = top_level__mercury_compile_main__Imports1_22;
              top_level__mercury_compile_main__Error2_25 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word top_level__mercury_compile_main__TypeCtorInfo_167_167 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
              MR_Word top_level__mercury_compile_main__TransOptFiles_34;
              MR_Word top_level__mercury_compile_main__TransOptFilesList_35;
              MR_Word top_level__mercury_compile_main__V_48_48;
              MR_Word top_level__mercury_compile_main__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 4)));
              MR_Word top_level__mercury_compile_main__V_50_50;
              MR_Word top_level__mercury_compile_main__V_52_52;
              MR_Word top_level__mercury_compile_main__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 5)));
              MR_Word top_level__mercury_compile_main__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 6)));
              MR_String top_level__mercury_compile_main__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 0)));
              MR_Word top_level__mercury_compile_main__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 1)));
              MR_Word top_level__mercury_compile_main__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 2)));
              MR_Word top_level__mercury_compile_main__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 3)));
              MR_Word top_level__mercury_compile_main__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 7)));
              MR_Word top_level__mercury_compile_main__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 8)));
              MR_Word top_level__mercury_compile_main__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 9)));
              MR_Word top_level__mercury_compile_main__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 10)));
              MR_Word top_level__mercury_compile_main__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 11)));
              MR_Word top_level__mercury_compile_main__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 12)));
              MR_Word top_level__mercury_compile_main__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 13)));
              MR_Word top_level__mercury_compile_main__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 14)));
              MR_Word top_level__mercury_compile_main__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 15)));
              MR_Word top_level__mercury_compile_main__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 16)));
              MR_Word top_level__mercury_compile_main__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 17)));
              MR_Word top_level__mercury_compile_main__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 18)));
              MR_Word top_level__mercury_compile_main__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 19)));
              MR_Word top_level__mercury_compile_main__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 20)));
              MR_Word top_level__mercury_compile_main__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 21)));
              MR_Word top_level__mercury_compile_main__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 22)));
              MR_Word top_level__mercury_compile_main__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 23)));
              MR_Word top_level__mercury_compile_main__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 24)));
              MR_Word top_level__mercury_compile_main__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 25)));
              MR_String top_level__mercury_compile_main__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Imports0_14, (MR_Integer) 26)));

              {
                top_level__mercury_compile_main__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_52_52, 0) = ((MR_Box) (top_level__mercury_compile_main__V_94_94));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                top_level__mercury_compile_main__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_50_50, 0) = ((MR_Box) (top_level__mercury_compile_main__V_93_93));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_50_50, 1) = ((MR_Box) (top_level__mercury_compile_main__V_52_52));
              }
              {
                top_level__mercury_compile_main__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_48_48, 0) = ((MR_Box) (top_level__mercury_compile_main__V_49_49));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_48_48, 1) = ((MR_Box) (top_level__mercury_compile_main__V_50_50));
              }
              {
                top_level__mercury_compile_main__TransOptFiles_34 = mercury__set__union_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_167_167, top_level__mercury_compile_main__V_48_48);
              }
              {
                mercury__set__to_sorted_list_2_p_0(top_level__mercury_compile_main__TypeCtorInfo_167_167, top_level__mercury_compile_main__TransOptFiles_34, &top_level__mercury_compile_main__TransOptFilesList_35);
              }
              {
                parse_tree__modules__grab_trans_opt_files_7_p_0(top_level__mercury_compile_main__Globals_10, top_level__mercury_compile_main__TransOptFilesList_35, top_level__mercury_compile_main__Imports1_22, top_level__mercury_compile_main__Imports_15, &top_level__mercury_compile_main__Error2_25);
              }
            }
            break;
        }
        break;
    }
    {
      mercury__bool__or_3_p_0(top_level__mercury_compile_main__Error1_23, top_level__mercury_compile_main__Error2_25, top_level__mercury_compile_main__Error_16);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_dependency_file_get_modules__1867__1_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile_main__wrapper_arg_1));
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) top_level__mercury_compile_main__wrapper_arg_1));
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(
  MR_Word * top_level__mercury_compile_main__TransOptDeps_4)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Result_6;
    MR_String top_level__mercury_compile_main__FileName_13;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_28_28;
    MR_Word top_level__mercury_compile_main__CharList0_7;
    MR_Word top_level__mercury_compile_main__CharList1_8;
    MR_Word top_level__mercury_compile_main__NotIsWhitespace_9;
    MR_Word top_level__mercury_compile_main__CharList_11;
    MR_String top_level__mercury_compile_main__FileName0_12;
    MR_Word top_level__mercury_compile_main__V_21_21;
    MR_String top_level__mercury_compile_main__V_23_23;

    {
      mercury__io__read_line_3_p_0(&top_level__mercury_compile_main__Result_6);
    }
    top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__Result_6)) == (MR_mktag((MR_Integer) 1)));
    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__CharList0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Result_6, (MR_Integer) 0)));
        top_level__mercury_compile_main__V_21_21 = (MR_Word) &top_level__mercury_compile_main_scalar_common_7[3];
        top_level__mercury_compile_main__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        {
          mercury__list__drop_while_3_p_0(top_level__mercury_compile_main__TypeCtorInfo_28_28, top_level__mercury_compile_main__V_21_21, top_level__mercury_compile_main__CharList0_7, &top_level__mercury_compile_main__CharList1_8);
        }
        top_level__mercury_compile_main__NotIsWhitespace_9 = (MR_Word) &top_level__mercury_compile_main_scalar_common_7[4];
        {
          mercury__list__take_while_3_p_0(top_level__mercury_compile_main__TypeCtorInfo_28_28, top_level__mercury_compile_main__NotIsWhitespace_9, top_level__mercury_compile_main__CharList1_8, &top_level__mercury_compile_main__CharList_11);
        }
        {
          mercury__string__from_char_list_2_p_0(top_level__mercury_compile_main__CharList_11, &top_level__mercury_compile_main__FileName0_12);
        }
        top_level__mercury_compile_main__V_23_23 = (MR_String) ".trans_opt";
        {
          top_level__mercury_compile_main__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile_main__FileName0_12, top_level__mercury_compile_main__V_23_23, &top_level__mercury_compile_main__FileName_13);
        }
      }
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_String top_level__mercury_compile_main__ModuleFileName_15;
        MR_Word top_level__mercury_compile_main__Module_16;
        MR_Word top_level__mercury_compile_main__TransOptDeps0_17;
        MR_String top_level__mercury_compile_main__BaseFileName_14;

        {
          top_level__mercury_compile_main__succeeded = mercury__string__append_3_p_1((MR_String) "Mercury/trans_opts/", &top_level__mercury_compile_main__BaseFileName_14, top_level__mercury_compile_main__FileName_13);
        }
        if (top_level__mercury_compile_main__succeeded)
          top_level__mercury_compile_main__ModuleFileName_15 = top_level__mercury_compile_main__BaseFileName_14;
        else
          top_level__mercury_compile_main__ModuleFileName_15 = top_level__mercury_compile_main__FileName_13;
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__ModuleFileName_15, &top_level__mercury_compile_main__Module_16);
        }
        {
          top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile_main__TransOptDeps0_17);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *top_level__mercury_compile_main__TransOptDeps_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_main__Module_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_main__TransOptDeps0_17));
        }
      }
    else
      *top_level__mercury_compile_main__TransOptDeps_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_dependency_file_find_start_4_p_0(
  MR_String top_level__mercury_compile_main__SearchPattern_5,
  MR_Word * top_level__mercury_compile_main__Success_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool top_level__mercury_compile_main__succeeded;
        MR_Word top_level__mercury_compile_main__Result_8;

        {
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile_main__Result_8);
        }
        switch (MR_tag((MR_Word) top_level__mercury_compile_main__Result_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *top_level__mercury_compile_main__Success_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_String top_level__mercury_compile_main__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Result_8, (MR_Integer) 0)));

              {
                top_level__mercury_compile_main__succeeded = mercury__string__prefix_2_p_0(top_level__mercury_compile_main__Line_9, top_level__mercury_compile_main__SearchPattern_5);
              }
              if (top_level__mercury_compile_main__succeeded)
                *top_level__mercury_compile_main__Success_6 = (MR_Integer) 1;
              else
                {
                  /* direct tailcall eliminated */
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            *top_level__mercury_compile_main__Success_6 = (MR_Integer) 0;
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_read_dependency_file_5_p_0(
  MR_Word top_level__mercury_compile_main__Globals_6,
  MR_Word top_level__mercury_compile_main__ModuleName_7,
  MR_Word * top_level__mercury_compile_main__MaybeTransOptDeps_8)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__TransOpt_10;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_6, (MR_Integer) 325, &top_level__mercury_compile_main__TransOpt_10);
    }
    switch (top_level__mercury_compile_main__TransOpt_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_main__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_main__Verbose_11;
          MR_String top_level__mercury_compile_main__DependencyFileName_12;
          MR_Word top_level__mercury_compile_main__OpenResult_13;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_6, (MR_Integer) 47, &top_level__mercury_compile_main__Verbose_11);
          }
          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_6, top_level__mercury_compile_main__ModuleName_7, (MR_String) ".d", (MR_Integer) 1, &top_level__mercury_compile_main__DependencyFileName_12);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_11, (MR_String) "% Reading auto-dependency file \140");
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_11, top_level__mercury_compile_main__DependencyFileName_12);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_11, (MR_String) "\'...");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_main__Verbose_11);
          }
          {
            mercury__io__open_input_4_p_0(top_level__mercury_compile_main__DependencyFileName_12, &top_level__mercury_compile_main__OpenResult_13);
          }
          if (((MR_tag((MR_Word) top_level__mercury_compile_main__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word top_level__mercury_compile_main__IOError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__OpenResult_13, (MR_Integer) 0)));
              MR_String top_level__mercury_compile_main__IOErrorMessage_22;
              MR_String top_level__mercury_compile_main__Message_23;
              MR_Word top_level__mercury_compile_main__V_41_41;
              MR_Word top_level__mercury_compile_main__V_43_43;
              MR_Word top_level__mercury_compile_main__V_44_44;
              MR_Word top_level__mercury_compile_main__V_46_46;

              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_11, (MR_String) " failed.\n");
              }
              {
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_main__Verbose_11);
              }
              {
                mercury__io__error_message_2_p_0(top_level__mercury_compile_main__IOError_21, &top_level__mercury_compile_main__IOErrorMessage_22);
              }
              {
                top_level__mercury_compile_main__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_46_46, 0) = ((MR_Box) (top_level__mercury_compile_main__IOErrorMessage_22));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                top_level__mercury_compile_main__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_44_44, 0) = ((MR_Box) ((MR_String) "\' for input: "));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile_main__V_46_46));
              }
              {
                top_level__mercury_compile_main__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_43_43, 0) = ((MR_Box) (top_level__mercury_compile_main__DependencyFileName_12));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_43_43, 1) = ((MR_Box) (top_level__mercury_compile_main__V_44_44));
              }
              {
                top_level__mercury_compile_main__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_41_41, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
                MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_41_41, 1) = ((MR_Box) (top_level__mercury_compile_main__V_43_43));
              }
              {
                mercury__string__append_list_2_p_0(top_level__mercury_compile_main__V_41_41, &top_level__mercury_compile_main__Message_23);
              }
              {
                libs__file_util__report_error_3_p_0(top_level__mercury_compile_main__Message_23);
              }
              *top_level__mercury_compile_main__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              MR_Word top_level__mercury_compile_main__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__OpenResult_13, (MR_Integer) 0)));
              MR_Word top_level__mercury_compile_main__OldStream_15;
              MR_String top_level__mercury_compile_main__TransOptDateFileName_16;
              MR_String top_level__mercury_compile_main__SearchPattern_17;
              MR_Word top_level__mercury_compile_main__FindResult_18;
              MR_Word top_level__mercury_compile_main__V_20_20;

              {
                mercury__io__set_input_stream_4_p_0(top_level__mercury_compile_main__Stream_14, &top_level__mercury_compile_main__OldStream_15);
              }
              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_6, top_level__mercury_compile_main__ModuleName_7, (MR_String) ".trans_opt_date", (MR_Integer) 1, &top_level__mercury_compile_main__TransOptDateFileName_16);
              }
              {
                top_level__mercury_compile_main__SearchPattern_17 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__TransOptDateFileName_16, (MR_String) " :");
              }
              {
                top_level__mercury_compile_main__read_dependency_file_find_start_4_p_0(top_level__mercury_compile_main__SearchPattern_17, &top_level__mercury_compile_main__FindResult_18);
              }
              switch (top_level__mercury_compile_main__FindResult_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *top_level__mercury_compile_main__MaybeTransOptDeps_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word top_level__mercury_compile_main__TransOptDeps_19;

                    {
                      top_level__mercury_compile_main__read_dependency_file_get_modules_3_p_0(&top_level__mercury_compile_main__TransOptDeps_19);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *top_level__mercury_compile_main__MaybeTransOptDeps_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_main__TransOptDeps_19));
                    }
                  }
                  break;
              }
              {
                mercury__io__set_input_stream_4_p_0(top_level__mercury_compile_main__OldStream_15, &top_level__mercury_compile_main__V_20_20);
              }
              {
                mercury__io__close_input_3_p_0(top_level__mercury_compile_main__Stream_14);
              }
              {
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_11, (MR_String) " done.\n");
              }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__pre_hlds_pass_16_p_0(
  MR_Word top_level__mercury_compile_main__Globals_17,
  MR_Word top_level__mercury_compile_main__OpModeAugment_18,
  MR_Word top_level__mercury_compile_main__WriteDFile0_19,
  MR_Word top_level__mercury_compile_main__ModuleAndImports0_20,
  MR_Word * top_level__mercury_compile_main__HLDS1_21,
  MR_Word * top_level__mercury_compile_main__QualInfo_22,
  MR_Word * top_level__mercury_compile_main__MaybeTimestampMap_23,
  MR_Word * top_level__mercury_compile_main__UndefTypes_24,
  MR_Word * top_level__mercury_compile_main__UndefModes_25,
  MR_Word * top_level__mercury_compile_main__FoundSemanticError_26,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_72,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_73,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_74,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_75)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_146_146;
    MR_Word top_level__mercury_compile_main__Stats_30;
    MR_Word top_level__mercury_compile_main__Verbose_31;
    MR_Word top_level__mercury_compile_main__MMCMake_32;
    MR_Word top_level__mercury_compile_main__ModuleName_34;
    MR_Word top_level__mercury_compile_main__MaybeTransOptDeps_36;
    MR_Word top_level__mercury_compile_main__ModuleAndImports1_37;
    MR_Word top_level__mercury_compile_main__IntermodError_38;
    MR_Word top_level__mercury_compile_main__AugCompUnit1_39;
    MR_Word top_level__mercury_compile_main__ItemSpecs_40;
    MR_String top_level__mercury_compile_main__EventSetFileName_42;
    MR_String top_level__mercury_compile_main__EventSetName_43;
    MR_Word top_level__mercury_compile_main__EventSpecMap1_44;
    MR_Word top_level__mercury_compile_main__EventSetErrors_45;
    MR_Word top_level__mercury_compile_main__AugCompUnit2_49;
    MR_Word top_level__mercury_compile_main__EventSpecMap2_50;
    MR_Word top_level__mercury_compile_main__MQInfo0_51;
    MR_Word top_level__mercury_compile_main__MQUndefTypes_52;
    MR_Word top_level__mercury_compile_main__MQUndefInsts_53;
    MR_Word top_level__mercury_compile_main__MQUndefModes_54;
    MR_Word top_level__mercury_compile_main__MQUndefTypeClasses_55;
    MR_Word top_level__mercury_compile_main__QualifySpecs_56;
    MR_Word top_level__mercury_compile_main__RecompInfo0_57;
    MR_Word top_level__mercury_compile_main__AugCompUnit_58;
    MR_Word top_level__mercury_compile_main__EventSpecMap_59;
    MR_Word top_level__mercury_compile_main__TypeEqvMap_60;
    MR_Word top_level__mercury_compile_main__UsedModules_61;
    MR_Word top_level__mercury_compile_main__RecompInfo_62;
    MR_Word top_level__mercury_compile_main__ExpandSpecs_63;
    MR_Word top_level__mercury_compile_main__ExpandErrors_64;
    MR_Word top_level__mercury_compile_main__MQInfo_65;
    MR_Word top_level__mercury_compile_main__EventSet_66;
    MR_Word top_level__mercury_compile_main__HLDS0_67;
    MR_Word top_level__mercury_compile_main__MakeHLDSFoundInvalidType_68;
    MR_Word top_level__mercury_compile_main__MakeHLDSFoundInvalidInstOrMode_69;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_83_83;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_86_86;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_87_87;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_93_93;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_94_94;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_99_99;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_104_104;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_105_105;
    MR_Word top_level__mercury_compile_main___Error_41;
    MR_String top_level__mercury_compile_main__V_120_120;
    MR_Word top_level__mercury_compile_main__V_121_121;
    MR_Word top_level__mercury_compile_main__V_122_122;
    MR_Word top_level__mercury_compile_main__V_123_123;
    MR_Word top_level__mercury_compile_main__V_124_124;
    MR_Word top_level__mercury_compile_main__V_125_125;
    MR_Word top_level__mercury_compile_main__V_126_126;
    MR_Word top_level__mercury_compile_main__V_127_127;
    MR_Word top_level__mercury_compile_main__V_128_128;
    MR_Word top_level__mercury_compile_main__V_129_129;
    MR_Word top_level__mercury_compile_main__V_130_130;
    MR_Word top_level__mercury_compile_main__V_131_131;
    MR_Word top_level__mercury_compile_main__V_132_132;
    MR_Word top_level__mercury_compile_main__V_133_133;
    MR_Word top_level__mercury_compile_main__V_134_134;
    MR_Word top_level__mercury_compile_main__V_135_135;
    MR_Word top_level__mercury_compile_main__V_136_136;
    MR_Word top_level__mercury_compile_main__V_137_137;
    MR_Word top_level__mercury_compile_main__V_138_138;
    MR_Word top_level__mercury_compile_main__V_139_139;
    MR_Word top_level__mercury_compile_main__V_140_140;
    MR_Word top_level__mercury_compile_main__V_141_141;
    MR_Word top_level__mercury_compile_main__V_142_142;
    MR_Word top_level__mercury_compile_main__V_143_143;
    MR_Word top_level__mercury_compile_main__V_144_144;
    MR_String top_level__mercury_compile_main__V_145_145;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_17, (MR_Integer) 57, &top_level__mercury_compile_main__Stats_30);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_17, (MR_Integer) 47, &top_level__mercury_compile_main__Verbose_31);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_17, (MR_Integer) 615, &top_level__mercury_compile_main__MMCMake_32);
    }
    {
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(top_level__mercury_compile_main__ModuleAndImports0_20, &top_level__mercury_compile_main__ModuleName_34);
    }
    switch (MR_tag((MR_Word) top_level__mercury_compile_main__OpModeAugment_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(top_level__mercury_compile_main__OpModeAugment_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            top_level__mercury_compile_main__MaybeTransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_main__maybe_read_dependency_file_5_p_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__ModuleName_34, &top_level__mercury_compile_main__MaybeTransOptDeps_36);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_main__MaybeTransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    {
      top_level__mercury_compile_main__maybe_grab_optfiles_9_p_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__OpModeAugment_18, top_level__mercury_compile_main__Verbose_31, top_level__mercury_compile_main__MaybeTransOptDeps_36, top_level__mercury_compile_main__ModuleAndImports0_20, &top_level__mercury_compile_main__ModuleAndImports1_37, &top_level__mercury_compile_main__IntermodError_38);
    }
    {
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(top_level__mercury_compile_main__ModuleAndImports1_37, &top_level__mercury_compile_main__AugCompUnit1_39, &top_level__mercury_compile_main__ItemSpecs_40, &top_level__mercury_compile_main___Error_41);
    }
    top_level__mercury_compile_main__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
    {
      top_level__mercury_compile_main__STATE_VARIABLE_Specs_83_83 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_146_146, top_level__mercury_compile_main__ItemSpecs_40, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_74);
    }
    top_level__mercury_compile_main__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 0)));
    top_level__mercury_compile_main__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 1)));
    top_level__mercury_compile_main__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 2)));
    top_level__mercury_compile_main__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 3)));
    top_level__mercury_compile_main__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 4)));
    top_level__mercury_compile_main__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 5)));
    top_level__mercury_compile_main__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 6)));
    top_level__mercury_compile_main__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 7)));
    top_level__mercury_compile_main__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 8)));
    top_level__mercury_compile_main__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 9)));
    top_level__mercury_compile_main__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 10)));
    top_level__mercury_compile_main__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 11)));
    top_level__mercury_compile_main__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 12)));
    top_level__mercury_compile_main__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 13)));
    top_level__mercury_compile_main__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 14)));
    top_level__mercury_compile_main__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 15)));
    top_level__mercury_compile_main__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 16)));
    top_level__mercury_compile_main__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 17)));
    top_level__mercury_compile_main__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 18)));
    top_level__mercury_compile_main__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 19)));
    top_level__mercury_compile_main__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 20)));
    top_level__mercury_compile_main__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 21)));
    top_level__mercury_compile_main__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 22)));
    top_level__mercury_compile_main__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 23)));
    *top_level__mercury_compile_main__MaybeTimestampMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 24)));
    top_level__mercury_compile_main__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 25)));
    top_level__mercury_compile_main__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ModuleAndImports1_37, (MR_Integer) 26)));
    {
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_17, (MR_Integer) 176, &top_level__mercury_compile_main__EventSetFileName_42);
    }
    top_level__mercury_compile_main__succeeded = (strcmp(top_level__mercury_compile_main__EventSetFileName_42, (MR_String) "") == 0);
    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__EventSetName_43 = (MR_String) "";
        {
          top_level__mercury_compile_main__EventSpecMap1_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0);
        }
        top_level__mercury_compile_main__EventSetErrors_45 = (MR_Integer) 0;
        top_level__mercury_compile_main__STATE_VARIABLE_Specs_86_86 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_83_83;
      }
    else
      {
        MR_String top_level__mercury_compile_main__EventSetName0_46;
        MR_Word top_level__mercury_compile_main__EventSpecMap0_47;
        MR_Word top_level__mercury_compile_main__EventSetSpecs_48;

        {
          parse_tree__prog_event__read_event_set_6_p_0(top_level__mercury_compile_main__EventSetFileName_42, &top_level__mercury_compile_main__EventSetName0_46, &top_level__mercury_compile_main__EventSpecMap0_47, &top_level__mercury_compile_main__EventSetSpecs_48);
        }
        {
          top_level__mercury_compile_main__STATE_VARIABLE_Specs_86_86 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_146_146, top_level__mercury_compile_main__EventSetSpecs_48, top_level__mercury_compile_main__STATE_VARIABLE_Specs_83_83);
        }
        {
          top_level__mercury_compile_main__EventSetErrors_45 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__EventSetSpecs_48);
        }
        switch (top_level__mercury_compile_main__EventSetErrors_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              top_level__mercury_compile_main__EventSetName_43 = top_level__mercury_compile_main__EventSetName0_46;
              top_level__mercury_compile_main__EventSpecMap1_44 = top_level__mercury_compile_main__EventSpecMap0_47;
            }
            break;
          case (MR_Integer) 1:
            {
              top_level__mercury_compile_main__EventSetName_43 = (MR_String) "";
              {
                top_level__mercury_compile_main__EventSpecMap1_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0);
              }
            }
            break;
        }
      }
    {
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile_main__Verbose_31, top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__STATE_VARIABLE_Specs_86_86, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_87_87);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_31, (MR_String) "% Module qualifying items...\n");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_main__Verbose_31);
    }
    {
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__AugCompUnit1_39, &top_level__mercury_compile_main__AugCompUnit2_49, top_level__mercury_compile_main__EventSpecMap1_44, &top_level__mercury_compile_main__EventSpecMap2_50, top_level__mercury_compile_main__EventSetFileName_42, &top_level__mercury_compile_main__MQInfo0_51, &top_level__mercury_compile_main__MQUndefTypes_52, &top_level__mercury_compile_main__MQUndefInsts_53, &top_level__mercury_compile_main__MQUndefModes_54, &top_level__mercury_compile_main__MQUndefTypeClasses_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_main__QualifySpecs_56);
    }
    {
      top_level__mercury_compile_main__STATE_VARIABLE_Specs_93_93 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_146_146, top_level__mercury_compile_main__QualifySpecs_56, top_level__mercury_compile_main__STATE_VARIABLE_Specs_87_87);
    }
    {
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile_main__Verbose_31, top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__STATE_VARIABLE_Specs_93_93, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_94_94);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_31, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_30);
    }
    {
      parse_tree__module_qual__mq_info_get_recompilation_info_2_p_0(top_level__mercury_compile_main__MQInfo0_51, &top_level__mercury_compile_main__RecompInfo0_57);
    }
    {
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile_main__Verbose_31, top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__STATE_VARIABLE_Specs_94_94, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_99_99);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_31, (MR_String) "% Expanding equivalence types and insts...\n");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_main__Verbose_31);
    }
    {
      parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(top_level__mercury_compile_main__AugCompUnit2_49, &top_level__mercury_compile_main__AugCompUnit_58, top_level__mercury_compile_main__EventSpecMap2_50, &top_level__mercury_compile_main__EventSpecMap_59, &top_level__mercury_compile_main__TypeEqvMap_60, &top_level__mercury_compile_main__UsedModules_61, top_level__mercury_compile_main__RecompInfo0_57, &top_level__mercury_compile_main__RecompInfo_62, &top_level__mercury_compile_main__ExpandSpecs_63);
    }
    {
      top_level__mercury_compile_main__ExpandErrors_64 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__ExpandSpecs_63);
    }
    {
      top_level__mercury_compile_main__STATE_VARIABLE_Specs_104_104 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_146_146, top_level__mercury_compile_main__ExpandSpecs_63, top_level__mercury_compile_main__STATE_VARIABLE_Specs_99_99);
    }
    {
      parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(top_level__mercury_compile_main__Verbose_31, top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__STATE_VARIABLE_Specs_104_104, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_105_105);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_31, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_30);
    }
    {
      parse_tree__module_qual__mq_info_set_recompilation_info_3_p_0(top_level__mercury_compile_main__RecompInfo_62, top_level__mercury_compile_main__MQInfo0_51, &top_level__mercury_compile_main__MQInfo_65);
    }
    {
      top_level__mercury_compile_main__EventSet_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__EventSet_66, 0) = ((MR_Box) (top_level__mercury_compile_main__EventSetName_43));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__EventSet_66, 1) = ((MR_Box) (top_level__mercury_compile_main__EventSpecMap_59));
    }
    {
      top_level__mercury_compile_main__make_hlds_17_p_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__AugCompUnit_58, top_level__mercury_compile_main__EventSet_66, top_level__mercury_compile_main__MQInfo_65, top_level__mercury_compile_main__TypeEqvMap_60, top_level__mercury_compile_main__UsedModules_61, top_level__mercury_compile_main__Verbose_31, top_level__mercury_compile_main__Stats_30, &top_level__mercury_compile_main__HLDS0_67, top_level__mercury_compile_main__QualInfo_22, &top_level__mercury_compile_main__MakeHLDSFoundInvalidType_68, &top_level__mercury_compile_main__MakeHLDSFoundInvalidInstOrMode_69, top_level__mercury_compile_main__FoundSemanticError_26, top_level__mercury_compile_main__STATE_VARIABLE_Specs_105_105, top_level__mercury_compile_main__STATE_VARIABLE_Specs_75);
    }
    {
      top_level__mercury_compile_main__maybe_write_definitions_5_p_0(top_level__mercury_compile_main__Verbose_31, top_level__mercury_compile_main__Stats_30, top_level__mercury_compile_main__HLDS0_67);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__MQUndefTypes_52 == (MR_Integer) 0);
    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__MQUndefTypeClasses_55 == (MR_Integer) 0);
        if (top_level__mercury_compile_main__succeeded)
          {
            top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__EventSetErrors_45 == (MR_Integer) 0);
            if (top_level__mercury_compile_main__succeeded)
              {
                top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__ExpandErrors_64 == (MR_Integer) 0);
                if (top_level__mercury_compile_main__succeeded)
                  top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__MakeHLDSFoundInvalidType_68 == (MR_Integer) 0);
              }
          }
      }
    if (top_level__mercury_compile_main__succeeded)
      *top_level__mercury_compile_main__UndefTypes_24 = (MR_Integer) 0;
    else
      *top_level__mercury_compile_main__UndefTypes_24 = (MR_Integer) 1;
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__MQUndefInsts_53 == (MR_Integer) 0);
    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__MQUndefModes_54 == (MR_Integer) 0);
        if (top_level__mercury_compile_main__succeeded)
          top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__MakeHLDSFoundInvalidInstOrMode_69 == (MR_Integer) 0);
      }
    if (top_level__mercury_compile_main__succeeded)
      *top_level__mercury_compile_main__UndefModes_25 = (MR_Integer) 0;
    else
      *top_level__mercury_compile_main__UndefModes_25 = (MR_Integer) 1;
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_main__HLDS0_67, (MR_Integer) 1, (MR_String) "initial", top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_72, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_73);
    }
    switch (top_level__mercury_compile_main__MMCMake_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (top_level__mercury_compile_main__WriteDFile0_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word top_level__mercury_compile_main__AllDeps_70;
              MR_Word top_level__mercury_compile_main__OutputMMCMakeDeps_71;

              {
                hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile_main__HLDS0_67, &top_level__mercury_compile_main__AllDeps_70);
              }
              {
                parse_tree__write_deps_file__write_dependency_file_6_p_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__ModuleAndImports0_20, top_level__mercury_compile_main__AllDeps_70, top_level__mercury_compile_main__MaybeTransOptDeps_36);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_17, (MR_Integer) 119, &top_level__mercury_compile_main__OutputMMCMakeDeps_71);
              }
              switch (top_level__mercury_compile_main__OutputMMCMakeDeps_71) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    make__make_write_module_dep_file_4_p_0(top_level__mercury_compile_main__Globals_17, top_level__mercury_compile_main__ModuleAndImports0_20);
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    top_level__mercury_compile_main__succeeded = (*top_level__mercury_compile_main__FoundSemanticError_26 == (MR_Integer) 1);
    if (!(top_level__mercury_compile_main__succeeded))
      top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__IntermodError_38 == (MR_Integer) 1);
    if (top_level__mercury_compile_main__succeeded)
      {
        hlds__hlds_module__module_info_incr_errors_2_p_0(top_level__mercury_compile_main__HLDS0_67, top_level__mercury_compile_main__HLDS1_21);
      }
    else
      *top_level__mercury_compile_main__HLDS1_21 = top_level__mercury_compile_main__HLDS0_67;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_augmented_module_12_p_0(
  MR_Word top_level__mercury_compile_main__Globals_13,
  MR_Word top_level__mercury_compile_main__OpModeAugment_14,
  MR_Word top_level__mercury_compile_main__ModuleAndImports_15,
  MR_Word top_level__mercury_compile_main__NestedSubModules_16,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_17,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_18,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_43,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_45,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_46)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__WriteDFile_22;
    MR_Word top_level__mercury_compile_main__HLDS1_24;
    MR_Word top_level__mercury_compile_main__QualInfo_25;
    MR_Word top_level__mercury_compile_main__MaybeTimestampMap_26;
    MR_Word top_level__mercury_compile_main__UndefTypes_27;
    MR_Word top_level__mercury_compile_main__UndefModes_28;
    MR_Word top_level__mercury_compile_main__PreHLDSErrors_29;
    MR_Word top_level__mercury_compile_main__FrontEndErrors_30;
    MR_Word top_level__mercury_compile_main__HLDS20_31;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_49_49;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_50_50;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
    MR_Word top_level__mercury_compile_main__V_55_55;

    switch (MR_tag((MR_Word) top_level__mercury_compile_main__OpModeAugment_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(top_level__mercury_compile_main__OpModeAugment_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            top_level__mercury_compile_main__WriteDFile_22 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            top_level__mercury_compile_main__WriteDFile_22 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            top_level__mercury_compile_main__WriteDFile_22 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            top_level__mercury_compile_main__WriteDFile_22 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_main__WriteDFile_22 = (MR_Integer) 1;
        break;
    }
    {
      top_level__mercury_compile_main__pre_hlds_pass_16_p_0(top_level__mercury_compile_main__Globals_13, top_level__mercury_compile_main__OpModeAugment_14, top_level__mercury_compile_main__WriteDFile_22, top_level__mercury_compile_main__ModuleAndImports_15, &top_level__mercury_compile_main__HLDS1_24, &top_level__mercury_compile_main__QualInfo_25, &top_level__mercury_compile_main__MaybeTimestampMap_26, &top_level__mercury_compile_main__UndefTypes_27, &top_level__mercury_compile_main__UndefModes_28, &top_level__mercury_compile_main__PreHLDSErrors_29, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_0_43, &top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_49_49, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_45, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_50_50);
    }
    {
      top_level__mercury_compile_front_end__frontend_pass_14_p_0(top_level__mercury_compile_main__OpModeAugment_14, top_level__mercury_compile_main__QualInfo_25, top_level__mercury_compile_main__UndefTypes_27, top_level__mercury_compile_main__UndefModes_28, top_level__mercury_compile_main__PreHLDSErrors_29, &top_level__mercury_compile_main__FrontEndErrors_30, top_level__mercury_compile_main__HLDS1_24, &top_level__mercury_compile_main__HLDS20_31, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile_main__STATE_VARIABLE_Specs_50_50, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__PreHLDSErrors_29 == (MR_Integer) 0);
    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__FrontEndErrors_30 == (MR_Integer) 0);
        if (top_level__mercury_compile_main__succeeded)
          {
            {
              top_level__mercury_compile_main__V_55_55 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_main__Globals_13, top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53);
            }
            top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__V_55_55 == (MR_Integer) 0);
          }
      }
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Word top_level__mercury_compile_main__Verbose_32;
        MR_Word top_level__mercury_compile_main__Stats_33;
        MR_Word top_level__mercury_compile_main__HLDS21_34;

        {
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_13, (MR_Integer) 47, &top_level__mercury_compile_main__Verbose_32);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_13, (MR_Integer) 57, &top_level__mercury_compile_main__Stats_33);
        }
        {
          top_level__mercury_compile_main__maybe_write_dependency_graph_6_p_0(top_level__mercury_compile_main__Verbose_32, top_level__mercury_compile_main__Stats_33, top_level__mercury_compile_main__HLDS20_31, &top_level__mercury_compile_main__HLDS21_34);
        }
        switch (MR_tag((MR_Word) top_level__mercury_compile_main__OpModeAugment_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(top_level__mercury_compile_main__OpModeAugment_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52;
                  *top_level__mercury_compile_main__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(top_level__mercury_compile_main__HLDS21_34, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44);
                  }
                  *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *top_level__mercury_compile_main__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word top_level__mercury_compile_main__HLDS22_40;

                  {
                    top_level__mercury_compile_main__prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile_main__Globals_13, top_level__mercury_compile_main__Verbose_32, top_level__mercury_compile_main__Stats_33, top_level__mercury_compile_main__HLDS21_34, &top_level__mercury_compile_main__HLDS22_40);
                  }
                  {
                    top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(top_level__mercury_compile_main__HLDS22_40, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44);
                  }
                  *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *top_level__mercury_compile_main__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    check_hlds__xml_documentation__xml_documentation_3_p_0(top_level__mercury_compile_main__HLDS21_34);
                  }
                  *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52;
                  *top_level__mercury_compile_main__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
                }
                break;
              case (MR_Integer) 4:
                {
                  *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52;
                  *top_level__mercury_compile_main__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word top_level__mercury_compile_main__UnusedArgs_35;

                  {
                    libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_13, (MR_Integer) 10, &top_level__mercury_compile_main__UnusedArgs_35);
                  }
                  switch (top_level__mercury_compile_main__UnusedArgs_35) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word top_level__mercury_compile_main__NoOptUnusedArgsGlobals_36;
                        MR_Word top_level__mercury_compile_main__HLDS21a_37;
                        MR_Word top_level__mercury_compile_main___UnusedArgsInfos_38;
                        MR_Word top_level__mercury_compile_main___HLDS22_39;

                        {
                          libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), top_level__mercury_compile_main__Globals_13, &top_level__mercury_compile_main__NoOptUnusedArgsGlobals_36);
                        }
                        {
                          hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_main__NoOptUnusedArgsGlobals_36, top_level__mercury_compile_main__HLDS21_34, &top_level__mercury_compile_main__HLDS21a_37);
                        }
                        {
                          top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile_main__Verbose_32, top_level__mercury_compile_main__Stats_33, &top_level__mercury_compile_main___UnusedArgsInfos_38, top_level__mercury_compile_main__HLDS21a_37, &top_level__mercury_compile_main___HLDS22_39);
                        }
                      }
                      break;
                  }
                  *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52;
                  *top_level__mercury_compile_main__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word top_level__mercury_compile_main__OpModeCodeGen_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__OpModeAugment_14, (MR_Integer) 0)));
              MR_Word top_level__mercury_compile_main__HLDS22_77;

              {
                top_level__mercury_compile_main__maybe_prepare_for_intermodule_analysis_7_p_0(top_level__mercury_compile_main__Globals_13, top_level__mercury_compile_main__Verbose_32, top_level__mercury_compile_main__Stats_33, top_level__mercury_compile_main__HLDS21_34, &top_level__mercury_compile_main__HLDS22_77);
              }
              {
                top_level__mercury_compile_main__after_front_end_passes_13_p_0(top_level__mercury_compile_main__Globals_13, top_level__mercury_compile_main__OpModeCodeGen_41, top_level__mercury_compile_main__NestedSubModules_16, top_level__mercury_compile_main__FindTimestampFiles_17, top_level__mercury_compile_main__MaybeTimestampMap_26, top_level__mercury_compile_main__HLDS22_77, top_level__mercury_compile_main__ExtraObjFiles_18, top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53, top_level__mercury_compile_main__STATE_VARIABLE_Specs_46, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52, top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44);
              }
            }
            break;
        }
      }
    else
      {
        MR_Integer top_level__mercury_compile_main__ExitStatus_42;

        {
          mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_main__ExitStatus_42);
        }
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__ExitStatus_42 == (MR_Integer) 0);
        if (top_level__mercury_compile_main__succeeded)
          {
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
          }
        else
          {
          }
        *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *top_level__mercury_compile_main__STATE_VARIABLE_Specs_46 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_53_53;
        *top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_44 = top_level__mercury_compile_main__STATE_VARIABLE_DumpInfo_52_52;
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_module_14_p_0(
  MR_Word top_level__mercury_compile_main__Globals_15,
  MR_Word top_level__mercury_compile_main__OpModeAugment_16,
  MR_String top_level__mercury_compile_main__SourceFileName_17,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_18,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_19,
  MR_Word top_level__mercury_compile_main__NestedSubModules0_20,
  MR_Word top_level__mercury_compile_main__HaveReadModuleMaps_21,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_22,
  MR_Word top_level__mercury_compile_main__RawCompUnit_23,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_24,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_37,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Specs_38)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_50_50;
    MR_Word top_level__mercury_compile_main__ModuleName_27;
    MR_Word top_level__mercury_compile_main__NestedSubModules_30;
    MR_Word top_level__mercury_compile_main__ModuleAndImports_31;
    MR_Word top_level__mercury_compile_main__ImportedSpecs_33;
    MR_Word top_level__mercury_compile_main__Errors_34;
    MR_Word top_level__mercury_compile_main__FatalErrors_35;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_41_41;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_43_43;
    MR_Word top_level__mercury_compile_main__V_44_44;
    MR_Word top_level__mercury_compile_main__V_28_28;
    MR_Word top_level__mercury_compile_main__V_29_29;
    MR_Word top_level__mercury_compile_main___AugCompUnit_32;

    {
      parse_tree__check_raw_comp_unit__check_for_no_exports_4_p_0(top_level__mercury_compile_main__Globals_15, top_level__mercury_compile_main__RawCompUnit_23, top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_37, &top_level__mercury_compile_main__STATE_VARIABLE_Specs_41_41);
    }
    top_level__mercury_compile_main__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__RawCompUnit_23, (MR_Integer) 0)));
    top_level__mercury_compile_main__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__RawCompUnit_23, (MR_Integer) 1)));
    top_level__mercury_compile_main__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__RawCompUnit_23, (MR_Integer) 2)));
    {
      top_level__mercury_compile_main__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_main__ModuleName_27, top_level__mercury_compile_main__SourceFileModuleName_18);
    }
    if (top_level__mercury_compile_main__succeeded)
      top_level__mercury_compile_main__NestedSubModules_30 = top_level__mercury_compile_main__NestedSubModules0_20;
    else
      {
        {
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &top_level__mercury_compile_main__NestedSubModules_30);
        }
      }
    {
      parse_tree__modules__grab_imported_modules_10_p_0(top_level__mercury_compile_main__Globals_15, top_level__mercury_compile_main__SourceFileName_17, top_level__mercury_compile_main__SourceFileModuleName_18, top_level__mercury_compile_main__MaybeTimestamp_19, top_level__mercury_compile_main__NestedSubModules_30, top_level__mercury_compile_main__RawCompUnit_23, top_level__mercury_compile_main__HaveReadModuleMaps_21, &top_level__mercury_compile_main__ModuleAndImports_31);
    }
    {
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(top_level__mercury_compile_main__ModuleAndImports_31, &top_level__mercury_compile_main___AugCompUnit_32, &top_level__mercury_compile_main__ImportedSpecs_33, &top_level__mercury_compile_main__Errors_34);
    }
    {
      top_level__mercury_compile_main__STATE_VARIABLE_Specs_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, top_level__mercury_compile_main__ImportedSpecs_33, top_level__mercury_compile_main__STATE_VARIABLE_Specs_41_41);
    }
    {
      top_level__mercury_compile_main__V_44_44 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    }
    top_level__mercury_compile_main__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    {
      mercury__set__intersect_3_p_0(top_level__mercury_compile_main__TypeCtorInfo_50_50, top_level__mercury_compile_main__Errors_34, top_level__mercury_compile_main__V_44_44, &top_level__mercury_compile_main__FatalErrors_35);
    }
    {
      top_level__mercury_compile_main__succeeded = mercury__set__is_empty_1_p_0(top_level__mercury_compile_main__TypeCtorInfo_50_50, top_level__mercury_compile_main__FatalErrors_35);
    }
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Word top_level__mercury_compile_main__V_36_36;

        {
          top_level__mercury_compile_main__process_augmented_module_12_p_0(top_level__mercury_compile_main__Globals_15, top_level__mercury_compile_main__OpModeAugment_16, top_level__mercury_compile_main__ModuleAndImports_31, top_level__mercury_compile_main__NestedSubModules_30, top_level__mercury_compile_main__FindTimestampFiles_22, top_level__mercury_compile_main__ExtraObjFiles_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_main__V_36_36, top_level__mercury_compile_main__STATE_VARIABLE_Specs_43_43, top_level__mercury_compile_main__STATE_VARIABLE_Specs_38);
        }
      }
    else
      {
        *top_level__mercury_compile_main__ExtraObjFiles_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *top_level__mercury_compile_main__STATE_VARIABLE_Specs_38 = top_level__mercury_compile_main__STATE_VARIABLE_Specs_43_43;
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__module_to_link_2_p_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_String * top_level__mercury_compile_main__ModuleToLink_6)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word top_level__mercury_compile_main__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word top_level__mercury_compile_main__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HeadVar__1_1, (MR_Integer) 2)));

    {
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(top_level__mercury_compile_main__ModuleName_3, top_level__mercury_compile_main__ModuleToLink_6);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_String top_level__mercury_compile_main__conv4_ModuleToLink_6;

    {
      top_level__mercury_compile_main__module_to_link_2_p_0(((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), &top_level__mercury_compile_main__conv4_ModuleToLink_6);
    }
    *top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv4_ModuleToLink_6));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv1_ExtraObjFiles_24;
    MR_Word top_level__mercury_compile_main__conv0_STATE_VARIABLE_Specs_38;

    {
      top_level__mercury_compile_main__augment_and_process_module_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 10))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), &top_level__mercury_compile_main__conv1_ExtraObjFiles_24, ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3), &top_level__mercury_compile_main__conv0_STATE_VARIABLE_Specs_38);
    }
    *top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv1_ExtraObjFiles_24));
    *top_level__mercury_compile_main__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_main__conv0_STATE_VARIABLE_Specs_38));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0(
  MR_Word top_level__mercury_compile_main__Globals_15,
  MR_Word top_level__mercury_compile_main__OpModeAugment_16,
  MR_String top_level__mercury_compile_main__FileName_17,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_18,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_19,
  MR_Word top_level__mercury_compile_main__NestedSubModules_20,
  MR_Word top_level__mercury_compile_main__HaveReadModuleMaps_21,
  MR_Word top_level__mercury_compile_main__FindTimestampFiles_22,
  MR_Word top_level__mercury_compile_main__RawCompUnits_23,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_31,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_25,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_26)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_47_47;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_53_53;
    MR_Word top_level__mercury_compile_main__ExtraObjFileLists_28;
    MR_Word top_level__mercury_compile_main__V_34_34;
    MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Specs_35_35;
    MR_Box top_level__mercury_compile_main__conv3_STATE_VARIABLE_Specs_35_35;
    MR_Box top_level__mercury_compile_main__conv2_STATE_VARIABLE_IO_36_36;
    MR_Integer top_level__mercury_compile_main___NumWarnings_29;
    MR_Integer top_level__mercury_compile_main___NumErrors_30;

    {
      top_level__mercury_compile_main__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 1) = ((MR_Box) (top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0_1));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals_15));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 4) = ((MR_Box) (top_level__mercury_compile_main__OpModeAugment_16));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 5) = ((MR_Box) (top_level__mercury_compile_main__FileName_17));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 6) = ((MR_Box) (top_level__mercury_compile_main__SourceFileModuleName_18));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 7) = ((MR_Box) (top_level__mercury_compile_main__MaybeTimestamp_19));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 8) = ((MR_Box) (top_level__mercury_compile_main__NestedSubModules_20));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 9) = ((MR_Box) (top_level__mercury_compile_main__HaveReadModuleMaps_21));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_34_34, 10) = ((MR_Box) (top_level__mercury_compile_main__FindTimestampFiles_22));
    }
    top_level__mercury_compile_main__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
    {
      mercury__list__map_foldl2_7_p_2(top_level__mercury_compile_main__TypeCtorInfo_47_47, (MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[7], (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile_main__V_34_34, top_level__mercury_compile_main__RawCompUnits_23, &top_level__mercury_compile_main__ExtraObjFileLists_28, ((MR_Box) (top_level__mercury_compile_main__STATE_VARIABLE_Specs_0_31)), &top_level__mercury_compile_main__conv3_STATE_VARIABLE_Specs_35_35, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv2_STATE_VARIABLE_IO_36_36);
    }
    top_level__mercury_compile_main__STATE_VARIABLE_Specs_35_35 = ((MR_Word) top_level__mercury_compile_main__conv3_STATE_VARIABLE_Specs_35_35);
    {
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_main__STATE_VARIABLE_Specs_35_35, top_level__mercury_compile_main__Globals_15, (MR_Integer) 0, &top_level__mercury_compile_main___NumWarnings_29, (MR_Integer) 0, &top_level__mercury_compile_main___NumErrors_30);
    }
    top_level__mercury_compile_main__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0(top_level__mercury_compile_main__TypeCtorInfo_47_47, top_level__mercury_compile_main__TypeCtorInfo_53_53, (MR_Word) &top_level__mercury_compile_main_scalar_common_7[2], top_level__mercury_compile_main__RawCompUnits_23, top_level__mercury_compile_main__ModulesToLink_25);
    }
    {
      mercury__list__condense_2_p_0(top_level__mercury_compile_main__TypeCtorInfo_53_53, top_level__mercury_compile_main__ExtraObjFileLists_28, top_level__mercury_compile_main__ExtraObjFiles_26);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_module_or_file_14_p_0(
  MR_Word top_level__mercury_compile_main__Globals0_15,
  MR_Word * top_level__mercury_compile_main__Globals_16,
  MR_Word top_level__mercury_compile_main__FileOrModuleName_17,
  MR_Word * top_level__mercury_compile_main__ModuleName_18,
  MR_String * top_level__mercury_compile_main__SourceFileName_19,
  MR_Word top_level__mercury_compile_main__ReturnTimestamp_20,
  MR_Word * top_level__mercury_compile_main__MaybeTimestamp_21,
  MR_Word * top_level__mercury_compile_main__ParseTreeSrc_22,
  MR_Word * top_level__mercury_compile_main__Specs_23,
  MR_Word * top_level__mercury_compile_main__Errors_24,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_47)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    if (((MR_tag((MR_Word) top_level__mercury_compile_main__FileOrModuleName_17)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String top_level__mercury_compile_main__FileName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModuleName_17, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_main__DefaultModuleName_39;
        MR_Word top_level__mercury_compile_main__Verbose_145;
        MR_Word top_level__mercury_compile_main__Stats_153;
        MR_Word top_level__mercury_compile_main__MaybeTimestampPrime_138;
        MR_Word top_level__mercury_compile_main__ParseTreeSrcPrime_139;
        MR_Word top_level__mercury_compile_main__SpecsPrime_140;
        MR_Word top_level__mercury_compile_main__ErrorsPrime_141;
        MR_Word top_level__mercury_compile_main__V_56_56;
        MR_Word top_level__mercury_compile_main__V_161_161;
        MR_Word top_level__mercury_compile_main__V_162_162;
        MR_String top_level__mercury_compile_main__V_40_40;

        {
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals0_15, (MR_Integer) 47, &top_level__mercury_compile_main__Verbose_145);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_145, (MR_String) "% Parsing file \140");
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_145, top_level__mercury_compile_main__FileName_38);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_145, (MR_String) "\' and imported interfaces...\n");
        }
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__FileName_38, &top_level__mercury_compile_main__DefaultModuleName_39);
        }
        top_level__mercury_compile_main__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
        top_level__mercury_compile_main__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
        top_level__mercury_compile_main__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
        {
          top_level__mercury_compile_main__succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(top_level__mercury_compile_main__V_56_56, top_level__mercury_compile_main__DefaultModuleName_39, top_level__mercury_compile_main__ReturnTimestamp_20, &top_level__mercury_compile_main__V_40_40, &top_level__mercury_compile_main__MaybeTimestampPrime_138, &top_level__mercury_compile_main__ParseTreeSrcPrime_139, &top_level__mercury_compile_main__SpecsPrime_140, &top_level__mercury_compile_main__ErrorsPrime_141);
        }
        if (top_level__mercury_compile_main__succeeded)
          {
            MR_Word top_level__mercury_compile_main__V_57_57;
            MR_Word top_level__mercury_compile_main__HaveReadModuleMapSrc0_135;
            MR_Word top_level__mercury_compile_main__HaveReadModuleMapSrc_136;
            MR_Word top_level__mercury_compile_main__V_163_163;
            MR_Word top_level__mercury_compile_main__V_164_164;
            MR_Word top_level__mercury_compile_main__V_166_166;
            MR_Word top_level__mercury_compile_main__V_167_167;
            MR_Word top_level__mercury_compile_main__V_165_165;

            *top_level__mercury_compile_main__Globals_16 = top_level__mercury_compile_main__Globals0_15;
            top_level__mercury_compile_main__HaveReadModuleMapSrc0_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
            top_level__mercury_compile_main__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
            top_level__mercury_compile_main__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            *top_level__mercury_compile_main__ModuleName_18 = top_level__mercury_compile_main__DefaultModuleName_39;
            {
              top_level__mercury_compile_main__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_57_57, 0) = ((MR_Box) (*top_level__mercury_compile_main__ModuleName_18));
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_57_57, 1) = NULL;
            }
            {
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2], ((MR_Box) (top_level__mercury_compile_main__V_57_57)), top_level__mercury_compile_main__HaveReadModuleMapSrc0_135, &top_level__mercury_compile_main__HaveReadModuleMapSrc_136);
            }
            top_level__mercury_compile_main__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
            top_level__mercury_compile_main__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
            top_level__mercury_compile_main__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_47 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_main__HaveReadModuleMapSrc_136));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__V_166_166));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_main__V_167_167));
            }
            *top_level__mercury_compile_main__MaybeTimestamp_21 = top_level__mercury_compile_main__MaybeTimestampPrime_138;
            *top_level__mercury_compile_main__ParseTreeSrc_22 = top_level__mercury_compile_main__ParseTreeSrcPrime_139;
            *top_level__mercury_compile_main__Specs_23 = top_level__mercury_compile_main__SpecsPrime_140;
            *top_level__mercury_compile_main__Errors_24 = top_level__mercury_compile_main__ErrorsPrime_141;
          }
        else
          {
            MR_Word top_level__mercury_compile_main__Smart_41;
            MR_Word top_level__mercury_compile_main__V_62_62;
            MR_Word top_level__mercury_compile_main__DisableSmart_137;
            MR_Word top_level__mercury_compile_main__V_42_42;
            MR_Word top_level__mercury_compile_main__V_43_43;

            {
              top_level__mercury_compile_main__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_62_62, 0) = ((MR_Box) (top_level__mercury_compile_main__ReturnTimestamp_20));
            }
            {
              parse_tree__read_modules__read_module_src_from_file_11_p_0(top_level__mercury_compile_main__Globals0_15, top_level__mercury_compile_main__FileName_38, (MR_String) "Reading file", (MR_Integer) 1, top_level__mercury_compile_main__V_62_62, top_level__mercury_compile_main__MaybeTimestamp_21, top_level__mercury_compile_main__ParseTreeSrc_22, top_level__mercury_compile_main__Specs_23, top_level__mercury_compile_main__Errors_24);
            }
            {
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile_main__DisableSmart_137);
            }
            switch (top_level__mercury_compile_main__DisableSmart_137) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *top_level__mercury_compile_main__Globals_16 = top_level__mercury_compile_main__Globals0_15;
                break;
              case (MR_Integer) 1:
                {
                  {
                    libs__globals__set_option_4_p_0((MR_Integer) 117, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), top_level__mercury_compile_main__Globals0_15, top_level__mercury_compile_main__Globals_16);
                  }
                }
                break;
            }
            {
              libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile_main__Globals_16, (MR_Integer) 117, &top_level__mercury_compile_main__Smart_41);
            }
            *top_level__mercury_compile_main__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_main__ParseTreeSrc_22, (MR_Integer) 0)));
            top_level__mercury_compile_main__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_main__ParseTreeSrc_22, (MR_Integer) 1)));
            top_level__mercury_compile_main__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_main__ParseTreeSrc_22, (MR_Integer) 2)));
            top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__Smart_41 == (MR_Integer) 1);
            if (top_level__mercury_compile_main__succeeded)
              {
                {
                  top_level__mercury_compile_main__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*top_level__mercury_compile_main__ModuleName_18, top_level__mercury_compile_main__DefaultModuleName_39);
                }
                top_level__mercury_compile_main__succeeded = !(top_level__mercury_compile_main__succeeded);
              }
            if (top_level__mercury_compile_main__succeeded)
              {
                MR_Word top_level__mercury_compile_main__Warn_44;

                {
                  libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile_main__Globals_16, (MR_Integer) 24, &top_level__mercury_compile_main__Warn_44);
                }
                switch (top_level__mercury_compile_main__Warn_44) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word top_level__mercury_compile_main__Pieces_45;
                      MR_Word top_level__mercury_compile_main__V_72_72;
                      MR_Word top_level__mercury_compile_main__V_75_75;
                      MR_Word top_level__mercury_compile_main__V_77_77;
                      MR_Word top_level__mercury_compile_main__V_78_78;
                      MR_Word top_level__mercury_compile_main__V_79_79;
                      MR_Word top_level__mercury_compile_main__V_82_82;
                      MR_Word top_level__mercury_compile_main__V_83_83;

                      {
                        top_level__mercury_compile_main__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), top_level__mercury_compile_main__V_78_78, 0) = ((MR_Box) (top_level__mercury_compile_main__FileName_38));
                      }
                      {
                        top_level__mercury_compile_main__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_83_83, 1) = ((MR_Box) (*top_level__mercury_compile_main__ModuleName_18));
                      }
                      {
                        top_level__mercury_compile_main__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_82_82, 0) = ((MR_Box) (top_level__mercury_compile_main__V_83_83));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[20])));
                      }
                      {
                        top_level__mercury_compile_main__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[32])));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_79_79, 1) = ((MR_Box) (top_level__mercury_compile_main__V_82_82));
                      }
                      {
                        top_level__mercury_compile_main__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_77_77, 0) = ((MR_Box) (top_level__mercury_compile_main__V_78_78));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_77_77, 1) = ((MR_Box) (top_level__mercury_compile_main__V_79_79));
                      }
                      {
                        top_level__mercury_compile_main__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_75_75, 1) = ((MR_Box) (top_level__mercury_compile_main__V_77_77));
                      }
                      {
                        top_level__mercury_compile_main__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[31])));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_72_72, 1) = ((MR_Box) (top_level__mercury_compile_main__V_75_75));
                      }
                      {
                        top_level__mercury_compile_main__Pieces_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Pieces_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[30])));
                        MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Pieces_45, 1) = ((MR_Box) (top_level__mercury_compile_main__V_72_72));
                      }
                      {
                        parse_tree__error_util__write_error_pieces_plain_4_p_0(*top_level__mercury_compile_main__Globals_16, top_level__mercury_compile_main__Pieces_45);
                      }
                      {
                        libs__compiler_util__record_warning_3_p_0(*top_level__mercury_compile_main__Globals_16);
                      }
                    }
                    break;
                }
                {
                  libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
                }
              }
            else
              {
              }
            *top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_47 = top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46;
          }
        {
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile_main__Globals_16, (MR_Integer) 58, &top_level__mercury_compile_main__Stats_153);
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_153);
        }
        {
          *top_level__mercury_compile_main__SourceFileName_19 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__FileName_38, (MR_String) ".m");
        }
      }
    else
      {
        MR_Word top_level__mercury_compile_main__Verbose_27;
        MR_String top_level__mercury_compile_main__ModuleNameString_28;
        MR_Word top_level__mercury_compile_main__Stats_37;
        MR_String top_level__mercury_compile_main__SourceFileNamePrime_29;
        MR_Word top_level__mercury_compile_main__MaybeTimestampPrime_30;
        MR_Word top_level__mercury_compile_main__ParseTreeSrcPrime_31;
        MR_Word top_level__mercury_compile_main__SpecsPrime_32;
        MR_Word top_level__mercury_compile_main__ErrorsPrime_33;
        MR_Word top_level__mercury_compile_main__V_120_120;
        MR_Word top_level__mercury_compile_main__V_154_154;
        MR_Word top_level__mercury_compile_main__V_155_155;

        *top_level__mercury_compile_main__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModuleName_17, (MR_Integer) 0)));
        {
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals0_15, (MR_Integer) 47, &top_level__mercury_compile_main__Verbose_27);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_27, (MR_String) "% Parsing module \140");
        }
        {
          top_level__mercury_compile_main__ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(*top_level__mercury_compile_main__ModuleName_18);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_27, top_level__mercury_compile_main__ModuleNameString_28);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_main__Verbose_27, (MR_String) "\' and imported interfaces...\n");
        }
        top_level__mercury_compile_main__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
        top_level__mercury_compile_main__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
        top_level__mercury_compile_main__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
        {
          top_level__mercury_compile_main__succeeded = parse_tree__read_modules__find_read_module_src_8_p_0(top_level__mercury_compile_main__V_120_120, *top_level__mercury_compile_main__ModuleName_18, top_level__mercury_compile_main__ReturnTimestamp_20, &top_level__mercury_compile_main__SourceFileNamePrime_29, &top_level__mercury_compile_main__MaybeTimestampPrime_30, &top_level__mercury_compile_main__ParseTreeSrcPrime_31, &top_level__mercury_compile_main__SpecsPrime_32, &top_level__mercury_compile_main__ErrorsPrime_33);
        }
        if (top_level__mercury_compile_main__succeeded)
          {
            MR_Word top_level__mercury_compile_main__HaveReadModuleMapSrc0_34;
            MR_Word top_level__mercury_compile_main__HaveReadModuleMapSrc_35;
            MR_Word top_level__mercury_compile_main__V_121_121;
            MR_Word top_level__mercury_compile_main__V_156_156;
            MR_Word top_level__mercury_compile_main__V_157_157;
            MR_Word top_level__mercury_compile_main__V_159_159;
            MR_Word top_level__mercury_compile_main__V_160_160;
            MR_Word top_level__mercury_compile_main__V_158_158;

            *top_level__mercury_compile_main__Globals_16 = top_level__mercury_compile_main__Globals0_15;
            top_level__mercury_compile_main__HaveReadModuleMapSrc0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
            top_level__mercury_compile_main__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
            top_level__mercury_compile_main__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            {
              top_level__mercury_compile_main__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_121_121, 0) = ((MR_Box) (*top_level__mercury_compile_main__ModuleName_18));
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_121_121, 1) = NULL;
            }
            {
              mercury__map__delete_3_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2], ((MR_Box) (top_level__mercury_compile_main__V_121_121)), top_level__mercury_compile_main__HaveReadModuleMapSrc0_34, &top_level__mercury_compile_main__HaveReadModuleMapSrc_35);
            }
            top_level__mercury_compile_main__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 0)));
            top_level__mercury_compile_main__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 1)));
            top_level__mercury_compile_main__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46, (MR_Integer) 2)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_47 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_main__HaveReadModuleMapSrc_35));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__V_159_159));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_main__V_160_160));
            }
            *top_level__mercury_compile_main__SourceFileName_19 = top_level__mercury_compile_main__SourceFileNamePrime_29;
            *top_level__mercury_compile_main__MaybeTimestamp_21 = top_level__mercury_compile_main__MaybeTimestampPrime_30;
            *top_level__mercury_compile_main__ParseTreeSrc_22 = top_level__mercury_compile_main__ParseTreeSrcPrime_31;
            *top_level__mercury_compile_main__Specs_23 = top_level__mercury_compile_main__SpecsPrime_32;
            *top_level__mercury_compile_main__Errors_24 = top_level__mercury_compile_main__ErrorsPrime_33;
          }
        else
          {
            MR_Word top_level__mercury_compile_main__DisableSmart_36;
            MR_Word top_level__mercury_compile_main__V_127_127;

            {
              top_level__mercury_compile_main__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_127_127, 0) = ((MR_Box) (top_level__mercury_compile_main__ReturnTimestamp_20));
            }
            {
              parse_tree__read_modules__read_module_src_13_p_0(top_level__mercury_compile_main__Globals0_15, (MR_String) "Reading module", (MR_Integer) 1, (MR_Integer) 1, *top_level__mercury_compile_main__ModuleName_18, top_level__mercury_compile_main__SourceFileName_19, top_level__mercury_compile_main__V_127_127, top_level__mercury_compile_main__MaybeTimestamp_21, top_level__mercury_compile_main__ParseTreeSrc_22, top_level__mercury_compile_main__Specs_23, top_level__mercury_compile_main__Errors_24);
            }
            {
              libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile_main__DisableSmart_36);
            }
            switch (top_level__mercury_compile_main__DisableSmart_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *top_level__mercury_compile_main__Globals_16 = top_level__mercury_compile_main__Globals0_15;
                break;
              case (MR_Integer) 1:
                {
                  {
                    libs__globals__set_option_4_p_0((MR_Integer) 117, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), top_level__mercury_compile_main__Globals0_15, top_level__mercury_compile_main__Globals_16);
                  }
                }
                break;
            }
            *top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_47 = top_level__mercury_compile_main__STATE_VARIABLE_HaveReadModuleMaps_0_46;
          }
        {
          libs__globals__lookup_bool_option_3_p_0(*top_level__mercury_compile_main__Globals_16, (MR_Integer) 57, &top_level__mercury_compile_main__Stats_37);
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_main__Stats_37);
        }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(
  MR_Word top_level__mercury_compile_main__Report_6,
  MR_Word top_level__mercury_compile_main__OptionArgs_7,
  MR_Word top_level__mercury_compile_main__Args_8)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    switch (top_level__mercury_compile_main__Report_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String top_level__mercury_compile_main__V_19_19;
          MR_Word top_level__mercury_compile_main__V_21_21;

          {
            mercury__io__write_string_3_p_0((MR_String) "% Command line options start\n");
          }
          {
            top_level__mercury_compile_main__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile_main__OptionArgs_7, top_level__mercury_compile_main__Args_8);
          }
          {
            top_level__mercury_compile_main__V_19_19 = mercury__string__join_list_2_f_0((MR_String) "\n% ", top_level__mercury_compile_main__V_21_21);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
          {
            mercury__io__write_string_3_p_0(top_level__mercury_compile_main__V_19_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% Command line options end\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_3(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv1_TimestampFiles_10;

    {
      top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), &top_level__mercury_compile_main__conv1_TimestampFiles_10);
    }
    *top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv1_TimestampFiles_10));
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1)
{
  {
    MR_Box top_level__mercury_compile_main__wrapper_arg_2;
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv0_HeadVar__2_2;

    {
      top_level__mercury_compile_main__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) top_level__mercury_compile_main__wrapper_arg_1));
    }
    top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__2_2));
    return top_level__mercury_compile_main__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main__IntroducedFrom__pred__read_augment_and_process_module__1191__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1));
    }
    return top_level__mercury_compile_main__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__read_augment_and_process_module_10_p_0(
  MR_Word top_level__mercury_compile_main__Globals0_11,
  MR_Word top_level__mercury_compile_main__OpModeAugment_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__FileOrModule_14,
  MR_Word top_level__mercury_compile_main__MaybeModulesToRecompile_15,
  MR_Word top_level__mercury_compile_main__HaveReadModuleMap0_16,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_17,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_18)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Globals_22;
    MR_Word top_level__mercury_compile_main__ModuleName_23;
    MR_String top_level__mercury_compile_main__FileName_24;
    MR_Word top_level__mercury_compile_main__MaybeTimestamp_25;
    MR_Word top_level__mercury_compile_main__ParseTreeSrc_26;
    MR_Word top_level__mercury_compile_main__Specs0_27;
    MR_Word top_level__mercury_compile_main__Errors_28;
    MR_Word top_level__mercury_compile_main__HaveReadModuleMaps_29;
    MR_Word top_level__mercury_compile_main__TypeCtorInfo_9_81;

    switch (MR_tag((MR_Word) top_level__mercury_compile_main__OpModeAugment_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(top_level__mercury_compile_main__OpModeAugment_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 3:
            {
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word top_level__mercury_compile_main__ReportCmdLineArgsDotErr_21;

              {
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals0_11, (MR_Integer) 56, &top_level__mercury_compile_main__ReportCmdLineArgsDotErr_21);
              }
              {
                top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(top_level__mercury_compile_main__ReportCmdLineArgsDotErr_21, top_level__mercury_compile_main__OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_main__ReportCmdLineArgsDotErr_21;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals0_11, (MR_Integer) 56, &top_level__mercury_compile_main__ReportCmdLineArgsDotErr_21);
          }
          {
            top_level__mercury_compile_main__maybe_report_cmd_line_5_p_0(top_level__mercury_compile_main__ReportCmdLineArgsDotErr_21, top_level__mercury_compile_main__OptionArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
        }
        break;
    }
    {
      top_level__mercury_compile_main__read_module_or_file_14_p_0(top_level__mercury_compile_main__Globals0_11, &top_level__mercury_compile_main__Globals_22, top_level__mercury_compile_main__FileOrModule_14, &top_level__mercury_compile_main__ModuleName_23, &top_level__mercury_compile_main__FileName_24, (MR_Integer) 0, &top_level__mercury_compile_main__MaybeTimestamp_25, &top_level__mercury_compile_main__ParseTreeSrc_26, &top_level__mercury_compile_main__Specs0_27, &top_level__mercury_compile_main__Errors_28, top_level__mercury_compile_main__HaveReadModuleMap0_16, &top_level__mercury_compile_main__HaveReadModuleMaps_29);
    }
    top_level__mercury_compile_main__TypeCtorInfo_9_81 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    {
      top_level__mercury_compile_main__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile_main__TypeCtorInfo_9_81, top_level__mercury_compile_main__Errors_28);
    }
    if (top_level__mercury_compile_main__succeeded)
      {
        {
          MR_Word top_level__mercury_compile_main__HaltSyntax_77;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_22, (MR_Integer) 3, &top_level__mercury_compile_main__HaltSyntax_77);
          }
          top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__HaltSyntax_77 == (MR_Integer) 1);
        }
        if (!(top_level__mercury_compile_main__succeeded))
          {
            MR_Word top_level__mercury_compile_main__FatalErrors_78;
            MR_Word top_level__mercury_compile_main__V_79_79;

            {
              top_level__mercury_compile_main__V_79_79 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
            }
            {
              mercury__set__intersect_3_p_0(top_level__mercury_compile_main__TypeCtorInfo_9_81, top_level__mercury_compile_main__Errors_28, top_level__mercury_compile_main__V_79_79, &top_level__mercury_compile_main__FatalErrors_78);
            }
            {
              top_level__mercury_compile_main__succeeded = mercury__set__is_non_empty_1_p_0(top_level__mercury_compile_main__TypeCtorInfo_9_81, top_level__mercury_compile_main__FatalErrors_78);
            }
          }
      }
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Integer top_level__mercury_compile_main___NumWarnings_30;
        MR_Integer top_level__mercury_compile_main___NumErrors_31;

        {
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_main__Specs0_27, top_level__mercury_compile_main__Globals_22, (MR_Integer) 0, &top_level__mercury_compile_main___NumWarnings_30, (MR_Integer) 0, &top_level__mercury_compile_main___NumErrors_31);
        }
        *top_level__mercury_compile_main__ModulesToLink_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word top_level__mercury_compile_main__TypeCtorInfo_69_69;
        MR_Word top_level__mercury_compile_main__RawCompUnits0_32;
        MR_Word top_level__mercury_compile_main__Specs1_33;
        MR_Word top_level__mercury_compile_main__RawCompUnitsToCompile_40;
        MR_Word top_level__mercury_compile_main__RawCompUnitNames_41;
        MR_Word top_level__mercury_compile_main__NestedCompUnitNames_42;
        MR_Word top_level__mercury_compile_main__FindTimestampFiles_43;
        MR_Word top_level__mercury_compile_main__TraceProf_44;
        MR_Word top_level__mercury_compile_main__GlobalsToUse_47;
        MR_Word top_level__mercury_compile_main__V_59_59;
        MR_Word top_level__mercury_compile_main__CompilationTarget_84;
        MR_String top_level__mercury_compile_main__TimestampSuffix_85;
        MR_Word top_level__mercury_compile_main__V_73_73;

        {
          parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile_main__ParseTreeSrc_26, &top_level__mercury_compile_main__RawCompUnits0_32, top_level__mercury_compile_main__Specs0_27, &top_level__mercury_compile_main__Specs1_33);
        }
        if ((top_level__mercury_compile_main__MaybeModulesToRecompile_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          top_level__mercury_compile_main__RawCompUnitsToCompile_40 = top_level__mercury_compile_main__RawCompUnits0_32;
        else
          {
            MR_Word top_level__mercury_compile_main__ModulesToRecompile_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeModulesToRecompile_15, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_main__ToRecompile_35;

            {
              top_level__mercury_compile_main__ToRecompile_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ToRecompile_35, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_11[0]));
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ToRecompile_35, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_1));
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ToRecompile_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ToRecompile_35, 3) = ((MR_Box) (top_level__mercury_compile_main__ModulesToRecompile_34));
            }
            {
              mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, top_level__mercury_compile_main__ToRecompile_35, top_level__mercury_compile_main__RawCompUnits0_32, &top_level__mercury_compile_main__RawCompUnitsToCompile_40);
            }
          }
        top_level__mercury_compile_main__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        {
          top_level__mercury_compile_main__V_59_59 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, top_level__mercury_compile_main__TypeCtorInfo_69_69, (MR_Word) &top_level__mercury_compile_main_scalar_common_7[1], top_level__mercury_compile_main__RawCompUnits0_32);
        }
        {
          top_level__mercury_compile_main__RawCompUnitNames_41 = mercury__set__list_to_set_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_69_69, top_level__mercury_compile_main__V_59_59);
        }
        {
          mercury__set__delete_3_p_0(top_level__mercury_compile_main__TypeCtorInfo_69_69, ((MR_Box) (top_level__mercury_compile_main__ModuleName_23)), top_level__mercury_compile_main__RawCompUnitNames_41, &top_level__mercury_compile_main__NestedCompUnitNames_42);
        }
        {
          libs__globals__get_target_2_p_0(top_level__mercury_compile_main__Globals_22, &top_level__mercury_compile_main__CompilationTarget_84);
        }
        top_level__mercury_compile_main__TimestampSuffix_85 = ((&top_level__mercury_compile_main_vector_common_10[8 + top_level__mercury_compile_main__CompilationTarget_84]))->top_level__mercury_compile_main__vector_common_type_10_0__vct_10_f_0;
        {
          top_level__mercury_compile_main__FindTimestampFiles_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FindTimestampFiles_43, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FindTimestampFiles_43, 1) = ((MR_Box) (top_level__mercury_compile_main__read_augment_and_process_module_10_p_0_3));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FindTimestampFiles_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FindTimestampFiles_43, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals_22));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FindTimestampFiles_43, 4) = ((MR_Box) (top_level__mercury_compile_main__TimestampSuffix_85));
        }
        {
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_22, (MR_Integer) 123, &top_level__mercury_compile_main__TraceProf_44);
        }
        {
          top_level__mercury_compile_main__succeeded = mdbcomp__builtin_modules__non_traced_mercury_builtin_module_1_p_0(top_level__mercury_compile_main__ModuleName_23);
        }
        if (top_level__mercury_compile_main__succeeded)
          {
            {
              top_level__mercury_compile_main__V_73_73 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
            }
            {
              top_level__mercury_compile_main__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_main__ModuleName_23, top_level__mercury_compile_main__V_73_73);
            }
            if (top_level__mercury_compile_main__succeeded)
              top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__TraceProf_44 == (MR_Integer) 1);
            top_level__mercury_compile_main__succeeded = !(top_level__mercury_compile_main__succeeded);
          }
        if (top_level__mercury_compile_main__succeeded)
          {
            MR_Word top_level__mercury_compile_main__GlobalsNoTrace0_45;

            {
              libs__globals__set_option_4_p_0((MR_Integer) 265, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), top_level__mercury_compile_main__Globals_22, &top_level__mercury_compile_main__GlobalsNoTrace0_45);
            }
            {
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile_main__GlobalsNoTrace0_45, &top_level__mercury_compile_main__GlobalsToUse_47);
            }
          }
        else
          top_level__mercury_compile_main__GlobalsToUse_47 = top_level__mercury_compile_main__Globals_22;
        {
          top_level__mercury_compile_main__augment_and_process_all_submodules_14_p_0(top_level__mercury_compile_main__GlobalsToUse_47, top_level__mercury_compile_main__OpModeAugment_12, top_level__mercury_compile_main__FileName_24, top_level__mercury_compile_main__ModuleName_23, top_level__mercury_compile_main__MaybeTimestamp_25, top_level__mercury_compile_main__NestedCompUnitNames_42, top_level__mercury_compile_main__HaveReadModuleMaps_29, top_level__mercury_compile_main__FindTimestampFiles_43, top_level__mercury_compile_main__RawCompUnitsToCompile_40, top_level__mercury_compile_main__Specs1_33, top_level__mercury_compile_main__ModulesToLink_17, top_level__mercury_compile_main__ExtraObjFiles_18);
        }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__apply_process_module_7_p_0(
  MR_Word top_level__mercury_compile_main__ProcessModule_8,
  MR_String top_level__mercury_compile_main__FileName_9,
  MR_Word top_level__mercury_compile_main__ModuleName_10,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    void MR_CALL (* top_level__mercury_compile_main__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_8, (MR_Integer) 1)));
    MR_Box top_level__mercury_compile_main__conv1_STATE_VARIABLE_IO_15;

    {
      top_level__mercury_compile_main__func_0(((MR_Box) top_level__mercury_compile_main__ProcessModule_8), ((MR_Box) (top_level__mercury_compile_main__FileName_9)), ((MR_Box) (top_level__mercury_compile_main__ModuleName_10)), ((MR_Box) (top_level__mercury_compile_main__MaybeTimestamp_11)), ((MR_Box) (top_level__mercury_compile_main__RawCompUnit_12)), ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv1_STATE_VARIABLE_IO_15);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__call_make_private_interface_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_10,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      parse_tree__write_module_interface_files__write_private_interface_file_7_p_0(top_level__mercury_compile_main__Globals_8, top_level__mercury_compile_main__SourceFileName_9, top_level__mercury_compile_main__SourceFileModuleName_10, top_level__mercury_compile_main__RawCompUnit_12, top_level__mercury_compile_main__MaybeTimestamp_11);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__call_make_short_interface_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__HeadVar__3_10,
  MR_Word top_level__mercury_compile_main__HeadVar__4_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_95_91_51_44_32_52_93_95_48_7_p_0(top_level__mercury_compile_main__Globals_8, top_level__mercury_compile_main__SourceFileName_9, top_level__mercury_compile_main__RawCompUnit_12);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__call_make_interface_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_String top_level__mercury_compile_main__SourceFileName_9,
  MR_Word top_level__mercury_compile_main__SourceFileModuleName_10,
  MR_Word top_level__mercury_compile_main__MaybeTimestamp_11,
  MR_Word top_level__mercury_compile_main__RawCompUnit_12)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      parse_tree__write_module_interface_files__write_interface_file_7_p_0(top_level__mercury_compile_main__Globals_8, top_level__mercury_compile_main__SourceFileName_9, top_level__mercury_compile_main__SourceFileModuleName_10, top_level__mercury_compile_main__RawCompUnit_12, top_level__mercury_compile_main__MaybeTimestamp_11);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(
  MR_Word top_level__mercury_compile_main__Globals_7,
  MR_String top_level__mercury_compile_main__TimestampSuffix_8,
  MR_Word top_level__mercury_compile_main__ModuleName_9,
  MR_Word * top_level__mercury_compile_main__TimestampFiles_10)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_String top_level__mercury_compile_main__FileName_12;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_7, top_level__mercury_compile_main__ModuleName_9, top_level__mercury_compile_main__TimestampSuffix_8, (MR_Integer) 0, &top_level__mercury_compile_main__FileName_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *top_level__mercury_compile_main__TimestampFiles_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_main__FileName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv0_TimestampFiles_10;

    {
      top_level__mercury_compile_main__find_timestamp_files_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), &top_level__mercury_compile_main__conv0_TimestampFiles_10);
    }
    *top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv0_TimestampFiles_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_timestamp_files_2_p_0(
  MR_Word top_level__mercury_compile_main__Globals_3,
  MR_Word * top_level__mercury_compile_main__FindTimestampFiles_4)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__CompilationTarget_5;
    MR_String top_level__mercury_compile_main__TimestampSuffix_6;

    {
      libs__globals__get_target_2_p_0(top_level__mercury_compile_main__Globals_3, &top_level__mercury_compile_main__CompilationTarget_5);
    }
    top_level__mercury_compile_main__TimestampSuffix_6 = ((&top_level__mercury_compile_main_vector_common_10[4 + top_level__mercury_compile_main__CompilationTarget_5]))->top_level__mercury_compile_main__vector_common_type_10_0__vct_10_f_0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *top_level__mercury_compile_main__FindTimestampFiles_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__find_timestamp_files_2_p_0_1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals_3));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_main__TimestampSuffix_6));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__usual_find_target_files_6_p_0(
  MR_Word top_level__mercury_compile_main__Globals_7,
  MR_String top_level__mercury_compile_main__TargetSuffix_8,
  MR_Word top_level__mercury_compile_main__ModuleName_9,
  MR_Word * top_level__mercury_compile_main__TargetFiles_10)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_String top_level__mercury_compile_main__FileName_12;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_7, top_level__mercury_compile_main__ModuleName_9, top_level__mercury_compile_main__TargetSuffix_8, (MR_Integer) 0, &top_level__mercury_compile_main__FileName_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *top_level__mercury_compile_main__TargetFiles_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_main__FileName_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv0_TargetFiles_10;

    {
      top_level__mercury_compile_main__usual_find_target_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), &top_level__mercury_compile_main__conv0_TargetFiles_10);
    }
    *top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv0_TargetFiles_10));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0(
  MR_Word top_level__mercury_compile_main__Globals_3,
  MR_Word * top_level__mercury_compile_main__FindTargetFiles_4)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__CompilationTarget_5;
    MR_String top_level__mercury_compile_main__TargetSuffix_6;

    {
      libs__globals__get_target_2_p_0(top_level__mercury_compile_main__Globals_3, &top_level__mercury_compile_main__CompilationTarget_5);
    }
    top_level__mercury_compile_main__TargetSuffix_6 = ((&top_level__mercury_compile_main_vector_common_10[0 + top_level__mercury_compile_main__CompilationTarget_5]))->top_level__mercury_compile_main__vector_common_type_10_0__vct_10_f_0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *top_level__mercury_compile_main__FindTargetFiles_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0_1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals_3));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_main__TargetSuffix_6));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_6(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_5(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__call_make_short_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_4));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_4(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__call_make_private_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_4));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__apply_process_module_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 6))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      top_level__mercury_compile_main__call_make_interface_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_4));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(
  MR_Word top_level__mercury_compile_main__Globals0_9,
  MR_Word top_level__mercury_compile_main__OpModeArgs_10,
  MR_Word top_level__mercury_compile_main__OptionArgs_11,
  MR_Word top_level__mercury_compile_main__FileOrModule_12,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_13,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_14)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    switch (MR_tag((MR_Word) top_level__mercury_compile_main__OpModeArgs_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(top_level__mercury_compile_main__OpModeArgs_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              if (((MR_tag((MR_Word) top_level__mercury_compile_main__FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_String top_level__mercury_compile_main__FileName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModule_12, (MR_Integer) 0)));

                  {
                    parse_tree__generate_dep_d_files__generate_dep_file_for_file_4_p_0(top_level__mercury_compile_main__Globals0_9, top_level__mercury_compile_main__FileName_16);
                  }
                }
              else
                {
                  MR_Word top_level__mercury_compile_main__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModule_12, (MR_Integer) 0)));

                  {
                    parse_tree__generate_dep_d_files__generate_dep_file_for_module_4_p_0(top_level__mercury_compile_main__Globals0_9, top_level__mercury_compile_main__ModuleName_17);
                  }
                }
              *top_level__mercury_compile_main__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              if (((MR_tag((MR_Word) top_level__mercury_compile_main__FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_String top_level__mercury_compile_main__FileName_83 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModule_12, (MR_Integer) 0)));

                  {
                    parse_tree__generate_dep_d_files__generate_d_file_for_file_4_p_0(top_level__mercury_compile_main__Globals0_9, top_level__mercury_compile_main__FileName_83);
                  }
                }
              else
                {
                  MR_Word top_level__mercury_compile_main__ModuleName_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModule_12, (MR_Integer) 0)));

                  {
                    parse_tree__generate_dep_d_files__generate_d_file_for_module_4_p_0(top_level__mercury_compile_main__Globals0_9, top_level__mercury_compile_main__ModuleName_84);
                  }
                }
              *top_level__mercury_compile_main__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word top_level__mercury_compile_main__GenerateVersionNumbers_30;
              MR_Word top_level__mercury_compile_main__ProcessModule_186;
              MR_Word top_level__mercury_compile_main__ReturnTimestamp_187;
              MR_Word top_level__mercury_compile_main__MaybeTimestamp_188;
              MR_Word top_level__mercury_compile_main__Specs0_189;
              MR_Word top_level__mercury_compile_main__V_191_191;
              MR_Word top_level__mercury_compile_main__V_192_192;
              MR_Word top_level__mercury_compile_main__V_193_193;
              MR_String top_level__mercury_compile_main__FileName_203;
              MR_Word top_level__mercury_compile_main__ModuleName_204;
              MR_Word top_level__mercury_compile_main__HaveReadModuleMaps0_205;
              MR_Word top_level__mercury_compile_main__Globals_206;
              MR_Word top_level__mercury_compile_main__ParseTreeSrc_207;
              MR_Word top_level__mercury_compile_main__Errors_208;
              MR_Word top_level__mercury_compile_main___HaveReadModuleMaps_160;

              {
                top_level__mercury_compile_main__ProcessModule_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_186, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_186, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_3));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_186, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_186, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals0_9));
              }
              {
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals0_9, (MR_Integer) 118, &top_level__mercury_compile_main__GenerateVersionNumbers_30);
              }
              {
                top_level__mercury_compile_main__ReturnTimestamp_187 = top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile_main__GenerateVersionNumbers_30);
              }
              {
                top_level__mercury_compile_main__V_191_191 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              }
              {
                top_level__mercury_compile_main__V_192_192 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              }
              {
                top_level__mercury_compile_main__V_193_193 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              }
              {
                top_level__mercury_compile_main__HaveReadModuleMaps0_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_205, 0) = ((MR_Box) (top_level__mercury_compile_main__V_191_191));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_205, 1) = ((MR_Box) (top_level__mercury_compile_main__V_192_192));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_205, 2) = ((MR_Box) (top_level__mercury_compile_main__V_193_193));
              }
              {
                top_level__mercury_compile_main__read_module_or_file_14_p_0(top_level__mercury_compile_main__Globals0_9, &top_level__mercury_compile_main__Globals_206, top_level__mercury_compile_main__FileOrModule_12, &top_level__mercury_compile_main__ModuleName_204, &top_level__mercury_compile_main__FileName_203, top_level__mercury_compile_main__ReturnTimestamp_187, &top_level__mercury_compile_main__MaybeTimestamp_188, &top_level__mercury_compile_main__ParseTreeSrc_207, &top_level__mercury_compile_main__Specs0_189, &top_level__mercury_compile_main__Errors_208, top_level__mercury_compile_main__HaveReadModuleMaps0_205, &top_level__mercury_compile_main___HaveReadModuleMaps_160);
              }
              {
                top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(top_level__mercury_compile_main__Globals_206, top_level__mercury_compile_main__Errors_208);
              }
              if (top_level__mercury_compile_main__succeeded)
                {
                }
              else
                {
                  MR_Word top_level__mercury_compile_main__RawCompUnits_166;
                  MR_Word top_level__mercury_compile_main__V_170_170;
                  MR_Word top_level__mercury_compile_main__Specs_173;
                  MR_Integer top_level__mercury_compile_main___NumWarnings_161;
                  MR_Integer top_level__mercury_compile_main___NumErrors_162;
                  MR_Box top_level__mercury_compile_main__conv1_STATE_VARIABLE_IO_44;

                  {
                    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile_main__ParseTreeSrc_207, &top_level__mercury_compile_main__RawCompUnits_166, top_level__mercury_compile_main__Specs0_189, &top_level__mercury_compile_main__Specs_173);
                  }
                  {
                    parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_main__Specs_173, top_level__mercury_compile_main__Globals_206, (MR_Integer) 0, &top_level__mercury_compile_main___NumWarnings_161, (MR_Integer) 0, &top_level__mercury_compile_main___NumErrors_162);
                  }
                  {
                    top_level__mercury_compile_main__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_170_170, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[1]));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_170_170, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_4));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_170_170, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_170_170, 3) = ((MR_Box) (top_level__mercury_compile_main__ProcessModule_186));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_170_170, 4) = ((MR_Box) (top_level__mercury_compile_main__FileName_203));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_170_170, 5) = ((MR_Box) (top_level__mercury_compile_main__ModuleName_204));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_170_170, 6) = ((MR_Box) (top_level__mercury_compile_main__MaybeTimestamp_188));
                  }
                  {
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile_main__V_170_170, top_level__mercury_compile_main__RawCompUnits_166, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv1_STATE_VARIABLE_IO_44);
                  }
                }
              *top_level__mercury_compile_main__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word top_level__mercury_compile_main__ProcessModule_243;
              MR_Word top_level__mercury_compile_main__MaybeTimestamp_245;
              MR_Word top_level__mercury_compile_main__Specs0_246;
              MR_Word top_level__mercury_compile_main__V_248_248;
              MR_Word top_level__mercury_compile_main__V_249_249;
              MR_Word top_level__mercury_compile_main__V_250_250;
              MR_String top_level__mercury_compile_main__FileName_260;
              MR_Word top_level__mercury_compile_main__ModuleName_261;
              MR_Word top_level__mercury_compile_main__HaveReadModuleMaps0_262;
              MR_Word top_level__mercury_compile_main__Globals_263;
              MR_Word top_level__mercury_compile_main__ParseTreeSrc_264;
              MR_Word top_level__mercury_compile_main__Errors_265;
              MR_Word top_level__mercury_compile_main___HaveReadModuleMaps_217;

              {
                top_level__mercury_compile_main__ProcessModule_243 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_243, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_243, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_5));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_243, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_243, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals0_9));
              }
              {
                top_level__mercury_compile_main__V_248_248 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              }
              {
                top_level__mercury_compile_main__V_249_249 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              }
              {
                top_level__mercury_compile_main__V_250_250 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              }
              {
                top_level__mercury_compile_main__HaveReadModuleMaps0_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_262, 0) = ((MR_Box) (top_level__mercury_compile_main__V_248_248));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_262, 1) = ((MR_Box) (top_level__mercury_compile_main__V_249_249));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_262, 2) = ((MR_Box) (top_level__mercury_compile_main__V_250_250));
              }
              {
                top_level__mercury_compile_main__read_module_or_file_14_p_0(top_level__mercury_compile_main__Globals0_9, &top_level__mercury_compile_main__Globals_263, top_level__mercury_compile_main__FileOrModule_12, &top_level__mercury_compile_main__ModuleName_261, &top_level__mercury_compile_main__FileName_260, (MR_Integer) 1, &top_level__mercury_compile_main__MaybeTimestamp_245, &top_level__mercury_compile_main__ParseTreeSrc_264, &top_level__mercury_compile_main__Specs0_246, &top_level__mercury_compile_main__Errors_265, top_level__mercury_compile_main__HaveReadModuleMaps0_262, &top_level__mercury_compile_main___HaveReadModuleMaps_217);
              }
              {
                top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(top_level__mercury_compile_main__Globals_263, top_level__mercury_compile_main__Errors_265);
              }
              if (top_level__mercury_compile_main__succeeded)
                {
                }
              else
                {
                  MR_Word top_level__mercury_compile_main__RawCompUnits_223;
                  MR_Word top_level__mercury_compile_main__V_227_227;
                  MR_Word top_level__mercury_compile_main__Specs_230;
                  MR_Integer top_level__mercury_compile_main___NumWarnings_218;
                  MR_Integer top_level__mercury_compile_main___NumErrors_219;
                  MR_Box top_level__mercury_compile_main__conv2_STATE_VARIABLE_IO_44;

                  {
                    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile_main__ParseTreeSrc_264, &top_level__mercury_compile_main__RawCompUnits_223, top_level__mercury_compile_main__Specs0_246, &top_level__mercury_compile_main__Specs_230);
                  }
                  {
                    parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_main__Specs_230, top_level__mercury_compile_main__Globals_263, (MR_Integer) 0, &top_level__mercury_compile_main___NumWarnings_218, (MR_Integer) 0, &top_level__mercury_compile_main___NumErrors_219);
                  }
                  {
                    top_level__mercury_compile_main__V_227_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_227_227, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[1]));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_227_227, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_6));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_227_227, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_227_227, 3) = ((MR_Box) (top_level__mercury_compile_main__ProcessModule_243));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_227_227, 4) = ((MR_Box) (top_level__mercury_compile_main__FileName_260));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_227_227, 5) = ((MR_Box) (top_level__mercury_compile_main__ModuleName_261));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_227_227, 6) = ((MR_Box) (top_level__mercury_compile_main__MaybeTimestamp_245));
                  }
                  {
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile_main__V_227_227, top_level__mercury_compile_main__RawCompUnits_223, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv2_STATE_VARIABLE_IO_44);
                  }
                }
              *top_level__mercury_compile_main__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word top_level__mercury_compile_main__ProcessModule_29;
              MR_Word top_level__mercury_compile_main__ReturnTimestamp_31;
              MR_Word top_level__mercury_compile_main__MaybeTimestamp_32;
              MR_Word top_level__mercury_compile_main__Specs0_33;
              MR_Word top_level__mercury_compile_main__V_58_58;
              MR_Word top_level__mercury_compile_main__V_59_59;
              MR_Word top_level__mercury_compile_main__V_60_60;
              MR_Word top_level__mercury_compile_main__GenerateVersionNumbers_90;
              MR_String top_level__mercury_compile_main__FileName_100;
              MR_Word top_level__mercury_compile_main__ModuleName_101;
              MR_Word top_level__mercury_compile_main__HaveReadModuleMaps0_102;
              MR_Word top_level__mercury_compile_main__Globals_103;
              MR_Word top_level__mercury_compile_main__ParseTreeSrc_104;
              MR_Word top_level__mercury_compile_main__Errors_106;
              MR_Word top_level__mercury_compile_main___HaveReadModuleMaps_91;

              {
                top_level__mercury_compile_main__ProcessModule_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_29, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_29, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_1));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ProcessModule_29, 3) = ((MR_Box) (top_level__mercury_compile_main__Globals0_9));
              }
              {
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals0_9, (MR_Integer) 118, &top_level__mercury_compile_main__GenerateVersionNumbers_90);
              }
              {
                top_level__mercury_compile_main__ReturnTimestamp_31 = top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(top_level__mercury_compile_main__GenerateVersionNumbers_90);
              }
              {
                top_level__mercury_compile_main__V_58_58 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              }
              {
                top_level__mercury_compile_main__V_59_59 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              }
              {
                top_level__mercury_compile_main__V_60_60 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              }
              {
                top_level__mercury_compile_main__HaveReadModuleMaps0_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_102, 0) = ((MR_Box) (top_level__mercury_compile_main__V_58_58));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_102, 1) = ((MR_Box) (top_level__mercury_compile_main__V_59_59));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_102, 2) = ((MR_Box) (top_level__mercury_compile_main__V_60_60));
              }
              {
                top_level__mercury_compile_main__read_module_or_file_14_p_0(top_level__mercury_compile_main__Globals0_9, &top_level__mercury_compile_main__Globals_103, top_level__mercury_compile_main__FileOrModule_12, &top_level__mercury_compile_main__ModuleName_101, &top_level__mercury_compile_main__FileName_100, top_level__mercury_compile_main__ReturnTimestamp_31, &top_level__mercury_compile_main__MaybeTimestamp_32, &top_level__mercury_compile_main__ParseTreeSrc_104, &top_level__mercury_compile_main__Specs0_33, &top_level__mercury_compile_main__Errors_106, top_level__mercury_compile_main__HaveReadModuleMaps0_102, &top_level__mercury_compile_main___HaveReadModuleMaps_91);
              }
              {
                top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(top_level__mercury_compile_main__Globals_103, top_level__mercury_compile_main__Errors_106);
              }
              if (top_level__mercury_compile_main__succeeded)
                {
                }
              else
                {
                  MR_Word top_level__mercury_compile_main__RawCompUnits_34;
                  MR_Word top_level__mercury_compile_main__V_65_65;
                  MR_Word top_level__mercury_compile_main__Specs_94;
                  MR_Integer top_level__mercury_compile_main___NumWarnings_92;
                  MR_Integer top_level__mercury_compile_main___NumErrors_93;
                  MR_Box top_level__mercury_compile_main__conv0_STATE_VARIABLE_IO_44;

                  {
                    parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(top_level__mercury_compile_main__ParseTreeSrc_104, &top_level__mercury_compile_main__RawCompUnits_34, top_level__mercury_compile_main__Specs0_33, &top_level__mercury_compile_main__Specs_94);
                  }
                  {
                    parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_main__Specs_94, top_level__mercury_compile_main__Globals_103, (MR_Integer) 0, &top_level__mercury_compile_main___NumWarnings_92, (MR_Integer) 0, &top_level__mercury_compile_main___NumErrors_93);
                  }
                  {
                    top_level__mercury_compile_main__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_65_65, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_9[1]));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_65_65, 1) = ((MR_Box) (top_level__mercury_compile_main__do_process_compiler_arg_8_p_0_2));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_65_65, 3) = ((MR_Box) (top_level__mercury_compile_main__ProcessModule_29));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_65_65, 4) = ((MR_Box) (top_level__mercury_compile_main__FileName_100));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_65_65, 5) = ((MR_Box) (top_level__mercury_compile_main__ModuleName_101));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_65_65, 6) = ((MR_Box) (top_level__mercury_compile_main__MaybeTimestamp_32));
                  }
                  {
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, top_level__mercury_compile_main__V_65_65, top_level__mercury_compile_main__RawCompUnits_34, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__conv0_STATE_VARIABLE_IO_44);
                  }
                }
              *top_level__mercury_compile_main__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word top_level__mercury_compile_main__HaveReadModuleMaps0_18;
              MR_Word top_level__mercury_compile_main__Globals_19;
              MR_Word top_level__mercury_compile_main__ParseTreeSrc_22;
              MR_Word top_level__mercury_compile_main__Specs_23;
              MR_Word top_level__mercury_compile_main__Errors_24;
              MR_Word top_level__mercury_compile_main__V_67_67;
              MR_Word top_level__mercury_compile_main__V_68_68;
              MR_Word top_level__mercury_compile_main__V_69_69;
              MR_Word top_level__mercury_compile_main__ModuleName_89;
              MR_String top_level__mercury_compile_main__V_20_20;
              MR_Word top_level__mercury_compile_main__V_21_21;
              MR_Word top_level__mercury_compile_main___HaveReadModuleMaps_25;
              MR_Integer top_level__mercury_compile_main___NumWarnings_26;
              MR_Integer top_level__mercury_compile_main___NumErrors_27;

              {
                top_level__mercury_compile_main__V_67_67 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
              }
              {
                top_level__mercury_compile_main__V_68_68 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
              }
              {
                top_level__mercury_compile_main__V_69_69 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
              }
              {
                top_level__mercury_compile_main__HaveReadModuleMaps0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_18, 0) = ((MR_Box) (top_level__mercury_compile_main__V_67_67));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_18, 1) = ((MR_Box) (top_level__mercury_compile_main__V_68_68));
                MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps0_18, 2) = ((MR_Box) (top_level__mercury_compile_main__V_69_69));
              }
              {
                top_level__mercury_compile_main__read_module_or_file_14_p_0(top_level__mercury_compile_main__Globals0_9, &top_level__mercury_compile_main__Globals_19, top_level__mercury_compile_main__FileOrModule_12, &top_level__mercury_compile_main__ModuleName_89, &top_level__mercury_compile_main__V_20_20, (MR_Integer) 1, &top_level__mercury_compile_main__V_21_21, &top_level__mercury_compile_main__ParseTreeSrc_22, &top_level__mercury_compile_main__Specs_23, &top_level__mercury_compile_main__Errors_24, top_level__mercury_compile_main__HaveReadModuleMaps0_18, &top_level__mercury_compile_main___HaveReadModuleMaps_25);
              }
              {
                parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_main__Specs_23, top_level__mercury_compile_main__Globals_19, (MR_Integer) 0, &top_level__mercury_compile_main___NumWarnings_26, (MR_Integer) 0, &top_level__mercury_compile_main___NumErrors_27);
              }
              {
                top_level__mercury_compile_main__succeeded = top_level__mercury_compile_main__halt_at_module_error_2_p_0(top_level__mercury_compile_main__Globals_19, top_level__mercury_compile_main__Errors_24);
              }
              if (top_level__mercury_compile_main__succeeded)
                {
                }
              else
                {
                  MR_String top_level__mercury_compile_main__OutputFileName_28;

                  {
                    parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_main__Globals_19, top_level__mercury_compile_main__ModuleName_89, (MR_String) ".ugly", (MR_Integer) 0, &top_level__mercury_compile_main__OutputFileName_28);
                  }
                  {
                    parse_tree__parse_tree_out__convert_to_mercury_src_5_p_0(top_level__mercury_compile_main__Globals_19, top_level__mercury_compile_main__OutputFileName_28, top_level__mercury_compile_main__ParseTreeSrc_22);
                  }
                }
              *top_level__mercury_compile_main__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_main__OpModeAugment_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__OpModeArgs_10, (MR_Integer) 0)));
          MR_Word top_level__mercury_compile_main__Smart0_36;
          MR_Word top_level__mercury_compile_main__DisableSmart_37;
          MR_Word top_level__mercury_compile_main__Smart_38;
          MR_Word top_level__mercury_compile_main__ModulesToRecompile_41;
          MR_Word top_level__mercury_compile_main__HaveReadModuleMaps_42;
          MR_Word top_level__mercury_compile_main__Globals_118;
          MR_Word top_level__mercury_compile_main__V_54_54;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals0_9, (MR_Integer) 117, &top_level__mercury_compile_main__Smart0_36);
          }
          {
            libs__globals__io_get_disable_smart_recompilation_3_p_0(&top_level__mercury_compile_main__DisableSmart_37);
          }
          switch (top_level__mercury_compile_main__DisableSmart_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                top_level__mercury_compile_main__Globals_118 = top_level__mercury_compile_main__Globals0_9;
                top_level__mercury_compile_main__Smart_38 = top_level__mercury_compile_main__Smart0_36;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 117, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_4[1]), top_level__mercury_compile_main__Globals0_9, &top_level__mercury_compile_main__Globals_118);
                }
                top_level__mercury_compile_main__Smart_38 = (MR_Integer) 0;
              }
              break;
          }
          switch (top_level__mercury_compile_main__Smart_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word top_level__mercury_compile_main__V_50_50;
                MR_Word top_level__mercury_compile_main__V_51_51;
                MR_Word top_level__mercury_compile_main__V_52_52;

                {
                  top_level__mercury_compile_main__V_50_50 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[1], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[2]);
                }
                {
                  top_level__mercury_compile_main__V_51_51 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[3], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[4]);
                }
                {
                  top_level__mercury_compile_main__V_52_52 = mercury__map__init_0_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[5], (MR_Word) &top_level__mercury_compile_main_scalar_common_1[6]);
                }
                {
                  top_level__mercury_compile_main__HaveReadModuleMaps_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps_42, 0) = ((MR_Box) (top_level__mercury_compile_main__V_50_50));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps_42, 1) = ((MR_Box) (top_level__mercury_compile_main__V_51_51));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__HaveReadModuleMaps_42, 2) = ((MR_Box) (top_level__mercury_compile_main__V_52_52));
                }
                top_level__mercury_compile_main__ModulesToRecompile_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word top_level__mercury_compile_main__FindTargetFiles_39;
                MR_Word top_level__mercury_compile_main__FindTimestampFiles_40;
                MR_Word top_level__mercury_compile_main__ModuleName_113;

                if (((MR_tag((MR_Word) top_level__mercury_compile_main__FileOrModule_12)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_String top_level__mercury_compile_main__FileName_110 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModule_12, (MR_Integer) 0)));

                    {
                      parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__FileName_110, &top_level__mercury_compile_main__ModuleName_113);
                    }
                  }
                else
                  top_level__mercury_compile_main__ModuleName_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModule_12, (MR_Integer) 0)));
                {
                  top_level__mercury_compile_main__find_smart_recompilation_target_files_2_p_0(top_level__mercury_compile_main__Globals_118, &top_level__mercury_compile_main__FindTargetFiles_39);
                }
                {
                  top_level__mercury_compile_main__find_timestamp_files_2_p_0(top_level__mercury_compile_main__Globals_118, &top_level__mercury_compile_main__FindTimestampFiles_40);
                }
                {
                  recompilation__check__should_recompile_8_p_0(top_level__mercury_compile_main__Globals_118, top_level__mercury_compile_main__ModuleName_113, top_level__mercury_compile_main__FindTargetFiles_39, top_level__mercury_compile_main__FindTimestampFiles_40, &top_level__mercury_compile_main__ModulesToRecompile_41, &top_level__mercury_compile_main__HaveReadModuleMaps_42);
                }
              }
              break;
          }
          top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__ModulesToRecompile_41)) == (MR_mktag((MR_Integer) 1)));
          if (top_level__mercury_compile_main__succeeded)
            {
              top_level__mercury_compile_main__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__ModulesToRecompile_41, (MR_Integer) 0)));
              top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          if (top_level__mercury_compile_main__succeeded)
            {
              *top_level__mercury_compile_main__ModulesToLink_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              top_level__mercury_compile_main__read_augment_and_process_module_10_p_0(top_level__mercury_compile_main__Globals_118, top_level__mercury_compile_main__OpModeAugment_35, top_level__mercury_compile_main__OptionArgs_11, top_level__mercury_compile_main__FileOrModule_12, top_level__mercury_compile_main__ModulesToRecompile_41, top_level__mercury_compile_main__HaveReadModuleMaps_42, top_level__mercury_compile_main__ModulesToLink_13, top_level__mercury_compile_main__ExtraObjFiles_14);
            }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
top_level__mercury_compile_main__version_numbers_return_timestamp_1_f_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__HeadVar__2_2;

    switch (top_level__mercury_compile_main__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        top_level__mercury_compile_main__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_main__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return top_level__mercury_compile_main__HeadVar__2_2;
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(
  MR_Word top_level__mercury_compile_main__OpModeArgs_11,
  MR_Word top_level__mercury_compile_main__FileOrModule_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__Globals_14,
  MR_Word top_level__mercury_compile_main__HeadVar__5_15,
  MR_Word * top_level__mercury_compile_main__Succeeded_16,
  MR_Tuple * top_level__mercury_compile_main__HeadVar__8_8)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_105_108_101_114_95_97_114_103_95_98_117_105_108_100_95_95_91_53_44_32_55_93_95_48_10_p_0(top_level__mercury_compile_main__OpModeArgs_11, top_level__mercury_compile_main__FileOrModule_12, top_level__mercury_compile_main__OptionArgs_13, top_level__mercury_compile_main__Globals_14, top_level__mercury_compile_main__Succeeded_16, top_level__mercury_compile_main__HeadVar__8_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_7)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv1_Succeeded_16;
    MR_Tuple top_level__mercury_compile_main__conv0_HeadVar__8_8;

    {
      top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 5))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), &top_level__mercury_compile_main__conv1_Succeeded_16, &top_level__mercury_compile_main__conv0_HeadVar__8_8);
    }
    *top_level__mercury_compile_main__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_main__conv1_Succeeded_16));
    *top_level__mercury_compile_main__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__8_8));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_arg_10_p_0(
  MR_Word top_level__mercury_compile_main__Globals_11,
  MR_Word top_level__mercury_compile_main__OpModeArgs_12,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_13,
  MR_Word top_level__mercury_compile_main__OptionVariables_14,
  MR_Word top_level__mercury_compile_main__OptionArgs_15,
  MR_String top_level__mercury_compile_main__Arg_16,
  MR_Word * top_level__mercury_compile_main__ModulesToLink_17,
  MR_Word * top_level__mercury_compile_main__ExtraObjFiles_18)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__FileOrModule_20;
    MR_Word top_level__mercury_compile_main__InvokedByMake_21;
    MR_String top_level__mercury_compile_main__FileName_45;

    {
      top_level__mercury_compile_main__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile_main__Arg_16, (MR_String) ".m", &top_level__mercury_compile_main__FileName_45);
    }
    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__FileOrModule_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModule_20, 0) = ((MR_Box) (top_level__mercury_compile_main__FileName_45));
      }
    else
      {
        MR_Word top_level__mercury_compile_main__ModuleName_46;

        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__Arg_16, &top_level__mercury_compile_main__ModuleName_46);
        }
        {
          top_level__mercury_compile_main__FileOrModule_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModule_20, 0) = ((MR_Box) (top_level__mercury_compile_main__ModuleName_46));
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_11, (MR_Integer) 615, &top_level__mercury_compile_main__InvokedByMake_21);
    }
    switch (top_level__mercury_compile_main__InvokedByMake_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word top_level__mercury_compile_main__MaybeTuple_25;
          MR_Word top_level__mercury_compile_main__V_31_31;
          MR_Word top_level__mercury_compile_main__V_32_32;
          MR_Word top_level__mercury_compile_main___Succeeded_24;

          mercury__private_builtin__dummy_var = (MR_Integer) 0;
          if (((MR_tag((MR_Word) top_level__mercury_compile_main__FileOrModule_20)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_String top_level__mercury_compile_main__FileName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModule_20, (MR_Integer) 0)));

              {
                parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__FileName_48, &top_level__mercury_compile_main__V_31_31);
              }
            }
          else
            top_level__mercury_compile_main__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModule_20, (MR_Integer) 0)));
          {
            top_level__mercury_compile_main__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile_main__process_compiler_arg_10_p_0_1));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile_main__OpModeArgs_12));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_32_32, 4) = ((MR_Box) (top_level__mercury_compile_main__FileOrModule_20));
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_32_32, 5) = ((MR_Box) (top_level__mercury_compile_main__OptionArgs_15));
          }
          {
            make__util__build_with_module_options_args_12_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &top_level__mercury_compile_main_scalar_common_2[0], top_level__mercury_compile_main__Globals_11, top_level__mercury_compile_main__V_31_31, top_level__mercury_compile_main__DetectedGradeFlags_13, top_level__mercury_compile_main__OptionVariables_14, top_level__mercury_compile_main__OptionArgs_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile_main__V_32_32, &top_level__mercury_compile_main___Succeeded_24, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__MaybeTuple_25);
          }
          if ((top_level__mercury_compile_main__MaybeTuple_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *top_level__mercury_compile_main__ModulesToLink_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *top_level__mercury_compile_main__ExtraObjFiles_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              MR_Tuple top_level__mercury_compile_main__Tuple_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeTuple_25, (MR_Integer) 0)));

              *top_level__mercury_compile_main__ModulesToLink_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Tuple_26, (MR_Integer) 0)));
              *top_level__mercury_compile_main__ExtraObjFiles_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Tuple_26, (MR_Integer) 1)));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(top_level__mercury_compile_main__Globals_11, top_level__mercury_compile_main__OpModeArgs_12, top_level__mercury_compile_main__OptionArgs_15, top_level__mercury_compile_main__FileOrModule_20, top_level__mercury_compile_main__ModulesToLink_17, top_level__mercury_compile_main__ExtraObjFiles_18);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_cmd_line_args_12_p_0(
  MR_Word top_level__mercury_compile_main__Globals_1,
  MR_Word top_level__mercury_compile_main__OpModeArgs_2,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_3,
  MR_Word top_level__mercury_compile_main__OptionVariables_4,
  MR_Word top_level__mercury_compile_main__OptionArgs_5,
  MR_Word top_level__mercury_compile_main__HeadVar__6_6,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_7,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Modules_8,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_9,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool top_level__mercury_compile_main__succeeded;

        if ((top_level__mercury_compile_main__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_10 = top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_9;
            *top_level__mercury_compile_main__STATE_VARIABLE_Modules_8 = top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_7;
          }
        else
          {
            MR_Word top_level__mercury_compile_main__TypeCtorInfo_56_56;
            MR_String top_level__mercury_compile_main__Arg_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__6_6, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_main__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__6_6, (MR_Integer) 1)));
            MR_Word top_level__mercury_compile_main__ArgModules_37;
            MR_Word top_level__mercury_compile_main__ArgExtraObjFiles_38;
            MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_49_49;
            MR_Word top_level__mercury_compile_main__V_50_50;
            MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_51_51;
            MR_Word top_level__mercury_compile_main__V_52_52;

            {
              top_level__mercury_compile_main__process_compiler_arg_10_p_0(top_level__mercury_compile_main__Globals_1, top_level__mercury_compile_main__OpModeArgs_2, top_level__mercury_compile_main__DetectedGradeFlags_3, top_level__mercury_compile_main__OptionVariables_4, top_level__mercury_compile_main__OptionArgs_5, top_level__mercury_compile_main__Arg_32, &top_level__mercury_compile_main__ArgModules_37, &top_level__mercury_compile_main__ArgExtraObjFiles_38);
            }
            if ((top_level__mercury_compile_main__Args_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                mercury__gc__garbage_collect_2_p_0();
              }
            top_level__mercury_compile_main__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              top_level__mercury_compile_main__V_50_50 = mercury__cord__from_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_56_56, top_level__mercury_compile_main__ArgModules_37);
            }
            {
              top_level__mercury_compile_main__STATE_VARIABLE_Modules_49_49 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_56_56, top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_7, top_level__mercury_compile_main__V_50_50);
            }
            {
              top_level__mercury_compile_main__V_52_52 = mercury__cord__from_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_56_56, top_level__mercury_compile_main__ArgExtraObjFiles_38);
            }
            {
              top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_51_51 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_56_56, top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_9, top_level__mercury_compile_main__V_52_52);
            }
            /* direct tailcall eliminated */
            {
              MR_Word top_level__mercury_compile_main__HeadVar__6__tmp_copy_6 = top_level__mercury_compile_main__Args_33;
              MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_0__tmp_copy_7 = top_level__mercury_compile_main__STATE_VARIABLE_Modules_49_49;
              MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_9 = top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_51_51;

              top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_9 = top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_9;
              top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_7 = top_level__mercury_compile_main__STATE_VARIABLE_Modules_0__tmp_copy_7;
              top_level__mercury_compile_main__HeadVar__6_6 = top_level__mercury_compile_main__HeadVar__6__tmp_copy_6;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_7)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv1_Succeeded_16;
    MR_Tuple top_level__mercury_compile_main__conv0_HeadVar__8_8;

    {
      top_level__mercury_compile_main__process_compiler_arg_build_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 5))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_2), &top_level__mercury_compile_main__conv1_Succeeded_16, &top_level__mercury_compile_main__conv0_HeadVar__8_8);
    }
    *top_level__mercury_compile_main__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_main__conv1_Succeeded_16));
    *top_level__mercury_compile_main__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__8_8));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0(
  MR_Word top_level__mercury_compile_main__Globals_12,
  MR_Word top_level__mercury_compile_main__OpModeArgs_13,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_14,
  MR_Word top_level__mercury_compile_main__OptionVariables_15,
  MR_Word top_level__mercury_compile_main__OptionArgs_16,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_27,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_Modules_28,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_29,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_30)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool top_level__mercury_compile_main__succeeded;
        MR_Word top_level__mercury_compile_main__FileResult_20;

        {
          top_level__mercury_compile_main__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_27);
        }
        if (top_level__mercury_compile_main__succeeded)
          {
          }
        else
          {
            mercury__gc__garbage_collect_2_p_0();
          }
        {
          mercury__io__read_line_as_string_3_p_0(&top_level__mercury_compile_main__FileResult_20);
        }
        switch (MR_tag((MR_Word) top_level__mercury_compile_main__FileResult_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *top_level__mercury_compile_main__STATE_VARIABLE_Modules_28 = top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_27;
              *top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_30 = top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word top_level__mercury_compile_main__TypeCtorInfo_49_49;
              MR_String top_level__mercury_compile_main__Line_21 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileResult_20, (MR_Integer) 0)));
              MR_String top_level__mercury_compile_main__Arg_22;
              MR_Word top_level__mercury_compile_main__ArgModules_23;
              MR_Word top_level__mercury_compile_main__ArgExtraObjFiles_24;
              MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_41_41;
              MR_Word top_level__mercury_compile_main__V_42_42;
              MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_43_43;
              MR_Word top_level__mercury_compile_main__V_44_44;
              MR_Word top_level__mercury_compile_main__FileOrModule_61;
              MR_Word top_level__mercury_compile_main__InvokedByMake_62;
              MR_String top_level__mercury_compile_main__FileName_84;

              {
                top_level__mercury_compile_main__Arg_22 = mercury__string__rstrip_1_f_0(top_level__mercury_compile_main__Line_21);
              }
              {
                top_level__mercury_compile_main__succeeded = mercury__string__remove_suffix_3_p_0(top_level__mercury_compile_main__Arg_22, (MR_String) ".m", &top_level__mercury_compile_main__FileName_84);
              }
              if (top_level__mercury_compile_main__succeeded)
                {
                  top_level__mercury_compile_main__FileOrModule_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModule_61, 0) = ((MR_Box) (top_level__mercury_compile_main__FileName_84));
                }
              else
                {
                  MR_Word top_level__mercury_compile_main__ModuleName_85;

                  {
                    parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__Arg_22, &top_level__mercury_compile_main__ModuleName_85);
                  }
                  {
                    top_level__mercury_compile_main__FileOrModule_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModule_61, 0) = ((MR_Box) (top_level__mercury_compile_main__ModuleName_85));
                  }
                }
              {
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_12, (MR_Integer) 615, &top_level__mercury_compile_main__InvokedByMake_62);
              }
              switch (top_level__mercury_compile_main__InvokedByMake_62) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word top_level__mercury_compile_main__MaybeTuple_66;
                    MR_Word top_level__mercury_compile_main__V_70_70;
                    MR_Word top_level__mercury_compile_main__V_71_71;
                    MR_Word top_level__mercury_compile_main___Succeeded_65;

                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
                    if (((MR_tag((MR_Word) top_level__mercury_compile_main__FileOrModule_61)) == (MR_mktag((MR_Integer) 0))))
                      {
                        MR_String top_level__mercury_compile_main__FileName_87 = ((MR_String) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__FileOrModule_61, (MR_Integer) 0)));

                        {
                          parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__FileName_87, &top_level__mercury_compile_main__V_70_70);
                        }
                      }
                    else
                      top_level__mercury_compile_main__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__FileOrModule_61, (MR_Integer) 0)));
                    {
                      top_level__mercury_compile_main__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_71_71, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_8[0]));
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_71_71, 1) = ((MR_Box) (top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0_1));
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_71_71, 3) = ((MR_Box) (top_level__mercury_compile_main__OpModeArgs_13));
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_71_71, 4) = ((MR_Box) (top_level__mercury_compile_main__FileOrModule_61));
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_71_71, 5) = ((MR_Box) (top_level__mercury_compile_main__OptionArgs_16));
                    }
                    {
                      make__util__build_with_module_options_args_12_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &top_level__mercury_compile_main_scalar_common_2[0], top_level__mercury_compile_main__Globals_12, top_level__mercury_compile_main__V_70_70, top_level__mercury_compile_main__DetectedGradeFlags_14, top_level__mercury_compile_main__OptionVariables_15, top_level__mercury_compile_main__OptionArgs_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile_main__V_71_71, &top_level__mercury_compile_main___Succeeded_65, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_main__MaybeTuple_66);
                    }
                    if ((top_level__mercury_compile_main__MaybeTuple_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        top_level__mercury_compile_main__ArgModules_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        top_level__mercury_compile_main__ArgExtraObjFiles_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                    else
                      {
                        MR_Tuple top_level__mercury_compile_main__Tuple_67 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeTuple_66, (MR_Integer) 0)));

                        top_level__mercury_compile_main__ArgModules_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Tuple_67, (MR_Integer) 0)));
                        top_level__mercury_compile_main__ArgExtraObjFiles_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Tuple_67, (MR_Integer) 1)));
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    top_level__mercury_compile_main__do_process_compiler_arg_8_p_0(top_level__mercury_compile_main__Globals_12, top_level__mercury_compile_main__OpModeArgs_13, top_level__mercury_compile_main__OptionArgs_16, top_level__mercury_compile_main__FileOrModule_61, &top_level__mercury_compile_main__ArgModules_23, &top_level__mercury_compile_main__ArgExtraObjFiles_24);
                  }
                  break;
              }
              top_level__mercury_compile_main__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                top_level__mercury_compile_main__V_42_42 = mercury__cord__from_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_49_49, top_level__mercury_compile_main__ArgModules_23);
              }
              {
                top_level__mercury_compile_main__STATE_VARIABLE_Modules_41_41 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_49_49, top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_27, top_level__mercury_compile_main__V_42_42);
              }
              {
                top_level__mercury_compile_main__V_44_44 = mercury__cord__from_list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_49_49, top_level__mercury_compile_main__ArgExtraObjFiles_24);
              }
              {
                top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_43_43 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_49_49, top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_29, top_level__mercury_compile_main__V_44_44);
              }
              /* direct tailcall eliminated */
              {
                MR_Word top_level__mercury_compile_main__STATE_VARIABLE_Modules_0__tmp_copy_27 = top_level__mercury_compile_main__STATE_VARIABLE_Modules_41_41;
                MR_Word top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_29 = top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_43_43;

                top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_29 = top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0__tmp_copy_29;
                top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_27 = top_level__mercury_compile_main__STATE_VARIABLE_Modules_0__tmp_copy_27;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word top_level__mercury_compile_main__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile_main__FileResult_20, (MR_Integer) 0)));
              MR_String top_level__mercury_compile_main__Msg_26;

              {
                mercury__io__error_message_2_p_0(top_level__mercury_compile_main__Error_25, &top_level__mercury_compile_main__Msg_26);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "Error reading module name: ");
              }
              {
                mercury__io__write_string_3_p_0(top_level__mercury_compile_main__Msg_26);
              }
              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
              *top_level__mercury_compile_main__STATE_VARIABLE_Modules_28 = top_level__mercury_compile_main__STATE_VARIABLE_Modules_0_27;
              *top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_30 = top_level__mercury_compile_main__STATE_VARIABLE_ExtraObjFiles_0_29;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) top_level__mercury_compile_main__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_query_4_p_0(
  MR_Word top_level__mercury_compile_main__Globals_5,
  MR_Word top_level__mercury_compile_main__OpModeQuery_6)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    switch (top_level__mercury_compile_main__OpModeQuery_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String top_level__mercury_compile_main__CC_Type_10;
          MR_String top_level__mercury_compile_main__V_70_70;
          MR_Word top_level__mercury_compile_main__StdOut_78;

          {
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 505, &top_level__mercury_compile_main__CC_Type_10);
          }
          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_78);
          }
          {
            top_level__mercury_compile_main__V_70_70 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__CC_Type_10, (MR_String) "\n");
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__StdOut_78, top_level__mercury_compile_main__V_70_70);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word top_level__mercury_compile_main__StdOut_80;

          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_80);
          }
          {
            backend_libs__compile_target_code__output_c_include_directory_flags_4_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__StdOut_80);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String top_level__mercury_compile_main__CC_8;
          MR_Word top_level__mercury_compile_main__StdOut_9;
          MR_String top_level__mercury_compile_main__V_75_75;

          {
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 481, &top_level__mercury_compile_main__CC_8);
          }
          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_9);
          }
          {
            top_level__mercury_compile_main__V_75_75 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__CC_8, (MR_String) "\n");
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__StdOut_9, top_level__mercury_compile_main__V_75_75);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word top_level__mercury_compile_main__StdOut_79;

          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_79);
          }
          {
            backend_libs__compile_target_code__output_c_compiler_flags_4_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__StdOut_79);
          }
          {
            mercury__io__nl_3_p_0(top_level__mercury_compile_main__StdOut_79);
          }
        }
        break;
      case (MR_Integer) 10:
        {
          MR_String top_level__mercury_compile_main__ClassName_15;
          MR_String top_level__mercury_compile_main__V_38_38;
          MR_Word top_level__mercury_compile_main__StdOut_87;

          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_87);
          }
          {
            parse_tree__file_names__get_class_dir_name_2_p_0(top_level__mercury_compile_main__Globals_5, &top_level__mercury_compile_main__ClassName_15);
          }
          {
            top_level__mercury_compile_main__V_38_38 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__ClassName_15, (MR_String) "\n");
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__StdOut_87, top_level__mercury_compile_main__V_38_38);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_String top_level__mercury_compile_main__CSC_11;
          MR_String top_level__mercury_compile_main__V_60_60;
          MR_Word top_level__mercury_compile_main__StdOut_81;

          {
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 513, &top_level__mercury_compile_main__CSC_11);
          }
          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_81);
          }
          {
            top_level__mercury_compile_main__V_60_60 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__CSC_11, (MR_String) "\n");
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__StdOut_81, top_level__mercury_compile_main__V_60_60);
          }
        }
        break;
      case (MR_Integer) 6:
        {
          MR_String top_level__mercury_compile_main__CSC_Type_12;
          MR_String top_level__mercury_compile_main__V_55_55;
          MR_Word top_level__mercury_compile_main__StdOut_82;

          {
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 506, &top_level__mercury_compile_main__CSC_Type_12);
          }
          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_82);
          }
          {
            top_level__mercury_compile_main__V_55_55 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__CSC_Type_12, (MR_String) "\n");
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__StdOut_82, top_level__mercury_compile_main__V_55_55);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word top_level__mercury_compile_main__StdOut_83;

          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_83);
          }
          {
            backend_libs__compile_target_code__output_grade_defines_4_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__StdOut_83);
          }
        }
        break;
      case (MR_Integer) 11:
        {
          MR_String top_level__mercury_compile_main__Grade_16;
          MR_Word top_level__mercury_compile_main__Stdout_88;

          {
            libs__compute_grade__grade_directory_component_2_p_0(top_level__mercury_compile_main__Globals_5, &top_level__mercury_compile_main__Grade_16);
          }
          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_88);
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__Stdout_88, top_level__mercury_compile_main__Grade_16);
          }
          {
            mercury__io__nl_3_p_0(top_level__mercury_compile_main__Stdout_88);
          }
        }
        break;
      case (MR_Integer) 12:
        {
          MR_Word top_level__mercury_compile_main__LibGrades_17;

          {
            libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 625, &top_level__mercury_compile_main__LibGrades_17);
          }
          if ((top_level__mercury_compile_main__LibGrades_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word top_level__mercury_compile_main__Stdout_89;

              {
                mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_89);
              }
              {
                mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile_main__Stdout_89, top_level__mercury_compile_main__LibGrades_17, (MR_String) "\n", (MR_Word) &top_level__mercury_compile_main_scalar_common_7[0]);
              }
              {
                mercury__io__nl_3_p_0(top_level__mercury_compile_main__Stdout_89);
              }
            }
        }
        break;
      case (MR_Integer) 9:
        {
          MR_Word top_level__mercury_compile_main__StdOut_86;

          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_86);
          }
          {
            backend_libs__compile_target_code__output_library_link_flags_4_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__StdOut_86);
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_String top_level__mercury_compile_main__LinkCommand_13;
          MR_Word top_level__mercury_compile_main__Stdout_14;

          {
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 564, &top_level__mercury_compile_main__LinkCommand_13);
          }
          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_14);
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__Stdout_14, top_level__mercury_compile_main__LinkCommand_13);
          }
          {
            mercury__io__nl_3_p_0(top_level__mercury_compile_main__Stdout_14);
          }
        }
        break;
      case (MR_Integer) 8:
        {
          MR_String top_level__mercury_compile_main__LinkCommand_84;
          MR_Word top_level__mercury_compile_main__Stdout_85;

          {
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 565, &top_level__mercury_compile_main__LinkCommand_84);
          }
          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_85);
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__Stdout_85, top_level__mercury_compile_main__LinkCommand_84);
          }
          {
            mercury__io__nl_3_p_0(top_level__mercury_compile_main__Stdout_85);
          }
        }
        break;
      case (MR_Integer) 13:
        {
          MR_String top_level__mercury_compile_main__TargetArch_20;
          MR_String top_level__mercury_compile_main__V_25_25;
          MR_Word top_level__mercury_compile_main__StdOut_92;

          {
            mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__StdOut_92);
          }
          {
            libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 652, &top_level__mercury_compile_main__TargetArch_20);
          }
          {
            top_level__mercury_compile_main__V_25_25 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__TargetArch_20, (MR_String) "\n");
          }
          {
            mercury__io__write_string_4_p_0(top_level__mercury_compile_main__StdOut_92, top_level__mercury_compile_main__V_25_25);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_standalone_interface_4_p_0(
  MR_Word top_level__mercury_compile_main__Globals_5,
  MR_String top_level__mercury_compile_main__StandaloneIntBasename_6)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Target_8;

    {
      libs__globals__get_target_2_p_0(top_level__mercury_compile_main__Globals_5, &top_level__mercury_compile_main__Target_8);
    }
    switch (top_level__mercury_compile_main__Target_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          backend_libs__compile_target_code__make_standalone_interface_4_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__StandaloneIntBasename_6);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word top_level__mercury_compile_main__NotRequiredMsg_9;
          MR_Word top_level__mercury_compile_main__V_36_36;
          MR_Word top_level__mercury_compile_main__V_39_39;
          MR_Word top_level__mercury_compile_main__V_42_42;
          MR_Word top_level__mercury_compile_main__V_43_43;
          MR_String top_level__mercury_compile_main__V_44_44;

          {
            top_level__mercury_compile_main__V_44_44 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile_main__Target_8);
          }
          {
            top_level__mercury_compile_main__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_43_43, 1) = ((MR_Box) (top_level__mercury_compile_main__V_44_44));
          }
          {
            top_level__mercury_compile_main__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_42_42, 0) = ((MR_Box) (top_level__mercury_compile_main__V_43_43));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])));
          }
          {
            top_level__mercury_compile_main__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[27])));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_39_39, 1) = ((MR_Box) (top_level__mercury_compile_main__V_42_42));
          }
          {
            top_level__mercury_compile_main__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile_main__V_39_39));
          }
          {
            top_level__mercury_compile_main__NotRequiredMsg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__NotRequiredMsg_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[25])));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__NotRequiredMsg_9, 1) = ((MR_Box) (top_level__mercury_compile_main__V_36_36));
          }
          {
            parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__NotRequiredMsg_9);
          }
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word top_level__mercury_compile_main__NYIMsg_10;
          MR_Word top_level__mercury_compile_main__V_16_16;
          MR_Word top_level__mercury_compile_main__V_19_19;
          MR_Word top_level__mercury_compile_main__V_22_22;
          MR_Word top_level__mercury_compile_main__V_23_23;
          MR_String top_level__mercury_compile_main__V_24_24;

          {
            top_level__mercury_compile_main__V_24_24 = libs__globals__compilation_target_string_1_f_0(top_level__mercury_compile_main__Target_8);
          }
          {
            top_level__mercury_compile_main__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__V_23_23, 1) = ((MR_Box) (top_level__mercury_compile_main__V_24_24));
          }
          {
            top_level__mercury_compile_main__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_22_22, 0) = ((MR_Box) (top_level__mercury_compile_main__V_23_23));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_main_scalar_common_1[10])));
          }
          {
            top_level__mercury_compile_main__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[29])));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_19_19, 1) = ((MR_Box) (top_level__mercury_compile_main__V_22_22));
          }
          {
            top_level__mercury_compile_main__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[26])));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_16_16, 1) = ((MR_Box) (top_level__mercury_compile_main__V_19_19));
          }
          {
            top_level__mercury_compile_main__NYIMsg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__NYIMsg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_main_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__NYIMsg_10, 1) = ((MR_Box) (top_level__mercury_compile_main__V_16_16));
          }
          {
            parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__NYIMsg_10);
          }
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_8_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv0_HeadVar__4_4;

    {
      backend_libs__compile_target_code__link_module_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_1), &top_level__mercury_compile_main__conv0_HeadVar__4_4);
    }
    *top_level__mercury_compile_main__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_main__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_op_mode_8_p_0(
  MR_Word top_level__mercury_compile_main__Globals_9,
  MR_Word top_level__mercury_compile_main__OpMode_10,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_11,
  MR_Word top_level__mercury_compile_main__OptionVariables_12,
  MR_Word top_level__mercury_compile_main__OptionArgs_13,
  MR_Word top_level__mercury_compile_main__Args_14)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    switch (MR_tag((MR_Word) top_level__mercury_compile_main__OpMode_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__source_file_map__write_source_file_map_4_p_0(top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__Args_14);
        }
        break;
      case (MR_Integer) 1:
        {
          make__make_process_compiler_args_7_p_0(top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__DetectedGradeFlags_11, top_level__mercury_compile_main__OptionVariables_12, top_level__mercury_compile_main__OptionArgs_13, top_level__mercury_compile_main__Args_14);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String top_level__mercury_compile_main__StandaloneIntBasename_17 = ((MR_String) (MR_hl_field(MR_mktag(2), top_level__mercury_compile_main__OpMode_10, (MR_Integer) 0)));

          {
            top_level__mercury_compile_main__do_op_mode_standalone_interface_4_p_0(top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__StandaloneIntBasename_17);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__OpMode_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word top_level__mercury_compile_main__OpModeQuery_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__OpMode_10, (MR_Integer) 1)));

              {
                top_level__mercury_compile_main__do_op_mode_query_4_p_0(top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__OpModeQuery_18);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word top_level__mercury_compile_main__OpModeArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_main__OpMode_10, (MR_Integer) 1)));
              MR_Word top_level__mercury_compile_main__FileNamesFromStdin_36;

              {
                libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_9, (MR_Integer) 647, &top_level__mercury_compile_main__FileNamesFromStdin_36);
              }
              top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (top_level__mercury_compile_main__succeeded)
                top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__FileNamesFromStdin_36 == (MR_Integer) 0);
              if (top_level__mercury_compile_main__succeeded)
                {
                  libs__handle_options__usage_2_p_0();
                }
              else
                {
                  MR_Word top_level__mercury_compile_main__TypeCtorInfo_68_86;
                  MR_Word top_level__mercury_compile_main__ModulesToLinkCord_37;
                  MR_Word top_level__mercury_compile_main__ExtraObjFilesCord_38;
                  MR_Word top_level__mercury_compile_main__ModulesToLink_39;
                  MR_Word top_level__mercury_compile_main__ExtraObjFiles_40;
                  MR_Integer top_level__mercury_compile_main__ExitStatus_41;
                  MR_Word top_level__mercury_compile_main__Statistics_50;

                  switch (top_level__mercury_compile_main__FileNamesFromStdin_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word top_level__mercury_compile_main__TypeCtorInfo_67_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                        MR_Word top_level__mercury_compile_main__V_53_53;
                        MR_Word top_level__mercury_compile_main__V_54_54;

                        {
                          top_level__mercury_compile_main__V_53_53 = mercury__cord__empty_0_f_0(top_level__mercury_compile_main__TypeCtorInfo_67_85);
                        }
                        {
                          top_level__mercury_compile_main__V_54_54 = mercury__cord__empty_0_f_0(top_level__mercury_compile_main__TypeCtorInfo_67_85);
                        }
                        {
                          top_level__mercury_compile_main__process_compiler_cmd_line_args_12_p_0(top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__OpModeArgs_19, top_level__mercury_compile_main__DetectedGradeFlags_11, top_level__mercury_compile_main__OptionVariables_12, top_level__mercury_compile_main__OptionArgs_13, top_level__mercury_compile_main__Args_14, top_level__mercury_compile_main__V_53_53, &top_level__mercury_compile_main__ModulesToLinkCord_37, top_level__mercury_compile_main__V_54_54, &top_level__mercury_compile_main__ExtraObjFilesCord_38);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word top_level__mercury_compile_main__TypeCtorInfo_66_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                        MR_Word top_level__mercury_compile_main__V_56_56;
                        MR_Word top_level__mercury_compile_main__V_57_57;

                        {
                          top_level__mercury_compile_main__V_56_56 = mercury__cord__empty_0_f_0(top_level__mercury_compile_main__TypeCtorInfo_66_84);
                        }
                        {
                          top_level__mercury_compile_main__V_57_57 = mercury__cord__empty_0_f_0(top_level__mercury_compile_main__TypeCtorInfo_66_84);
                        }
                        {
                          top_level__mercury_compile_main__process_compiler_stdin_args_11_p_0(top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__OpModeArgs_19, top_level__mercury_compile_main__DetectedGradeFlags_11, top_level__mercury_compile_main__OptionVariables_12, top_level__mercury_compile_main__OptionArgs_13, top_level__mercury_compile_main__V_56_56, &top_level__mercury_compile_main__ModulesToLinkCord_37, top_level__mercury_compile_main__V_57_57, &top_level__mercury_compile_main__ExtraObjFilesCord_38);
                        }
                      }
                      break;
                  }
                  top_level__mercury_compile_main__TypeCtorInfo_68_86 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  {
                    top_level__mercury_compile_main__ModulesToLink_39 = mercury__cord__list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_68_86, top_level__mercury_compile_main__ModulesToLinkCord_37);
                  }
                  {
                    top_level__mercury_compile_main__ExtraObjFiles_40 = mercury__cord__list_1_f_0(top_level__mercury_compile_main__TypeCtorInfo_68_86, top_level__mercury_compile_main__ExtraObjFilesCord_38);
                  }
                  {
                    mercury__io__get_exit_status_3_p_0(&top_level__mercury_compile_main__ExitStatus_41);
                  }
                  top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__ExitStatus_41 == (MR_Integer) 0);
                  if (top_level__mercury_compile_main__succeeded)
                    {
                      MR_String top_level__mercury_compile_main__FirstModule_42;
                      MR_Word top_level__mercury_compile_main__V_60_60;
                      MR_Word top_level__mercury_compile_main__V_61_61;
                      MR_Word top_level__mercury_compile_main__V_43_43;

                      top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__OpModeArgs_19)) == (MR_mktag((MR_Integer) 1)));
                      if (top_level__mercury_compile_main__succeeded)
                        {
                          top_level__mercury_compile_main__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__OpModeArgs_19, (MR_Integer) 0)));
                          top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__V_60_60)) == (MR_mktag((MR_Integer) 1)));
                          if (top_level__mercury_compile_main__succeeded)
                            {
                              top_level__mercury_compile_main__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_60_60, (MR_Integer) 0)));
                              top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__V_61_61 == (MR_Integer) 2);
                              if (top_level__mercury_compile_main__succeeded)
                                {
                                  top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__ModulesToLink_39)) == (MR_mktag((MR_Integer) 1)));
                                  if (top_level__mercury_compile_main__succeeded)
                                    {
                                      top_level__mercury_compile_main__FirstModule_42 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__ModulesToLink_39, (MR_Integer) 0)));
                                      top_level__mercury_compile_main__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__ModulesToLink_39, (MR_Integer) 1)));
                                    }
                                }
                            }
                        }
                      if (top_level__mercury_compile_main__succeeded)
                        {
                          MR_Word top_level__mercury_compile_main__MainModuleName_44;
                          MR_Word top_level__mercury_compile_main__Target_45;
                          MR_Word top_level__mercury_compile_main__Succeeded_46;

                          {
                            parse_tree__file_names__file_name_to_module_name_2_p_0(top_level__mercury_compile_main__FirstModule_42, &top_level__mercury_compile_main__MainModuleName_44);
                          }
                          {
                            libs__globals__get_target_2_p_0(top_level__mercury_compile_main__Globals_9, &top_level__mercury_compile_main__Target_45);
                          }
                          switch (top_level__mercury_compile_main__Target_45) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                            case (MR_Integer) 1:
                            case (MR_Integer) 3:
                              {
                                MR_Word top_level__mercury_compile_main__V_62_62;

                                {
                                  top_level__mercury_compile_main__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_62_62, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_6[0]));
                                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_62_62, 1) = ((MR_Box) (top_level__mercury_compile_main__do_op_mode_8_p_0_1));
                                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_62_62, 3) = ((MR_Box) (top_level__mercury_compile_main__ModulesToLink_39));
                                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_62_62, 4) = ((MR_Box) (top_level__mercury_compile_main__ExtraObjFiles_40));
                                }
                                {
                                  top_level__mercury_compile_main__compile_with_module_options__ho1_9_p_0(top_level__mercury_compile_main__ModulesToLink_39, top_level__mercury_compile_main__ExtraObjFiles_40, top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__MainModuleName_44, top_level__mercury_compile_main__DetectedGradeFlags_11, top_level__mercury_compile_main__OptionVariables_12, top_level__mercury_compile_main__OptionArgs_13, top_level__mercury_compile_main__V_62_62, &top_level__mercury_compile_main__Succeeded_46);
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                parse_tree__module_cmds__create_java_shell_script_5_p_0(top_level__mercury_compile_main__Globals_9, top_level__mercury_compile_main__MainModuleName_44, &top_level__mercury_compile_main__Succeeded_46);
                              }
                              break;
                          }
                          {
                            parse_tree__module_cmds__maybe_set_exit_status_3_p_0(top_level__mercury_compile_main__Succeeded_46);
                          }
                        }
                      else
                        {
                        }
                    }
                  else
                    {
                      MR_Word top_level__mercury_compile_main__Limited_47;
                      MR_Word top_level__mercury_compile_main__VerboseErrors_48;
                      MR_Word top_level__mercury_compile_main__ExtraErrorInfo_49;

                      {
                        libs__globals__io_get_some_errors_were_context_limited_3_p_0(&top_level__mercury_compile_main__Limited_47);
                      }
                      switch (top_level__mercury_compile_main__Limited_47) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "Some error messages were suppressed by \140--limit-error-contexts\' options.\n");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "You can see the suppressed messages if you recompile without these options.\n");
                            }
                          }
                          break;
                      }
                      {
                        libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_9, (MR_Integer) 49, &top_level__mercury_compile_main__VerboseErrors_48);
                      }
                      {
                        libs__globals__io_get_extra_error_info_3_p_0(&top_level__mercury_compile_main__ExtraErrorInfo_49);
                      }
                      switch (top_level__mercury_compile_main__VerboseErrors_48) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (top_level__mercury_compile_main__ExtraErrorInfo_49) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                {
                                  mercury__io__write_string_3_p_0((MR_String) "For more information, recompile with \140-E\'.\n");
                                }
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                          }
                          break;
                      }
                    }
                  {
                    libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_9, (MR_Integer) 57, &top_level__mercury_compile_main__Statistics_50);
                  }
                  switch (top_level__mercury_compile_main__Statistics_50) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__report_stats_3_p_0((MR_String) "full_memory_stats");
                        }
                      }
                      break;
                  }
                }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__main_after_setup_7_p_0(
  MR_Word top_level__mercury_compile_main__Globals_8,
  MR_Word top_level__mercury_compile_main__DetectedGradeFlags_9,
  MR_Word top_level__mercury_compile_main__OptionVariables_10,
  MR_Word top_level__mercury_compile_main__OptionArgs_11,
  MR_Word top_level__mercury_compile_main__Args_12)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Version_14;
    MR_Word top_level__mercury_compile_main__Help_15;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_8, (MR_Integer) 651, &top_level__mercury_compile_main__Version_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_8, (MR_Integer) 650, &top_level__mercury_compile_main__Help_15);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__Help_15 == (MR_Integer) 1);
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Word top_level__mercury_compile_main__Stdout_16;
        MR_Word top_level__mercury_compile_main__OldOutputStream_17;
        MR_Word top_level__mercury_compile_main__V_18_18;

        {
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_16);
        }
        {
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__Stdout_16, &top_level__mercury_compile_main__OldOutputStream_17);
        }
        {
          libs__handle_options__long_usage_2_p_0();
        }
        {
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__OldOutputStream_17, &top_level__mercury_compile_main__V_18_18);
        }
      }
    else
      {
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__Version_14 == (MR_Integer) 1);
        if (top_level__mercury_compile_main__succeeded)
          {
            MR_Word top_level__mercury_compile_main__Stdout_34;
            MR_Word top_level__mercury_compile_main__OldOutputStream_35;
            MR_Word top_level__mercury_compile_main__V_19_19;

            {
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_34);
            }
            {
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__Stdout_34, &top_level__mercury_compile_main__OldOutputStream_35);
            }
            {
              libs__handle_options__display_compiler_version_2_p_0();
            }
            {
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__OldOutputStream_35, &top_level__mercury_compile_main__V_19_19);
            }
          }
        else
          {
            MR_Word top_level__mercury_compile_main__OpMode_20;

            {
              libs__globals__get_op_mode_2_p_0(top_level__mercury_compile_main__Globals_8, &top_level__mercury_compile_main__OpMode_20);
            }
            {
              top_level__mercury_compile_main__do_op_mode_8_p_0(top_level__mercury_compile_main__Globals_8, top_level__mercury_compile_main__OpMode_20, top_level__mercury_compile_main__DetectedGradeFlags_9, top_level__mercury_compile_main__OptionVariables_10, top_level__mercury_compile_main__OptionArgs_11, top_level__mercury_compile_main__Args_12);
            }
          }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__do_detect_libgrade_9_p_0(
  MR_Word top_level__mercury_compile_main__VeryVerbose_10,
  MR_String top_level__mercury_compile_main__DirName_11,
  MR_String top_level__mercury_compile_main__FileName_12,
  MR_Word top_level__mercury_compile_main__FileType_13,
  MR_Word * top_level__mercury_compile_main__Continue_14,
  MR_Word top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20,
  MR_Word * top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;

    {
      top_level__mercury_compile_main__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_100_101_116_101_99_116_95_108_105_98_103_114_97_100_101_95_95_91_49_93_95_48_9_p_0(top_level__mercury_compile_main__DirName_11, top_level__mercury_compile_main__FileName_12, top_level__mercury_compile_main__FileType_13, top_level__mercury_compile_main__Continue_14, top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_0_20, top_level__mercury_compile_main__STATE_VARIABLE_GradeOpts_21);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_2(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box top_level__mercury_compile_main__wrapper_arg_7,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_8)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv3_Continue_14;
    MR_Word top_level__mercury_compile_main__conv2_STATE_VARIABLE_GradeOpts_21;

    {
      top_level__mercury_compile_main__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile_main__wrapper_arg_1), ((MR_String) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3), &top_level__mercury_compile_main__conv3_Continue_14, ((MR_Word) top_level__mercury_compile_main__wrapper_arg_5), &top_level__mercury_compile_main__conv2_STATE_VARIABLE_GradeOpts_21);
    }
    *top_level__mercury_compile_main__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_main__conv3_Continue_14));
    *top_level__mercury_compile_main__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_main__conv2_STATE_VARIABLE_GradeOpts_21));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0_1(
  MR_Box top_level__mercury_compile_main__closure_arg,
  MR_Box top_level__mercury_compile_main__wrapper_arg_1,
  MR_Box top_level__mercury_compile_main__wrapper_arg_2,
  MR_Box top_level__mercury_compile_main__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_4,
  MR_Box top_level__mercury_compile_main__wrapper_arg_5,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_6,
  MR_Box top_level__mercury_compile_main__wrapper_arg_7,
  MR_Box * top_level__mercury_compile_main__wrapper_arg_8)
{
  {
    MR_Box top_level__mercury_compile_main__closure = top_level__mercury_compile_main__closure_arg;
    MR_Word top_level__mercury_compile_main__conv1_Continue_14;
    MR_Word top_level__mercury_compile_main__conv0_STATE_VARIABLE_GradeOpts_21;

    {
      top_level__mercury_compile_main__do_detect_libgrade_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__closure, (MR_Integer) 3))), ((MR_String) top_level__mercury_compile_main__wrapper_arg_1), ((MR_String) top_level__mercury_compile_main__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_main__wrapper_arg_3), &top_level__mercury_compile_main__conv1_Continue_14, ((MR_Word) top_level__mercury_compile_main__wrapper_arg_5), &top_level__mercury_compile_main__conv0_STATE_VARIABLE_GradeOpts_21);
    }
    *top_level__mercury_compile_main__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_main__conv1_Continue_14));
    *top_level__mercury_compile_main__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_main__conv0_STATE_VARIABLE_GradeOpts_21));
  }
}

static void MR_CALL 
top_level__mercury_compile_main__detect_libgrades_5_p_0(
  MR_Word top_level__mercury_compile_main__Globals_6,
  MR_Word top_level__mercury_compile_main__MaybeConfigMerStdLibDir_7,
  MR_Word * top_level__mercury_compile_main__GradeOpts_8)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__Detect_10;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_6, (MR_Integer) 624, &top_level__mercury_compile_main__Detect_10);
    }
    switch (top_level__mercury_compile_main__Detect_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_main__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_main__VeryVerbose_13;
          MR_Word top_level__mercury_compile_main__Verbose_11;
          MR_String top_level__mercury_compile_main__MerStdLibDir_15;
          MR_Word top_level__mercury_compile_main__MaybeStdLibDir_14;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_6, (MR_Integer) 47, &top_level__mercury_compile_main__Verbose_11);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_6, (MR_Integer) 48, &top_level__mercury_compile_main__VeryVerbose_13);
          }
          {
            libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile_main__Globals_6, (MR_Integer) 541, &top_level__mercury_compile_main__MaybeStdLibDir_14);
          }
          top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__MaybeStdLibDir_14)) == (MR_mktag((MR_Integer) 1)));
          if (top_level__mercury_compile_main__succeeded)
            {
              top_level__mercury_compile_main__MerStdLibDir_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeStdLibDir_14, (MR_Integer) 0)));
              {
                MR_String top_level__mercury_compile_main__ModulesDir_39;
                MR_Word top_level__mercury_compile_main__MaybeGradeOpts_40;
                MR_Word top_level__mercury_compile_main__V_44_44;

                {
                  top_level__mercury_compile_main__ModulesDir_39 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile_main__MerStdLibDir_15, (MR_String) "modules");
                }
                {
                  top_level__mercury_compile_main__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_44_44, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_44_44, 1) = ((MR_Box) (top_level__mercury_compile_main__detect_libgrades_5_p_0_1));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_44_44, 3) = ((MR_Box) (top_level__mercury_compile_main__VeryVerbose_13));
                }
                {
                  mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], top_level__mercury_compile_main__V_44_44, top_level__mercury_compile_main__ModulesDir_39, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile_main__MaybeGradeOpts_40);
                }
                if (((MR_tag((MR_Word) top_level__mercury_compile_main__MaybeGradeOpts_40)) == (MR_mktag((MR_Integer) 1))))
                  *top_level__mercury_compile_main__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  *top_level__mercury_compile_main__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__MaybeGradeOpts_40, (MR_Integer) 0)));
              }
            }
          else
            {
              MR_String top_level__mercury_compile_main__MerStdLibDir_32;
              MR_Word top_level__mercury_compile_main__V_26_26;
              MR_Word top_level__mercury_compile_main__V_27_27;

              top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__MaybeConfigMerStdLibDir_7)) == (MR_mktag((MR_Integer) 1)));
              if (top_level__mercury_compile_main__succeeded)
                {
                  top_level__mercury_compile_main__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeConfigMerStdLibDir_7, (MR_Integer) 0)));
                  top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                  if (top_level__mercury_compile_main__succeeded)
                    {
                      top_level__mercury_compile_main__MerStdLibDir_32 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_26_26, (MR_Integer) 0)));
                      top_level__mercury_compile_main__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_26_26, (MR_Integer) 1)));
                      top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (top_level__mercury_compile_main__succeeded)
                {
                  MR_String top_level__mercury_compile_main__ModulesDir_62;
                  MR_Word top_level__mercury_compile_main__MaybeGradeOpts_63;
                  MR_Word top_level__mercury_compile_main__V_67_67;

                  {
                    top_level__mercury_compile_main__ModulesDir_62 = mercury__dir__f_slash_2_f_0(top_level__mercury_compile_main__MerStdLibDir_32, (MR_String) "modules");
                  }
                  {
                    top_level__mercury_compile_main__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_67_67, 0) = ((MR_Box) (&top_level__mercury_compile_main_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_67_67, 1) = ((MR_Box) (top_level__mercury_compile_main__detect_libgrades_5_p_0_2));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__V_67_67, 3) = ((MR_Box) (top_level__mercury_compile_main__VeryVerbose_13));
                  }
                  {
                    mercury__dir__foldl2_6_p_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], top_level__mercury_compile_main__V_67_67, top_level__mercury_compile_main__ModulesDir_62, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile_main__MaybeGradeOpts_63);
                  }
                  if (((MR_tag((MR_Word) top_level__mercury_compile_main__MaybeGradeOpts_63)) == (MR_mktag((MR_Integer) 1))))
                    *top_level__mercury_compile_main__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    *top_level__mercury_compile_main__GradeOpts_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__MaybeGradeOpts_63, (MR_Integer) 0)));
                }
              else
                *top_level__mercury_compile_main__GradeOpts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__real_main_after_expansion_3_p_0(
  MR_Word top_level__mercury_compile_main__CmdLineArgs_4)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__CmdLineArgs_4)) == (MR_mktag((MR_Integer) 1)));
    MR_String top_level__mercury_compile_main__ArgFile_6;
    MR_Word top_level__mercury_compile_main__ExtraArgs_7;
    MR_String top_level__mercury_compile_main__V_44_44;
    MR_Word top_level__mercury_compile_main__V_45_45;

    if (top_level__mercury_compile_main__succeeded)
      {
        top_level__mercury_compile_main__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__CmdLineArgs_4, (MR_Integer) 0)));
        top_level__mercury_compile_main__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__CmdLineArgs_4, (MR_Integer) 1)));
        top_level__mercury_compile_main__succeeded = (strcmp(top_level__mercury_compile_main__V_44_44, (MR_String) "--arg-file") == 0);
        if (top_level__mercury_compile_main__succeeded)
          {
            top_level__mercury_compile_main__succeeded = ((MR_tag((MR_Word) top_level__mercury_compile_main__V_45_45)) == (MR_mktag((MR_Integer) 1)));
            if (top_level__mercury_compile_main__succeeded)
              {
                top_level__mercury_compile_main__ArgFile_6 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_45_45, (MR_Integer) 0)));
                top_level__mercury_compile_main__ExtraArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_45_45, (MR_Integer) 1)));
              }
          }
      }
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Word top_level__mercury_compile_main__TypeCtorInfo_76_76;
        MR_Word top_level__mercury_compile_main__DummyGlobals_10;
        MR_Word top_level__mercury_compile_main__MaybeArgs1_11;
        MR_Word top_level__mercury_compile_main__OptionArgs_13;
        MR_Word top_level__mercury_compile_main__NonOptionArgs_14;
        MR_Word top_level__mercury_compile_main__DetectedGradeFlags_15;
        MR_Word top_level__mercury_compile_main__Variables_16;
        MR_Word top_level__mercury_compile_main__AllFlags_35;
        MR_Word top_level__mercury_compile_main__Specs_38;
        MR_Word top_level__mercury_compile_main__ActualGlobals_39;
        MR_Word top_level__mercury_compile_main__V_70_70;
        MR_Word top_level__mercury_compile_main__V_36_36;
        MR_Word top_level__mercury_compile_main__V_37_37;

        if ((top_level__mercury_compile_main__ExtraArgs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String top_level__mercury_compile_main__V_48_48;
            MR_String top_level__mercury_compile_main__V_50_50;

            {
              top_level__mercury_compile_main__V_50_50 = mercury__string__string_1_f_0((MR_Word) &top_level__mercury_compile_main_scalar_common_1[0], ((MR_Box) (top_level__mercury_compile_main__ExtraArgs_7)));
            }
            {
              top_level__mercury_compile_main__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "extra arguments with --arg-file: ", top_level__mercury_compile_main__V_50_50);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_main", (MR_String) "predicate \140top_level.mercury_compile_main.real_main_after_expansion\'/3", top_level__mercury_compile_main__V_48_48);
              return;
            }
          }
        {
          libs__handle_options__generate_default_globals_3_p_0(&top_level__mercury_compile_main__DummyGlobals_10);
        }
        {
          make__options_file__read_args_file_5_p_0(top_level__mercury_compile_main__DummyGlobals_10, top_level__mercury_compile_main__ArgFile_6, &top_level__mercury_compile_main__MaybeArgs1_11);
        }
        if ((top_level__mercury_compile_main__MaybeArgs1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            top_level__mercury_compile_main__OptionArgs_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            top_level__mercury_compile_main__NonOptionArgs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word top_level__mercury_compile_main__Args1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeArgs1_11, (MR_Integer) 0)));

            {
              libs__handle_options__separate_option_args_5_p_0(top_level__mercury_compile_main__Args1_12, &top_level__mercury_compile_main__OptionArgs_13, &top_level__mercury_compile_main__NonOptionArgs_14);
            }
          }
        top_level__mercury_compile_main__DetectedGradeFlags_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          top_level__mercury_compile_main__Variables_16 = make__options_file__options_variables_init_0_f_0();
        }
        top_level__mercury_compile_main__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          top_level__mercury_compile_main__V_70_70 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile_main__OptionArgs_13);
        }
        {
          top_level__mercury_compile_main__AllFlags_35 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_76_76, top_level__mercury_compile_main__DetectedGradeFlags_15, top_level__mercury_compile_main__V_70_70);
        }
        {
          libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile_main__AllFlags_35, &top_level__mercury_compile_main__V_36_36, &top_level__mercury_compile_main__V_37_37, &top_level__mercury_compile_main__Specs_38, &top_level__mercury_compile_main__ActualGlobals_39);
        }
        if ((top_level__mercury_compile_main__Specs_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            top_level__mercury_compile_main__main_after_setup_7_p_0(top_level__mercury_compile_main__ActualGlobals_39, top_level__mercury_compile_main__DetectedGradeFlags_15, top_level__mercury_compile_main__Variables_16, top_level__mercury_compile_main__OptionArgs_13, top_level__mercury_compile_main__NonOptionArgs_14);
          }
        else
          {
            libs__handle_options__usage_errors_4_p_0(top_level__mercury_compile_main__ActualGlobals_39, top_level__mercury_compile_main__Specs_38);
          }
      }
    else
      {
        MR_Word top_level__mercury_compile_main__ArgsGlobals_19;
        MR_Word top_level__mercury_compile_main__MaybeVariables0_20;
        MR_Word top_level__mercury_compile_main__V_56_56;
        MR_Word top_level__mercury_compile_main__OptionArgs_97;
        MR_Word top_level__mercury_compile_main__NonOptionArgs_98;
        MR_Word top_level__mercury_compile_main___Errors0_18;

        {
          libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile_main__CmdLineArgs_4, &top_level__mercury_compile_main__OptionArgs_97, &top_level__mercury_compile_main__NonOptionArgs_98, &top_level__mercury_compile_main___Errors0_18, &top_level__mercury_compile_main__ArgsGlobals_19);
        }
        {
          top_level__mercury_compile_main__V_56_56 = make__options_file__options_variables_init_0_f_0();
        }
        {
          make__options_file__read_options_files_5_p_0(top_level__mercury_compile_main__ArgsGlobals_19, top_level__mercury_compile_main__V_56_56, &top_level__mercury_compile_main__MaybeVariables0_20);
        }
        if ((top_level__mercury_compile_main__MaybeVariables0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word top_level__mercury_compile_main__Variables_100;

            {
              top_level__mercury_compile_main__Variables_100 = make__options_file__options_variables_init_0_f_0();
            }
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
          }
        else
          {
            MR_Word top_level__mercury_compile_main__Variables0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeVariables0_20, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_main__MaybeMCFlags0_22;

            {
              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile_main__ArgsGlobals_19, top_level__mercury_compile_main__Variables0_21, &top_level__mercury_compile_main__MaybeMCFlags0_22);
            }
            if ((top_level__mercury_compile_main__MaybeMCFlags0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word top_level__mercury_compile_main__Variables_116;

                {
                  top_level__mercury_compile_main__Variables_116 = make__options_file__options_variables_init_0_f_0();
                }
                {
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
              }
            else
              {
                MR_Word top_level__mercury_compile_main__MCFlags0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeMCFlags0_22, (MR_Integer) 0)));
                MR_Word top_level__mercury_compile_main__FlagsSpecs_26;
                MR_Word top_level__mercury_compile_main__FlagsArgsGlobals_27;
                MR_Word top_level__mercury_compile_main__V_59_59;
                MR_Word top_level__mercury_compile_main__DetectedGradeFlags_122;
                MR_Word top_level__mercury_compile_main__Variables_123;
                MR_Word top_level__mercury_compile_main__MaybeMCFlags_124;
                MR_Word top_level__mercury_compile_main__V_24_24;
                MR_Word top_level__mercury_compile_main__V_25_25;

                {
                  top_level__mercury_compile_main__V_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile_main__MCFlags0_23, top_level__mercury_compile_main__CmdLineArgs_4);
                }
                {
                  libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile_main__V_59_59, &top_level__mercury_compile_main__V_24_24, &top_level__mercury_compile_main__V_25_25, &top_level__mercury_compile_main__FlagsSpecs_26, &top_level__mercury_compile_main__FlagsArgsGlobals_27);
                }
                if ((top_level__mercury_compile_main__FlagsSpecs_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word top_level__mercury_compile_main__MaybeConfigFile_30;

                    {
                      libs__globals__lookup_maybe_string_option_3_p_0(top_level__mercury_compile_main__FlagsArgsGlobals_27, (MR_Integer) 631, &top_level__mercury_compile_main__MaybeConfigFile_30);
                    }
                    if ((top_level__mercury_compile_main__MaybeConfigFile_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        top_level__mercury_compile_main__DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          top_level__mercury_compile_main__Variables_123 = make__options_file__options_variables_init_0_f_0();
                        }
                        {
                          make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile_main__FlagsArgsGlobals_27, top_level__mercury_compile_main__Variables_123, &top_level__mercury_compile_main__MaybeMCFlags_124);
                        }
                      }
                    else
                      {
                        MR_String top_level__mercury_compile_main__ConfigFile_31 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeConfigFile_30, (MR_Integer) 0)));
                        MR_Word top_level__mercury_compile_main__MaybeVariables_32;

                        {
                          make__options_file__read_options_file_6_p_0(top_level__mercury_compile_main__FlagsArgsGlobals_27, top_level__mercury_compile_main__ConfigFile_31, top_level__mercury_compile_main__Variables0_21, &top_level__mercury_compile_main__MaybeVariables_32);
                        }
                        if ((top_level__mercury_compile_main__MaybeVariables_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            top_level__mercury_compile_main__MaybeMCFlags_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            top_level__mercury_compile_main__DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              top_level__mercury_compile_main__Variables_123 = make__options_file__options_variables_init_0_f_0();
                            }
                          }
                        else
                          {
                            MR_Word top_level__mercury_compile_main__MaybeMerStdLibDir_33;

                            top_level__mercury_compile_main__Variables_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeVariables_32, (MR_Integer) 0)));
                            {
                              make__options_file__lookup_mmc_options_5_p_0(top_level__mercury_compile_main__FlagsArgsGlobals_27, top_level__mercury_compile_main__Variables_123, &top_level__mercury_compile_main__MaybeMCFlags_124);
                            }
                            {
                              make__options_file__lookup_mercury_stdlib_dir_5_p_0(top_level__mercury_compile_main__FlagsArgsGlobals_27, top_level__mercury_compile_main__Variables_123, &top_level__mercury_compile_main__MaybeMerStdLibDir_33);
                            }
                            {
                              top_level__mercury_compile_main__detect_libgrades_5_p_0(top_level__mercury_compile_main__FlagsArgsGlobals_27, top_level__mercury_compile_main__MaybeMerStdLibDir_33, &top_level__mercury_compile_main__DetectedGradeFlags_122);
                            }
                          }
                      }
                  }
                else
                  {
                    {
                      libs__handle_options__usage_errors_4_p_0(top_level__mercury_compile_main__FlagsArgsGlobals_27, top_level__mercury_compile_main__FlagsSpecs_26);
                    }
                    top_level__mercury_compile_main__DetectedGradeFlags_122 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      top_level__mercury_compile_main__Variables_123 = make__options_file__options_variables_init_0_f_0();
                    }
                    top_level__mercury_compile_main__MaybeMCFlags_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                if ((top_level__mercury_compile_main__MaybeMCFlags_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                  }
                else
                  {
                    MR_Word top_level__mercury_compile_main__TypeCtorInfo_76_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                    MR_Word top_level__mercury_compile_main__MCFlags_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__MaybeMCFlags_124, (MR_Integer) 0)));
                    MR_Word top_level__mercury_compile_main__AllFlags_80;
                    MR_Word top_level__mercury_compile_main__Specs_83;
                    MR_Word top_level__mercury_compile_main__ActualGlobals_84;
                    MR_Word top_level__mercury_compile_main__V_85_85;
                    MR_Word top_level__mercury_compile_main__V_77_77;
                    MR_Word top_level__mercury_compile_main__V_78_78;

                    {
                      top_level__mercury_compile_main__V_85_85 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_76_87, top_level__mercury_compile_main__MCFlags_79, top_level__mercury_compile_main__OptionArgs_97);
                    }
                    {
                      top_level__mercury_compile_main__AllFlags_80 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_main__TypeCtorInfo_76_87, top_level__mercury_compile_main__DetectedGradeFlags_122, top_level__mercury_compile_main__V_85_85);
                    }
                    {
                      libs__handle_options__handle_given_options_7_p_0(top_level__mercury_compile_main__AllFlags_80, &top_level__mercury_compile_main__V_77_77, &top_level__mercury_compile_main__V_78_78, &top_level__mercury_compile_main__Specs_83, &top_level__mercury_compile_main__ActualGlobals_84);
                    }
                    if ((top_level__mercury_compile_main__Specs_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        top_level__mercury_compile_main__main_after_setup_7_p_0(top_level__mercury_compile_main__ActualGlobals_84, top_level__mercury_compile_main__DetectedGradeFlags_122, top_level__mercury_compile_main__Variables_123, top_level__mercury_compile_main__OptionArgs_97, top_level__mercury_compile_main__NonOptionArgs_98);
                      }
                    else
                      {
                        libs__handle_options__usage_errors_4_p_0(top_level__mercury_compile_main__ActualGlobals_84, top_level__mercury_compile_main__Specs_83);
                      }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(
  MR_Word top_level__mercury_compile_main__S_5,
  MR_Word * top_level__mercury_compile_main__Res_6)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__LineRes_8;

    {
      mercury__io__read_line_as_string_4_p_0(top_level__mercury_compile_main__S_5, &top_level__mercury_compile_main__LineRes_8);
    }
    switch (MR_tag((MR_Word) top_level__mercury_compile_main__LineRes_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *top_level__mercury_compile_main__Res_6 = (MR_Word) &top_level__mercury_compile_main_scalar_common_4[0];
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String top_level__mercury_compile_main__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__LineRes_8, (MR_Integer) 0)));
          MR_Word top_level__mercury_compile_main__Res0_10;

          {
            top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(top_level__mercury_compile_main__S_5, &top_level__mercury_compile_main__Res0_10);
          }
          if (((MR_tag((MR_Word) top_level__mercury_compile_main__Res0_10)) == (MR_mktag((MR_Integer) 1))))
            *top_level__mercury_compile_main__Res_6 = top_level__mercury_compile_main__Res0_10;
          else
            {
              MR_Word top_level__mercury_compile_main__Lines_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Res0_10, (MR_Integer) 0)));
              MR_String top_level__mercury_compile_main__StrippedLine_12;

              {
                top_level__mercury_compile_main__StrippedLine_12 = mercury__string__strip_1_f_0(top_level__mercury_compile_main__Line_9);
              }
              top_level__mercury_compile_main__succeeded = (strcmp(top_level__mercury_compile_main__StrippedLine_12, (MR_String) "") == 0);
              if (top_level__mercury_compile_main__succeeded)
                *top_level__mercury_compile_main__Res_6 = top_level__mercury_compile_main__Res0_10;
              else
                {
                  MR_Word top_level__mercury_compile_main__V_20_20;

                  {
                    top_level__mercury_compile_main__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_20_20, 0) = ((MR_Box) (top_level__mercury_compile_main__StrippedLine_12));
                    MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_20_20, 1) = ((MR_Box) (top_level__mercury_compile_main__Lines_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *top_level__mercury_compile_main__Res_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_main__V_20_20));
                  }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word top_level__mercury_compile_main__E_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), top_level__mercury_compile_main__LineRes_8, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *top_level__mercury_compile_main__Res_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_main__E_14));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(
  MR_Word top_level__mercury_compile_main__HeadVar__1_1,
  MR_Word * top_level__mercury_compile_main__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool top_level__mercury_compile_main__succeeded;

        if ((top_level__mercury_compile_main__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *top_level__mercury_compile_main__HeadVar__2_2 = (MR_Word) &top_level__mercury_compile_main_scalar_common_4[0];
          }
        else
          {
            MR_String top_level__mercury_compile_main__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_main__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__HeadVar__1_1, (MR_Integer) 1)));
            MR_String top_level__mercury_compile_main__File_13;

            {
              top_level__mercury_compile_main__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "\100", top_level__mercury_compile_main__Arg_9, &top_level__mercury_compile_main__File_13);
            }
            if (top_level__mercury_compile_main__succeeded)
              {
                MR_Word top_level__mercury_compile_main__OpenRes_14;

                {
                  mercury__io__open_input_4_p_0(top_level__mercury_compile_main__File_13, &top_level__mercury_compile_main__OpenRes_14);
                }
                if (((MR_tag((MR_Word) top_level__mercury_compile_main__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_String top_level__mercury_compile_main__Msg_20;
                    MR_String top_level__mercury_compile_main__V_28_28;
                    MR_Word top_level__mercury_compile_main__V_30_30;

                    {
                      top_level__mercury_compile_main__V_28_28 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__File_13, (MR_String) "\'");
                    }
                    {
                      top_level__mercury_compile_main__Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: cannot open \'", top_level__mercury_compile_main__V_28_28);
                    }
                    {
                      top_level__mercury_compile_main__V_30_30 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile_main__Msg_20);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *top_level__mercury_compile_main__HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_main__V_30_30));
                    }
                  }
                else
                  {
                    MR_Word top_level__mercury_compile_main__S_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__OpenRes_14, (MR_Integer) 0)));
                    MR_Word top_level__mercury_compile_main__ReadRes_16;

                    {
                      top_level__mercury_compile_main__expand_file_into_arg_list_4_p_0(top_level__mercury_compile_main__S_15, &top_level__mercury_compile_main__ReadRes_16);
                    }
                    if (((MR_tag((MR_Word) top_level__mercury_compile_main__ReadRes_16)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word top_level__mercury_compile_main__E_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__ReadRes_16, (MR_Integer) 0)));
                        MR_Word top_level__mercury_compile_main__V_32_32;
                        MR_String top_level__mercury_compile_main__V_43_43;
                        MR_String top_level__mercury_compile_main__V_45_45;
                        MR_String top_level__mercury_compile_main__V_46_46;
                        MR_String top_level__mercury_compile_main__V_48_48;

                        {
                          top_level__mercury_compile_main__V_48_48 = mercury__io__error_message_1_f_0(top_level__mercury_compile_main__E_18);
                        }
                        {
                          top_level__mercury_compile_main__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "\' the following error occurred: ", top_level__mercury_compile_main__V_48_48);
                        }
                        {
                          top_level__mercury_compile_main__V_45_45 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_main__File_13, top_level__mercury_compile_main__V_46_46);
                        }
                        {
                          top_level__mercury_compile_main__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "While attempting to process \'", top_level__mercury_compile_main__V_45_45);
                        }
                        {
                          top_level__mercury_compile_main__V_32_32 = mercury__io__make_io_error_1_f_0(top_level__mercury_compile_main__V_43_43);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *top_level__mercury_compile_main__HeadVar__2_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_main__V_32_32));
                        }
                      }
                    else
                      {
                        MR_Word top_level__mercury_compile_main__FileArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__ReadRes_16, (MR_Integer) 0)));
                        MR_Word top_level__mercury_compile_main__V_33_33;

                        {
                          top_level__mercury_compile_main__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, top_level__mercury_compile_main__FileArgs_17, top_level__mercury_compile_main__Args_10);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word top_level__mercury_compile_main__HeadVar__1__tmp_copy_1 = top_level__mercury_compile_main__V_33_33;

                          top_level__mercury_compile_main__HeadVar__1_1 = top_level__mercury_compile_main__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
            else
              {
                MR_Word top_level__mercury_compile_main__Result0_21;

                {
                  top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(top_level__mercury_compile_main__Args_10, &top_level__mercury_compile_main__Result0_21);
                }
                if (((MR_tag((MR_Word) top_level__mercury_compile_main__Result0_21)) == (MR_mktag((MR_Integer) 1))))
                  *top_level__mercury_compile_main__HeadVar__2_2 = top_level__mercury_compile_main__Result0_21;
                else
                  {
                    MR_Word top_level__mercury_compile_main__ExpandedArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Result0_21, (MR_Integer) 0)));
                    MR_Word top_level__mercury_compile_main__V_36_36;

                    {
                      top_level__mercury_compile_main__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_36_36, 0) = ((MR_Box) (top_level__mercury_compile_main__Arg_9));
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile_main__ExpandedArgs_22));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *top_level__mercury_compile_main__HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_main__V_36_36));
                    }
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
top_level__mercury_compile_main__main_for_make_4_p_0(
  MR_Word top_level__mercury_compile_main__Globals_5,
  MR_Word top_level__mercury_compile_main__Args_6)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__V_11_11;
    MR_Word top_level__mercury_compile_main__Version_22;
    MR_Word top_level__mercury_compile_main__Help_23;

    {
      top_level__mercury_compile_main__V_11_11 = make__options_file__options_variables_init_0_f_0();
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 651, &top_level__mercury_compile_main__Version_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_main__Globals_5, (MR_Integer) 650, &top_level__mercury_compile_main__Help_23);
    }
    top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__Help_23 == (MR_Integer) 1);
    if (top_level__mercury_compile_main__succeeded)
      {
        MR_Word top_level__mercury_compile_main__Stdout_24;
        MR_Word top_level__mercury_compile_main__OldOutputStream_25;
        MR_Word top_level__mercury_compile_main__V_26_26;

        {
          mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_24);
        }
        {
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__Stdout_24, &top_level__mercury_compile_main__OldOutputStream_25);
        }
        {
          libs__handle_options__long_usage_2_p_0();
        }
        {
          mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__OldOutputStream_25, &top_level__mercury_compile_main__V_26_26);
        }
      }
    else
      {
        top_level__mercury_compile_main__succeeded = (top_level__mercury_compile_main__Version_22 == (MR_Integer) 1);
        if (top_level__mercury_compile_main__succeeded)
          {
            MR_Word top_level__mercury_compile_main__Stdout_40;
            MR_Word top_level__mercury_compile_main__OldOutputStream_41;
            MR_Word top_level__mercury_compile_main__V_27_27;

            {
              mercury__io__stdout_stream_3_p_0(&top_level__mercury_compile_main__Stdout_40);
            }
            {
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__Stdout_40, &top_level__mercury_compile_main__OldOutputStream_41);
            }
            {
              libs__handle_options__display_compiler_version_2_p_0();
            }
            {
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__OldOutputStream_41, &top_level__mercury_compile_main__V_27_27);
            }
          }
        else
          {
            MR_Word top_level__mercury_compile_main__OpMode_28;

            {
              libs__globals__get_op_mode_2_p_0(top_level__mercury_compile_main__Globals_5, &top_level__mercury_compile_main__OpMode_28);
            }
            {
              top_level__mercury_compile_main__do_op_mode_8_p_0(top_level__mercury_compile_main__Globals_5, top_level__mercury_compile_main__OpMode_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile_main__V_11_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), top_level__mercury_compile_main__Args_6);
            }
          }
      }
  }
}

void MR_CALL 
top_level__mercury_compile_main__real_main_2_p_0(void)
{
  {
    MR_bool top_level__mercury_compile_main__succeeded;
    MR_Word top_level__mercury_compile_main__StdErr_4;
    MR_Word top_level__mercury_compile_main__CmdLineArgs_6;
    MR_Word top_level__mercury_compile_main__Res_7;
    MR_Word top_level__mercury_compile_main__V_5_5;

{
#define MR_PROC_LABEL top_level__mercury_compile_main__real_main_2_p_0


		{

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


		;}
#undef MR_PROC_LABEL
}
    {
      mercury__io__stderr_stream_3_p_0(&top_level__mercury_compile_main__StdErr_4);
    }
    {
      mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_main__StdErr_4, &top_level__mercury_compile_main__V_5_5);
    }
    {
      mercury__io__command_line_arguments_3_p_0(&top_level__mercury_compile_main__CmdLineArgs_6);
    }
    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    {
      top_level__mercury_compile_main__expand_at_file_arguments_4_p_0(top_level__mercury_compile_main__CmdLineArgs_6, &top_level__mercury_compile_main__Res_7);
    }
    if (((MR_tag((MR_Word) top_level__mercury_compile_main__Res_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word top_level__mercury_compile_main__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_main__Res_7, (MR_Integer) 0)));
        MR_String top_level__mercury_compile_main__V_20_20;

        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        {
          top_level__mercury_compile_main__V_20_20 = mercury__io__error_message_1_f_0(top_level__mercury_compile_main__E_9);
        }
        {
          mercury__io__write_string_3_p_0(top_level__mercury_compile_main__V_20_20);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
    else
      {
        MR_Word top_level__mercury_compile_main__ExpandedCmdLineArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_main__Res_7, (MR_Integer) 0)));

        {
          top_level__mercury_compile_main__real_main_after_expansion_3_p_0(top_level__mercury_compile_main__ExpandedCmdLineArgs_8);
        }
      }
  }
}

void mercury__top_level__mercury_compile_main__init(void)
{
}

void mercury__top_level__mercury_compile_main__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_compile_0);
	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_file_or_module_0);
	MR_register_type_ctor_info(&top_level__mercury_compile_main__top_level__mercury_compile_main__type_ctor_info_maybe_write_d_file_0);
}

void mercury__top_level__mercury_compile_main__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_main__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module top_level.mercury_compile_main. */
