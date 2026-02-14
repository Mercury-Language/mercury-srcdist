/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2026-02-14
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module libs.globals.
// :- implementation.

/*
INIT mercury__libs__globals__init
REQUIRED_INIT mercury__libs__globals__required_init
ENDINIT
*/

#include "libs.globals.mih"
#include "libs.globals.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_1;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_backend_0[2];

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

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_3[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3;

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[2];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[5];

static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[5];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_c_incl_ext_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_c_incl_ext_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_c_incl_ext_0[3];

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_compilation_target_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[3];

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_compiler_output_stream_0_0[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_compiler_output_stream_0_1[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_1;

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_2;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_1[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_2[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_compiler_output_stream_0[3];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_compiler_output_stream_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_compiler_output_stream_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_csharp_compiler_type_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_env_type_0[5];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_env_type_0[5];

static const MR_Integer libs__globals__libs__globals__functor_number_map_env_type_0[5];

static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_c_incl_ext_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_interface_ext_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_intermod_ext_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_lib_ext_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_stdlib_ext_0list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_ext_dirs_maps_0_0[5];

static const MR_ConstString libs__globals__libs__globals__field_names_ext_dirs_maps_0_0[5];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_ext_dirs_maps_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_ext_dirs_maps_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_ext_dirs_maps_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_ext_dirs_maps_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_ext_dirs_maps_0[1];

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[1];

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

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_foreign_language_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_gc_method_0[6];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_gc_method_0[6];

static const MR_Integer libs__globals__libs__globals__functor_number_map_gc_method_0[6];

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__feedback_info__type_ctor_info_feedback_info_0;

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_static_or_shared_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[26];

static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[26];

static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[26];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_install_method_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_install_method_0_1;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_install_method_0[2];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_install_method_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_install_method_0[2];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_3;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_4;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_5;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_interface_ext_0[6];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_interface_ext_0[6];

static const MR_Integer libs__globals__libs__globals__functor_number_map_interface_ext_0[6];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_3;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_4;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_5;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_6;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_7;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_intermod_ext_0[8];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_intermod_ext_0[8];

static const MR_Integer libs__globals__libs__globals__functor_number_map_intermod_ext_0[8];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_lib_ext_0_0;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_lib_ext_0[1];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_lib_ext_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_lib_ext_0[1];

static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1];

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_linked_target_ext_info_0_0[2];

static const MR_DuArgLocn libs__globals__libs__globals__field_locns_linked_target_ext_info_0_0[2];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_linked_target_ext_info_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_linked_target_ext_info_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_linked_target_ext_info_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_linked_target_ext_info_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_linked_target_ext_info_0[1];

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0libs__globals__type_ctor_info_linked_target_ext_info_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_3;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_4;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_5;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_6;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_7;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_8;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_linked_target_kind_0[9];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_linked_target_kind_0[9];

static const MR_Integer libs__globals__libs__globals__functor_number_map_linked_target_kind_0[9];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_1;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_maybe_item_version_numbers_0[2];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_maybe_item_version_numbers_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_maybe_item_version_numbers_0[2];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_1;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_maybe_smart_recompilation_0[2];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_maybe_smart_recompilation_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_maybe_smart_recompilation_0[2];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_0;

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_maybe_stdlib_grades_0_1[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_1;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_maybe_stdlib_grades_0_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_maybe_stdlib_grades_0_1[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_maybe_stdlib_grades_0[2];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_maybe_stdlib_grades_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_maybe_stdlib_grades_0[2];

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_read_only_globals_0_0[6];

static const MR_ConstString libs__globals__libs__globals__field_names_read_only_globals_0_0[6];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_read_only_globals_0_0;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_read_only_globals_0_0[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_read_only_globals_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_read_only_globals_0[1];

static const MR_Integer libs__globals__libs__globals__functor_number_map_read_only_globals_0[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0;

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1];

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1;

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1];

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2];

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_reuse_strategy_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_reuse_strategy_0[2];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_ssdb_trace_level_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_1;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_static_or_shared_0[2];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_static_or_shared_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_static_or_shared_0[2];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_stdlib_ext_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_stdlib_ext_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_stdlib_ext_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_2;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_subdir_setting_0[3];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_subdir_setting_0[3];

static const MR_Integer libs__globals__libs__globals__functor_number_map_subdir_setting_0[3];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_termination_norm_0[4];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_termination_norm_0[4];

static const MR_Integer libs__globals__libs__globals__functor_number_map_termination_norm_0[4];

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_word_size_0_0;

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_word_size_0_1;

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_word_size_0[2];

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_word_size_0[2];

static const MR_Integer libs__globals__libs__globals__functor_number_map_word_size_0[2];

static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__691__1_2_p_0(
  MR_Char HeadVar__1_11,
  MR_Char HeadVar__2_39);

static MR_bool MR_CALL 
libs__globals____Unify____read_only_globals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__globals____Compare____read_only_globals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
libs__globals____Compare____compiler_output_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__globals____Unify____compiler_output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__globals__unsafe_set_output_stream_recompile_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_output_stream_recompile_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_output_stream_recompile_0_p_0(void);

static void MR_CALL 
libs__globals__lock_output_stream_recompile_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_recompile_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_recompile_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_output_stream_debug_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_output_stream_debug_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_output_stream_debug_0_p_0(void);

static void MR_CALL 
libs__globals__lock_output_stream_debug_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_debug_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_debug_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_output_stream_inference_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_output_stream_inference_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_output_stream_inference_0_p_0(void);

static void MR_CALL 
libs__globals__lock_output_stream_inference_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_inference_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_inference_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_output_stream_error_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_output_stream_error_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_output_stream_error_0_p_0(void);

static void MR_CALL 
libs__globals__lock_output_stream_error_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_error_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_error_0_p_0(void);

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
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void);

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
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void);

static void MR_CALL 
libs__globals__unsafe_set_allow_ho_insts_as_modes_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__globals__unsafe_get_allow_ho_insts_as_modes_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__globals__unlock_allow_ho_insts_as_modes_0_p_0(void);

static void MR_CALL 
libs__globals__lock_allow_ho_insts_as_modes_0_p_0(void);

static void MR_CALL 
libs__globals__pre_initialise_mutable_allow_ho_insts_as_modes_0_p_0(void);

static void MR_CALL 
libs__globals__initialise_mutable_allow_ho_insts_as_modes_0_p_0(void);

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
libs__globals____Unify____c_incl_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____c_incl_ext_0_0_10001(
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
libs__globals____Unify____compiler_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____compiler_output_stream_0_0_10001(
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
libs__globals____Unify____ext_c_incl_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ext_c_incl_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____ext_dirs_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ext_dirs_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____ext_interface_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ext_interface_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____ext_intermod_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ext_intermod_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____ext_lib_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ext_lib_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____ext_stdlib_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ext_stdlib_dirs_map_0_0_10001(
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
libs__globals____Unify____install_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____install_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____interface_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____interface_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____intermod_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____intermod_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____lib_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____lib_ext_0_0_10001(
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
libs__globals____Unify____linked_target_ext_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____linked_target_ext_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____linked_target_ext_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____linked_target_ext_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____linked_target_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____linked_target_kind_0_0_10001(
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
libs__globals____Unify____maybe_item_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____maybe_item_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____maybe_smart_recompilation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____maybe_smart_recompilation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____maybe_stdlib_grades_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____maybe_stdlib_grades_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____read_only_globals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____read_only_globals_0_0_10001(
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
libs__globals____Unify____ssdb_trace_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____static_or_shared_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____static_or_shared_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____stdlib_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____stdlib_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__globals____Unify____subdir_setting_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____subdir_setting_0_0_10001(
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

static MR_bool MR_CALL 
libs__globals____Unify____word_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__globals____Compare____word_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__globals_scalar_common_1[15][2];

static /* final */ const MR_Box libs__globals_scalar_common_2[11][3];

static /* final */ const MR_Box libs__globals_scalar_common_3[1][1];

static /* final */ const MR_Box libs__globals_scalar_common_9[3][5];

static /* final */ const MR_Box libs__globals_scalar_common_10[1][4];


struct libs__globals__vector_common_type_4_0_s {
  const MR_Word libs__globals__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[6];

struct libs__globals__vector_common_type_5_0_s {
  const MR_String libs__globals__vector_common_type_5_0__vct_5_f_0;
  const MR_Word libs__globals__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[10];

struct libs__globals__vector_common_type_6_0_s {
  const MR_String libs__globals__vector_common_type_6_0__vct_6_f_0;
  const MR_Word libs__globals__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[7];

struct libs__globals__vector_common_type_7_0_s {
  const MR_String libs__globals__vector_common_type_7_0__vct_7_f_0;
  const MR_Word libs__globals__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[4];

struct libs__globals__vector_common_type_8_0_s {
  const MR_String libs__globals__vector_common_type_8_0__vct_8_f_0;
  const MR_Word libs__globals__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[6];

struct libs__globals__vector_common_type_11_0_s {
  const MR_String libs__globals__vector_common_type_11_0__vct_11_f_0;
  const MR_Word libs__globals__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[5];

struct libs__globals__vector_common_type_12_0_s {
  const MR_String libs__globals__vector_common_type_12_0__vct_12_f_0;
  const MR_Integer libs__globals__vector_common_type_12_0__vct_12_f_1;
};

static /* final */ const struct libs__globals__vector_common_type_12_0_s libs__globals_vector_common_12[4];



static /* final */ const MR_Box libs__globals_scalar_common_1[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_clang_version_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__feedback_info__mdbcomp__feedback__feedback_info__type_ctor_info_feedback_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "Java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(1, &libs__globals_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "C#")),
    ((MR_Box) (MR_mkword(1, &libs__globals_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(1, &libs__globals_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "C")),
    ((MR_Box) (MR_mkword(1, &libs__globals_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(1, &libs__globals_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals_scalar_common_1[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&libs__globals_scalar_common_9[1])),
    ((MR_Box) (libs__globals__convert_limit_error_contexts_acc_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&libs__globals_scalar_common_9[2])),
    ((MR_Box) (libs__globals__get_backend_foreign_languages_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box libs__globals_scalar_common_9[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box libs__globals_scalar_common_10[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__globals_scalar_common_9[0])),
    ((MR_Box) (libs__globals__convert_c_compiler_type_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 95))
  },
};


static /* final */ const struct libs__globals__vector_common_type_4_0_s libs__globals_vector_common_4[6] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 0 },
};

static /* final */ const struct libs__globals__vector_common_type_5_0_s libs__globals_vector_common_5[10] = {
  /* row   0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "c sharp",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "c#",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row   6 */
  {
    (MR_String) "c sharp",
    (MR_Integer) 1
  },
  /* row   7 */
  {
    (MR_String) "c#",
    (MR_Integer) 1
  },
  /* row   8 */
  {
    (MR_String) "csharp",
    (MR_Integer) 1
  },
  /* row   9 */
  {
    (MR_String) "java",
    (MR_Integer) 2
  },
};

static /* final */ const struct libs__globals__vector_common_type_6_0_s libs__globals_vector_common_6[7] = {
  /* row   0 */
  {
    (MR_String) "accurate",
    (MR_Integer) 5
  },
  /* row   1 */
  {
    (MR_String) "automatic",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "boehm",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "boehm_debug",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "conservative",
    (MR_Integer) 2
  },
  /* row   5 */
  {
    (MR_String) "hgc",
    (MR_Integer) 4
  },
  /* row   6 */
  {
    (MR_String) "none",
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__globals__vector_common_type_7_0_s libs__globals_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "num-data-elems",
    (MR_Integer) 2
  },
  /* row   1 */
  {
    (MR_String) "simple",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "size-data-elems",
    (MR_Integer) 3
  },
  /* row   3 */
  {
    (MR_String) "total",
    (MR_Integer) 1
  },
};

static /* final */ const struct libs__globals__vector_common_type_8_0_s libs__globals_vector_common_8[6] = {
  /* row   0 */
  {
    (MR_String) "clang",
    (MR_Word) (MR_mkword(2, &libs__globals_scalar_common_3[0]))
  },
  /* row   1 */
  {
    (MR_String) "gcc",
    (MR_Word) (MR_mkword(1, &libs__globals_scalar_common_2[8]))
  },
  /* row   2 */
  {
    (MR_String) "msvc",
    (MR_Word) (MR_mkword(3, &libs__globals_scalar_common_1[13]))
  },
  /* row   3 */
  {
    (MR_String) "msvc_x64",
    (MR_Word) (MR_mkword(3, &libs__globals_scalar_common_1[14]))
  },
  /* row   4 */
  {
    (MR_String) "msvc_x86",
    (MR_Word) (MR_mkword(3, &libs__globals_scalar_common_1[13]))
  },
  /* row   5 */
  {
    (MR_String) "unknown",
    (MR_Word) ((MR_Unsigned) 0U)
  },
};

static /* final */ const struct libs__globals__vector_common_type_11_0_s libs__globals_vector_common_11[5] = {
  /* row   0 */
  {
    (MR_String) "cygwin",
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_String) "msys",
    (MR_Integer) 2
  },
  /* row   2 */
  {
    (MR_String) "posix",
    (MR_Integer) 0
  },
  /* row   3 */
  {
    (MR_String) "powershell",
    (MR_Integer) 4
  },
  /* row   4 */
  {
    (MR_String) "windows",
    (MR_Integer) 3
  },
};

static /* final */ const struct libs__globals__vector_common_type_12_0_s libs__globals_vector_common_12[4] = {
  /* row   0 */
  {
    (MR_String) "deep",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "default",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "none",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "shallow",
    (MR_Integer) 3
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.globals.mh"
#line 1263 "globals.m"
MR_Word libs__globals__mutable_variable_allow_ho_insts_as_modes;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_allow_ho_insts_as_modes_lock;
#endif

#line 1266 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 1270 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 1310 "globals.m"
MR_Word libs__globals__mutable_variable_output_stream_error;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_output_stream_error_lock;
#endif

#line 1312 "globals.m"
MR_Word libs__globals__mutable_variable_output_stream_inference;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_output_stream_inference_lock;
#endif

#line 1314 "globals.m"
MR_Word libs__globals__mutable_variable_output_stream_debug;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_output_stream_debug_lock;
#endif

#line 1316 "globals.m"
MR_Word libs__globals__mutable_variable_output_stream_recompile;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_output_stream_recompile_lock;
#endif


#line 1263 "globals.m"
void 
libs__globals__user_init_pred_317_0(void)
#line 1263 "globals.m"
{
#line 1263 "globals.m"
	libs__globals__initialise_mutable_allow_ho_insts_as_modes_0_p_0();
}

#line 1266 "globals.m"
void 
libs__globals__user_init_pred_318_0(void)
#line 1266 "globals.m"
{
#line 1266 "globals.m"
	libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0();
}

#line 1270 "globals.m"
void 
libs__globals__user_init_pred_319_0(void)
#line 1270 "globals.m"
{
#line 1270 "globals.m"
	libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0();
}

#line 1310 "globals.m"
void 
libs__globals__user_init_pred_327_0(void)
#line 1310 "globals.m"
{
#line 1310 "globals.m"
	libs__globals__initialise_mutable_output_stream_error_0_p_0();
}

#line 1312 "globals.m"
void 
libs__globals__user_init_pred_328_0(void)
#line 1312 "globals.m"
{
#line 1312 "globals.m"
	libs__globals__initialise_mutable_output_stream_inference_0_p_0();
}

#line 1314 "globals.m"
void 
libs__globals__user_init_pred_329_0(void)
#line 1314 "globals.m"
{
#line 1314 "globals.m"
	libs__globals__initialise_mutable_output_stream_debug_0_p_0();
}

#line 1316 "globals.m"
void 
libs__globals__user_init_pred_330_0(void)
#line 1316 "globals.m"
{
#line 1316 "globals.m"
	libs__globals__initialise_mutable_output_stream_recompile_0_p_0();
}


static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_0 = {
  (MR_String) "high_level_backend",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_backend_0_1 = {
  (MR_String) "low_level_backend",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_backend_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____backend_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____backend_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "backend",
  { libs__globals__libs__globals__enum_name_ordered_backend_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_backend_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_backend_0,

};

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString libs__globals__libs__globals__field_names_c_compiler_type_0_0[3] = {
  (MR_String) "gcc_major_ver",
  (MR_String) "gcc_minor_ver",
  (MR_String) "gcc_patch_level"
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0 = {
  (MR_String) "cc_gcc",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_c_compiler_type_0_0,
  libs__globals__libs__globals__field_names_c_compiler_type_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_clang_version_0) }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_1[1] = { (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1libs__globals__type_ctor_info_clang_version_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1 = {
  (MR_String) "cc_clang",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  libs__globals__libs__globals__field_types_c_compiler_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_2[1] = { (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2 = {
  (MR_String) "cc_cl_x86",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  libs__globals__libs__globals__field_types_c_compiler_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_c_compiler_type_0_3[1] = { (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3 = {
  (MR_String) "cc_cl_x64",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  libs__globals__libs__globals__field_types_c_compiler_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4 = {
  (MR_String) "cc_unknown",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1[1] = { &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2[1] = { &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3[2] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3
};

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__globals__libs__globals__du_stag_ordered_c_compiler_type_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_c_compiler_type_0[5] = {
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_3,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_2,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_1,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_0,
  &libs__globals__libs__globals__du_functor_desc_c_compiler_type_0_4
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_c_compiler_type_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_c_compiler_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____c_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____c_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "c_compiler_type",
  { libs__globals__libs__globals__du_name_ordered_c_compiler_type_0 },
  { libs__globals__libs__globals__du_ptag_ordered_c_compiler_type_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_c_compiler_type_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_0 = {
  (MR_String) "cie_mh",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_1 = {
  (MR_String) "cie_mih",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_2 = {
  (MR_String) "cie_h",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_c_incl_ext_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_1,
  &libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_c_incl_ext_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_2,
  &libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_c_incl_ext_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_c_incl_ext_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_c_incl_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____c_incl_ext_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____c_incl_ext_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "c_incl_ext",
  { libs__globals__libs__globals__enum_name_ordered_c_incl_ext_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_c_incl_ext_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_c_incl_ext_0,

};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_clang_version_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_clang_version_0_0 = {
  (MR_String) "clang_version",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_clang_version_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_clang_version_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_clang_version_0_0 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_clang_version_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_clang_version_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_clang_version_0[1] = { &libs__globals__libs__globals__du_functor_desc_clang_version_0_0 };

static const MR_Integer libs__globals__libs__globals__functor_number_map_clang_version_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_clang_version_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____clang_version_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____clang_version_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "clang_version",
  { libs__globals__libs__globals__du_name_ordered_clang_version_0 },
  { libs__globals__libs__globals__du_ptag_ordered_clang_version_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_clang_version_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0 = {
  (MR_String) "target_c",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1 = {
  (MR_String) "target_csharp",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2 = {
  (MR_String) "target_java",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_compilation_target_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_compilation_target_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_0,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_1,
  &libs__globals__libs__globals__enum_functor_desc_compilation_target_0_2
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_compilation_target_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_compilation_target_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____compilation_target_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____compilation_target_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "compilation_target",
  { libs__globals__libs__globals__enum_name_ordered_compilation_target_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_compilation_target_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_compilation_target_0,

};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_compiler_output_stream_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_0 = {
  (MR_String) "general_stream",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_compiler_output_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_compiler_output_stream_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_1 = {
  (MR_String) "specific_stream",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  libs__globals__libs__globals__field_types_compiler_output_stream_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_2 = {
  (MR_String) "no_stream",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_2 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_1[1] = { &libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_0 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_2[1] = { &libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_1 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_compiler_output_stream_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_compiler_output_stream_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_compiler_output_stream_0[3] = {
  &libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_0,
  &libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_2,
  &libs__globals__libs__globals__du_functor_desc_compiler_output_stream_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_compiler_output_stream_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_compiler_output_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____compiler_output_stream_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____compiler_output_stream_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "compiler_output_stream",
  { libs__globals__libs__globals__du_name_ordered_compiler_output_stream_0 },
  { libs__globals__libs__globals__du_ptag_ordered_compiler_output_stream_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_compiler_output_stream_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_0 = {
  (MR_String) "csharp_microsoft",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_1 = {
  (MR_String) "csharp_mono",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_csharp_compiler_type_0_2 = {
  (MR_String) "csharp_unknown",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_csharp_compiler_type_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____csharp_compiler_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____csharp_compiler_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "csharp_compiler_type",
  { libs__globals__libs__globals__enum_name_ordered_csharp_compiler_type_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_csharp_compiler_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_csharp_compiler_type_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_0 = {
  (MR_String) "env_type_posix",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_1 = {
  (MR_String) "env_type_cygwin",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_2 = {
  (MR_String) "env_type_msys",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_3 = {
  (MR_String) "env_type_win_cmd",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_env_type_0_4 = {
  (MR_String) "env_type_powershell",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_env_type_0[5] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____env_type_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____env_type_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "env_type",
  { libs__globals__libs__globals__enum_name_ordered_env_type_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_env_type_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_env_type_0,

};

static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_c_incl_ext_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0),
    (MR_TypeInfo) (&libs__globals__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ext_c_incl_dirs_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____ext_c_incl_dirs_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ext_c_incl_dirs_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ext_c_incl_dirs_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_c_incl_ext_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_interface_ext_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0),
    (MR_TypeInfo) (&libs__globals__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_intermod_ext_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0),
    (MR_TypeInfo) (&libs__globals__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_lib_ext_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0),
    (MR_TypeInfo) (&libs__globals__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_stdlib_ext_0list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0),
    (MR_TypeInfo) (&libs__globals__list__ti_list_1builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_ext_dirs_maps_0_0[5] = {
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_interface_ext_0list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_intermod_ext_0list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_c_incl_ext_0list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_lib_ext_0list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_stdlib_ext_0list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__globals__libs__globals__field_names_ext_dirs_maps_0_0[5] = {
  (MR_String) "edm_interface",
  (MR_String) "edm_intermod",
  (MR_String) "edm_c_incl",
  (MR_String) "edm_lib",
  (MR_String) "edm_stdlib"
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_ext_dirs_maps_0_0 = {
  (MR_String) "ext_dirs_maps",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_ext_dirs_maps_0_0,
  libs__globals__libs__globals__field_names_ext_dirs_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_ext_dirs_maps_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_ext_dirs_maps_0_0 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_ext_dirs_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_ext_dirs_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_ext_dirs_maps_0[1] = { &libs__globals__libs__globals__du_functor_desc_ext_dirs_maps_0_0 };

static const MR_Integer libs__globals__libs__globals__functor_number_map_ext_dirs_maps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ext_dirs_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____ext_dirs_maps_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ext_dirs_maps_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ext_dirs_maps",
  { libs__globals__libs__globals__du_name_ordered_ext_dirs_maps_0 },
  { libs__globals__libs__globals__du_ptag_ordered_ext_dirs_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_ext_dirs_maps_0,

};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ext_interface_dirs_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____ext_interface_dirs_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ext_interface_dirs_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ext_interface_dirs_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_interface_ext_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ext_intermod_dirs_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____ext_intermod_dirs_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ext_intermod_dirs_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ext_intermod_dirs_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_intermod_ext_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ext_lib_dirs_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____ext_lib_dirs_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ext_lib_dirs_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ext_lib_dirs_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_lib_ext_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_ext_stdlib_dirs_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____ext_stdlib_dirs_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ext_stdlib_dirs_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ext_stdlib_dirs_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__globals__type_ctor_info_stdlib_ext_0list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_file_install_cmd_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0 = {
  (MR_String) "install_cmd_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_file_install_cmd_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1 = {
  (MR_String) "install_cmd_cp",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_1 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1[1] = { &libs__globals__libs__globals__du_functor_desc_file_install_cmd_0_0 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_file_install_cmd_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____file_install_cmd_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____file_install_cmd_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "file_install_cmd",
  { libs__globals__libs__globals__du_name_ordered_file_install_cmd_0 },
  { libs__globals__libs__globals__du_ptag_ordered_file_install_cmd_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_file_install_cmd_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0 = {
  (MR_String) "lang_c",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1 = {
  (MR_String) "lang_csharp",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2 = {
  (MR_String) "lang_java",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_foreign_language_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_foreign_language_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_0,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_1,
  &libs__globals__libs__globals__enum_functor_desc_foreign_language_0_2
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_foreign_language_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_foreign_language_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____foreign_language_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____foreign_language_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "foreign_language",
  { libs__globals__libs__globals__enum_name_ordered_foreign_language_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_foreign_language_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_foreign_language_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_0 = {
  (MR_String) "gc_automatic",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_1 = {
  (MR_String) "gc_none",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_2 = {
  (MR_String) "gc_boehm",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_3 = {
  (MR_String) "gc_boehm_debug",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_4 = {
  (MR_String) "gc_hgc",
  INT32_C(4)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_gc_method_0_5 = {
  (MR_String) "gc_accurate",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_gc_method_0[6] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____gc_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____gc_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "gc_method",
  { libs__globals__libs__globals__enum_name_ordered_gc_method_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_gc_method_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_gc_method_0,

};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 libs__globals__maybe__ti_maybe_1mdbcomp__feedback__feedback_info__type_ctor_info_feedback_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__feedback_info__mdbcomp__feedback__feedback_info__type_ctor_info_feedback_info_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_static_or_shared_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0) }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_globals_0_0[26] = {
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0),
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_opt_tuple_0),
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0),
  (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1mdbcomp__feedback__feedback_info__type_ctor_info_feedback_info_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_file_install_cmd_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_ext_dirs_maps_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_maybe_stdlib_grades_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_read_only_globals_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_static_or_shared_0),
  (MR_PseudoTypeInfo) (&libs__globals__set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_static_or_shared_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_subdir_setting_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_word_size_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_gc_method_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_termination_norm_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_termination_norm_0),
  (MR_PseudoTypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_env_type_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_env_type_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_env_type_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_install_method_0)
};

static const MR_ConstString libs__globals__libs__globals__field_names_globals_0_0[26] = {
  (MR_String) "g_default_options",
  (MR_String) "g_options",
  (MR_String) "g_opt_tuple",
  (MR_String) "g_op_mode",
  (MR_String) "g_maybe_feedback",
  (MR_String) "g_file_install_cmd",
  (MR_String) "g_ext_dirs_maps",
  (MR_String) "g_maybe_stdlib_grades",
  (MR_String) "g_read_only",
  (MR_String) "g_csharp_compiler_type",
  (MR_String) "g_linkage",
  (MR_String) "g_mercury_linkage",
  (MR_String) "g_library_install_linkages",
  (MR_String) "g_target",
  (MR_String) "g_subdir_setting",
  (MR_String) "g_word_size",
  (MR_String) "g_gc_method",
  (MR_String) "g_termination_norm",
  (MR_String) "g_termination2_norm",
  (MR_String) "g_trace_level",
  (MR_String) "g_ssdb_trace_level",
  (MR_String) "g_may_be_thread_safe",
  (MR_String) "g_host_env_type",
  (MR_String) "g_system_env_type",
  (MR_String) "g_target_env_type",
  (MR_String) "g_install_method"
};

static const MR_DuArgLocn libs__globals__libs__globals__field_locns_globals_0_0[26] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
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
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 25,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 23,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 22,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 19,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 17,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 15,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 13,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 11,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 7,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 4,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 1,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_globals_0_0 = {
  (MR_String) "globals",
  INT16_C(26),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_globals_0_0,
  libs__globals__libs__globals__field_names_globals_0_0,
  libs__globals__libs__globals__field_locns_globals_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_globals_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_globals_0_0 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_globals_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_globals_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_globals_0[1] = { &libs__globals__libs__globals__du_functor_desc_globals_0_0 };

static const MR_Integer libs__globals__libs__globals__functor_number_map_globals_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_globals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____globals_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____globals_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "globals",
  { libs__globals__libs__globals__du_name_ordered_globals_0 },
  { libs__globals__libs__globals__du_ptag_ordered_globals_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_globals_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_install_method_0_0 = {
  (MR_String) "install_method_external_cmd",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_install_method_0_1 = {
  (MR_String) "install_method_internal_code",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_install_method_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_install_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_install_method_0_1
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_install_method_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_install_method_0_0,
  &libs__globals__libs__globals__enum_functor_desc_install_method_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_install_method_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_install_method_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____install_method_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____install_method_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "install_method",
  { libs__globals__libs__globals__enum_name_ordered_install_method_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_install_method_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_install_method_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_0 = {
  (MR_String) "ife_int0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_1 = {
  (MR_String) "ife_int1",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_2 = {
  (MR_String) "ife_int2",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_3 = {
  (MR_String) "ife_int3",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_4 = {
  (MR_String) "ife_module_dep",
  INT32_C(4)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_interface_ext_0_5 = {
  (MR_String) "ife_src",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_interface_ext_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_1,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_2,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_3,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_4,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_5
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_interface_ext_0[6] = {
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_1,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_2,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_3,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_4,
  &libs__globals__libs__globals__enum_functor_desc_interface_ext_0_5
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_interface_ext_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_interface_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____interface_ext_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____interface_ext_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "interface_ext",
  { libs__globals__libs__globals__enum_name_ordered_interface_ext_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_interface_ext_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_interface_ext_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_0 = {
  (MR_String) "ime_opt_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_1 = {
  (MR_String) "ime_opt_trans",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_2 = {
  (MR_String) "ime_an_analysis_date",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_3 = {
  (MR_String) "ime_an_analysis_status",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_4 = {
  (MR_String) "ime_an_analysis",
  INT32_C(4)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_5 = {
  (MR_String) "ime_an_imdg",
  INT32_C(5)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_6 = {
  (MR_String) "ime_an_request",
  INT32_C(6)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_7 = {
  (MR_String) "ime_src",
  INT32_C(7)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_intermod_ext_0[8] = {
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_1,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_2,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_3,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_4,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_5,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_6,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_7
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_intermod_ext_0[8] = {
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_4,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_2,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_3,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_5,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_6,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_1,
  &libs__globals__libs__globals__enum_functor_desc_intermod_ext_0_7
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_intermod_ext_0[8] = {
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_intermod_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____intermod_ext_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____intermod_ext_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "intermod_ext",
  { libs__globals__libs__globals__enum_name_ordered_intermod_ext_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_intermod_ext_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_intermod_ext_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_lib_ext_0_0 = {
  (MR_String) "le_a",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_lib_ext_0[1] = { &libs__globals__libs__globals__enum_functor_desc_lib_ext_0_0 };

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_lib_ext_0[1] = { &libs__globals__libs__globals__enum_functor_desc_lib_ext_0_0 };

static const MR_Integer libs__globals__libs__globals__functor_number_map_lib_ext_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_lib_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (libs__globals____Unify____lib_ext_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____lib_ext_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "lib_ext",
  { libs__globals__libs__globals__enum_name_ordered_lib_ext_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_lib_ext_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_lib_ext_0,

};

static const MR_FA_TypeInfo_Struct1 libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0) }
};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&libs__globals__list__ti_list_1libs__globals__type_ctor_info_line_number_range_0)
  }
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_limit_error_contexts_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____limit_error_contexts_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____limit_error_contexts_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "limit_error_contexts_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_line_number_range_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__globals__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_line_number_range_0_0 = {
  (MR_String) "line_number_range",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_line_number_range_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_line_number_range_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_line_number_range_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_line_number_range_0[1] = { &libs__globals__libs__globals__du_functor_desc_line_number_range_0_0 };

static const MR_Integer libs__globals__libs__globals__functor_number_map_line_number_range_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_line_number_range_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____line_number_range_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____line_number_range_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "line_number_range",
  { libs__globals__libs__globals__du_name_ordered_line_number_range_0 },
  { libs__globals__libs__globals__du_ptag_ordered_line_number_range_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_line_number_range_0,

};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_linked_target_ext_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_linked_target_kind_0)
};

static const MR_DuArgLocn libs__globals__libs__globals__field_locns_linked_target_ext_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_linked_target_ext_info_0_0 = {
  (MR_String) "linked_target_ext_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_linked_target_ext_info_0_0,
  NULL,
  libs__globals__libs__globals__field_locns_linked_target_ext_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_linked_target_ext_info_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_linked_target_ext_info_0_0 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_linked_target_ext_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_linked_target_ext_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_linked_target_ext_info_0[1] = { &libs__globals__libs__globals__du_functor_desc_linked_target_ext_info_0_0 };

static const MR_Integer libs__globals__libs__globals__functor_number_map_linked_target_ext_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____linked_target_ext_info_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____linked_target_ext_info_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "linked_target_ext_info",
  { libs__globals__libs__globals__du_name_ordered_linked_target_ext_info_0 },
  { libs__globals__libs__globals__du_ptag_ordered_linked_target_ext_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_linked_target_ext_info_0,

};

static const MR_FA_TypeInfo_Struct2 libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0libs__globals__type_ctor_info_linked_target_ext_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0)
  }
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____linked_target_ext_info_map_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____linked_target_ext_info_map_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "linked_target_ext_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0libs__globals__type_ctor_info_linked_target_ext_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_0 = {
  (MR_String) "ltk_object_file",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_1 = {
  (MR_String) "ltk_pic_object_file",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_2 = {
  (MR_String) "ltk_all_object_file",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_3 = {
  (MR_String) "ltk_all_pic_object_file",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_4 = {
  (MR_String) "ltk_executable",
  INT32_C(4)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_5 = {
  (MR_String) "ltk_static_library",
  INT32_C(5)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_6 = {
  (MR_String) "ltk_shared_library",
  INT32_C(6)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_7 = {
  (MR_String) "ltk_library_install",
  INT32_C(7)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_8 = {
  (MR_String) "ltk_library_install_gs_gas",
  INT32_C(8)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_linked_target_kind_0[9] = {
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_0,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_1,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_2,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_3,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_4,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_5,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_6,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_7,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_8
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_linked_target_kind_0[9] = {
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_2,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_3,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_4,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_7,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_8,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_0,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_1,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_6,
  &libs__globals__libs__globals__enum_functor_desc_linked_target_kind_0_5
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_linked_target_kind_0[9] = {
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_linked_target_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____linked_target_kind_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____linked_target_kind_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "linked_target_kind",
  { libs__globals__libs__globals__enum_name_ordered_linked_target_kind_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_linked_target_kind_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_linked_target_kind_0,

};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_may_be_thread_safe_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__globals____Unify____may_be_thread_safe_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____may_be_thread_safe_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "may_be_thread_safe",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_0 = {
  (MR_String) "do_not_disable_item_version_numbers",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_1 = {
  (MR_String) "disable_item_version_numbers",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_maybe_item_version_numbers_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_0,
  &libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_1
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_maybe_item_version_numbers_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_1,
  &libs__globals__libs__globals__enum_functor_desc_maybe_item_version_numbers_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_maybe_item_version_numbers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_maybe_item_version_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____maybe_item_version_numbers_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____maybe_item_version_numbers_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "maybe_item_version_numbers",
  { libs__globals__libs__globals__enum_name_ordered_maybe_item_version_numbers_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_maybe_item_version_numbers_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_maybe_item_version_numbers_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_0 = {
  (MR_String) "do_not_disable_smart_recompilation",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_1 = {
  (MR_String) "disable_smart_recompilation",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_maybe_smart_recompilation_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_0,
  &libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_1
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_maybe_smart_recompilation_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_1,
  &libs__globals__libs__globals__enum_functor_desc_maybe_smart_recompilation_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_maybe_smart_recompilation_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_maybe_smart_recompilation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____maybe_smart_recompilation_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____maybe_smart_recompilation_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "maybe_smart_recompilation",
  { libs__globals__libs__globals__enum_name_ordered_maybe_smart_recompilation_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_maybe_smart_recompilation_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_maybe_smart_recompilation_0,

};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_0 = {
  (MR_String) "stdlib_grades_unknown",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_maybe_stdlib_grades_0_1[1] = { (MR_PseudoTypeInfo) (&libs__globals__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_1 = {
  (MR_String) "stdlib_grades_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__globals__libs__globals__field_types_maybe_stdlib_grades_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_maybe_stdlib_grades_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_0 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_maybe_stdlib_grades_0_1[1] = { &libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_1 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_maybe_stdlib_grades_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__globals__libs__globals__du_stag_ordered_maybe_stdlib_grades_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_maybe_stdlib_grades_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_maybe_stdlib_grades_0[2] = {
  &libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_1,
  &libs__globals__libs__globals__du_functor_desc_maybe_stdlib_grades_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_maybe_stdlib_grades_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_maybe_stdlib_grades_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____maybe_stdlib_grades_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____maybe_stdlib_grades_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "maybe_stdlib_grades",
  { libs__globals__libs__globals__du_name_ordered_maybe_stdlib_grades_0 },
  { libs__globals__libs__globals__du_ptag_ordered_maybe_stdlib_grades_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_maybe_stdlib_grades_0,

};

static const MR_FA_TypeInfo_Struct1 libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0) }
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_read_only_globals_0_0[6] = {
  (MR_PseudoTypeInfo) (&libs__globals__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_reuse_strategy_0),
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1libs__globals__type_ctor_info_line_number_range_0),
  (MR_PseudoTypeInfo) (&libs__globals__tree234__ti_tree234_2builtin__type_ctor_info_string_0libs__globals__type_ctor_info_linked_target_ext_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_c_compiler_type_0)
};

static const MR_ConstString libs__globals__libs__globals__field_names_read_only_globals_0_0[6] = {
  (MR_String) "rog_trace_suppress_items",
  (MR_String) "rog_reuse_strategy",
  (MR_String) "rog_limit_error_contexts_map",
  (MR_String) "rog_linked_target_ext_map",
  (MR_String) "rog_grade_dir",
  (MR_String) "rog_c_compiler_type"
};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_read_only_globals_0_0 = {
  (MR_String) "read_only_globals",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__globals__libs__globals__field_types_read_only_globals_0_0,
  libs__globals__libs__globals__field_names_read_only_globals_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_read_only_globals_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_read_only_globals_0_0 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_read_only_globals_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_read_only_globals_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_name_ordered_read_only_globals_0[1] = { &libs__globals__libs__globals__du_functor_desc_read_only_globals_0_0 };

static const MR_Integer libs__globals__libs__globals__functor_number_map_read_only_globals_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_read_only_globals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____read_only_globals_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____read_only_globals_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "read_only_globals",
  { libs__globals__libs__globals__du_name_ordered_read_only_globals_0 },
  { libs__globals__libs__globals__du_ptag_ordered_read_only_globals_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_read_only_globals_0,

};

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0 = {
  (MR_String) "same_cons_id",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__globals__libs__globals__field_types_reuse_strategy_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1 = {
  (MR_String) "within_n_cells_difference",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__globals__libs__globals__field_types_reuse_strategy_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0[1] = { &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_0 };

static const MR_DuFunctorDescPtr libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1[1] = { &libs__globals__libs__globals__du_functor_desc_reuse_strategy_0_1 };

static const MR_DuPtagLayout libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__globals__libs__globals__du_stag_ordered_reuse_strategy_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__globals____Unify____reuse_strategy_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____reuse_strategy_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "reuse_strategy",
  { libs__globals__libs__globals__du_name_ordered_reuse_strategy_0 },
  { libs__globals__libs__globals__du_ptag_ordered_reuse_strategy_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_reuse_strategy_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_0 = {
  (MR_String) "ssdb_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_1 = {
  (MR_String) "ssdb_shallow",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_ssdb_trace_level_0_2 = {
  (MR_String) "ssdb_deep",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_ssdb_trace_level_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____ssdb_trace_level_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____ssdb_trace_level_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "ssdb_trace_level",
  { libs__globals__libs__globals__enum_name_ordered_ssdb_trace_level_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_ssdb_trace_level_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_ssdb_trace_level_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_0 = {
  (MR_String) "sos_static",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_1 = {
  (MR_String) "sos_shared",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_static_or_shared_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_0,
  &libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_1
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_static_or_shared_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_1,
  &libs__globals__libs__globals__enum_functor_desc_static_or_shared_0_0
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_static_or_shared_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_static_or_shared_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____static_or_shared_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____static_or_shared_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "static_or_shared",
  { libs__globals__libs__globals__enum_name_ordered_static_or_shared_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_static_or_shared_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_static_or_shared_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_0 = {
  (MR_String) "sle_init",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_1 = {
  (MR_String) "sle_jar",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_2 = {
  (MR_String) "sle_dll",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_stdlib_ext_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_1,
  &libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_stdlib_ext_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_2,
  &libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_0,
  &libs__globals__libs__globals__enum_functor_desc_stdlib_ext_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_stdlib_ext_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_stdlib_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____stdlib_ext_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____stdlib_ext_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "stdlib_ext",
  { libs__globals__libs__globals__enum_name_ordered_stdlib_ext_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_stdlib_ext_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_stdlib_ext_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_0 = {
  (MR_String) "use_cur_dir",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_1 = {
  (MR_String) "use_cur_ngs_subdir",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_2 = {
  (MR_String) "use_cur_ngs_gs_subdir",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_subdir_setting_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_0,
  &libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_1,
  &libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_2
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_subdir_setting_0[3] = {
  &libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_0,
  &libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_2,
  &libs__globals__libs__globals__enum_functor_desc_subdir_setting_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_subdir_setting_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_subdir_setting_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____subdir_setting_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____subdir_setting_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "subdir_setting",
  { libs__globals__libs__globals__enum_name_ordered_subdir_setting_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_subdir_setting_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_subdir_setting_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_0 = {
  (MR_String) "norm_simple",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_1 = {
  (MR_String) "norm_total",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_2 = {
  (MR_String) "norm_num_data_elems",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_termination_norm_0_3 = {
  (MR_String) "norm_size_data_elems",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_termination_norm_0[4] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____termination_norm_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____termination_norm_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "termination_norm",
  { libs__globals__libs__globals__enum_name_ordered_termination_norm_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_termination_norm_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_termination_norm_0,

};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_word_size_0_0 = {
  (MR_String) "word_size_32",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__globals__libs__globals__enum_functor_desc_word_size_0_1 = {
  (MR_String) "word_size_64",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_ordinal_ordered_word_size_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_word_size_0_0,
  &libs__globals__libs__globals__enum_functor_desc_word_size_0_1
};

static const MR_EnumFunctorDescPtr libs__globals__libs__globals__enum_name_ordered_word_size_0[2] = {
  &libs__globals__libs__globals__enum_functor_desc_word_size_0_0,
  &libs__globals__libs__globals__enum_functor_desc_word_size_0_1
};

static const MR_Integer libs__globals__libs__globals__functor_number_map_word_size_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__globals__libs__globals__type_ctor_info_word_size_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__globals____Unify____word_size_0_0_10001)),
  ((MR_Box) (libs__globals____Compare____word_size_0_0_10001)),
  (MR_String) "libs.globals",
  (MR_String) "word_size",
  { libs__globals__libs__globals__enum_name_ordered_word_size_0 },
  { libs__globals__libs__globals__enum_ordinal_ordered_word_size_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__globals__libs__globals__functor_number_map_word_size_0,

};

static MR_bool MR_CALL 
libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__691__1_2_p_0(
  MR_Char HeadVar__1_11,
  MR_Char HeadVar__2_39)
{
  MR_bool succeeded = (HeadVar__1_11 == HeadVar__2_39);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____word_size_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____word_size_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____termination_norm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____subdir_setting_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____subdir_setting_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____stdlib_ext_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____stdlib_ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____static_or_shared_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____static_or_shared_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
libs__globals____Unify____read_only_globals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_String ArgY5_12 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = libs__globals____Unify____reuse_strategy_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&libs__globals_scalar_common_2[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&libs__globals_scalar_common_2[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = (strcmp(ArgX5_11, ArgY5_12) == 0);
            if (succeeded)
              succeeded = libs__globals____Unify____c_compiler_type_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____maybe_smart_recompilation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____maybe_smart_recompilation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____maybe_item_version_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____maybe_item_version_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;
  MR_Integer Var_7 = (MR_Integer) (Cast_HeadVar1_4);
  MR_Integer Var_8 = (MR_Integer) (Cast_HeadVar2_5);

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____linked_target_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____linked_target_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____linked_target_ext_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__globals____Unify____linked_target_ext_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____linked_target_ext_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 15);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 15);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____linked_target_ext_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 15);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 15);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____line_number_range_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&libs__globals_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____lib_ext_0_0(
  MR_Word * HeadVar__1_1)
{
  libs__globals__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_108_105_98_115_95_95_103_108_111_98_97_108_115_95_95_108_105_98_95_101_120_116_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
libs__globals__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_108_105_98_115_95_95_103_108_111_98_97_108_115_95_95_108_105_98_95_101_120_116_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
libs__globals____Unify____lib_ext_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
libs__globals____Compare____intermod_ext_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____intermod_ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____interface_ext_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____interface_ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____install_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____install_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____globals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_81 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_82 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_81 == CastY_82);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 25)) & (MR_Integer) 3);
    MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 25)) & (MR_Integer) 3);
    MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 19)) & (MR_Integer) 7);
    MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 19)) & (MR_Integer) 7);
    MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 17)) & (MR_Integer) 3);
    MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 17)) & (MR_Integer) 3);
    MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgX20_61 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 13)) & (MR_Integer) 3);
    MR_Word ArgY20_62 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 13)) & (MR_Integer) 3);
    MR_Word ArgX21_64 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 11)) & (MR_Integer) 3);
    MR_Word ArgY21_65 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 11)) & (MR_Integer) 3);
    MR_Word ArgX22_67 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY22_68 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX23_70 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 7)) & (MR_Integer) 7);
    MR_Word ArgY23_71 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 7)) & (MR_Integer) 7);
    MR_Word ArgX24_73 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY24_74 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX25_76 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 1)) & (MR_Integer) 7);
    MR_Word ArgY25_77 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) >> 1)) & (MR_Integer) 7);
    MR_Word ArgX26_79 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) & (MR_Integer) 1);
    MR_Word ArgY26_80 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        libs__optimization_options____Compare____opt_tuple_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          libs__op_mode____Compare____op_mode_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              libs__globals____Compare____file_install_cmd_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                libs__globals____Compare____ext_dirs_maps_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  libs__globals____Compare____maybe_stdlib_grades_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    libs__globals____Compare____read_only_globals_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_109 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_110 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_109 < Var_110);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_109 > Var_110);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_111 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_112 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_111 < Var_112);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_111 > Var_112);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_113 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_114 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_113 < Var_114);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_113 > Var_114);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[5]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_115 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_116 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_115 < Var_116);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_115 > Var_116);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;
                                MR_Integer Var_117 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_118 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_117 < Var_118);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_117 > Var_118);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;
                                  MR_Integer Var_119 = (MR_Integer) (ArgX16_49);
                                  MR_Integer Var_120 = (MR_Integer) (ArgY16_50);

                                  succeeded = (Var_119 < Var_120);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_119 > Var_120);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;
                                    MR_Integer Var_121 = (MR_Integer) (ArgX17_52);
                                    MR_Integer Var_122 = (MR_Integer) (ArgY17_53);

                                    succeeded = (Var_121 < Var_122);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_121 > Var_122);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;
                                      MR_Integer Var_123 = (MR_Integer) (ArgX18_55);
                                      MR_Integer Var_124 = (MR_Integer) (ArgY18_56);

                                      succeeded = (Var_123 < Var_124);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_123 > Var_124);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;
                                        MR_Integer Var_125 = (MR_Integer) (ArgX19_58);
                                        MR_Integer Var_126 = (MR_Integer) (ArgY19_59);

                                        succeeded = (Var_125 < Var_126);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_125 > Var_126);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          libs__trace_params____Compare____trace_level_0_0(&SubResult20_63, ArgX20_61, ArgY20_62);
                                          succeeded = (SubResult20_63 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;
                                            MR_Integer Var_127 = (MR_Integer) (ArgX21_64);
                                            MR_Integer Var_128 = (MR_Integer) (ArgY21_65);

                                            succeeded = (Var_127 < Var_128);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_127 > Var_128);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;
                                              MR_Integer Var_129 = (MR_Integer) (ArgX22_67);
                                              MR_Integer Var_130 = (MR_Integer) (ArgY22_68);

                                              succeeded = (Var_129 < Var_130);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (Var_129 > Var_130);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;
                                                MR_Integer Var_131 = (MR_Integer) (ArgX23_70);
                                                MR_Integer Var_132 = (MR_Integer) (ArgY23_71);

                                                succeeded = (Var_131 < Var_132);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (Var_131 > Var_132);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;
                                                  MR_Integer Var_133 = (MR_Integer) (ArgX24_73);
                                                  MR_Integer Var_134 = (MR_Integer) (ArgY24_74);

                                                  succeeded = (Var_133 < Var_134);
                                                  if (succeeded)
                                                  {
                                                    SubResult24_75 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = (Var_133 > Var_134);
                                                    if (succeeded)
                                                    {
                                                      SubResult24_75 = (MR_Integer) 2;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;
                                                    MR_Integer Var_135 = (MR_Integer) (ArgX25_76);
                                                    MR_Integer Var_136 = (MR_Integer) (ArgY25_77);

                                                    succeeded = (Var_135 < Var_136);
                                                    if (succeeded)
                                                    {
                                                      SubResult25_78 = (MR_Integer) 1;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = (Var_135 > Var_136);
                                                      if (succeeded)
                                                      {
                                                        SubResult25_78 = (MR_Integer) 2;
                                                        succeeded = MR_TRUE;
                                                      }
                                                    }
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Integer Var_137 = (MR_Integer) (ArgX26_79);
                                                      MR_Integer Var_138 = (MR_Integer) (ArgY26_80);

                                                      succeeded = (Var_137 < Var_138);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = (MR_Integer) 1;
                                                      else
                                                      {
                                                        succeeded = (Var_137 > Var_138);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = (MR_Integer) 2;
                                                        else
                                                          *HeadVar__1_1 = (MR_Integer) 0;
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
        }
      }
    }
  }
}

static void MR_CALL 
libs__globals____Compare____read_only_globals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_String ArgX5_16 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      libs__globals____Compare____reuse_strategy_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[7]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              libs__globals____Compare____c_compiler_type_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
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
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

void MR_CALL 
libs__globals____Compare____maybe_stdlib_grades_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
libs__globals____Unify____globals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_55 == CastY_56);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_58_58;
    MR_Word TypeInfo_61_61;
    MR_Word TypeInfo_62_62;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 25)) & (MR_Integer) 3);
    MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 25)) & (MR_Integer) 3);
    MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 23)) & (MR_Integer) 3);
    MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 22)) & (MR_Integer) 1);
    MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 19)) & (MR_Integer) 7);
    MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 19)) & (MR_Integer) 7);
    MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 17)) & (MR_Integer) 3);
    MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 17)) & (MR_Integer) 3);
    MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 15)) & (MR_Integer) 3);
    MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 13)) & (MR_Integer) 3);
    MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 13)) & (MR_Integer) 3);
    MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 11)) & (MR_Integer) 3);
    MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 11)) & (MR_Integer) 3);
    MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 10)) & (MR_Integer) 1);
    MR_Word ArgX23_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 7)) & (MR_Integer) 7);
    MR_Word ArgY23_48 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 7)) & (MR_Integer) 7);
    MR_Word ArgX24_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgY24_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 4)) & (MR_Integer) 7);
    MR_Word ArgX25_51 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) >> 1)) & (MR_Integer) 7);
    MR_Word ArgY25_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) >> 1)) & (MR_Integer) 7);
    MR_Word ArgX26_53 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))) & (MR_Integer) 1);
    MR_Word ArgY26_54 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))) & (MR_Integer) 1);
    MR_Integer CastX_76;
    MR_Integer CastY_77;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_58_58 = (MR_Word) (&libs__globals_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = libs__optimization_options____Unify____opt_tuple_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = libs__op_mode____Unify____op_mode_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_61_61 = (MR_Word) (&libs__globals_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = libs__globals____Unify____file_install_cmd_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = libs__globals____Unify____ext_dirs_maps_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = libs__globals____Unify____maybe_stdlib_grades_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    CastX_76 = (MR_Integer) (ArgX9_19);
                    CastY_77 = (MR_Integer) (ArgY9_20);
                    succeeded = (CastX_76 == CastY_77);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word TypeInfo_18_79;
                      MR_Word TypeInfo_19_80;
                      MR_Word ArgX1_64 = ((MR_Word) ((MR_hl_field(0, ArgX9_19, 0))));
                      MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(0, ArgY9_20, 0))));
                      MR_Word ArgX2_66 = ((MR_Word) ((MR_hl_field(0, ArgX9_19, 1))));
                      MR_Word ArgY2_67 = ((MR_Word) ((MR_hl_field(0, ArgY9_20, 1))));
                      MR_Word ArgX3_68 = ((MR_Word) ((MR_hl_field(0, ArgX9_19, 2))));
                      MR_Word ArgY3_69 = ((MR_Word) ((MR_hl_field(0, ArgY9_20, 2))));
                      MR_Word ArgX4_70 = ((MR_Word) ((MR_hl_field(0, ArgX9_19, 3))));
                      MR_Word ArgY4_71 = ((MR_Word) ((MR_hl_field(0, ArgY9_20, 3))));
                      MR_String ArgX5_72 = ((MR_String) ((MR_hl_field(0, ArgX9_19, 4))));
                      MR_String ArgY5_73 = ((MR_String) ((MR_hl_field(0, ArgY9_20, 4))));
                      MR_Word ArgX6_74 = ((MR_Word) ((MR_hl_field(0, ArgX9_19, 5))));
                      MR_Word ArgY6_75 = ((MR_Word) ((MR_hl_field(0, ArgY9_20, 5))));

                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0), ((MR_Box) (ArgX1_64)), ((MR_Box) (ArgY1_65)));
                      if (succeeded)
                      {
                        succeeded = libs__globals____Unify____reuse_strategy_0_0(ArgX2_66, ArgY2_67);
                        if (succeeded)
                        {
                          TypeInfo_18_79 = (MR_Word) (&libs__globals_scalar_common_2[6]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_79, ((MR_Box) (ArgX3_68)), ((MR_Box) (ArgY3_69)));
                          if (succeeded)
                          {
                            TypeInfo_19_80 = (MR_Word) (&libs__globals_scalar_common_2[7]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_80, ((MR_Box) (ArgX4_70)), ((MR_Box) (ArgY4_71)));
                            if (succeeded)
                            {
                              succeeded = (strcmp(ArgX5_72, ArgY5_73) == 0);
                              if (succeeded)
                                succeeded = libs__globals____Unify____c_compiler_type_0_0(ArgX6_74, ArgY6_75);
                            }
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            TypeInfo_62_62 = (MR_Word) (&libs__globals_scalar_common_1[5]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
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
                                        succeeded = (ArgX19_39 == ArgY19_40);
                                        if (succeeded)
                                        {
                                          succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX20_41, ArgY20_42);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX21_43 == ArgY21_44);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX22_45 == ArgY22_46);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX23_47 == ArgY23_48);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX24_49 == ArgY24_50);
                                                  if (succeeded)
                                                  {
                                                    succeeded = (ArgX25_51 == ArgY25_52);
                                                    if (succeeded)
                                                      succeeded = (ArgX26_53 == ArgY26_54);
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
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
libs__globals____Unify____maybe_stdlib_grades_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&libs__globals_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____gc_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____foreign_language_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____ext_stdlib_dirs_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__globals____Unify____ext_stdlib_dirs_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____ext_lib_dirs_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__globals____Unify____ext_lib_dirs_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____ext_intermod_dirs_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__globals____Unify____ext_intermod_dirs_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____ext_interface_dirs_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__globals____Unify____ext_interface_dirs_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____ext_dirs_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____ext_dirs_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&libs__globals_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&libs__globals_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&libs__globals_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&libs__globals_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____ext_c_incl_dirs_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__globals____Unify____ext_c_incl_dirs_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__globals_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____env_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____compiler_output_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
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
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
libs__globals____Unify____compiler_output_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____compilation_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____clang_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));

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

