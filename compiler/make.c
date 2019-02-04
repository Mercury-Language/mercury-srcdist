/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module make. */
/* :- implementation. */

/*
INIT mercury__make__init
ENDINIT
*/

#include "make.mih"


#include "backend_libs.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile_main.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct make__classify_target_2_4_p_0_env_0_s {
  MR_Word make__classify_target_2_4_p_0_env_0__Globals_5;
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
  MR_String make__classify_target_2_4_p_0_env_0__Suffix_7;
  MR_Word * make__classify_target_2_4_p_0_env_0__HeadVar__4_4;
  MR_Cont make__classify_target_2_4_p_0_env_0__cont;
  void * make__classify_target_2_4_p_0_env_0__cont_env_ptr;
  MR_bool make__classify_target_2_4_p_0_env_0__succeeded;
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleName_8;
  MR_Word make__classify_target_2_4_p_0_env_0__TargetType_9;
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr_11;
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_10;
  MR_bool make__classify_target_2_4_p_0_env_0__cond_0;
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_47;
  MR_bool make__classify_target_2_4_p_0_env_0__cond_1;
  MR_String make__classify_target_2_4_p_0_env_0__Suffix1_16;
  MR_String make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15;
  MR_String make__classify_target_2_4_p_0_env_0__V_30_30;
  MR_String make__classify_target_2_4_p_0_env_0__V_31_31;
  MR_String make__classify_target_2_4_p_0_env_0__V_60_60;
  MR_String make__classify_target_2_4_p_0_env_0__V_61_61;
};

struct make__classify_target_3_p_0_2_env_0_s {
  MR_Box * make__classify_target_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont make__classify_target_3_p_0_2_env_0__cont;
  void * make__classify_target_3_p_0_2_env_0__cont_env_ptr;
  MR_Word make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1;

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2];

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2];

static const MR_Integer make__make__functor_number_map_c_header_type_0[2];

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0;

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1;

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2;

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_3;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_compilation_task_type_0[4];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4];

static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4];

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0;

static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3];

static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3];

static const MR_DuFunctorDesc make__make__du_functor_desc_dependency_file_index_map_0_0;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1];

static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1];

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3;

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4];

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4];

static const MR_Integer make__make__functor_number_map_dependency_status_0[4];

static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2];

static const MR_ConstString make__make__field_names_last_hash_0_0[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_last_hash_0_0;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1];

static const MR_Integer make__make__functor_number_map_last_hash_0[1];

static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2];

static const MR_ConstString make__make__field_names_linked_target_file_0_0[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_linked_target_file_0_0;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1];

static const MR_Integer make__make__functor_number_map_linked_target_file_0[1];

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_0;

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_1;

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_2;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_make_error_0[3];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3];

static const MR_Integer make__make__functor_number_map_make_error_0[3];

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0;

static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0;

static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20];

static const MR_ConstString make__make__field_names_make_info_0_0[20];

static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1];

static const MR_Integer make__make__functor_number_map_make_info_0[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_0;

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_1;

static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_2;

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_3;

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_4;

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_5;

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_6;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_misc_target_type_0[2];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7];

static const MR_Integer make__make__functor_number_map_misc_target_type_0[7];

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7;

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_module_compilation_task_type_0[8];

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_module_compilation_task_type_0[8];

static const MR_Integer make__make__functor_number_map_module_compilation_task_type_0[8];

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3];

static const MR_ConstString make__make__field_names_module_index_map_0_0[3];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_index_map_0_0;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1];

static const MR_Integer make__make__functor_number_map_module_index_map_0[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_0;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_1;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_2;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_3;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_4;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_5;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_6;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_7;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_8;

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16;

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17;

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18;

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_0[17];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[2];

static const MR_DuPtagLayout make__make__du_ptag_ordered_module_target_type_0[4];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_target_type_0[21];

static const MR_Integer make__make__functor_number_map_module_target_type_0[21];

static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0;

static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1;

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2];

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2];

static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2];

static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2];

static const MR_ConstString make__make__field_names_target_file_0_0[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_target_file_0_0;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1];

static const MR_Integer make__make__functor_number_map_target_file_0[1];

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_0;

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_1;

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_2;

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1];

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1];

static const MR_DuPtagLayout make__make__du_ptag_ordered_target_type_0[3];

static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3];

static const MR_Integer make__make__functor_number_map_target_type_0[3];

static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____last_hash_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____make_error_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____make_info_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____target_file_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2);

static void MR_CALL 
make____Compare____target_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3);

static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__347__1_1_p_0(
  MR_String make__LambdaHeadVar__1_68);

static void MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__321__1_3_p_0(
  MR_String make__LambdaHeadVar__1_50);

static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__311__1_1_p_0(
  MR_String make__LambdaHeadVar__1_46);

static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1);

static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box * make__wrapper_arg_3,
  MR_Box make__wrapper_arg_4,
  MR_Box * make__wrapper_arg_5,
  MR_Box make__wrapper_arg_6,
  MR_Box * make__wrapper_arg_7,
  MR_Box make__wrapper_arg_8,
  MR_Box * make__wrapper_arg_9);

