/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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
#include "check_hlds.unify_proc.mih"
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
libs__globals____Unify____backend_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____backend_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__466__1_2_p_0(
  MR_Char libs__globals__HeadVar__1_11,
  MR_Char libs__globals__HeadVar__2_28);

static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
  MR_Word libs__globals__X_1);

static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
  MR_Word * libs__globals__X_1);

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
  MR_Word libs__globals__X_1);

static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
  MR_Word * libs__globals__X_1);

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
  MR_Word libs__globals__X_1);

static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
  MR_Word * libs__globals__X_1);

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
  MR_Word libs__globals__X_1);

static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
  MR_Word * libs__globals__X_1);

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
  MR_Word libs__globals__X_1);

static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
  MR_Word * libs__globals__X_1);

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
  MR_Word libs__globals__X_1);

static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
  MR_Word * libs__globals__X_1);

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
  MR_String libs__globals__RangeStr_3,
  MR_Word * libs__globals__HeadVar__2_2);

static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
  MR_Word * libs__globals__HeadVar__4_4);

static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
  MR_Box libs__globals__closure_arg,
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box * libs__globals__wrapper_arg_2);

static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
  MR_Word * libs__globals__STATE_VARIABLE_Map_5);

static void MR_CALL 
libs__globals__convert_foreign_language_det_2_p_0(
  MR_String libs__globals__String_3,
  MR_Word * libs__globals__ForeignLang_4);

static void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
  MR_Box libs__globals__closure_arg,
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box * libs__globals__wrapper_arg_2);

static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
  MR_Box libs__globals__closure_arg,
  MR_Box libs__globals__wrapper_arg_1);


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
    ((MR_Box) (libs__globals__get_backend_foreign_languages_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__globals_scalar_common_12[2])),
    ((MR_Box) (libs__globals__convert_limit_error_contexts_acc_5_p_0_1)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_c_compiler_type_0_0,
  libs__globals__libs__globals__field_names_c_compiler_type_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__globals__libs__globals__field_types_c_compiler_type_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1] = {
  (MR_PseudoTypeInfo) &libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2 = {
  (MR_String) "cc_cl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__globals__libs__globals__field_types_c_compiler_type_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3 = {
  (MR_String) "cc_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_clang_version_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_clang_version_0_0
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_file_install_cmd_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1 = {
  (MR_String) "install_cmd_cp",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_globals_0_0,
  libs__globals__libs__globals__field_names_globals_0_0,
  libs__globals__libs__globals__field_locns_globals_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_globals_0_0
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__globals__libs__globals__field_types_line_number_range_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1] = {
  &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1 = {
  (MR_String) "within_n_cells_difference",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__globals__libs__globals__field_types_reuse_strategy_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
libs__globals____Unify____backend_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____backend_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____backend_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____backend_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____clang_version_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____compilation_target_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____csharp_compiler_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____env_type_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____file_install_cmd_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____foreign_language_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____gc_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____globals_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____globals_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____limit_error_contexts_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____limit_error_contexts_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____line_number_range_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____line_number_range_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____may_be_thread_safe_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____reuse_strategy_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____source_file_map_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____source_file_map_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____source_file_map_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____ssdb_trace_level_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____tags_method_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____tags_method_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____tags_method_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;

    {
      libs__globals__succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) libs__globals__wrapper_arg_1), ((MR_Word) libs__globals__wrapper_arg_2));
    }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
  MR_Box * libs__globals__wrapper_arg_1,
  MR_Box libs__globals__wrapper_arg_2,
  MR_Box libs__globals__wrapper_arg_3)
{
  {
    MR_Word libs__globals__conv0_HeadVar__1_1;

    {
      libs__globals____Compare____termination_norm_0_0(&libs__globals__conv0_HeadVar__1_1, ((MR_Word) libs__globals__wrapper_arg_2), ((MR_Word) libs__globals__wrapper_arg_3));
    }
    *libs__globals__wrapper_arg_1 = ((MR_Box) (libs__globals__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__466__1_2_p_0(
  MR_Char libs__globals__HeadVar__1_11,
  MR_Char libs__globals__HeadVar__2_28)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__1_11 == libs__globals__HeadVar__2_28);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____tags_method_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____tags_method_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____source_file_map_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____source_file_map_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

    {
      libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[2], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_8 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__CastY_9 = (MR_Integer) libs__globals__HeadVar__3_3;

    libs__globals__succeeded = (libs__globals__CastX_8 == libs__globals__CastY_9);
    if (libs__globals__succeeded)
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
      else
        *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Integer libs__globals__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Integer libs__globals__ArgY1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Var_11, libs__globals__ArgY1_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
    if (libs__globals__succeeded)
      libs__globals__succeeded = MR_TRUE;
    else
    if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer libs__globals__CastX_3 = (MR_Integer) libs__globals__HeadVar__1_1;
        MR_Integer libs__globals__CastY_4 = (MR_Integer) libs__globals__HeadVar__2_2;

        libs__globals__succeeded = (libs__globals__CastY_4 == libs__globals__CastX_3);
      }
    else
      {
        MR_Integer libs__globals__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer libs__globals__ArgY1_6;

        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (libs__globals__succeeded)
          {
            libs__globals__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
            libs__globals__succeeded = (libs__globals__ArgX1_5 == libs__globals__ArgY1_6);
          }
      }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;
    MR_Integer libs__globals__Var_7 = (MR_Integer) libs__globals__Cast_HeadVar1_4;
    MR_Integer libs__globals__Var_8 = (MR_Integer) libs__globals__Cast_HeadVar2_5;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Var_7, libs__globals__Var_8);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

    libs__globals__succeeded = (libs__globals__Cast_HeadVar1_3 == libs__globals__Cast_HeadVar2_4);
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____line_number_range_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__3_3;

    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
    if (libs__globals__succeeded)
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word libs__globals__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__globals__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word libs__globals__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word libs__globals__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word libs__globals__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__Var_8, ((MR_Box) (libs__globals__ArgX1_4)), ((MR_Box) (libs__globals__ArgY1_5)));
        }
        libs__globals__succeeded = (libs__globals__Var_8 == (MR_Integer) 0);
        libs__globals__succeeded = !(libs__globals__succeeded);
        if (libs__globals__succeeded)
          *libs__globals__HeadVar__1_1 = libs__globals__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__ArgX2_6)), ((MR_Box) (libs__globals__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
    MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

    libs__globals__succeeded = (libs__globals__CastX_7 == libs__globals__CastY_8);
    if (libs__globals__succeeded)
      libs__globals__succeeded = MR_TRUE;
    else
      {
        MR_Word libs__globals__TypeInfo_10_10;
        MR_Word libs__globals__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word libs__globals__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__globals__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word libs__globals__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));

        {
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_1[1], ((MR_Box) (libs__globals__ArgX1_3)), ((MR_Box) (libs__globals__ArgY1_4)));
        }
        if (libs__globals__succeeded)
          {
            libs__globals__TypeInfo_10_10 = (MR_Word) &libs__globals_scalar_common_1[1];
            {
              libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_10_10, ((MR_Box) (libs__globals__ArgX2_5)), ((MR_Box) (libs__globals__ArgY2_6)));
            }
          }
      }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Cast_HeadVar1_4 = libs__globals__HeadVar__2_2;
    MR_Word libs__globals__Cast_HeadVar2_5 = libs__globals__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Cast_HeadVar1_4)), ((MR_Box) (libs__globals__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Cast_HeadVar1_3 = libs__globals__HeadVar__1_1;
    MR_Word libs__globals__Cast_HeadVar2_4 = libs__globals__HeadVar__2_2;

    {
      libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[1], ((MR_Box) (libs__globals__Cast_HeadVar1_3)), ((MR_Box) (libs__globals__Cast_HeadVar2_4)));
    }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____globals_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_63 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__CastY_64 = (MR_Integer) libs__globals__HeadVar__3_3;

    libs__globals__succeeded = (libs__globals__CastX_63 == libs__globals__CastY_64);
    if (libs__globals__succeeded)
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word libs__globals__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__globals__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word libs__globals__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word libs__globals__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word libs__globals__ArgX3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY3_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word libs__globals__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word libs__globals__ArgX10_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY10_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word libs__globals__ArgY11_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word libs__globals__ArgX12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word libs__globals__ArgY12_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word libs__globals__ArgX13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word libs__globals__ArgY13_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word libs__globals__ArgX14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word libs__globals__ArgY14_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word libs__globals__ArgX15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word libs__globals__ArgY15_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word libs__globals__ArgX16_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY16_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX17_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY17_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX18_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY18_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word libs__globals__ArgY19_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word libs__globals__ArgX20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word libs__globals__ArgY20_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word libs__globals__Var_44;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[0], &libs__globals__Var_44, ((MR_Box) (libs__globals__ArgX1_4)), ((MR_Box) (libs__globals__ArgY1_5)));
        }
        libs__globals__succeeded = (libs__globals__Var_44 == (MR_Integer) 0);
        libs__globals__succeeded = !(libs__globals__succeeded);
        if (libs__globals__succeeded)
          *libs__globals__HeadVar__1_1 = libs__globals__Var_44;
        else
          {
            MR_Word libs__globals__Var_45;

            {
              libs__op_mode____Compare____op_mode_0_0(&libs__globals__Var_45, libs__globals__ArgX2_6, libs__globals__ArgY2_7);
            }
            libs__globals__succeeded = (libs__globals__Var_45 == (MR_Integer) 0);
            libs__globals__succeeded = !(libs__globals__succeeded);
            if (libs__globals__succeeded)
              *libs__globals__HeadVar__1_1 = libs__globals__Var_45;
            else
              {
                MR_Word libs__globals__Var_46;
                MR_Integer libs__globals__Var_85 = (MR_Integer) libs__globals__ArgX3_8;
                MR_Integer libs__globals__Var_86 = (MR_Integer) libs__globals__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_46, libs__globals__Var_85, libs__globals__Var_86);
                }
                libs__globals__succeeded = (libs__globals__Var_46 == (MR_Integer) 0);
                libs__globals__succeeded = !(libs__globals__succeeded);
                if (libs__globals__succeeded)
                  *libs__globals__HeadVar__1_1 = libs__globals__Var_46;
                else
                  {
                    MR_Word libs__globals__Var_47;
                    MR_Integer libs__globals__Var_87 = (MR_Integer) libs__globals__ArgX4_10;
                    MR_Integer libs__globals__Var_88 = (MR_Integer) libs__globals__ArgY4_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_47, libs__globals__Var_87, libs__globals__Var_88);
                    }
                    libs__globals__succeeded = (libs__globals__Var_47 == (MR_Integer) 0);
                    libs__globals__succeeded = !(libs__globals__succeeded);
                    if (libs__globals__succeeded)
                      *libs__globals__HeadVar__1_1 = libs__globals__Var_47;
                    else
                      {
                        MR_Word libs__globals__Var_48;
                        MR_Integer libs__globals__Var_89 = (MR_Integer) libs__globals__ArgX5_12;
                        MR_Integer libs__globals__Var_90 = (MR_Integer) libs__globals__ArgY5_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_48, libs__globals__Var_89, libs__globals__Var_90);
                        }
                        libs__globals__succeeded = (libs__globals__Var_48 == (MR_Integer) 0);
                        libs__globals__succeeded = !(libs__globals__succeeded);
                        if (libs__globals__succeeded)
                          *libs__globals__HeadVar__1_1 = libs__globals__Var_48;
                        else
                          {
                            MR_Word libs__globals__Var_49;
                            MR_Integer libs__globals__Var_91 = (MR_Integer) libs__globals__ArgX6_14;
                            MR_Integer libs__globals__Var_92 = (MR_Integer) libs__globals__ArgY6_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_49, libs__globals__Var_91, libs__globals__Var_92);
                            }
                            libs__globals__succeeded = (libs__globals__Var_49 == (MR_Integer) 0);
                            libs__globals__succeeded = !(libs__globals__succeeded);
                            if (libs__globals__succeeded)
                              *libs__globals__HeadVar__1_1 = libs__globals__Var_49;
                            else
                              {
                                MR_Word libs__globals__Var_50;
                                MR_Integer libs__globals__Var_93 = (MR_Integer) libs__globals__ArgX7_16;
                                MR_Integer libs__globals__Var_94 = (MR_Integer) libs__globals__ArgY7_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_50, libs__globals__Var_93, libs__globals__Var_94);
                                }
                                libs__globals__succeeded = (libs__globals__Var_50 == (MR_Integer) 0);
                                libs__globals__succeeded = !(libs__globals__succeeded);
                                if (libs__globals__succeeded)
                                  *libs__globals__HeadVar__1_1 = libs__globals__Var_50;
                                else
                                  {
                                    MR_Word libs__globals__Var_51;

                                    {
                                      libs__trace_params____Compare____trace_level_0_0(&libs__globals__Var_51, libs__globals__ArgX8_18, libs__globals__ArgY8_19);
                                    }
                                    libs__globals__succeeded = (libs__globals__Var_51 == (MR_Integer) 0);
                                    libs__globals__succeeded = !(libs__globals__succeeded);
                                    if (libs__globals__succeeded)
                                      *libs__globals__HeadVar__1_1 = libs__globals__Var_51;
                                    else
                                      {
                                        MR_Word libs__globals__Var_52;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[3], &libs__globals__Var_52, ((MR_Box) (libs__globals__ArgX9_20)), ((MR_Box) (libs__globals__ArgY9_21)));
                                        }
                                        libs__globals__succeeded = (libs__globals__Var_52 == (MR_Integer) 0);
                                        libs__globals__succeeded = !(libs__globals__succeeded);
                                        if (libs__globals__succeeded)
                                          *libs__globals__HeadVar__1_1 = libs__globals__Var_52;
                                        else
                                          {
                                            MR_Word libs__globals__Var_53;
                                            MR_Integer libs__globals__Var_95 = (MR_Integer) libs__globals__ArgX10_22;
                                            MR_Integer libs__globals__Var_96 = (MR_Integer) libs__globals__ArgY10_23;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_53, libs__globals__Var_95, libs__globals__Var_96);
                                            }
                                            libs__globals__succeeded = (libs__globals__Var_53 == (MR_Integer) 0);
                                            libs__globals__succeeded = !(libs__globals__succeeded);
                                            if (libs__globals__succeeded)
                                              *libs__globals__HeadVar__1_1 = libs__globals__Var_53;
                                            else
                                              {
                                                MR_Word libs__globals__Var_54;
                                                MR_Integer libs__globals__Var_97 = (MR_Integer) libs__globals__ArgX11_24;
                                                MR_Integer libs__globals__Var_98 = (MR_Integer) libs__globals__ArgY11_25;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_54, libs__globals__Var_97, libs__globals__Var_98);
                                                }
                                                libs__globals__succeeded = (libs__globals__Var_54 == (MR_Integer) 0);
                                                libs__globals__succeeded = !(libs__globals__succeeded);
                                                if (libs__globals__succeeded)
                                                  *libs__globals__HeadVar__1_1 = libs__globals__Var_54;
                                                else
                                                  {
                                                    MR_Word libs__globals__Var_55;

                                                    {
                                                      libs__globals____Compare____c_compiler_type_0_0(&libs__globals__Var_55, libs__globals__ArgX12_26, libs__globals__ArgY12_27);
                                                    }
                                                    libs__globals__succeeded = (libs__globals__Var_55 == (MR_Integer) 0);
                                                    libs__globals__succeeded = !(libs__globals__succeeded);
                                                    if (libs__globals__succeeded)
                                                      *libs__globals__HeadVar__1_1 = libs__globals__Var_55;
                                                    else
                                                      {
                                                        MR_Word libs__globals__Var_56;
                                                        MR_Integer libs__globals__Var_99 = (MR_Integer) libs__globals__ArgX13_28;
                                                        MR_Integer libs__globals__Var_100 = (MR_Integer) libs__globals__ArgY13_29;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_56, libs__globals__Var_99, libs__globals__Var_100);
                                                        }
                                                        libs__globals__succeeded = (libs__globals__Var_56 == (MR_Integer) 0);
                                                        libs__globals__succeeded = !(libs__globals__succeeded);
                                                        if (libs__globals__succeeded)
                                                          *libs__globals__HeadVar__1_1 = libs__globals__Var_56;
                                                        else
                                                          {
                                                            MR_Word libs__globals__Var_57;

                                                            {
                                                              libs__globals____Compare____reuse_strategy_0_0(&libs__globals__Var_57, libs__globals__ArgX14_30, libs__globals__ArgY14_31);
                                                            }
                                                            libs__globals__succeeded = (libs__globals__Var_57 == (MR_Integer) 0);
                                                            libs__globals__succeeded = !(libs__globals__succeeded);
                                                            if (libs__globals__succeeded)
                                                              *libs__globals__HeadVar__1_1 = libs__globals__Var_57;
                                                            else
                                                              {
                                                                MR_Word libs__globals__Var_58;

                                                                {
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[4], &libs__globals__Var_58, ((MR_Box) (libs__globals__ArgX15_32)), ((MR_Box) (libs__globals__ArgY15_33)));
                                                                }
                                                                libs__globals__succeeded = (libs__globals__Var_58 == (MR_Integer) 0);
                                                                libs__globals__succeeded = !(libs__globals__succeeded);
                                                                if (libs__globals__succeeded)
                                                                  *libs__globals__HeadVar__1_1 = libs__globals__Var_58;
                                                                else
                                                                  {
                                                                    MR_Word libs__globals__Var_59;
                                                                    MR_Integer libs__globals__Var_101 = (MR_Integer) libs__globals__ArgX16_34;
                                                                    MR_Integer libs__globals__Var_102 = (MR_Integer) libs__globals__ArgY16_35;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_59, libs__globals__Var_101, libs__globals__Var_102);
                                                                    }
                                                                    libs__globals__succeeded = (libs__globals__Var_59 == (MR_Integer) 0);
                                                                    libs__globals__succeeded = !(libs__globals__succeeded);
                                                                    if (libs__globals__succeeded)
                                                                      *libs__globals__HeadVar__1_1 = libs__globals__Var_59;
                                                                    else
                                                                      {
                                                                        MR_Word libs__globals__Var_60;
                                                                        MR_Integer libs__globals__Var_103 = (MR_Integer) libs__globals__ArgX17_36;
                                                                        MR_Integer libs__globals__Var_104 = (MR_Integer) libs__globals__ArgY17_37;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_60, libs__globals__Var_103, libs__globals__Var_104);
                                                                        }
                                                                        libs__globals__succeeded = (libs__globals__Var_60 == (MR_Integer) 0);
                                                                        libs__globals__succeeded = !(libs__globals__succeeded);
                                                                        if (libs__globals__succeeded)
                                                                          *libs__globals__HeadVar__1_1 = libs__globals__Var_60;
                                                                        else
                                                                          {
                                                                            MR_Word libs__globals__Var_61;
                                                                            MR_Integer libs__globals__Var_105 = (MR_Integer) libs__globals__ArgX18_38;
                                                                            MR_Integer libs__globals__Var_106 = (MR_Integer) libs__globals__ArgY18_39;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_61, libs__globals__Var_105, libs__globals__Var_106);
                                                                            }
                                                                            libs__globals__succeeded = (libs__globals__Var_61 == (MR_Integer) 0);
                                                                            libs__globals__succeeded = !(libs__globals__succeeded);
                                                                            if (libs__globals__succeeded)
                                                                              *libs__globals__HeadVar__1_1 = libs__globals__Var_61;
                                                                            else
                                                                              {
                                                                                MR_Word libs__globals__Var_62;

                                                                                {
                                                                                  libs__globals____Compare____file_install_cmd_0_0(&libs__globals__Var_62, libs__globals__ArgX19_40, libs__globals__ArgY19_41);
                                                                                }
                                                                                libs__globals__succeeded = (libs__globals__Var_62 == (MR_Integer) 0);
                                                                                libs__globals__succeeded = !(libs__globals__succeeded);
                                                                                if (libs__globals__succeeded)
                                                                                  *libs__globals__HeadVar__1_1 = libs__globals__Var_62;
                                                                                else
                                                                                  {
                                                                                    {
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_2[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__ArgX20_42)), ((MR_Box) (libs__globals__ArgY20_43)));
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
}

MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_43 = (MR_Integer) libs__globals__HeadVar__1_1;
    MR_Integer libs__globals__CastY_44 = (MR_Integer) libs__globals__HeadVar__2_2;

    libs__globals__succeeded = (libs__globals__CastX_43 == libs__globals__CastY_44);
    if (libs__globals__succeeded)
      libs__globals__succeeded = MR_TRUE;
    else
      {
        MR_Word libs__globals__TypeInfo_48_48;
        MR_Word libs__globals__TypeInfo_49_49;
        MR_Word libs__globals__TypeInfo_50_50;
        MR_Word libs__globals__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word libs__globals__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__globals__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word libs__globals__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word libs__globals__ArgX3_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word libs__globals__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word libs__globals__ArgX10_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgY10_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) & (MR_Integer) 3);
        MR_Word libs__globals__ArgX11_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word libs__globals__ArgY11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word libs__globals__ArgX12_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word libs__globals__ArgY12_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word libs__globals__ArgX13_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word libs__globals__ArgY13_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word libs__globals__ArgX14_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word libs__globals__ArgY14_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word libs__globals__ArgX15_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word libs__globals__ArgY15_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word libs__globals__ArgX16_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY16_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX17_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY17_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX18_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgY18_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
        MR_Word libs__globals__ArgX19_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word libs__globals__ArgY19_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word libs__globals__ArgX20_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word libs__globals__ArgY20_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 11)));

        {
          libs__globals__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__globals_scalar_common_2[0], ((MR_Box) (libs__globals__ArgX1_3)), ((MR_Box) (libs__globals__ArgY1_4)));
        }
        if (libs__globals__succeeded)
          {
            {
              libs__globals__succeeded = libs__op_mode____Unify____op_mode_0_0(libs__globals__ArgX2_5, libs__globals__ArgY2_6);
            }
            if (libs__globals__succeeded)
              {
                libs__globals__succeeded = (libs__globals__ArgX3_7 == libs__globals__ArgY3_8);
                if (libs__globals__succeeded)
                  {
                    libs__globals__succeeded = (libs__globals__ArgX4_9 == libs__globals__ArgY4_10);
                    if (libs__globals__succeeded)
                      {
                        libs__globals__succeeded = (libs__globals__ArgX5_11 == libs__globals__ArgY5_12);
                        if (libs__globals__succeeded)
                          {
                            libs__globals__succeeded = (libs__globals__ArgX6_13 == libs__globals__ArgY6_14);
                            if (libs__globals__succeeded)
                              {
                                libs__globals__succeeded = (libs__globals__ArgX7_15 == libs__globals__ArgY7_16);
                                if (libs__globals__succeeded)
                                  {
                                    {
                                      libs__globals__succeeded = libs__trace_params____Unify____trace_level_0_0(libs__globals__ArgX8_17, libs__globals__ArgY8_18);
                                    }
                                    if (libs__globals__succeeded)
                                      {
                                        libs__globals__TypeInfo_48_48 = (MR_Word) &libs__globals_scalar_common_1[3];
                                        {
                                          libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_48_48, ((MR_Box) (libs__globals__ArgX9_19)), ((MR_Box) (libs__globals__ArgY9_20)));
                                        }
                                        if (libs__globals__succeeded)
                                          {
                                            libs__globals__succeeded = (libs__globals__ArgX10_21 == libs__globals__ArgY10_22);
                                            if (libs__globals__succeeded)
                                              {
                                                libs__globals__succeeded = (libs__globals__ArgX11_23 == libs__globals__ArgY11_24);
                                                if (libs__globals__succeeded)
                                                  {
                                                    {
                                                      libs__globals__succeeded = libs__globals____Unify____c_compiler_type_0_0(libs__globals__ArgX12_25, libs__globals__ArgY12_26);
                                                    }
                                                    if (libs__globals__succeeded)
                                                      {
                                                        libs__globals__succeeded = (libs__globals__ArgX13_27 == libs__globals__ArgY13_28);
                                                        if (libs__globals__succeeded)
                                                          {
                                                            {
                                                              libs__globals__succeeded = libs__globals____Unify____reuse_strategy_0_0(libs__globals__ArgX14_29, libs__globals__ArgY14_30);
                                                            }
                                                            if (libs__globals__succeeded)
                                                              {
                                                                libs__globals__TypeInfo_49_49 = (MR_Word) &libs__globals_scalar_common_1[4];
                                                                {
                                                                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_49_49, ((MR_Box) (libs__globals__ArgX15_31)), ((MR_Box) (libs__globals__ArgY15_32)));
                                                                }
                                                                if (libs__globals__succeeded)
                                                                  {
                                                                    libs__globals__succeeded = (libs__globals__ArgX16_33 == libs__globals__ArgY16_34);
                                                                    if (libs__globals__succeeded)
                                                                      {
                                                                        libs__globals__succeeded = (libs__globals__ArgX17_35 == libs__globals__ArgY17_36);
                                                                        if (libs__globals__succeeded)
                                                                          {
                                                                            libs__globals__succeeded = (libs__globals__ArgX18_37 == libs__globals__ArgY18_38);
                                                                            if (libs__globals__succeeded)
                                                                              {
                                                                                {
                                                                                  libs__globals__succeeded = libs__globals____Unify____file_install_cmd_0_0(libs__globals__ArgX19_39, libs__globals__ArgY19_40);
                                                                                }
                                                                                if (libs__globals__succeeded)
                                                                                  {
                                                                                    libs__globals__TypeInfo_50_50 = (MR_Word) &libs__globals_scalar_common_2[1];
                                                                                    {
                                                                                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_50_50, ((MR_Box) (libs__globals__ArgX20_41)), ((MR_Box) (libs__globals__ArgY20_42)));
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
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____gc_method_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____foreign_language_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__3_3;

    libs__globals__succeeded = (libs__globals__CastX_13 == libs__globals__CastY_14);
    if (libs__globals__succeeded)
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((libs__globals__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
      else
        *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_String libs__globals__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
        MR_String libs__globals__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

        if ((libs__globals__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_String libs__globals__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
            MR_String libs__globals__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word libs__globals__Var_8;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&libs__globals__Var_8, libs__globals__Var_18, libs__globals__ArgY1_5);
            }
            libs__globals__succeeded = (libs__globals__Var_8 == (MR_Integer) 0);
            libs__globals__succeeded = !(libs__globals__succeeded);
            if (libs__globals__succeeded)
              *libs__globals__HeadVar__1_1 = libs__globals__Var_8;
            else
              {
                mercury__private_builtin__builtin_compare_string_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Var_17, libs__globals__ArgY2_7);
              }
          }
      }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
    if (libs__globals__succeeded)
      libs__globals__succeeded = MR_TRUE;
    else
    if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer libs__globals__CastX_7 = (MR_Integer) libs__globals__HeadVar__1_1;
        MR_Integer libs__globals__CastY_8 = (MR_Integer) libs__globals__HeadVar__2_2;

        libs__globals__succeeded = (libs__globals__CastY_8 == libs__globals__CastX_7);
      }
    else
      {
        MR_String libs__globals__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
        MR_String libs__globals__ArgY1_4;
        MR_String libs__globals__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
        MR_String libs__globals__ArgY2_6;

        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (libs__globals__succeeded)
          {
            libs__globals__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
            libs__globals__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
            libs__globals__succeeded = (strcmp(libs__globals__ArgX1_3, libs__globals__ArgY1_4) == 0);
            if (libs__globals__succeeded)
              libs__globals__succeeded = (strcmp(libs__globals__ArgX2_5, libs__globals__ArgY2_6) == 0);
          }
      }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____env_type_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____compilation_target_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____clang_version_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_12 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__CastY_13 = (MR_Integer) libs__globals__HeadVar__3_3;

    libs__globals__succeeded = (libs__globals__CastX_12 == libs__globals__CastY_13);
    if (libs__globals__succeeded)
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer libs__globals__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer libs__globals__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer libs__globals__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer libs__globals__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer libs__globals__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer libs__globals__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word libs__globals__Var_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_10, libs__globals__ArgX1_4, libs__globals__ArgY1_5);
        }
        libs__globals__succeeded = (libs__globals__Var_10 == (MR_Integer) 0);
        libs__globals__succeeded = !(libs__globals__succeeded);
        if (libs__globals__succeeded)
          *libs__globals__HeadVar__1_1 = libs__globals__Var_10;
        else
          {
            MR_Word libs__globals__Var_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&libs__globals__Var_11, libs__globals__ArgX2_6, libs__globals__ArgY2_7);
            }
            libs__globals__succeeded = (libs__globals__Var_11 == (MR_Integer) 0);
            libs__globals__succeeded = !(libs__globals__succeeded);
            if (libs__globals__succeeded)
              *libs__globals__HeadVar__1_1 = libs__globals__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__ArgX3_8, libs__globals__ArgY3_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_9 = (MR_Integer) libs__globals__HeadVar__1_1;
    MR_Integer libs__globals__CastY_10 = (MR_Integer) libs__globals__HeadVar__2_2;

    libs__globals__succeeded = (libs__globals__CastX_9 == libs__globals__CastY_10);
    if (libs__globals__succeeded)
      libs__globals__succeeded = MR_TRUE;
    else
      {
        MR_Integer libs__globals__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer libs__globals__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer libs__globals__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer libs__globals__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer libs__globals__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer libs__globals__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__globals__HeadVar__2_2, (MR_Integer) 2)));

        libs__globals__succeeded = (libs__globals__ArgX1_3 == libs__globals__ArgY1_4);
        if (libs__globals__succeeded)
          {
            libs__globals__succeeded = (libs__globals__ArgX2_5 == libs__globals__ArgY2_6);
            if (libs__globals__succeeded)
              libs__globals__succeeded = (libs__globals__ArgX3_7 == libs__globals__ArgY3_8);
          }
      }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_46 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__CastY_47 = (MR_Integer) libs__globals__HeadVar__3_3;

    libs__globals__succeeded = (libs__globals__CastX_46 == libs__globals__CastY_47);
    if (libs__globals__succeeded)
      *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__globals__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *libs__globals__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__globals__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word libs__globals__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word libs__globals__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__globals__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word libs__globals__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__globals__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word libs__globals__Var_10;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__Var_10, ((MR_Box) (libs__globals__Var_57)), ((MR_Box) (libs__globals__ArgY1_5)));
                  }
                  libs__globals__succeeded = (libs__globals__Var_10 == (MR_Integer) 0);
                  libs__globals__succeeded = !(libs__globals__succeeded);
                  if (libs__globals__succeeded)
                    *libs__globals__HeadVar__1_1 = libs__globals__Var_10;
                  else
                    {
                      MR_Word libs__globals__Var_11;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], &libs__globals__Var_11, ((MR_Box) (libs__globals__Var_56)), ((MR_Box) (libs__globals__ArgY2_7)));
                      }
                      libs__globals__succeeded = (libs__globals__Var_11 == (MR_Integer) 0);
                      libs__globals__succeeded = !(libs__globals__succeeded);
                      if (libs__globals__succeeded)
                        *libs__globals__HeadVar__1_1 = libs__globals__Var_11;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Var_55)), ((MR_Box) (libs__globals__ArgY3_9)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word libs__globals__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word libs__globals__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[2], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Var_54)), ((MR_Box) (libs__globals__ArgY1_28)));
                  }
                }
                break;
              case (MR_Integer) 3:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__globals__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *libs__globals__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word libs__globals__ArgY1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__globals_scalar_common_1[1], libs__globals__HeadVar__1_1, ((MR_Box) (libs__globals__Var_53)), ((MR_Box) (libs__globals__ArgY1_39)));
                  }
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
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__CastX_15 = (MR_Integer) libs__globals__HeadVar__1_1;
    MR_Integer libs__globals__CastY_16 = (MR_Integer) libs__globals__HeadVar__2_2;

    libs__globals__succeeded = (libs__globals__CastX_15 == libs__globals__CastY_16);
    if (libs__globals__succeeded)
      libs__globals__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__globals__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer libs__globals__CastX_13 = (MR_Integer) libs__globals__HeadVar__1_1;
            MR_Integer libs__globals__CastY_14 = (MR_Integer) libs__globals__HeadVar__2_2;

            libs__globals__succeeded = (libs__globals__CastY_14 == libs__globals__CastX_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__globals__TypeInfo_19_19;
            MR_Word libs__globals__TypeInfo_20_20;
            MR_Word libs__globals__TypeInfo_21_21;
            MR_Word libs__globals__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__globals__ArgY1_4;
            MR_Word libs__globals__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word libs__globals__ArgY2_6;
            MR_Word libs__globals__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word libs__globals__ArgY3_8;

            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__globals__succeeded)
              {
                libs__globals__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
                libs__globals__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 1)));
                libs__globals__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__2_2, (MR_Integer) 2)));
                libs__globals__TypeInfo_19_19 = (MR_Word) &libs__globals_scalar_common_1[1];
                {
                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_19_19, ((MR_Box) (libs__globals__ArgX1_3)), ((MR_Box) (libs__globals__ArgY1_4)));
                }
                if (libs__globals__succeeded)
                  {
                    libs__globals__TypeInfo_20_20 = (MR_Word) &libs__globals_scalar_common_1[1];
                    {
                      libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_20_20, ((MR_Box) (libs__globals__ArgX2_5)), ((MR_Box) (libs__globals__ArgY2_6)));
                    }
                    if (libs__globals__succeeded)
                      {
                        libs__globals__TypeInfo_21_21 = (MR_Word) &libs__globals_scalar_common_1[1];
                        {
                          libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_21_21, ((MR_Box) (libs__globals__ArgX3_7)), ((MR_Box) (libs__globals__ArgY3_8)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word libs__globals__TypeInfo_18_18;
            MR_Word libs__globals__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__globals__ArgY1_10;

            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__globals__succeeded)
              {
                libs__globals__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
                libs__globals__TypeInfo_18_18 = (MR_Word) &libs__globals_scalar_common_1[2];
                {
                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_18_18, ((MR_Box) (libs__globals__ArgX1_9)), ((MR_Box) (libs__globals__ArgY1_10)));
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word libs__globals__TypeInfo_17_17;
            MR_Word libs__globals__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__globals__ArgY1_12;

            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (libs__globals__succeeded)
              {
                libs__globals__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__HeadVar__2_2, (MR_Integer) 0)));
                libs__globals__TypeInfo_17_17 = (MR_Word) &libs__globals_scalar_common_1[1];
                {
                  libs__globals__succeeded = mercury__builtin__unify_2_p_0(libs__globals__TypeInfo_17_17, ((MR_Box) (libs__globals__ArgX1_11)), ((MR_Box) (libs__globals__ArgY1_12)));
                }
              }
          }
          break;
      }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals____Compare____backend_0_0(
  MR_Word * libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__Cast_HeadVar1_4 = (MR_Integer) libs__globals__HeadVar__2_2;
    MR_Integer libs__globals__Cast_HeadVar2_5 = (MR_Integer) libs__globals__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__globals__HeadVar__1_1, libs__globals__Cast_HeadVar1_4, libs__globals__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____backend_0_0(
  MR_Word libs__globals__HeadVar__2_1,
  MR_Word libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded = (libs__globals__HeadVar__2_1 == libs__globals__HeadVar__2_2);

    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals__unsafe_set_maybe_source_file_map_1_p_0(
  MR_Word libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_source_file_map_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
libs__globals__mutable_variable_maybe_source_file_map = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_maybe_source_file_map_1_p_0(
  MR_Word * libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_source_file_map_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_maybe_source_file_map;


		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_maybe_source_file_map_0_p_0(void)
{
  {
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
  MR_Word libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
  MR_Word * libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;


		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
{
  {
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
  MR_Word libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
libs__globals__mutable_variable_disable_smart_recompilation = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
  MR_Word * libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_get_disable_smart_recompilation_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_disable_smart_recompilation;


		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
{
  {
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
  MR_Word libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_set_some_errors_were_context_limited_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
libs__globals__mutable_variable_some_errors_were_context_limited = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0(
  MR_Word * libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_get_some_errors_were_context_limited_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_some_errors_were_context_limited;


		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_some_errors_were_context_limited_0_p_0(void)
{
  {
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
  MR_Word libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_set_extra_error_info_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
libs__globals__mutable_variable_extra_error_info = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_extra_error_info_1_p_0(
  MR_Word * libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_get_extra_error_info_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_extra_error_info;


		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_extra_error_info_0_p_0(void)
{
  {
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
  MR_Word libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

	X =  libs__globals__X_1 ;
		{
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0(
  MR_Word * libs__globals__X_1)
{
  {
    MR_bool libs__globals__succeeded;

{
#define MR_PROC_LABEL libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;


		;}
#undef MR_PROC_LABEL
	 *libs__globals__X_1  = X;
}
  }
}

static void MR_CALL 
libs__globals__unlock_maybe_from_ground_term_threshold_0_p_0(void)
{
  {
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
    MR_bool libs__globals__succeeded;

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
  MR_String libs__globals__RangeStr_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__MaybeMin_4;
    MR_Word libs__globals__MaybeMax_5;
    MR_String libs__globals__MinStr_6;
    MR_String libs__globals__MaxStr_7;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;

    {
      libs__globals__Var_10 = mercury__string__split_at_char_2_f_0((MR_Char) 45, libs__globals__RangeStr_3);
    }
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_10)) == (MR_mktag((MR_Integer) 1)));
    if (libs__globals__succeeded)
      {
        libs__globals__MinStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_10, (MR_Integer) 0)));
        libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_10, (MR_Integer) 1)));
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_12)) == (MR_mktag((MR_Integer) 1)));
        if (libs__globals__succeeded)
          {
            libs__globals__MaxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_12, (MR_Integer) 0)));
            libs__globals__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_12, (MR_Integer) 1)));
            libs__globals__succeeded = (libs__globals__Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (libs__globals__succeeded)
              {
                libs__globals__succeeded = (strcmp(libs__globals__MinStr_6, (MR_String) "") == 0);
                if (libs__globals__succeeded)
                  {
                    libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    libs__globals__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Integer libs__globals__Min_8;

                    {
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MinStr_6, &libs__globals__Min_8);
                    }
                    if (libs__globals__succeeded)
                      {
                        {
                          libs__globals__MaybeMin_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), libs__globals__MaybeMin_4, 0) = ((MR_Box) (libs__globals__Min_8));
                        }
                        libs__globals__succeeded = MR_TRUE;
                      }
                  }
                if (libs__globals__succeeded)
                  {
                    libs__globals__succeeded = (strcmp(libs__globals__MaxStr_7, (MR_String) "") == 0);
                    if (libs__globals__succeeded)
                      {
                        libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        libs__globals__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Integer libs__globals__Max_9;

                        {
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__MaxStr_7, &libs__globals__Max_9);
                        }
                        if (libs__globals__succeeded)
                          {
                            {
                              libs__globals__MaybeMax_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), libs__globals__MaybeMax_5, 0) = ((MR_Box) (libs__globals__Max_9));
                            }
                            libs__globals__succeeded = MR_TRUE;
                          }
                      }
                    if (libs__globals__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *libs__globals__HeadVar__2_2 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__MaybeMin_4));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__MaybeMax_5));
                        }
                        libs__globals__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals__find_file_name_and_line_range_chars_4_p_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_0_2,
  MR_Word * libs__globals__STATE_VARIABLE_LineRangeChars_3,
  MR_Word * libs__globals__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__globals__succeeded;

        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *libs__globals__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
          }
        else
          {
            MR_Char libs__globals__RevChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__globals__RevChars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));

            libs__globals__succeeded = (libs__globals__RevChar_8 == (MR_Char) 58);
            if (libs__globals__succeeded)
              {
                *libs__globals__HeadVar__4_4 = libs__globals__RevChars_9;
                *libs__globals__STATE_VARIABLE_LineRangeChars_3 = libs__globals__STATE_VARIABLE_LineRangeChars_0_2;
              }
            else
              {
                MR_Word libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

                {
                  libs__globals__STATE_VARIABLE_LineRangeChars_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 0) = ((MR_Box) (MR_Word) (libs__globals__RevChar_8));
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_LineRangeChars_14_14, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_LineRangeChars_0_2));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word libs__globals__next_value_of_HeadVar__1_1 = libs__globals__RevChars_9;
                  MR_Word libs__globals__next_value_of_STATE_VARIABLE_LineRangeChars_0_2 = libs__globals__STATE_VARIABLE_LineRangeChars_14_14;

                  libs__globals__STATE_VARIABLE_LineRangeChars_0_2 = libs__globals__next_value_of_STATE_VARIABLE_LineRangeChars_0_2;
                  libs__globals__HeadVar__1_1 = libs__globals__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
  MR_Box libs__globals__closure_arg,
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box * libs__globals__wrapper_arg_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Box libs__globals__closure = libs__globals__closure_arg;
    MR_Word libs__globals__conv0_HeadVar__2_2;

    {
      libs__globals__succeeded = libs__globals__convert_line_number_range_2_p_0(((MR_String) libs__globals__wrapper_arg_1), &libs__globals__conv0_HeadVar__2_2);
    }
    if (libs__globals__succeeded)
      {
        *libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_HeadVar__2_2));
        libs__globals__succeeded = MR_TRUE;
      }
    return libs__globals__succeeded;
  }
}