void MR_CALL 
libs__globals____Compare____c_incl_ext_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____c_incl_ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word SubResult1_6;

              mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_14)), ((MR_Box) (ArgY1_15)));
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__globals_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_16)), ((MR_Box) (ArgY1_17)));
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_16 == CastX_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_22_22;
          MR_Word TypeInfo_23_23;
          MR_Word TypeInfo_24_24;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            TypeInfo_22_22 = (MR_Word) (&libs__globals_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&libs__globals_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&libs__globals_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_21_21;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_21_21 = (MR_Word) (&libs__globals_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_20_20;
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_20_20 = (MR_Word) (&libs__globals_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_19_19;
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_19_19 = (MR_Word) (&libs__globals_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__globals____Compare____backend_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__globals____Unify____backend_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__globals__unsafe_set_output_stream_recompile_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_set_output_stream_recompile_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__globals__mutable_variable_output_stream_recompile = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_get_output_stream_recompile_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_get_output_stream_recompile_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_recompile;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
libs__globals__unlock_output_stream_recompile_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__unlock_output_stream_recompile_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__lock_output_stream_recompile_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__lock_output_stream_recompile_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_recompile_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_output_stream_recompile_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_recompile_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_recompile_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_recompile_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_recompile_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_recompile_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_recompile_0_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_recompile = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_recompile_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_set_output_stream_debug_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_set_output_stream_debug_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__globals__mutable_variable_output_stream_debug = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_get_output_stream_debug_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_get_output_stream_debug_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_debug;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
libs__globals__unlock_output_stream_debug_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__unlock_output_stream_debug_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__lock_output_stream_debug_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__lock_output_stream_debug_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_debug_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_output_stream_debug_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_debug_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_debug_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_debug_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_debug_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_debug_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_debug_0_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_debug = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_debug_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_set_output_stream_inference_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_set_output_stream_inference_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__globals__mutable_variable_output_stream_inference = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_get_output_stream_inference_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_get_output_stream_inference_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_inference;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
libs__globals__unlock_output_stream_inference_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__unlock_output_stream_inference_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__lock_output_stream_inference_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__lock_output_stream_inference_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_inference_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_output_stream_inference_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_inference_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_inference_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_inference_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_inference_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_inference_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_inference_0_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_inference = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_inference_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_set_output_stream_error_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_set_output_stream_error_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__globals__mutable_variable_output_stream_error = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_get_output_stream_error_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_get_output_stream_error_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_error;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
libs__globals__unlock_output_stream_error_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__unlock_output_stream_error_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__lock_output_stream_error_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__lock_output_stream_error_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_output_stream_error_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_output_stream_error_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_error_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__initialise_mutable_output_stream_error_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_error_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_output_stream_error_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_error_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_error_0_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_error = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_output_stream_error_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_generate_item_version_numbers_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_get_disable_generate_item_version_numbers_1_p_0(
  MR_Word * X_1)
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

static void MR_CALL 
libs__globals__unlock_disable_generate_item_version_numbers_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__unlock_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__lock_disable_generate_item_version_numbers_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__lock_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
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

static void MR_CALL 
libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0(void)
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
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_set_disable_smart_recompilation_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_set_disable_smart_recompilation_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__globals__mutable_variable_disable_smart_recompilation = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_get_disable_smart_recompilation_1_p_0(
  MR_Word * X_1)
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

static void MR_CALL 
libs__globals__unlock_disable_smart_recompilation_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__unlock_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__lock_disable_smart_recompilation_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__lock_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_p_0(void)
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

static void MR_CALL 
libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0(void)
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
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
libs__globals__mutable_variable_disable_smart_recompilation = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_disable_smart_recompilation_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_set_allow_ho_insts_as_modes_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_set_allow_ho_insts_as_modes_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__globals__mutable_variable_allow_ho_insts_as_modes = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__unsafe_get_allow_ho_insts_as_modes_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL libs__globals__unsafe_get_allow_ho_insts_as_modes_1_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_allow_ho_insts_as_modes;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
libs__globals__unlock_allow_ho_insts_as_modes_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__unlock_allow_ho_insts_as_modes_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__lock_allow_ho_insts_as_modes_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__lock_allow_ho_insts_as_modes_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__pre_initialise_mutable_allow_ho_insts_as_modes_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__pre_initialise_mutable_allow_ho_insts_as_modes_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__globals__initialise_mutable_allow_ho_insts_as_modes_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_allow_ho_insts_as_modes_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_allow_ho_insts_as_modes_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_allow_ho_insts_as_modes_0_p_0

	MR_Word X;

	X = (MR_Integer) 1 ;
		{
libs__globals__mutable_variable_allow_ho_insts_as_modes = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__initialise_mutable_allow_ho_insts_as_modes_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static MR_bool MR_CALL 
libs__globals__convert_line_number_range_2_p_0(
  MR_String RangeStr_3,
  MR_Word * HeadVar__2_2)
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
  succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MinStr_6 = ((MR_String) ((MR_hl_field(1, Var_10, 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(1, Var_10, 1))));
    succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MaxStr_7 = ((MR_String) ((MR_hl_field(1, Var_12, 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
      succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (strcmp(MinStr_6, (MR_String) "") == 0);
        if (succeeded)
        {
          MaybeMin_4 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer Min_8;

          succeeded = mercury__string__to_int_2_p_0(MinStr_6, &Min_8);
          if (succeeded)
          {
            {
              MaybeMin_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeMin_4, 0) = ((MR_Box) (Min_8));
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          succeeded = (strcmp(MaxStr_7, (MR_String) "") == 0);
          if (succeeded)
          {
            MaybeMax_5 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Max_9;

            succeeded = mercury__string__to_int_2_p_0(MaxStr_7, &Max_9);
            if (succeeded)
            {
              {
                MaybeMax_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeMax_5, 0) = ((MR_Box) (Max_9));
              }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__2_2 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (MaybeMin_4));
              MR_hl_field(0, base, 1) = ((MR_Box) (MaybeMax_5));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__globals__convert_foreign_language_det_2_p_0(
  MR_String String_3,
  MR_Word * ForeignLang_4)
{
  MR_bool succeeded;
  MR_Word ForeignLangPrime_5;
  MR_String Var_8;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  Var_8 = mercury__string__to_lower_1_f_0(String_3);
  // binary string simple lookup switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 4;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(Var_8, ((&libs__globals_vector_common_5[5 + mid_2]))->libs__globals__vector_common_type_5_0__vct_5_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      ForeignLangPrime_5 = ((&libs__globals_vector_common_5[5 + mid_2]))->libs__globals__vector_common_type_5_0__vct_5_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  if (succeeded)
    *ForeignLang_4 = ForeignLangPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.convert_foreign_language_det\'/2", (MR_String) "invalid foreign_language string");
      return;
    }
}

void MR_CALL 
libs__globals__close_any_specific_compiler_streams_2_p_0(void)
{
  MR_Word CompilerStream0_19;
  MR_Word CompilerStream0_27;
  MR_Word CompilerStream0_35;
  MR_Word CompilerStream0_43;

{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_error;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_19  = X;
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_19)) {
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
        MR_Word Stream_21 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_19, 0))));

        mercury__io__close_output_3_p_0(Stream_21);
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_error = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
  }
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_inference;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_27  = X;
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_27)) {
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
        MR_Word Stream_29 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_27, 0))));

        mercury__io__close_output_3_p_0(Stream_29);
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_inference = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
  }
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_debug;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_35  = X;
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_35)) {
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
        MR_Word Stream_37 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_35, 0))));

        mercury__io__close_output_3_p_0(Stream_37);
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_debug = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
  }
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_recompile;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_43  = X;
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_43)) {
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
        MR_Word Stream_45 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_43, 0))));

        mercury__io__close_output_3_p_0(Stream_45);
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
libs__globals__mutable_variable_output_stream_recompile = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__close_any_specific_compiler_streams_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
  }
}