static void MR_CALL 
make__classify_target_2_4_p_0_3(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_2(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_1(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_8(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_5(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_4(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_6(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_7(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_3_p_0_1(
  void * make__env_ptr_arg);

static void MR_CALL 
make__classify_target_3_p_0_2(
  MR_Box make__closure_arg,
  MR_Box * make__wrapper_arg_1,
  MR_Cont make__cont,
  void * make__cont_env_ptr);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_8(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box * make__wrapper_arg_3);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_7(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box * make__wrapper_arg_3,
  MR_Box make__wrapper_arg_4,
  MR_Box * make__wrapper_arg_5,
  MR_Box make__wrapper_arg_6,
  MR_Box * make__wrapper_arg_7);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_6(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2);

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_5(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_4(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_3(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_2(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2);

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_1(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1);


static /* final */ const MR_Box make_scalar_common_1[21][3];

static /* final */ const MR_Box make_scalar_common_2[11][2];

static /* final */ const MR_Box make_scalar_common_3[1][4];

static /* final */ const MR_Box make_scalar_common_4[3][5];

static /* final */ const MR_Box make_scalar_common_5[2][6];

static /* final */ const MR_Box make_scalar_common_6[1][10];

static /* final */ const MR_Box make_scalar_common_7[1][7];

static /* final */ const MR_Box make_scalar_common_8[11][1];

static /* final */ const MR_Box make_scalar_common_10[1][12];


/* sealed */ struct make__vector_common_type_9_0_s {
  const MR_Word make__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct make__vector_common_type_9_0_s make_vector_common_9[12];



static /* final */ const MR_Box make_scalar_common_1[21][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make_scalar_common_1[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make_scalar_common_2[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make_scalar_common_2[4]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0)),
    ((MR_Box) (&make_scalar_common_2[4]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make_scalar_common_4[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&make_scalar_common_6[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&make_scalar_common_5[1])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&make_scalar_common_10[0])),
    ((MR_Box) (make__make_track_flags_files_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make_scalar_common_2[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&make_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_job_ctl_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box make_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box make_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0))
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

static /* final */ const MR_Box make_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0))
  },
};

static /* final */ const MR_Box make_scalar_common_8[11][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make_scalar_common_8[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
};

static /* final */ const MR_Box make_scalar_common_10[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_last_hash_0)),
    ((MR_Box) (&make__make__type_ctor_info_last_hash_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__vector_common_type_9_0_s make_vector_common_9[12] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 5 },
  /* row 3 */   {     (MR_Integer) 7 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 3 },
  /* row 6 */   {     (MR_Integer) 5 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 3 },
  /* row 10 */   {     (MR_Integer) 5 },
  /* row 11 */   {     (MR_Integer) 7 },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

static const MR_Integer make__make__functor_number_map_c_header_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_c_header_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____c_header_type_0_0_10001)),
  ((MR_Box) (make____Compare____c_header_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "c_header_type",
  {     make__make__enum_name_ordered_c_header_type_0 },
  {     make__make__enum_value_ordered_c_header_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__make__functor_number_map_c_header_type_0
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_compilation_task_type_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0 = {
  (MR_String) "process_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_compilation_task_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1 = {
  (MR_String) "target_code_to_object_code",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__make__field_types_compilation_task_type_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2 = {
  (MR_String) "foreign_code_to_object_code",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__make__field_types_compilation_task_type_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_3 = {
  (MR_String) "fact_table_code_to_object_code",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  make__make__field_types_compilation_task_type_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_0
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_1
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_2
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_3
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_compilation_task_type_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_3
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4] = {
  &make__make__du_functor_desc_compilation_task_type_0_3,
  &make__make__du_functor_desc_compilation_task_type_0_2,
  &make__make__du_functor_desc_compilation_task_type_0_0,
  &make__make__du_functor_desc_compilation_task_type_0_1
};

static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_compilation_task_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____compilation_task_type_0_0_10001)),
  ((MR_Box) (make____Compare____compilation_task_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "compilation_task_type",
  {     make__make__du_name_ordered_compilation_task_type_0 },
  {     make__make__du_ptag_ordered_compilation_task_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  make__make__functor_number_map_compilation_task_type_0
};

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_dependency_file_index_map_0_0 = {
  (MR_String) "dependency_file_index_map",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_dependency_file_index_map_0_0,
  make__make__field_names_dependency_file_index_map_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_dependency_file_index_map_0_0
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_dependency_file_index_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____dependency_file_index_map_0_0_10001)),
  ((MR_Box) (make____Compare____dependency_file_index_map_0_0_10001)),
  (MR_String) "make",
  (MR_String) "dependency_file_index_map",
  {     make__make__du_name_ordered_dependency_file_index_map_0 },
  {     make__make__du_ptag_ordered_dependency_file_index_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_dependency_file_index_map_0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_2,
  &make__make__enum_functor_desc_dependency_status_0_3
};

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_3,
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_2
};

static const MR_Integer make__make__functor_number_map_dependency_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_dependency_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____dependency_status_0_0_10001)),
  ((MR_Box) (make____Compare____dependency_status_0_0_10001)),
  (MR_String) "make",
  (MR_String) "dependency_status",
  {     make__make__enum_name_ordered_dependency_status_0 },
  {     make__make__enum_value_ordered_dependency_status_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  make__make__functor_number_map_dependency_status_0
};

static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_file_timestamps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make____Unify____file_timestamps_0_0_10001)),
  ((MR_Box) (make____Compare____file_timestamps_0_0_10001)),
  (MR_String) "make",
  (MR_String) "file_timestamps",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString make__make__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_last_hash_0_0 = {
  (MR_String) "last_hash",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_last_hash_0_0,
  make__make__field_names_last_hash_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_last_hash_0_0
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

static const MR_Integer make__make__functor_number_map_last_hash_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_last_hash_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____last_hash_0_0_10001)),
  ((MR_Box) (make____Compare____last_hash_0_0_10001)),
  (MR_String) "make",
  (MR_String) "last_hash",
  {     make__make__du_name_ordered_last_hash_0 },
  {     make__make__du_ptag_ordered_last_hash_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_last_hash_0
};

static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

static const MR_ConstString make__make__field_names_linked_target_file_0_0[2] = {
  (MR_String) "linked_tf_name",
  (MR_String) "linked_tf_type"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_linked_target_file_0_0 = {
  (MR_String) "linked_target_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_linked_target_file_0_0,
  make__make__field_names_linked_target_file_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_linked_target_file_0_0
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

static const MR_Integer make__make__functor_number_map_linked_target_file_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_linked_target_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____linked_target_file_0_0_10001)),
  ((MR_Box) (make____Compare____linked_target_file_0_0_10001)),
  (MR_String) "make",
  (MR_String) "linked_target_file",
  {     make__make__du_name_ordered_linked_target_file_0 },
  {     make__make__du_ptag_ordered_linked_target_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_linked_target_file_0
};

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_0 = {
  (MR_String) "make_error_target",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_make_error_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_1 = {
  (MR_String) "make_error_dependencies",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__make__field_types_make_error_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_2 = {
  (MR_String) "make_error_other",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__make__field_types_make_error_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1] = {
  &make__make__du_functor_desc_make_error_0_0
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1] = {
  &make__make__du_functor_desc_make_error_0_1
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1] = {
  &make__make__du_functor_desc_make_error_0_2
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_make_error_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    make__make__du_stag_ordered_make_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_error_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_error_0_2
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3] = {
  &make__make__du_functor_desc_make_error_0_1,
  &make__make__du_functor_desc_make_error_0_2,
  &make__make__du_functor_desc_make_error_0_0
};

static const MR_Integer make__make__functor_number_map_make_error_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_make_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____make_error_0_0_10001)),
  ((MR_Box) (make____Compare____make_error_0_0_10001)),
  (MR_String) "make",
  (MR_String) "make_error",
  {     make__make__du_name_ordered_make_error_0 },
  {     make__make__du_ptag_ordered_make_error_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__make__functor_number_map_make_error_0
};

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__util__make__util__type_ctor_info_job_ctl_0
  }
};

static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20] = {
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_index_map_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_dependency_file_index_map_0,
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_rebuild_module_deps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0
};

static const MR_ConstString make__make__field_names_make_info_0_0[20] = {
  (MR_String) "module_dependencies",
  (MR_String) "file_timestamps",
  (MR_String) "search_file_name_cache",
  (MR_String) "detected_grade_flags",
  (MR_String) "option_args",
  (MR_String) "options_variables",
  (MR_String) "module_index_map",
  (MR_String) "dep_file_index_map",
  (MR_String) "dependency_status",
  (MR_String) "cached_direct_imports",
  (MR_String) "cached_non_intermod_direct_imports",
  (MR_String) "cached_transitive_dependencies",
  (MR_String) "cached_foreign_imports",
  (MR_String) "rebuild_module_deps",
  (MR_String) "keep_going",
  (MR_String) "error_file_modules",
  (MR_String) "importing_module",
  (MR_String) "command_line_targets",
  (MR_String) "reanalysis_passes",
  (MR_String) "maybe_stdout_lock"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0 = {
  (MR_String) "make_info",
  (MR_Integer) 20,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_make_info_0_0,
  make__make__field_names_make_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_info_0_0
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

static const MR_Integer make__make__functor_number_map_make_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_make_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____make_info_0_0_10001)),
  ((MR_Box) (make____Compare____make_info_0_0_10001)),
  (MR_String) "make",
  (MR_String) "make_info",
  {     make__make__du_name_ordered_make_info_0 },
  {     make__make__du_ptag_ordered_make_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_make_info_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_0 = {
  (MR_String) "misc_target_clean",
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

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_1 = {
  (MR_String) "misc_target_realclean",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_2 = {
  (MR_String) "misc_target_build_all",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__make__field_types_misc_target_type_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_3 = {
  (MR_String) "misc_target_build_analyses",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_4 = {
  (MR_String) "misc_target_build_library",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_5 = {
  (MR_String) "misc_target_install_library",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_6 = {
  (MR_String) "misc_target_build_xml_docs",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6] = {
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_1,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_6
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1] = {
  &make__make__du_functor_desc_misc_target_type_0_2
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_misc_target_type_0[2] = {
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__make__du_stag_ordered_misc_target_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_misc_target_type_0_1
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7] = {
  &make__make__du_functor_desc_misc_target_type_0_2,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_6,
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_1
};

static const MR_Integer make__make__functor_number_map_misc_target_type_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_misc_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____misc_target_type_0_0_10001)),
  ((MR_Box) (make____Compare____misc_target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "misc_target_type",
  {     make__make__du_name_ordered_misc_target_type_0 },
  {     make__make__du_ptag_ordered_misc_target_type_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  make__make__functor_number_map_misc_target_type_0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_short_interface",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_interface",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_private_interface",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_optimization_interface",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  (MR_Integer) 7
};

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_module_compilation_task_type_0[8] = {
  &make__make__enum_functor_desc_module_compilation_task_type_0_0,
  &make__make__enum_functor_desc_module_compilation_task_type_0_1,
  &make__make__enum_functor_desc_module_compilation_task_type_0_2,
  &make__make__enum_functor_desc_module_compilation_task_type_0_3,
  &make__make__enum_functor_desc_module_compilation_task_type_0_4,
  &make__make__enum_functor_desc_module_compilation_task_type_0_5,
  &make__make__enum_functor_desc_module_compilation_task_type_0_6,
  &make__make__enum_functor_desc_module_compilation_task_type_0_7
};

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_module_compilation_task_type_0[8] = {
  &make__make__enum_functor_desc_module_compilation_task_type_0_6,
  &make__make__enum_functor_desc_module_compilation_task_type_0_0,
  &make__make__enum_functor_desc_module_compilation_task_type_0_5,
  &make__make__enum_functor_desc_module_compilation_task_type_0_2,
  &make__make__enum_functor_desc_module_compilation_task_type_0_4,
  &make__make__enum_functor_desc_module_compilation_task_type_0_3,
  &make__make__enum_functor_desc_module_compilation_task_type_0_1,
  &make__make__enum_functor_desc_module_compilation_task_type_0_7
};

static const MR_Integer make__make__functor_number_map_module_compilation_task_type_0[8] = {
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_compilation_task_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____module_compilation_task_type_0_0_10001)),
  ((MR_Box) (make____Compare____module_compilation_task_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_compilation_task_type",
  {     make__make__enum_name_ordered_module_compilation_task_type_0 },
  {     make__make__enum_value_ordered_module_compilation_task_type_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  make__make__functor_number_map_module_compilation_task_type_0
};

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString make__make__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_index_map_0_0 = {
  (MR_String) "module_index_map",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_module_index_map_0_0,
  make__make__field_names_module_index_map_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_index_map_0_0
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

static const MR_Integer make__make__functor_number_map_module_index_map_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_index_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____module_index_map_0_0_10001)),
  ((MR_Box) (make____Compare____module_index_map_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_index_map",
  {     make__make__du_name_ordered_module_index_map_0 },
  {     make__make__du_ptag_ordered_module_index_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_module_index_map_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_0 = {
  (MR_String) "module_target_source",
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_1 = {
  (MR_String) "module_target_errors",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_2 = {
  (MR_String) "module_target_private_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_3 = {
  (MR_String) "module_target_long_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_4 = {
  (MR_String) "module_target_short_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_5 = {
  (MR_String) "module_target_unqualified_short_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_6 = {
  (MR_String) "module_target_intermodule_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_7 = {
  (MR_String) "module_target_analysis_registry",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_8 = {
  (MR_String) "module_target_track_flags",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_c_header_type_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9 = {
  (MR_String) "module_target_c_header",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 9,
  make__make__field_types_module_target_type_0_9,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10 = {
  (MR_String) "module_target_c_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11 = {
  (MR_String) "module_target_csharp_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12 = {
  (MR_String) "module_target_java_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13 = {
  (MR_String) "module_target_java_class_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14 = {
  (MR_String) "module_target_erlang_header",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15 = {
  (MR_String) "module_target_erlang_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 15,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16 = {
  (MR_String) "module_target_erlang_beam_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17 = {
  (MR_String) "module_target_object_code",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 17,
  make__make__field_types_module_target_type_0_17,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18 = {
  (MR_String) "module_target_foreign_object",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 18,
  make__make__field_types_module_target_type_0_18,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19 = {
  (MR_String) "module_target_fact_table_object",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 19,
  make__make__field_types_module_target_type_0_19,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20 = {
  (MR_String) "module_target_xml_doc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_0[17] = {
  &make__make__du_functor_desc_module_target_type_0_0,
  &make__make__du_functor_desc_module_target_type_0_1,
  &make__make__du_functor_desc_module_target_type_0_2,
  &make__make__du_functor_desc_module_target_type_0_3,
  &make__make__du_functor_desc_module_target_type_0_4,
  &make__make__du_functor_desc_module_target_type_0_5,
  &make__make__du_functor_desc_module_target_type_0_6,
  &make__make__du_functor_desc_module_target_type_0_7,
  &make__make__du_functor_desc_module_target_type_0_8,
  &make__make__du_functor_desc_module_target_type_0_10,
  &make__make__du_functor_desc_module_target_type_0_11,
  &make__make__du_functor_desc_module_target_type_0_12,
  &make__make__du_functor_desc_module_target_type_0_13,
  &make__make__du_functor_desc_module_target_type_0_14,
  &make__make__du_functor_desc_module_target_type_0_15,
  &make__make__du_functor_desc_module_target_type_0_16,
  &make__make__du_functor_desc_module_target_type_0_20
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1] = {
  &make__make__du_functor_desc_module_target_type_0_9
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1] = {
  &make__make__du_functor_desc_module_target_type_0_17
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[2] = {
  &make__make__du_functor_desc_module_target_type_0_18,
  &make__make__du_functor_desc_module_target_type_0_19
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_module_target_type_0[4] = {
  {
    (MR_Integer) 17,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__make__du_stag_ordered_module_target_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_target_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_target_type_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    make__make__du_stag_ordered_module_target_type_0_3
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_target_type_0[21] = {
  &make__make__du_functor_desc_module_target_type_0_7,
  &make__make__du_functor_desc_module_target_type_0_10,
  &make__make__du_functor_desc_module_target_type_0_9,
  &make__make__du_functor_desc_module_target_type_0_11,
  &make__make__du_functor_desc_module_target_type_0_16,
  &make__make__du_functor_desc_module_target_type_0_15,
  &make__make__du_functor_desc_module_target_type_0_14,
  &make__make__du_functor_desc_module_target_type_0_1,
  &make__make__du_functor_desc_module_target_type_0_19,
  &make__make__du_functor_desc_module_target_type_0_18,
  &make__make__du_functor_desc_module_target_type_0_6,
  &make__make__du_functor_desc_module_target_type_0_13,
  &make__make__du_functor_desc_module_target_type_0_12,
  &make__make__du_functor_desc_module_target_type_0_3,
  &make__make__du_functor_desc_module_target_type_0_17,
  &make__make__du_functor_desc_module_target_type_0_2,
  &make__make__du_functor_desc_module_target_type_0_4,
  &make__make__du_functor_desc_module_target_type_0_0,
  &make__make__du_functor_desc_module_target_type_0_8,
  &make__make__du_functor_desc_module_target_type_0_5,
  &make__make__du_functor_desc_module_target_type_0_20
};

static const MR_Integer make__make__functor_number_map_module_target_type_0[21] = {
  (MR_Integer) 17,
  (MR_Integer) 7,
  (MR_Integer) 15,
  (MR_Integer) 13,
  (MR_Integer) 16,
  (MR_Integer) 19,
  (MR_Integer) 10,
  (MR_Integer) 0,
  (MR_Integer) 18,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 14,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 20
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____module_target_type_0_0_10001)),
  ((MR_Box) (make____Compare____module_target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_target_type",
  {     make__make__du_name_ordered_module_target_type_0 },
  {     make__make__du_ptag_ordered_module_target_type_0 },
  (MR_Integer) 21,
  (MR_Integer) 4,
  make__make__functor_number_map_module_target_type_0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_0,
  &make__make__enum_functor_desc_rebuild_module_deps_0_1
};

static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_1,
  &make__make__enum_functor_desc_rebuild_module_deps_0_0
};

static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_rebuild_module_deps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____rebuild_module_deps_0_0_10001)),
  ((MR_Box) (make____Compare____rebuild_module_deps_0_0_10001)),
  (MR_String) "make",
  (MR_String) "rebuild_module_deps",
  {     make__make__enum_name_ordered_rebuild_module_deps_0 },
  {     make__make__enum_value_ordered_rebuild_module_deps_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__make__functor_number_map_rebuild_module_deps_0
};

static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

static const MR_ConstString make__make__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_file_0_0 = {
  (MR_String) "target_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_target_file_0_0,
  make__make__field_names_target_file_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_file_0_0
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

static const MR_Integer make__make__functor_number_map_target_file_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_target_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____target_file_0_0_10001)),
  ((MR_Box) (make____Compare____target_file_0_0_10001)),
  (MR_String) "make",
  (MR_String) "target_file",
  {     make__make__du_name_ordered_target_file_0 },
  {     make__make__du_ptag_ordered_target_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_target_file_0
};

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_0 = {
  (MR_String) "module_target",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_target_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_1 = {
  (MR_String) "linked_target",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__make__field_types_target_type_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_misc_target_type_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_2 = {
  (MR_String) "misc_target",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__make__field_types_target_type_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1] = {
  &make__make__du_functor_desc_target_type_0_0
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1] = {
  &make__make__du_functor_desc_target_type_0_1
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1] = {
  &make__make__du_functor_desc_target_type_0_2
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_target_type_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_type_0_2
  }
};

static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3] = {
  &make__make__du_functor_desc_target_type_0_1,
  &make__make__du_functor_desc_target_type_0_2,
  &make__make__du_functor_desc_target_type_0_0
};

static const MR_Integer make__make__functor_number_map_target_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____target_type_0_0_10001)),
  ((MR_Box) (make____Compare____target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "target_type",
  {     make__make__du_name_ordered_target_type_0 },
  {     make__make__du_ptag_ordered_target_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__make__functor_number_map_target_type_0
};

static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____c_header_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____c_header_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____dependency_file_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____dependency_file_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____dependency_status_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____dependency_status_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____file_timestamps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____file_timestamps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____last_hash_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____last_hash_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____last_hash_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____linked_target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____linked_target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____make_error_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____make_error_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____make_error_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____make_info_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____make_info_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____make_info_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____misc_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____misc_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____module_compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____module_compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____module_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____module_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____module_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____module_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____rebuild_module_deps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____rebuild_module_deps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____target_file_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = make____Unify____target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make____Compare____target_type_0_0_10001(
  MR_Box * make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box make__wrapper_arg_3)
{
  {
    MR_Word make__conv0_HeadVar__1_1;

    {
      make____Compare____target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__347__1_1_p_0(
  MR_String make__LambdaHeadVar__1_68)
{
  {
    MR_bool make__succeeded;

    {
      make__succeeded = mercury__string__suffix_2_p_0(make__LambdaHeadVar__1_68, (MR_String) ".depend");
    }
    make__succeeded = !(make__succeeded);
    return make__succeeded;
  }
}

static void MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__321__1_3_p_0(
  MR_String make__LambdaHeadVar__1_50)
{
  {
    MR_bool make__succeeded;

    {
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(make__LambdaHeadVar__1_50, (MR_String) "Make target must not contain any directory component.");
    }
  }
}

static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__311__1_1_p_0(
  MR_String make__LambdaHeadVar__1_46)
{
  {
    MR_bool make__succeeded;
    MR_Char make__V_47_47;

    {
      make__V_47_47 = mercury__dir__directory_separator_0_f_0();
    }
    {
      make__succeeded = mercury__string__contains_char_2_p_0(make__LambdaHeadVar__1_46, make__V_47_47);
    }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____target_type_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_22 == make__CastY_23);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer make__V_30_30 = (MR_Integer) make__V_27_27;
                  MR_Integer make__V_31_31 = (MR_Integer) make__V_13_13;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_30_30, make__V_31_31);
                  }
                }
                break;
              case (MR_Integer) 2:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    make____Compare____misc_target_type_0_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
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
make____Unify____target_type_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_9 == make__CastY_10);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_4_4;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (make__succeeded)
              {
                make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
                {
                  make__succeeded = make____Unify____module_target_type_0_0(make__V_3_3, make__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_6_6;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (make__succeeded)
              {
                make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
                make__succeeded = (make__V_5_5 == make__V_6_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_8_8;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (make__succeeded)
              {
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
                {
                  make__succeeded = make____Unify____misc_target_type_0_0(make__V_7_7, make__V_8_8);
                }
              }
          }
          break;
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____target_file_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_9 == make__CastY_10);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word make__V_8_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
        make__succeeded = !(make__succeeded);
        if (make__succeeded)
          *make__HeadVar__1_1 = make__V_8_8;
        else
          {
            make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
make____Unify____target_file_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_7 == make__CastY_8);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      {
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

        {
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
        if (make__succeeded)
          {
            make__succeeded = make____Unify____module_target_type_0_0(make__V_4_4, make__V_6_6);
          }
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____rebuild_module_deps_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0(
  MR_Word make__HeadVar__2_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____module_target_type_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_21 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_22 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_21 == make__CastY_22);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer make__V_4_4;
        MR_Integer make__V_5_5;

        {
          make____Index____module_target_type_0_0(make__HeadVar__2_2, &make__V_4_4);
        }
        {
          make____Index____module_target_type_0_0(make__HeadVar__3_3, &make__V_5_5);
        }
        make__succeeded = (make__V_4_4 < make__V_5_5);
        if (make__succeeded)
          *make__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            make__succeeded = (make__V_4_4 > make__V_5_5);
            if (make__succeeded)
              *make__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word make__V_6_6;

                switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(make__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          make__V_6_6 = (MR_Integer) 0;
                          make__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word make__V_8_8;
                      MR_Integer make__V_29_29;
                      MR_Integer make__V_30_30;

                      make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (make__succeeded)
                        {
                          make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
                          make__V_29_29 = (MR_Integer) make__V_7_7;
                          make__V_30_30 = (MR_Integer) make__V_8_8;
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_29_29, make__V_30_30);
                          }
                          make__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word make__V_10_10;
                      MR_Integer make__V_37_37;
                      MR_Integer make__V_38_38;

                      make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (make__succeeded)
                        {
                          make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
                          make__V_37_37 = (MR_Integer) make__V_9_9;
                          make__V_38_38 = (MR_Integer) make__V_10_10;
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_37_37, make__V_38_38);
                          }
                          make__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word make__V_13_13;
                          MR_Word make__V_14_14;
                          MR_Word make__V_15_15;
                          MR_Integer make__V_33_33;
                          MR_Integer make__V_34_34;

                          make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (make__succeeded)
                            {
                              make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
                              make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
                              make__V_33_33 = (MR_Integer) make__V_11_11;
                              make__V_34_34 = (MR_Integer) make__V_13_13;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_15_15, make__V_33_33, make__V_34_34);
                              }
                              make__succeeded = (make__V_15_15 == (MR_Integer) 0);
                              make__succeeded = !(make__succeeded);
                              if (make__succeeded)
                                make__V_6_6 = make__V_15_15;
                              else
                                {
                                  MR_Integer make__V_35_35 = (MR_Integer) make__V_12_12;
                                  MR_Integer make__V_36_36 = (MR_Integer) make__V_14_14;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_35_35, make__V_36_36);
                                  }
                                }
                              make__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String make__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word make__V_18_18;
                          MR_String make__V_19_19;
                          MR_Word make__V_20_20;
                          MR_Integer make__V_31_31;
                          MR_Integer make__V_32_32;

                          make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (make__succeeded)
                            {
                              make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
                              make__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
                              make__V_31_31 = (MR_Integer) make__V_16_16;
                              make__V_32_32 = (MR_Integer) make__V_18_18;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_20_20, make__V_31_31, make__V_32_32);
                              }
                              make__succeeded = (make__V_20_20 == (MR_Integer) 0);
                              make__succeeded = !(make__succeeded);
                              if (make__succeeded)
                                make__V_6_6 = make__V_20_20;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&make__V_6_6, make__V_17_17, make__V_19_19);
                                }
                              make__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (make__succeeded)
                  *make__HeadVar__1_1 = make__V_6_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

void MR_CALL 
make____Index____module_target_type_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Integer * make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;

    switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(make__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *make__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *make__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *make__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            *make__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 4:
            *make__HeadVar__2_2 = (MR_Integer) 4;
            break;
          case (MR_Integer) 5:
            *make__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 6:
            *make__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 7:
            *make__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 8:
            *make__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 9:
            *make__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 10:
            *make__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 11:
            *make__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 12:
            *make__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 13:
            *make__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 14:
            *make__HeadVar__2_2 = (MR_Integer) 15;
            break;
          case (MR_Integer) 15:
            *make__HeadVar__2_2 = (MR_Integer) 16;
            break;
          case (MR_Integer) 16:
            *make__HeadVar__2_2 = (MR_Integer) 20;
            break;
        }
        break;
      case (MR_Integer) 1:
        *make__HeadVar__2_2 = (MR_Integer) 9;
        break;
      case (MR_Integer) 2:
        *make__HeadVar__2_2 = (MR_Integer) 17;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *make__HeadVar__2_2 = (MR_Integer) 18;
            break;
          case (MR_Integer) 1:
            *make__HeadVar__2_2 = (MR_Integer) 19;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
make____Unify____module_target_type_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_49 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_50 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_49 == make__CastY_50);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(make__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_4 == make__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_6 == make__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_8 == make__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_10 == make__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_12 == make__CastX_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_14 == make__CastX_13);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_16 == make__CastX_15);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_18 == make__CastX_17);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer make__CastX_19 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_20 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_20 == make__CastX_19);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer make__CastX_23 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_24 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_24 == make__CastX_23);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer make__CastX_25 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_26 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_26 == make__CastX_25);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer make__CastX_27 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_28 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_28 == make__CastX_27);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer make__CastX_29 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_30 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_30 == make__CastX_29);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer make__CastX_31 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_32 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_32 == make__CastX_31);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer make__CastX_33 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_34 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_34 == make__CastX_33);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Integer make__CastX_35 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_36 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_36 == make__CastX_35);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Integer make__CastX_47 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_48 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_48 == make__CastX_47);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_22_22;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (make__succeeded)
              {
                make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
                make__succeeded = (make__V_21_21 == make__V_22_22);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_38_38;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (make__succeeded)
              {
                make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
                make__succeeded = (make__V_37_37 == make__V_38_38);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word make__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word make__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word make__V_41_41;
                MR_Word make__V_42_42;

                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (make__succeeded)
                  {
                    make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
                    make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
                    make__succeeded = (make__V_39_39 == make__V_41_41);
                    if (make__succeeded)
                      make__succeeded = (make__V_40_40 == make__V_42_42);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
                MR_String make__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word make__V_45_45;
                MR_String make__V_46_46;

                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (make__succeeded)
                  {
                    make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
                    make__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
                    make__succeeded = (make__V_43_43 == make__V_45_45);
                    if (make__succeeded)
                      make__succeeded = (strcmp(make__V_44_44, make__V_46_46) == 0);
                  }
              }
              break;
          }
          break;
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____module_index_map_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_12 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_13 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_12 == make__CastY_13);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box make__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer make__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box make__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer make__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word make__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[12], &make__V_10_10, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_7_7)));
        }
        make__succeeded = (make__V_10_10 == (MR_Integer) 0);
        make__succeeded = !(make__succeeded);
        if (make__succeeded)
          *make__HeadVar__1_1 = make__V_10_10;
        else
          {
            MR_Word make__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[9], &make__V_11_11, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_8_8)));
            }
            make__succeeded = (make__V_11_11 == (MR_Integer) 0);
            make__succeeded = !(make__succeeded);
            if (make__succeeded)
              *make__HeadVar__1_1 = make__V_11_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_6_6, make__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
make____Unify____module_index_map_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_9 == make__CastY_10);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      {
        MR_Word make__TypeCtorInfo_12_12;
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box make__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer make__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box make__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer make__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));

        {
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[12], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
        if (make__succeeded)
          {
            make__TypeCtorInfo_12_12 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            {
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
            if (make__succeeded)
              make__succeeded = (make__V_5_5 == make__V_8_8);
          }
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____module_compilation_task_type_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0(
  MR_Word make__HeadVar__2_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____misc_target_type_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_18 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_19 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_18 == make__CastY_19);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(make__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *make__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *make__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *make__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *make__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *make__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *make__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *make__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *make__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(make__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *make__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *make__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *make__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *make__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *make__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *make__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_21_21, make__V_9_9);
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
make____Unify____misc_target_type_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_17 == make__CastY_18);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(make__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_4 == make__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_6 == make__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_10 == make__CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_12 == make__CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_14 == make__CastX_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
                MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

                make__succeeded = (make__CastY_16 == make__CastX_15);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_8_8;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (make__succeeded)
              {
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
                {
                  make__succeeded = make____Unify____module_target_type_0_0(make__V_7_7, make__V_8_8);
                }
              }
          }
          break;
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____make_info_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_63 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_64 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_63 == make__CastY_64);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word make__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 14)));
        MR_Word make__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 15)));
        MR_Word make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 16)));
        MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer make__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 18)));
        MR_Word make__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 19)));
        MR_Word make__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word make__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word make__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word make__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word make__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word make__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word make__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 13)));
        MR_Word make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 14)));
        MR_Word make__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 15)));
        MR_Word make__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 16)));
        MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 17)));
        MR_Integer make__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 18)));
        MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 19)));
        MR_Word make__V_44_44;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[6], &make__V_44_44, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_24_24)));
        }
        make__succeeded = (make__V_44_44 == (MR_Integer) 0);
        make__succeeded = !(make__succeeded);
        if (make__succeeded)
          *make__HeadVar__1_1 = make__V_44_44;
        else
          {
            MR_Word make__V_45_45;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], &make__V_45_45, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_25_25)));
            }
            make__succeeded = (make__V_45_45 == (MR_Integer) 0);
            make__succeeded = !(make__succeeded);
            if (make__succeeded)
              *make__HeadVar__1_1 = make__V_45_45;
            else
              {
                MR_Word make__V_46_46;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[7], &make__V_46_46, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_26_26)));
                }
                make__succeeded = (make__V_46_46 == (MR_Integer) 0);
                make__succeeded = !(make__succeeded);
                if (make__succeeded)
                  *make__HeadVar__1_1 = make__V_46_46;
                else
                  {
                    MR_Word make__V_47_47;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_47_47, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_27_27)));
                    }
                    make__succeeded = (make__V_47_47 == (MR_Integer) 0);
                    make__succeeded = !(make__succeeded);
                    if (make__succeeded)
                      *make__HeadVar__1_1 = make__V_47_47;
                    else
                      {
                        MR_Word make__V_48_48;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_48_48, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_28_28)));
                        }
                        make__succeeded = (make__V_48_48 == (MR_Integer) 0);
                        make__succeeded = !(make__succeeded);
                        if (make__succeeded)
                          *make__HeadVar__1_1 = make__V_48_48;
                        else
                          {
                            MR_Word make__V_49_49;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[8], &make__V_49_49, ((MR_Box) (make__V_9_9)), ((MR_Box) (make__V_29_29)));
                            }
                            make__succeeded = (make__V_49_49 == (MR_Integer) 0);
                            make__succeeded = !(make__succeeded);
                            if (make__succeeded)
                              *make__HeadVar__1_1 = make__V_49_49;
                            else
                              {
                                MR_Word make__V_50_50;

                                {
                                  make____Compare____module_index_map_0_0(&make__V_50_50, make__V_10_10, make__V_30_30);
                                }
                                make__succeeded = (make__V_50_50 == (MR_Integer) 0);
                                make__succeeded = !(make__succeeded);
                                if (make__succeeded)
                                  *make__HeadVar__1_1 = make__V_50_50;
                                else
                                  {
                                    MR_Word make__V_51_51;

                                    {
                                      make____Compare____dependency_file_index_map_0_0(&make__V_51_51, make__V_11_11, make__V_31_31);
                                    }
                                    make__succeeded = (make__V_51_51 == (MR_Integer) 0);
                                    make__succeeded = !(make__succeeded);
                                    if (make__succeeded)
                                      *make__HeadVar__1_1 = make__V_51_51;
                                    else
                                      {
                                        MR_Word make__V_52_52;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[9], &make__V_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                        }
                                        make__succeeded = (make__V_52_52 == (MR_Integer) 0);
                                        make__succeeded = !(make__succeeded);
                                        if (make__succeeded)
                                          *make__HeadVar__1_1 = make__V_52_52;
                                        else
                                          {
                                            MR_Word make__V_53_53;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[10], &make__V_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                            }
                                            make__succeeded = (make__V_53_53 == (MR_Integer) 0);
                                            make__succeeded = !(make__succeeded);
                                            if (make__succeeded)
                                              *make__HeadVar__1_1 = make__V_53_53;
                                            else
                                              {
                                                MR_Word make__V_54_54;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[10], &make__V_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                }
                                                make__succeeded = (make__V_54_54 == (MR_Integer) 0);
                                                make__succeeded = !(make__succeeded);
                                                if (make__succeeded)
                                                  *make__HeadVar__1_1 = make__V_54_54;
                                                else
                                                  {
                                                    MR_Word make__V_55_55;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[11], &make__V_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                    }
                                                    make__succeeded = (make__V_55_55 == (MR_Integer) 0);
                                                    make__succeeded = !(make__succeeded);
                                                    if (make__succeeded)
                                                      *make__HeadVar__1_1 = make__V_55_55;
                                                    else
                                                      {
                                                        MR_Word make__V_56_56;

                                                        {
                                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[10], &make__V_56_56, ((MR_Box) (make__V_16_16)), ((MR_Box) (make__V_36_36)));
                                                        }
                                                        make__succeeded = (make__V_56_56 == (MR_Integer) 0);
                                                        make__succeeded = !(make__succeeded);
                                                        if (make__succeeded)
                                                          *make__HeadVar__1_1 = make__V_56_56;
                                                        else
                                                          {
                                                            MR_Word make__V_57_57;
                                                            MR_Integer make__V_85_85 = (MR_Integer) make__V_17_17;
                                                            MR_Integer make__V_86_86 = (MR_Integer) make__V_37_37;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_57_57, make__V_85_85, make__V_86_86);
                                                            }
                                                            make__succeeded = (make__V_57_57 == (MR_Integer) 0);
                                                            make__succeeded = !(make__succeeded);
                                                            if (make__succeeded)
                                                              *make__HeadVar__1_1 = make__V_57_57;
                                                            else
                                                              {
                                                                MR_Word make__V_58_58;
                                                                MR_Integer make__V_87_87 = (MR_Integer) make__V_18_18;
                                                                MR_Integer make__V_88_88 = (MR_Integer) make__V_38_38;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_58_58, make__V_87_87, make__V_88_88);
                                                                }
                                                                make__succeeded = (make__V_58_58 == (MR_Integer) 0);
                                                                make__succeeded = !(make__succeeded);
                                                                if (make__succeeded)
                                                                  *make__HeadVar__1_1 = make__V_58_58;
                                                                else
                                                                  {
                                                                    MR_Word make__V_59_59;

                                                                    {
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[5], &make__V_59_59, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                    }
                                                                    make__succeeded = (make__V_59_59 == (MR_Integer) 0);
                                                                    make__succeeded = !(make__succeeded);
                                                                    if (make__succeeded)
                                                                      *make__HeadVar__1_1 = make__V_59_59;
                                                                    else
                                                                      {
                                                                        MR_Word make__V_60_60;

                                                                        {
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[6], &make__V_60_60, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                        }
                                                                        make__succeeded = (make__V_60_60 == (MR_Integer) 0);
                                                                        make__succeeded = !(make__succeeded);
                                                                        if (make__succeeded)
                                                                          *make__HeadVar__1_1 = make__V_60_60;
                                                                        else
                                                                          {
                                                                            MR_Word make__V_61_61;

                                                                            {
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[7], &make__V_61_61, ((MR_Box) (make__V_21_21)), ((MR_Box) (make__V_41_41)));
                                                                            }
                                                                            make__succeeded = (make__V_61_61 == (MR_Integer) 0);
                                                                            make__succeeded = !(make__succeeded);
                                                                            if (make__succeeded)
                                                                              *make__HeadVar__1_1 = make__V_61_61;
                                                                            else
                                                                              {
                                                                                MR_Word make__V_62_62;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_62_62, make__V_22_22, make__V_42_42);
                                                                                }
                                                                                make__succeeded = (make__V_62_62 == (MR_Integer) 0);
                                                                                make__succeeded = !(make__succeeded);
                                                                                if (make__succeeded)
                                                                                  *make__HeadVar__1_1 = make__V_62_62;
                                                                                else
                                                                                  {
                                                                                    {
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[8], make__HeadVar__1_1, ((MR_Box) (make__V_23_23)), ((MR_Box) (make__V_43_43)));
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
make____Unify____make_info_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_43 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_44 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_43 == make__CastY_44);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      {
        MR_Word make__TypeInfo_46_46;
        MR_Word make__TypeInfo_47_47;
        MR_Word make__TypeInfo_48_48;
        MR_Word make__TypeInfo_49_49;
        MR_Word make__TypeInfo_50_50;
        MR_Word make__TypeInfo_51_51;
        MR_Word make__TypeInfo_52_52;
        MR_Word make__TypeInfo_53_53;
        MR_Word make__TypeInfo_54_54;
        MR_Word make__TypeInfo_55_55;
        MR_Word make__TypeInfo_56_56;
        MR_Word make__TypeInfo_57_57;
        MR_Word make__TypeInfo_58_58;
        MR_Word make__TypeInfo_59_59;
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word make__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 13)));
        MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 14)));
        MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 15)));
        MR_Word make__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 16)));
        MR_Word make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 17)));
        MR_Integer make__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 18)));
        MR_Word make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 19)));
        MR_Word make__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word make__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word make__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word make__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word make__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word make__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 14)));
        MR_Word make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 15)));
        MR_Word make__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 16)));
        MR_Word make__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer make__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 18)));
        MR_Word make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 19)));

        {
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[6], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_23_23)));
        }
        if (make__succeeded)
          {
            make__TypeInfo_46_46 = (MR_Word) &make_scalar_common_1[5];
            {
              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_46_46, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_24_24)));
            }
            if (make__succeeded)
              {
                make__TypeInfo_47_47 = (MR_Word) &make_scalar_common_1[7];
                {
                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_47_47, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_25_25)));
                }
                if (make__succeeded)
                  {
                    make__TypeInfo_48_48 = (MR_Word) &make_scalar_common_2[3];
                    {
                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_48_48, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_26_26)));
                    }
                    if (make__succeeded)
                      {
                        make__TypeInfo_49_49 = (MR_Word) &make_scalar_common_2[3];
                        {
                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_49_49, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_27_27)));
                        }
                        if (make__succeeded)
                          {
                            make__TypeInfo_50_50 = (MR_Word) &make_scalar_common_1[8];
                            {
                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_50_50, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_28_28)));
                            }
                            if (make__succeeded)
                              {
                                {
                                  make__succeeded = make____Unify____module_index_map_0_0(make__V_9_9, make__V_29_29);
                                }
                                if (make__succeeded)
                                  {
                                    {
                                      make__succeeded = make____Unify____dependency_file_index_map_0_0(make__V_10_10, make__V_30_30);
                                    }
                                    if (make__succeeded)
                                      {
                                        make__TypeInfo_51_51 = (MR_Word) &make_scalar_common_1[9];
                                        {
                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_51_51, ((MR_Box) (make__V_11_11)), ((MR_Box) (make__V_31_31)));
                                        }
                                        if (make__succeeded)
                                          {
                                            make__TypeInfo_52_52 = (MR_Word) &make_scalar_common_1[10];
                                            {
                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                            }
                                            if (make__succeeded)
                                              {
                                                make__TypeInfo_53_53 = (MR_Word) &make_scalar_common_1[10];
                                                {
                                                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                                }
                                                if (make__succeeded)
                                                  {
                                                    make__TypeInfo_54_54 = (MR_Word) &make_scalar_common_1[11];
                                                    {
                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                    }
                                                    if (make__succeeded)
                                                      {
                                                        make__TypeInfo_55_55 = (MR_Word) &make_scalar_common_1[10];
                                                        {
                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                        }
                                                        if (make__succeeded)
                                                          {
                                                            make__succeeded = (make__V_16_16 == make__V_36_36);
                                                            if (make__succeeded)
                                                              {
                                                                make__succeeded = (make__V_17_17 == make__V_37_37);
                                                                if (make__succeeded)
                                                                  {
                                                                    make__TypeInfo_56_56 = (MR_Word) &make_scalar_common_2[5];
                                                                    {
                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_56_56, ((MR_Box) (make__V_18_18)), ((MR_Box) (make__V_38_38)));
                                                                    }
                                                                    if (make__succeeded)
                                                                      {
                                                                        make__TypeInfo_57_57 = (MR_Word) &make_scalar_common_2[6];
                                                                        {
                                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_57_57, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                        }
                                                                        if (make__succeeded)
                                                                          {
                                                                            make__TypeInfo_58_58 = (MR_Word) &make_scalar_common_2[7];
                                                                            {
                                                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_58_58, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                            }
                                                                            if (make__succeeded)
                                                                              {
                                                                                make__succeeded = (make__V_21_21 == make__V_41_41);
                                                                                if (make__succeeded)
                                                                                  {
                                                                                    make__TypeInfo_59_59 = (MR_Word) &make_scalar_common_2[8];
                                                                                    {
                                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_59_59, ((MR_Box) (make__V_22_22)), ((MR_Box) (make__V_42_42)));
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
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____make_error_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_22 == make__CastY_23);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word make__V_29_29 = (MR_Word) MR_body(((MR_Word) make__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word make__V_5_5 = (MR_Word) MR_body(((MR_Word) make__HeadVar__3_3), (MR_Integer) 0);

                  {
                    make____Compare____target_file_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdbcomp__sym_name____Compare____sym_name_0_0(make__HeadVar__1_1, make__V_27_27, make__V_13_13);
                  }
                }
                break;
              case (MR_Integer) 2:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String make__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String make__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
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
make____Unify____make_error_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_9 == make__CastY_10);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word make__V_3_3 = (MR_Word) MR_body(((MR_Word) make__HeadVar__1_1), (MR_Integer) 0);
            MR_Word make__V_4_4;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (make__succeeded)
              {
                make__V_4_4 = (MR_Word) MR_body(((MR_Word) make__HeadVar__2_2), (MR_Integer) 0);
                {
                  make__succeeded = make____Unify____target_file_0_0(make__V_3_3, make__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_6_6;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (make__succeeded)
              {
                make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
                {
                  make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_5_5, make__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_String make__V_8_8;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (make__succeeded)
              {
                make__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
                make__succeeded = (strcmp(make__V_7_7, make__V_8_8) == 0);
              }
          }
          break;
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____linked_target_file_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_9 == make__CastY_10);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word make__V_8_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
        make__succeeded = !(make__succeeded);
        if (make__succeeded)
          *make__HeadVar__1_1 = make__V_8_8;
        else
          {
            MR_Integer make__V_13_13 = (MR_Integer) make__V_5_5;
            MR_Integer make__V_14_14 = (MR_Integer) make__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_13_13, make__V_14_14);
            }
          }
      }
  }
}

MR_bool MR_CALL 
make____Unify____linked_target_file_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_7 == make__CastY_8);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      {
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

        {
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
        if (make__succeeded)
          make__succeeded = (make__V_4_4 == make__V_6_6);
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____last_hash_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_9 == make__CastY_10);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_String make__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
        MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word make__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_8_8, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_6_6)));
        }
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
        make__succeeded = !(make__succeeded);
        if (make__succeeded)
          *make__HeadVar__1_1 = make__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
make____Unify____last_hash_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_7 == make__CastY_8);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      {
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
        MR_String make__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_String make__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

        {
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_5_5)));
        }
        if (make__succeeded)
          make__succeeded = (strcmp(make__V_4_4, make__V_6_6) == 0);
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____file_timestamps_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Word make__Cast_HeadVar1_4 = make__HeadVar__2_2;
    MR_Word make__Cast_HeadVar2_5 = make__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], make__HeadVar__1_1, ((MR_Box) (make__Cast_HeadVar1_4)), ((MR_Box) (make__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
make____Unify____file_timestamps_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Word make__Cast_HeadVar1_3 = make__HeadVar__1_1;
    MR_Word make__Cast_HeadVar2_4 = make__HeadVar__2_2;

    {
      make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[5], ((MR_Box) (make__Cast_HeadVar1_3)), ((MR_Box) (make__Cast_HeadVar2_4)));
    }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____dependency_status_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make____Unify____dependency_status_0_0(
  MR_Word make__HeadVar__2_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____dependency_file_index_map_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_12 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_13 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_12 == make__CastY_13);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box make__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer make__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box make__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer make__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word make__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[4], &make__V_10_10, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_7_7)));
        }
        make__succeeded = (make__V_10_10 == (MR_Integer) 0);
        make__succeeded = !(make__succeeded);
        if (make__succeeded)
          *make__HeadVar__1_1 = make__V_10_10;
        else
          {
            MR_Word make__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[2], &make__V_11_11, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_8_8)));
            }
            make__succeeded = (make__V_11_11 == (MR_Integer) 0);
            make__succeeded = !(make__succeeded);
            if (make__succeeded)
              *make__HeadVar__1_1 = make__V_11_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_6_6, make__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_9 == make__CastY_10);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      {
        MR_Word make__TypeCtorInfo_12_12;
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box make__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer make__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box make__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer make__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));

        {
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[4], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
        if (make__succeeded)
          {
            make__TypeCtorInfo_12_12 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
            {
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
            if (make__succeeded)
              make__succeeded = (make__V_5_5 == make__V_8_8);
          }
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____compilation_task_type_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_54 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__CastY_55 = (MR_Integer) make__HeadVar__3_3;

    make__succeeded = (make__CastX_54 == make__CastY_55);
    if (make__succeeded)
      *make__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word make__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer make__V_74_74 = (MR_Integer) make__V_66_66;
                  MR_Integer make__V_75_75 = (MR_Integer) make__V_5_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_74_74, make__V_75_75);
                  }
                }
                break;
              case (MR_Integer) 1:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer make__V_76_76 = (MR_Integer) make__V_67_67;
                  MR_Integer make__V_77_77 = (MR_Integer) make__V_17_17;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_76_76, make__V_77_77);
                  }
                }
                break;
              case (MR_Integer) 2:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word make__V_34_34;
                  MR_Integer make__V_70_70 = (MR_Integer) make__V_65_65;
                  MR_Integer make__V_71_71 = (MR_Integer) make__V_32_32;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_34_34, make__V_70_70, make__V_71_71);
                  }
                  make__succeeded = (make__V_34_34 == (MR_Integer) 0);
                  make__succeeded = !(make__succeeded);
                  if (make__succeeded)
                    *make__HeadVar__1_1 = make__V_34_34;
                  else
                    {
                      MR_Integer make__V_72_72 = (MR_Integer) make__V_64_64;
                      MR_Integer make__V_73_73 = (MR_Integer) make__V_33_33;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_72_72, make__V_73_73);
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                *make__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String make__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word make__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *make__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String make__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word make__V_53_53;
                  MR_Integer make__V_68_68 = (MR_Integer) make__V_63_63;
                  MR_Integer make__V_69_69 = (MR_Integer) make__V_51_51;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_53_53, make__V_68_68, make__V_69_69);
                  }
                  make__succeeded = (make__V_53_53 == (MR_Integer) 0);
                  make__succeeded = !(make__succeeded);
                  if (make__succeeded)
                    *make__HeadVar__1_1 = make__V_53_53;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_62_62, make__V_52_52);
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
make____Unify____compilation_task_type_0_0(
  MR_Word make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
    MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

    make__succeeded = (make__CastX_15 == make__CastY_16);
    if (make__succeeded)
      make__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_4_4;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (make__succeeded)
              {
                make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
                make__succeeded = (make__V_3_3 == make__V_4_4);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_6_6;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (make__succeeded)
              {
                make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
                make__succeeded = (make__V_5_5 == make__V_6_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word make__V_9_9;
            MR_Word make__V_10_10;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (make__succeeded)
              {
                make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
                make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 1)));
                make__succeeded = (make__V_7_7 == make__V_9_9);
                if (make__succeeded)
                  make__succeeded = (make__V_8_8 == make__V_10_10);
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)));
            MR_String make__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word make__V_13_13;
            MR_String make__V_14_14;

            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (make__succeeded)
              {
                make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)));
                make__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
                make__succeeded = (make__V_11_11 == make__V_13_13);
                if (make__succeeded)
                  make__succeeded = (strcmp(make__V_12_12, make__V_14_14) == 0);
              }
          }
          break;
      }
    return make__succeeded;
  }
}