static void MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0(
  MR_Word libs__globals__HeadVar__1_1,
  MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_0_2,
  MR_Word * libs__globals__STATE_VARIABLE_RevBadOptions_3,
  MR_Word libs__globals__STATE_VARIABLE_Map_0_4,
  MR_Word * libs__globals__STATE_VARIABLE_Map_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__globals__succeeded;

        if ((libs__globals__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *libs__globals__STATE_VARIABLE_Map_5 = libs__globals__STATE_VARIABLE_Map_0_4;
            *libs__globals__STATE_VARIABLE_RevBadOptions_3 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
          }
        else
          {
            MR_String libs__globals__Option_12 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__globals__Options_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word libs__globals__OptionChars_16;
            MR_Word libs__globals__RevOptionChars_17;
            MR_Word libs__globals__LineRangeChars_18;
            MR_Word libs__globals__RevFileNameChars_19;
            MR_String libs__globals__FileName_20;
            MR_String libs__globals__LineRangeStr_21;
            MR_Word libs__globals__STATE_VARIABLE_Map_31_31;
            MR_Word libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
            MR_Word libs__globals__LineNumberRanges_23;
            MR_Word libs__globals__LineRangeStrs_22;

            {
              mercury__string__to_char_list_2_p_0(libs__globals__Option_12, &libs__globals__OptionChars_16);
            }
            {
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, libs__globals__OptionChars_16, &libs__globals__RevOptionChars_17);
            }
            {
              libs__globals__find_file_name_and_line_range_chars_4_p_0(libs__globals__RevOptionChars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__LineRangeChars_18, &libs__globals__RevFileNameChars_19);
            }
            {
              libs__globals__FileName_20 = mercury__string__from_rev_char_list_1_f_0(libs__globals__RevFileNameChars_19);
            }
            {
              libs__globals__LineRangeStr_21 = mercury__string__from_char_list_1_f_0(libs__globals__LineRangeChars_18);
            }
            {
              libs__globals__LineRangeStrs_22 = mercury__string__split_at_char_2_f_0((MR_Char) 44, libs__globals__LineRangeStr_21);
            }
            {
              libs__globals__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_line_number_range_0, (MR_Word) &libs__globals_scalar_common_2[5], libs__globals__LineRangeStrs_22, &libs__globals__LineNumberRanges_23);
            }
            if (libs__globals__succeeded)
              {
                {
                  mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals_scalar_common_1[0], ((MR_Box) (libs__globals__FileName_20)), ((MR_Box) (libs__globals__LineNumberRanges_23)), libs__globals__STATE_VARIABLE_Map_0_4, &libs__globals__STATE_VARIABLE_Map_31_31);
                }
                libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = libs__globals__STATE_VARIABLE_RevBadOptions_0_2;
              }
            else
              {
                {
                  libs__globals__STATE_VARIABLE_RevBadOptions_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 0) = ((MR_Box) (libs__globals__Option_12));
                  MR_hl_field(MR_mktag(1), libs__globals__STATE_VARIABLE_RevBadOptions_32_32, 1) = ((MR_Box) (libs__globals__STATE_VARIABLE_RevBadOptions_0_2));
                }
                libs__globals__STATE_VARIABLE_Map_31_31 = libs__globals__STATE_VARIABLE_Map_0_4;
              }
            /* direct tailcall eliminated */
            {
              MR_Word libs__globals__next_value_of_HeadVar__1_1 = libs__globals__Options_13;
              MR_Word libs__globals__next_value_of_STATE_VARIABLE_RevBadOptions_0_2 = libs__globals__STATE_VARIABLE_RevBadOptions_32_32;
              MR_Word libs__globals__next_value_of_STATE_VARIABLE_Map_0_4 = libs__globals__STATE_VARIABLE_Map_31_31;

              libs__globals__STATE_VARIABLE_Map_0_4 = libs__globals__next_value_of_STATE_VARIABLE_Map_0_4;
              libs__globals__STATE_VARIABLE_RevBadOptions_0_2 = libs__globals__next_value_of_STATE_VARIABLE_RevBadOptions_0_2;
              libs__globals__HeadVar__1_1 = libs__globals__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__globals__convert_foreign_language_det_2_p_0(
  MR_String libs__globals__String_3,
  MR_Word * libs__globals__ForeignLang_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__ForeignLangPrime_5;

    {
      libs__globals__succeeded = libs__globals__convert_foreign_language_2_p_0(libs__globals__String_3, &libs__globals__ForeignLangPrime_5);
    }
    if (libs__globals__succeeded)
      *libs__globals__ForeignLang_4 = libs__globals__ForeignLangPrime_5;
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
  MR_Word libs__globals__MaybeSourceFileMap_4)
{
  {
    MR_bool libs__globals__succeeded;

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

	X =  libs__globals__MaybeSourceFileMap_4 ;
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
  MR_Word * libs__globals__MaybeSourceFileMap_4)
{
  {
    MR_bool libs__globals__succeeded;

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
	 *libs__globals__MaybeSourceFileMap_4  = X;
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
  MR_Word libs__globals__DisableItemVerions_4)
{
  {
    MR_bool libs__globals__succeeded;

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

	X =  libs__globals__DisableItemVerions_4 ;
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
  MR_Word * libs__globals__DisableItemVerions_4)
{
  {
    MR_bool libs__globals__succeeded;

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
	 *libs__globals__DisableItemVerions_4  = X;
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
  MR_Word libs__globals__DisableSmartRecomp_4)
{
  {
    MR_bool libs__globals__succeeded;

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

	X =  libs__globals__DisableSmartRecomp_4 ;
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
  MR_Word * libs__globals__DisableSmartRecomp_4)
{
  {
    MR_bool libs__globals__succeeded;

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
	 *libs__globals__DisableSmartRecomp_4  = X;
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
  MR_Word libs__globals__SomeErrorsWereContextLimited_4)
{
  {
    MR_bool libs__globals__succeeded;

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

	X =  libs__globals__SomeErrorsWereContextLimited_4 ;
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
  MR_Word * libs__globals__SomeErrorsWereContextLimited_4)
{
  {
    MR_bool libs__globals__succeeded;

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
	 *libs__globals__SomeErrorsWereContextLimited_4  = X;
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
  MR_Word libs__globals__ExtraErrorInfo_4)
{
  {
    MR_bool libs__globals__succeeded;

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

	X =  libs__globals__ExtraErrorInfo_4 ;
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
  MR_Word * libs__globals__ExtraErrorInfo_4)
{
  {
    MR_bool libs__globals__succeeded;

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
	 *libs__globals__ExtraErrorInfo_4  = X;
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
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__MaybeThreshold_2;

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
	 libs__globals__MaybeThreshold_2  = X;
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
    return libs__globals__MaybeThreshold_2;
  }
}

void MR_CALL 
libs__globals__globals_init_mutables_3_p_0(
  MR_Word libs__globals__Globals_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__FromGroundTermThreshold_6;
    MR_Word libs__globals__Var_10;

    {
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_4, (MR_Integer) 350, &libs__globals__FromGroundTermThreshold_6);
    }
    {
      libs__globals__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__globals__Var_10, 0) = ((MR_Box) (libs__globals__FromGroundTermThreshold_6));
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

	X =  libs__globals__Var_10 ;
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
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__FloatDwords_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__TargetWordBits_5;
    MR_Word libs__globals__SinglePrecFloat_6;

    {
      libs__globals__lookup_int_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 249, &libs__globals__TargetWordBits_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 233, &libs__globals__SinglePrecFloat_6);
    }
    libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 64);
    if (libs__globals__succeeded)
      *libs__globals__FloatDwords_4 = (MR_Integer) 0;
    else
      {
        libs__globals__succeeded = (libs__globals__TargetWordBits_5 == (MR_Integer) 32);
        if (libs__globals__succeeded)
          switch (libs__globals__SinglePrecFloat_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *libs__globals__FloatDwords_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              *libs__globals__FloatDwords_4 = (MR_Integer) 0;
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
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__AnyIntermod_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__IntermodOpt_5;
    MR_Word libs__globals__IntermodAnalysis_6;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 330, &libs__globals__IntermodOpt_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 335, &libs__globals__IntermodAnalysis_6);
    }
    {
      *libs__globals__AnyIntermod_4 = mercury__bool__or_2_f_0(libs__globals__IntermodOpt_5, libs__globals__IntermodAnalysis_6);
    }
  }
}

void MR_CALL 
libs__globals__current_grade_supports_concurrency_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__ThreadsSupported_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    MR_Word libs__globals__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

    switch (libs__globals__Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word libs__globals__HighLevelCode_6;

          {
            libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 262, &libs__globals__HighLevelCode_6);
          }
          switch (libs__globals__HighLevelCode_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                {
                  libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 225, libs__globals__ThreadsSupported_4);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *libs__globals__ThreadsSupported_4 = (MR_Integer) 1;
        break;
    }
  }
}

void MR_CALL 
libs__globals__current_grade_supports_par_conj_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__ParConjSupported_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__HighLevelCode_6;
    MR_Word libs__globals__Parallel_7;
    MR_Word libs__globals__UseTrail_8;
    MR_Word libs__globals__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    MR_Word libs__globals__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 262, &libs__globals__HighLevelCode_6);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 225, &libs__globals__Parallel_7);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 227, &libs__globals__UseTrail_8);
    }
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
    if (libs__globals__succeeded)
      {
        libs__globals__succeeded = (libs__globals__HighLevelCode_6 == (MR_Integer) 0);
        if (libs__globals__succeeded)
          {
            libs__globals__succeeded = (libs__globals__Parallel_7 == (MR_Integer) 1);
            if (libs__globals__succeeded)
              libs__globals__succeeded = (libs__globals__UseTrail_8 == (MR_Integer) 0);
          }
      }
    if (libs__globals__succeeded)
      *libs__globals__ParConjSupported_4 = (MR_Integer) 1;
    else
      *libs__globals__ParConjSupported_4 = (MR_Integer) 0;
  }
}