void MR_CALL 
libs__globals__get_recompile_output_stream_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * Stream_8)
{
  MR_bool succeeded;
  MR_Word CompilerStream0_17;

{
#define MR_PROC_LABEL libs__globals__get_recompile_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_recompile_output_stream_5_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_recompile;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_17  = X;
}
{
#define MR_PROC_LABEL libs__globals__get_recompile_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Suffix_18;
        MR_Word CompilerStream_20;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 648, &Suffix_18);
        succeeded = (strcmp(Suffix_18, (MR_String) "") == 0);
        if (succeeded)
        {
          mercury__io__stderr_stream_3_p_0(Stream_8);
          {
            CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
          }
        }
        else
        {
          MR_String FileName_21;
          MR_Word OpenResult_22;
          MR_String Var_27;
          MR_String Var_28;

          Var_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
          Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ".", Suffix_18);
          FileName_21 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
          mercury__io__open_output_4_p_0(FileName_21, &OpenResult_22);
          if (((MR_tag((MR_Word) OpenResult_22)) == (MR_Integer) 1))
          {
            MR_Word Error_23 = ((MR_Word) ((MR_hl_field(1, OpenResult_22, 0))));
            MR_String ErrorMsg_24;

            ErrorMsg_24 = mercury__io__error_message_1_f_0(Error_23);
            mercury__io__stderr_stream_3_p_0(Stream_8);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "can\'t open file \140");
            mercury__io__write_string_4_p_0(*Stream_8, FileName_21);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\' for output: ");
            mercury__io__write_string_4_p_0(*Stream_8, ErrorMsg_24);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\n");
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            {
              CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
          else
          {
            *Stream_8 = ((MR_Word) ((MR_hl_field(0, OpenResult_22, 0))));
            {
              CompilerStream_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
        }
{
#define MR_PROC_LABEL libs__globals__get_recompile_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_recompile_output_stream_5_p_0

	MR_Word X;

	X = CompilerStream_20 ;
		{
libs__globals__mutable_variable_output_stream_recompile = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_recompile_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_recompile_lock, "libs__globals__mutable_variable_output_stream_recompile_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      *Stream_8 = ((MR_Word) ((MR_hl_field(1, CompilerStream0_17, 0))));
      break;
    case (MR_Integer) 2:
      *Stream_8 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_17, 0))));
      break;
  }
}

