/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version rotd-2019-03-16
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


// :- module make.
// :- implementation.

/*
INIT mercury__make__init
ENDINIT
*/

#include "make.mih"


#include "backend_libs.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
  MR_String make__classify_target_2_4_p_0_env_0__Var_30;
  MR_String make__classify_target_2_4_p_0_env_0__Var_31;
  MR_String make__classify_target_2_4_p_0_env_0__Var_60;
  MR_String make__classify_target_2_4_p_0_env_0__Var_61;
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

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_0[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0;

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1];

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_1[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1;

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2];

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_2[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2;

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2];

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_3[2];

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

static const MR_DuArgLocn make__make__field_locns_linked_target_file_0_0[2];

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

static const MR_DuArgLocn make__make__field_locns_make_info_0_0[20];

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

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_9[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15;

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16;

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1];

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_17[1];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17;

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2];

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_18[2];

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18;

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2];

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_19[2];

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

static const MR_DuArgLocn make__make__field_locns_target_type_0_1[1];

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
make__IntroducedFrom__pred__make_process_compiler_args__341__1_1_p_0(
  MR_String LambdaHeadVar__1_68);

static void MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__315__1_3_p_0(
  MR_String LambdaHeadVar__1_50);

static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__305__1_1_p_0(
  MR_String LambdaHeadVar__1_46);

static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__classify_target_2_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_2_4_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
make__classify_target_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__make_process_compiler_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____last_hash_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____make_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____make_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make____Compare____target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make_scalar_common_1[18][3];

static /* final */ const MR_Box make_scalar_common_2[10][2];

static /* final */ const MR_Box make_scalar_common_3[1][4];

static /* final */ const MR_Box make_scalar_common_4[3][5];

static /* final */ const MR_Box make_scalar_common_5[2][6];

static /* final */ const MR_Box make_scalar_common_6[1][10];

static /* final */ const MR_Box make_scalar_common_7[1][12];

static /* final */ const MR_Box make_scalar_common_8[1][7];

static /* final */ const MR_Box make_scalar_common_9[11][1];


/* sealed */ struct make__vector_common_type_10_0_s {
  const MR_Word make__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct make__vector_common_type_10_0_s make_vector_common_10[12];



static /* final */ const MR_Box make_scalar_common_1[18][3] = {
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
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make_scalar_common_4[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make_scalar_common_6[0])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make_scalar_common_5[1])),
    ((MR_Box) (make__make_process_compiler_args_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make_scalar_common_7[0])),
    ((MR_Box) (make__make_track_flags_files_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make_scalar_common_2[10][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&make_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__util__make__util__type_ctor_info_stdout_lock_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box make_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box make_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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

static /* final */ const MR_Box make_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0))
  },
};

static /* final */ const MR_Box make_scalar_common_9[11][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make_scalar_common_9[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 20U))
  },
};


static /* final */ const struct make__vector_common_type_10_0_s make_vector_common_10[12] = {
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
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_target_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0)
  }
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____c_header_type_0_0_10001)),
  ((MR_Box) (make____Compare____c_header_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "c_header_type",
  {     make__make__enum_name_ordered_c_header_type_0 },
  {     make__make__enum_value_ordered_c_header_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  make__make__functor_number_map_c_header_type_0
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_module_compilation_task_type_0)
};

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0 = {
  (MR_String) "process_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_compilation_task_type_0_0,
  NULL,
  make__make__field_locns_compilation_task_type_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)
};

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1 = {
  (MR_String) "target_code_to_object_code",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make__field_types_compilation_task_type_0_1,
  NULL,
  make__make__field_locns_compilation_task_type_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_2[2] = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2 = {
  (MR_String) "foreign_code_to_object_code",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__make__field_types_compilation_task_type_0_2,
  NULL,
  make__make__field_locns_compilation_task_type_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn make__make__field_locns_compilation_task_type_0_3[2] = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_3 = {
  (MR_String) "fact_table_code_to_object_code",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  make__make__field_types_compilation_task_type_0_3,
  NULL,
  make__make__field_locns_compilation_task_type_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_compilation_task_type_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____compilation_task_type_0_0_10001)),
  ((MR_Box) (make____Compare____compilation_task_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "compilation_task_type",
  {     make__make__du_name_ordered_compilation_task_type_0 },
  {     make__make__du_ptag_ordered_compilation_task_type_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  make__make__functor_number_map_compilation_task_type_0
};

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)
  }
};

static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0),
  (MR_PseudoTypeInfo) (&make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_dependency_file_index_map_0_0 = {
  (MR_String) "dependency_file_index_map",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_dependency_file_index_map_0_0,
  make__make__field_names_dependency_file_index_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_dependency_file_index_map_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____dependency_file_index_map_0_0_10001)),
  ((MR_Box) (make____Compare____dependency_file_index_map_0_0_10001)),
  (MR_String) "make",
  (MR_String) "dependency_file_index_map",
  {     make__make__du_name_ordered_dependency_file_index_map_0 },
  {     make__make__du_ptag_ordered_dependency_file_index_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__make__functor_number_map_dependency_file_index_map_0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  INT32_C(3)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____dependency_status_0_0_10001)),
  ((MR_Box) (make____Compare____dependency_status_0_0_10001)),
  (MR_String) "make",
  (MR_String) "dependency_status",
  {     make__make__enum_name_ordered_dependency_status_0 },
  {     make__make__enum_value_ordered_dependency_status_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  make__make__functor_number_map_dependency_status_0
};

static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct make__make__type_ctor_info_file_timestamps_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make____Unify____file_timestamps_0_0_10001)),
  ((MR_Box) (make____Compare____file_timestamps_0_0_10001)),
  (MR_String) "make",
  (MR_String) "file_timestamps",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__make__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_last_hash_0_0 = {
  (MR_String) "last_hash",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_last_hash_0_0,
  make__make__field_names_last_hash_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_last_hash_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____last_hash_0_0_10001)),
  ((MR_Box) (make____Compare____last_hash_0_0_10001)),
  (MR_String) "make",
  (MR_String) "last_hash",
  {     make__make__du_name_ordered_last_hash_0 },
  {     make__make__du_ptag_ordered_last_hash_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__make__functor_number_map_last_hash_0
};

static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)
};

static const MR_ConstString make__make__field_names_linked_target_file_0_0[2] = {
  (MR_String) "linked_tf_name",
  (MR_String) "linked_tf_type"
};