void MR_CALL 
libs__globals__current_grade_supports_tabling_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__TablingSupported_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Target_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__GC_Method_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__HighLevelData_7;
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 263, &libs__globals__HighLevelData_7);
    }
    libs__globals__succeeded = (libs__globals__Target_5 == (MR_Integer) 0);
    if (libs__globals__succeeded)
      {
        libs__globals__succeeded = (libs__globals__GC_Method_6 == (MR_Integer) 5);
        libs__globals__succeeded = !(libs__globals__succeeded);
        if (libs__globals__succeeded)
          libs__globals__succeeded = (libs__globals__HighLevelData_7 == (MR_Integer) 0);
      }
    if (libs__globals__succeeded)
      *libs__globals__TablingSupported_4 = (MR_Integer) 1;
    else
      *libs__globals__TablingSupported_4 = (MR_Integer) 0;
  }
}

void MR_CALL 
libs__globals__want_return_var_layouts_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__WantReturnLayouts_4)
{
  {
    MR_bool libs__globals__succeeded;

    {
      MR_Word libs__globals__GC_Method_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
      MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
      MR_Word libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
      MR_Word libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
      MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
      MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
      MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
      MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
      MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
      MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
      MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
      MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
      MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
      MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
      MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
      MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
      MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
      MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

      libs__globals__succeeded = (libs__globals__GC_Method_5 == (MR_Integer) 5);
    }
    if (!(libs__globals__succeeded))
      {
        MR_Word libs__globals__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
        MR_Word libs__globals__TraceSuppress_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
        MR_Word libs__globals__Var_8;
        MR_Word libs__globals__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
        MR_Word libs__globals__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
        MR_Word libs__globals__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
        MR_Word libs__globals__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
        MR_Word libs__globals__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
        MR_Word libs__globals__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
        MR_Word libs__globals__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
        MR_Word libs__globals__Var_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
        MR_Word libs__globals__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word libs__globals__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
        MR_Word libs__globals__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
        MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
        MR_Word libs__globals__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
        MR_Word libs__globals__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
        MR_Word libs__globals__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
        MR_Word libs__globals__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
        MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
        MR_Word libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));

        {
          libs__globals__Var_8 = libs__trace_params__trace_needs_return_info_2_f_0(libs__globals__TraceLevel_6, libs__globals__TraceSuppress_7);
        }
        libs__globals__succeeded = (libs__globals__Var_8 == (MR_Integer) 1);
      }
    if (libs__globals__succeeded)
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 1;
    else
      *libs__globals__WantReturnLayouts_4 = (MR_Integer) 0;
  }
}