void MR_CALL 
libs__globals__get_debug_output_stream_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * Stream_8)
{
  MR_bool succeeded;
  MR_Word CompilerStream0_17;

{
#define MR_PROC_LABEL libs__globals__get_debug_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_debug_output_stream_5_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_debug;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_17  = X;
}
{
#define MR_PROC_LABEL libs__globals__get_debug_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Suffix_18;
        MR_Word CompilerStream_20;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 647, &Suffix_18);
        succeeded = (strcmp(Suffix_18, (MR_String) "") == 0);
        if (succeeded)
        {
          mercury__io__stderr_stream_3_p_0(Stream_8);
          {
            CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
          }
        }
        else
        {
          MR_String FileName_21;
          MR_Word OpenResult_22;
          MR_String Var_27;
          MR_String Var_28;

          Var_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
          Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ".", Suffix_18);
          FileName_21 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
          mercury__io__open_output_4_p_0(FileName_21, &OpenResult_22);
          if (((MR_tag((MR_Word) OpenResult_22)) == (MR_Integer) 1))
          {
            MR_Word Error_23 = ((MR_Word) ((MR_hl_field(1, OpenResult_22, 0))));
            MR_String ErrorMsg_24;

            ErrorMsg_24 = mercury__io__error_message_1_f_0(Error_23);
            mercury__io__stderr_stream_3_p_0(Stream_8);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "can\'t open file \140");
            mercury__io__write_string_4_p_0(*Stream_8, FileName_21);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\' for output: ");
            mercury__io__write_string_4_p_0(*Stream_8, ErrorMsg_24);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\n");
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            {
              CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
          else
          {
            *Stream_8 = ((MR_Word) ((MR_hl_field(0, OpenResult_22, 0))));
            {
              CompilerStream_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
        }
{
#define MR_PROC_LABEL libs__globals__get_debug_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_debug_output_stream_5_p_0

	MR_Word X;

	X = CompilerStream_20 ;
		{
libs__globals__mutable_variable_output_stream_debug = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_debug_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_debug_lock, "libs__globals__mutable_variable_output_stream_debug_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      *Stream_8 = ((MR_Word) ((MR_hl_field(1, CompilerStream0_17, 0))));
      break;
    case (MR_Integer) 2:
      *Stream_8 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_17, 0))));
      break;
  }
}

