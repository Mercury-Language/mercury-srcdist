/*
** Automatically generated from `make.make_info.m'
** by the Mercury compiler,
** version rotd-2023-07-21
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


// :- module make.make_info.
// :- implementation.

/*
INIT mercury__make__make_info__init
ENDINIT
*/

#include "make.make_info.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"




static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_c_header_type_0_0;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_c_header_type_0_1;

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_c_header_type_0[2];

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_c_header_type_0[2];

static const MR_Integer make__make_info__make__make_info__functor_number_map_c_header_type_0[2];

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_0[1];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_0[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_1[1];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_1[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_1;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_2[2];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_2[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_2;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_3[2];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_3[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_3;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_1[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_2[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_3[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_compilation_task_type_0[4];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_compilation_task_type_0[4];

static const MR_Integer make__make_info__make__make_info__functor_number_map_compilation_task_type_0[4];

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_with_module_index_0make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_with_module_index_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_dependency_file_index_map_0_0[3];

static const MR_ConstString make__make_info__make__make_info__field_names_dependency_file_index_map_0_0[3];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_dependency_file_index_map_0_0;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_dependency_file_index_map_0_0[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_dependency_file_index_map_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_dependency_file_index_map_0[1];

static const MR_Integer make__make_info__make__make_info__functor_number_map_dependency_file_index_map_0[1];

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_0;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_1;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_2;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_3;

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_dependency_status_0[4];

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_dependency_status_0[4];

static const MR_Integer make__make_info__make__make_info__functor_number_map_dependency_status_0[4];

static const MR_FA_TypeInfo_Struct2 make__make_info__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_import_or_include_0_0[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_import_or_include_0_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_import_or_include_0_1[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_import_or_include_0_1;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_import_or_include_0_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_import_or_include_0_1[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_import_or_include_0[2];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_import_or_include_0[2];

static const MR_Integer make__make_info__make__make_info__functor_number_map_import_or_include_0[2];

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_linked_target_file_0_0[2];

static const MR_ConstString make__make_info__make__make_info__field_names_linked_target_file_0_0[2];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_linked_target_file_0_0[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_linked_target_file_0_0;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_linked_target_file_0_0[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_linked_target_file_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_linked_target_file_0[1];

static const MR_Integer make__make_info__make__make_info__functor_number_map_linked_target_file_0[1];

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_error_0_0[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_error_0_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_error_0_1[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_error_0_1;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_error_0_2[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_error_0_2;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_error_0_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_error_0_1[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_error_0_2[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_make_error_0[3];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_make_error_0[3];

static const MR_Integer make__make_info__make__make_info__functor_number_map_make_error_0[3];

static const MR_FA_TypeInfo_Struct1 make__make_info__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_top_target_file_0;

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__make_info__type_ctor_info_maybe_module_dep_info_0;

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2make__make_info__type_ctor_info_target_file_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__maybe__ti_maybe_1make__make_info__type_ctor_info_import_or_include_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__maybe__ti_maybe_1make__build__type_ctor_info_job_ctl_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2make__dependencies__type_ctor_info_computed_module_deps_key_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_info_0_0[23];

static const MR_ConstString make__make_info__make__make_info__field_names_make_info_0_0[23];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_make_info_0_0[23];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_info_0_0;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_info_0_0[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_make_info_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_make_info_0[1];

static const MR_Integer make__make_info__make__make_info__functor_number_map_make_info_0[1];

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_0;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_1;

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_maybe_keep_going_0[2];

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_maybe_keep_going_0[2];

static const MR_Integer make__make_info__make__make_info__functor_number_map_maybe_keep_going_0[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_maybe_module_dep_info_0_1[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_1;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_maybe_module_dep_info_0_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_maybe_module_dep_info_0_1[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_maybe_module_dep_info_0[2];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_maybe_module_dep_info_0[2];

static const MR_Integer make__make_info__make__make_info__functor_number_map_maybe_module_dep_info_0[2];

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_0;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_1;

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_maybe_rebuild_module_deps_0[2];

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_maybe_rebuild_module_deps_0[2];

static const MR_Integer make__make_info__make__make_info__functor_number_map_maybe_rebuild_module_deps_0[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_0;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_1;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_misc_target_type_0_2[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_2;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_3;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_4;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_5;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_6;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_misc_target_type_0_0[6];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_misc_target_type_0_1[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_misc_target_type_0[2];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_misc_target_type_0[7];

static const MR_Integer make__make_info__make__make_info__functor_number_map_misc_target_type_0[7];

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_0;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_1;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_2;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_3;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_4;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_5;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_6;

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_7;

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_module_compilation_task_type_0[8];

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_module_compilation_task_type_0[8];

static const MR_Integer make__make_info__make__make_info__functor_number_map_module_compilation_task_type_0[8];

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 make__make_info__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_index_map_0_0[3];

static const MR_ConstString make__make_info__make__make_info__field_names_module_index_map_0_0[3];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_index_map_0_0;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_index_map_0_0[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_module_index_map_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_module_index_map_0[1];

static const MR_Integer make__make_info__make__make_info__functor_number_map_module_index_map_0[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_0;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_1;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_2;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_3;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_4;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_5;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_6;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_7;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_8;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_9[1];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_9[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_9;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_10;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_11;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_12;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_13;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_14[1];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_14[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_14;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_15[2];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_15[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_15;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_16[2];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_16[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_16;

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_17;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_0[14];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_1[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_2[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_3[2];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_module_target_type_0[4];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_module_target_type_0[18];

static const MR_Integer make__make_info__make__make_info__functor_number_map_module_target_type_0[18];

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_file_0_0[2];

static const MR_ConstString make__make_info__make__make_info__field_names_target_file_0_0[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_file_0_0;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_file_0_0[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_target_file_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_target_file_0[1];

static const MR_Integer make__make_info__make__make_info__functor_number_map_target_file_0[1];

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_type_0_0[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_type_0_0;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_type_0_1[1];

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_target_type_0_1[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_type_0_1;

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_type_0_2[1];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_type_0_2;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_type_0_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_type_0_1[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_type_0_2[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_target_type_0[3];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_target_type_0[3];

static const MR_Integer make__make_info__make__make_info__functor_number_map_target_type_0[3];

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_top_target_file_0_0[2];

static const MR_ConstString make__make_info__make__make_info__field_names_top_target_file_0_0[2];

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_top_target_file_0_0;

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_top_target_file_0_0[1];

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_top_target_file_0[1];

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_top_target_file_0[1];

static const MR_Integer make__make_info__make__make_info__functor_number_map_top_target_file_0[1];

static MR_bool MR_CALL 
make__make_info____Unify____c_header_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____c_header_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____dependency_file_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____dependency_file_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____dependency_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____dependency_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____file_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____file_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____import_or_include_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____import_or_include_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____linked_target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____linked_target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____make_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____make_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____make_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____make_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____maybe_keep_going_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____maybe_keep_going_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____maybe_module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____maybe_module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____maybe_rebuild_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____maybe_rebuild_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____misc_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____misc_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____module_compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____module_compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____module_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____module_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____module_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____module_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____target_file_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____target_file_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__make_info____Unify____top_target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__make_info____Compare____top_target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__make_info_scalar_common_1[7][3];

static /* final */ const MR_Box make__make_info_scalar_common_2[7][2];




static /* final */ const MR_Box make__make_info_scalar_common_1[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
};

static /* final */ const MR_Box make__make_info_scalar_common_2[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_import_or_include_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__build__make__build__type_ctor_info_stdout_lock_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_c_header_type_0[2] = {
  &make__make_info__make__make_info__enum_functor_desc_c_header_type_0_0,
  &make__make_info__make__make_info__enum_functor_desc_c_header_type_0_1
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_c_header_type_0[2] = {
  &make__make_info__make__make_info__enum_functor_desc_c_header_type_0_0,
  &make__make_info__make__make_info__enum_functor_desc_c_header_type_0_1
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_c_header_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_c_header_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__make_info____Unify____c_header_type_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____c_header_type_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "c_header_type",
  { make__make_info__make__make_info__enum_name_ordered_c_header_type_0 },
  { make__make_info__make__make_info__enum_ordinal_ordered_c_header_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_c_header_type_0,

};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_0[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_compilation_task_type_0) };

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_0 = {
  (MR_String) "process_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_compilation_task_type_0_0,
  NULL,
  make__make_info__make__make_info__field_locns_compilation_task_type_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_1[1] = { (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0) };

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_1 = {
  (MR_String) "target_code_to_object_code",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make_info__make__make_info__field_types_compilation_task_type_0_1,
  NULL,
  make__make_info__make__make_info__field_locns_compilation_task_type_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_2 = {
  (MR_String) "foreign_code_to_object_code",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__make_info__make__make_info__field_types_compilation_task_type_0_2,
  NULL,
  make__make_info__make__make_info__field_locns_compilation_task_type_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_compilation_task_type_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_3 = {
  (MR_String) "fact_table_code_to_object_code",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  make__make_info__make__make_info__field_types_compilation_task_type_0_3,
  NULL,
  make__make_info__make__make_info__field_locns_compilation_task_type_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_0 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_1[1] = { &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_1 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_2[1] = { &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_2 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_3[1] = { &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_3 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_compilation_task_type_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_compilation_task_type_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_compilation_task_type_0[4] = {
  &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_3,
  &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_2,
  &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_0,
  &make__make_info__make__make_info__du_functor_desc_compilation_task_type_0_1
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_compilation_task_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_compilation_task_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____compilation_task_type_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____compilation_task_type_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "compilation_task_type",
  { make__make_info__make__make_info__du_name_ordered_compilation_task_type_0 },
  { make__make_info__make__make_info__du_ptag_ordered_compilation_task_type_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_compilation_task_type_0,

};

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_with_module_index_0make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0),
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_with_module_index_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  { (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0) }
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__make_info__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_with_module_index_0make__deps_set__type_ctor_info_dependency_file_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_with_module_index_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString make__make_info__make__make_info__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_dependency_file_index_map_0_0 = {
  (MR_String) "dependency_file_index_map",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_dependency_file_index_map_0_0,
  make__make_info__make__make_info__field_names_dependency_file_index_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_dependency_file_index_map_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_dependency_file_index_map_0_0 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_dependency_file_index_map_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_dependency_file_index_map_0[1] = { &make__make_info__make__make_info__du_functor_desc_dependency_file_index_map_0_0 };

static const MR_Integer make__make_info__make__make_info__functor_number_map_dependency_file_index_map_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_dependency_file_index_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____dependency_file_index_map_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____dependency_file_index_map_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "dependency_file_index_map",
  { make__make_info__make__make_info__du_name_ordered_dependency_file_index_map_0 },
  { make__make_info__make__make_info__du_ptag_ordered_dependency_file_index_map_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_dependency_file_index_map_0,

};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_dependency_status_0[4] = {
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_0,
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_1,
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_2,
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_3
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_dependency_status_0[4] = {
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_1,
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_3,
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_0,
  &make__make_info__make__make_info__enum_functor_desc_dependency_status_0_2
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_dependency_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_dependency_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__make_info____Unify____dependency_status_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____dependency_status_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "dependency_status",
  { make__make_info__make__make_info__enum_name_ordered_dependency_status_0 },
  { make__make_info__make__make_info__enum_ordinal_ordered_dependency_status_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_dependency_status_0,

};

static const MR_FA_TypeInfo_Struct2 make__make_info__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__make_info__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_file_timestamps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__make_info____Unify____file_timestamps_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____file_timestamps_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "file_timestamps",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_import_or_include_0_0[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_import_or_include_0_0 = {
  (MR_String) "ioi_import",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_import_or_include_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_import_or_include_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_import_or_include_0_1 = {
  (MR_String) "ioi_include",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make_info__make__make_info__field_types_import_or_include_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_import_or_include_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_import_or_include_0_0 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_import_or_include_0_1[1] = { &make__make_info__make__make_info__du_functor_desc_import_or_include_0_1 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_import_or_include_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_import_or_include_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_import_or_include_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_import_or_include_0[2] = {
  &make__make_info__make__make_info__du_functor_desc_import_or_include_0_0,
  &make__make_info__make__make_info__du_functor_desc_import_or_include_0_1
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_import_or_include_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_import_or_include_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____import_or_include_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____import_or_include_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "import_or_include",
  { make__make_info__make__make_info__du_name_ordered_import_or_include_0 },
  { make__make_info__make__make_info__du_ptag_ordered_import_or_include_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_import_or_include_0,

};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)
};

static const MR_ConstString make__make_info__make__make_info__field_names_linked_target_file_0_0[2] = {
  (MR_String) "linked_tf_name",
  (MR_String) "linked_tf_type"
};

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_linked_target_file_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_linked_target_file_0_0 = {
  (MR_String) "linked_target_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_linked_target_file_0_0,
  make__make_info__make__make_info__field_names_linked_target_file_0_0,
  make__make_info__make__make_info__field_locns_linked_target_file_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_linked_target_file_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_linked_target_file_0_0 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_linked_target_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_linked_target_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_linked_target_file_0[1] = { &make__make_info__make__make_info__du_functor_desc_linked_target_file_0_0 };

static const MR_Integer make__make_info__make__make_info__functor_number_map_linked_target_file_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_linked_target_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____linked_target_file_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____linked_target_file_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "linked_target_file",
  { make__make_info__make__make_info__du_name_ordered_linked_target_file_0 },
  { make__make_info__make__make_info__du_ptag_ordered_linked_target_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_linked_target_file_0,

};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_error_0_0[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_error_0_0 = {
  (MR_String) "make_error_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_make_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_error_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_error_0_1 = {
  (MR_String) "make_error_dependencies",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make_info__make__make_info__field_types_make_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_error_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_error_0_2 = {
  (MR_String) "make_error_other",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__make_info__make__make_info__field_types_make_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_error_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_make_error_0_0 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_error_0_1[1] = { &make__make_info__make__make_info__du_functor_desc_make_error_0_1 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_error_0_2[1] = { &make__make_info__make__make_info__du_functor_desc_make_error_0_2 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_make_error_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    make__make_info__make__make_info__du_stag_ordered_make_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_make_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_make_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_make_error_0[3] = {
  &make__make_info__make__make_info__du_functor_desc_make_error_0_1,
  &make__make_info__make__make_info__du_functor_desc_make_error_0_2,
  &make__make_info__make__make_info__du_functor_desc_make_error_0_0
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_make_error_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_make_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____make_error_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____make_error_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "make_error",
  { make__make_info__make__make_info__du_name_ordered_make_error_0 },
  { make__make_info__make__make_info__du_ptag_ordered_make_error_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_make_error_0,

};

static const MR_FA_TypeInfo_Struct1 make__make_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_top_target_file_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0) }
};

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__make_info__type_ctor_info_maybe_module_dep_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2make__make_info__type_ctor_info_target_file_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__maybe__ti_maybe_1make__make_info__type_ctor_info_import_or_include_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_import_or_include_0) }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__maybe__ti_maybe_1make__build__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&make__build__make__build__type_ctor_info_job_ctl_0) }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  { (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0) }
};

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_TypeInfo) (&make__make_info__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0),
    (MR_TypeInfo) (&make__make_info__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  { (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0) }
};

static const MR_FA_TypeInfo_Struct2 make__make_info__tree234__ti_tree234_2make__dependencies__type_ctor_info_computed_module_deps_key_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0),
    (MR_TypeInfo) (&make__make_info__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_make_info_0_0[23] = {
  (MR_PseudoTypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_variables_0),
  (MR_PseudoTypeInfo) (&make__make_info__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0),
  (MR_PseudoTypeInfo) (&make__make_info__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__make_info__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_top_target_file_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__make_info__type_ctor_info_maybe_module_dep_info_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__make_info__version_hash_table__ti_version_hash_table_2make__make_info__type_ctor_info_target_file_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_index_map_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_index_map_0),
  (MR_PseudoTypeInfo) (&make__make_info__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0),
  (MR_PseudoTypeInfo) (&make__make_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&make__make_info__maybe__ti_maybe_1make__make_info__type_ctor_info_import_or_include_0),
  (MR_PseudoTypeInfo) (&make__make_info__maybe__ti_maybe_1make__build__type_ctor_info_job_ctl_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__tree234__ti_tree234_2make__dependencies__type_ctor_info_computed_module_deps_key_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0)
};

static const MR_ConstString make__make_info__make__make_info__field_names_make_info_0_0[23] = {
  (MR_String) "mki_options_variables",
  (MR_String) "mki_detected_grade_flags",
  (MR_String) "mki_keep_going",
  (MR_String) "mki_option_args",
  (MR_String) "mki_command_line_targets",
  (MR_String) "mki_rebuild_module_deps",
  (MR_String) "mki_reanalysis_passes",
  (MR_String) "mki_module_dependencies",
  (MR_String) "mki_file_timestamps",
  (MR_String) "mki_target_file_timestamps",
  (MR_String) "mki_module_index_map",
  (MR_String) "mki_dep_file_index_map",
  (MR_String) "mki_dependency_status",
  (MR_String) "mki_error_file_modules",
  (MR_String) "mki_importing_module",
  (MR_String) "mki_maybe_stdout_lock",
  (MR_String) "mki_mi_read_module_maps",
  (MR_String) "mki_cached_direct_imports",
  (MR_String) "mki_cached_non_intermod_direct_imports",
  (MR_String) "mki_cached_indirect_imports",
  (MR_String) "mki_cached_transitive_dependencies",
  (MR_String) "mki_cached_transitive_foreign_imports",
  (MR_String) "mki_cached_computed_module_deps"
};

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_make_info_0_0[23] = {
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
    (MR_Integer) 1
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
    (MR_Integer) 1
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
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 17,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 18,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 19,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 20,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 21,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 22,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_make_info_0_0 = {
  (MR_String) "make_info",
  INT16_C(23),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_make_info_0_0,
  make__make_info__make__make_info__field_names_make_info_0_0,
  make__make_info__make__make_info__field_locns_make_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_make_info_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_make_info_0_0 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_make_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_make_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_make_info_0[1] = { &make__make_info__make__make_info__du_functor_desc_make_info_0_0 };

static const MR_Integer make__make_info__make__make_info__functor_number_map_make_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_make_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____make_info_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____make_info_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "make_info",
  { make__make_info__make__make_info__du_name_ordered_make_info_0 },
  { make__make_info__make__make_info__du_ptag_ordered_make_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_make_info_0,

};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_0 = {
  (MR_String) "do_not_keep_going",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_1 = {
  (MR_String) "do_keep_going",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_maybe_keep_going_0[2] = {
  &make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_0,
  &make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_1
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_maybe_keep_going_0[2] = {
  &make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_1,
  &make__make_info__make__make_info__enum_functor_desc_maybe_keep_going_0_0
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_maybe_keep_going_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__make_info____Unify____maybe_keep_going_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____maybe_keep_going_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "maybe_keep_going",
  { make__make_info__make__make_info__enum_name_ordered_maybe_keep_going_0 },
  { make__make_info__make__make_info__enum_ordinal_ordered_maybe_keep_going_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_maybe_keep_going_0,

};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_0 = {
  (MR_String) "no_module_dep_info",
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

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_maybe_module_dep_info_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_1 = {
  (MR_String) "some_module_dep_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make_info__make__make_info__field_types_maybe_module_dep_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_maybe_module_dep_info_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_0 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_maybe_module_dep_info_0_1[1] = { &make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_1 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_maybe_module_dep_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__make_info__make__make_info__du_stag_ordered_maybe_module_dep_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_maybe_module_dep_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_maybe_module_dep_info_0[2] = {
  &make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_0,
  &make__make_info__make__make_info__du_functor_desc_maybe_module_dep_info_0_1
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_maybe_module_dep_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____maybe_module_dep_info_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____maybe_module_dep_info_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "maybe_module_dep_info",
  { make__make_info__make__make_info__du_name_ordered_maybe_module_dep_info_0 },
  { make__make_info__make__make_info__du_ptag_ordered_maybe_module_dep_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_maybe_module_dep_info_0,

};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_maybe_rebuild_module_deps_0[2] = {
  &make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_0,
  &make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_1
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_maybe_rebuild_module_deps_0[2] = {
  &make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_1,
  &make__make_info__make__make_info__enum_functor_desc_maybe_rebuild_module_deps_0_0
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_maybe_rebuild_module_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__make_info____Unify____maybe_rebuild_module_deps_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____maybe_rebuild_module_deps_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "maybe_rebuild_module_deps",
  { make__make_info__make__make_info__enum_name_ordered_maybe_rebuild_module_deps_0 },
  { make__make_info__make__make_info__enum_ordinal_ordered_maybe_rebuild_module_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_maybe_rebuild_module_deps_0,

};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_0 = {
  (MR_String) "misc_target_clean",
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

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_1 = {
  (MR_String) "misc_target_realclean",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_misc_target_type_0_2[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_2 = {
  (MR_String) "misc_target_build_all",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  make__make_info__make__make_info__field_types_misc_target_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_3 = {
  (MR_String) "misc_target_build_analyses",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_4 = {
  (MR_String) "misc_target_build_library",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_5 = {
  (MR_String) "misc_target_install_library",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_misc_target_type_0_6 = {
  (MR_String) "misc_target_build_xml_docs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_misc_target_type_0_0[6] = {
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_0,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_1,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_3,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_4,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_5,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_6
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_misc_target_type_0_1[1] = { &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_2 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_misc_target_type_0[2] = {
  {
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__make_info__make__make_info__du_stag_ordered_misc_target_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_misc_target_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_misc_target_type_0[7] = {
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_2,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_3,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_4,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_6,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_0,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_5,
  &make__make_info__make__make_info__du_functor_desc_misc_target_type_0_1
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_misc_target_type_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_misc_target_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____misc_target_type_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____misc_target_type_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "misc_target_type",
  { make__make_info__make__make_info__du_name_ordered_misc_target_type_0 },
  { make__make_info__make__make_info__du_ptag_ordered_misc_target_type_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_misc_target_type_0,

};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_int0",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_int12",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_int3",
  INT32_C(3)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_opt",
  INT32_C(4)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  INT32_C(5)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  INT32_C(6)
};

static const MR_EnumFunctorDesc make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  INT32_C(7)
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_ordinal_ordered_module_compilation_task_type_0[8] = {
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_0,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_1,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_2,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_3,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_4,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_5,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_6,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_7
};

static const MR_EnumFunctorDescPtr make__make_info__make__make_info__enum_name_ordered_module_compilation_task_type_0[8] = {
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_6,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_0,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_5,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_1,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_2,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_3,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_4,
  &make__make_info__make__make_info__enum_functor_desc_module_compilation_task_type_0_7
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_module_compilation_task_type_0[8] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_module_compilation_task_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__make_info____Unify____module_compilation_task_type_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____module_compilation_task_type_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "module_compilation_task_type",
  { make__make_info__make__make_info__enum_name_ordered_module_compilation_task_type_0 },
  { make__make_info__make__make_info__enum_ordinal_ordered_module_compilation_task_type_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_module_compilation_task_type_0,

};

static const MR_FA_TypeInfo_Struct2 make__make_info__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__make_info__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__make_info__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString make__make_info__make__make_info__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_index_map_0_0 = {
  (MR_String) "module_index_map",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_module_index_map_0_0,
  make__make_info__make__make_info__field_names_module_index_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_index_map_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_module_index_map_0_0 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_module_index_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_module_index_map_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_module_index_map_0[1] = { &make__make_info__make__make_info__du_functor_desc_module_index_map_0_0 };

static const MR_Integer make__make_info__make__make_info__functor_number_map_module_index_map_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_module_index_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____module_index_map_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____module_index_map_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "module_index_map",
  { make__make_info__make__make_info__du_name_ordered_module_index_map_0 },
  { make__make_info__make__make_info__du_ptag_ordered_module_index_map_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_module_index_map_0,

};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_0 = {
  (MR_String) "module_target_source",
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

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_1 = {
  (MR_String) "module_target_errors",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_2 = {
  (MR_String) "module_target_int0",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_3 = {
  (MR_String) "module_target_int1",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_4 = {
  (MR_String) "module_target_int2",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_5 = {
  (MR_String) "module_target_int3",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_6 = {
  (MR_String) "module_target_opt",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_7 = {
  (MR_String) "module_target_analysis_registry",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_8 = {
  (MR_String) "module_target_track_flags",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_9[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_c_header_type_0) };

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_9[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_9 = {
  (MR_String) "module_target_c_header",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(9),
  make__make_info__make__make_info__field_types_module_target_type_0_9,
  NULL,
  make__make_info__make__make_info__field_locns_module_target_type_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_10 = {
  (MR_String) "module_target_c_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_11 = {
  (MR_String) "module_target_csharp_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 10,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_12 = {
  (MR_String) "module_target_java_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 11,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_13 = {
  (MR_String) "module_target_java_class_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 12,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_14[1] = { (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0) };

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_14[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_14 = {
  (MR_String) "module_target_object_code",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(14),
  make__make_info__make__make_info__field_types_module_target_type_0_14,
  NULL,
  make__make_info__make__make_info__field_locns_module_target_type_0_14,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_15[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_15[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_15 = {
  (MR_String) "module_target_foreign_object",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(15),
  make__make_info__make__make_info__field_types_module_target_type_0_15,
  NULL,
  make__make_info__make__make_info__field_locns_module_target_type_0_15,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_module_target_type_0_16[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_module_target_type_0_16[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_16 = {
  (MR_String) "module_target_fact_table_object",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(16),
  make__make_info__make__make_info__field_types_module_target_type_0_16,
  NULL,
  make__make_info__make__make_info__field_locns_module_target_type_0_16,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_module_target_type_0_17 = {
  (MR_String) "module_target_xml_doc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 13,
  INT32_C(17),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_0[14] = {
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_0,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_1,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_2,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_3,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_4,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_5,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_6,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_7,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_8,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_10,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_11,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_12,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_13,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_17
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_1[1] = { &make__make_info__make__make_info__du_functor_desc_module_target_type_0_9 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_2[1] = { &make__make_info__make__make_info__du_functor_desc_module_target_type_0_14 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_module_target_type_0_3[2] = {
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_15,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_16
};

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_module_target_type_0[4] = {
  {
    UINT32_C(14),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__make_info__make__make_info__du_stag_ordered_module_target_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_module_target_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_module_target_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    make__make_info__make__make_info__du_stag_ordered_module_target_type_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_module_target_type_0[18] = {
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_7,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_10,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_9,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_11,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_1,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_16,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_15,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_2,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_3,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_4,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_5,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_13,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_12,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_14,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_6,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_0,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_8,
  &make__make_info__make__make_info__du_functor_desc_module_target_type_0_17
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_module_target_type_0[18] = {
  (MR_Integer) 15,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 14,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 13,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 17
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_module_target_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____module_target_type_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____module_target_type_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "module_target_type",
  { make__make_info__make__make_info__du_name_ordered_module_target_type_0 },
  { make__make_info__make__make_info__du_ptag_ordered_module_target_type_0 },
  (MR_Integer) 18,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_module_target_type_0,

};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)
};

static const MR_ConstString make__make_info__make__make_info__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_file_0_0 = {
  (MR_String) "target_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_target_file_0_0,
  make__make_info__make__make_info__field_names_target_file_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_file_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_target_file_0_0 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_target_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_target_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_target_file_0[1] = { &make__make_info__make__make_info__du_functor_desc_target_file_0_0 };

static const MR_Integer make__make_info__make__make_info__functor_number_map_target_file_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_target_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____target_file_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____target_file_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "target_file",
  { make__make_info__make__make_info__du_name_ordered_target_file_0 },
  { make__make_info__make__make_info__du_ptag_ordered_target_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_target_file_0,

};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_target_file_timestamps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__make_info____Unify____target_file_timestamps_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____target_file_timestamps_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "target_file_timestamps",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__make_info__version_hash_table__ti_version_hash_table_2make__make_info__type_ctor_info_target_file_0libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_type_0_0[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_type_0_0 = {
  (MR_String) "module_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_target_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_type_0_1[1] = { (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0) };

static const MR_DuArgLocn make__make_info__make__make_info__field_locns_target_type_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_type_0_1 = {
  (MR_String) "linked_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make_info__make__make_info__field_types_target_type_0_1,
  NULL,
  make__make_info__make__make_info__field_locns_target_type_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_target_type_0_2[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_misc_target_type_0) };

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_target_type_0_2 = {
  (MR_String) "misc_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__make_info__make__make_info__field_types_target_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_type_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_target_type_0_0 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_type_0_1[1] = { &make__make_info__make__make_info__du_functor_desc_target_type_0_1 };

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_target_type_0_2[1] = { &make__make_info__make__make_info__du_functor_desc_target_type_0_2 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_target_type_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_target_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_target_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_target_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_target_type_0[3] = {
  &make__make_info__make__make_info__du_functor_desc_target_type_0_1,
  &make__make_info__make__make_info__du_functor_desc_target_type_0_2,
  &make__make_info__make__make_info__du_functor_desc_target_type_0_0
};

static const MR_Integer make__make_info__make__make_info__functor_number_map_target_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_target_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____target_type_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____target_type_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "target_type",
  { make__make_info__make__make_info__du_name_ordered_target_type_0 },
  { make__make_info__make__make_info__du_ptag_ordered_target_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_target_type_0,

};

static const MR_PseudoTypeInfo make__make_info__make__make_info__field_types_top_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_type_0)
};

static const MR_ConstString make__make_info__make__make_info__field_names_top_target_file_0_0[2] = {
  (MR_String) "ttf_name",
  (MR_String) "ttf_type"
};

static const MR_DuFunctorDesc make__make_info__make__make_info__du_functor_desc_top_target_file_0_0 = {
  (MR_String) "top_target_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make_info__make__make_info__field_types_top_target_file_0_0,
  make__make_info__make__make_info__field_names_top_target_file_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_stag_ordered_top_target_file_0_0[1] = { &make__make_info__make__make_info__du_functor_desc_top_target_file_0_0 };

static const MR_DuPtagLayout make__make_info__make__make_info__du_ptag_ordered_top_target_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make_info__make__make_info__du_stag_ordered_top_target_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__make_info__make__make_info__du_name_ordered_top_target_file_0[1] = { &make__make_info__make__make_info__du_functor_desc_top_target_file_0_0 };

static const MR_Integer make__make_info__make__make_info__functor_number_map_top_target_file_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__make_info__make__make_info__type_ctor_info_top_target_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__make_info____Unify____top_target_file_0_0_10001)),
  ((MR_Box) (make__make_info____Compare____top_target_file_0_0_10001)),
  (MR_String) "make.make_info",
  (MR_String) "top_target_file",
  { make__make_info__make__make_info__du_name_ordered_top_target_file_0 },
  { make__make_info__make__make_info__du_ptag_ordered_top_target_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__make_info__make__make_info__functor_number_map_top_target_file_0,

};

void MR_CALL 
make__make_info____Compare____top_target_file_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      make__make_info____Compare____target_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
make__make_info____Unify____top_target_file_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = make__make_info____Unify____target_type_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____target_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_29, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Integer Var_30 = (MR_Integer) (Var_27);
                MR_Integer Var_31 = (MR_Integer) (ArgY1_13);

                succeeded = (Var_30 < Var_31);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_30 > Var_31);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____misc_target_type_0_0(HeadVar__1_1, Var_28, ArgY1_21);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
make__make_info____Unify____target_type_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = make__make_info____Unify____misc_target_type_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____target_file_timestamps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__make_info____Unify____target_file_timestamps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__make_info_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____module_compilation_task_type_0_0(
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
make__make_info____Unify____module_compilation_task_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__make_info____Compare____misc_target_type_0_0(
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
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_21, ArgY1_9);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
make__make_info____Unify____misc_target_type_0_0(
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
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____maybe_rebuild_module_deps_0_0(
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
make__make_info____Unify____maybe_rebuild_module_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__make_info____Compare____maybe_module_dep_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__module_dep_info____Compare____module_dep_info_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

MR_bool MR_CALL 
make__make_info____Unify____maybe_module_dep_info_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__module_dep_info____Unify____module_dep_info_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____maybe_keep_going_0_0(
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
make__make_info____Unify____maybe_keep_going_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__make_info____Compare____make_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_72 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_73 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_72 == CastY_73);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 18))));
    MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 19))));
    MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 20))));
    MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 21))));
    MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 22))));
    MR_Word SubResult1_6;

    make__options_file____Compare____options_variables_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_97 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_98 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_97 < Var_98);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_97 > Var_98);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_99 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_100 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_99 < Var_100);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_99 > Var_100);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[3]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[2]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[4]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        make__make_info____Compare____module_index_map_0_0(&SubResult11_36, ArgX11_34, ArgY11_35);
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          make__make_info____Compare____dependency_file_index_map_0_0(&SubResult12_39, ArgX12_37, ArgY12_38);
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[5]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[3]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[4]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[5]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    parse_tree__read_modules____Compare____have_read_module_maps_0_0(&SubResult17_54, ArgX17_52, ArgY17_53);
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                      succeeded = (SubResult18_57 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                        succeeded = (SubResult19_60 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_indirect_imports_0), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                          succeeded = (SubResult20_63 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                            succeeded = (SubResult21_66 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_foreign_imports_0), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                              succeeded = (SubResult22_69 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                                mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_computed_module_deps_0), HeadVar__1_1, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
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

void MR_CALL 
make__make_info____Compare____module_index_map_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX2_7 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box ArgY2_8 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
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
make__make_info____Unify____make_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_49 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_50 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_49 == CastY_50);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_52_52;
    MR_Word TypeInfo_53_53;
    MR_Word TypeInfo_54_54;
    MR_Word TypeInfo_55_55;
    MR_Word TypeInfo_56_56;
    MR_Word TypeInfo_57_57;
    MR_Word TypeInfo_58_58;
    MR_Word TypeInfo_59_59;
    MR_Word TypeInfo_60_60;
    MR_Word TypeInfo_61_61;
    MR_Word TypeCtorInfo_63_63;
    MR_Word TypeCtorInfo_64_64;
    MR_Word TypeCtorInfo_65_65;
    MR_Word TypeCtorInfo_66_66;
    MR_Word TypeCtorInfo_67_67;
    MR_Word TypeCtorInfo_68_68;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 18))));
    MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 19))));
    MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 20))));
    MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 21))));
    MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 22))));
    MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));

    succeeded = make__options_file____Unify____options_variables_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_52_52 = (MR_Word) (&make__make_info_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_53_53 = (MR_Word) (&make__make_info_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_54_54 = (MR_Word) (&make__make_info_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_55_55 = (MR_Word) (&make__make_info_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_56_56 = (MR_Word) (&make__make_info_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_57_57 = (MR_Word) (&make__make_info_scalar_common_1[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        succeeded = make__make_info____Unify____module_index_map_0_0(ArgX11_23, ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = make__make_info____Unify____dependency_file_index_map_0_0(ArgX12_25, ArgY12_26);
                          if (succeeded)
                          {
                            TypeInfo_58_58 = (MR_Word) (&make__make_info_scalar_common_1[5]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_59_59 = (MR_Word) (&make__make_info_scalar_common_2[3]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_60_60 = (MR_Word) (&make__make_info_scalar_common_2[4]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  TypeInfo_61_61 = (MR_Word) (&make__make_info_scalar_common_2[5]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(ArgX17_35, ArgY17_36);
                                    if (succeeded)
                                    {
                                      TypeCtorInfo_63_63 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_63_63, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                      if (succeeded)
                                      {
                                        TypeCtorInfo_64_64 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_64_64, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                        if (succeeded)
                                        {
                                          TypeCtorInfo_65_65 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_indirect_imports_0);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_65_65, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                          if (succeeded)
                                          {
                                            TypeCtorInfo_66_66 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_66_66, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_67_67 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_foreign_imports_0);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_67_67, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_68_68 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_computed_module_deps_0);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_68_68, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
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
make__make_info____Unify____module_index_map_0_0(
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
    MR_Word TypeCtorInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgX2_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Box ArgY2_6 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__make_info_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeCtorInfo_12_12 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      succeeded = mercury__version_array____Unify____version_array_1_0(TypeCtorInfo_12_12, ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____make_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_29 = (MR_Word) ((MR_Word) (HeadVar__2_2));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                make__make_info____Compare____target_file_0_0(HeadVar__1_1, Var_29, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_27, ArgY1_13);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_28 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_28, ArgY1_21);
              }
              break;
          }
        }
        break;
    }
}

void MR_CALL 
make__make_info____Compare____target_file_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
make__make_info____Compare____module_target_type_0_0(
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
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    make__make_info____Index____module_target_type_0_0(HeadVar__2_2, &IndexX_4);
    make__make_info____Index____module_target_type_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 7:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 9:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 11:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 12:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 13:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer Var_29;
              MR_Integer Var_30;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                Var_29 = (MR_Integer) (ArgX1_7);
                Var_30 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_29 < Var_30);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_29 > Var_30);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_10;
              MR_Integer Var_37;
              MR_Integer Var_38;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                Var_37 = (MR_Integer) (ArgX1_9);
                Var_38 = (MR_Integer) (ArgY1_10);
                succeeded = (Var_37 < Var_38);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_37 > Var_38);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_11 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                  MR_Word ArgY1_12;
                  MR_Word ArgX2_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY2_15;
                  MR_Word SubResult1_13;
                  MR_Integer Var_33;
                  MR_Integer Var_34;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_12 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                    ArgY2_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_33 = (MR_Integer) (ArgX1_11);
                    Var_34 = (MR_Integer) (ArgY1_12);
                    succeeded = (Var_33 < Var_34);
                    if (succeeded)
                    {
                      SubResult1_13 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_33 > Var_34);
                      if (succeeded)
                      {
                        SubResult1_13 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_13 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_13;
                    else
                    {
                      MR_Integer Var_35 = (MR_Integer) (ArgX2_14);
                      MR_Integer Var_36 = (MR_Integer) (ArgY2_15);

                      succeeded = (Var_35 < Var_36);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_35 > Var_36);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_17;
                  MR_String ArgX2_19 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  MR_String ArgY2_20;
                  MR_Word SubResult1_18;
                  MR_Integer Var_31;
                  MR_Integer Var_32;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_20 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                    Var_31 = (MR_Integer) (ArgX1_16);
                    Var_32 = (MR_Integer) (ArgY1_17);
                    succeeded = (Var_31 < Var_32);
                    if (succeeded)
                    {
                      SubResult1_18 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_31 > Var_32);
                      if (succeeded)
                      {
                        SubResult1_18 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_18 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_18;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_19, ArgY2_20);
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
make__make_info____Index____module_target_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 9;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 14;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
make__make_info____Unify____make_error_0_0(
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
          MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = make__make_info____Unify____target_file_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
make__make_info____Unify____target_file_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = make__make_info____Unify____module_target_type_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
make__make_info____Unify____module_target_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_43 == CastY_44);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_20 == CastX_19);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_24 == CastX_23);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_26 == CastX_25);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_28 == CastX_27);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_30 == CastX_29);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_42 == CastX_41);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_22;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_21 == ArgY1_22);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_32;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_31 == ArgY1_32);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_33 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
              MR_Word ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY2_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_34 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                ArgY2_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_33 == ArgY1_34);
                if (succeeded)
                  succeeded = (ArgX2_35 == ArgY2_36);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_38;
              MR_String ArgX2_39 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_40 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_37 == ArgY1_38);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_39, ArgY2_40) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____linked_target_file_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
make__make_info____Unify____linked_target_file_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____import_or_include_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_16, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_17, ArgY1_11);
    }
  }
}

MR_bool MR_CALL 
make__make_info____Unify____import_or_include_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____file_timestamps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__make_info____Unify____file_timestamps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__make_info_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____dependency_status_0_0(
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
make__make_info____Unify____dependency_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__make_info____Compare____dependency_file_index_map_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX2_7 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box ArgY2_8 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__make_info_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
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
make__make_info____Unify____dependency_file_index_map_0_0(
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
    MR_Word TypeCtorInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgX2_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Box ArgY2_6 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__make_info_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeCtorInfo_12_12 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0);
      succeeded = mercury__version_array____Unify____version_array_1_0(TypeCtorInfo_12_12, ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____compilation_task_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_54 == CastY_55);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_66 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Integer Var_74 = (MR_Integer) (Var_66);
                MR_Integer Var_75 = (MR_Integer) (ArgY1_5);

                succeeded = (Var_74 < Var_75);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_74 > Var_75);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
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
      case (MR_Integer) 1:
        {
          MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_17 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer Var_76 = (MR_Integer) (Var_67);
                MR_Integer Var_77 = (MR_Integer) (ArgY1_17);

                succeeded = (Var_76 < Var_77);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_76 > Var_77);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
          MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_31 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                MR_Word ArgY2_34 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word SubResult1_32;
                MR_Integer Var_70 = (MR_Integer) (Var_65);
                MR_Integer Var_71 = (MR_Integer) (ArgY1_31);

                succeeded = (Var_70 < Var_71);
                if (succeeded)
                {
                  SubResult1_32 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_70 > Var_71);
                  if (succeeded)
                  {
                    SubResult1_32 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_32 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_32;
                else
                {
                  MR_Integer Var_72 = (MR_Integer) (Var_64);
                  MR_Integer Var_73 = (MR_Integer) (ArgY2_34);

                  succeeded = (Var_72 < Var_73);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_72 > Var_73);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
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
          MR_String Var_62 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_63 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_50 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String ArgY2_53 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_51;
                MR_Integer Var_68 = (MR_Integer) (Var_63);
                MR_Integer Var_69 = (MR_Integer) (ArgY1_50);

                succeeded = (Var_68 < Var_69);
                if (succeeded)
                {
                  SubResult1_51 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_68 > Var_69);
                  if (succeeded)
                  {
                    SubResult1_51 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_51 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_51;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_62, ArgY2_53);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
make__make_info____Unify____compilation_task_type_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_12;
          MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_11 == ArgY1_12);
            if (succeeded)
              succeeded = (strcmp(ArgX2_13, ArgY2_14) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__make_info____Compare____c_header_type_0_0(
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
make__make_info____Unify____c_header_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__make_info__make_info_set_cached_computed_module_deps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
make__make_info__make_info_set_cached_transitive_foreign_imports_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_cached_transitive_dependencies_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_cached_indirect_imports_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_cached_non_intermod_direct_imports_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_cached_direct_imports_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_maybe_stdout_lock_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_importing_module_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_error_file_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_dependency_status_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_dep_file_index_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_module_index_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_target_file_timestamps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_file_timestamps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_module_dependencies_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_reanalysis_passes_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_rebuild_module_deps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_command_line_targets_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

void MR_CALL 
make__make_info__make_info_set_option_args_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 1);
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 20))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 21))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 22))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_30));
  }
}

MR_Word MR_CALL 
make__make_info__make_info_get_cached_computed_module_deps_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 22))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_cached_transitive_foreign_imports_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 21))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_cached_transitive_dependencies_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 20))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_cached_indirect_imports_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 19))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_cached_non_intermod_direct_imports_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 18))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_cached_direct_imports_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 17))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_mi_read_module_maps_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 16))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_maybe_stdout_lock_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 15))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_importing_module_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 14))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_error_file_modules_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 13))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_dependency_status_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 12))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_dep_file_index_map_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 11))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_module_index_map_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 10))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_target_file_timestamps_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 9))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_file_timestamps_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 8))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_module_dependencies_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 7))));

  return X_4;
}

MR_Integer MR_CALL 
make__make_info__make_info_get_reanalysis_passes_1_f_0(
  MR_Word Info_3)
{
  MR_Integer X_4 = ((MR_Integer) ((MR_hl_field(0, Info_3, (MR_Integer) 6))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_rebuild_module_deps_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Unsigned) ((MR_hl_field(0, Info_3, (MR_Integer) 5))) & (MR_Integer) 1);

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_command_line_targets_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 4))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_option_args_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 3))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_keep_going_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Unsigned) ((MR_hl_field(0, Info_3, (MR_Integer) 2))) & (MR_Integer) 1);

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_detected_grade_flags_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__make_info_get_options_variables_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));

  return X_4;
}