MR_Word MR_CALL 
libs__globals__lookup_current_backend_1_f_0(
  MR_Word libs__globals__Globals_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__CurrentBackend_4;
    MR_Word libs__globals__HighLevel_5;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 262, &libs__globals__HighLevel_5);
    }
    switch (libs__globals__HighLevel_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__CurrentBackend_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        libs__globals__CurrentBackend_4 = (MR_Integer) 0;
        break;
    }
    return libs__globals__CurrentBackend_4;
  }
}

void MR_CALL 
libs__globals__lookup_accumulating_option_3_p_0(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_Word * libs__globals__Value_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionData_7;
    MR_Word libs__globals__OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_7;
    MR_Word libs__globals__Accumulating_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_31, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (libs__globals__succeeded)
      {
        libs__globals__Accumulating_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
        *libs__globals__Value_6 = libs__globals__Accumulating_8;
      }
    else
      {
        MR_String libs__globals__Var_11;
        MR_String libs__globals__Var_15;
        MR_String libs__globals__Var_18;
        MR_String libs__globals__Var_23;
        MR_String libs__globals__Var_25;
        MR_String libs__globals__Var_26;

        {
          libs__globals__Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (libs__globals__Option_5)));
        }
        {
          libs__globals__Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__OptionData_7)));
        }
        {
          libs__globals__Var_23 = mercury__string__f_43_43_2_f_0(libs__globals__Var_18, (MR_String) ")");
        }
        {
          libs__globals__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", libs__globals__Var_23);
        }
        {
          libs__globals__Var_26 = mercury__string__f_43_43_2_f_0(libs__globals__Var_15, libs__globals__Var_25);
        }
        {
          libs__globals__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid accumulating option (", libs__globals__Var_26);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", libs__globals__Var_11);
          return;
        }
      }
  }
}

void MR_CALL 
libs__globals__lookup_maybe_string_option_3_p_0(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_Word * libs__globals__Value_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionData_7;
    MR_Word libs__globals__OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_7;
    MR_Word libs__globals__MaybeString_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_31, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (libs__globals__succeeded)
      {
        libs__globals__MaybeString_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
        *libs__globals__Value_6 = libs__globals__MaybeString_8;
      }
    else
      {
        MR_String libs__globals__Var_11;
        MR_String libs__globals__Var_15;
        MR_String libs__globals__Var_18;
        MR_String libs__globals__Var_23;
        MR_String libs__globals__Var_25;
        MR_String libs__globals__Var_26;

        {
          libs__globals__Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (libs__globals__Option_5)));
        }
        {
          libs__globals__Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__OptionData_7)));
        }
        {
          libs__globals__Var_23 = mercury__string__f_43_43_2_f_0(libs__globals__Var_18, (MR_String) ")");
        }
        {
          libs__globals__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", libs__globals__Var_23);
        }
        {
          libs__globals__Var_26 = mercury__string__f_43_43_2_f_0(libs__globals__Var_15, libs__globals__Var_25);
        }
        {
          libs__globals__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid maybe_string option (", libs__globals__Var_26);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", libs__globals__Var_11);
          return;
        }
      }
  }
}

void MR_CALL 
libs__globals__lookup_string_option_3_p_0(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_String * libs__globals__Value_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionData_7;
    MR_Word libs__globals__OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_7;
    MR_String libs__globals__String_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_31, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (libs__globals__succeeded)
      {
        libs__globals__String_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
        *libs__globals__Value_6 = libs__globals__String_8;
      }
    else
      {
        MR_String libs__globals__Var_11;
        MR_String libs__globals__Var_15;
        MR_String libs__globals__Var_18;
        MR_String libs__globals__Var_23;
        MR_String libs__globals__Var_25;
        MR_String libs__globals__Var_26;

        {
          libs__globals__Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (libs__globals__Option_5)));
        }
        {
          libs__globals__Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__OptionData_7)));
        }
        {
          libs__globals__Var_23 = mercury__string__f_43_43_2_f_0(libs__globals__Var_18, (MR_String) ")");
        }
        {
          libs__globals__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", libs__globals__Var_23);
        }
        {
          libs__globals__Var_26 = mercury__string__f_43_43_2_f_0(libs__globals__Var_15, libs__globals__Var_25);
        }
        {
          libs__globals__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid string option (", libs__globals__Var_26);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_string_option\'/3", libs__globals__Var_11);
          return;
        }
      }
  }
}

void MR_CALL 
libs__globals__lookup_maybe_int_option_3_p_0(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_Word * libs__globals__Value_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionData_7;
    MR_Word libs__globals__OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_7;
    MR_Word libs__globals__MaybeInt_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_31, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
    libs__globals__succeeded = ((((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (libs__globals__succeeded)
      {
        libs__globals__MaybeInt_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__globals__OptionData_7, (MR_Integer) 1)));
        *libs__globals__Value_6 = libs__globals__MaybeInt_8;
      }
    else
      {
        MR_String libs__globals__Var_11;
        MR_String libs__globals__Var_15;
        MR_String libs__globals__Var_18;
        MR_String libs__globals__Var_23;
        MR_String libs__globals__Var_25;
        MR_String libs__globals__Var_26;

        {
          libs__globals__Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (libs__globals__Option_5)));
        }
        {
          libs__globals__Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__OptionData_7)));
        }
        {
          libs__globals__Var_23 = mercury__string__f_43_43_2_f_0(libs__globals__Var_18, (MR_String) ")");
        }
        {
          libs__globals__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", libs__globals__Var_23);
        }
        {
          libs__globals__Var_26 = mercury__string__f_43_43_2_f_0(libs__globals__Var_15, libs__globals__Var_25);
        }
        {
          libs__globals__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid maybe_int option (", libs__globals__Var_26);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_maybe_int_option\'/3", libs__globals__Var_11);
          return;
        }
      }
  }
}

void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_Integer * libs__globals__Value_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionData_7;
    MR_Word libs__globals__OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_7;
    MR_Integer libs__globals__Int_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_31, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 2)));
    if (libs__globals__succeeded)
      {
        libs__globals__Int_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__globals__OptionData_7, (MR_Integer) 0)));
        *libs__globals__Value_6 = libs__globals__Int_8;
      }
    else
      {
        MR_String libs__globals__Var_11;
        MR_String libs__globals__Var_15;
        MR_String libs__globals__Var_18;
        MR_String libs__globals__Var_23;
        MR_String libs__globals__Var_25;
        MR_String libs__globals__Var_26;

        {
          libs__globals__Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (libs__globals__Option_5)));
        }
        {
          libs__globals__Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__OptionData_7)));
        }
        {
          libs__globals__Var_23 = mercury__string__f_43_43_2_f_0(libs__globals__Var_18, (MR_String) ")");
        }
        {
          libs__globals__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", libs__globals__Var_23);
        }
        {
          libs__globals__Var_26 = mercury__string__f_43_43_2_f_0(libs__globals__Var_15, libs__globals__Var_25);
        }
        {
          libs__globals__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid int option (", libs__globals__Var_26);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_int_option\'/3", libs__globals__Var_11);
          return;
        }
      }
  }
}

MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_Word libs__globals__Value_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionData_7;
    MR_Word libs__globals__OptionTable_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_7;
    MR_Word libs__globals__Bool_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_25, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
    if (libs__globals__succeeded)
      {
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
        libs__globals__succeeded = (libs__globals__Value_6 == libs__globals__Bool_8);
      }
    else
      {
        MR_String libs__globals__Var_11;
        MR_String libs__globals__Var_15;
        MR_String libs__globals__Var_18;
        MR_String libs__globals__Var_49;
        MR_String libs__globals__Var_51;
        MR_String libs__globals__Var_52;

        {
          libs__globals__Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (libs__globals__Option_5)));
        }
        {
          libs__globals__Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__OptionData_7)));
        }
        {
          libs__globals__Var_49 = mercury__string__f_43_43_2_f_0(libs__globals__Var_18, (MR_String) ")");
        }
        {
          libs__globals__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) " is ", libs__globals__Var_49);
        }
        {
          libs__globals__Var_52 = mercury__string__f_43_43_2_f_0(libs__globals__Var_15, libs__globals__Var_51);
        }
        {
          libs__globals__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid bool option (", libs__globals__Var_52);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", libs__globals__Var_11);
        }
        libs__globals__succeeded = MR_TRUE;
      }
    return libs__globals__succeeded;
  }
}