void MR_CALL 
make____Compare____c_header_type_0_0(
  MR_Word * make__HeadVar__1_1,
  MR_Word make__HeadVar__2_2,
  MR_Word make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
make____Unify____c_header_type_0_0(
  MR_Word make__HeadVar__2_1,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

    return make__succeeded;
  }
}

void MR_CALL 
make__write_hash_file_5_p_0(
  MR_String make__FileName_6,
  MR_String make__Hash_7,
  MR_Word * make__Success_8)
{
  {
    MR_bool make__succeeded;
    MR_Word make__OpenResult_10;

    {
      mercury__io__open_output_4_p_0(make__FileName_6, &make__OpenResult_10);
    }
    if (((MR_tag((MR_Word) make__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OpenResult_10, (MR_Integer) 0)));
        MR_String make__V_21_21;

        {
          mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
        }
        {
          mercury__io__write_string_3_p_0(make__FileName_6);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
        {
          make__V_21_21 = mercury__io__error_message_1_f_0(make__Error_12);
        }
        {
          mercury__io__write_string_3_p_0(make__V_21_21);
        }
        {
          mercury__io__nl_2_p_0();
        }
        *make__Success_8 = (MR_Integer) 0;
      }
    else
      {
        MR_Word make__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_10, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(make__Stream_11, make__Hash_7);
        }
        {
          mercury__io__close_output_3_p_0(make__Stream_11);
        }
        *make__Success_8 = (MR_Integer) 1;
      }
  }
}

