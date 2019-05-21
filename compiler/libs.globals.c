/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version 2017-08-21
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


/* :- module libs.globals. */
/* :- implementation. */

/*
INIT mercury__libs__globals__init
REQUIRED_INIT mercury__libs__globals__required_init
ENDINIT
*/

#include "libs.globals.mih"
#include "libs.globals.mh"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "enum.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"









static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_1;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_backend_0[2];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_backend_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_backend_0[2];

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3];

static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0;

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2;

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[4];

static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[4];

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[4];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[4];

static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[4];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5];

static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5];

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0;

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[4];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[4];

static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[4];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6];

static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6];

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0;

static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[20];

static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[20];

static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[20];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1];

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2];

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4];

static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4];

static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__466__1_2_p_0(
  MR_Char HeadVar__1_11,
  MR_Char HeadVar__2_28);

static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void);

static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void);

static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void);

static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void);

static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void);

static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
  MR_String RangeStr_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
libs__globals__convert_foreign_language_det_2_p_0(
  MR_String String_3,
  MR_Word * ForeignLang_4);

static void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevBadOptions_0_2,
  MR_Word * STATE_VARIABLE_RevBadOptions_3,
  MR_Word STATE_VARIABLE_Map_0_4,
  MR_Word * STATE_VARIABLE_Map_5);

static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LineRangeChars_0_2,
  MR_Word * STATE_VARIABLE_LineRangeChars_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__globals____Unify____backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__globals_scalar_common_1[5][2];

static /* final */ const MR_Box libs__globals_scalar_common_2[6][3];

static /* final */ const MR_Box libs__globals_scalar_common_10[2][1];

static /* final */ const MR_Box libs__globals_scalar_common_12[3][5];

static /* final */ const MR_Box libs__globals_scalar_common_13[1][4];