void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_Word * libs__globals__Value_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionData_7;
    MR_Word libs__globals__OptionTable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_7;
    MR_Word libs__globals__Bool_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_31, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_7);
    }
    libs__globals__OptionData_7 = ((MR_Word) libs__globals__conv0_OptionData_7);
    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__OptionData_7)) == (MR_mktag((MR_Integer) 1)));
    if (libs__globals__succeeded)
      {
        libs__globals__Bool_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__OptionData_7, (MR_Integer) 0)));
        *libs__globals__Value_6 = libs__globals__Bool_8;
      }
    else
      {
        MR_String libs__globals__Var_11;
        MR_String libs__globals__Var_15;
        MR_String libs__globals__Var_18;
        MR_String libs__globals__Var_23;
        MR_String libs__globals__Var_25;
        MR_String libs__globals__Var_26;

        {
          libs__globals__Var_15 = mercury__string__string_1_f_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, ((MR_Box) (libs__globals__Option_5)));
        }
        {
          libs__globals__Var_18 = mercury__string__string_1_f_0((MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__OptionData_7)));
        }
        {
          libs__globals__Var_23 = mercury__string__f_43_43_2_f_0(libs__globals__Var_18, (MR_String) ")");
        }
        {
          libs__globals__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " is ", libs__globals__Var_23);
        }
        {
          libs__globals__Var_26 = mercury__string__f_43_43_2_f_0(libs__globals__Var_15, libs__globals__Var_25);
        }
        {
          libs__globals__Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "invalid bool option (", libs__globals__Var_26);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.globals", (MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", libs__globals__Var_11);
          return;
        }
      }
  }
}

void MR_CALL 
libs__globals__lookup_option_3_p_0(
  MR_Word libs__globals__Globals_4,
  MR_Word libs__globals__Option_5,
  MR_Word * libs__globals__OptionData_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 0)));
    MR_Word libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 1)));
    MR_Word libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 3)));
    MR_Word libs__globals__Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 5)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 6)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 7)));
    MR_Word libs__globals__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 8)));
    MR_Word libs__globals__Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 10)));
    MR_Word libs__globals__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_4, (MR_Integer) 11)));
    MR_Box libs__globals__conv0_OptionData_6;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__globals__OptionTable_7, ((MR_Box) (libs__globals__Option_5)), &libs__globals__conv0_OptionData_6);
    }
    *libs__globals__OptionData_6 = ((MR_Word) libs__globals__conv0_OptionData_6);
  }
}

void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
  MR_Word libs__globals__FileInstallCmd_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__Var_12 << (MR_Integer) 2)) | ((((libs__globals__Var_13 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_18 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_4));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
  MR_Word libs__globals__MaybeFeedback_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__Var_12 << (MR_Integer) 2)) | ((((libs__globals__Var_13 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_18 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_4));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
  MR_Word libs__globals__SSTraceLevel_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__Var_12 << (MR_Integer) 2)) | ((((libs__globals__Var_13 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__SSTraceLevel_4 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_4,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_5)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_7;
    MR_Word libs__globals__Var_8;
    MR_Word libs__globals__Var_9;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;
    MR_Word libs__globals__Var_23;
    MR_Word libs__globals__Var_24;
    MR_Word libs__globals__Var_25;
    MR_Word libs__globals__Var_26;
    MR_Word libs__globals__Var_27;
    MR_Word libs__globals__Var_15;

    {
      libs__globals__Var_7 = libs__trace_params__trace_level_none_0_f_0();
    }
    libs__globals__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 0)));
    libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 1)));
    libs__globals__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) & (MR_Integer) 3);
    libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 3)));
    libs__globals__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 5)));
    libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 6)));
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 7)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 8)));
    libs__globals__Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 10)));
    libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_4, (MR_Integer) 11)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_10 | ((((libs__globals__Var_11 << (MR_Integer) 2)) | ((((libs__globals__Var_12 << (MR_Integer) 5)) | ((((libs__globals__Var_13 << (MR_Integer) 7)) | ((((libs__globals__Var_14 << (MR_Integer) 9)) | ((libs__globals__Var_7 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_17 | ((libs__globals__Var_18 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_23 | ((((libs__globals__Var_24 << (MR_Integer) 3)) | ((libs__globals__Var_25 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_26));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_27));
    }
  }
}

void MR_CALL 
libs__globals__set_trace_level_3_p_0(
  MR_Word libs__globals__TraceLevel_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__Var_12 << (MR_Integer) 2)) | ((((libs__globals__Var_13 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__TraceLevel_4 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_18 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_tags_method_3_p_0(
  MR_Word libs__globals__Tags_Method_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__Var_12 << (MR_Integer) 2)) | ((((libs__globals__Tags_Method_4 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_18 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_gc_method_3_p_0(
  MR_Word libs__globals__GC_Method_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__GC_Method_4 << (MR_Integer) 2)) | ((((libs__globals__Var_13 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_18 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_op_mode_3_p_0(
  MR_Word libs__globals__OpMode_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__OpMode_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__Var_12 << (MR_Integer) 2)) | ((((libs__globals__Var_13 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_18 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_options_3_p_0(
  MR_Word libs__globals__Options_4,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_6,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_7)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 1)));
    MR_Word libs__globals__Var_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 3)));
    MR_Word libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 5)));
    MR_Word libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 6)));
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 7)));
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 8)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 10)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 11)));
    MR_Word libs__globals__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_11 | ((((libs__globals__Var_12 << (MR_Integer) 2)) | ((((libs__globals__Var_13 << (MR_Integer) 5)) | ((((libs__globals__Var_14 << (MR_Integer) 7)) | ((((libs__globals__Var_15 << (MR_Integer) 9)) | ((libs__globals__Var_16 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_18 | ((libs__globals__Var_19 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_24 | ((((libs__globals__Var_25 << (MR_Integer) 3)) | ((libs__globals__Var_26 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_27));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_28));
    }
  }
}

void MR_CALL 
libs__globals__set_option_4_p_0(
  MR_Word libs__globals__Option_5,
  MR_Word libs__globals__OptionData_6,
  MR_Word libs__globals__STATE_VARIABLE_Globals_0_10,
  MR_Word * libs__globals__STATE_VARIABLE_Globals_11)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__OptionTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
    MR_Word libs__globals__OptionTable_9;
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)));
    MR_Word libs__globals__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)));
    MR_Word libs__globals__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
    MR_Word libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
    MR_Word libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
    MR_Word libs__globals__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
    MR_Word libs__globals__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
    MR_Word libs__globals__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
    MR_Word libs__globals__Var_41;
    MR_Word libs__globals__Var_42;
    MR_Word libs__globals__Var_43;
    MR_Word libs__globals__Var_44;
    MR_Word libs__globals__Var_45;
    MR_Word libs__globals__Var_46;
    MR_Word libs__globals__Var_47;
    MR_Word libs__globals__Var_48;
    MR_Word libs__globals__Var_49;
    MR_Word libs__globals__Var_50;
    MR_Word libs__globals__Var_51;
    MR_Word libs__globals__Var_52;
    MR_Word libs__globals__Var_53;
    MR_Word libs__globals__Var_54;
    MR_Word libs__globals__Var_55;
    MR_Word libs__globals__Var_56;
    MR_Word libs__globals__Var_57;
    MR_Word libs__globals__Var_58;
    MR_Word libs__globals__Var_59;
    MR_Word libs__globals__Var_40;

    {
      mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) (libs__globals__Option_5)), ((MR_Box) (libs__globals__OptionData_6)), libs__globals__OptionTable0_8, &libs__globals__OptionTable_9);
    }
    libs__globals__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 0)));
    libs__globals__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 1)));
    libs__globals__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) & (MR_Integer) 3);
    libs__globals__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    libs__globals__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    libs__globals__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 3)));
    libs__globals__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 5)));
    libs__globals__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 6)));
    libs__globals__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 7)));
    libs__globals__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 8)));
    libs__globals__Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 10)));
    libs__globals__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__STATE_VARIABLE_Globals_0_10, (MR_Integer) 11)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__STATE_VARIABLE_Globals_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__OptionTable_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Var_42 | ((((libs__globals__Var_43 << (MR_Integer) 2)) | ((((libs__globals__Var_44 << (MR_Integer) 5)) | ((((libs__globals__Var_45 << (MR_Integer) 7)) | ((((libs__globals__Var_46 << (MR_Integer) 9)) | ((libs__globals__Var_47 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__Var_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__Var_49 | ((libs__globals__Var_50 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__Var_51));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__Var_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__Var_53));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__Var_54));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__Var_55 | ((((libs__globals__Var_56 << (MR_Integer) 3)) | ((libs__globals__Var_57 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__Var_58));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__Var_59));
    }
  }
}

void MR_CALL 
libs__globals__get_limit_error_contexts_map_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_trace_level_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    MR_Word libs__globals__Var_9;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_tags_method_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    MR_Word libs__globals__Var_8;
    MR_Word libs__globals__Var_9;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_gc_method_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    MR_Word libs__globals__Var_7;
    MR_Word libs__globals__Var_8;
    MR_Word libs__globals__Var_9;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

static void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
  MR_Box libs__globals__closure_arg,
  MR_Box libs__globals__wrapper_arg_1,
  MR_Box * libs__globals__wrapper_arg_2)
{
  {
    MR_Box libs__globals__closure = libs__globals__closure_arg;
    MR_Word libs__globals__conv0_ForeignLang_4;

    {
      libs__globals__convert_foreign_language_det_2_p_0(((MR_String) libs__globals__wrapper_arg_1), &libs__globals__conv0_ForeignLang_4);
    }
    *libs__globals__wrapper_arg_2 = ((MR_Box) (libs__globals__conv0_ForeignLang_4));
  }
}

void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__ForeignLangs_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__LangStrs_5;

    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__globals__Globals_3, (MR_Integer) 269, &libs__globals__LangStrs_5);
    }
    {
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &libs__globals_scalar_common_2[4], libs__globals__LangStrs_5, libs__globals__ForeignLangs_4);
    }
  }
}

void MR_CALL 
libs__globals__get_target_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    MR_Word libs__globals__Var_6;
    MR_Word libs__globals__Var_7;
    MR_Word libs__globals__Var_8;
    MR_Word libs__globals__Var_9;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    libs__globals__Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_op_mode_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    MR_Word libs__globals__Var_5;
    MR_Word libs__globals__Var_6;
    MR_Word libs__globals__Var_7;
    MR_Word libs__globals__Var_8;
    MR_Word libs__globals__Var_9;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    libs__globals__Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    libs__globals__Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__get_options_2_p_0(
  MR_Word libs__globals__Globals_3,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__Var_4;
    MR_Word libs__globals__Var_5;
    MR_Word libs__globals__Var_6;
    MR_Word libs__globals__Var_7;
    MR_Word libs__globals__Var_8;
    MR_Word libs__globals__Var_9;
    MR_Word libs__globals__Var_10;
    MR_Word libs__globals__Var_11;
    MR_Word libs__globals__Var_12;
    MR_Word libs__globals__Var_13;
    MR_Word libs__globals__Var_14;
    MR_Word libs__globals__Var_15;
    MR_Word libs__globals__Var_16;
    MR_Word libs__globals__Var_17;
    MR_Word libs__globals__Var_18;
    MR_Word libs__globals__Var_19;
    MR_Word libs__globals__Var_20;
    MR_Word libs__globals__Var_21;
    MR_Word libs__globals__Var_22;

    *libs__globals__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 0)));
    libs__globals__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 1)));
    libs__globals__Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) & (MR_Integer) 3);
    libs__globals__Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 7);
    libs__globals__Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 5)) & (MR_Integer) 3);
    libs__globals__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 7)) & (MR_Integer) 3);
    libs__globals__Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    libs__globals__Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 2)))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    libs__globals__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 3)));
    libs__globals__Var_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) & (MR_Integer) 3);
    libs__globals__Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 4)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    libs__globals__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 5)));
    libs__globals__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 6)));
    libs__globals__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 7)));
    libs__globals__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 8)));
    libs__globals__Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) & (MR_Integer) 7);
    libs__globals__Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 3)) & (MR_Integer) 7);
    libs__globals__Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 9)))) >> (MR_Integer) 6)) & (MR_Integer) 7);
    libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 10)));
    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__Globals_3, (MR_Integer) 11)));
  }
}