void MR_CALL 
libs__globals__get_inference_output_stream_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * Stream_8)
{
  MR_bool succeeded;
  MR_Word CompilerStream0_17;

{
#define MR_PROC_LABEL libs__globals__get_inference_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_inference_output_stream_5_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_inference;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_17  = X;
}
{
#define MR_PROC_LABEL libs__globals__get_inference_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Suffix_18;
        MR_Word CompilerStream_20;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 646, &Suffix_18);
        succeeded = (strcmp(Suffix_18, (MR_String) "") == 0);
        if (succeeded)
        {
          mercury__io__stderr_stream_3_p_0(Stream_8);
          {
            CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
          }
        }
        else
        {
          MR_String FileName_21;
          MR_Word OpenResult_22;
          MR_String Var_27;
          MR_String Var_28;

          Var_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
          Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ".", Suffix_18);
          FileName_21 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
          mercury__io__open_output_4_p_0(FileName_21, &OpenResult_22);
          if (((MR_tag((MR_Word) OpenResult_22)) == (MR_Integer) 1))
          {
            MR_Word Error_23 = ((MR_Word) ((MR_hl_field(1, OpenResult_22, 0))));
            MR_String ErrorMsg_24;

            ErrorMsg_24 = mercury__io__error_message_1_f_0(Error_23);
            mercury__io__stderr_stream_3_p_0(Stream_8);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "can\'t open file \140");
            mercury__io__write_string_4_p_0(*Stream_8, FileName_21);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\' for output: ");
            mercury__io__write_string_4_p_0(*Stream_8, ErrorMsg_24);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\n");
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            {
              CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
          else
          {
            *Stream_8 = ((MR_Word) ((MR_hl_field(0, OpenResult_22, 0))));
            {
              CompilerStream_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
        }
{
#define MR_PROC_LABEL libs__globals__get_inference_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_inference_output_stream_5_p_0

	MR_Word X;

	X = CompilerStream_20 ;
		{
libs__globals__mutable_variable_output_stream_inference = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_inference_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_inference_lock, "libs__globals__mutable_variable_output_stream_inference_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      *Stream_8 = ((MR_Word) ((MR_hl_field(1, CompilerStream0_17, 0))));
      break;
    case (MR_Integer) 2:
      *Stream_8 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_17, 0))));
      break;
  }
}

void MR_CALL 
libs__globals__get_error_output_stream_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * Stream_8)
{
  MR_bool succeeded;
  MR_Word CompilerStream0_17;

{
#define MR_PROC_LABEL libs__globals__get_error_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_error_output_stream_5_p_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_output_stream_error;


		;}
#undef MR_PROC_LABEL
	CompilerStream0_17  = X;
}
{
#define MR_PROC_LABEL libs__globals__get_error_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (MR_tag((MR_Word) CompilerStream0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Suffix_18;
        MR_Word CompilerStream_20;

        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 645, &Suffix_18);
        succeeded = (strcmp(Suffix_18, (MR_String) "") == 0);
        if (succeeded)
        {
          mercury__io__stderr_stream_3_p_0(Stream_8);
          {
            CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
          }
        }
        else
        {
          MR_String FileName_21;
          MR_Word OpenResult_22;
          MR_String Var_27;
          MR_String Var_28;

          Var_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
          Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ".", Suffix_18);
          FileName_21 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
          mercury__io__open_output_4_p_0(FileName_21, &OpenResult_22);
          if (((MR_tag((MR_Word) OpenResult_22)) == (MR_Integer) 1))
          {
            MR_Word Error_23 = ((MR_Word) ((MR_hl_field(1, OpenResult_22, 0))));
            MR_String ErrorMsg_24;

            ErrorMsg_24 = mercury__io__error_message_1_f_0(Error_23);
            mercury__io__stderr_stream_3_p_0(Stream_8);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "can\'t open file \140");
            mercury__io__write_string_4_p_0(*Stream_8, FileName_21);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\' for output: ");
            mercury__io__write_string_4_p_0(*Stream_8, ErrorMsg_24);
            mercury__io__write_string_4_p_0(*Stream_8, (MR_String) "\n");
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            {
              CompilerStream_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
          else
          {
            *Stream_8 = ((MR_Word) ((MR_hl_field(0, OpenResult_22, 0))));
            {
              CompilerStream_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CompilerStream_20, 0) = ((MR_Box) (*Stream_8));
            }
          }
        }
{
#define MR_PROC_LABEL libs__globals__get_error_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_error_output_stream_5_p_0

	MR_Word X;

	X = CompilerStream_20 ;
		{
libs__globals__mutable_variable_output_stream_error = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_error_output_stream_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_output_stream_error_lock, "libs__globals__mutable_variable_output_stream_error_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      *Stream_8 = ((MR_Word) ((MR_hl_field(1, CompilerStream0_17, 0))));
      break;
    case (MR_Integer) 2:
      *Stream_8 = ((MR_Word) ((MR_hl_field(2, CompilerStream0_17, 0))));
      break;
  }
}

void MR_CALL 
libs__globals__io_set_disable_generate_item_version_numbers_3_p_0(
  MR_Word DisableItemVerions_4)
{
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0

	MR_Word X;

	X = DisableItemVerions_4 ;
		{
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_generate_item_version_numbers_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(
  MR_Word * DisableItemVerions_4)
{
{
#define MR_PROC_LABEL libs__globals__io_get_disable_generate_item_version_numbers_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
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
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
libs__globals__io_set_disable_smart_recompilation_3_p_0(
  MR_Word DisableSmartRecomp_4)
{
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0

	MR_Word X;

	X = DisableSmartRecomp_4 ;
		{
libs__globals__mutable_variable_disable_smart_recompilation = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__io_set_disable_smart_recompilation_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
libs__globals__io_get_disable_smart_recompilation_3_p_0(
  MR_Word * DisableSmartRecomp_4)
{
{
#define MR_PROC_LABEL libs__globals__io_get_disable_smart_recompilation_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
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
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock, "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

MR_Word MR_CALL 
libs__globals__get_allow_ho_insts_as_modes_0_f_0(void)
{
  MR_Word Allow_2;

{
#define MR_PROC_LABEL libs__globals__get_allow_ho_insts_as_modes_0_f_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__get_allow_ho_insts_as_modes_0_f_0

	MR_Word X;

		{
X = libs__globals__mutable_variable_allow_ho_insts_as_modes;


		;}
#undef MR_PROC_LABEL
	Allow_2  = X;
}
{
#define MR_PROC_LABEL libs__globals__get_allow_ho_insts_as_modes_0_f_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  return Allow_2;
}

void MR_CALL 
libs__globals__globals_init_mutables_3_p_0(
  MR_Word Globals_4)
{
  MR_Word Allow_6;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 676, &Allow_6);
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0

	MR_Word X;

	X = Allow_6 ;
		{
libs__globals__mutable_variable_allow_ho_insts_as_modes = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__globals__globals_init_mutables_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_allow_ho_insts_as_modes_lock, "libs__globals__mutable_variable_allow_ho_insts_as_modes_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
libs__globals__double_width_floats_on_det_stack_2_p_0(
  MR_Word Globals_3,
  MR_Word * FloatDwords_4)
{
  MR_bool succeeded;
  MR_Integer TargetWordBits_5;
  MR_Word SinglePrecFloat_6;

  libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 102, &TargetWordBits_5);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 91, &SinglePrecFloat_6);
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.double_width_floats_on_det_stack\'/2", (MR_String) "bits_per_word not 32 or 64");
        return;
      }
  }
}

void MR_CALL 
libs__globals__get_any_intermod_2_p_0(
  MR_Word Globals_3,
  MR_Word * AnyIntermod_4)
{
  MR_Word IntermodOpt_5;
  MR_Word IntermodAnalysis_6;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 427, &IntermodOpt_5);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 434, &IntermodAnalysis_6);
  *AnyIntermod_4 = mercury__bool__or_2_f_0(IntermodOpt_5, IntermodAnalysis_6);
}

void MR_CALL 
libs__globals__current_grade_supports_concurrency_2_p_0(
  MR_Word Globals_3,
  MR_Word * ThreadsSupported_4)
{
  MR_Word Target_5 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 25)) & (MR_Integer) 3);

  switch (Target_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 92, ThreadsSupported_4);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ThreadsSupported_4 = (MR_Integer) 1;
      break;
  }
}

void MR_CALL 
libs__globals__current_grade_supports_par_conj_2_p_0(
  MR_Word Globals_3,
  MR_Word * ParConjSupported_4)
{
  MR_bool succeeded;
  MR_Word Target_5 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 25)) & (MR_Integer) 3);
  MR_Word HighLevelCode_6;
  MR_Word Parallel_7;
  MR_Word UseTrail_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 55, &HighLevelCode_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 92, &Parallel_7);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 90, &UseTrail_8);
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