static const MR_DuArgLocn make__make__field_locns_linked_target_file_0_0[2] = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_linked_target_file_0_0 = {
  (MR_String) "linked_target_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_linked_target_file_0_0,
  make__make__field_names_linked_target_file_0_0,
  make__make__field_locns_linked_target_file_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_linked_target_file_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____linked_target_file_0_0_10001)),
  ((MR_Box) (make____Compare____linked_target_file_0_0_10001)),
  (MR_String) "make",
  (MR_String) "linked_target_file",
  {     make__make__du_name_ordered_linked_target_file_0 },
  {     make__make__du_ptag_ordered_linked_target_file_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__make__functor_number_map_linked_target_file_0
};

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_target_file_0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_0 = {
  (MR_String) "make_error_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_make_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_1 = {
  (MR_String) "make_error_dependencies",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make__field_types_make_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_2 = {
  (MR_String) "make_error_other",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__make__field_types_make_error_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    make__make__du_stag_ordered_make_error_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_error_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_error_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____make_error_0_0_10001)),
  ((MR_Box) (make____Compare____make_error_0_0_10001)),
  (MR_String) "make",
  (MR_String) "make_error",
  {     make__make__du_name_ordered_make_error_0 },
  {     make__make__du_ptag_ordered_make_error_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  make__make__functor_number_map_make_error_0
};

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_TypeInfo) (&make__make__type_ctor_info_dependency_status_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0),
    (MR_TypeInfo) (&make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0),
    (MR_TypeInfo) (&make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&make__make__type_ctor_info_target_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&make__util__make__util__type_ctor_info_job_ctl_0)
  }
};

static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20] = {
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0),
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0),
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_module_index_map_0),
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_dependency_file_index_map_0),
  (MR_PseudoTypeInfo) (&make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0),
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_rebuild_module_deps_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0)
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