void MR_CALL 
libs__globals__globals_init_21_p_0(
  MR_Word libs__globals__Options_22,
  MR_Word libs__globals__OpMode_23,
  MR_Word libs__globals__Target_24,
  MR_Word libs__globals__GC_Method_25,
  MR_Word libs__globals__TagsMethod_26,
  MR_Word libs__globals__TerminationNorm_27,
  MR_Word libs__globals__Termination2Norm_28,
  MR_Word libs__globals__TraceLevel_29,
  MR_Word libs__globals__TraceSuppress_30,
  MR_Word libs__globals__SSTraceLevel_31,
  MR_Word libs__globals__MaybeThreadSafe_32,
  MR_Word libs__globals__C_CompilerType_33,
  MR_Word libs__globals__CSharp_CompilerType_34,
  MR_Word libs__globals__ReuseStrategy_35,
  MR_Word libs__globals__MaybeFeedback_36,
  MR_Word libs__globals__HostEnvType_37,
  MR_Word libs__globals__SystemEnvType_38,
  MR_Word libs__globals__TargetEnvType_39,
  MR_Word libs__globals__FileInstallCmd_40,
  MR_Word libs__globals__LimitErrorContextsMap_41,
  MR_Word * libs__globals__Globals_42)
{
  {
    MR_bool libs__globals__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *libs__globals__Globals_42 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__globals__Options_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (libs__globals__OpMode_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((libs__globals__Target_24 | ((((libs__globals__GC_Method_25 << (MR_Integer) 2)) | ((((libs__globals__TagsMethod_26 << (MR_Integer) 5)) | ((((libs__globals__TerminationNorm_27 << (MR_Integer) 7)) | ((((libs__globals__Termination2Norm_28 << (MR_Integer) 9)) | ((libs__globals__TraceLevel_29 << (MR_Integer) 11)))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (libs__globals__TraceSuppress_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((libs__globals__SSTraceLevel_31 | ((libs__globals__MaybeThreadSafe_32 << (MR_Integer) 2)))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (libs__globals__C_CompilerType_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (libs__globals__CSharp_CompilerType_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (libs__globals__ReuseStrategy_35));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (libs__globals__MaybeFeedback_36));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((libs__globals__HostEnvType_37 | ((((libs__globals__SystemEnvType_38 << (MR_Integer) 3)) | ((libs__globals__TargetEnvType_39 << (MR_Integer) 6)))))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (libs__globals__FileInstallCmd_40));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (libs__globals__LimitErrorContextsMap_41));
    }
  }
}

void MR_CALL 
libs__globals__convert_limit_error_contexts_3_p_0(
  MR_Word libs__globals__Options_4,
  MR_Word * libs__globals__BadOptions_5,
  MR_Word * libs__globals__Map_6)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word libs__globals__RevBadOptions_7;
    MR_Word libs__globals__Var_9;

    {
      libs__globals__Var_9 = mercury__map__init_0_f_0(libs__globals__TypeCtorInfo_10_10, (MR_Word) &libs__globals_scalar_common_1[0]);
    }
    {
      libs__globals__convert_limit_error_contexts_acc_5_p_0(libs__globals__Options_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__globals__RevBadOptions_7, libs__globals__Var_9, libs__globals__Map_6);
    }
    {
      mercury__list__reverse_2_p_0(libs__globals__TypeCtorInfo_10_10, libs__globals__RevBadOptions_7, libs__globals__BadOptions_5);
    }
  }
}

MR_bool MR_CALL 
libs__globals__convert_ssdb_trace_level_3_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Word libs__globals__HeadVar__2_2,
  MR_Word * libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__lo_0;
    MR_Integer libs__globals__hi_1;
    MR_Integer libs__globals__mid_2;
    MR_Integer libs__globals__result_3;

    /* binary string jump switch */
    libs__globals__lo_0 = (MR_Integer) 0;
    libs__globals__hi_1 = (MR_Integer) 3;
    do
      {
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_15[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_15_0__vct_15_f_0);
        if ((libs__globals__result_3 == (MR_Integer) 0))
          {
            switch (((&libs__globals_vector_common_15[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_15_0__vct_15_f_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* case "deep" */
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
                  libs__globals__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  /* case "default" */
                  switch (libs__globals__HeadVar__2_2) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *libs__globals__HeadVar__3_3 = (MR_Integer) 2;
                      break;
                  }
                  libs__globals__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* case "none" */
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 0;
                  libs__globals__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  /* case "shallow" */
                  *libs__globals__HeadVar__3_3 = (MR_Integer) 1;
                  libs__globals__succeeded = MR_TRUE;
                }
                break;
            }
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__globals__result_3 < (MR_Integer) 0))
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
        else
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
      }
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
    libs__globals__succeeded = MR_FALSE;
  label_0:;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__lo_0;
    MR_Integer libs__globals__hi_1;
    MR_Integer libs__globals__mid_2;
    MR_Integer libs__globals__result_3;

    /* binary string simple lookup switch */
    libs__globals__lo_0 = (MR_Integer) 0;
    libs__globals__hi_1 = (MR_Integer) 4;
    do
      {
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_0);
        if ((libs__globals__result_3 == (MR_Integer) 0))
          {
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_14[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_14_0__vct_14_f_1;
            libs__globals__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__globals__result_3 < (MR_Integer) 0))
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
        else
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
      }
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
    libs__globals__succeeded = MR_FALSE;
  label_0:;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Integer libs__globals__NCells_2,
  MR_Word * libs__globals__HeadVar__3_3)
{
  {
    MR_bool libs__globals__succeeded;

    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "same_cons_id") == 0))
      {
        *libs__globals__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__globals__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *libs__globals__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__NCells_2));
        }
        libs__globals__succeeded = MR_TRUE;
      }
    else
      libs__globals__succeeded = MR_FALSE;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;

    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "mono") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
        libs__globals__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "unknown") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
        libs__globals__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "microsoft") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
        libs__globals__succeeded = MR_TRUE;
      }
    else
      libs__globals__succeeded = MR_FALSE;
    return libs__globals__succeeded;
  }
}