/* sealed */ struct libs__globals__vector_common_type_3_0_s {
  const MR_Word libs__globals__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct libs__globals__vector_common_type_3_0_s libs__globals_vector_common_3[4];

/* sealed */ struct libs__globals__vector_common_type_4_0_s {
  const MR_String libs__globals__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[12];

/* sealed */ struct libs__globals__vector_common_type_5_0_s {
  const MR_Word libs__globals__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[6];

/* sealed */ struct libs__globals__vector_common_type_6_0_s {
  const MR_String libs__globals__vector_common_type_6_0__vct_6_f_0;
  const MR_Word libs__globals__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[4];

/* sealed */ struct libs__globals__vector_common_type_7_0_s {
  const MR_String libs__globals__vector_common_type_7_0__vct_7_f_0;
  const MR_Word libs__globals__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[6];

/* sealed */ struct libs__globals__vector_common_type_8_0_s {
  const MR_String libs__globals__vector_common_type_8_0__vct_8_f_0;
  const MR_Word libs__globals__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[7];

/* sealed */ struct libs__globals__vector_common_type_9_0_s {
  const MR_String libs__globals__vector_common_type_9_0__vct_9_f_0;
  const MR_Word libs__globals__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_9_0_s libs__globals_vector_common_9[4];

/* sealed */ struct libs__globals__vector_common_type_11_0_s {
  const MR_String libs__globals__vector_common_type_11_0__vct_11_f_0;
  const MR_Word libs__globals__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[4];

/* sealed */ struct libs__globals__vector_common_type_14_0_s {
  const MR_String libs__globals__vector_common_type_14_0__vct_14_f_0;
  const MR_Word libs__globals__vector_common_type_14_0__vct_14_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_14_0_s libs__globals_vector_common_14[5];

/* sealed */ struct libs__globals__vector_common_type_15_0_s {
  const MR_String libs__globals__vector_common_type_15_0__vct_15_f_0;
  const MR_Integer libs__globals__vector_common_type_15_0__vct_15_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_15_0_s libs__globals_vector_common_15[4];



static /* final */ const MR_Box libs__globals_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_clang_version_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__globals_scalar_common_12[1])),
    ((MR_Box) (libs__globals__convert_limit_error_contexts_acc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__globals_scalar_common_12[2])),
    ((MR_Box) (libs__globals__get_backend_foreign_languages_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_12[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_13[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__globals_scalar_common_12[0])),
    ((MR_Box) (libs__globals__convert_c_compiler_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 95))
  },
};


static /* final */ const struct libs__globals__vector_common_type_3_0_s libs__globals_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[12] = {
  /* row 0 */   {     (MR_String) "C" },
  /* row 1 */   {     (MR_String) "C#" },
  /* row 2 */   {     (MR_String) "Java" },
  /* row 3 */   {     (MR_String) "Erlang" },
  /* row 4 */   {     (MR_String) "C" },
  /* row 5 */   {     (MR_String) "C#" },
  /* row 6 */   {     (MR_String) "Java" },
  /* row 7 */   {     (MR_String) "Erlang" },
  /* row 8 */   {     (MR_String) "c" },
  /* row 9 */   {     (MR_String) "csharp" },
  /* row 10 */   {     (MR_String) "java" },
  /* row 11 */   {     (MR_String) "erlang" },
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[6] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 0 },
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[4] = {
  /* row 0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "erlang",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[6] = {
  /* row 0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "c sharp",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "c#",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "erlang",
    (MR_Integer) 3
  },
  /* row 5 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[7] = {
  /* row 0 */
  {
    (MR_String) "accurate",
    (MR_Integer) 5
  },
  /* row 1 */
  {
    (MR_String) "automatic",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "boehm",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "boehm_debug",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "conservative",
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_String) "hgc",
    (MR_Integer) 4
  },
  /* row 6 */
  {
    (MR_String) "none",
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__globals__vector_common_type_9_0_s libs__globals_vector_common_9[4] = {
  /* row 0 */
  {
    (MR_String) "num-data-elems",
    (MR_Integer) 2
  },
  /* row 1 */
  {
    (MR_String) "simple",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "size-data-elems",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "total",
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[4] = {
  /* row 0 */
  {
    (MR_String) "clang",
    (MR_Word) MR_mkword(MR_mktag(2), &libs__globals_scalar_common_10[0])
  },
  /* row 1 */
  {
    (MR_String) "gcc",
    (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[3])
  },
  /* row 2 */
  {
    (MR_String) "msvc",
    (MR_Word) MR_mkword(MR_mktag(3), &libs__globals_scalar_common_10[1])
  },
  /* row 3 */
  {
    (MR_String) "unknown",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
};

static /* final */ const struct libs__globals__vector_common_type_14_0_s libs__globals_vector_common_14[5] = {
  /* row 0 */
  {
    (MR_String) "cygwin",
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "msys",
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_String) "posix",
    (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "powershell",
    (MR_Integer) 4
  },
  /* row 4 */
  {
    (MR_String) "windows",
    (MR_Integer) 3
  },
};

static /* final */ const struct libs__globals__vector_common_type_15_0_s libs__globals_vector_common_15[4] = {
  /* row 0 */
  {
    (MR_String) "deep",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "default",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "none",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "shallow",
    (MR_Integer) 3
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.globals.mh"
#include "mdbcomp.rtti_access.mh"
#line 946 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 952 "globals.m"
MR_Word libs__globals__mutable_variable_extra_error_info;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 958 "globals.m"
MR_Word libs__globals__mutable_variable_some_errors_were_context_limited;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_some_errors_were_context_limited_lock;
#endif

#line 961 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 964 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 967 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 946 "globals.m"
void 
libs__globals__user_init_pred_0(void)
#line 946 "globals.m"
{
#line 946 "globals.m"
	libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0();
}

#line 952 "globals.m"
void 
libs__globals__user_init_pred_1(void)
#line 952 "globals.m"
{
#line 952 "globals.m"
	libs__globals__initialise_mutable_extra_error_info_0_p_0();
}

#line 958 "globals.m"
void 
libs__globals__user_init_pred_2(void)
#line 958 "globals.m"
{
#line 958 "globals.m"
	libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0();
}

#line 961 "globals.m"
void 
libs__globals__user_init_pred_3(void)
#line 961 "globals.m"
{
#line 961 "globals.m"
	libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0();
}

#line 964 "globals.m"
void 
libs__globals__user_init_pred_4(void)
#line 964 "globals.m"
{
#line 964 "globals.m"
	libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0();
}

#line 967 "globals.m"
void 
libs__globals__user_init_pred_5(void)
#line 967 "globals.m"
{
#line 967 "globals.m"
	libs__globals__initialise_mutable_maybe_source_file_map_0_p_0();
}


static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_0 = {
  (MR_String) "high_level_backend",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_1 = {
  (MR_String) "low_level_backend",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_backend_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_backend_0_0,
  &libs__globals__libs__globals__enum_functor_desc_backend_0_1
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_backend_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_backend_0_0,
  &libs__globals__libs__globals__enum_functor_desc_backend_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_backend_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_backend_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____backend_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____backend_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "backend",
  {     libs__globals__libs__globals__enum_name_ordered_backend_0 },
  {     libs__globals__libs__globals__enum_value_ordered_backend_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_backend_0
};

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3] = {
  (MR_String) "gcc_major_ver",
  (MR_String) "gcc_minor_ver",
  (MR_String) "gcc_patch_level"
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0 = {
  (MR_String) "cc_gcc",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_c_compiler_type_0_0,
  libs__globals__libs__globals__field_names_c_compiler_type_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_clang_version_0
  }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1 = {
  (MR_String) "cc_clang",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__globals__libs__globals__field_types_c_compiler_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2 = {
  (MR_String) "cc_cl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__globals__libs__globals__field_types_c_compiler_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3 = {
  (MR_String) "cc_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[1] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[4] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_c_compiler_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____c_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____c_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "c_compiler_type",
  {     libs__globals__libs__globals__du_name_ordered_c_compiler_type_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_c_compiler_type_0
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0 = {
  (MR_String) "clang_version",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_clang_version_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_clang_version_0_0
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_clang_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____clang_version_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____clang_version_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "clang_version",
  {     libs__globals__libs__globals__du_name_ordered_clang_version_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_clang_version_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_clang_version_0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0 = {
  (MR_String) "target_c",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1 = {
  (MR_String) "target_csharp",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2 = {
  (MR_String) "target_java",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3 = {
  (MR_String) "target_erlang",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_compilation_target_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_3,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_compilation_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____compilation_target_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____compilation_target_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "compilation_target",
  {     libs__globals__libs__globals__enum_name_ordered_compilation_target_0 },
  {     libs__globals__libs__globals__enum_value_ordered_compilation_target_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_compilation_target_0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0 = {
  (MR_String) "csharp_microsoft",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1 = {
  (MR_String) "csharp_mono",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2 = {
  (MR_String) "csharp_unknown",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____csharp_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____csharp_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "csharp_compiler_type",
  {     libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0 },
  {     libs__globals__libs__globals__enum_value_ordered_csharp_compiler_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0 = {
  (MR_String) "env_type_posix",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1 = {
  (MR_String) "env_type_cygwin",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2 = {
  (MR_String) "env_type_msys",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3 = {
  (MR_String) "env_type_win_cmd",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4 = {
  (MR_String) "env_type_powershell",
  (MR_Integer) 4
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5] = {
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_1,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_2,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_0,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_4,
  &libs__globals__libs__globals__enum_functor_desc_env_type_0_3
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_env_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____env_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____env_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "env_type",
  {     libs__globals__libs__globals__enum_name_ordered_env_type_0 },
  {     libs__globals__libs__globals__enum_value_ordered_env_type_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_env_type_0
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0 = {
  (MR_String) "install_cmd_user",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_file_install_cmd_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1 = {
  (MR_String) "install_cmd_cp",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_file_install_cmd_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1,
  &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_file_install_cmd_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_file_install_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____file_install_cmd_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____file_install_cmd_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "file_install_cmd",
  {     libs__globals__libs__globals__du_name_ordered_file_install_cmd_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_file_install_cmd_0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0 = {
  (MR_String) "lang_c",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1 = {
  (MR_String) "lang_csharp",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2 = {
  (MR_String) "lang_java",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3 = {
  (MR_String) "lang_erlang",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_foreign_language_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_3,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_foreign_language_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____foreign_language_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____foreign_language_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "foreign_language",
  {     libs__globals__libs__globals__enum_name_ordered_foreign_language_0 },
  {     libs__globals__libs__globals__enum_value_ordered_foreign_language_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_foreign_language_0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0 = {
  (MR_String) "gc_automatic",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1 = {
  (MR_String) "gc_none",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2 = {
  (MR_String) "gc_boehm",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3 = {
  (MR_String) "gc_boehm_debug",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4 = {
  (MR_String) "gc_hgc",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5 = {
  (MR_String) "gc_accurate",
  (MR_Integer) 5
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_5,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_3,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_4,
  &libs__globals__libs__globals__enum_functor_desc_gc_method_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_gc_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____gc_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____gc_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "gc_method",
  {     libs__globals__libs__globals__enum_name_ordered_gc_method_0 },
  {     libs__globals__libs__globals__enum_value_ordered_gc_method_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_gc_method_0
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_line_number_range_0
  }
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
  }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[20] = {
  (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_compilation_target_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_gc_method_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_tags_method_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_termination_norm_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_termination_norm_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_c_compiler_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_reuse_strategy_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_env_type_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_file_install_cmd_0,
  (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0
};

static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[20] = {
  (MR_String) "g_options",
  (MR_String) "g_op_mode",
  (MR_String) "g_target",
  (MR_String) "g_gc_method",
  (MR_String) "g_tags_method",
  (MR_String) "g_termination_norm",
  (MR_String) "g_termination2_norm",
  (MR_String) "g_trace_level",
  (MR_String) "g_trace_suppress_items",
  (MR_String) "g_ssdb_trace_level",
  (MR_String) "g_may_be_thread_safe",
  (MR_String) "g_c_compiler_type",
  (MR_String) "g_csharp_compiler_type",
  (MR_String) "g_reuse_strategy",
  (MR_String) "g_maybe_feedback",
  (MR_String) "g_host_env_type",
  (MR_String) "g_system_env_type",
  (MR_String) "g_target_env_type",
  (MR_String) "g_file_install_cmd",
  (MR_String) "g_limit_error_contexts_map"
};

static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[20] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 5,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 7,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 9,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 11,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 6,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0 = {
  (MR_String) "globals",
  (MR_Integer) 20,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_globals_0_0,
  libs__globals__libs__globals__field_names_globals_0_0,
  libs__globals__libs__globals__field_locns_globals_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_globals_0_0
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_globals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____globals_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____globals_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "globals",
  {     libs__globals__libs__globals__du_name_ordered_globals_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_globals_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_globals_0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_limit_error_contexts_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____limit_error_contexts_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____limit_error_contexts_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "limit_error_contexts_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0 = {
  (MR_String) "line_number_range",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_line_number_range_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_line_number_range_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____line_number_range_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____line_number_range_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "line_number_range",
  {     libs__globals__libs__globals__du_name_ordered_line_number_range_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_line_number_range_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_line_number_range_0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_may_be_thread_safe_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____may_be_thread_safe_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____may_be_thread_safe_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "may_be_thread_safe",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0 = {
  (MR_String) "same_cons_id",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1 = {
  (MR_String) "within_n_cells_difference",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__globals__libs__globals__field_types_reuse_strategy_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0,
  &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_reuse_strategy_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____reuse_strategy_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____reuse_strategy_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "reuse_strategy",
  {     libs__globals__libs__globals__du_name_ordered_reuse_strategy_0 },
  {     libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_reuse_strategy_0
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_source_file_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____source_file_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____source_file_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "source_file_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__globals__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1 = {
  (MR_String) "shallow",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2 = {
  (MR_String) "deep",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0,
  &libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____ssdb_trace_level_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ssdb_trace_level_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ssdb_trace_level",
  {     libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0 },
  {     libs__globals__libs__globals__enum_value_ordered_ssdb_trace_level_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_0 = {
  (MR_String) "tags_none",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_1 = {
  (MR_String) "tags_low",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_tags_method_0_2 = {
  (MR_String) "tags_high",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_tags_method_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_2,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_1,
  &libs__globals__libs__globals__enum_functor_desc_tags_method_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_tags_method_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_tags_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____tags_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____tags_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "tags_method",
  {     libs__globals__libs__globals__enum_name_ordered_tags_method_0 },
  {     libs__globals__libs__globals__enum_value_ordered_tags_method_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_tags_method_0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0 = {
  (MR_String) "norm_simple",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1 = {
  (MR_String) "norm_total",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2 = {
  (MR_String) "norm_num_data_elems",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3 = {
  (MR_String) "norm_size_data_elems",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_value_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4] = {
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3,
  &libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_termination_norm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____termination_norm_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____termination_norm_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "termination_norm",
  {     libs__globals__libs__globals__enum_name_ordered_termination_norm_0 },
  {     libs__globals__libs__globals__enum_value_ordered_termination_norm_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__globals__libs__globals__functor_number_map_termination_norm_0
};

static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__466__1_2_p_0(
  MR_Char HeadVar__1_11,
  MR_Char HeadVar__2_28)
{
  {
    MR_bool succeeded = (HeadVar__1_11 == HeadVar__2_28);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____tags_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____source_file_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;
    MR_Integer Var_7 = (MR_Integer) Cast_HeadVar1_4;
    MR_Integer Var_8 = (MR_Integer) Cast_HeadVar2_5;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_7, Var_8);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____line_number_range_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_1[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &libs__globals_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____globals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_63 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_64 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_63 == CastY_64);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 3);
      MR_Word ArgY3_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 3);
      MR_Word ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
      MR_Word ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
      MR_Word ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX10_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 3);
      MR_Word ArgY10_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 3);
      MR_Word ArgX11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY11_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY15_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX16_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
      MR_Word ArgY16_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 7);
      MR_Word ArgX17_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgY17_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgX18_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
      MR_Word ArgY18_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
      MR_Word ArgX19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgY19_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10)));
      MR_Word ArgX20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));
      MR_Word ArgY20_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11)));
      MR_Word Var_44;

      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[0], &Var_44, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_44 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_44;
      else
      {
        MR_Word Var_45;

        libs__op_mode____Compare____op_mode_0_0(&Var_45, ArgX2_6, ArgY2_7);
        succeeded = (Var_45 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_45;
        else
        {
          MR_Word Var_46;
          MR_Integer Var_85 = (MR_Integer) ArgX3_8;
          MR_Integer Var_86 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_46, Var_85, Var_86);
          succeeded = (Var_46 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_46;
          else
          {
            MR_Word Var_47;
            MR_Integer Var_87 = (MR_Integer) ArgX4_10;
            MR_Integer Var_88 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_47, Var_87, Var_88);
            succeeded = (Var_47 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_47;
            else
            {
              MR_Word Var_48;
              MR_Integer Var_89 = (MR_Integer) ArgX5_12;
              MR_Integer Var_90 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_48, Var_89, Var_90);
              succeeded = (Var_48 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_48;
              else
              {
                MR_Word Var_49;
                MR_Integer Var_91 = (MR_Integer) ArgX6_14;
                MR_Integer Var_92 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_49, Var_91, Var_92);
                succeeded = (Var_49 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_49;
                else
                {
                  MR_Word Var_50;
                  MR_Integer Var_93 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_94 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_50, Var_93, Var_94);
                  succeeded = (Var_50 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_50;
                  else
                  {
                    MR_Word Var_51;

                    libs__trace_params____Compare____trace_level_0_0(&Var_51, ArgX8_18, ArgY8_19);
                    succeeded = (Var_51 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_51;
                    else
                    {
                      MR_Word Var_52;

                      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[3], &Var_52, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_52 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_52;
                      else
                      {
                        MR_Word Var_53;
                        MR_Integer Var_95 = (MR_Integer) ArgX10_22;
                        MR_Integer Var_96 = (MR_Integer) ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_53, Var_95, Var_96);
                        succeeded = (Var_53 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_53;
                        else
                        {
                          MR_Word Var_54;
                          MR_Integer Var_97 = (MR_Integer) ArgX11_24;
                          MR_Integer Var_98 = (MR_Integer) ArgY11_25;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_54, Var_97, Var_98);
                          succeeded = (Var_54 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_54;
                          else
                          {
                            MR_Word Var_55;

                            libs__globals____Compare____c_compiler_type_0_0(&Var_55, ArgX12_26, ArgY12_27);
                            succeeded = (Var_55 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_55;
                            else
                            {
                              MR_Word Var_56;
                              MR_Integer Var_99 = (MR_Integer) ArgX13_28;
                              MR_Integer Var_100 = (MR_Integer) ArgY13_29;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_56, Var_99, Var_100);
                              succeeded = (Var_56 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_56;
                              else
                              {
                                MR_Word Var_57;

                                libs__globals____Compare____reuse_strategy_0_0(&Var_57, ArgX14_30, ArgY14_31);
                                succeeded = (Var_57 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_57;
                                else
                                {
                                  MR_Word Var_58;

                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[4], &Var_58, ((MR_Box) (ArgX15_32)), ((MR_Box) (ArgY15_33)));
                                  succeeded = (Var_58 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_58;
                                  else
                                  {
                                    MR_Word Var_59;
                                    MR_Integer Var_101 = (MR_Integer) ArgX16_34;
                                    MR_Integer Var_102 = (MR_Integer) ArgY16_35;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_59, Var_101, Var_102);
                                    succeeded = (Var_59 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_59;
                                    else
                                    {
                                      MR_Word Var_60;
                                      MR_Integer Var_103 = (MR_Integer) ArgX17_36;
                                      MR_Integer Var_104 = (MR_Integer) ArgY17_37;

                                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_60, Var_103, Var_104);
                                      succeeded = (Var_60 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        *HeadVar__1_1 = Var_60;
                                      else
                                      {
                                        MR_Word Var_61;
                                        MR_Integer Var_105 = (MR_Integer) ArgX18_38;
                                        MR_Integer Var_106 = (MR_Integer) ArgY18_39;

                                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_61, Var_105, Var_106);
                                        succeeded = (Var_61 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          *HeadVar__1_1 = Var_61;
                                        else
                                        {
                                          MR_Word Var_62;

                                          libs__globals____Compare____file_install_cmd_0_0(&Var_62, ArgX19_40, ArgY19_41);
                                          succeeded = (Var_62 == (MR_Integer) 0);
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                            *HeadVar__1_1 = Var_62;
                                          else
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (ArgX20_42)), ((MR_Box) (ArgY20_43)));
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_43 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_44 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_43 == CastY_44);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_48_48;
      MR_Word TypeInfo_49_49;
      MR_Word TypeInfo_50_50;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 3);
      MR_Word ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
      MR_Word ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
      MR_Word ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX10_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 3);
      MR_Word ArgY10_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 3);
      MR_Word ArgX11_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX15_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX16_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 7);
      MR_Word ArgY16_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
      MR_Word ArgX17_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgY17_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgX18_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
      MR_Word ArgY18_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
      MR_Word ArgX19_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10)));
      MR_Word ArgY19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10)));
      MR_Word ArgX20_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11)));
      MR_Word ArgY20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = libs__op_mode____Unify____op_mode_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX8_17, ArgY8_18);
                    if (succeeded)
                    {
                      TypeInfo_48_48 = (MR_Word) &libs__globals_scalar_common_1[3];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = libs__globals____Unify____c_compiler_type_0_0(ArgX12_25, ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = libs__globals____Unify____reuse_strategy_0_0(ArgX14_29, ArgY14_30);
                                if (succeeded)
                                {
                                  TypeInfo_49_49 = (MR_Word) &libs__globals_scalar_common_1[4];
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_35 == ArgY17_36);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_37 == ArgY18_38);
                                        if (succeeded)
                                        {
                                          succeeded = libs__globals____Unify____file_install_cmd_0_0(ArgX19_39, ArgY19_40);
                                          if (succeeded)
                                          {
                                            TypeInfo_50_50 = (MR_Word) &libs__globals_scalar_common_2[1];
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____gc_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____foreign_language_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_String ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_8, Var_18, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY2_7);
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4;
      MR_String ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
          succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____env_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____compilation_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____clang_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_46 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_47 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_46 == CastY_47);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_10;

                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &Var_10, ((MR_Box) (Var_57)), ((MR_Box) (ArgY1_5)));
                  succeeded = (Var_10 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_10;
                  else
                  {
                    MR_Word Var_11;

                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &Var_11, ((MR_Box) (Var_56)), ((MR_Box) (ArgY2_7)));
                    succeeded = (Var_11 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_11;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_55)), ((MR_Box) (ArgY3_9)));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Var_54)), ((MR_Box) (ArgY1_28)));
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_53)), ((MR_Box) (ArgY1_39)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_14 == CastX_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_19_19;
            MR_Word TypeInfo_20_20;
            MR_Word TypeInfo_21_21;
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              TypeInfo_19_19 = (MR_Word) &libs__globals_scalar_common_1[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) &libs__globals_scalar_common_1[1];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
                if (succeeded)
                {
                  TypeInfo_21_21 = (MR_Word) &libs__globals_scalar_common_1[1];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_18_18;
            MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_18_18 = (MR_Word) &libs__globals_scalar_common_1[2];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_17_17;
            MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_17_17 = (MR_Word) &libs__globals_scalar_common_1[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____backend_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____backend_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
libs__globals__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__lock_maybe_source_file_map_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__lock_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__initialise_mutable_maybe_source_file_map_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
libs__globals__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_source_file_map_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__unlock_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__lock_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
libs__globals__mutable_variable_disable_smart_recompilation = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_smart_recompilation_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_disable_smart_recompilation;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__unlock_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__lock_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
libs__globals__mutable_variable_disable_smart_recompilation = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
libs__globals__mutable_variable_some_errors_were_context_limited = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_some_errors_were_context_limited;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__unlock_some_errors_were_context_limited_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__lock_some_errors_were_context_limited_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__lock_some_errors_were_context_limited_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
libs__globals__mutable_variable_some_errors_were_context_limited = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_some_errors_were_context_limited_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_some_errors_were_context_limited_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_set_extra_error_info_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
libs__globals__mutable_variable_extra_error_info = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_extra_error_info;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__unlock_extra_error_info_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__lock_extra_error_info_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__lock_extra_error_info_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__initialise_mutable_extra_error_info_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0

	MR_Word X;

	X =  (MR_Integer) 0 ;
		{
libs__globals__mutable_variable_extra_error_info = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_extra_error_info_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_extra_error_info_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_extra_error_info_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

	X =  X_1 ;
		{
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__lock_maybe_from_ground_term_threshold_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__lock_maybe_from_ground_term_threshold_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0

	MR_Word X;

	X =  (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) ;
		{
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
  MR_String RangeStr_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word MaybeMin_4;
    MR_Word MaybeMax_5;
    MR_String MinStr_6;
    MR_String MaxStr_7;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_13;

    Var_10 = mercury__string__split_at_char_2_f_0((MR_Char) 45, RangeStr_3);
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      MinStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0)));
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        MaxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0)));
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 1)));
        succeeded = (Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (strcmp(MinStr_6, (MR_String) "") == 0);
          if (succeeded)
          {
            MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Min_8;

            succeeded = mercury__string__to_int_2_p_0(MinStr_6, &Min_8);
            if (succeeded)
            {
              {
                MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeMin_4, 0) = ((MR_Box) (Min_8));
              }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            succeeded = (strcmp(MaxStr_7, (MR_String) "") == 0);
            if (succeeded)
            {
              MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Integer Max_9;

              succeeded = mercury__string__to_int_2_p_0(MaxStr_7, &Max_9);
              if (succeeded)
              {
                {
                  MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeMax_5, 0) = ((MR_Box) (Max_9));
                }
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeMin_4));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeMax_5));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
libs__globals__convert_foreign_language_det_2_p_0(
  MR_String String_3,
  MR_Word * ForeignLang_4)
{
  {
    MR_bool succeeded;
    MR_Word ForeignLangPrime_5;

    succeeded = libs__globals__convert_foreign_language_2_p_0(String_3, &ForeignLangPrime_5);
    if (succeeded)
      *ForeignLang_4 = ForeignLangPrime_5;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.convert_foreign_language_det\'/2", (MR_String) "invalid foreign_language string");
        return;
      }
    }
  }
}

void MR_CALL 
libs__globals__io_set_maybe_source_file_map_3_p_0(
  MR_Word MaybeSourceFileMap_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0

	MR_Word X;

	X =  MaybeSourceFileMap_4 ;
		{
libs__globals__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_maybe_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_get_maybe_source_file_map_3_p_0(
  MR_Word * MaybeSourceFileMap_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	 *MaybeSourceFileMap_4  = X;
}
{
#define MR_PROC_LABEL libs__globals__io_get_maybe_source_file_map_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                    "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_set_disable_generate_item_version_numbers_3_p_0(
  MR_Word DisableItemVerions_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

	X =  DisableItemVerions_4 ;
		{
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(
  MR_Word * DisableItemVerions_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;


		;}
#undef MR_PROC_LABEL
	 *DisableItemVerions_4  = X;
}
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                    "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_set_disable_smart_recompilation_3_p_0(
  MR_Word DisableSmartRecomp_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0

	MR_Word X;

	X =  DisableSmartRecomp_4 ;
		{
libs__globals__mutable_variable_disable_smart_recompilation = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_get_disable_smart_recompilation_3_p_0(
  MR_Word * DisableSmartRecomp_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_disable_smart_recompilation;


		;}
#undef MR_PROC_LABEL
	 *DisableSmartRecomp_4  = X;
}
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                    "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_set_some_errors_were_context_limited_3_p_0(
  MR_Word SomeErrorsWereContextLimited_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0

	MR_Word X;

	X =  SomeErrorsWereContextLimited_4 ;
		{
libs__globals__mutable_variable_some_errors_were_context_limited = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_some_errors_were_context_limited_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_get_some_errors_were_context_limited_3_p_0(
  MR_Word * SomeErrorsWereContextLimited_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_some_errors_were_context_limited;


		;}
#undef MR_PROC_LABEL
	 *SomeErrorsWereContextLimited_4  = X;
}
{
#define MR_PROC_LABEL libs__globals__io_get_some_errors_were_context_limited_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_some_errors_were_context_limited_lock,
                    "libs__globals__mutable_variable_some_errors_were_context_limited_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_set_extra_error_info_3_p_0(
  MR_Word ExtraErrorInfo_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0

	MR_Word X;

	X =  ExtraErrorInfo_4 ;
		{
libs__globals__mutable_variable_extra_error_info = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_extra_error_info_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__io_get_extra_error_info_3_p_0(
  MR_Word * ExtraErrorInfo_4)
{
  {
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_extra_error_info;


		;}
#undef MR_PROC_LABEL
	 *ExtraErrorInfo_4  = X;
}
{
#define MR_PROC_LABEL libs__globals__io_get_extra_error_info_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                    "libs__globals__mutable_variable_extra_error_info_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

MR_Word MR_CALL 
libs__globals__get_maybe_from_ground_term_threshold_0_f_0(void)
{
  {
    MR_Word MaybeThreshold_2;

{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;


		;}
#undef MR_PROC_LABEL
	 MaybeThreshold_2  = X;
}
{
#define MR_PROC_LABEL libs__globals__get_maybe_from_ground_term_threshold_0_f_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    return MaybeThreshold_2;
  }
}

void MR_CALL 
libs__globals__globals_init_mutables_3_p_0(
  MR_Word Globals_4)
{
  {
    MR_Integer FromGroundTermThreshold_6;
    MR_Word Var_10;

    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 352, &FromGroundTermThreshold_6);
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (FromGroundTermThreshold_6));
    }
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X =  Var_10 ;
		{
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                    "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__globals__double_width_floats_on_det_stack_2_p_0(
  MR_Word Globals_3,
  MR_Word * FloatDwords_4)
{
  {
    MR_bool succeeded;
    MR_Integer TargetWordBits_5;
    MR_Word SinglePrecFloat_6;

    libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 251, &TargetWordBits_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 235, &SinglePrecFloat_6);
    succeeded = (TargetWordBits_5 == (MR_Integer) 64);
    if (succeeded)
      *FloatDwords_4 = (MR_Integer) 0;
    else
    {
      succeeded = (TargetWordBits_5 == (MR_Integer) 32);
      if (succeeded)
        switch (SinglePrecFloat_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *FloatDwords_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *FloatDwords_4 = (MR_Integer) 0;
            break;
        }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.double_width_floats_on_det_stack\'/2", (MR_String) "bits_per_word not 32 or 64");
          return;
        }
      }
    }
  }
}

void MR_CALL 
libs__globals__get_any_intermod_2_p_0(
  MR_Word Globals_3,
  MR_Word * AnyIntermod_4)
{
  {
    MR_Word IntermodOpt_5;
    MR_Word IntermodAnalysis_6;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 332, &IntermodOpt_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 337, &IntermodAnalysis_6);
    *AnyIntermod_4 = mercury__bool__or_2_f_0(IntermodOpt_5, IntermodAnalysis_6);
  }
}

void MR_CALL 
libs__globals__current_grade_supports_concurrency_2_p_0(
  MR_Word Globals_3,
  MR_Word * ThreadsSupported_4)
{
  {
    MR_Word Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));

    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HighLevelCode_6;

          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 264, &HighLevelCode_6);
          switch (HighLevelCode_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ThreadsSupported_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 227, ThreadsSupported_4);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *ThreadsSupported_4 = (MR_Integer) 1;
        break;
    }
  }
}

void MR_CALL 
libs__globals__current_grade_supports_par_conj_2_p_0(
  MR_Word Globals_3,
  MR_Word * ParConjSupported_4)
{
  {
    MR_bool succeeded;
    MR_Word Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word HighLevelCode_6;
    MR_Word Parallel_7;
    MR_Word UseTrail_8;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 264, &HighLevelCode_6);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 227, &Parallel_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 229, &UseTrail_8);
    succeeded = (Target_5 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (HighLevelCode_6 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Parallel_7 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_8 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      *ParConjSupported_4 = (MR_Integer) 1;
    else
      *ParConjSupported_4 = (MR_Integer) 0;
  }
}

void MR_CALL 
libs__globals__current_grade_supports_tabling_2_p_0(
  MR_Word Globals_3,
  MR_Word * TablingSupported_4)
{
  {
    MR_bool succeeded;
    MR_Word Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word GC_Method_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word HighLevelData_7;
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 265, &HighLevelData_7);
    succeeded = (Target_5 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (GC_Method_6 == (MR_Integer) 5);
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = (HighLevelData_7 == (MR_Integer) 0);
    }
    if (succeeded)
      *TablingSupported_4 = (MR_Integer) 1;
    else
      *TablingSupported_4 = (MR_Integer) 0;
  }
}

void MR_CALL 
libs__globals__want_return_var_layouts_2_p_0(
  MR_Word Globals_3,
  MR_Word * WantReturnLayouts_4)
{
  {
    MR_bool succeeded;

    {
      MR_Word GC_Method_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
      MR_Word Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
      MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
      MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
      MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
      MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
      MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));

      succeeded = (GC_Method_5 == (MR_Integer) 5);
    }
    if (!(succeeded))
    {
      MR_Word TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word TraceSuppress_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
      MR_Word Var_8;
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
      MR_Word Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
      MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
      MR_Word Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word Var_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
      MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
      MR_Word Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
      MR_Word Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));

      Var_8 = libs__trace_params__trace_needs_return_info_2_f_0(TraceLevel_6, TraceSuppress_7);
      succeeded = (Var_8 == (MR_Integer) 1);
    }
    if (succeeded)
      *WantReturnLayouts_4 = (MR_Integer) 1;
    else
      *WantReturnLayouts_4 = (MR_Integer) 0;
  }
}

MR_Word MR_CALL 
libs__globals__lookup_current_backend_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word CurrentBackend_4;
    MR_Word HighLevel_5;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 264, &HighLevel_5);
    switch (HighLevel_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CurrentBackend_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        CurrentBackend_4 = (MR_Integer) 0;
        break;
    }
    return CurrentBackend_4;
  }
}

void MR_CALL 
libs__globals__lookup_maybe_string_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_7;
    MR_Word OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_7;
    MR_Word MaybeString_8;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_31, ((MR_Box) (Option_5)), &conv0_OptionData_7);
    OptionData_7 = ((MR_Word) conv0_OptionData_7);
    succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      MaybeString_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 1)));
      *Value_6 = MaybeString_8;
    }
    else
    {
      MR_String Var_11;
      MR_String Var_15;
      MR_String Var_18;
      MR_String Var_23;
      MR_String Var_25;
      MR_String Var_26;

      Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (Option_5)));
      Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (OptionData_7)));
      Var_23 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_23);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_15, Var_25);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid maybe_string option (", Var_26);
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", Var_11);
        return;
      }
    }
  }
}

void MR_CALL 
libs__globals__lookup_string_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_String * Value_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_7;
    MR_Word OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_7;
    MR_String String_8;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_31, ((MR_Box) (Option_5)), &conv0_OptionData_7);
    OptionData_7 = ((MR_Word) conv0_OptionData_7);
    succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 1)));
      *Value_6 = String_8;
    }
    else
    {
      MR_String Var_11;
      MR_String Var_15;
      MR_String Var_18;
      MR_String Var_23;
      MR_String Var_25;
      MR_String Var_26;

      Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (Option_5)));
      Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (OptionData_7)));
      Var_23 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_23);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_15, Var_25);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid string option (", Var_26);
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_string_option\'/3", Var_11);
        return;
      }
    }
  }
}

void MR_CALL 
libs__globals__lookup_maybe_int_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_7;
    MR_Word OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_7;
    MR_Word MaybeInt_8;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_31, ((MR_Box) (Option_5)), &conv0_OptionData_7);
    OptionData_7 = ((MR_Word) conv0_OptionData_7);
    succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      MaybeInt_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 1)));
      *Value_6 = MaybeInt_8;
    }
    else
    {
      MR_String Var_11;
      MR_String Var_15;
      MR_String Var_18;
      MR_String Var_23;
      MR_String Var_25;
      MR_String Var_26;

      Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (Option_5)));
      Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (OptionData_7)));
      Var_23 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_23);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_15, Var_25);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid maybe_int option (", Var_26);
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_int_option\'/3", Var_11);
        return;
      }
    }
  }
}