static const MR_DuArgLocn make__make__field_locns_make_info_0_0[20] = {
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0 = {
  (MR_String) "make_info",
  INT16_C(20),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_make_info_0_0,
  make__make__field_names_make_info_0_0,
  make__make__field_locns_make_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____make_info_0_0_10001)),
  ((MR_Box) (make____Compare____make_info_0_0_10001)),
  (MR_String) "make",
  (MR_String) "make_info",
  {     make__make__du_name_ordered_make_info_0 },
  {     make__make__du_ptag_ordered_make_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__make__functor_number_map_make_info_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_0 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_1 = {
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

static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_module_target_type_0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_2 = {
  (MR_String) "misc_target_build_all",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  make__make__field_types_misc_target_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_3 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_4 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_5 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_6 = {
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
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__make__du_stag_ordered_misc_target_type_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_misc_target_type_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____misc_target_type_0_0_10001)),
  ((MR_Box) (make____Compare____misc_target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "misc_target_type",
  {     make__make__du_name_ordered_misc_target_type_0 },
  {     make__make__du_ptag_ordered_misc_target_type_0 },
  (MR_Integer) 7,
  UINT16_C(4),
  make__make__functor_number_map_misc_target_type_0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_short_interface",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_interface",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_private_interface",
  INT32_C(3)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_optimization_interface",
  INT32_C(4)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  INT32_C(5)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  INT32_C(6)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  INT32_C(7)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____module_compilation_task_type_0_0_10001)),
  ((MR_Box) (make____Compare____module_compilation_task_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_compilation_task_type",
  {     make__make__enum_name_ordered_module_compilation_task_type_0 },
  {     make__make__enum_value_ordered_module_compilation_task_type_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  make__make__functor_number_map_module_compilation_task_type_0
};

static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString make__make__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_index_map_0_0 = {
  (MR_String) "module_index_map",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_module_index_map_0_0,
  make__make__field_names_module_index_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_index_map_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____module_index_map_0_0_10001)),
  ((MR_Box) (make____Compare____module_index_map_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_index_map",
  {     make__make__du_name_ordered_module_index_map_0 },
  {     make__make__du_ptag_ordered_module_index_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__make__functor_number_map_module_index_map_0
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_0 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_1 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_2 = {
  (MR_String) "module_target_private_interface",
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_3 = {
  (MR_String) "module_target_long_interface",
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_4 = {
  (MR_String) "module_target_short_interface",
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_5 = {
  (MR_String) "module_target_unqualified_short_interface",
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_6 = {
  (MR_String) "module_target_intermodule_interface",
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_7 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_8 = {
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

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1] = {
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_c_header_type_0)
};

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_9[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9 = {
  (MR_String) "module_target_c_header",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(9),
  make__make__field_types_module_target_type_0_9,
  NULL,
  make__make__field_locns_module_target_type_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13 = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14 = {
  (MR_String) "module_target_erlang_header",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 13,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15 = {
  (MR_String) "module_target_erlang_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 14,
  INT32_C(15),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16 = {
  (MR_String) "module_target_erlang_beam_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 15,
  INT32_C(16),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)
};

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_17[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17 = {
  (MR_String) "module_target_object_code",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(17),
  make__make__field_types_module_target_type_0_17,
  NULL,
  make__make__field_locns_module_target_type_0_17,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_18[2] = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18 = {
  (MR_String) "module_target_foreign_object",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(18),
  make__make__field_types_module_target_type_0_18,
  NULL,
  make__make__field_locns_module_target_type_0_18,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn make__make__field_locns_module_target_type_0_19[2] = {
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

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19 = {
  (MR_String) "module_target_fact_table_object",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(19),
  make__make__field_types_module_target_type_0_19,
  NULL,
  make__make__field_locns_module_target_type_0_19,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20 = {
  (MR_String) "module_target_xml_doc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 16,
  INT32_C(20),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(17),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__make__du_stag_ordered_module_target_type_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_target_type_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_target_type_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    make__make__du_stag_ordered_module_target_type_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____module_target_type_0_0_10001)),
  ((MR_Box) (make____Compare____module_target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_target_type",
  {     make__make__du_name_ordered_module_target_type_0 },
  {     make__make__du_ptag_ordered_module_target_type_0 },
  (MR_Integer) 21,
  UINT16_C(4),
  make__make__functor_number_map_module_target_type_0
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____rebuild_module_deps_0_0_10001)),
  ((MR_Box) (make____Compare____rebuild_module_deps_0_0_10001)),
  (MR_String) "make",
  (MR_String) "rebuild_module_deps",
  {     make__make__enum_name_ordered_rebuild_module_deps_0 },
  {     make__make__enum_value_ordered_rebuild_module_deps_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  make__make__functor_number_map_rebuild_module_deps_0
};

static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_module_target_type_0)
};

static const MR_ConstString make__make__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_file_0_0 = {
  (MR_String) "target_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_target_file_0_0,
  make__make__field_names_target_file_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_file_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____target_file_0_0_10001)),
  ((MR_Box) (make____Compare____target_file_0_0_10001)),
  (MR_String) "make",
  (MR_String) "target_file",
  {     make__make__du_name_ordered_target_file_0 },
  {     make__make__du_ptag_ordered_target_file_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__make__functor_number_map_target_file_0
};

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_module_target_type_0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_0 = {
  (MR_String) "module_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__make__field_types_target_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)
};

static const MR_DuArgLocn make__make__field_locns_target_type_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_1 = {
  (MR_String) "linked_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__make__field_types_target_type_0_1,
  NULL,
  make__make__field_locns_target_type_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) (&make__make__type_ctor_info_misc_target_type_0)
};

static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_2 = {
  (MR_String) "misc_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  make__make__field_types_target_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_type_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_type_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_type_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____target_type_0_0_10001)),
  ((MR_Box) (make____Compare____target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "target_type",
  {     make__make__du_name_ordered_target_type_0 },
  {     make__make__du_ptag_ordered_target_type_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  make__make__functor_number_map_target_type_0
};

static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__341__1_1_p_0(
  MR_String LambdaHeadVar__1_68)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_68, (MR_String) ".depend");
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__315__1_3_p_0(
  MR_String LambdaHeadVar__1_50)
{
  {
    parse_tree__error_util__write_error_plain_with_progname_4_p_0(LambdaHeadVar__1_50, (MR_String) "Make target must not contain any directory component.");
  }
}

static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_compiler_args__305__1_1_p_0(
  MR_String LambdaHeadVar__1_46)
{
  {
    MR_bool succeeded;
    MR_Char Var_47;

    Var_47 = mercury__dir__directory_separator_0_f_0();
    succeeded = mercury__string__contains_char_2_p_0(LambdaHeadVar__1_46, Var_47);
    return succeeded;
  }
}

void MR_CALL 
make____Compare____target_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  make____Compare____module_target_type_0_0(HeadVar__1_1, Var_29, ArgY1_5);
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
            MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
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
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  make____Compare____misc_target_type_0_0(HeadVar__1_1, Var_28, ArgY1_21);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = make____Unify____module_target_type_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = make____Unify____misc_target_type_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
make____Compare____rebuild_module_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
make____Compare____module_compilation_task_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
make____Compare____misc_target_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  make____Compare____module_target_type_0_0(HeadVar__1_1, Var_21, ArgY1_9);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = make____Unify____module_target_type_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
make____Compare____make_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_63 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_64 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_63 == CastY_64);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX15_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))) & (MR_Integer) 1);
      MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))));
      MR_Integer ArgX19_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Integer ArgY19_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
      MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_1[7]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variables_0), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  make____Compare____module_index_map_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    make____Compare____dependency_file_index_map_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_1[8]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;

                              mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                              succeeded = (SubResult13_42 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;
                                MR_Integer Var_85 = (MR_Integer) (ArgX14_43);
                                MR_Integer Var_86 = (MR_Integer) (ArgY14_44);

                                succeeded = (Var_85 < Var_86);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_85 > Var_86);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult14_45 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;
                                  MR_Integer Var_87 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_88 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_87 < Var_88);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_87 > Var_88);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult15_48 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Word SubResult16_51;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[4]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                    succeeded = (SubResult16_51 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult16_51;
                                    else
                                    {
                                      MR_Word SubResult17_54;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[5]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                      succeeded = (SubResult17_54 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult17_54;
                                      else
                                      {
                                        MR_Word SubResult18_57;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[6]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                        succeeded = (SubResult18_57 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult18_57;
                                        else
                                        {
                                          MR_Word SubResult19_60;

                                          succeeded = (ArgX19_58 < ArgY19_59);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (ArgX19_58 > ArgY19_59);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult19_60 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult19_60;
                                          else
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
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
make____Compare____module_index_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box ArgY2_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_1[9]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[8]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
}

MR_bool MR_CALL 
make____Unify____make_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_43 == CastY_44);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_46_46;
      MR_Word TypeInfo_47_47;
      MR_Word TypeInfo_48_48;
      MR_Word TypeInfo_49_49;
      MR_Word TypeCtorInfo_50_50;
      MR_Word TypeInfo_51_51;
      MR_Word TypeCtorInfo_52_52;
      MR_Word TypeCtorInfo_53_53;
      MR_Word TypeCtorInfo_54_54;
      MR_Word TypeCtorInfo_55_55;
      MR_Word TypeInfo_56_56;
      MR_Word TypeInfo_57_57;
      MR_Word TypeInfo_58_58;
      MR_Word TypeInfo_59_59;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))));
      MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
      MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
      MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_46_46 = (MR_Word) (&make_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_47_47 = (MR_Word) (&make_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_48_48 = (MR_Word) (&make_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_49_49 = (MR_Word) (&make_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeCtorInfo_50_50 = (MR_Word) (&make__options_file__make__options_file__type_ctor_info_options_variables_0);
                succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_50_50, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = make____Unify____module_index_map_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = make____Unify____dependency_file_index_map_0_0(ArgX8_17, ArgY8_18);
                    if (succeeded)
                    {
                      TypeInfo_51_51 = (MR_Word) (&make_scalar_common_1[8]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeCtorInfo_52_52 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0);
                        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_52_52, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeCtorInfo_53_53 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0);
                          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_53_53, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeCtorInfo_54_54 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0);
                            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_54_54, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeCtorInfo_55_55 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0);
                              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_55_55, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    TypeInfo_56_56 = (MR_Word) (&make_scalar_common_2[4]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                    if (succeeded)
                                    {
                                      TypeInfo_57_57 = (MR_Word) (&make_scalar_common_2[5]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                      if (succeeded)
                                      {
                                        TypeInfo_58_58 = (MR_Word) (&make_scalar_common_2[6]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX19_39 == ArgY19_40);
                                          if (succeeded)
                                          {
                                            TypeInfo_59_59 = (MR_Word) (&make_scalar_common_2[7]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
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
make____Unify____module_index_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgX2_5 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box ArgY2_6 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
}

void MR_CALL 
make____Compare____make_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

                  make____Compare____target_file_0_0(HeadVar__1_1, Var_29, ArgY1_5);
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
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
            MR_String Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_28, ArgY1_21);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
make____Compare____target_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        make____Compare____module_target_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

void MR_CALL 
make____Compare____module_target_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      make____Index____module_target_type_0_0(HeadVar__2_2, &Var_4);
      make____Index____module_target_type_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY1_8;
                MR_Integer Var_29;
                MR_Integer Var_30;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  Var_29 = (MR_Integer) (ArgX1_7);
                  Var_30 = (MR_Integer) (ArgY1_8);
                  succeeded = (Var_29 < Var_30);
                  if (succeeded)
                    Var_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_29 > Var_30);
                    if (succeeded)
                      Var_6 = (MR_Integer) 2;
                    else
                      Var_6 = (MR_Integer) 0;
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY1_10;
                MR_Integer Var_37;
                MR_Integer Var_38;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  Var_37 = (MR_Integer) (ArgX1_9);
                  Var_38 = (MR_Integer) (ArgY1_10);
                  succeeded = (Var_37 < Var_38);
                  if (succeeded)
                    Var_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_37 > Var_38);
                    if (succeeded)
                      Var_6 = (MR_Integer) 2;
                    else
                      Var_6 = (MR_Integer) 0;
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgX1_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                    MR_Word ArgY1_12;
                    MR_Word ArgX2_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                    MR_Word ArgY2_15;
                    MR_Word SubResult1_13;
                    MR_Integer Var_33;
                    MR_Integer Var_34;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                      ArgY2_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                        Var_6 = SubResult1_13;
                      else
                      {
                        MR_Integer Var_35 = (MR_Integer) (ArgX2_14);
                        MR_Integer Var_36 = (MR_Integer) (ArgY2_15);

                        succeeded = (Var_35 < Var_36);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_35 > Var_36);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgX1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word ArgY1_17;
                    MR_String ArgX2_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_String ArgY2_20;
                    MR_Word SubResult1_18;
                    MR_Integer Var_31;
                    MR_Integer Var_32;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgY2_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                        Var_6 = SubResult1_18;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX2_19, ArgY2_20);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
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
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 9;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 17;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
make____Unify____make_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
              succeeded = make____Unify____target_file_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
make____Unify____target_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = make____Unify____module_target_type_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
make____Unify____module_target_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_49 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_50 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_49 == CastY_50);
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
                MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_32 == CastX_31);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_34 == CastX_33);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_36 == CastX_35);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Integer CastX_47 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_48 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_48 == CastX_47);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_22;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_21 == ArgY1_22);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_38;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_37 == ArgY1_38);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                MR_Word ArgY1_40;
                MR_Word ArgX2_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ArgY2_42;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                  ArgY2_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  succeeded = (ArgX1_39 == ArgY1_40);
                  if (succeeded)
                    succeeded = (ArgX2_41 == ArgY2_42);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY1_44;
                MR_String ArgX2_45 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_46;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgY2_46 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_43 == ArgY1_44);
                  if (succeeded)
                    succeeded = (strcmp(ArgX2_45, ArgY2_46) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
make____Compare____linked_target_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 15);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 15);
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
}