static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
  MR_Box libs__globals__closure_arg,
  MR_Box libs__globals__wrapper_arg_1)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Box libs__globals__closure = libs__globals__closure_arg;

    {
      libs__globals__succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__466__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), libs__globals__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) libs__globals__wrapper_arg_1));
    }
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
  MR_String libs__globals__CC_Str_3,
  MR_Word * libs__globals__C_CompilerType_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__C_CompilerType0_5;
    MR_Integer libs__globals__lo_0;
    MR_Integer libs__globals__hi_1;
    MR_Integer libs__globals__mid_2;
    MR_Integer libs__globals__result_3;

    /* binary string simple lookup switch */
    libs__globals__lo_0 = (MR_Integer) 0;
    libs__globals__hi_1 = (MR_Integer) 3;
    do
      {
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
        libs__globals__result_3 = MR_strcmp(libs__globals__CC_Str_3, ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_0);
        if ((libs__globals__result_3 == (MR_Integer) 0))
          {
            libs__globals__C_CompilerType0_5 = ((&libs__globals_vector_common_11[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_1;
            libs__globals__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__globals__result_3 < (MR_Integer) 0))
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
        else
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
      }
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
    libs__globals__succeeded = MR_FALSE;
  label_0:;
    if (libs__globals__succeeded)
      {
        *libs__globals__C_CompilerType_4 = libs__globals__C_CompilerType0_5;
        libs__globals__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word libs__globals__Tokens_13;
        MR_String libs__globals__Major_14;
        MR_String libs__globals__Minor_15;
        MR_String libs__globals__Patch_16;
        MR_String libs__globals__Var_20;
        MR_Word libs__globals__Var_21;
        MR_Word libs__globals__Var_22;
        MR_Word libs__globals__Var_23;
        MR_Word libs__globals__Var_24;

        {
          libs__globals__Tokens_13 = mercury__string__words_separator_2_f_0((MR_Word) &libs__globals_scalar_common_13[0], libs__globals__CC_Str_3);
        }
        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
        if (libs__globals__succeeded)
          {
            libs__globals__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
            libs__globals__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
            libs__globals__succeeded = (strcmp(libs__globals__Var_20, (MR_String) "gcc") == 0);
            if (libs__globals__succeeded)
              {
                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_21)) == (MR_mktag((MR_Integer) 1)));
                if (libs__globals__succeeded)
                  {
                    libs__globals__Major_14 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_21, (MR_Integer) 0)));
                    libs__globals__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_21, (MR_Integer) 1)));
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_22)) == (MR_mktag((MR_Integer) 1)));
                    if (libs__globals__succeeded)
                      {
                        libs__globals__Minor_15 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_22, (MR_Integer) 0)));
                        libs__globals__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_22, (MR_Integer) 1)));
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_23)) == (MR_mktag((MR_Integer) 1)));
                        if (libs__globals__succeeded)
                          {
                            libs__globals__Patch_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_23, (MR_Integer) 0)));
                            libs__globals__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_23, (MR_Integer) 1)));
                            libs__globals__succeeded = (libs__globals__Var_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (libs__globals__succeeded)
          {
            libs__globals__succeeded = (strcmp(libs__globals__Major_14, (MR_String) "u") == 0);
            if (libs__globals__succeeded)
              {
                libs__globals__succeeded = (strcmp(libs__globals__Minor_15, (MR_String) "u") == 0);
                if (libs__globals__succeeded)
                  libs__globals__succeeded = (strcmp(libs__globals__Patch_16, (MR_String) "u") == 0);
              }
            if (libs__globals__succeeded)
              {
                *libs__globals__C_CompilerType_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__globals_scalar_common_2[3]);
                libs__globals__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer libs__globals__Major_42;
                MR_Integer libs__globals__Var_48;

                {
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_14, &libs__globals__Major_42);
                }
                if (libs__globals__succeeded)
                  {
                    libs__globals__Var_48 = (MR_Integer) 2;
                    libs__globals__succeeded = (libs__globals__Major_42 >= libs__globals__Var_48);
                  }
                if (libs__globals__succeeded)
                  {
                    libs__globals__succeeded = (strcmp(libs__globals__Minor_15, (MR_String) "u") == 0);
                    if (libs__globals__succeeded)
                      {
                        MR_Word libs__globals__Var_49;

                        {
                          libs__globals__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), libs__globals__Var_49, 0) = ((MR_Box) (libs__globals__Major_42));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *libs__globals__C_CompilerType_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__Var_49));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        libs__globals__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Integer libs__globals__Minor_43;
                        MR_Integer libs__globals__Var_52;

                        {
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_15, &libs__globals__Minor_43);
                        }
                        if (libs__globals__succeeded)
                          {
                            libs__globals__Var_52 = (MR_Integer) 0;
                            libs__globals__succeeded = (libs__globals__Minor_43 >= libs__globals__Var_52);
                          }
                        if (libs__globals__succeeded)
                          {
                            libs__globals__succeeded = (strcmp(libs__globals__Patch_16, (MR_String) "u") == 0);
                            if (libs__globals__succeeded)
                              {
                                MR_Word libs__globals__Var_53;
                                MR_Word libs__globals__Var_54;

                                {
                                  libs__globals__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), libs__globals__Var_53, 0) = ((MR_Box) (libs__globals__Major_42));
                                }
                                {
                                  libs__globals__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), libs__globals__Var_54, 0) = ((MR_Box) (libs__globals__Minor_43));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  *libs__globals__C_CompilerType_4 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__Var_53));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__Var_54));
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                                libs__globals__succeeded = MR_TRUE;
                              }
                            else
                              {
                                MR_Integer libs__globals__Patch_44;
                                MR_Integer libs__globals__Var_56;

                                {
                                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_16, &libs__globals__Patch_44);
                                }
                                if (libs__globals__succeeded)
                                  {
                                    libs__globals__Var_56 = (MR_Integer) 0;
                                    libs__globals__succeeded = (libs__globals__Patch_44 >= libs__globals__Var_56);
                                  }
                                if (libs__globals__succeeded)
                                  {
                                    MR_Word libs__globals__Var_57;
                                    MR_Word libs__globals__Var_58;
                                    MR_Word libs__globals__Var_59;

                                    {
                                      libs__globals__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), libs__globals__Var_57, 0) = ((MR_Box) (libs__globals__Major_42));
                                    }
                                    {
                                      libs__globals__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), libs__globals__Var_58, 0) = ((MR_Box) (libs__globals__Minor_43));
                                    }
                                    {
                                      libs__globals__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), libs__globals__Var_59, 0) = ((MR_Box) (libs__globals__Patch_44));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      *libs__globals__C_CompilerType_4 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__globals__Var_57));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__globals__Var_58));
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (libs__globals__Var_59));
                                    }
                                    libs__globals__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    libs__globals__succeeded = mercury__builtin__false_0_p_0();
                                  }
                              }
                          }
                        else
                          {
                            libs__globals__succeeded = mercury__builtin__false_0_p_0();
                          }
                      }
                  }
                else
                  {
                    libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
              }
          }
        else
          {
            MR_String libs__globals__Major_33;
            MR_String libs__globals__Minor_34;
            MR_String libs__globals__Patch_35;
            MR_String libs__globals__Var_25;
            MR_Word libs__globals__Var_26;
            MR_Word libs__globals__Var_27;
            MR_Word libs__globals__Var_28;
            MR_Word libs__globals__Var_29;

            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
            if (libs__globals__succeeded)
              {
                libs__globals__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
                libs__globals__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
                libs__globals__succeeded = (strcmp(libs__globals__Var_25, (MR_String) "clang") == 0);
                if (libs__globals__succeeded)
                  {
                    libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_26)) == (MR_mktag((MR_Integer) 1)));
                    if (libs__globals__succeeded)
                      {
                        libs__globals__Major_33 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_26, (MR_Integer) 0)));
                        libs__globals__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_26, (MR_Integer) 1)));
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_27)) == (MR_mktag((MR_Integer) 1)));
                        if (libs__globals__succeeded)
                          {
                            libs__globals__Minor_34 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_27, (MR_Integer) 0)));
                            libs__globals__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_27, (MR_Integer) 1)));
                            libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_28)) == (MR_mktag((MR_Integer) 1)));
                            if (libs__globals__succeeded)
                              {
                                libs__globals__Patch_35 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_28, (MR_Integer) 0)));
                                libs__globals__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_28, (MR_Integer) 1)));
                                libs__globals__succeeded = (libs__globals__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (libs__globals__succeeded)
              {
                MR_Integer libs__globals__Major_64;
                MR_Integer libs__globals__Minor_65;
                MR_Integer libs__globals__Patch_66;
                MR_Word libs__globals__ClangVersion_67;
                MR_Integer libs__globals__Var_68;
                MR_Integer libs__globals__Var_69;
                MR_Integer libs__globals__Var_70;
                MR_Word libs__globals__Var_71;

                {
                  libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Major_33, &libs__globals__Major_64);
                }
                if (libs__globals__succeeded)
                  {
                    {
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Minor_34, &libs__globals__Minor_65);
                    }
                    if (libs__globals__succeeded)
                      {
                        {
                          libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Patch_35, &libs__globals__Patch_66);
                        }
                        if (libs__globals__succeeded)
                          {
                            libs__globals__Var_68 = (MR_Integer) 0;
                            libs__globals__succeeded = (libs__globals__Major_64 >= libs__globals__Var_68);
                            if (libs__globals__succeeded)
                              {
                                libs__globals__Var_69 = (MR_Integer) 0;
                                libs__globals__succeeded = (libs__globals__Minor_65 >= libs__globals__Var_69);
                                if (libs__globals__succeeded)
                                  {
                                    libs__globals__Var_70 = (MR_Integer) 0;
                                    libs__globals__succeeded = (libs__globals__Patch_66 >= libs__globals__Var_70);
                                    if (libs__globals__succeeded)
                                      {
                                        {
                                          libs__globals__ClangVersion_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 0) = ((MR_Box) (libs__globals__Major_64));
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 1) = ((MR_Box) (libs__globals__Minor_65));
                                          MR_hl_field(MR_mktag(0), libs__globals__ClangVersion_67, 2) = ((MR_Box) (libs__globals__Patch_66));
                                        }
                                        {
                                          libs__globals__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), libs__globals__Var_71, 0) = ((MR_Box) (libs__globals__ClangVersion_67));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                          *libs__globals__C_CompilerType_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (libs__globals__Var_71));
                                        }
                                        libs__globals__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_String libs__globals__Version_17;
                MR_String libs__globals__Var_30;
                MR_Word libs__globals__Var_31;
                MR_Word libs__globals__Var_32;

                libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Tokens_13)) == (MR_mktag((MR_Integer) 1)));
                if (libs__globals__succeeded)
                  {
                    libs__globals__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 0)));
                    libs__globals__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Tokens_13, (MR_Integer) 1)));
                    libs__globals__succeeded = (strcmp(libs__globals__Var_30, (MR_String) "msvc") == 0);
                    if (libs__globals__succeeded)
                      {
                        libs__globals__succeeded = ((MR_tag((MR_Word) libs__globals__Var_31)) == (MR_mktag((MR_Integer) 1)));
                        if (libs__globals__succeeded)
                          {
                            libs__globals__Version_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__globals__Var_31, (MR_Integer) 0)));
                            libs__globals__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__globals__Var_31, (MR_Integer) 1)));
                            libs__globals__succeeded = (libs__globals__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
                if (libs__globals__succeeded)
                  {
                    MR_Integer libs__globals__Version_74;
                    MR_Integer libs__globals__Var_75;
                    MR_Word libs__globals__Var_76;

                    {
                      libs__globals__succeeded = mercury__string__to_int_2_p_0(libs__globals__Version_17, &libs__globals__Version_74);
                    }
                    if (libs__globals__succeeded)
                      {
                        libs__globals__Var_75 = (MR_Integer) 0;
                        libs__globals__succeeded = (libs__globals__Version_74 > libs__globals__Var_75);
                        if (libs__globals__succeeded)
                          {
                            {
                              libs__globals__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), libs__globals__Var_76, 0) = ((MR_Box) (libs__globals__Version_74));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              *libs__globals__C_CompilerType_4 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (libs__globals__Var_76));
                            }
                            libs__globals__succeeded = MR_TRUE;
                          }
                      }
                  }
                else
                  {
                    libs__globals__succeeded = mercury__builtin__false_0_p_0();
                  }
              }
          }
      }
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;

    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "no") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
        libs__globals__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "yes") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
        libs__globals__succeeded = MR_TRUE;
      }
    else
      libs__globals__succeeded = MR_FALSE;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__lo_0;
    MR_Integer libs__globals__hi_1;
    MR_Integer libs__globals__mid_2;
    MR_Integer libs__globals__result_3;

    /* binary string simple lookup switch */
    libs__globals__lo_0 = (MR_Integer) 0;
    libs__globals__hi_1 = (MR_Integer) 3;
    do
      {
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_0);
        if ((libs__globals__result_3 == (MR_Integer) 0))
          {
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_9[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_9_0__vct_9_f_1;
            libs__globals__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__globals__result_3 < (MR_Integer) 0))
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
        else
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
      }
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
    libs__globals__succeeded = MR_FALSE;
  label_0:;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_tags_method_2_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;

    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "low") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 1;
        libs__globals__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "high") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 2;
        libs__globals__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(libs__globals__HeadVar__1_1, (MR_String) "none") == 0))
      {
        *libs__globals__HeadVar__2_2 = (MR_Integer) 0;
        libs__globals__succeeded = MR_TRUE;
      }
    else
      libs__globals__succeeded = MR_FALSE;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
  MR_String libs__globals__HeadVar__1_1,
  MR_Word * libs__globals__HeadVar__2_2)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Integer libs__globals__lo_0;
    MR_Integer libs__globals__hi_1;
    MR_Integer libs__globals__mid_2;
    MR_Integer libs__globals__result_3;

    /* binary string simple lookup switch */
    libs__globals__lo_0 = (MR_Integer) 0;
    libs__globals__hi_1 = (MR_Integer) 6;
    do
      {
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
        libs__globals__result_3 = MR_strcmp(libs__globals__HeadVar__1_1, ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_0);
        if ((libs__globals__result_3 == (MR_Integer) 0))
          {
            *libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_8[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_1;
            libs__globals__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__globals__result_3 < (MR_Integer) 0))
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
        else
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
      }
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
    libs__globals__succeeded = MR_FALSE;
  label_0:;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
  MR_String libs__globals__String_3,
  MR_Word * libs__globals__ForeignLanguage_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_String libs__globals__Var_5;
    MR_Integer libs__globals__lo_0;
    MR_Integer libs__globals__hi_1;
    MR_Integer libs__globals__mid_2;
    MR_Integer libs__globals__result_3;

    {
      libs__globals__Var_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
    /* binary string simple lookup switch */
    libs__globals__lo_0 = (MR_Integer) 0;
    libs__globals__hi_1 = (MR_Integer) 5;
    do
      {
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
        libs__globals__result_3 = MR_strcmp(libs__globals__Var_5, ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_0);
        if ((libs__globals__result_3 == (MR_Integer) 0))
          {
            *libs__globals__ForeignLanguage_4 = ((&libs__globals_vector_common_7[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_1;
            libs__globals__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__globals__result_3 < (MR_Integer) 0))
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
        else
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
      }
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
    libs__globals__succeeded = MR_FALSE;
  label_0:;
    return libs__globals__succeeded;
  }
}

MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
  MR_String libs__globals__String_3,
  MR_Word * libs__globals__Target_4)
{
  {
    MR_bool libs__globals__succeeded;
    MR_String libs__globals__Var_5;
    MR_Integer libs__globals__lo_0;
    MR_Integer libs__globals__hi_1;
    MR_Integer libs__globals__mid_2;
    MR_Integer libs__globals__result_3;

    {
      libs__globals__Var_5 = mercury__string__to_lower_1_f_0(libs__globals__String_3);
    }
    /* binary string simple lookup switch */
    libs__globals__lo_0 = (MR_Integer) 0;
    libs__globals__hi_1 = (MR_Integer) 3;
    do
      {
        libs__globals__mid_2 = (((libs__globals__lo_0 + libs__globals__hi_1)) / (MR_Integer) 2);
        libs__globals__result_3 = MR_strcmp(libs__globals__Var_5, ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_0);
        if ((libs__globals__result_3 == (MR_Integer) 0))
          {
            *libs__globals__Target_4 = ((&libs__globals_vector_common_6[0 + libs__globals__mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_1;
            libs__globals__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__globals__result_3 < (MR_Integer) 0))
          libs__globals__hi_1 = (libs__globals__mid_2 - (MR_Integer) 1);
        else
          libs__globals__lo_0 = (libs__globals__mid_2 + (MR_Integer) 1);
      }
    while ((libs__globals__lo_0 <= libs__globals__hi_1));
    libs__globals__succeeded = MR_FALSE;
  label_0:;
    return libs__globals__succeeded;
  }
}

MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
  MR_Word libs__globals__HeadVar__1_1)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_5[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_5_0__vct_5_f_0;

    return libs__globals__HeadVar__2_2;
  }
}

MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
  MR_Word libs__globals__HeadVar__1_1)
{
  {
    MR_bool libs__globals__succeeded;
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[8 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

    return libs__globals__HeadVar__2_2;
  }
}

MR_String MR_CALL 
libs__globals__foreign_language_string_1_f_0(
  MR_Word libs__globals__HeadVar__1_1)
{
  {
    MR_bool libs__globals__succeeded;
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[4 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

    return libs__globals__HeadVar__2_2;
  }
}

MR_String MR_CALL 
libs__globals__compilation_target_string_1_f_0(
  MR_Word libs__globals__HeadVar__1_1)
{
  {
    MR_bool libs__globals__succeeded;
    MR_String libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_4[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

    return libs__globals__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__globals__target_lang_to_foreign_export_lang_1_f_0(
  MR_Word libs__globals__HeadVar__1_1)
{
  {
    MR_bool libs__globals__succeeded;
    MR_Word libs__globals__HeadVar__2_2 = ((&libs__globals_vector_common_3[0 + libs__globals__HeadVar__1_1]))->libs__globals__vector_common_type_3_0__vct_3_f_0;

    return libs__globals__HeadVar__2_2;
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