void MR_CALL 
libs__globals__current_grade_supports_tabling_3_p_0(
  MR_Word Globals_4,
  MR_Word TabledMethod_5,
  MR_Word * TablingSupported_6)
{
  MR_bool succeeded;
  MR_Word Target_7 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_4, 11))) >> 25)) & (MR_Integer) 3);
  MR_Word GC_Method_8 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_4, 11))) >> 19)) & (MR_Integer) 7);
  MR_Word Parallel_9;
  MR_Word UseTrail_10;
  MR_Word ProfileCalls_11;
  MR_Word ProfileDeep_12;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 92, &Parallel_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 90, &UseTrail_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 63, &ProfileCalls_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 67, &ProfileDeep_12);
  succeeded = (Target_7 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (GC_Method_8 != (MR_Integer) 5);
    if (succeeded)
    {
      succeeded = (Parallel_9 == (MR_Integer) 0);
      if (succeeded)
        switch (MR_tag((MR_Word) TabledMethod_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            {
              succeeded = (UseTrail_10 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ProfileCalls_11 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (ProfileDeep_12 == (MR_Integer) 0);
              }
            }
            break;
        }
    }
  }
  if (succeeded)
    *TablingSupported_6 = (MR_Integer) 1;
  else
    *TablingSupported_6 = (MR_Integer) 0;
}

void MR_CALL 
libs__globals__want_return_var_layouts_3_p_0(
  MR_Word Globals_4,
  MR_Word EffTraceLevel_5,
  MR_Word * WantReturnLayouts_6)
{
  MR_bool succeeded;

  {
    MR_Word GC_Method_7 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_4, 11))) >> 19)) & (MR_Integer) 7);

    succeeded = (GC_Method_7 == (MR_Integer) 5);
  }
  if (!(succeeded))
  {
    MR_Word TraceSuppress_8;
    MR_Word Var_9;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Globals_4, 8))));

    TraceSuppress_8 = ((MR_Word) ((MR_hl_field(0, Var_35, 0))));
    Var_9 = libs__trace_params__eff_trace_needs_return_info_2_f_0(EffTraceLevel_5, TraceSuppress_8);
    succeeded = (Var_9 == (MR_Integer) 1);
  }
  if (succeeded)
    *WantReturnLayouts_6 = (MR_Integer) 1;
  else
    *WantReturnLayouts_6 = (MR_Integer) 0;
}

MR_Word MR_CALL 
libs__globals__lookup_current_backend_1_f_0(
  MR_Word Globals_3)
{
  MR_Word CurrentBackend_4;
  MR_Word HighLevel_5;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 55, &HighLevel_5);
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

void MR_CALL 
libs__globals__lookup_maybe_string_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_27 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_7;
  MR_Word MaybeString_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_27, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_7, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    MaybeString_8 = ((MR_Word) ((MR_hl_field(3, OptionData_7, 1))));
    *Value_6 = MaybeString_8;
  }
  else
  {
    MR_String Var_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;

    Var_14 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
    Var_17 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_7)));
    Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(Var_14, Var_24);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "invalid maybe_string option (", Var_25);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.lookup_maybe_string_option\'/3", Var_10);
      return;
    }
  }
}

void MR_CALL 
libs__globals__lookup_string_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_String * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_27 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_7;
  MR_String String_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_27, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_7, 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    String_8 = ((MR_String) ((MR_hl_field(3, OptionData_7, 1))));
    *Value_6 = String_8;
  }
  else
  {
    MR_String Var_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;

    Var_14 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
    Var_17 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_7)));
    Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(Var_14, Var_24);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "invalid string option (", Var_25);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.lookup_string_option\'/3", Var_10);
      return;
    }
  }
}

void MR_CALL 
libs__globals__lookup_maybe_int_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_27 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_7;
  MR_Word MaybeInt_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_27, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_7, 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    MaybeInt_8 = ((MR_Word) ((MR_hl_field(3, OptionData_7, 1))));
    *Value_6 = MaybeInt_8;
  }
  else
  {
    MR_String Var_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;

    Var_14 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
    Var_17 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_7)));
    Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(Var_14, Var_24);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "invalid maybe_int option (", Var_25);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.lookup_maybe_int_option\'/3", Var_10);
      return;
    }
  }
}

void MR_CALL 
libs__globals__lookup_int_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Integer * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_27 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_7;
  MR_Integer Int_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_27, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 2);
  if (succeeded)
  {
    Int_8 = ((MR_Integer) ((MR_hl_field(2, OptionData_7, 0))));
    *Value_6 = Int_8;
  }
  else
  {
    MR_String Var_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;

    Var_14 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
    Var_17 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_7)));
    Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(Var_14, Var_24);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "invalid int option (", Var_25);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.lookup_int_option\'/3", Var_10);
      return;
    }
  }
}

MR_bool MR_CALL 
libs__globals__lookup_bool_option_3_p_1(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_21 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_7;
  MR_Word Bool_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_21, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    Bool_8 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_7, 0))) & (MR_Integer) 1);
    succeeded = (Value_6 == Bool_8);
  }
  else
  {
    MR_String Var_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_50;
    MR_String Var_52;
    MR_String Var_53;

    Var_14 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
    Var_17 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_7)));
    Var_50 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_50);
    Var_53 = mercury__string__f_43_43_2_f_0(Var_14, Var_52);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "invalid bool option (", Var_53);
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", Var_10);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
libs__globals__lookup_bool_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_27 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_7;
  MR_Word Bool_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_27, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 1);
  if (succeeded)
  {
    Bool_8 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_7, 0))) & (MR_Integer) 1);
    *Value_6 = Bool_8;
  }
  else
  {
    MR_String Var_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;

    Var_14 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
    Var_17 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_7)));
    Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(Var_14, Var_24);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "invalid bool option (", Var_25);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.lookup_bool_option\'/3", Var_10);
      return;
    }
  }
}

void MR_CALL 
libs__globals__lookup_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * OptionData_6)
{
  MR_Word OptionTable_7 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_6;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_7, ((MR_Box) (Option_5)), &conv0_OptionData_6);
  *OptionData_6 = ((MR_Word) (conv0_OptionData_6));
}

void MR_CALL 
libs__globals__set_option_4_p_0(
  MR_Word Option_5,
  MR_Word OptionData_6,
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  MR_Word OptionTable0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 1))));
  MR_Word OptionTable_9;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_51;
  MR_Unsigned packed_word_0;
  MR_Unsigned packed_word_1;

  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (Option_5)), ((MR_Box) (OptionData_6)), OptionTable0_8, &OptionTable_9);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 0))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 2))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 3))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 7))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 9)));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 10))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_10, 11)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (OptionTable_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

static void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ForeignLang_4;

  libs__globals__convert_foreign_language_det_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_ForeignLang_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_ForeignLang_4));
}

void MR_CALL 
libs__globals__get_backend_foreign_languages_2_p_0(
  MR_Word Globals_3,
  MR_Word * ForeignLangs_4)
{
  MR_Word LangStrs_5;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_3, (MR_Integer) 752, &LangStrs_5);
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&libs__globals_scalar_common_2[10]), LangStrs_5, ForeignLangs_4);
}

void MR_CALL 
libs__globals__lookup_accumulating_option_3_p_0(
  MR_Word Globals_4,
  MR_Word Option_5,
  MR_Word * Value_6)
{
  MR_bool succeeded;
  MR_Word OptionData_7;
  MR_Word OptionTable_27 = ((MR_Word) ((MR_hl_field(0, Globals_4, 1))));
  MR_Box conv0_OptionData_7;
  MR_Word Accumulating_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_27, ((MR_Box) (Option_5)), &conv0_OptionData_7);
  OptionData_7 = ((MR_Word) (conv0_OptionData_7));
  succeeded = ((((MR_tag((MR_Word) OptionData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_7, 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    Accumulating_8 = ((MR_Word) ((MR_hl_field(3, OptionData_7, 1))));
    *Value_6 = Accumulating_8;
  }
  else
  {
    MR_String Var_10;
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;

    Var_14 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
    Var_17 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_7)));
    Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " is ", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(Var_14, Var_24);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "invalid accumulating option (", Var_25);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.globals.lookup_accumulating_option\'/3", Var_10);
      return;
    }
  }
}

void MR_CALL 
libs__globals__set_ssdb_trace_level_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 25)) & (MR_Integer) 3);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 23)) & (MR_Integer) 3);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 19)) & (MR_Integer) 7);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 17)) & (MR_Integer) 3);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 15)) & (MR_Integer) 3);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 13)) & (MR_Integer) 3);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 7)) & (MR_Integer) 7);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 4)) & (MR_Integer) 7);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 1)) & (MR_Integer) 7);
  MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (((((MR_Unsigned) (Var_21) << 25)) | (((((MR_Unsigned) (Var_22) << 23)) | (((((MR_Unsigned) (Var_23) << 22)) | (((((MR_Unsigned) (Var_24) << 19)) | (((((MR_Unsigned) (Var_25) << 17)) | (((((MR_Unsigned) (Var_26) << 15)) | (((((MR_Unsigned) (Var_27) << 13)) | (((((MR_Unsigned) (X_4) << 11)) | (((((MR_Unsigned) (Var_29) << 10)) | (((((MR_Unsigned) (Var_30) << 7)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 1)) | (MR_Unsigned) (Var_33)))))))))))))))))))))))));
  }
}

void MR_CALL 
libs__globals__set_trace_level_none_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_4,
  MR_Word * STATE_VARIABLE_Globals_5)
{
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
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Unsigned packed_word_0;

  Var_7 = libs__trace_params__trace_level_none_0_f_0();
  Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 0))));
  Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 1))));
  Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 2))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 3))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 4))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 5))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 6))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 7))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 9)));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 10))));
  Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 25)) & (MR_Integer) 3);
  Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 23)) & (MR_Integer) 3);
  Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 22)) & (MR_Integer) 1);
  Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 19)) & (MR_Integer) 7);
  Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 17)) & (MR_Integer) 3);
  Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 15)) & (MR_Integer) 3);
  Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 11)) & (MR_Integer) 3);
  Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 10)) & (MR_Integer) 1);
  Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 7)) & (MR_Integer) 7);
  Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 4)) & (MR_Integer) 7);
  Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) >> 1)) & (MR_Integer) 7);
  Var_33 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_4, 11))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (((((MR_Unsigned) (Var_21) << 25)) | (((((MR_Unsigned) (Var_22) << 23)) | (((((MR_Unsigned) (Var_23) << 22)) | (((((MR_Unsigned) (Var_24) << 19)) | (((((MR_Unsigned) (Var_25) << 17)) | (((((MR_Unsigned) (Var_26) << 15)) | (((((MR_Unsigned) (Var_7) << 13)) | (((((MR_Unsigned) (Var_28) << 11)) | (((((MR_Unsigned) (Var_29) << 10)) | (((((MR_Unsigned) (Var_30) << 7)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 1)) | (MR_Unsigned) (Var_33)))))))))))))))))))))))));
  }
}

void MR_CALL 
libs__globals__set_trace_level_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 25)) & (MR_Integer) 3);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 23)) & (MR_Integer) 3);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 19)) & (MR_Integer) 7);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 17)) & (MR_Integer) 3);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 15)) & (MR_Integer) 3);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 11)) & (MR_Integer) 3);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 7)) & (MR_Integer) 7);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 4)) & (MR_Integer) 7);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 1)) & (MR_Integer) 7);
  MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (((((MR_Unsigned) (Var_21) << 25)) | (((((MR_Unsigned) (Var_22) << 23)) | (((((MR_Unsigned) (Var_23) << 22)) | (((((MR_Unsigned) (Var_24) << 19)) | (((((MR_Unsigned) (Var_25) << 17)) | (((((MR_Unsigned) (Var_26) << 15)) | (((((MR_Unsigned) (X_4) << 13)) | (((((MR_Unsigned) (Var_28) << 11)) | (((((MR_Unsigned) (Var_29) << 10)) | (((((MR_Unsigned) (Var_30) << 7)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 1)) | (MR_Unsigned) (Var_33)))))))))))))))))))))))));
  }
}

void MR_CALL 
libs__globals__set_gc_method_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 25)) & (MR_Integer) 3);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 23)) & (MR_Integer) 3);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 17)) & (MR_Integer) 3);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 15)) & (MR_Integer) 3);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 13)) & (MR_Integer) 3);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 11)) & (MR_Integer) 3);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 7)) & (MR_Integer) 7);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 4)) & (MR_Integer) 7);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 1)) & (MR_Integer) 7);
  MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (((((MR_Unsigned) (Var_21) << 25)) | (((((MR_Unsigned) (Var_22) << 23)) | (((((MR_Unsigned) (Var_23) << 22)) | (((((MR_Unsigned) (X_4) << 19)) | (((((MR_Unsigned) (Var_25) << 17)) | (((((MR_Unsigned) (Var_26) << 15)) | (((((MR_Unsigned) (Var_27) << 13)) | (((((MR_Unsigned) (Var_28) << 11)) | (((((MR_Unsigned) (Var_29) << 10)) | (((((MR_Unsigned) (Var_30) << 7)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 1)) | (MR_Unsigned) (Var_33)))))))))))))))))))))))));
  }
}

void MR_CALL 
libs__globals__set_word_size_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 25)) & (MR_Integer) 3);
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 23)) & (MR_Integer) 3);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 19)) & (MR_Integer) 7);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 17)) & (MR_Integer) 3);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 15)) & (MR_Integer) 3);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 13)) & (MR_Integer) 3);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 11)) & (MR_Integer) 3);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 7)) & (MR_Integer) 7);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 4)) & (MR_Integer) 7);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 1)) & (MR_Integer) 7);
  MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (((((MR_Unsigned) (Var_21) << 25)) | (((((MR_Unsigned) (Var_22) << 23)) | (((((MR_Unsigned) (X_4) << 22)) | (((((MR_Unsigned) (Var_24) << 19)) | (((((MR_Unsigned) (Var_25) << 17)) | (((((MR_Unsigned) (Var_26) << 15)) | (((((MR_Unsigned) (Var_27) << 13)) | (((((MR_Unsigned) (Var_28) << 11)) | (((((MR_Unsigned) (Var_29) << 10)) | (((((MR_Unsigned) (Var_30) << 7)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 1)) | (MR_Unsigned) (Var_33)))))))))))))))))))))))));
  }
}

void MR_CALL 
libs__globals__set_subdir_setting_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 25)) & (MR_Integer) 3);
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 19)) & (MR_Integer) 7);
  MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 17)) & (MR_Integer) 3);
  MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 15)) & (MR_Integer) 3);
  MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 13)) & (MR_Integer) 3);
  MR_Word Var_28 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 11)) & (MR_Integer) 3);
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 7)) & (MR_Integer) 7);
  MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 4)) & (MR_Integer) 7);
  MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) >> 1)) & (MR_Integer) 7);
  MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11))) & (MR_Integer) 1);
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (((((MR_Unsigned) (Var_21) << 25)) | (((((MR_Unsigned) (X_4) << 23)) | (((((MR_Unsigned) (Var_23) << 22)) | (((((MR_Unsigned) (Var_24) << 19)) | (((((MR_Unsigned) (Var_25) << 17)) | (((((MR_Unsigned) (Var_26) << 15)) | (((((MR_Unsigned) (Var_27) << 13)) | (((((MR_Unsigned) (Var_28) << 11)) | (((((MR_Unsigned) (Var_29) << 10)) | (((((MR_Unsigned) (Var_30) << 7)) | (((((MR_Unsigned) (Var_31) << 4)) | (((((MR_Unsigned) (Var_32) << 1)) | (MR_Unsigned) (Var_33)))))))))))))))))))))))));
  }
}