void MR_CALL 
make__compare_hash_file_6_p_0(
  MR_Word make__Globals_7,
  MR_String make__FileName_8,
  MR_String make__Hash_9,
  MR_Word * make__Same_10)
{
  {
    MR_bool make__succeeded;
    MR_Word make__OpenResult_12;
    MR_Word make__Verbose_18;

    {
      mercury__io__open_input_4_p_0(make__FileName_8, &make__OpenResult_12);
    }
    if (((MR_tag((MR_Word) make__OpenResult_12)) == (MR_mktag((MR_Integer) 1))))
      *make__Same_10 = (MR_Integer) 0;
    else
      {
        MR_Word make__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_12, (MR_Integer) 0)));
        MR_Word make__ReadResult_14;

        {
          mercury__io__read_line_as_string_4_p_0(make__Stream_13, &make__ReadResult_14);
        }
        switch (MR_tag((MR_Word) make__ReadResult_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *make__Same_10 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            {
              MR_String make__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), make__ReadResult_14, (MR_Integer) 0)));

              make__succeeded = (strcmp(make__Line_15, make__Hash_9) == 0);
              if (make__succeeded)
                *make__Same_10 = (MR_Integer) 1;
              else
                *make__Same_10 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 2:
            *make__Same_10 = (MR_Integer) 0;
            break;
        }
        {
          mercury__io__close_input_3_p_0(make__Stream_13);
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(make__Globals_7, (MR_Integer) 56, &make__Verbose_18);
    }
    switch (make__Verbose_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
          {
            mercury__io__write_string_3_p_0(make__FileName_8);
          }
          switch (*make__Same_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) " will be UPDATED.\n");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) " does not need updating.\n");
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
make__is_consequential_option_2_p_0(
  MR_Word make__InconsequentialOptions_3,
  MR_Word make__HeadVar__2_2)
{
  {
    MR_bool make__succeeded;
    MR_Word make__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

    {
      make__succeeded = mercury__set__contains_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, make__InconsequentialOptions_3, ((MR_Box) (make__Option_4)));
    }
    make__succeeded = !(make__succeeded);
    return make__succeeded;
  }
}