MR_Word MR_CALL 
make__make_info__init_make_info_10_f_0(
  MR_Word OptionsVariables_12,
  MR_Word DetectedGradeFlags_13,
  MR_Word KeepGoing_14,
  MR_Word OptionArgs_15,
  MR_Word CmdLineTargets_16,
  MR_Integer AnalysisRepeat_17,
  MR_Word TargetTimestamps_18,
  MR_Word ModuleIndexMap_19,
  MR_Word DepIndexMap_20,
  MR_Word DepStatusMap_21)
{
  MR_Word MakeInfo_22;
  MR_Word ModuleDependencies_23;
  MR_Word FileTimestamps_24;
  MR_Word ErrorFileModules_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), &ModuleDependencies_23);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info_scalar_common_1[0]), &FileTimestamps_24);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &ErrorFileModules_26);
  Var_29 = parse_tree__read_modules__init_have_read_module_maps_0_f_0();
  Var_30 = make__dependencies__init_cached_direct_imports_0_f_0();
  Var_31 = make__dependencies__init_cached_direct_imports_0_f_0();
  Var_32 = make__dependencies__init_cached_indirect_imports_0_f_0();
  Var_33 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
  Var_34 = make__dependencies__init_cached_transitive_foreign_imports_0_f_0();
  Var_35 = make__dependencies__init_cached_computed_module_deps_0_f_0();
  {
    MakeInfo_22 = (MR_Word) MR_new_object(MR_Word, (23 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeInfo_22, 0) = ((MR_Box) (OptionsVariables_12));
    MR_hl_field(0, MakeInfo_22, 1) = ((MR_Box) (DetectedGradeFlags_13));
    MR_hl_field(0, MakeInfo_22, 2) = (MR_Box) ((MR_Unsigned) (KeepGoing_14));
    MR_hl_field(0, MakeInfo_22, 3) = ((MR_Box) (OptionArgs_15));
    MR_hl_field(0, MakeInfo_22, 4) = ((MR_Box) (CmdLineTargets_16));
    MR_hl_field(0, MakeInfo_22, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, MakeInfo_22, 6) = ((MR_Box) (AnalysisRepeat_17));
    MR_hl_field(0, MakeInfo_22, 7) = ((MR_Box) (ModuleDependencies_23));
    MR_hl_field(0, MakeInfo_22, 8) = ((MR_Box) (FileTimestamps_24));
    MR_hl_field(0, MakeInfo_22, 9) = ((MR_Box) (TargetTimestamps_18));
    MR_hl_field(0, MakeInfo_22, 10) = ((MR_Box) (ModuleIndexMap_19));
    MR_hl_field(0, MakeInfo_22, 11) = ((MR_Box) (DepIndexMap_20));
    MR_hl_field(0, MakeInfo_22, 12) = ((MR_Box) (DepStatusMap_21));
    MR_hl_field(0, MakeInfo_22, 13) = ((MR_Box) (ErrorFileModules_26));
    MR_hl_field(0, MakeInfo_22, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, MakeInfo_22, 15) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, MakeInfo_22, 16) = ((MR_Box) (Var_29));
    MR_hl_field(0, MakeInfo_22, 17) = ((MR_Box) (Var_30));
    MR_hl_field(0, MakeInfo_22, 18) = ((MR_Box) (Var_31));
    MR_hl_field(0, MakeInfo_22, 19) = ((MR_Box) (Var_32));
    MR_hl_field(0, MakeInfo_22, 20) = ((MR_Box) (Var_33));
    MR_hl_field(0, MakeInfo_22, 21) = ((MR_Box) (Var_34));
    MR_hl_field(0, MakeInfo_22, 22) = ((MR_Box) (Var_35));
  }
  return MakeInfo_22;
}