MR_bool MR_CALL 
make____Unify____linked_target_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 15);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 15);

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
make____Compare____last_hash_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
make____Unify____last_hash_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make_scalar_common_2[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
    return succeeded;
  }
}

void MR_CALL 
make____Compare____file_timestamps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
make____Unify____file_timestamps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
make____Compare____dependency_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
make____Unify____dependency_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
make____Compare____dependency_file_index_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box ArgY2_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&make_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
}

MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgX2_5 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box ArgY2_6 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_12_12 = (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0);
        succeeded = mercury__version_array____Unify____version_array_1_0(TypeCtorInfo_12_12, ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
make____Compare____compilation_task_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
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
            MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
            MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

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
                  MR_Word ArgY1_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                  MR_Word ArgY2_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
            MR_String Var_62 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                  MR_Word ArgY1_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_String ArgY2_53 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
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
}

MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
              ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (ArgX1_7 == ArgY1_8);
              if (succeeded)
                succeeded = (ArgX2_9 == ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_12;
            MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              ArgY2_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_11 == ArgY1_12);
              if (succeeded)
                succeeded = (strcmp(ArgX2_13, ArgY2_14) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
make____Compare____c_header_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
make____Unify____c_header_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
make__is_consequential_option_2_p_0(
  MR_Word InconsequentialOptions_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Option_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), InconsequentialOptions_3, ((MR_Box) (Option_4)));
    succeeded = !(succeeded);
    return succeeded;
  }
}

void MR_CALL 
make__make_track_flags_files_2_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word * Success_12,
  MR_Word STATE_VARIABLE_LastHash_0_25,
  MR_Word * STATE_VARIABLE_LastHash_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_bool succeeded;
    MR_Word OptionsResult_16;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));

    make__options_file__lookup_mmc_module_options_6_p_0(Globals_10, Var_31, ModuleName_11, &OptionsResult_16);
    if ((OptionsResult_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Success_12 = (MR_Integer) 0;
      *STATE_VARIABLE_LastHash_26 = STATE_VARIABLE_LastHash_0_25;
    }
    else
    {
      MR_Word ModuleOptionArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionsResult_16, (MR_Integer) 0))));
      MR_Word DetectedGradeFlags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
      MR_Word OptionArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
      MR_Word AllOptionArgs_20;
      MR_String Hash_22;
      MR_String HashFileName_23;
      MR_Word Same_24;
      MR_Word Var_33;
      MR_String HashPrime_21;
      MR_Word Var_99;

      Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleOptionArgs_17, OptionArgs_19);
      AllOptionArgs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_18, Var_33);
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_LastHash_0_25, (MR_Integer) 0))));
      HashPrime_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_LastHash_0_25, (MR_Integer) 1))));
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make_scalar_common_2[3]), ((MR_Box) (AllOptionArgs_20)), ((MR_Box) (Var_99)));
      if (succeeded)
      {
        Hash_22 = HashPrime_21;
        *STATE_VARIABLE_LastHash_26 = STATE_VARIABLE_LastHash_0_25;
      }
      else
      {
        make__option_table_hash_4_p_0(AllOptionArgs_20, &Hash_22);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_LastHash_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AllOptionArgs_20));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Hash_22));
        }
      }
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".track_flags", ModuleName_11, &HashFileName_23);
      make__compare_hash_file_6_p_0(Globals_10, HashFileName_23, Hash_22, &Same_24);
      switch (Same_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__write_hash_file_5_p_0(HashFileName_23, Hash_22, Success_12);
          break;
        case (MR_Integer) 1:
          *Success_12 = (MR_Integer) 1;
          break;
      }
    }
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  }
}