static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1)
{
  {
    MR_bool make__succeeded;
    MR_Box make__closure = make__closure_arg;

    {
      make__succeeded = make__is_consequential_option_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_Word) make__wrapper_arg_1));
    }
    return make__succeeded;
  }
}

void MR_CALL 
make__option_table_hash_4_p_0(
  MR_Word make__AllOptionArgs_5,
  MR_String * make__Hash_6)
{
  {
    MR_bool make__succeeded;
    MR_Word make__OptionsErrors_10;
    MR_Word make__AllOptionArgsGlobals_11;
    MR_Word make__OptionTable_14;
    MR_Word make__OptionList_15;
    MR_Word make__InconsequentialOptions_16;
    MR_Word make__ConsequentialOptionList_17;
    MR_Word make__V_27_27;
    MR_String make__V_28_28;
    MR_Word make__V_8_8;
    MR_Word make__V_9_9;

    {
      libs__handle_options__handle_given_options_7_p_0(make__AllOptionArgs_5, &make__V_8_8, &make__V_9_9, &make__OptionsErrors_10, &make__AllOptionArgsGlobals_11);
    }
    if ((make__OptionsErrors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "make.m", (MR_String) "predicate \140make.option_table_hash\'/4: handle_options returned with errors");
          return;
        }
      }
    {
      libs__globals__get_options_2_p_0(make__AllOptionArgsGlobals_11, &make__OptionTable_14);
    }
    {
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, make__OptionTable_14, &make__OptionList_15);
    }
    {
      libs__options__inconsequential_options_1_p_0(&make__InconsequentialOptions_16);
    }
    {
      make__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__V_27_27, 0) = ((MR_Box) (&make_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), make__V_27_27, 1) = ((MR_Box) (make__option_table_hash_4_p_0_1));
      MR_hl_field(MR_mktag(0), make__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__V_27_27, 3) = ((MR_Box) (make__InconsequentialOptions_16));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &make_scalar_common_1[3], make__V_27_27, make__OptionList_15, &make__ConsequentialOptionList_17);
    }
    {
      make__V_28_28 = mercury__string__string_1_f_0((MR_Word) &make_scalar_common_2[1], ((MR_Box) (make__ConsequentialOptionList_17)));
    }
    {
      *make__Hash_6 = libs__md4__md4sum_1_f_0(make__V_28_28);
    }
  }
}