void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Integer * Value_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_7;
    MR_Word OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_7;
    MR_Integer Int_8;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_31, ((MR_Box) (Option_5)), &conv0_OptionData_7);
    OptionData_7 = ((MR_Word) conv0_OptionData_7);
    succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), OptionData_7, (MR_Integer) 0)));
      *Value_6 = Int_8;
    }
    else
    {
      MR_String Var_11;
      MR_String Var_15;
      MR_String Var_18;
      MR_String Var_23;
      MR_String Var_25;
      MR_String Var_26;

      Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (Option_5)));
      Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (OptionData_7)));
      Var_23 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_23);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_15, Var_25);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid int option (", Var_26);
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_int_option\'/3", Var_11);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word Value_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_7;
    MR_Word OptionTable_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_7;
    MR_Word Bool_8;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_25, ((MR_Box) (Option_5)), &conv0_OptionData_7);
    OptionData_7 = ((MR_Word) conv0_OptionData_7);
    succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionData_7, (MR_Integer) 0)));
      succeeded = (Value_6 == Bool_8);
    }
    else
    {
      MR_String Var_11;
      MR_String Var_15;
      MR_String Var_18;
      MR_String Var_49;
      MR_String Var_51;
      MR_String Var_52;

      Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (Option_5)));
      Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (OptionData_7)));
      Var_49 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
      Var_51 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_49);
      Var_52 = mercury__string__f_43_43_2_f_0(Var_15, Var_51);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid bool option (", Var_52);
      mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", Var_11);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_7;
    MR_Word OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_7;
    MR_Word Bool_8;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_31, ((MR_Box) (Option_5)), &conv0_OptionData_7);
    OptionData_7 = ((MR_Word) conv0_OptionData_7);
    succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionData_7, (MR_Integer) 0)));
      *Value_6 = Bool_8;
    }
    else
    {
      MR_String Var_11;
      MR_String Var_15;
      MR_String Var_18;
      MR_String Var_23;
      MR_String Var_25;
      MR_String Var_26;

      Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (Option_5)));
      Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (OptionData_7)));
      Var_23 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_23);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_15, Var_25);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid bool option (", Var_26);
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", Var_11);
        return;
      }
    }
  }
}