void MR_CALL 
make__write_hash_file_5_p_0(
  MR_String FileName_6,
  MR_String Hash_7,
  MR_Word * Success_8)
{
  {
    MR_Word OpenResult_10;

    mercury__io__open_output_4_p_0(FileName_6, &OpenResult_10);
    if (((MR_tag((MR_Word) OpenResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_10, (MR_Integer) 0))));
      MR_String Var_21;

      mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
      mercury__io__write_string_3_p_0(FileName_6);
      mercury__io__write_string_3_p_0((MR_String) "\': ");
      Var_21 = mercury__io__error_message_1_f_0(Error_12);
      mercury__io__write_string_3_p_0(Var_21);
      mercury__io__nl_2_p_0();
      *Success_8 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Stream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_10, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_11, Hash_7);
      mercury__io__close_output_3_p_0(Stream_11);
      *Success_8 = (MR_Integer) 1;
    }
  }
}

void MR_CALL 
make__compare_hash_file_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String Hash_9,
  MR_Word * Same_10)
{
  {
    MR_bool succeeded;
    MR_Word OpenResult_12;
    MR_Word Verbose_18;

    mercury__io__open_input_4_p_0(FileName_8, &OpenResult_12);
    if (((MR_tag((MR_Word) OpenResult_12)) == (MR_Integer) 1))
      *Same_10 = (MR_Integer) 0;
    else
    {
      MR_Word Stream_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_12, (MR_Integer) 0))));
      MR_Word ReadResult_14;

      mercury__io__read_line_as_string_4_p_0(Stream_13, &ReadResult_14);
      switch (MR_tag((MR_Word) ReadResult_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Same_10 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_String Line_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadResult_14, (MR_Integer) 0))));

            succeeded = (strcmp(Line_15, Hash_9) == 0);
            if (succeeded)
              *Same_10 = (MR_Integer) 1;
            else
              *Same_10 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          *Same_10 = (MR_Integer) 0;
          break;
      }
      mercury__io__close_input_3_p_0(Stream_13);
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 60, &Verbose_18);
    switch (Verbose_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "% ");
          mercury__io__write_string_3_p_0(FileName_8);
          switch (*Same_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) " will be UPDATED.\n");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) " does not need updating.\n");
              }
              break;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__is_consequential_option_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
make__option_table_hash_4_p_0(
  MR_Word AllOptionArgs_5,
  MR_String * Hash_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionsErrors_10;
    MR_Word AllOptionArgsGlobals_11;
    MR_Word OptionTable_14;
    MR_Word OptionList_15;
    MR_Word InconsequentialOptions_16;
    MR_Word ConsequentialOptionList_17;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_8;
    MR_Word Var_9;

    libs__handle_options__handle_given_options_7_p_0(AllOptionArgs_5, &Var_8, &Var_9, &OptionsErrors_10, &AllOptionArgsGlobals_11);
    if (!((OptionsErrors_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "make.m", (MR_String) "predicate \140make.option_table_hash\'/4: handle_options returned with errors");
        return;
      }
    }
    libs__globals__get_options_2_p_0(AllOptionArgsGlobals_11, &OptionTable_14);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_14, &OptionList_15);
    libs__options__inconsequential_options_1_p_0(&InconsequentialOptions_16);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&make_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (make__option_table_hash_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (InconsequentialOptions_16));
    }
    mercury__list__filter_3_p_0((MR_Word) (&make_scalar_common_1[3]), Var_27, OptionList_15, &ConsequentialOptionList_17);
    Var_28 = mercury__string__string_1_f_0((MR_Word) (&make_scalar_common_2[1]), ((MR_Box) (ConsequentialOptionList_17)));
    *Hash_6 = libs__md4__md4sum_1_f_0(Var_28);
  }
}

MR_Word MR_CALL 
make__get_executable_type_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word ExecutableType_4;
    MR_Word CompilationTarget_5;

    libs__globals__get_target_2_p_0(Globals_3, &CompilationTarget_5);
    ExecutableType_4 = ((&make_vector_common_10[8 + CompilationTarget_5]))->make__vector_common_type_10_0__vct_10_f_0;
    return ExecutableType_4;
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".cs") == 0);
    (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
    if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
      make__classify_target_2_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
    {
      (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        (env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_10));
      }
      make__classify_target_2_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    parse_tree__file_names__file_name_to_module_name_2_p_0((env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->make__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9));
    }
    ((env_ptr)->make__classify_target_2_4_p_0_env_0__cont)((env_ptr)->make__classify_target_2_4_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_8(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_17;
      MR_Unsigned packed_word_0;

      (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_Integer) 1);
      if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
      {
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
        Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0))) & (MR_Integer) 1);
      }
      (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
      if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
        make__classify_target_2_4_p_0_4(env_ptr);
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_5(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16));
      }
      make__util__target_extension_2_f_1((env_ptr)->make__classify_target_2_4_p_0_env_0__Globals_5, &(env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, Var_32, make__classify_target_2_4_p_0_8, env_ptr);
    }
    {
      MR_Word Var_65;
      MR_Unsigned packed_word_1;

      (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16, &(env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47);
      if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
      {
        (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_Integer) 1);
        if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
        {
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
          Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0))) & (MR_Integer) 1);
        }
        (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
      }
      if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
        make__classify_target_2_4_p_0_4(env_ptr);
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__classify_target_2_4_p_0_env_0__cond_1 = MR_TRUE;
    {
      MR_Word Var_33;

      (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        (env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_33));
      }
      make__classify_target_2_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_6(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env_ptr)->make__classify_target_2_4_p_0_env_0__Var_30, (env_ptr)->make__classify_target_2_4_p_0_env_0__Var_60) == 0);
    if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
    {
      (env_ptr)->make__classify_target_2_4_p_0_env_0__Var_31 = (MR_String) ".";
      (env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16 = mercury__string__f_43_43_2_f_0((env_ptr)->make__classify_target_2_4_p_0_env_0__Var_31, (env_ptr)->make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15);
      make__classify_target_2_4_p_0_5(env_ptr);
    }
  }
}