void MR_CALL 
make__make_track_flags_files_2_9_p_0(
  MR_Word make__Globals_10,
  MR_Word make__ModuleName_11,
  MR_Word * make__Success_12,
  MR_Word make__STATE_VARIABLE_LastHash_0_25,
  MR_Word * make__STATE_VARIABLE_LastHash_26,
  MR_Word make__STATE_VARIABLE_Info_0_27,
  MR_Word * make__STATE_VARIABLE_Info_28)
{
  {
    MR_bool make__succeeded;
    MR_Word make__OptionsResult_16;
    MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
    MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
    MR_Word make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
    MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
    MR_Word make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
    MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
    MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
    MR_Word make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
    MR_Word make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
    MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
    MR_Word make__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
    MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
    MR_Word make__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
    MR_Word make__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
    MR_Word make__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
    MR_Word make__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
    MR_Word make__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
    MR_Word make__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
    MR_Integer make__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
    MR_Word make__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));

    {
      make__options_file__lookup_mmc_module_options_6_p_0(make__Globals_10, make__V_31_31, make__ModuleName_11, &make__OptionsResult_16);
    }
    if ((make__OptionsResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *make__Success_12 = (MR_Integer) 0;
        *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
      }
    else
      {
        MR_Word make__TypeCtorInfo_98_98 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word make__ModuleOptionArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OptionsResult_16, (MR_Integer) 0)));
        MR_Word make__DetectedGradeFlags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
        MR_Word make__OptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
        MR_Word make__AllOptionArgs_20;
        MR_String make__Hash_22;
        MR_String make__HashFileName_23;
        MR_Word make__Same_24;
        MR_Word make__V_33_33;
        MR_Word make__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
        MR_Word make__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
        MR_Word make__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
        MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
        MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
        MR_Word make__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
        MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
        MR_Word make__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
        MR_Word make__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
        MR_Word make__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
        MR_Word make__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
        MR_Word make__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
        MR_Word make__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
        MR_Word make__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
        MR_Word make__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
        MR_Word make__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
        MR_Integer make__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
        MR_Word make__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
        MR_String make__HashPrime_21;
        MR_Word make__V_99_99;

        {
          make__V_33_33 = mercury__list__f_43_43_2_f_0(make__TypeCtorInfo_98_98, make__ModuleOptionArgs_17, make__OptionArgs_19);
        }
        {
          make__AllOptionArgs_20 = mercury__list__f_43_43_2_f_0(make__TypeCtorInfo_98_98, make__DetectedGradeFlags_18, make__V_33_33);
        }
        make__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 0)));
        make__HashPrime_21 = ((MR_String) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 1)));
        {
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__AllOptionArgs_20)), ((MR_Box) (make__V_99_99)));
        }
        if (make__succeeded)
          {
            make__Hash_22 = make__HashPrime_21;
            *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
          }
        else
          {
            {
              make__option_table_hash_4_p_0(make__AllOptionArgs_20, &make__Hash_22);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *make__STATE_VARIABLE_LastHash_26 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__AllOptionArgs_20));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__Hash_22));
            }
          }
        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__Globals_10, make__ModuleName_11, (MR_String) ".track_flags", (MR_Integer) 0, &make__HashFileName_23);
        }
        {
          make__compare_hash_file_6_p_0(make__Globals_10, make__HashFileName_23, make__Hash_22, &make__Same_24);
        }
        switch (make__Same_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              make__write_hash_file_5_p_0(make__HashFileName_23, make__Hash_22, make__Success_12);
            }
            break;
          case (MR_Integer) 1:
            *make__Success_12 = (MR_Integer) 1;
            break;
        }
      }
    *make__STATE_VARIABLE_Info_28 = make__STATE_VARIABLE_Info_0_27;
  }
}

static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box * make__wrapper_arg_3,
  MR_Box make__wrapper_arg_4,
  MR_Box * make__wrapper_arg_5,
  MR_Box make__wrapper_arg_6,
  MR_Box * make__wrapper_arg_7,
  MR_Box make__wrapper_arg_8,
  MR_Box * make__wrapper_arg_9)
{
  {
    MR_Box make__closure = make__closure_arg;
    MR_Word make__conv2_Success_12;
    MR_Word make__conv1_STATE_VARIABLE_LastHash_26;
    MR_Word make__conv0_STATE_VARIABLE_Info_28;

    {
      make__make_track_flags_files_2_9_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv2_Success_12, ((MR_Word) make__wrapper_arg_4), &make__conv1_STATE_VARIABLE_LastHash_26, ((MR_Word) make__wrapper_arg_6), &make__conv0_STATE_VARIABLE_Info_28);
    }
    *make__wrapper_arg_3 = ((MR_Box) (make__conv2_Success_12));
    *make__wrapper_arg_5 = ((MR_Box) (make__conv1_STATE_VARIABLE_LastHash_26));
    *make__wrapper_arg_7 = ((MR_Box) (make__conv0_STATE_VARIABLE_Info_28));
  }
}

void MR_CALL 
make__make_track_flags_files_7_p_0(
  MR_Word make__Globals_8,
  MR_Word make__ModuleName_9,
  MR_Word * make__Success_10,
  MR_Word make__STATE_VARIABLE_Info_0_18,
  MR_Word * make__STATE_VARIABLE_Info_19)
{
  {
    MR_bool make__succeeded;
    MR_Word make__Success0_13;
    MR_Word make__Modules_14;
    MR_Word make__STATE_VARIABLE_Info_22_22;

    {
      make__dependencies__find_reachable_local_modules_8_p_0(make__Globals_8, make__ModuleName_9, &make__Success0_13, &make__Modules_14, make__STATE_VARIABLE_Info_0_18, &make__STATE_VARIABLE_Info_22_22);
    }
    switch (make__Success0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__Success_10 = (MR_Integer) 0;
          *make__STATE_VARIABLE_Info_19 = make__STATE_VARIABLE_Info_22_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          MR_Word make__V_27_27;
          MR_Word make___LastHash_17;
          MR_Box make__conv5__LastHash_17;
          MR_Box make__conv4_STATE_VARIABLE_Info_19;
          MR_Box make__conv3_STATE_VARIABLE_IO_21;

          {
            make__V_27_27 = mercury__set__to_sorted_list_1_f_0(make__TypeCtorInfo_39_39, make__Modules_14);
          }
          {
            make__util__foldl3_maybe_stop_at_error_11_p_0(make__TypeCtorInfo_39_39, (MR_Word) &make__make__type_ctor_info_last_hash_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Integer) 0, (MR_Word) &make_scalar_common_1[20], make__Globals_8, make__V_27_27, make__Success_10, ((MR_Box) (&make_scalar_common_2[10])), &make__conv5__LastHash_17, ((MR_Box) (make__STATE_VARIABLE_Info_22_22)), &make__conv4_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &make__conv3_STATE_VARIABLE_IO_21);
          }
          make___LastHash_17 = ((MR_Word) make__conv5__LastHash_17);
          *make__STATE_VARIABLE_Info_19 = ((MR_Word) make__conv4_STATE_VARIABLE_Info_19);
        }
        break;
    }
  }
}

MR_Word MR_CALL 
make__get_executable_type_1_f_0(
  MR_Word make__Globals_3)
{
  {
    MR_bool make__succeeded;
    MR_Word make__ExecutableType_4;
    MR_Word make__CompilationTarget_5;

    {
      libs__globals__get_target_2_p_0(make__Globals_3, &make__CompilationTarget_5);
    }
    make__ExecutableType_4 = ((&make_vector_common_9[8 + make__CompilationTarget_5]))->make__vector_common_type_9_0__vct_9_f_0;
    return make__ExecutableType_4;
  }
}

MR_bool MR_CALL 
make__search_backwards_for_dot_3_p_0(
  MR_String make__String_4,
  MR_Integer make__Index_5,
  MR_Integer * make__DotIndex_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool make__succeeded;
        MR_Integer make__CharIndex_7;
        MR_Char make__Char_8;

        {
          make__succeeded = mercury__string__unsafe_prev_index_4_p_0(make__String_4, make__Index_5, &make__CharIndex_7, &make__Char_8);
        }
        if (make__succeeded)
          {
            make__succeeded = (make__Char_8 == (MR_Char) 46);
            if (make__succeeded)
              {
                *make__DotIndex_6 = make__CharIndex_7;
                make__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer make__Index__tmp_copy_5 = make__CharIndex_7;

                  make__Index_5 = make__Index__tmp_copy_5;
                }
                continue;
              }
          }
        return make__succeeded;
      }
      break;
    }
}

static void MR_CALL 
make__classify_target_2_4_p_0_3(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".cs") == 0);
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
      {
        make__classify_target_2_4_p_0_2(make__env_ptr);
      }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_2(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
    {
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_10));
      }
      {
        make__classify_target_2_4_p_0_1(make__env_ptr);
      }
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_1(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    {
      parse_tree__file_names__file_name_to_module_name_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((make__env_ptr)->make__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9));
    }
    {
      ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont)((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_8(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    {
      MR_Word make__V_17_17;

      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
        make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
        {
          make__classify_target_2_4_p_0_4(make__env_ptr);
        }
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_5(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    {
      MR_Word make__V_32_32;

      {
        make__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), make__V_32_32, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16));
      }
      {
        make__util__target_extension_2_f_1((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, make__V_32_32, make__classify_target_2_4_p_0_8, make__env_ptr);
      }
    }
    {
      MR_Word make__V_65_65;

      {
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47);
      }
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
        {
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
          if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
            make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
        }
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
        {
          make__classify_target_2_4_p_0_4(make__env_ptr);
        }
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_4(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_1 = MR_TRUE;
    {
      MR_Word make__V_33_33;

      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
      {
        make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__V_33_33));
      }
      {
        make__classify_target_2_4_p_0_1(make__env_ptr);
      }
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_6(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_30_30, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_60_60) == 0);
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
      {
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31 = (MR_String) ".";
        {
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16 = mercury__string__f_43_43_2_f_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15);
        }
        {
          make__classify_target_2_4_p_0_5(make__env_ptr);
        }
      }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_7(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((MR_String) "s", (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_61_61) == 0);
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
      {
        make__classify_target_2_4_p_0_5(make__env_ptr);
      }
  }
}