void MR_CALL 
libs__globals__lookup_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * OptionData_6)
{
  {
    MR_Word OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_6;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_7, ((MR_Box) (Option_5)), &conv0_OptionData_6);
    *OptionData_6 = ((MR_Word) conv0_OptionData_6);
  }
}

void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
  MR_Word FileInstallCmd_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_18 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (FileInstallCmd_4));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
  MR_Word MaybeFeedback_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_18 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MaybeFeedback_4));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
  MR_Word SSTraceLevel_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((SSTraceLevel_4 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_4,
  MR_Word * STATE_VARIABLE_Globals_5)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_15;

    Var_7 = libs__trace_params__trace_level_none_0_f_0();
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 0)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)));
    Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)));
    Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 5)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 6)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 7)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)));
    Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 10)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_4, (MR_Integer) 11)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_10 | ((((Var_11 << (MR_Integer) 2)) | ((((Var_12 << (MR_Integer) 5)) | ((((Var_13 << (MR_Integer) 7)) | ((((Var_14 << (MR_Integer) 9)) | ((Var_7 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_17 | ((Var_18 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_23 | ((((Var_24 << (MR_Integer) 3)) | ((Var_25 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_27));
    }
  }
}

void MR_CALL 
libs__globals__set_trace_level_3_p_0(
  MR_Word TraceLevel_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((TraceLevel_4 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_18 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_tags_method_3_p_0(
  MR_Word Tags_Method_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Tags_Method_4 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_18 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_gc_method_3_p_0(
  MR_Word GC_Method_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((GC_Method_4 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_18 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_op_mode_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OpMode_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_18 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_options_3_p_0(
  MR_Word Options_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Options_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_11 | ((((Var_12 << (MR_Integer) 2)) | ((((Var_13 << (MR_Integer) 5)) | ((((Var_14 << (MR_Integer) 7)) | ((((Var_15 << (MR_Integer) 9)) | ((Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_18 | ((Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_24 | ((((Var_25 << (MR_Integer) 3)) | ((Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_option_4_p_0(
  MR_Word Option_5,
  MR_Word OptionData_6,
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  {
    MR_Word OptionTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
    MR_Word OptionTable_9;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)));
    MR_Word Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
    MR_Word Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_40;

    mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (Option_5)), ((MR_Box) (OptionData_6)), OptionTable0_8, &OptionTable_9);
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)));
    Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) & (MR_Integer) 3);
    Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)));
    Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
    Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Globals_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Var_42 | ((((Var_43 << (MR_Integer) 2)) | ((((Var_44 << (MR_Integer) 5)) | ((((Var_45 << (MR_Integer) 7)) | ((((Var_46 << (MR_Integer) 9)) | ((Var_47 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((Var_49 | ((Var_50 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((Var_55 | ((((Var_56 << (MR_Integer) 3)) | ((Var_57 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_59));
    }
  }
}

void MR_CALL 
libs__globals__get_limit_error_contexts_map_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_trace_level_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_tags_method_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_gc_method_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

static void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ForeignLang_4;

    libs__globals__convert_foreign_language_det_2_p_0(((MR_String) wrapper_arg_1), &conv0_ForeignLang_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_ForeignLang_4));
  }
}

void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
  MR_Word Globals_3,
  MR_Word * ForeignLangs_4)
{
  {
    MR_Word LangStrs_5;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 271, &LangStrs_5);
    mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &libs__globals_scalar_common_2[5], LangStrs_5, ForeignLangs_4);
  }
}

void MR_CALL 
libs__globals__lookup_accumulating_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_7;
    MR_Word OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 1)));
    MR_Word Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 3)));
    MR_Word Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 6)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 7)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 8)));
    MR_Word Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 10)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_4, (MR_Integer) 11)));
    MR_Box conv0_OptionData_7;
    MR_Word Accumulating_8;

    mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_31, ((MR_Box) (Option_5)), &conv0_OptionData_7);
    OptionData_7 = ((MR_Word) conv0_OptionData_7);
    succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionData_7, (MR_Integer) 1)));
      *Value_6 = Accumulating_8;
    }
    else
    {
      MR_String Var_11;
      MR_String Var_15;
      MR_String Var_18;
      MR_String Var_23;
      MR_String Var_25;
      MR_String Var_26;

      Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (Option_5)));
      Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (OptionData_7)));
      Var_23 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_23);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_15, Var_25);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid accumulating option (", Var_26);
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", Var_11);
        return;
      }
    }
  }
}

void MR_CALL 
libs__globals__get_target_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_op_mode_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_options_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    *HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 0)));
    Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 1)));
    Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 3)));
    Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 5)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 6)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 7)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 8)));
    Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 10)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__globals_init_21_p_0(
  MR_Word Options_22,
  MR_Word OpMode_23,
  MR_Word Target_24,
  MR_Word GC_Method_25,
  MR_Word TagsMethod_26,
  MR_Word TerminationNorm_27,
  MR_Word Termination2Norm_28,
  MR_Word TraceLevel_29,
  MR_Word TraceSuppress_30,
  MR_Word SSTraceLevel_31,
  MR_Word MaybeThreadSafe_32,
  MR_Word C_CompilerType_33,
  MR_Word CSharp_CompilerType_34,
  MR_Word ReuseStrategy_35,
  MR_Word MaybeFeedback_36,
  MR_Word HostEnvType_37,
  MR_Word SystemEnvType_38,
  MR_Word TargetEnvType_39,
  MR_Word FileInstallCmd_40,
  MR_Word LimitErrorContextsMap_41,
  MR_Word * Globals_42)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
    *Globals_42 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Options_22));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OpMode_23));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((Target_24 | ((((GC_Method_25 << (MR_Integer) 2)) | ((((TagsMethod_26 << (MR_Integer) 5)) | ((((TerminationNorm_27 << (MR_Integer) 7)) | ((((Termination2Norm_28 << (MR_Integer) 9)) | ((TraceLevel_29 << (MR_Integer) 11)))))))))))));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TraceSuppress_30));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((SSTraceLevel_31 | ((MaybeThreadSafe_32 << (MR_Integer) 2)))));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (C_CompilerType_33));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (CSharp_CompilerType_34));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ReuseStrategy_35));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MaybeFeedback_36));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((HostEnvType_37 | ((((SystemEnvType_38 << (MR_Integer) 3)) | ((TargetEnvType_39 << (MR_Integer) 6)))))));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (FileInstallCmd_40));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (LimitErrorContextsMap_41));
  }
}