static void MR_CALL 
make__classify_target_2_4_p_0_7(
  void * env_ptr_arg)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s * env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((MR_String) "s", (env_ptr)->make__classify_target_2_4_p_0_env_0__Var_61) == 0);
    if ((env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
      make__classify_target_2_4_p_0_5(env_ptr);
  }
}

void MR_CALL 
make__classify_target_2_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String Suffix_7,
  MR_Word * HeadVar__4_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct make__classify_target_2_4_p_0_env_0_s env;

    (env).make__classify_target_2_4_p_0_env_0__Globals_5 = Globals_5;
    (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = ModuleNameStr0_6;
    (env).make__classify_target_2_4_p_0_env_0__Suffix_7 = Suffix_7;
    (env).make__classify_target_2_4_p_0_env_0__HeadVar__4_4 = HeadVar__4_4;
    (env).make__classify_target_2_4_p_0_env_0__cont = cont;
    (env).make__classify_target_2_4_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word Var_18;

      (env).make__classify_target_2_4_p_0_env_0__cond_0 = MR_FALSE;
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((env).make__classify_target_2_4_p_0_env_0__Suffix_7));
      }
      make__util__target_extension_2_f_1((env).make__classify_target_2_4_p_0_env_0__Globals_5, &(env).make__classify_target_2_4_p_0_env_0__ModuleTargetType_10, Var_18, make__classify_target_2_4_p_0_3, &env);
      if (!((env).make__classify_target_2_4_p_0_env_0__cond_0))
      {
        MR_Word ModuleTargetType_56;

        (env).make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((env).make__classify_target_2_4_p_0_env_0__Suffix_7, &ModuleTargetType_56);
        if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
        {
          (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleTargetType_56));
          }
          make__classify_target_2_4_p_0_1(&env);
        }
        else
        {
          MR_String ModuleNameStr1_12;
          MR_String Var_20;
          MR_String Var_57;

          libs__globals__lookup_string_option_3_p_0((env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 594, &Var_57);
          (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, Var_57) == 0);
          if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
          {
            Var_20 = (MR_String) "lib";
            (env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_20, &ModuleNameStr1_12, (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
          }
          if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
          {
            (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_12;
            (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(1), &make_scalar_common_9[1]));
            make__classify_target_2_4_p_0_1(&env);
          }
          else
          {
            MR_String ModuleNameStr1_54;
            MR_String Var_23;
            MR_String Var_58;

            libs__globals__lookup_string_option_3_p_0((env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 593, &Var_58);
            (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, Var_58) == 0);
            if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
            {
              Var_23 = (MR_String) "lib";
              (env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_23, &ModuleNameStr1_54, (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
            }
            if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
            {
              (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_54;
              (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(1), &make_scalar_common_9[2]));
              make__classify_target_2_4_p_0_1(&env);
            }
            else
            {
              MR_String Var_59;

              libs__globals__lookup_string_option_3_p_0((env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 595, &Var_59);
              (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, Var_59) == 0);
              if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
              {
                MR_Word ExecutableType_13;
                MR_Word CompilationTarget_64;

                (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                libs__globals__get_target_2_p_0((env).make__classify_target_2_4_p_0_env_0__Globals_5, &CompilationTarget_64);
                ExecutableType_13 = ((&make_vector_common_10[4 + CompilationTarget_64]))->make__vector_common_type_10_0__vct_10_f_0;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (ExecutableType_13));
                }
                make__classify_target_2_4_p_0_1(&env);
              }
              else
              {
                MR_String ModuleNameStr1_50;
                MR_String Var_26;

                (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".beams") == 0);
                if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                {
                  Var_26 = (MR_String) "lib";
                  (env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_26, &ModuleNameStr1_50, (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                }
                if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                {
                  (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_50;
                  (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(1), &make_scalar_common_9[3]));
                  make__classify_target_2_4_p_0_1(&env);
                }
                else
                {
                  (env).make__classify_target_2_4_p_0_env_0__cond_1 = MR_FALSE;
                  {
                    MR_String Rest_14;

                    (env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &Rest_14, (env).make__classify_target_2_4_p_0_env_0__Suffix_7);
                    if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                    {
                      (env).make__classify_target_2_4_p_0_env_0__Var_30 = (MR_String) "s";
                      mercury__string__append_3_p_3(&(env).make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15, &(env).make__classify_target_2_4_p_0_env_0__Var_60, Rest_14, make__classify_target_2_4_p_0_6, &env);
                    }
                  }
                  mercury__string__append_3_p_3(&(env).make__classify_target_2_4_p_0_env_0__Suffix1_16, &(env).make__classify_target_2_4_p_0_env_0__Var_61, (env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__classify_target_2_4_p_0_7, &env);
                  if (!((env).make__classify_target_2_4_p_0_env_0__cond_1))
                  {
                    (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".check") == 0);
                    if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                    {
                      (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                      (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make_scalar_common_9[5]));
                      (env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                    }
                    else
                    {
                      (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".analyse") == 0);
                      if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                      {
                        (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                        (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make_scalar_common_9[6]));
                        (env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                      }
                      else
                      {
                        (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".clean") == 0);
                        if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                        {
                          (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                          (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make_scalar_common_9[7]));
                          (env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                        }
                        else
                        {
                          (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".realclean") == 0);
                          if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                          {
                            (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                            (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make_scalar_common_9[8]));
                            (env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_String ModuleNameStr1_42;
                            MR_String Var_39;

                            (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".install") == 0);
                            if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                            {
                              Var_39 = (MR_String) "lib";
                              (env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(Var_39, &ModuleNameStr1_42, (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                            }
                            if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                            {
                              (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = ModuleNameStr1_42;
                              (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make_scalar_common_9[9]));
                              (env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Word Var_41;

                              (env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".doc") == 0);
                              if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                              {
                                (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
                                Var_41 = (MR_Word) ((MR_Unsigned) 20U);
                                (env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) (MR_mkword(MR_mktag(2), &make_scalar_common_9[10]));
                                (env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
                              }
                            }
                          }
                        }
                      }
                    }
                    if ((env).make__classify_target_2_4_p_0_env_0__succeeded)
                      make__classify_target_2_4_p_0_1(&env);
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
  void * env_ptr_arg)
{
  {
    struct make__classify_target_3_p_0_2_env_0_s * env_ptr = (struct make__classify_target_3_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->make__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
    ((env_ptr)->make__classify_target_3_p_0_2_env_0__cont)((env_ptr)->make__classify_target_3_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
make__classify_target_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct make__classify_target_3_p_0_2_env_0_s env;

    (env).make__classify_target_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).make__classify_target_3_p_0_2_env_0__cont = cont;
    (env).make__classify_target_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      make__classify_target_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &(env).make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__classify_target_3_p_0_1, &env);
    }
  }
}

void MR_CALL 
make__classify_target_3_p_0(
  MR_Word Globals_4,
  MR_String FileName_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_6;
    MR_Word TargetType_7;
    MR_Word TargetFile_13;
    MR_Word TypeInfo_21_21;
    MR_Integer NameLength_8;
    MR_Integer DotLocn_9;
    MR_String ModuleNameStr0_10;
    MR_String Suffix_11;
    MR_Word TargetFiles_12;
    MR_Word Var_16;
    MR_Word Var_17;

    mercury__string__length_2_p_0(FileName_5, &NameLength_8);
    succeeded = make__search_backwards_for_dot_3_p_0(FileName_5, NameLength_8, &DotLocn_9);
    if (succeeded)
    {
      mercury__string__split_4_p_0(FileName_5, DotLocn_9, &ModuleNameStr0_10, &Suffix_11);
      TypeInfo_21_21 = (MR_Word) (&make_scalar_common_1[0]);
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__classify_target_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Globals_4));
        MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ModuleNameStr0_10));
        MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (Suffix_11));
      }
      mercury__solutions__solutions_2_p_1(TypeInfo_21_21, Var_16, &TargetFiles_12);
      succeeded = (TargetFiles_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TargetFile_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetFiles_12, (MR_Integer) 0))));
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetFiles_12, (MR_Integer) 1))));
        succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_13, (MR_Integer) 0))));
      TargetType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_13, (MR_Integer) 1))));
    }
    else
    {
      MR_String ModuleNameStr_14;

      succeeded = mercury__string__append_3_p_1((MR_String) "lib", &ModuleNameStr_14, FileName_5);
      if (succeeded)
      {
        TargetType_7 = (MR_Word) (MR_mkword(MR_mktag(2), &make_scalar_common_9[0]));
        parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr_14, &ModuleName_6);
      }
      else
      {
        MR_Word ExecutableType_15;
        MR_Word CompilationTarget_24;

        libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_24);
        ExecutableType_15 = ((&make_vector_common_10[0 + CompilationTarget_24]))->make__vector_common_type_10_0__vct_10_f_0;
        {
          TargetType_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TargetType_7, 0) = (MR_Box) ((MR_Unsigned) (ExecutableType_15));
        }
        parse_tree__file_names__file_name_to_module_name_2_p_0(FileName_5, &ModuleName_6);
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TargetType_7));
    }
  }
}