void MR_CALL 
make__classify_target_2_4_p_0(
  MR_Word make__Globals_5,
  MR_String make__ModuleNameStr0_6,
  MR_String make__Suffix_7,
  MR_Word * make__HeadVar__4_4,
  MR_Cont make__cont,
  void * make__cont_env_ptr)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s make__env;

    (make__env).make__classify_target_2_4_p_0_env_0__Globals_5 = make__Globals_5;
    (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = make__ModuleNameStr0_6;
    (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7 = make__Suffix_7;
    (make__env).make__classify_target_2_4_p_0_env_0__HeadVar__4_4 = make__HeadVar__4_4;
    (make__env).make__classify_target_2_4_p_0_env_0__cont = make__cont;
    (make__env).make__classify_target_2_4_p_0_env_0__cont_env_ptr = make__cont_env_ptr;
    {
      MR_Word make__V_18_18;

      (make__env).make__classify_target_2_4_p_0_env_0__cond_0 = MR_FALSE;
      {
        make__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), make__V_18_18, 0) = ((MR_Box) ((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7));
      }
      {
        make__util__target_extension_2_f_1((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env).make__classify_target_2_4_p_0_env_0__ModuleTargetType_10, make__V_18_18, make__classify_target_2_4_p_0_3, &make__env);
      }
      if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_0))
        {
          MR_Word make__ModuleTargetType_56;

          {
            (make__env).make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, &make__ModuleTargetType_56);
          }
          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
            {
              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleTargetType_56));
              }
              {
                make__classify_target_2_4_p_0_1(&make__env);
              }
            }
          else
            {
              MR_String make__ModuleNameStr1_12;
              MR_String make__V_20_20;
              MR_String make__V_57_57;

              {
                libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 575, &make__V_57_57);
              }
              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_57_57) == 0);
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                {
                  make__V_20_20 = (MR_String) "lib";
                  {
                    (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_20_20, &make__ModuleNameStr1_12, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                  }
                }
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                {
                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_12;
                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[1]);
                  {
                    make__classify_target_2_4_p_0_1(&make__env);
                  }
                }
              else
                {
                  MR_String make__ModuleNameStr1_54;
                  MR_String make__V_23_23;
                  MR_String make__V_58_58;

                  {
                    libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 574, &make__V_58_58);
                  }
                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_58_58) == 0);
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                    {
                      make__V_23_23 = (MR_String) "lib";
                      {
                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_23_23, &make__ModuleNameStr1_54, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                      }
                    }
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                    {
                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_54;
                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[2]);
                      {
                        make__classify_target_2_4_p_0_1(&make__env);
                      }
                    }
                  else
                    {
                      MR_String make__V_59_59;

                      {
                        libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 576, &make__V_59_59);
                      }
                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_59_59) == 0);
                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                        {
                          MR_Word make__ExecutableType_13;
                          MR_Word make__CompilationTarget_64;

                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                          {
                            libs__globals__get_target_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &make__CompilationTarget_64);
                          }
                          make__ExecutableType_13 = ((&make_vector_common_9[4 + make__CompilationTarget_64]))->make__vector_common_type_9_0__vct_9_f_0;
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__ExecutableType_13));
                          }
                          {
                            make__classify_target_2_4_p_0_1(&make__env);
                          }
                        }
                      else
                        {
                          MR_String make__ModuleNameStr1_50;
                          MR_String make__V_26_26;

                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".beams") == 0);
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                            {
                              make__V_26_26 = (MR_String) "lib";
                              {
                                (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_26_26, &make__ModuleNameStr1_50, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                              }
                            }
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                            {
                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_50;
                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[3]);
                              {
                                make__classify_target_2_4_p_0_1(&make__env);
                              }
                            }
                          else
                            {
                              (make__env).make__classify_target_2_4_p_0_env_0__cond_1 = MR_FALSE;
                              {
                                MR_String make__Rest_14;

                                {
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &make__Rest_14, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7);
                                }
                                if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                  {
                                    (make__env).make__classify_target_2_4_p_0_env_0__V_30_30 = (MR_String) "s";
                                    {
                                      mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15, &(make__env).make__classify_target_2_4_p_0_env_0__V_60_60, make__Rest_14, make__classify_target_2_4_p_0_6, &make__env);
                                    }
                                  }
                              }
                              {
                                mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env).make__classify_target_2_4_p_0_env_0__V_61_61, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__classify_target_2_4_p_0_7, &make__env);
                              }
                              if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_1))
                                {
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".check") == 0);
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                    {
                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[5]);
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                                    }
                                  else
                                    {
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".analyse") == 0);
                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                        {
                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[6]);
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                                        }
                                      else
                                        {
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".clean") == 0);
                                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                            {
                                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[7]);
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                                            }
                                          else
                                            {
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".realclean") == 0);
                                              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                                {
                                                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                                                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[8]);
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_String make__ModuleNameStr1_42;
                                                  MR_String make__V_39_39;

                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".install") == 0);
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                                    {
                                                      make__V_39_39 = (MR_String) "lib";
                                                      {
                                                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_39_39, &make__ModuleNameStr1_42, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                                                      }
                                                    }
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                                    {
                                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_42;
                                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[9]);
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                                                    }
                                                  else
                                                    {
                                                      MR_Word make__V_41_41;

                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".doc") == 0);
                                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                                        {
                                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                                                          make__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[10]);
                                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
                                    {
                                      make__classify_target_2_4_p_0_1(&make__env);
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
make__classify_target_3_p_0_1(
  void * make__env_ptr_arg)
{
  {
    struct make__classify_target_3_p_0_2_env_0_s * make__env_ptr = (struct make__classify_target_3_p_0_2_env_0_s *) make__env_ptr_arg;

    *((make__env_ptr)->make__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
    {
      ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont)((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
make__classify_target_3_p_0_2(
  MR_Box make__closure_arg,
  MR_Box * make__wrapper_arg_1,
  MR_Cont make__cont,
  void * make__cont_env_ptr)
{
  {
    struct make__classify_target_3_p_0_2_env_0_s make__env;

    (make__env).make__classify_target_3_p_0_2_env_0__wrapper_arg_1 = make__wrapper_arg_1;
    (make__env).make__classify_target_3_p_0_2_env_0__cont = make__cont;
    (make__env).make__classify_target_3_p_0_2_env_0__cont_env_ptr = make__cont_env_ptr;
    {
      MR_Box make__closure = make__closure_arg;

      {
        make__classify_target_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 5))), &(make__env).make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__classify_target_3_p_0_1, &make__env);
      }
    }
  }
}

void MR_CALL 
make__classify_target_3_p_0(
  MR_Word make__Globals_4,
  MR_String make__FileName_5,
  MR_Word * make__HeadVar__3_3)
{
  {
    MR_bool make__succeeded;
    MR_Word make__ModuleName_6;
    MR_Word make__TargetType_7;
    MR_Word make__TargetFile_13;
    MR_Word make__TypeInfo_21_21;
    MR_Integer make__NameLength_8;
    MR_Integer make__DotLocn_9;
    MR_String make__ModuleNameStr0_10;
    MR_String make__Suffix_11;
    MR_Word make__TargetFiles_12;
    MR_Word make__V_16_16;
    MR_Word make__V_17_17;

    {
      mercury__string__length_2_p_0(make__FileName_5, &make__NameLength_8);
    }
    {
      make__succeeded = make__search_backwards_for_dot_3_p_0(make__FileName_5, make__NameLength_8, &make__DotLocn_9);
    }
    if (make__succeeded)
      {
        {
          mercury__string__split_4_p_0(make__FileName_5, make__DotLocn_9, &make__ModuleNameStr0_10, &make__Suffix_11);
        }
        make__TypeInfo_21_21 = (MR_Word) &make_scalar_common_1[0];
        {
          make__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__V_16_16, 0) = ((MR_Box) (&make_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), make__V_16_16, 1) = ((MR_Box) (make__classify_target_3_p_0_2));
          MR_hl_field(MR_mktag(0), make__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), make__V_16_16, 3) = ((MR_Box) (make__Globals_4));
          MR_hl_field(MR_mktag(0), make__V_16_16, 4) = ((MR_Box) (make__ModuleNameStr0_10));
          MR_hl_field(MR_mktag(0), make__V_16_16, 5) = ((MR_Box) (make__Suffix_11));
        }
        {
          mercury__solutions__solutions_2_p_1(make__TypeInfo_21_21, make__V_16_16, &make__TargetFiles_12);
        }
        make__succeeded = ((MR_tag((MR_Word) make__TargetFiles_12)) == (MR_mktag((MR_Integer) 1)));
        if (make__succeeded)
          {
            make__TargetFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 0)));
            make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 1)));
            make__succeeded = (make__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (make__succeeded)
      {
        make__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 0)));
        make__TargetType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 1)));
      }
    else
      {
        MR_String make__ModuleNameStr_14;

        {
          make__succeeded = mercury__string__append_3_p_1((MR_String) "lib", &make__ModuleNameStr_14, make__FileName_5);
        }
        if (make__succeeded)
          {
            make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[0]);
            {
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__ModuleNameStr_14, &make__ModuleName_6);
            }
          }
        else
          {
            MR_Word make__ExecutableType_15;
            MR_Word make__CompilationTarget_24;

            {
              libs__globals__get_target_2_p_0(make__Globals_4, &make__CompilationTarget_24);
            }
            make__ExecutableType_15 = ((&make_vector_common_9[0 + make__CompilationTarget_24]))->make__vector_common_type_9_0__vct_9_f_0;
            {
              make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__TargetType_7, 0) = ((MR_Box) (make__ExecutableType_15));
            }
            {
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__FileName_5, &make__ModuleName_6);
            }
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *make__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__TargetType_7));
    }
  }
}

void MR_CALL 
make__make_target_7_p_0(
  MR_Word make__Globals_8,
  MR_Word make__Target_9,
  MR_Word * make__Success_10,
  MR_Word make__STATE_VARIABLE_Info_0_22,
  MR_Word * make__STATE_VARIABLE_Info_23)
{
  {
    MR_bool make__succeeded;
    MR_Word make__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 0)));
    MR_Word make__TargetType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 1)));
    MR_Word make__TrackFlags_15;
    MR_Word make__TrackFlagsSuccess_16;
    MR_Word make__STATE_VARIABLE_Info_27_27;

    {
      libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 628, &make__TrackFlags_15);
    }
    switch (make__TrackFlags_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          make__TrackFlagsSuccess_16 = (MR_Integer) 1;
          make__STATE_VARIABLE_Info_27_27 = make__STATE_VARIABLE_Info_0_22;
        }
        break;
      case (MR_Integer) 1:
        {
          make__make_track_flags_files_7_p_0(make__Globals_8, make__ModuleName_13, &make__TrackFlagsSuccess_16, make__STATE_VARIABLE_Info_0_22, &make__STATE_VARIABLE_Info_27_27);
        }
        break;
    }
    switch (make__TrackFlagsSuccess_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *make__Success_10 = (MR_Integer) 0;
          *make__STATE_VARIABLE_Info_23 = make__STATE_VARIABLE_Info_27_27;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) make__TargetType_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word make__ModuleTargetType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetType_14, (MR_Integer) 0)));
              MR_Word make__TargetFile_18;
              MR_Word make__V_34_34;

              {
                make__TargetFile_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__TargetFile_18, 0) = ((MR_Box) (make__ModuleName_13));
                MR_hl_field(MR_mktag(0), make__TargetFile_18, 1) = ((MR_Box) (make__ModuleTargetType_17));
              }
              {
                make__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__V_34_34, 0) = ((MR_Box) (make__TargetFile_18));
              }
              {
                make__module_target__make_module_target_7_p_0(make__Globals_8, make__V_34_34, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word make__ProgramTargetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetType_14, (MR_Integer) 0)));
              MR_Word make__LinkedTargetFile_20;

              {
                make__LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 0) = ((MR_Box) (make__ModuleName_13));
                MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 1) = ((MR_Box) (make__ProgramTargetType_19));
              }
              {
                make__program_target__make_linked_target_7_p_0(make__Globals_8, make__LinkedTargetFile_20, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__MiscTargetType_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__TargetType_14, (MR_Integer) 0)));
              MR_Word make__V_29_29;

              {
                make__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__V_29_29, 0) = ((MR_Box) (make__ModuleName_13));
                MR_hl_field(MR_mktag(0), make__V_29_29, 1) = ((MR_Box) (make__MiscTargetType_21));
              }
              {
                make__program_target__make_misc_target_7_p_0(make__Globals_8, make__V_29_29, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
              }
            }
            break;
        }
        break;
    }
  }
}