void MR_CALL 
libs__globals__convert_limit_error_contexts_3_p_0(
  MR_Word Options_4,
  MR_Word * BadOptions_5,
  MR_Word * Map_6)
{
  {
    MR_Word TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word RevBadOptions_7;
    MR_Word Var_9;

    Var_9 = mercury__map__init_0_f_0(TypeCtorInfo_10_10, (MR_Word) &libs__globals_scalar_common_1[0]);
    libs__globals__convert_limit_error_contexts_acc_5_p_0(Options_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevBadOptions_7, Var_9, Map_6);
    mercury__list__reverse_2_p_0(TypeCtorInfo_10_10, RevBadOptions_7, BadOptions_5);
  }
}

static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = libs__globals__convert_line_number_range_2_p_0(((MR_String) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevBadOptions_0_2,
  MR_Word * STATE_VARIABLE_RevBadOptions_3,
  MR_Word STATE_VARIABLE_Map_0_4,
  MR_Word * STATE_VARIABLE_Map_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Map_5 = STATE_VARIABLE_Map_0_4;
      *STATE_VARIABLE_RevBadOptions_3 = STATE_VARIABLE_RevBadOptions_0_2;
    }
    else
    {
      MR_String Option_12 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Options_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word OptionChars_16;
      MR_Word RevOptionChars_17;
      MR_Word LineRangeChars_18;
      MR_Word RevFileNameChars_19;
      MR_String FileName_20;
      MR_String LineRangeStr_21;
      MR_Word STATE_VARIABLE_Map_31_31;
      MR_Word STATE_VARIABLE_RevBadOptions_32_32;
      MR_Word LineNumberRanges_23;
      MR_Word LineRangeStrs_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevBadOptions_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_4;

      mercury__string__to_char_list_2_p_0(Option_12, &OptionChars_16);
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, OptionChars_16, &RevOptionChars_17);
      libs__globals__find_file_name_and_line_range_chars_4_p_0(RevOptionChars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &LineRangeChars_18, &RevFileNameChars_19);
      FileName_20 = mercury__string__from_rev_char_list_1_f_0(RevFileNameChars_19);
      LineRangeStr_21 = mercury__string__from_char_list_1_f_0(LineRangeChars_18);
      LineRangeStrs_22 = mercury__string__split_at_char_2_f_0((MR_Char) 44, LineRangeStr_21);
      succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_line_number_range_0, (MR_Word) &libs__globals_scalar_common_2[4], LineRangeStrs_22, &LineNumberRanges_23);
      if (succeeded)
      {
        mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals_scalar_common_1[0], ((MR_Box) (FileName_20)), ((MR_Box) (LineNumberRanges_23)), STATE_VARIABLE_Map_0_4, &STATE_VARIABLE_Map_31_31);
        STATE_VARIABLE_RevBadOptions_32_32 = STATE_VARIABLE_RevBadOptions_0_2;
      }
      else
      {
        {
          STATE_VARIABLE_RevBadOptions_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevBadOptions_32_32, 0) = ((MR_Box) (Option_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevBadOptions_32_32, 1) = ((MR_Box) (STATE_VARIABLE_RevBadOptions_0_2));
        }
        STATE_VARIABLE_Map_31_31 = STATE_VARIABLE_Map_0_4;
      }
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = Options_13;
      next_value_of_STATE_VARIABLE_RevBadOptions_0_2 = STATE_VARIABLE_RevBadOptions_32_32;
      next_value_of_STATE_VARIABLE_Map_0_4 = STATE_VARIABLE_Map_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevBadOptions_0_2 = next_value_of_STATE_VARIABLE_RevBadOptions_0_2;
      STATE_VARIABLE_Map_0_4 = next_value_of_STATE_VARIABLE_Map_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LineRangeChars_0_2,
  MR_Word * STATE_VARIABLE_LineRangeChars_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_LineRangeChars_3 = STATE_VARIABLE_LineRangeChars_0_2;
    }
    else
    {
      MR_Char RevChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word RevChars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      succeeded = (RevChar_8 == (MR_Char) 58);
      if (succeeded)
      {
        *HeadVar__4_4 = RevChars_9;
        *STATE_VARIABLE_LineRangeChars_3 = STATE_VARIABLE_LineRangeChars_0_2;
      }
      else
      {
        MR_Word STATE_VARIABLE_LineRangeChars_14_14;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_LineRangeChars_0_2;

        {
          STATE_VARIABLE_LineRangeChars_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_LineRangeChars_14_14, 0) = ((MR_Box) (MR_Word) (RevChar_8));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_LineRangeChars_14_14, 1) = ((MR_Box) (STATE_VARIABLE_LineRangeChars_0_2));
        }
        /* direct tailcall eliminated */
        next_value_of_HeadVar__1_1 = RevChars_9;
        next_value_of_STATE_VARIABLE_LineRangeChars_0_2 = STATE_VARIABLE_LineRangeChars_14_14;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_LineRangeChars_0_2 = next_value_of_STATE_VARIABLE_LineRangeChars_0_2;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