MR_bool MR_CALL 
make__search_backwards_for_dot_3_p_0(
  MR_String String_4,
  MR_Integer Index_5,
  MR_Integer * DotIndex_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CharIndex_7;
    MR_Char Char_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_prev_index_4_p_0(String_4, Index_5, &CharIndex_7, &Char_8);
    if (succeeded)
    {
      succeeded = (Char_8 == (MR_Char) 46);
      if (succeeded)
      {
        *DotIndex_6 = CharIndex_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer next_value_of_Index_5 = CharIndex_7;

        // direct tailcall eliminated
        ;
        Index_5 = next_value_of_Index_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
make__make_target_7_p_0(
  MR_Word Globals_8,
  MR_Word Target_9,
  MR_Word * Success_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_9, (MR_Integer) 0))));
    MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_9, (MR_Integer) 1))));
    MR_Word TrackFlags_15;
    MR_Word TrackFlagsSuccess_16;
    MR_Word STATE_VARIABLE_Info_27_27;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 647, &TrackFlags_15);
    switch (TrackFlags_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TrackFlagsSuccess_16 = (MR_Integer) 1;
          STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_22;
        }
        break;
      case (MR_Integer) 1:
        make__make_track_flags_files_7_p_0(Globals_8, ModuleName_13, &TrackFlagsSuccess_16, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
        break;
    }
    switch (TrackFlagsSuccess_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Success_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_27_27;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) TargetType_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleTargetType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetType_14, (MR_Integer) 0))));
              MR_Word TargetFile_18;
              MR_Word Var_34;

              {
                TargetFile_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TargetFile_18, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(MR_mktag(0), TargetFile_18, 1) = ((MR_Box) (ModuleTargetType_17));
              }
              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (TargetFile_18));
              }
              make__module_target__make_module_target_7_p_0(Globals_8, Var_34, Success_10, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgramTargetType_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TargetType_14, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Word LinkedTargetFile_20;

              {
                LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LinkedTargetFile_20, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(MR_mktag(0), LinkedTargetFile_20, 1) = (MR_Box) ((MR_Unsigned) (ProgramTargetType_19));
              }
              make__program_target__make_linked_target_7_p_0(Globals_8, LinkedTargetFile_20, Success_10, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MiscTargetType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TargetType_14, (MR_Integer) 0))));
              MR_Word Var_29;

              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (MiscTargetType_21));
              }
              make__program_target__make_misc_target_7_p_0(Globals_8, Var_29, Success_10, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_12;
    MR_Word conv1_STATE_VARIABLE_LastHash_26;
    MR_Word conv0_STATE_VARIABLE_Info_28;

    make__make_track_flags_files_2_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Success_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_LastHash_26, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Info_28);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_12));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_LastHash_26));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Info_28));
  }
}

void MR_CALL 
make__make_track_flags_files_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * Success_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word Success0_13;
    MR_Word Modules_14;
    MR_Word STATE_VARIABLE_Info_22_22;

    make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, ModuleName_9, &Success0_13, &Modules_14, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_22_22);
    switch (Success0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Success_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_22_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_27;
          MR_Box conv5__LastHash_17;
          MR_Box conv4_STATE_VARIABLE_Info_19;
          MR_Box conv3_STATE_VARIABLE_IO_21;

          Var_27 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_14);
          make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_last_hash_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Integer) 0, (MR_Word) (&make_scalar_common_1[17]), Globals_8, Var_27, Success_10, ((MR_Box) (&make_scalar_common_2[9])), &conv5__LastHash_17, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv4_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_21);
          *STATE_VARIABLE_Info_19 = ((MR_Word) (conv4_STATE_VARIABLE_Info_19));
        }
        break;
    }
  }
}