MR_String MR_CALL 
make__make_module_dep_file_extension_0_f_0(void)
{
  {
    MR_bool make__succeeded;

    return (MR_String) ".module_dep";
  }
}

void MR_CALL 
make__make_write_module_dep_file_4_p_0(
  MR_Word make__Globals_5,
  MR_Word make__Imports_6)
{
  {
    MR_bool make__succeeded;

    {
      make__module_dep_file__write_module_dep_file_4_p_0(make__Globals_5, make__Imports_6);
    }
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_8(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box * make__wrapper_arg_3)
{
  {
    MR_Box make__closure = make__closure_arg;

    {
      make__IntroducedFrom__pred__make_process_compiler_args__321__1_3_p_0(((MR_String) make__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_7(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box make__wrapper_arg_2,
  MR_Box * make__wrapper_arg_3,
  MR_Box make__wrapper_arg_4,
  MR_Box * make__wrapper_arg_5,
  MR_Box make__wrapper_arg_6,
  MR_Box * make__wrapper_arg_7)
{
  {
    MR_Box make__closure = make__closure_arg;
    MR_Word make__conv5_Success_10;
    MR_Word make__conv4_STATE_VARIABLE_Info_23;

    {
      make__make_target_7_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv5_Success_10, ((MR_Word) make__wrapper_arg_4), &make__conv4_STATE_VARIABLE_Info_23);
    }
    *make__wrapper_arg_3 = ((MR_Box) (make__conv5_Success_10));
    *make__wrapper_arg_5 = ((MR_Box) (make__conv4_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_6(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2)
{
  {
    MR_Box make__closure = make__closure_arg;
    MR_Word make__conv3_HeadVar__3_3;

    {
      make__classify_target_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) make__wrapper_arg_1), &make__conv3_HeadVar__3_3);
    }
    *make__wrapper_arg_2 = ((MR_Box) (make__conv3_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_5(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1)
{
  {
    MR_bool make__succeeded;
    MR_Box make__closure = make__closure_arg;

    {
      make__succeeded = make__IntroducedFrom__pred__make_process_compiler_args__347__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
    return make__succeeded;
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_4(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2)
{
  {
    MR_Box make__closure = make__closure_arg;
    MR_Integer make__conv2_HeadVar__2_2;

    {
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv2_HeadVar__2_2);
    }
    *make__wrapper_arg_2 = ((MR_Box) (make__conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_3(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2)
{
  {
    MR_Box make__closure = make__closure_arg;
    MR_Integer make__conv1_HeadVar__2_2;

    {
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv1_HeadVar__2_2);
    }
    *make__wrapper_arg_2 = ((MR_Box) (make__conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_2(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1,
  MR_Box * make__wrapper_arg_2)
{
  {
    MR_Box make__closure = make__closure_arg;
    MR_Integer make__conv0_HeadVar__2_2;

    {
      make__util__module_name_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv0_HeadVar__2_2);
    }
    *make__wrapper_arg_2 = ((MR_Box) (make__conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_1(
  MR_Box make__closure_arg,
  MR_Box make__wrapper_arg_1)
{
  {
    MR_bool make__succeeded;
    MR_Box make__closure = make__closure_arg;

    {
      make__succeeded = make__IntroducedFrom__pred__make_process_compiler_args__311__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
    return make__succeeded;
  }
}

void MR_CALL 
make__make_process_compiler_args_7_p_0(
  MR_Word make__Globals_8,
  MR_Word make__DetectedGradeFlags_9,
  MR_Word make__Variables_10,
  MR_Word make__OptionArgs_11,
  MR_Word make__Targets0_12)
{
  {
    MR_bool make__succeeded;
    MR_Word make__TypeCtorInfo_94_94;
    MR_Word make__Targets_15;
    MR_Word make__Continue0_18;
    MR_Word make__AbsTargets_22;

    if ((make__Targets0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word make__MaybeMAIN_TARGET_14;

        {
          make__options_file__lookup_main_target_5_p_0(make__Globals_8, make__Variables_10, &make__MaybeMAIN_TARGET_14);
        }
        if ((make__MaybeMAIN_TARGET_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            make__Targets_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            make__Continue0_18 = (MR_Integer) 0;
          }
        else
          {
            make__Targets_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__MaybeMAIN_TARGET_14, (MR_Integer) 0)));
            if ((make__Targets_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                make__Continue0_18 = (MR_Integer) 0;
                {
                  mercury__io__write_string_3_p_0((MR_String) "** Error: no targets specified and \140MAIN_TARGET\' not defined.\n");
                }
              }
            else
              make__Continue0_18 = (MR_Integer) 1;
          }
      }
    else
      {
        make__Continue0_18 = (MR_Integer) 1;
        make__Targets_15 = make__Targets0_12;
      }
    make__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__filter_3_p_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[13], make__Targets_15, &make__AbsTargets_22);
    }
    if ((make__AbsTargets_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (make__Continue0_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word make__TypeCtorInfo_96_96;
            MR_Word make__TypeCtorInfo_100_100;
            MR_Word make__TypeInfo_109_109;
            MR_Word make__KeepGoing_27;
            MR_Word make__ModuleIndexMap_28;
            MR_Word make__DepIndexMap_29;
            MR_Word make__DepStatusMap_30;
            MR_Word make__NonDependTargets_31;
            MR_Word make__ClassifiedTargets_32;
            MR_Integer make__AnalysisRepeat_34;
            MR_Word make__MakeInfo0_35;
            MR_Word make__Success_36;
            MR_Word make__V_58_58;
            MR_Box make__V_60_60;
            MR_Word make__V_62_62;
            MR_Box make__V_64_64;
            MR_Word make__V_70_70;
            MR_Word make__V_72_72;
            MR_Word make__V_73_73;
            MR_Word make__V_74_74;
            MR_Word make__V_75_75;
            MR_Word make__V_76_76;
            MR_Word make__V_77_77;
            MR_Word make__V_78_78;
            MR_Word make__V_79_79;
            MR_Word make__V_81_81;
            MR_Word make___MakeInfo_37;
            MR_Box make__conv7__MakeInfo_37;
            MR_Box make__conv6_STATE_VARIABLE_IO_84_84;

            {
              libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 626, &make__KeepGoing_27);
            }
            make__TypeCtorInfo_96_96 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            {
              make__V_58_58 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make_scalar_common_1[14]);
            }
            {
              make__V_60_60 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_96_96);
            }
            {
              make__ModuleIndexMap_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 0) = ((MR_Box) (make__V_58_58));
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 1) = ((MR_Box) (make__V_60_60));
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            make__TypeCtorInfo_100_100 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
            {
              make__V_62_62 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, (MR_Word) &make_scalar_common_1[15]);
            }
            {
              make__V_64_64 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_100_100);
            }
            {
              make__DepIndexMap_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 0) = ((MR_Box) (make__V_62_62));
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 1) = ((MR_Box) (make__V_64_64));
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              make__DepStatusMap_30 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__make__type_ctor_info_dependency_status_0, (MR_Word) &make_scalar_common_1[16]);
            }
            {
              make__NonDependTargets_31 = mercury__list__filter_2_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[17], make__Targets_15);
            }
            {
              make__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__V_70_70, 0) = ((MR_Box) (&make_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), make__V_70_70, 1) = ((MR_Box) (make__make_process_compiler_args_7_p_0_6));
              MR_hl_field(MR_mktag(0), make__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), make__V_70_70, 3) = ((MR_Box) (make__Globals_8));
            }
            make__TypeInfo_109_109 = (MR_Word) &make_scalar_common_1[0];
            {
              mercury__list__map_3_p_0(make__TypeCtorInfo_94_94, make__TypeInfo_109_109, make__V_70_70, make__NonDependTargets_31, &make__ClassifiedTargets_32);
            }
            {
              libs__globals__lookup_int_option_3_p_0(make__Globals_8, (MR_Integer) 336, &make__AnalysisRepeat_34);
            }
            {
              make__V_72_72 = mercury__map__init_0_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make_scalar_common_2[0]);
            }
            {
              make__V_73_73 = mercury__map__init_0_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[1]);
            }
            {
              make__V_74_74 = mercury__map__init_0_f_0((MR_Word) &make_scalar_common_1[2], make__TypeCtorInfo_94_94);
            }
            {
              make__V_75_75 = make__dependencies__init_cached_direct_imports_0_f_0();
            }
            {
              make__V_76_76 = make__dependencies__init_cached_direct_imports_0_f_0();
            }
            {
              make__V_77_77 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
            }
            {
              make__V_78_78 = make__dependencies__init_cached_foreign_imports_0_f_0();
            }
            {
              make__V_79_79 = mercury__set__init_0_f_0(make__TypeCtorInfo_96_96);
            }
            {
              make__V_81_81 = mercury__set__list_to_set_1_f_0(make__TypeInfo_109_109, make__ClassifiedTargets_32);
            }
            {
              make__MakeInfo0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 0) = ((MR_Box) (make__V_72_72));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 1) = ((MR_Box) (make__V_73_73));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 2) = ((MR_Box) (make__V_74_74));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 3) = ((MR_Box) (make__DetectedGradeFlags_9));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 4) = ((MR_Box) (make__OptionArgs_11));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 5) = ((MR_Box) (make__Variables_10));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 6) = ((MR_Box) (make__ModuleIndexMap_28));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 7) = ((MR_Box) (make__DepIndexMap_29));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 8) = ((MR_Box) (make__DepStatusMap_30));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 9) = ((MR_Box) (make__V_75_75));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 10) = ((MR_Box) (make__V_76_76));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 11) = ((MR_Box) (make__V_77_77));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 12) = ((MR_Box) (make__V_78_78));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 13) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 14) = ((MR_Box) (make__KeepGoing_27));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 15) = ((MR_Box) (make__V_79_79));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 17) = ((MR_Box) (make__V_81_81));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 18) = ((MR_Box) (make__AnalysisRepeat_34));
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 19) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              make__util__foldl2_maybe_stop_at_error_9_p_0(make__TypeInfo_109_109, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__KeepGoing_27, (MR_Word) &make_scalar_common_1[18], make__Globals_8, make__ClassifiedTargets_32, &make__Success_36, ((MR_Box) (make__MakeInfo0_35)), &make__conv7__MakeInfo_37, ((MR_Box) ((MR_Integer) 0)), &make__conv6_STATE_VARIABLE_IO_84_84);
            }
            make___MakeInfo_37 = ((MR_Word) make__conv7__MakeInfo_37);
            switch (make__Success_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
          }
          break;
      }
    else
      {
        MR_Box make__conv8_STATE_VARIABLE_IO_49_124;

        {
          mercury__list__foldl_4_p_2(make__TypeCtorInfo_94_94, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make_scalar_common_1[19], make__AbsTargets_22, ((MR_Box) ((MR_Integer) 0)), &make__conv8_STATE_VARIABLE_IO_49_124);
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
  }
}

void mercury__make__init(void)
{
}

void mercury__make__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__make__type_ctor_info_c_header_type_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_compilation_task_type_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_dependency_file_index_map_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_dependency_status_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_file_timestamps_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_last_hash_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_linked_target_file_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_make_error_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_make_info_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_misc_target_type_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_module_compilation_task_type_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_module_index_map_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_module_target_type_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_rebuild_module_deps_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_target_file_0);
	MR_register_type_ctor_info(&make__make__type_ctor_info_target_type_0);
}

void mercury__make__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module make. */