void MR_CALL 
libs__globals__set_maybe_stdlib_grades_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__set_ext_dirs_maps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__set_file_install_cmd_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__set_maybe_feedback_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__set_op_mode_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__set_opt_tuple_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__set_options_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 8))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 10))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 9)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Globals_0_6, 11)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Globals_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__get_install_method_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) & (MR_Integer) 1);
}

void MR_CALL 
libs__globals__get_target_env_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 1)) & (MR_Integer) 7);
}

void MR_CALL 
libs__globals__get_system_env_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 4)) & (MR_Integer) 7);
}

void MR_CALL 
libs__globals__get_host_env_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 7)) & (MR_Integer) 7);
}

void MR_CALL 
libs__globals__get_maybe_thread_safe_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 10)) & (MR_Integer) 1);
}

void MR_CALL 
libs__globals__get_ssdb_trace_level_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 11)) & (MR_Integer) 3);
}

void MR_CALL 
libs__globals__get_trace_level_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 13)) & (MR_Integer) 3);
}

void MR_CALL 
libs__globals__get_termination2_norm_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 15)) & (MR_Integer) 3);
}

void MR_CALL 
libs__globals__get_termination_norm_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 17)) & (MR_Integer) 3);
}

void MR_CALL 
libs__globals__get_gc_method_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 19)) & (MR_Integer) 7);
}

void MR_CALL 
libs__globals__get_word_size_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 22)) & (MR_Integer) 1);
}

void MR_CALL 
libs__globals__get_subdir_setting_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 23)) & (MR_Integer) 3);
}

void MR_CALL 
libs__globals__get_target_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 11))) >> 25)) & (MR_Integer) 3);
}

void MR_CALL 
libs__globals__get_library_install_linkages_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 10))));
}

void MR_CALL 
libs__globals__get_mercury_linkage_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Globals_3, 9))) & (MR_Integer) 1);
}

void MR_CALL 
libs__globals__get_linkage_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 9))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
libs__globals__get_csharp_compiler_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Globals_3, 9))) >> 2)) & (MR_Integer) 3);
}

void MR_CALL 
libs__globals__get_c_compiler_type_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Globals_3, 8))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 5))));
}

void MR_CALL 
libs__globals__get_grade_dir_2_p_0(
  MR_Word Globals_3,
  MR_String * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Globals_3, 8))));

  *X_4 = ((MR_String) ((MR_hl_field(0, Var_5, 4))));
}

void MR_CALL 
libs__globals__get_linked_target_ext_map_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Globals_3, 8))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 3))));
}

void MR_CALL 
libs__globals__get_limit_error_contexts_map_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Globals_3, 8))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 2))));
}

void MR_CALL 
libs__globals__get_reuse_strategy_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Globals_3, 8))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 1))));
}

void MR_CALL 
libs__globals__get_trace_suppress_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Globals_3, 8))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, 0))));
}

void MR_CALL 
libs__globals__get_maybe_stdlib_grades_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 7))));
}

void MR_CALL 
libs__globals__get_ext_dirs_maps_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 6))));
}

void MR_CALL 
libs__globals__get_file_install_cmd_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 5))));
}

void MR_CALL 
libs__globals__get_maybe_feedback_info_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 4))));
}

void MR_CALL 
libs__globals__get_op_mode_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 3))));
}

void MR_CALL 
libs__globals__get_opt_tuple_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 2))));
}

void MR_CALL 
libs__globals__get_options_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 1))));
}

void MR_CALL 
libs__globals__get_default_options_2_p_0(
  MR_Word Globals_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Globals_3, 0))));
}

void MR_CALL 
libs__globals__globals_init_30_p_0(
  MR_Word DefaultOptions_31,
  MR_Word Options_32,
  MR_Word OptTuple_33,
  MR_Word OpMode_34,
  MR_Word MaybeFeedback_35,
  MR_Word FileInstallCmd_36,
  MR_Word TraceSuppress_37,
  MR_Word ReuseStrategy_38,
  MR_Word LimitErrorContextsMap_39,
  MR_Word LinkedTargetExtInfoMap_40,
  MR_Word C_CompilerType_41,
  MR_Word CSharp_CompilerType_42,
  MR_Word Linkage_43,
  MR_Word MercuryLinkage_44,
  MR_Word LibLinkages_45,
  MR_Word MaybeStdLibGradeSet_46,
  MR_Word Target_47,
  MR_Word SubdirSetting_48,
  MR_Word WordSize_49,
  MR_Word GC_Method_50,
  MR_Word TerminationNorm_51,
  MR_Word Termination2Norm_52,
  MR_Word TraceLevel_53,
  MR_Word SSTraceLevel_54,
  MR_Word MaybeThreadSafe_55,
  MR_Word HostEnvType_56,
  MR_Word SystemEnvType_57,
  MR_Word TargetEnvType_58,
  MR_Word InstallMethod_59,
  MR_Word * Globals_60)
{
  MR_Word ExtDirsMaps0_61;
  MR_Word ReadOnlyGlobals0_62;
  MR_Word Globals0_63;
  MR_String GradeDir_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_84;
  MR_Unsigned packed_word_0;
  MR_Unsigned packed_word_1;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_103;

  Var_65 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__globals_scalar_common_1[1]));
  Var_66 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__globals_scalar_common_1[1]));
  Var_67 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__globals_scalar_common_1[1]));
  Var_68 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0), (MR_Word) (&libs__globals_scalar_common_1[1]));
  Var_69 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__globals_scalar_common_1[1]));
  {
    ExtDirsMaps0_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExtDirsMaps0_61, 0) = ((MR_Box) (Var_65));
    MR_hl_field(0, ExtDirsMaps0_61, 1) = ((MR_Box) (Var_66));
    MR_hl_field(0, ExtDirsMaps0_61, 2) = ((MR_Box) (Var_67));
    MR_hl_field(0, ExtDirsMaps0_61, 3) = ((MR_Box) (Var_68));
    MR_hl_field(0, ExtDirsMaps0_61, 4) = ((MR_Box) (Var_69));
  }
  {
    ReadOnlyGlobals0_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReadOnlyGlobals0_62, 0) = ((MR_Box) (TraceSuppress_37));
    MR_hl_field(0, ReadOnlyGlobals0_62, 1) = ((MR_Box) (ReuseStrategy_38));
    MR_hl_field(0, ReadOnlyGlobals0_62, 2) = ((MR_Box) (LimitErrorContextsMap_39));
    MR_hl_field(0, ReadOnlyGlobals0_62, 3) = ((MR_Box) (LinkedTargetExtInfoMap_40));
    MR_hl_field(0, ReadOnlyGlobals0_62, 4) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, ReadOnlyGlobals0_62, 5) = ((MR_Box) (C_CompilerType_41));
  }
  {
    Globals0_63 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Globals0_63, 0) = ((MR_Box) (DefaultOptions_31));
    MR_hl_field(0, Globals0_63, 1) = ((MR_Box) (Options_32));
    MR_hl_field(0, Globals0_63, 2) = ((MR_Box) (OptTuple_33));
    MR_hl_field(0, Globals0_63, 3) = ((MR_Box) (OpMode_34));
    MR_hl_field(0, Globals0_63, 4) = ((MR_Box) (MaybeFeedback_35));
    MR_hl_field(0, Globals0_63, 5) = ((MR_Box) (FileInstallCmd_36));
    MR_hl_field(0, Globals0_63, 6) = ((MR_Box) (ExtDirsMaps0_61));
    MR_hl_field(0, Globals0_63, 7) = ((MR_Box) (MaybeStdLibGradeSet_46));
    MR_hl_field(0, Globals0_63, 8) = ((MR_Box) (ReadOnlyGlobals0_62));
    MR_hl_field(0, Globals0_63, 9) = (MR_Box) (((((MR_Unsigned) (CSharp_CompilerType_42) << 2)) | (((((MR_Unsigned) (Linkage_43) << 1)) | (MR_Unsigned) (MercuryLinkage_44)))));
    MR_hl_field(0, Globals0_63, 10) = ((MR_Box) (LibLinkages_45));
    MR_hl_field(0, Globals0_63, 11) = (MR_Box) (((((MR_Unsigned) (Target_47) << 25)) | (((((MR_Unsigned) (SubdirSetting_48) << 23)) | (((((MR_Unsigned) (WordSize_49) << 22)) | (((((MR_Unsigned) (GC_Method_50) << 19)) | (((((MR_Unsigned) (TerminationNorm_51) << 17)) | (((((MR_Unsigned) (Termination2Norm_52) << 15)) | (((((MR_Unsigned) (TraceLevel_53) << 13)) | (((((MR_Unsigned) (SSTraceLevel_54) << 11)) | (((((MR_Unsigned) (MaybeThreadSafe_55) << 10)) | (((((MR_Unsigned) (HostEnvType_56) << 7)) | (((((MR_Unsigned) (SystemEnvType_57) << 4)) | (((((MR_Unsigned) (TargetEnvType_58) << 1)) | (MR_Unsigned) (InstallMethod_59)))))))))))))))))))))))));
  }
  libs__compute_grade__compute_grade_2_p_0(Globals0_63, &GradeDir_64);
  Var_73 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 0))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 1))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 2))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 3))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 4))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 5))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 6))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 7))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 8))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Globals0_63, 9)));
  Var_84 = ((MR_Word) ((MR_hl_field(0, Globals0_63, 10))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Globals0_63, 11)));
  Var_98 = ((MR_Word) ((MR_hl_field(0, Var_71, 0))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, Var_71, 1))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, Var_71, 2))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, Var_71, 3))));
  Var_103 = ((MR_Word) ((MR_hl_field(0, Var_71, 5))));
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (Var_99));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) (Var_100));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (Var_101));
    MR_hl_field(0, Var_72, 4) = ((MR_Box) (GradeDir_64));
    MR_hl_field(0, Var_72, 5) = ((MR_Box) (Var_103));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *Globals_60 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 9) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 11) = (MR_Box) (packed_word_1);
  }
}

void MR_CALL 
libs__globals__convert_limit_error_contexts_3_p_0(
  MR_Word Options_4,
  MR_Word * BadOptions_5,
  MR_Word * Map_6)
{
  MR_Word RevBadOptions_7;
  MR_Word Var_9;

  Var_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals_scalar_common_1[0]));
  libs__globals__convert_limit_error_contexts_acc_5_p_0(Options_4, (MR_Word) ((MR_Unsigned) 0U), &RevBadOptions_7, Var_9, Map_6);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevBadOptions_7, BadOptions_5);
}

static MR_bool MR_CALL 
libs__globals__convert_limit_error_contexts_acc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = libs__globals__convert_line_number_range_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Map_5 = STATE_VARIABLE_Map_0_4;
      *STATE_VARIABLE_RevBadOptions_3 = STATE_VARIABLE_RevBadOptions_0_2;
    }
    else
    {
      MR_String Option_12 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Options_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word OptionChars_16;
      MR_Word RevOptionChars_17;
      MR_Word LineRangeChars_18;
      MR_Word RevFileNameChars_19;
      MR_String FileName_20;
      MR_String LineRangeStr_21;
      MR_Word STATE_VARIABLE_Map_1_31;
      MR_Word STATE_VARIABLE_RevBadOptions_1_32;
      MR_Word LineNumberRanges_23;
      MR_Word LineRangeStrs_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevBadOptions_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_4;

      mercury__string__to_char_list_2_p_0(Option_12, &OptionChars_16);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), OptionChars_16, &RevOptionChars_17);
      libs__globals__find_file_name_and_line_range_chars_4_p_0(RevOptionChars_17, (MR_Word) ((MR_Unsigned) 0U), &LineRangeChars_18, &RevFileNameChars_19);
      FileName_20 = mercury__string__from_rev_char_list_1_f_0(RevFileNameChars_19);
      LineRangeStr_21 = mercury__string__from_char_list_1_f_0(LineRangeChars_18);
      LineRangeStrs_22 = mercury__string__split_at_char_2_f_0((MR_Char) 44, LineRangeStr_21);
      succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0), (MR_Word) (&libs__globals_scalar_common_2[9]), LineRangeStrs_22, &LineNumberRanges_23);
      if (succeeded)
      {
        mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals_scalar_common_1[0]), ((MR_Box) (FileName_20)), ((MR_Box) (LineNumberRanges_23)), STATE_VARIABLE_Map_0_4, &STATE_VARIABLE_Map_1_31);
        STATE_VARIABLE_RevBadOptions_1_32 = STATE_VARIABLE_RevBadOptions_0_2;
      }
      else
      {
        {
          STATE_VARIABLE_RevBadOptions_1_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevBadOptions_1_32, 0) = ((MR_Box) (Option_12));
          MR_hl_field(1, STATE_VARIABLE_RevBadOptions_1_32, 1) = ((MR_Box) (STATE_VARIABLE_RevBadOptions_0_2));
        }
        STATE_VARIABLE_Map_1_31 = STATE_VARIABLE_Map_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Options_13;
      next_value_of_STATE_VARIABLE_RevBadOptions_0_2 = STATE_VARIABLE_RevBadOptions_1_32;
      next_value_of_STATE_VARIABLE_Map_0_4 = STATE_VARIABLE_Map_1_31;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_LineRangeChars_3 = STATE_VARIABLE_LineRangeChars_0_2;
    }
    else
    {
      MR_Char RevChar_8 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
      MR_Word RevChars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      succeeded = (RevChar_8 == (MR_Char) 58);
      if (succeeded)
      {
        *HeadVar__4_4 = RevChars_9;
        *STATE_VARIABLE_LineRangeChars_3 = STATE_VARIABLE_LineRangeChars_0_2;
      }
      else
      {
        MR_Word STATE_VARIABLE_LineRangeChars_1_14;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_LineRangeChars_0_2;

        {
          STATE_VARIABLE_LineRangeChars_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_LineRangeChars_1_14, 0) = ((MR_Box) (MR_Word) (RevChar_8));
          MR_hl_field(1, STATE_VARIABLE_LineRangeChars_1_14, 1) = ((MR_Box) (STATE_VARIABLE_LineRangeChars_0_2));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = RevChars_9;
        next_value_of_STATE_VARIABLE_LineRangeChars_0_2 = STATE_VARIABLE_LineRangeChars_1_14;
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
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 3;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string jump switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_12[0 + mid_2]))->libs__globals__vector_common_type_12_0__vct_12_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&libs__globals_vector_common_12[0 + mid_2]))->libs__globals__vector_common_type_12_0__vct_12_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "deep"
            ;
            *HeadVar__3_3 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            // case "default"
            ;
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
            // case "none"
            ;
            *HeadVar__3_3 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            // case "shallow"
            ;
            *HeadVar__3_3 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_env_type_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 4;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_11[0 + mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&libs__globals_vector_common_11[0 + mid_2]))->libs__globals__vector_common_type_11_0__vct_11_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_reuse_strategy_3_p_0(
  MR_String HeadVar__1_1,
  MR_Integer NCells_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) "same_cons_id") == 0))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "within_n_cells_difference") == 0))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NCells_2));
    }
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_static_or_shared_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) "shared") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "static") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_csharp_compiler_type_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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

static MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__691__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(0, closure, 3))), ((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_c_compiler_type_2_p_0(
  MR_String CC_Str_3,
  MR_Word * C_CompilerType_4)
{
  MR_bool succeeded;
  MR_Word C_CompilerType0_5;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 5;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(CC_Str_3, ((&libs__globals_vector_common_8[0 + mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      C_CompilerType0_5 = ((&libs__globals_vector_common_8[0 + mid_2]))->libs__globals__vector_common_type_8_0__vct_8_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
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

    Tokens_13 = mercury__string__words_separator_2_f_0((MR_Word) (&libs__globals_scalar_common_10[0]), CC_Str_3);
    succeeded = (Tokens_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_20 = ((MR_String) ((MR_hl_field(1, Tokens_13, 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(1, Tokens_13, 1))));
      succeeded = (strcmp(Var_20, (MR_String) "gcc") == 0);
      if (succeeded)
      {
        succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Major_14 = ((MR_String) ((MR_hl_field(1, Var_21, 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Minor_15 = ((MR_String) ((MR_hl_field(1, Var_22, 0))));
            Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, 1))));
            succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Patch_16 = ((MR_String) ((MR_hl_field(1, Var_23, 0))));
              Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
              succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
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
        *C_CompilerType_4 = (MR_Word) (MR_mkword(1, &libs__globals_scalar_common_2[8]));
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Major_44;
        MR_Integer Var_50;

        succeeded = mercury__string__to_int_2_p_0(Major_14, &Major_44);
        if (succeeded)
        {
          Var_50 = (MR_Integer) 2;
          succeeded = (Major_44 >= Var_50);
        }
        if (succeeded)
        {
          succeeded = (strcmp(Minor_15, (MR_String) "u") == 0);
          if (succeeded)
          {
            MR_Word Var_51;

            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = ((MR_Box) (Major_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *C_CompilerType_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Minor_45;
            MR_Integer Var_54;

            succeeded = mercury__string__to_int_2_p_0(Minor_15, &Minor_45);
            if (succeeded)
            {
              Var_54 = (MR_Integer) 0;
              succeeded = (Minor_45 >= Var_54);
            }
            if (succeeded)
            {
              succeeded = (strcmp(Patch_16, (MR_String) "u") == 0);
              if (succeeded)
              {
                MR_Word Var_55;
                MR_Word Var_56;

                {
                  Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_55, 0) = ((MR_Box) (Major_44));
                }
                {
                  Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_56, 0) = ((MR_Box) (Minor_45));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *C_CompilerType_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Var_56));
                  MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Integer Patch_46;
                MR_Integer Var_58;

                succeeded = mercury__string__to_int_2_p_0(Patch_16, &Patch_46);
                if (succeeded)
                {
                  Var_58 = (MR_Integer) 0;
                  succeeded = (Patch_46 >= Var_58);
                }
                if (succeeded)
                {
                  MR_Word Var_59;
                  MR_Word Var_60;
                  MR_Word Var_61;

                  {
                    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Major_44));
                  }
                  {
                    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_60, 0) = ((MR_Box) (Minor_45));
                  }
                  {
                    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Patch_46));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *C_CompilerType_4 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_59));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_60));
                    MR_hl_field(1, base, 2) = ((MR_Box) (Var_61));
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
      MR_String Major_37;
      MR_String Minor_38;
      MR_String Patch_39;
      MR_String Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;

      succeeded = (Tokens_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_25 = ((MR_String) ((MR_hl_field(1, Tokens_13, 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(1, Tokens_13, 1))));
        succeeded = (strcmp(Var_25, (MR_String) "clang") == 0);
        if (succeeded)
        {
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Major_37 = ((MR_String) ((MR_hl_field(1, Var_26, 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
            succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Minor_38 = ((MR_String) ((MR_hl_field(1, Var_27, 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, 1))));
              succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Patch_39 = ((MR_String) ((MR_hl_field(1, Var_28, 0))));
                Var_29 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
                succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Major_62;
        MR_Integer Minor_63;
        MR_Integer Patch_64;
        MR_Word ClangVersion_65;
        MR_Integer Var_66;
        MR_Integer Var_67;
        MR_Integer Var_68;
        MR_Word Var_69;

        succeeded = mercury__string__to_int_2_p_0(Major_37, &Major_62);
        if (succeeded)
        {
          succeeded = mercury__string__to_int_2_p_0(Minor_38, &Minor_63);
          if (succeeded)
          {
            succeeded = mercury__string__to_int_2_p_0(Patch_39, &Patch_64);
            if (succeeded)
            {
              Var_66 = (MR_Integer) 0;
              succeeded = (Major_62 >= Var_66);
              if (succeeded)
              {
                Var_67 = (MR_Integer) 0;
                succeeded = (Minor_63 >= Var_67);
                if (succeeded)
                {
                  Var_68 = (MR_Integer) 0;
                  succeeded = (Patch_64 >= Var_68);
                  if (succeeded)
                  {
                    {
                      ClangVersion_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ClangVersion_65, 0) = ((MR_Box) (Major_62));
                      MR_hl_field(0, ClangVersion_65, 1) = ((MR_Box) (Minor_63));
                      MR_hl_field(0, ClangVersion_65, 2) = ((MR_Box) (Patch_64));
                    }
                    {
                      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_69, 0) = ((MR_Box) (ClangVersion_65));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *C_CompilerType_4 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_69));
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
        MR_Word Var_40;
        MR_String Var_41;
        MR_Word Var_42;
        MR_String Var_43;

        succeeded = (Tokens_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_41 = ((MR_String) ((MR_hl_field(1, Tokens_13, 0))));
          Var_40 = ((MR_Word) ((MR_hl_field(1, Tokens_13, 1))));
          succeeded = (strcmp(Var_41, (MR_String) "msvc") == 0);
          if (succeeded)
          {
            succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_43 = ((MR_String) ((MR_hl_field(1, Var_40, 0))));
              Var_42 = ((MR_Word) ((MR_hl_field(1, Var_40, 1))));
              if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                Version_17 = Var_43;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Var_30;

                succeeded = (strcmp(Var_43, (MR_String) "x86") == 0);
                if (succeeded)
                {
                  Version_17 = ((MR_String) ((MR_hl_field(1, Var_42, 0))));
                  Var_30 = ((MR_Word) ((MR_hl_field(1, Var_42, 1))));
                  succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Integer Version_70;
          MR_Integer Var_71;
          MR_Word Var_72;

          succeeded = mercury__string__to_int_2_p_0(Version_17, &Version_70);
          if (succeeded)
          {
            Var_71 = (MR_Integer) 0;
            succeeded = (Version_70 > Var_71);
            if (succeeded)
            {
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (Version_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *C_CompilerType_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Var_72));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_String Version_36;
          MR_String Var_31;
          MR_Word Var_32;
          MR_String Var_33;
          MR_Word Var_34;
          MR_Word Var_35;

          succeeded = (Tokens_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_31 = ((MR_String) ((MR_hl_field(1, Tokens_13, 0))));
            Var_32 = ((MR_Word) ((MR_hl_field(1, Tokens_13, 1))));
            succeeded = (strcmp(Var_31, (MR_String) "msvc") == 0);
            if (succeeded)
            {
              succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_33 = ((MR_String) ((MR_hl_field(1, Var_32, 0))));
                Var_34 = ((MR_Word) ((MR_hl_field(1, Var_32, 1))));
                succeeded = (strcmp(Var_33, (MR_String) "x64") == 0);
                if (succeeded)
                {
                  succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Version_36 = ((MR_String) ((MR_hl_field(1, Var_34, 0))));
                    Var_35 = ((MR_Word) ((MR_hl_field(1, Var_34, 1))));
                    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Integer Version_73;
            MR_Integer Var_74;
            MR_Word Var_75;

            succeeded = mercury__string__to_int_2_p_0(Version_36, &Version_73);
            if (succeeded)
            {
              Var_74 = (MR_Integer) 0;
              succeeded = (Version_73 > Var_74);
              if (succeeded)
              {
                {
                  Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_75, 0) = ((MR_Box) (Version_73));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *C_CompilerType_4 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_75));
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
  }
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_maybe_thread_safe_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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

MR_bool MR_CALL 
libs__globals__convert_termination_norm_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 3;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_7[0 + mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&libs__globals_vector_common_7[0 + mid_2]))->libs__globals__vector_common_type_7_0__vct_7_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_gc_method_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 6;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&libs__globals_vector_common_6[0 + mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&libs__globals_vector_common_6[0 + mid_2]))->libs__globals__vector_common_type_6_0__vct_6_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_foreign_language_2_p_0(
  MR_String String_3,
  MR_Word * ForeignLanguage_4)
{
  MR_bool succeeded;
  MR_String Var_5;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  Var_5 = mercury__string__to_lower_1_f_0(String_3);
  // binary string simple lookup switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 4;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(Var_5, ((&libs__globals_vector_common_5[0 + mid_2]))->libs__globals__vector_common_type_5_0__vct_5_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *ForeignLanguage_4 = ((&libs__globals_vector_common_5[0 + mid_2]))->libs__globals__vector_common_type_5_0__vct_5_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_bool MR_CALL 
libs__globals__convert_target_2_p_0(
  MR_String String_3,
  MR_Word * Target_4)
{
  MR_bool succeeded;
  MR_String Var_5;

  Var_5 = mercury__string__to_lower_1_f_0(String_3);
  if ((strcmp(Var_5, (MR_String) "c") == 0))
  {
    *Target_4 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(Var_5, (MR_String) "java") == 0))
  {
    *Target_4 = (MR_Integer) 2;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(Var_5, (MR_String) "csharp") == 0))
  {
    *Target_4 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Word MR_CALL 
libs__globals__gc_is_conservative_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((&libs__globals_vector_common_4[0 + HeadVar__1_1]))->libs__globals__vector_common_type_4_0__vct_4_f_0;

  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__globals__all_foreign_language_strings_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &libs__globals_scalar_common_1[12]));
}

MR_bool MR_CALL 
libs__globals__simple_foreign_language_string_2_p_1(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__2_2, (MR_String) "c") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__2_2, (MR_String) "java") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 2;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__2_2, (MR_String) "csharp") == 0))
  {
    *HeadVar__1_1 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
libs__globals__simple_foreign_language_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_String) "c";
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "csharp";
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_String) "java";
      break;
  }
}

MR_String MR_CALL 
libs__globals__simple_foreign_language_string_1_f_0(
  MR_Word Lang_3)
{
  MR_String Str_4;

  switch (Lang_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Str_4 = (MR_String) "c";
      break;
    case (MR_Integer) 1:
      Str_4 = (MR_String) "csharp";
      break;
    case (MR_Integer) 2:
      Str_4 = (MR_String) "java";
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
libs__globals__foreign_language_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "C";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "C#";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "Java";
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__globals__target_lang_to_foreign_export_lang_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 2;
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__globals__compilation_target_high_level_data_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
libs__globals__compilation_target_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "C";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "C#";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "Java";
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
libs__globals____Unify____backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____backend_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____backend_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____c_compiler_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____c_compiler_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____c_compiler_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____c_compiler_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____c_incl_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____c_incl_ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____c_incl_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____c_incl_ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____clang_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____clang_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____clang_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____clang_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____compilation_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____compilation_target_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____compilation_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____compilation_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____compiler_output_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____compiler_output_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____compiler_output_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____compiler_output_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____csharp_compiler_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____csharp_compiler_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____csharp_compiler_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____csharp_compiler_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____env_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____env_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____env_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____env_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____ext_c_incl_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____ext_c_incl_dirs_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____ext_c_incl_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____ext_c_incl_dirs_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____ext_dirs_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____ext_dirs_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____ext_dirs_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____ext_dirs_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____ext_interface_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____ext_interface_dirs_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____ext_interface_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____ext_interface_dirs_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____ext_intermod_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____ext_intermod_dirs_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____ext_intermod_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____ext_intermod_dirs_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____ext_lib_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____ext_lib_dirs_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____ext_lib_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____ext_lib_dirs_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____ext_stdlib_dirs_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____ext_stdlib_dirs_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____ext_stdlib_dirs_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____ext_stdlib_dirs_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____file_install_cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____file_install_cmd_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____file_install_cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____file_install_cmd_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____foreign_language_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____foreign_language_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____foreign_language_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____foreign_language_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____gc_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____gc_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____gc_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____gc_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____globals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____globals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____globals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____globals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____install_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____install_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____install_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____install_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____interface_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____interface_ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____interface_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____interface_ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____intermod_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____intermod_ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____intermod_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____intermod_ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____lib_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____lib_ext_0_0();
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____lib_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____lib_ext_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____limit_error_contexts_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____limit_error_contexts_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____limit_error_contexts_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____limit_error_contexts_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____line_number_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____line_number_range_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____line_number_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____line_number_range_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____linked_target_ext_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____linked_target_ext_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____linked_target_ext_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____linked_target_ext_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____linked_target_ext_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____linked_target_ext_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____linked_target_ext_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____linked_target_ext_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____linked_target_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____linked_target_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____linked_target_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____linked_target_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____may_be_thread_safe_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____may_be_thread_safe_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____may_be_thread_safe_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____may_be_thread_safe_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____maybe_item_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____maybe_item_version_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____maybe_item_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____maybe_item_version_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____maybe_smart_recompilation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____maybe_smart_recompilation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____maybe_smart_recompilation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____maybe_smart_recompilation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____maybe_stdlib_grades_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____maybe_stdlib_grades_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____maybe_stdlib_grades_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____maybe_stdlib_grades_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____read_only_globals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____read_only_globals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____read_only_globals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____read_only_globals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____reuse_strategy_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____reuse_strategy_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____reuse_strategy_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____reuse_strategy_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____ssdb_trace_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____ssdb_trace_level_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____ssdb_trace_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____ssdb_trace_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____static_or_shared_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____static_or_shared_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____static_or_shared_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____static_or_shared_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____stdlib_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____stdlib_ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____stdlib_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____stdlib_ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____subdir_setting_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____subdir_setting_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____subdir_setting_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____subdir_setting_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____termination_norm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____termination_norm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____termination_norm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____termination_norm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__globals____Unify____word_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__globals____Unify____word_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__globals____Compare____word_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__globals____Compare____word_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_clang_version_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_compilation_target_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_compiler_output_stream_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_csharp_compiler_type_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_env_type_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ext_c_incl_dirs_map_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ext_dirs_maps_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ext_interface_dirs_map_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ext_intermod_dirs_map_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ext_lib_dirs_map_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ext_stdlib_dirs_map_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_file_install_cmd_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_foreign_language_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_gc_method_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_globals_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_install_method_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_interface_ext_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_intermod_ext_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_lib_ext_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_limit_error_contexts_map_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_line_number_range_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_map_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_linked_target_kind_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_may_be_thread_safe_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_maybe_item_version_numbers_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_maybe_smart_recompilation_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_maybe_stdlib_grades_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_read_only_globals_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_reuse_strategy_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_ssdb_trace_level_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_static_or_shared_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_subdir_setting_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_termination_norm_0);
  MR_register_type_ctor_info(&libs__globals__libs__globals__type_ctor_info_word_size_0);
}

void mercury__libs__globals__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__globals__required_init(void)
{
  libs__globals__user_init_pred_317_0();
  libs__globals__user_init_pred_318_0();
  libs__globals__user_init_pred_319_0();
  libs__globals__user_init_pred_327_0();
  libs__globals__user_init_pred_328_0();
  libs__globals__user_init_pred_329_0();
  libs__globals__user_init_pred_330_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__globals__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.globals.