static MR_bool MR_CALL 
make__make_info____Unify____c_header_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____c_header_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____c_header_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____c_header_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____compilation_task_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____compilation_task_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____dependency_file_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____dependency_file_index_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____dependency_file_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____dependency_file_index_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____dependency_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____dependency_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____dependency_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____dependency_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____file_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____file_timestamps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____file_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____file_timestamps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____import_or_include_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____import_or_include_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____import_or_include_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____import_or_include_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____linked_target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____linked_target_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____linked_target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____linked_target_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____make_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____make_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____make_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____make_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____make_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____make_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____make_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____make_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____maybe_keep_going_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____maybe_keep_going_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____maybe_keep_going_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____maybe_keep_going_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____maybe_module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____maybe_module_dep_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____maybe_module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____maybe_module_dep_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____maybe_rebuild_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____maybe_rebuild_module_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____maybe_rebuild_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____maybe_rebuild_module_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____misc_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____misc_target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____misc_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____misc_target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____module_compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____module_compilation_task_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____module_compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____module_compilation_task_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____module_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____module_index_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____module_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____module_index_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____module_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____module_target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____module_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____module_target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____target_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____target_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____target_file_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____target_file_timestamps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____target_file_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____target_file_timestamps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__make_info____Unify____top_target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__make_info____Unify____top_target_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__make_info____Compare____top_target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__make_info____Compare____top_target_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__make_info__init(void)
{
}

void mercury__make__make_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_c_header_type_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_compilation_task_type_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_dependency_file_index_map_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_dependency_status_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_file_timestamps_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_import_or_include_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_linked_target_file_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_make_error_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_make_info_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_misc_target_type_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_module_compilation_task_type_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_module_index_map_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_module_target_type_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_target_file_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_target_file_timestamps_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_target_type_0);
	MR_register_type_ctor_info(&make__make_info__make__make_info__type_ctor_info_top_target_file_0);
}

void mercury__make__make_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__make_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.make_info.