libs__globals__convert_ssdb_trace_level_3_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    /* binary string jump switch */
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_15[0 + mid_2]))->libs__globals__vector_common_type_15_0__vct_15_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        switch (((&libs__globals_vector_common_15[0 + mid_2]))->libs__globals__vector_common_type_15_0__vct_15_f_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* case "deep" */
              *HeadVar__3_3 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              /* case "default" */
              switch (HeadVar__2_2) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__3_3 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__3_3 = (MR_Integer) 2;
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              /* case "none" */
              *HeadVar__3_3 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              /* case "shallow" */
              *HeadVar__3_3 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            break;
        }
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 4;
    MR_Integer mid_2;
    MR_Integer result_3;

    /* binary string simple lookup switch */
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_14[0 + mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *HeadVar__2_2 = ((&libs__globals_vector_common_14[0 + mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_1;
        succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
  MR_String HeadVar__1_1,
  MR_Integer NCells_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__1_1, (MR_String) "same_cons_id") == 0))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NCells_2));
      }
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__1_1, (MR_String) "mono") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "unknown") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 2;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "microsoft") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__466__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
  MR_String CC_Str_3,
  MR_Word * C_CompilerType_4)
{
  {
    MR_bool succeeded;
    MR_Word C_CompilerType0_5;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    /* binary string simple lookup switch */
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(CC_Str_3, ((&libs__globals_vector_common_11[0 + mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        C_CompilerType0_5 = ((&libs__globals_vector_common_11[0 + mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_1;
        succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    if (succeeded)
    {
      *C_CompilerType_4 = C_CompilerType0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Tokens_13;
      MR_String Major_14;
      MR_String Minor_15;
      MR_String Patch_16;
      MR_String Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;

      Tokens_13 = mercury__string__words_separator_2_f_0((MR_Word) &libs__globals_scalar_common_13[0], CC_Str_3);
      succeeded = ((MR_tag((MR_Word) Tokens_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_20 = ((MR_String) (MR_hl_field(MR_mktag(1), Tokens_13, (MR_Integer) 0)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tokens_13, (MR_Integer) 1)));
        succeeded = (strcmp(Var_20, (MR_String) "gcc") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Major_14 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0)));
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Minor_15 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0)));
              Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Patch_16 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0)));
                Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1)));
                succeeded = (Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        succeeded = (strcmp(Major_14, (MR_String) "u") == 0);
        if (succeeded)
        {
          succeeded = (strcmp(Minor_15, (MR_String) "u") == 0);
          if (succeeded)
            succeeded = (strcmp(Patch_16, (MR_String) "u") == 0);
        }
        if (succeeded)
        {
          *C_CompilerType_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[3]);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer Major_42;
          MR_Integer Var_48;

          succeeded = mercury__string__to_int_2_p_0(Major_14, &Major_42);
          if (succeeded)
          {
            Var_48 = (MR_Integer) 2;
            succeeded = (Major_42 >= Var_48);
          }
          if (succeeded)
          {
            succeeded = (strcmp(Minor_15, (MR_String) "u") == 0);
            if (succeeded)
            {
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Major_42));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *C_CompilerType_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Integer Minor_43;
              MR_Integer Var_52;

              succeeded = mercury__string__to_int_2_p_0(Minor_15, &Minor_43);
              if (succeeded)
              {
                Var_52 = (MR_Integer) 0;
                succeeded = (Minor_43 >= Var_52);
              }
              if (succeeded)
              {
                succeeded = (strcmp(Patch_16, (MR_String) "u") == 0);
                if (succeeded)
                {
                  MR_Word Var_53;
                  MR_Word Var_54;

                  {
                    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Major_42));
                  }
                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Minor_43));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *C_CompilerType_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_54));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Integer Patch_44;
                  MR_Integer Var_56;

                  succeeded = mercury__string__to_int_2_p_0(Patch_16, &Patch_44);
                  if (succeeded)
                  {
                    Var_56 = (MR_Integer) 0;
                    succeeded = (Patch_44 >= Var_56);
                  }
                  if (succeeded)
                  {
                    MR_Word Var_57;
                    MR_Word Var_58;
                    MR_Word Var_59;

                    {
                      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Major_42));
                    }
                    {
                      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Minor_43));
                    }
                    {
                      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Patch_44));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *C_CompilerType_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_57));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_58));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_59));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = mercury__builtin__false_0_p_0();
                }
              }
              else
                succeeded = mercury__builtin__false_0_p_0();
            }
          }
          else
            succeeded = mercury__builtin__false_0_p_0();
        }
      }
      else
      {
        MR_String Major_33;
        MR_String Minor_34;
        MR_String Patch_35;
        MR_String Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;

        succeeded = ((MR_tag((MR_Word) Tokens_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), Tokens_13, (MR_Integer) 0)));
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tokens_13, (MR_Integer) 1)));
          succeeded = (strcmp(Var_25, (MR_String) "clang") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Major_33 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Minor_34 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0)));
                Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Patch_35 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0)));
                  Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1)));
                  succeeded = (Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Integer Major_64;
          MR_Integer Minor_65;
          MR_Integer Patch_66;
          MR_Word ClangVersion_67;
          MR_Integer Var_68;
          MR_Integer Var_69;
          MR_Integer Var_70;
          MR_Word Var_71;

          succeeded = mercury__string__to_int_2_p_0(Major_33, &Major_64);
          if (succeeded)
          {
            succeeded = mercury__string__to_int_2_p_0(Minor_34, &Minor_65);
            if (succeeded)
            {
              succeeded = mercury__string__to_int_2_p_0(Patch_35, &Patch_66);
              if (succeeded)
              {
                Var_68 = (MR_Integer) 0;
                succeeded = (Major_64 >= Var_68);
                if (succeeded)
                {
                  Var_69 = (MR_Integer) 0;
                  succeeded = (Minor_65 >= Var_69);
                  if (succeeded)
                  {
                    Var_70 = (MR_Integer) 0;
                    succeeded = (Patch_66 >= Var_70);
                    if (succeeded)
                    {
                      {
                        ClangVersion_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ClangVersion_67, 0) = ((MR_Box) (Major_64));
                        MR_hl_field(MR_mktag(0), ClangVersion_67, 1) = ((MR_Box) (Minor_65));
                        MR_hl_field(MR_mktag(0), ClangVersion_67, 2) = ((MR_Box) (Patch_66));
                      }
                      {
                        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ClangVersion_67));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *C_CompilerType_4 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_71));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          MR_String Version_17;
          MR_String Var_30;
          MR_Word Var_31;
          MR_Word Var_32;

          succeeded = ((MR_tag((MR_Word) Tokens_13)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_30 = ((MR_String) (MR_hl_field(MR_mktag(1), Tokens_13, (MR_Integer) 0)));
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Tokens_13, (MR_Integer) 1)));
            succeeded = (strcmp(Var_30, (MR_String) "msvc") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Version_17 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0)));
                Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1)));
                succeeded = (Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
          if (succeeded)
          {
            MR_Integer Version_74;
            MR_Integer Var_75;
            MR_Word Var_76;

            succeeded = mercury__string__to_int_2_p_0(Version_17, &Version_74);
            if (succeeded)
            {
              Var_75 = (MR_Integer) 0;
              succeeded = (Version_74 > Var_75);
              if (succeeded)
              {
                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Version_74));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *C_CompilerType_4 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_76));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          else
            succeeded = mercury__builtin__false_0_p_0();
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__1_1, (MR_String) "no") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "yes") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    /* binary string simple lookup switch */
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_9[0 + mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *HeadVar__2_2 = ((&libs__globals_vector_common_9[0 + mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_1;
        succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_tags_method_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__1_1, (MR_String) "low") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "high") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 2;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "none") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 6;
    MR_Integer mid_2;
    MR_Integer result_3;

    /* binary string simple lookup switch */
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_8[0 + mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *HeadVar__2_2 = ((&libs__globals_vector_common_8[0 + mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_1;
        succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
  MR_String String_3,
  MR_Word * ForeignLanguage_4)
{
  {
    MR_bool succeeded;
    MR_String Var_5;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    Var_5 = mercury__string__to_lower_1_f_0(String_3);
    /* binary string simple lookup switch */
    lo_0 = (MR_Integer) 0;
    hi_1 = (MR_Integer) 5;
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(Var_5, ((&libs__globals_vector_common_7[0 + mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *ForeignLanguage_4 = ((&libs__globals_vector_common_7[0 + mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_1;
        succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
  MR_String String_3,
  MR_Word * Target_4)
{
  {
    MR_bool succeeded;
    MR_String Var_5;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    Var_5 = mercury__string__to_lower_1_f_0(String_3);
    /* binary string simple lookup switch */
    lo_0 = (MR_Integer) 0;
    hi_1 = (MR_Integer) 3;
    do
    {
      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(Var_5, ((&libs__globals_vector_common_6[0 + mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        *Target_4 = ((&libs__globals_vector_common_6[0 + mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_1;
        succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (mid_2 - (MR_Integer) 1);
      else
        lo_0 = (mid_2 + (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__globals_vector_common_5[0 + HeadVar__1_1]))->libs__globals__vector_common_type_5_0__vct_5_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&libs__globals_vector_common_4[8 + HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
libs__globals__foreign_language_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&libs__globals_vector_common_4[4 + HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
libs__globals__compilation_target_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&libs__globals_vector_common_4[0 + HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__globals__target_lang_to_foreign_export_lang_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__globals_vector_common_3[0 + HeadVar__1_1]))->libs__globals__vector_common_type_3_0__vct_3_f_0;

    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____backend_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____backend_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____c_compiler_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____clang_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____compilation_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____csharp_compiler_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____env_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____file_install_cmd_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____foreign_language_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____gc_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____globals_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____globals_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____limit_error_contexts_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____limit_error_contexts_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____line_number_range_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____line_number_range_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____may_be_thread_safe_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____reuse_strategy_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____source_file_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____source_file_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____ssdb_trace_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____tags_method_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____tags_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__globals____Compare____termination_norm_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__globals__init(void)
{
}

void mercury__libs__globals__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_backend_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_c_compiler_type_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_clang_version_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_compilation_target_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_env_type_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_file_install_cmd_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_foreign_language_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_gc_method_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_globals_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_limit_error_contexts_map_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_line_number_range_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_may_be_thread_safe_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_reuse_strategy_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_source_file_map_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_tags_method_0);
	MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_termination_norm_0);
}

void mercury__libs__globals__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__globals__required_init(void)
{
	libs__globals__user_init_pred_0();
	libs__globals__user_init_pred_1();
	libs__globals__user_init_pred_2();
	libs__globals__user_init_pred_3();
	libs__globals__user_init_pred_4();
	libs__globals__user_init_pred_5();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__globals__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module libs.globals. */