MR_String MR_CALL 
make__make_module_dep_file_extension_0_f_0(void)
{
  {
    return (MR_String) ".module_dep";
  }
}

void MR_CALL 
make__make_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word Imports_6)
{
  make__module_dep_file__write_module_dep_file_4_p_0(Globals_5, Imports_6);
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__IntroducedFrom__pred__make_process_compiler_args__315__1_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_10;
    MR_Word conv4_STATE_VARIABLE_Info_23;

    make__make_target_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Success_10, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_10));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    make__classify_target_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__IntroducedFrom__pred__make_process_compiler_args__341__1_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__2_2;

    make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_2;

    make__util__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
make__make_process_compiler_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    make__util__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
make__make_process_compiler_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__IntroducedFrom__pred__make_process_compiler_args__305__1_1_p_0(((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
make__make_process_compiler_args_7_p_0(
  MR_Word Globals_8,
  MR_Word DetectedGradeFlags_9,
  MR_Word Variables_10,
  MR_Word OptionArgs_11,
  MR_Word Targets0_12)
{
  {
    MR_bool succeeded;
    MR_Word Targets_15;
    MR_Word Continue0_18;
    MR_Word AbsTargets_22;

    if ((Targets0_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeMAIN_TARGET_14;

      make__options_file__lookup_main_target_5_p_0(Globals_8, Variables_10, &MaybeMAIN_TARGET_14);
      if ((MaybeMAIN_TARGET_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Targets_15 = (MR_Word) ((MR_Unsigned) 0U);
        Continue0_18 = (MR_Integer) 0;
      }
      else
      {
        Targets_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMAIN_TARGET_14, (MR_Integer) 0))));
        if ((Targets_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Continue0_18 = (MR_Integer) 0;
          mercury__io__write_string_3_p_0((MR_String) "** Error: no targets specified and \140MAIN_TARGET\' not defined.\n");
        }
        else
          Continue0_18 = (MR_Integer) 1;
      }
    }
    else
    {
      Continue0_18 = (MR_Integer) 1;
      Targets_15 = Targets0_12;
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make_scalar_common_1[10]), Targets_15, &AbsTargets_22);
    if ((AbsTargets_22 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (Continue0_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word KeepGoing_27;
            MR_Word ModuleIndexMap_28;
            MR_Word DepIndexMap_29;
            MR_Word DepStatusMap_30;
            MR_Word NonDependTargets_31;
            MR_Word ClassifiedTargets_32;
            MR_Integer AnalysisRepeat_34;
            MR_Word MakeInfo0_35;
            MR_Word Success_36;
            MR_Word Var_58;
            MR_Box Var_60;
            MR_Word Var_62;
            MR_Box Var_64;
            MR_Word Var_70;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_81;
            MR_Box conv7__MakeInfo_37;
            MR_Box conv6_STATE_VARIABLE_IO_84_84;

            libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 645, &KeepGoing_27);
            Var_58 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0), (MR_Word) (&make_scalar_common_1[11]));
            Var_60 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
            {
              ModuleIndexMap_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ModuleIndexMap_28, 0) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(0), ModuleIndexMap_28, 1) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(0), ModuleIndexMap_28, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_62 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0), (MR_Word) (&make_scalar_common_1[12]));
            Var_64 = mercury__version_array__empty_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
            {
              DepIndexMap_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DepIndexMap_29, 0) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(0), DepIndexMap_29, 1) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(0), DepIndexMap_29, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            DepStatusMap_30 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make__type_ctor_info_dependency_status_0), (MR_Word) (&make_scalar_common_1[13]));
            NonDependTargets_31 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make_scalar_common_1[14]), Targets_15);
            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&make_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (make__make_process_compiler_args_7_p_0_6));
              MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Globals_8));
            }
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make_scalar_common_1[0]), Var_70, NonDependTargets_31, &ClassifiedTargets_32);
            libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 353, &AnalysisRepeat_34);
            Var_72 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make_scalar_common_2[0]));
            Var_73 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make_scalar_common_1[1]));
            Var_74 = mercury__map__init_0_f_0((MR_Word) (&make_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            Var_75 = make__dependencies__init_cached_direct_imports_0_f_0();
            Var_76 = make__dependencies__init_cached_direct_imports_0_f_0();
            Var_77 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
            Var_78 = make__dependencies__init_cached_foreign_imports_0_f_0();
            Var_79 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
            Var_81 = mercury__set__list_to_set_1_f_0((MR_Word) (&make_scalar_common_1[0]), ClassifiedTargets_32);
            {
              MakeInfo0_35 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 1) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 2) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 3) = ((MR_Box) (DetectedGradeFlags_9));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 4) = ((MR_Box) (OptionArgs_11));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 5) = ((MR_Box) (Variables_10));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 6) = ((MR_Box) (ModuleIndexMap_28));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 7) = ((MR_Box) (DepIndexMap_29));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 8) = ((MR_Box) (DepStatusMap_30));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 9) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 10) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 11) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 12) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 13) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (KeepGoing_27)));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 14) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 15) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 16) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 17) = ((MR_Box) (AnalysisRepeat_34));
              MR_hl_field(MR_mktag(0), MakeInfo0_35, 18) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            make__util__foldl2_maybe_stop_at_error_9_p_0((MR_Word) (&make_scalar_common_1[0]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), KeepGoing_27, (MR_Word) (&make_scalar_common_1[15]), Globals_8, ClassifiedTargets_32, &Success_36, ((MR_Box) (MakeInfo0_35)), &conv7__MakeInfo_37, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_84_84);
            switch (Success_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
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
      MR_Box conv8_STATE_VARIABLE_IO_49_124;

      mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make_scalar_common_1[16]), AbsTargets_22, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_49_124);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
  }
}

static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____c_header_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____c_header_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____compilation_task_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____compilation_task_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____dependency_file_index_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____dependency_file_index_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____dependency_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____dependency_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____file_timestamps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____file_timestamps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____last_hash_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____last_hash_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____last_hash_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____linked_target_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____linked_target_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____make_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____make_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____make_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____make_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____make_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____make_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____misc_target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____misc_target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____module_compilation_task_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____module_compilation_task_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____module_index_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____module_index_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____module_target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____module_target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____rebuild_module_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____rebuild_module_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____target_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____target_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____target_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make____Unify____target_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make____Compare____target_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make____Compare____target_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module make.
