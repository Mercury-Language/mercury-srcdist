/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 462 "make.m"
struct make__classify_target_2_4_p_0_env_0_s {
#line 462 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__Globals_5;
#line 462 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 462 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix_7;
#line 462 "make.m"
  MR_Word * make__classify_target_2_4_p_0_env_0__HeadVar__4_4;
#line 462 "make.m"
  MR_Cont make__classify_target_2_4_p_0_env_0__cont;
#line 462 "make.m"
  void * make__classify_target_2_4_p_0_env_0__cont_env_ptr;
#line 465 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__succeeded;
#line 465 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleName_8;
#line 465 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__TargetType_9;
#line 465 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr_11;
#line 466 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_10;
#line 466 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_0;
#line 506 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_47;
#line 506 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_1;
#line 514 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix1_16;
#line 508 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15;
#line 508 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_30_30;
#line 508 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_31_31;
#line 508 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_60_60;
#line 513 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_61_61;
#line 462 "make.m"
};

#line 446 "make.m"
struct make__classify_target_3_p_0_2_env_0_s {
#line 446 "make.m"
  MR_Box * make__classify_target_3_p_0_2_env_0__wrapper_arg_1;
#line 446 "make.m"
  MR_Cont make__classify_target_3_p_0_2_env_0__cont;
#line 446 "make.m"
  void * make__classify_target_3_p_0_2_env_0__cont_env_ptr;
#line 446 "make.m"
  MR_Word make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4;
#line 446 "make.m"
};


#line 176 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0;

#line 179 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0;

#line 182 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 185 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0;

#line 188 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1;

#line 191 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2];

#line 194 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2];

#line 197 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2];

#line 200 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1];

#line 203 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0;

#line 206 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1];

#line 209 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1;

#line 212 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2];

#line 215 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2;

#line 218 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2];

#line 221 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_3;

#line 224 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1];

#line 227 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1];

#line 230 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1];

#line 233 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1];

#line 236 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_compilation_task_type_0[4];

#line 239 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4];

#line 242 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4];

#line 245 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0;

#line 248 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0;

#line 251 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3];

#line 254 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3];

#line 257 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_dependency_file_index_map_0_0;

#line 260 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1];

#line 263 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1];

#line 266 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1];

#line 269 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1];

#line 272 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0;

#line 275 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1;

#line 278 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2;

#line 281 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3;

#line 284 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4];

#line 287 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4];

#line 290 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4];

#line 293 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 296 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 299 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0;

#line 302 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2];

#line 305 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2];

#line 308 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_last_hash_0_0;

#line 311 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1];

#line 314 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1];

#line 317 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1];

#line 320 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1];

#line 323 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2];

#line 326 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2];

#line 329 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_linked_target_file_0_0;

#line 332 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1];

#line 335 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1];

#line 338 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1];

#line 341 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1];

#line 344 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1];

#line 347 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_0;

#line 350 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1];

#line 353 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_1;

#line 356 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1];

#line 359 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_2;

#line 362 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1];

#line 365 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1];

#line 368 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1];

#line 371 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_error_0[3];

#line 374 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3];

#line 377 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3];

#line 380 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 383 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 386 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 389 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

#line 392 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

#line 395 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0;

#line 398 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 401 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 404 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 407 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 410 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 413 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 416 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 419 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0;

#line 422 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20];

#line 425 "make.c"
static const MR_ConstString make__make__field_names_make_info_0_0[20];

#line 428 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0;

#line 431 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1];

#line 434 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1];

#line 437 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1];

#line 440 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1];

#line 443 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_0;

#line 446 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_1;

#line 449 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1];

#line 452 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_2;

#line 455 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_3;

#line 458 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_4;

#line 461 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_5;

#line 464 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_6;

#line 467 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6];

#line 470 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1];

#line 473 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_misc_target_type_0[2];

#line 476 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7];

#line 479 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7];

#line 482 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0;

#line 485 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1;

#line 488 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2;

#line 491 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3;

#line 494 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4;

#line 497 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5;

#line 500 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6;

#line 503 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7;

#line 506 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_module_compilation_task_type_0[8];

#line 509 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_module_compilation_task_type_0[8];

#line 512 "make.c"
static const MR_Integer make__make__functor_number_map_module_compilation_task_type_0[8];

#line 515 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0;

#line 518 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 521 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3];

#line 524 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3];

#line 527 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_index_map_0_0;

#line 530 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1];

#line 533 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1];

#line 536 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1];

#line 539 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1];

#line 542 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_0;

#line 545 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_1;

#line 548 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_2;

#line 551 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_3;

#line 554 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_4;

#line 557 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_5;

#line 560 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_6;

#line 563 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_7;

#line 566 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_8;

#line 569 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1];

#line 572 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9;

#line 575 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10;

#line 578 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11;

#line 581 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12;

#line 584 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13;

#line 587 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14;

#line 590 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15;

#line 593 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16;

#line 596 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1];

#line 599 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17;

#line 602 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2];

#line 605 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18;

#line 608 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2];

#line 611 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19;

#line 614 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20;

#line 617 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_0[17];

#line 620 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1];

#line 623 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1];

#line 626 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[2];

#line 629 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_target_type_0[4];

#line 632 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_target_type_0[21];

#line 635 "make.c"
static const MR_Integer make__make__functor_number_map_module_target_type_0[21];

#line 638 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0;

#line 641 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1;

#line 644 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2];

#line 647 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2];

#line 650 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2];

#line 653 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2];

#line 656 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2];

#line 659 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_file_0_0;

#line 662 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1];

#line 665 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1];

#line 668 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1];

#line 671 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1];

#line 674 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1];

#line 677 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_0;

#line 680 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1];

#line 683 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_1;

#line 686 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1];

#line 689 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_2;

#line 692 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1];

#line 695 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1];

#line 698 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1];

#line 701 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_type_0[3];

#line 704 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3];

#line 707 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3];

#line 710 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 713 "make.c"
  MR_Box make__wrapper_arg_1,
#line 715 "make.c"
  MR_Box make__wrapper_arg_2);

#line 718 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 721 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 723 "make.c"
  MR_Box make__wrapper_arg_2,
#line 725 "make.c"
  MR_Box make__wrapper_arg_3);

#line 728 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 731 "make.c"
  MR_Box make__wrapper_arg_1,
#line 733 "make.c"
  MR_Box make__wrapper_arg_2);

#line 736 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 739 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 741 "make.c"
  MR_Box make__wrapper_arg_2,
#line 743 "make.c"
  MR_Box make__wrapper_arg_3);

#line 746 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 749 "make.c"
  MR_Box make__wrapper_arg_1,
#line 751 "make.c"
  MR_Box make__wrapper_arg_2);

#line 754 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 757 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 759 "make.c"
  MR_Box make__wrapper_arg_2,
#line 761 "make.c"
  MR_Box make__wrapper_arg_3);

#line 764 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 767 "make.c"
  MR_Box make__wrapper_arg_1,
#line 769 "make.c"
  MR_Box make__wrapper_arg_2);

#line 772 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 775 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 777 "make.c"
  MR_Box make__wrapper_arg_2,
#line 779 "make.c"
  MR_Box make__wrapper_arg_3);

#line 782 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 785 "make.c"
  MR_Box make__wrapper_arg_1,
#line 787 "make.c"
  MR_Box make__wrapper_arg_2);

#line 790 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 793 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 795 "make.c"
  MR_Box make__wrapper_arg_2,
#line 797 "make.c"
  MR_Box make__wrapper_arg_3);

#line 800 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 803 "make.c"
  MR_Box make__wrapper_arg_1,
#line 805 "make.c"
  MR_Box make__wrapper_arg_2);

#line 808 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 811 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 813 "make.c"
  MR_Box make__wrapper_arg_2,
#line 815 "make.c"
  MR_Box make__wrapper_arg_3);

#line 818 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 821 "make.c"
  MR_Box make__wrapper_arg_1,
#line 823 "make.c"
  MR_Box make__wrapper_arg_2);

#line 826 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 829 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 831 "make.c"
  MR_Box make__wrapper_arg_2,
#line 833 "make.c"
  MR_Box make__wrapper_arg_3);

#line 836 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 839 "make.c"
  MR_Box make__wrapper_arg_1,
#line 841 "make.c"
  MR_Box make__wrapper_arg_2);

#line 844 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 847 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 849 "make.c"
  MR_Box make__wrapper_arg_2,
#line 851 "make.c"
  MR_Box make__wrapper_arg_3);

#line 854 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 857 "make.c"
  MR_Box make__wrapper_arg_1,
#line 859 "make.c"
  MR_Box make__wrapper_arg_2);

#line 862 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 865 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 867 "make.c"
  MR_Box make__wrapper_arg_2,
#line 869 "make.c"
  MR_Box make__wrapper_arg_3);

#line 872 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 875 "make.c"
  MR_Box make__wrapper_arg_1,
#line 877 "make.c"
  MR_Box make__wrapper_arg_2);

#line 880 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 883 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 885 "make.c"
  MR_Box make__wrapper_arg_2,
#line 887 "make.c"
  MR_Box make__wrapper_arg_3);

#line 890 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 893 "make.c"
  MR_Box make__wrapper_arg_1,
#line 895 "make.c"
  MR_Box make__wrapper_arg_2);

#line 898 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 901 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 903 "make.c"
  MR_Box make__wrapper_arg_2,
#line 905 "make.c"
  MR_Box make__wrapper_arg_3);

#line 908 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 911 "make.c"
  MR_Box make__wrapper_arg_1,
#line 913 "make.c"
  MR_Box make__wrapper_arg_2);

#line 916 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 919 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 921 "make.c"
  MR_Box make__wrapper_arg_2,
#line 923 "make.c"
  MR_Box make__wrapper_arg_3);

#line 926 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 929 "make.c"
  MR_Box make__wrapper_arg_1,
#line 931 "make.c"
  MR_Box make__wrapper_arg_2);

#line 934 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 937 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 939 "make.c"
  MR_Box make__wrapper_arg_2,
#line 941 "make.c"
  MR_Box make__wrapper_arg_3);

#line 944 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 947 "make.c"
  MR_Box make__wrapper_arg_1,
#line 949 "make.c"
  MR_Box make__wrapper_arg_2);

#line 952 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 955 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 957 "make.c"
  MR_Box make__wrapper_arg_2,
#line 959 "make.c"
  MR_Box make__wrapper_arg_3);

#line 962 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 965 "make.c"
  MR_Box make__wrapper_arg_1,
#line 967 "make.c"
  MR_Box make__wrapper_arg_2);

#line 970 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 973 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 975 "make.c"
  MR_Box make__wrapper_arg_2,
#line 977 "make.c"
  MR_Box make__wrapper_arg_3);

#line 980 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 983 "make.c"
  MR_Box make__wrapper_arg_1,
#line 985 "make.c"
  MR_Box make__wrapper_arg_2);

#line 988 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 991 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 993 "make.c"
  MR_Box make__wrapper_arg_2,
#line 995 "make.c"
  MR_Box make__wrapper_arg_3);

#line 348 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__348__1_1_p_0(
#line 348 "make.m"
  MR_String make__LambdaHeadVar__1_68);

#line 322 "make.m"
static void MR_CALL 
make__IntroducedFrom__pred__make_process_args__322__1_3_p_0(
#line 322 "make.m"
  MR_String make__LambdaHeadVar__1_52);

#line 312 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__312__1_1_p_0(
#line 312 "make.m"
  MR_String make__LambdaHeadVar__1_46);

#line 685 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 685 "make.m"
  MR_Box make__closure_arg,
#line 685 "make.m"
  MR_Box make__wrapper_arg_1);

#line 614 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 614 "make.m"
  MR_Box make__closure_arg,
#line 614 "make.m"
  MR_Box make__wrapper_arg_1,
#line 614 "make.m"
  MR_Box make__wrapper_arg_2,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 614 "make.m"
  MR_Box make__wrapper_arg_4,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 614 "make.m"
  MR_Box make__wrapper_arg_6,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 614 "make.m"
  MR_Box make__wrapper_arg_8,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_9);

#line 467 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 467 "make.m"
  void * make__env_ptr_arg);

#line 473 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 473 "make.m"
  void * make__env_ptr_arg);

#line 465 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 465 "make.m"
  void * make__env_ptr_arg);

#line 516 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 516 "make.m"
  void * make__env_ptr_arg);

#line 514 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 514 "make.m"
  void * make__env_ptr_arg);

#line 524 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 524 "make.m"
  void * make__env_ptr_arg);

#line 508 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 508 "make.m"
  void * make__env_ptr_arg);

#line 513 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 513 "make.m"
  void * make__env_ptr_arg);

#line 446 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 446 "make.m"
  void * make__env_ptr_arg);

#line 446 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 446 "make.m"
  MR_Box make__closure_arg,
#line 446 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 446 "make.m"
  MR_Cont make__cont,
#line 446 "make.m"
  void * make__cont_env_ptr);

#line 322 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_8(
#line 322 "make.m"
  MR_Box make__closure_arg,
#line 322 "make.m"
  MR_Box make__wrapper_arg_1,
#line 322 "make.m"
  MR_Box make__wrapper_arg_2,
#line 322 "make.m"
  MR_Box * make__wrapper_arg_3);

#line 384 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_7(
#line 384 "make.m"
  MR_Box make__closure_arg,
#line 384 "make.m"
  MR_Box make__wrapper_arg_1,
#line 384 "make.m"
  MR_Box make__wrapper_arg_2,
#line 384 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 384 "make.m"
  MR_Box make__wrapper_arg_4,
#line 384 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 384 "make.m"
  MR_Box make__wrapper_arg_6,
#line 384 "make.m"
  MR_Box * make__wrapper_arg_7);

#line 352 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_6(
#line 352 "make.m"
  MR_Box make__closure_arg,
#line 352 "make.m"
  MR_Box make__wrapper_arg_1,
#line 352 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 346 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_5(
#line 346 "make.m"
  MR_Box make__closure_arg,
#line 346 "make.m"
  MR_Box make__wrapper_arg_1);

#line 341 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_4(
#line 341 "make.m"
  MR_Box make__closure_arg,
#line 341 "make.m"
  MR_Box make__wrapper_arg_1,
#line 341 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 339 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_3(
#line 339 "make.m"
  MR_Box make__closure_arg,
#line 339 "make.m"
  MR_Box make__wrapper_arg_1,
#line 339 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 336 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_2(
#line 336 "make.m"
  MR_Box make__closure_arg,
#line 336 "make.m"
  MR_Box make__wrapper_arg_1,
#line 336 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 312 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_1(
#line 312 "make.m"
  MR_Box make__closure_arg,
#line 312 "make.m"
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


#line 579 "make.m"
/* sealed */ struct make__vector_common_type_9_0_s {
#line 579 "make.m"
  const MR_Word make__vector_common_type_9_0__vct_9_f_0;
#line 579 "make.m"
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
    ((MR_Box) (make__make_process_args_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make_scalar_common_4[0])),
    ((MR_Box) (make__make_process_args_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_args_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_args_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_args_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&make_scalar_common_6[0])),
    ((MR_Box) (make__make_process_args_7_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&make_scalar_common_5[1])),
    ((MR_Box) (make__make_process_args_7_p_0_8)),
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



#line 1599 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 1608 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 1616 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1625 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  (MR_Integer) 0
};

#line 1631 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  (MR_Integer) 1
};

#line 1637 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1643 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1649 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1655 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_c_header_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1672 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_compilation_task_type_0
};

#line 1677 "make.c"
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
  NULL
};

#line 1692 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 1697 "make.c"
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
  NULL
};

#line 1712 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 1718 "make.c"
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
  NULL
};

#line 1733 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1739 "make.c"
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
  NULL
};

#line 1754 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_0
};

#line 1759 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1764 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_2
};

#line 1769 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_3
};

#line 1774 "make.c"
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

#line 1798 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4] = {
  &make__make__du_functor_desc_compilation_task_type_0_3,
  &make__make__du_functor_desc_compilation_task_type_0_2,
  &make__make__du_functor_desc_compilation_task_type_0_0,
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1806 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1814 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_compilation_task_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1831 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 1840 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

#line 1848 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1855 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

#line 1862 "make.c"
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
  NULL
};

#line 1877 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1882 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_dependency_file_index_map_0_0
  }
};

#line 1891 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1896 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1] = {
  (MR_Integer) 0
};

#line 1901 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_dependency_file_index_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1918 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  (MR_Integer) 0
};

#line 1924 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  (MR_Integer) 1
};

#line 1930 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  (MR_Integer) 2
};

#line 1936 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  (MR_Integer) 3
};

#line 1942 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_2,
  &make__make__enum_functor_desc_dependency_status_0_3
};

#line 1950 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_3,
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_2
};

#line 1958 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1966 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_dependency_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1983 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1992 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

#line 2001 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_file_timestamps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2018 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2026 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2032 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

#line 2038 "make.c"
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
  NULL
};

#line 2053 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2058 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_last_hash_0_0
  }
};

#line 2067 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2072 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1] = {
  (MR_Integer) 0
};

#line 2077 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_last_hash_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2094 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 2100 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2] = {
  (MR_String) "linked_tf_name",
  (MR_String) "linked_tf_type"
};

#line 2106 "make.c"
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
  NULL
};

#line 2121 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2126 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_linked_target_file_0_0
  }
};

#line 2135 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2140 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1] = {
  (MR_Integer) 0
};

#line 2145 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_linked_target_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2162 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
};

#line 2167 "make.c"
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
  NULL
};

#line 2182 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2187 "make.c"
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
  NULL
};

#line 2202 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2207 "make.c"
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
  NULL
};

#line 2222 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1] = {
  &make__make__du_functor_desc_make_error_0_0
};

#line 2227 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1] = {
  &make__make__du_functor_desc_make_error_0_1
};

#line 2232 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1] = {
  &make__make__du_functor_desc_make_error_0_2
};

#line 2237 "make.c"
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

#line 2256 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3] = {
  &make__make__du_functor_desc_make_error_0_1,
  &make__make__du_functor_desc_make_error_0_2,
  &make__make__du_functor_desc_make_error_0_0
};

#line 2263 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2270 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_make_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2287 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2295 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2304 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2313 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2322 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

#line 2331 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

#line 2340 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2348 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2357 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2366 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2374 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2382 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 2391 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0
  }
};

#line 2399 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__util__make__util__type_ctor_info_job_ctl_0
  }
};

#line 2407 "make.c"
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

#line 2431 "make.c"
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

#line 2455 "make.c"
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
  NULL
};

#line 2470 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2475 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_info_0_0
  }
};

#line 2484 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2489 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1] = {
  (MR_Integer) 0
};

#line 2494 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_make_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2511 "make.c"
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
  NULL
};

#line 2526 "make.c"
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
  NULL
};

#line 2541 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 2546 "make.c"
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
  NULL
};

#line 2561 "make.c"
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
  NULL
};

#line 2576 "make.c"
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
  NULL
};

#line 2591 "make.c"
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
  NULL
};

#line 2606 "make.c"
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
  NULL
};

#line 2621 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6] = {
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_1,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_6
};

#line 2631 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1] = {
  &make__make__du_functor_desc_misc_target_type_0_2
};

#line 2636 "make.c"
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

#line 2650 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7] = {
  &make__make__du_functor_desc_misc_target_type_0_2,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_6,
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_1
};

#line 2661 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 2672 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_misc_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2689 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  (MR_Integer) 0
};

#line 2695 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_short_interface",
  (MR_Integer) 1
};

#line 2701 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_interface",
  (MR_Integer) 2
};

#line 2707 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_private_interface",
  (MR_Integer) 3
};

#line 2713 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_optimization_interface",
  (MR_Integer) 4
};

#line 2719 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  (MR_Integer) 5
};

#line 2725 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  (MR_Integer) 6
};

#line 2731 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  (MR_Integer) 7
};

#line 2737 "make.c"
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

#line 2749 "make.c"
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

#line 2761 "make.c"
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

#line 2773 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_compilation_task_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2790 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2799 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2807 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2814 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

#line 2821 "make.c"
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
  NULL
};

#line 2836 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2841 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_index_map_0_0
  }
};

#line 2850 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2855 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1] = {
  (MR_Integer) 0
};

#line 2860 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_index_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 2877 "make.c"
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
  NULL
};

#line 2892 "make.c"
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
  NULL
};

#line 2907 "make.c"
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
  NULL
};

#line 2922 "make.c"
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
  NULL
};

#line 2937 "make.c"
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
  NULL
};

#line 2952 "make.c"
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
  NULL
};

#line 2967 "make.c"
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
  NULL
};

#line 2982 "make.c"
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
  NULL
};

#line 2997 "make.c"
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
  NULL
};

#line 3012 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_c_header_type_0
};

#line 3017 "make.c"
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
  NULL
};

#line 3032 "make.c"
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
  NULL
};

#line 3047 "make.c"
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
  NULL
};

#line 3062 "make.c"
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
  NULL
};

#line 3077 "make.c"
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
  NULL
};

#line 3092 "make.c"
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
  NULL
};

#line 3107 "make.c"
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
  NULL
};

#line 3122 "make.c"
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
  NULL
};

#line 3137 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 3142 "make.c"
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
  NULL
};

#line 3157 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3163 "make.c"
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
  NULL
};

#line 3178 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3184 "make.c"
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
  NULL
};

#line 3199 "make.c"
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
  NULL
};

#line 3214 "make.c"
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

#line 3235 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1] = {
  &make__make__du_functor_desc_module_target_type_0_9
};

#line 3240 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1] = {
  &make__make__du_functor_desc_module_target_type_0_17
};

#line 3245 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[2] = {
  &make__make__du_functor_desc_module_target_type_0_18,
  &make__make__du_functor_desc_module_target_type_0_19
};

#line 3251 "make.c"
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

#line 3275 "make.c"
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

#line 3300 "make.c"
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

#line 3325 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 3342 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  (MR_Integer) 0
};

#line 3348 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  (MR_Integer) 1
};

#line 3354 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_0,
  &make__make__enum_functor_desc_rebuild_module_deps_0_1
};

#line 3360 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_1,
  &make__make__enum_functor_desc_rebuild_module_deps_0_0
};

#line 3366 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3372 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_rebuild_module_deps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 3389 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3395 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

#line 3401 "make.c"
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
  NULL
};

#line 3416 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3421 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_file_0_0
  }
};

#line 3430 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3435 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1] = {
  (MR_Integer) 0
};

#line 3440 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_target_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 3457 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3462 "make.c"
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
  NULL
};

#line 3477 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 3482 "make.c"
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
  NULL
};

#line 3497 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_misc_target_type_0
};

#line 3502 "make.c"
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
  NULL
};

#line 3517 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1] = {
  &make__make__du_functor_desc_target_type_0_0
};

#line 3522 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1] = {
  &make__make__du_functor_desc_target_type_0_1
};

#line 3527 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1] = {
  &make__make__du_functor_desc_target_type_0_2
};

#line 3532 "make.c"
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

#line 3551 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3] = {
  &make__make__du_functor_desc_target_type_0_1,
  &make__make__du_functor_desc_target_type_0_2,
  &make__make__du_functor_desc_target_type_0_0
};

#line 3558 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3565 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 3582 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 3585 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3587 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3589 "make.c"
{
#line 3591 "make.c"
  {
#line 3593 "make.c"
    MR_bool make__succeeded;

#line 3596 "make.c"
    {
#line 3598 "make.c"
      make__succeeded = make____Unify____c_header_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3601 "make.c"
    return make__succeeded;
#line 3603 "make.c"
  }
#line 3605 "make.c"
}

#line 3608 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 3611 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3613 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3615 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3617 "make.c"
{
#line 3619 "make.c"
  {
#line 3621 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3624 "make.c"
    {
#line 3626 "make.c"
      make____Compare____c_header_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3629 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3631 "make.c"
  }
#line 3633 "make.c"
}

#line 3636 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 3639 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3641 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3643 "make.c"
{
#line 3645 "make.c"
  {
#line 3647 "make.c"
    MR_bool make__succeeded;

#line 3650 "make.c"
    {
#line 3652 "make.c"
      make__succeeded = make____Unify____compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3655 "make.c"
    return make__succeeded;
#line 3657 "make.c"
  }
#line 3659 "make.c"
}

#line 3662 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 3665 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3667 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3669 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3671 "make.c"
{
#line 3673 "make.c"
  {
#line 3675 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3678 "make.c"
    {
#line 3680 "make.c"
      make____Compare____compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3683 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3685 "make.c"
  }
#line 3687 "make.c"
}

#line 3690 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 3693 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3695 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3697 "make.c"
{
#line 3699 "make.c"
  {
#line 3701 "make.c"
    MR_bool make__succeeded;

#line 3704 "make.c"
    {
#line 3706 "make.c"
      make__succeeded = make____Unify____dependency_file_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3709 "make.c"
    return make__succeeded;
#line 3711 "make.c"
  }
#line 3713 "make.c"
}

#line 3716 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 3719 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3721 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3723 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3725 "make.c"
{
#line 3727 "make.c"
  {
#line 3729 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3732 "make.c"
    {
#line 3734 "make.c"
      make____Compare____dependency_file_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3737 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3739 "make.c"
  }
#line 3741 "make.c"
}

#line 3744 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 3747 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3749 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3751 "make.c"
{
#line 3753 "make.c"
  {
#line 3755 "make.c"
    MR_bool make__succeeded;

#line 3758 "make.c"
    {
#line 3760 "make.c"
      make__succeeded = make____Unify____dependency_status_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3763 "make.c"
    return make__succeeded;
#line 3765 "make.c"
  }
#line 3767 "make.c"
}

#line 3770 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 3773 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3775 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3777 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3779 "make.c"
{
#line 3781 "make.c"
  {
#line 3783 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3786 "make.c"
    {
#line 3788 "make.c"
      make____Compare____dependency_status_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3791 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3793 "make.c"
  }
#line 3795 "make.c"
}

#line 3798 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 3801 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3803 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3805 "make.c"
{
#line 3807 "make.c"
  {
#line 3809 "make.c"
    MR_bool make__succeeded;

#line 3812 "make.c"
    {
#line 3814 "make.c"
      make__succeeded = make____Unify____file_timestamps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3817 "make.c"
    return make__succeeded;
#line 3819 "make.c"
  }
#line 3821 "make.c"
}

#line 3824 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 3827 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3829 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3831 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3833 "make.c"
{
#line 3835 "make.c"
  {
#line 3837 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3840 "make.c"
    {
#line 3842 "make.c"
      make____Compare____file_timestamps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3845 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3847 "make.c"
  }
#line 3849 "make.c"
}

#line 3852 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 3855 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3857 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3859 "make.c"
{
#line 3861 "make.c"
  {
#line 3863 "make.c"
    MR_bool make__succeeded;

#line 3866 "make.c"
    {
#line 3868 "make.c"
      make__succeeded = make____Unify____last_hash_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3871 "make.c"
    return make__succeeded;
#line 3873 "make.c"
  }
#line 3875 "make.c"
}

#line 3878 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 3881 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3883 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3885 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3887 "make.c"
{
#line 3889 "make.c"
  {
#line 3891 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3894 "make.c"
    {
#line 3896 "make.c"
      make____Compare____last_hash_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3899 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3901 "make.c"
  }
#line 3903 "make.c"
}

#line 3906 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 3909 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3911 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3913 "make.c"
{
#line 3915 "make.c"
  {
#line 3917 "make.c"
    MR_bool make__succeeded;

#line 3920 "make.c"
    {
#line 3922 "make.c"
      make__succeeded = make____Unify____linked_target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3925 "make.c"
    return make__succeeded;
#line 3927 "make.c"
  }
#line 3929 "make.c"
}

#line 3932 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 3935 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3937 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3939 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3941 "make.c"
{
#line 3943 "make.c"
  {
#line 3945 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3948 "make.c"
    {
#line 3950 "make.c"
      make____Compare____linked_target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3953 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3955 "make.c"
  }
#line 3957 "make.c"
}

#line 3960 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 3963 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3965 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3967 "make.c"
{
#line 3969 "make.c"
  {
#line 3971 "make.c"
    MR_bool make__succeeded;

#line 3974 "make.c"
    {
#line 3976 "make.c"
      make__succeeded = make____Unify____make_error_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3979 "make.c"
    return make__succeeded;
#line 3981 "make.c"
  }
#line 3983 "make.c"
}

#line 3986 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 3989 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3991 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3993 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3995 "make.c"
{
#line 3997 "make.c"
  {
#line 3999 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4002 "make.c"
    {
#line 4004 "make.c"
      make____Compare____make_error_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4007 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4009 "make.c"
  }
#line 4011 "make.c"
}

#line 4014 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 4017 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4019 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4021 "make.c"
{
#line 4023 "make.c"
  {
#line 4025 "make.c"
    MR_bool make__succeeded;

#line 4028 "make.c"
    {
#line 4030 "make.c"
      make__succeeded = make____Unify____make_info_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4033 "make.c"
    return make__succeeded;
#line 4035 "make.c"
  }
#line 4037 "make.c"
}

#line 4040 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 4043 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4045 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4047 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4049 "make.c"
{
#line 4051 "make.c"
  {
#line 4053 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4056 "make.c"
    {
#line 4058 "make.c"
      make____Compare____make_info_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4061 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4063 "make.c"
  }
#line 4065 "make.c"
}

#line 4068 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 4071 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4073 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4075 "make.c"
{
#line 4077 "make.c"
  {
#line 4079 "make.c"
    MR_bool make__succeeded;

#line 4082 "make.c"
    {
#line 4084 "make.c"
      make__succeeded = make____Unify____misc_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4087 "make.c"
    return make__succeeded;
#line 4089 "make.c"
  }
#line 4091 "make.c"
}

#line 4094 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 4097 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4099 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4101 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4103 "make.c"
{
#line 4105 "make.c"
  {
#line 4107 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4110 "make.c"
    {
#line 4112 "make.c"
      make____Compare____misc_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4115 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4117 "make.c"
  }
#line 4119 "make.c"
}

#line 4122 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 4125 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4127 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4129 "make.c"
{
#line 4131 "make.c"
  {
#line 4133 "make.c"
    MR_bool make__succeeded;

#line 4136 "make.c"
    {
#line 4138 "make.c"
      make__succeeded = make____Unify____module_compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4141 "make.c"
    return make__succeeded;
#line 4143 "make.c"
  }
#line 4145 "make.c"
}

#line 4148 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 4151 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4153 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4155 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4157 "make.c"
{
#line 4159 "make.c"
  {
#line 4161 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4164 "make.c"
    {
#line 4166 "make.c"
      make____Compare____module_compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4169 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4171 "make.c"
  }
#line 4173 "make.c"
}

#line 4176 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 4179 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4181 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4183 "make.c"
{
#line 4185 "make.c"
  {
#line 4187 "make.c"
    MR_bool make__succeeded;

#line 4190 "make.c"
    {
#line 4192 "make.c"
      make__succeeded = make____Unify____module_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4195 "make.c"
    return make__succeeded;
#line 4197 "make.c"
  }
#line 4199 "make.c"
}

#line 4202 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 4205 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4207 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4209 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4211 "make.c"
{
#line 4213 "make.c"
  {
#line 4215 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4218 "make.c"
    {
#line 4220 "make.c"
      make____Compare____module_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4223 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4225 "make.c"
  }
#line 4227 "make.c"
}

#line 4230 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 4233 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4235 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4237 "make.c"
{
#line 4239 "make.c"
  {
#line 4241 "make.c"
    MR_bool make__succeeded;

#line 4244 "make.c"
    {
#line 4246 "make.c"
      make__succeeded = make____Unify____module_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4249 "make.c"
    return make__succeeded;
#line 4251 "make.c"
  }
#line 4253 "make.c"
}

#line 4256 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 4259 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4261 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4263 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4265 "make.c"
{
#line 4267 "make.c"
  {
#line 4269 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4272 "make.c"
    {
#line 4274 "make.c"
      make____Compare____module_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4277 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4279 "make.c"
  }
#line 4281 "make.c"
}

#line 4284 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 4287 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4289 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4291 "make.c"
{
#line 4293 "make.c"
  {
#line 4295 "make.c"
    MR_bool make__succeeded;

#line 4298 "make.c"
    {
#line 4300 "make.c"
      make__succeeded = make____Unify____rebuild_module_deps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4303 "make.c"
    return make__succeeded;
#line 4305 "make.c"
  }
#line 4307 "make.c"
}

#line 4310 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 4313 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4315 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4317 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4319 "make.c"
{
#line 4321 "make.c"
  {
#line 4323 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4326 "make.c"
    {
#line 4328 "make.c"
      make____Compare____rebuild_module_deps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4331 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4333 "make.c"
  }
#line 4335 "make.c"
}

#line 4338 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 4341 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4343 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4345 "make.c"
{
#line 4347 "make.c"
  {
#line 4349 "make.c"
    MR_bool make__succeeded;

#line 4352 "make.c"
    {
#line 4354 "make.c"
      make__succeeded = make____Unify____target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4357 "make.c"
    return make__succeeded;
#line 4359 "make.c"
  }
#line 4361 "make.c"
}

#line 4364 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 4367 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4369 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4371 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4373 "make.c"
{
#line 4375 "make.c"
  {
#line 4377 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4380 "make.c"
    {
#line 4382 "make.c"
      make____Compare____target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4385 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4387 "make.c"
  }
#line 4389 "make.c"
}

#line 4392 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 4395 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4397 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4399 "make.c"
{
#line 4401 "make.c"
  {
#line 4403 "make.c"
    MR_bool make__succeeded;

#line 4406 "make.c"
    {
#line 4408 "make.c"
      make__succeeded = make____Unify____target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4411 "make.c"
    return make__succeeded;
#line 4413 "make.c"
  }
#line 4415 "make.c"
}

#line 4418 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 4421 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4423 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4425 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4427 "make.c"
{
#line 4429 "make.c"
  {
#line 4431 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4434 "make.c"
    {
#line 4436 "make.c"
      make____Compare____target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4439 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4441 "make.c"
  }
#line 4443 "make.c"
}

#line 348 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__348__1_1_p_0(
#line 348 "make.m"
  MR_String make__LambdaHeadVar__1_68)
#line 348 "make.m"
{
#line 348 "make.m"
  {
#line 348 "make.m"
    MR_bool make__succeeded;

#line 348 "make.m"
    {
#line 348 "make.m"
      make__succeeded = mercury__string__suffix_2_p_0(make__LambdaHeadVar__1_68, (MR_String) ".depend");
    }
#line 348 "make.m"
    make__succeeded = !(make__succeeded);
#line 348 "make.m"
    return make__succeeded;
#line 348 "make.m"
  }
#line 348 "make.m"
}

#line 322 "make.m"
static void MR_CALL 
make__IntroducedFrom__pred__make_process_args__322__1_3_p_0(
#line 322 "make.m"
  MR_String make__LambdaHeadVar__1_52)
#line 322 "make.m"
{
#line 322 "make.m"
  {
#line 322 "make.m"
    MR_bool make__succeeded;

#line 324 "make.m"
    {
#line 324 "make.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(make__LambdaHeadVar__1_52, (MR_String) "Make target must not contain any directory component.");
    }
#line 322 "make.m"
  }
#line 322 "make.m"
}

#line 312 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__312__1_1_p_0(
#line 312 "make.m"
  MR_String make__LambdaHeadVar__1_46)
#line 312 "make.m"
{
#line 312 "make.m"
  {
#line 312 "make.m"
    MR_bool make__succeeded;
#line 312 "make.m"
    MR_Char make__V_47_47;

#line 314 "make.m"
    {
#line 314 "make.m"
      make__V_47_47 = mercury__dir__directory_separator_0_f_0();
    }
#line 314 "make.m"
    {
#line 314 "make.m"
      make__succeeded = mercury__string__contains_char_2_p_0(make__LambdaHeadVar__1_46, make__V_47_47);
    }
#line 312 "make.m"
    return make__succeeded;
#line 312 "make.m"
  }
#line 312 "make.m"
}

#line 433 "make.m"
void MR_CALL 
make____Compare____target_type_0_0(
#line 433 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 433 "make.m"
  MR_Word make__HeadVar__2_2,
#line 433 "make.m"
  MR_Word make__HeadVar__3_3)
#line 433 "make.m"
{
#line 433 "make.m"
  {
#line 433 "make.m"
    MR_bool make__succeeded;
#line 433 "make.m"
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
#line 433 "make.m"
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

#line 433 "make.m"
    make__succeeded = (make__CastX_22 == make__CastY_23);
#line 433 "make.m"
    if (make__succeeded)
#line 4549 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 433 "make.m"
    else
#line 433 "make.m"
#line 433 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
#line 433 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 433 "make.m"
        case (MR_Integer) 0:
#line 433 "make.m"
          {
#line 433 "make.m"
            MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

#line 433 "make.m"
#line 433 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 433 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 433 "make.m"
              case (MR_Integer) 0:
#line 433 "make.m"
                {
#line 433 "make.m"
                  MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));

#line 433 "make.m"
                  {
#line 433 "make.m"
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
                  }
#line 433 "make.m"
                }
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 1:
#line 4588 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 2:
#line 4594 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 433 "make.m"
                break;
#line 433 "make.m"
            }
#line 433 "make.m"
          }
#line 433 "make.m"
          break;
#line 433 "make.m"
        case (MR_Integer) 1:
#line 433 "make.m"
          {
#line 433 "make.m"
            MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 433 "make.m"
#line 433 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 433 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 433 "make.m"
              case (MR_Integer) 0:
#line 4618 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 1:
#line 433 "make.m"
                {
#line 433 "make.m"
                  MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 433 "make.m"
                  MR_Integer make__V_30_30 = (MR_Integer) make__V_27_27;
#line 433 "make.m"
                  MR_Integer make__V_31_31 = (MR_Integer) make__V_13_13;

#line 433 "make.m"
                  {
#line 433 "make.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_30_30, make__V_31_31);
                  }
#line 433 "make.m"
                }
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 2:
#line 4644 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 433 "make.m"
                break;
#line 433 "make.m"
            }
#line 433 "make.m"
          }
#line 433 "make.m"
          break;
#line 433 "make.m"
        case (MR_Integer) 2:
#line 433 "make.m"
          {
#line 433 "make.m"
            MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 433 "make.m"
#line 433 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 433 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 433 "make.m"
              case (MR_Integer) 0:
#line 4668 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 1:
#line 4674 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 2:
#line 433 "make.m"
                {
#line 433 "make.m"
                  MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

#line 433 "make.m"
                  {
#line 433 "make.m"
                    make____Compare____misc_target_type_0_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
                  }
#line 433 "make.m"
                }
#line 433 "make.m"
                break;
#line 433 "make.m"
            }
#line 433 "make.m"
          }
#line 433 "make.m"
          break;
#line 433 "make.m"
      }
#line 433 "make.m"
  }
#line 433 "make.m"
}

#line 433 "make.m"
MR_bool MR_CALL 
make____Unify____target_type_0_0(
#line 433 "make.m"
  MR_Word make__HeadVar__1_1,
#line 433 "make.m"
  MR_Word make__HeadVar__2_2)
#line 433 "make.m"
{
#line 433 "make.m"
  {
#line 433 "make.m"
    MR_bool make__succeeded;
#line 433 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 433 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 433 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 433 "make.m"
    if (make__succeeded)
#line 433 "make.m"
      make__succeeded = MR_TRUE;
#line 433 "make.m"
    else
#line 433 "make.m"
#line 433 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 433 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 433 "make.m"
        case (MR_Integer) 0:
#line 433 "make.m"
          {
#line 433 "make.m"
            MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "make.m"
            MR_Word make__V_4_4;

#line 433 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 433 "make.m"
            if (make__succeeded)
#line 433 "make.m"
              {
#line 433 "make.m"
                make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4755 "make.c"
                {
#line 4757 "make.c"
                  make__succeeded = make____Unify____module_target_type_0_0(make__V_3_3, make__V_4_4);
                }
#line 433 "make.m"
              }
#line 433 "make.m"
          }
#line 433 "make.m"
          break;
#line 433 "make.m"
        case (MR_Integer) 1:
#line 433 "make.m"
          {
#line 433 "make.m"
            MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "make.m"
            MR_Word make__V_6_6;

#line 433 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 433 "make.m"
            if (make__succeeded)
#line 433 "make.m"
              {
#line 433 "make.m"
                make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4783 "make.c"
                make__succeeded = (make__V_5_5 == make__V_6_6);
#line 433 "make.m"
              }
#line 433 "make.m"
          }
#line 433 "make.m"
          break;
#line 433 "make.m"
        case (MR_Integer) 2:
#line 433 "make.m"
          {
#line 433 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "make.m"
            MR_Word make__V_8_8;

#line 433 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 433 "make.m"
            if (make__succeeded)
#line 433 "make.m"
              {
#line 433 "make.m"
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4808 "make.c"
                {
#line 4810 "make.c"
                  make__succeeded = make____Unify____misc_target_type_0_0(make__V_7_7, make__V_8_8);
                }
#line 433 "make.m"
              }
#line 433 "make.m"
          }
#line 433 "make.m"
          break;
#line 433 "make.m"
      }
#line 433 "make.m"
    return make__succeeded;
#line 433 "make.m"
  }
#line 433 "make.m"
}

#line 263 "make.m"
void MR_CALL 
make____Compare____target_file_0_0(
#line 263 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 263 "make.m"
  MR_Word make__HeadVar__2_2,
#line 263 "make.m"
  MR_Word make__HeadVar__3_3)
#line 263 "make.m"
{
#line 263 "make.m"
  {
#line 263 "make.m"
    MR_bool make__succeeded;
#line 263 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 263 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 263 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 263 "make.m"
    if (make__succeeded)
#line 4852 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "make.m"
    else
#line 263 "make.m"
      {
#line 263 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "make.m"
        MR_Word make__V_8_8;

#line 263 "make.m"
        {
#line 263 "make.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 4874 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 263 "make.m"
        make__succeeded = !(make__succeeded);
#line 263 "make.m"
        if (make__succeeded)
#line 263 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 263 "make.m"
        else
#line 263 "make.m"
          {
#line 263 "make.m"
            make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
          }
#line 263 "make.m"
      }
#line 263 "make.m"
  }
#line 263 "make.m"
}

#line 263 "make.m"
MR_bool MR_CALL 
make____Unify____target_file_0_0(
#line 263 "make.m"
  MR_Word make__HeadVar__1_1,
#line 263 "make.m"
  MR_Word make__HeadVar__2_2)
#line 263 "make.m"
{
#line 263 "make.m"
  {
#line 263 "make.m"
    MR_bool make__succeeded;
#line 263 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 263 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 263 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 263 "make.m"
    if (make__succeeded)
#line 263 "make.m"
      make__succeeded = MR_TRUE;
#line 263 "make.m"
    else
#line 263 "make.m"
      {
#line 263 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 4933 "make.c"
        {
#line 4935 "make.c"
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 263 "make.m"
        if (make__succeeded)
#line 4940 "make.c"
          {
#line 4942 "make.c"
            make__succeeded = make____Unify____module_target_type_0_0(make__V_4_4, make__V_6_6);
          }
#line 263 "make.m"
      }
#line 263 "make.m"
    return make__succeeded;
#line 263 "make.m"
  }
#line 263 "make.m"
}

#line 48 "make.m"
void MR_CALL 
make____Compare____rebuild_module_deps_0_0(
#line 48 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 48 "make.m"
  MR_Word make__HeadVar__2_2,
#line 48 "make.m"
  MR_Word make__HeadVar__3_3)
#line 48 "make.m"
{
#line 48 "make.m"
  {
#line 48 "make.m"
    MR_bool make__succeeded;
#line 48 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 48 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 48 "make.m"
    {
#line 48 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
#line 48 "make.m"
  }
#line 48 "make.m"
}

#line 48 "make.m"
MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0(
#line 48 "make.m"
  MR_Word make__HeadVar__2_1,
#line 48 "make.m"
  MR_Word make__HeadVar__2_2)
#line 48 "make.m"
{
#line 4993 "make.c"
  {
#line 4995 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 4998 "make.c"
    return make__succeeded;
#line 5000 "make.c"
  }
#line 48 "make.m"
}

#line 217 "make.m"
void MR_CALL 
make____Compare____module_target_type_0_0(
#line 217 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 217 "make.m"
  MR_Word make__HeadVar__2_2,
#line 217 "make.m"
  MR_Word make__HeadVar__3_3)
#line 217 "make.m"
{
#line 217 "make.m"
  {
#line 217 "make.m"
    MR_bool make__succeeded;
#line 217 "make.m"
    MR_Integer make__CastX_21 = (MR_Integer) make__HeadVar__2_2;
#line 217 "make.m"
    MR_Integer make__CastY_22 = (MR_Integer) make__HeadVar__3_3;

#line 217 "make.m"
    make__succeeded = (make__CastX_21 == make__CastY_22);
#line 217 "make.m"
    if (make__succeeded)
#line 5029 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 217 "make.m"
    else
#line 217 "make.m"
      {
#line 217 "make.m"
        MR_Integer make__V_4_4;
#line 217 "make.m"
        MR_Integer make__V_5_5;

#line 217 "make.m"
        {
#line 217 "make.m"
          make____Index____module_target_type_0_0(make__HeadVar__2_2, &make__V_4_4);
        }
#line 217 "make.m"
        {
#line 217 "make.m"
          make____Index____module_target_type_0_0(make__HeadVar__3_3, &make__V_5_5);
        }
#line 217 "make.m"
        make__succeeded = (make__V_4_4 < make__V_5_5);
#line 217 "make.m"
        if (make__succeeded)
#line 5054 "make.c"
          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 217 "make.m"
        else
#line 217 "make.m"
          {
#line 217 "make.m"
            make__succeeded = (make__V_4_4 > make__V_5_5);
#line 217 "make.m"
            if (make__succeeded)
#line 5064 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 217 "make.m"
            else
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Word make__V_6_6;

#line 217 "make.m"
#line 217 "make.m"
                switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
#line 217 "make.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
                  case (MR_Integer) 0:
#line 217 "make.m"
#line 217 "make.m"
                    switch (MR_unmkbody(make__HeadVar__2_2)) {
#line 217 "make.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
                      case (MR_Integer) 0:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 1:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 2:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 3:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 4:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 5:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 6:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 7:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 8:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 9:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 10:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 11:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 12:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 13:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 14:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 15:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 16:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                    }
#line 217 "make.m"
                    break;
#line 217 "make.m"
                  case (MR_Integer) 1:
#line 217 "make.m"
                    {
#line 217 "make.m"
                      MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "make.m"
                      MR_Word make__V_8_8;
#line 217 "make.m"
                      MR_Integer make__V_29_29;
#line 217 "make.m"
                      MR_Integer make__V_30_30;

#line 217 "make.m"
                      make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 217 "make.m"
                      if (make__succeeded)
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 217 "make.m"
                          make__V_29_29 = (MR_Integer) make__V_7_7;
#line 217 "make.m"
                          make__V_30_30 = (MR_Integer) make__V_8_8;
#line 217 "make.m"
                          {
#line 217 "make.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_29_29, make__V_30_30);
                          }
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                    }
#line 217 "make.m"
                    break;
#line 217 "make.m"
                  case (MR_Integer) 2:
#line 217 "make.m"
                    {
#line 217 "make.m"
                      MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "make.m"
                      MR_Word make__V_10_10;
#line 217 "make.m"
                      MR_Integer make__V_37_37;
#line 217 "make.m"
                      MR_Integer make__V_38_38;

#line 217 "make.m"
                      make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 217 "make.m"
                      if (make__succeeded)
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
#line 217 "make.m"
                          make__V_37_37 = (MR_Integer) make__V_9_9;
#line 217 "make.m"
                          make__V_38_38 = (MR_Integer) make__V_10_10;
#line 217 "make.m"
                          {
#line 217 "make.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_37_37, make__V_38_38);
                          }
#line 217 "make.m"
                          make__succeeded = MR_TRUE;
#line 217 "make.m"
                        }
#line 217 "make.m"
                    }
#line 217 "make.m"
                    break;
#line 217 "make.m"
                  case (MR_Integer) 3:
#line 217 "make.m"
#line 217 "make.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) {
#line 217 "make.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
                      case (MR_Integer) 0:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                          MR_Word make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 217 "make.m"
                          MR_Word make__V_13_13;
#line 217 "make.m"
                          MR_Word make__V_14_14;
#line 217 "make.m"
                          MR_Word make__V_15_15;
#line 217 "make.m"
                          MR_Integer make__V_33_33;
#line 217 "make.m"
                          MR_Integer make__V_34_34;

#line 217 "make.m"
                          make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 217 "make.m"
                          if (make__succeeded)
#line 217 "make.m"
                            {
#line 217 "make.m"
                              make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "make.m"
                              make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 217 "make.m"
                              make__V_33_33 = (MR_Integer) make__V_11_11;
#line 217 "make.m"
                              make__V_34_34 = (MR_Integer) make__V_13_13;
#line 217 "make.m"
                              {
#line 217 "make.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_15_15, make__V_33_33, make__V_34_34);
                              }
#line 5414 "make.c"
                              make__succeeded = (make__V_15_15 == (MR_Integer) 0);
#line 217 "make.m"
                              make__succeeded = !(make__succeeded);
#line 217 "make.m"
                              if (make__succeeded)
#line 217 "make.m"
                                make__V_6_6 = make__V_15_15;
#line 217 "make.m"
                              else
#line 217 "make.m"
                                {
#line 217 "make.m"
                                  MR_Integer make__V_35_35 = (MR_Integer) make__V_12_12;
#line 217 "make.m"
                                  MR_Integer make__V_36_36 = (MR_Integer) make__V_14_14;

#line 217 "make.m"
                                  {
#line 217 "make.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_35_35, make__V_36_36);
                                  }
#line 217 "make.m"
                                }
#line 217 "make.m"
                              make__succeeded = MR_TRUE;
#line 217 "make.m"
                            }
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                      case (MR_Integer) 1:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          MR_Word make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                          MR_String make__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 217 "make.m"
                          MR_Word make__V_18_18;
#line 217 "make.m"
                          MR_String make__V_19_19;
#line 217 "make.m"
                          MR_Word make__V_20_20;
#line 217 "make.m"
                          MR_Integer make__V_31_31;
#line 217 "make.m"
                          MR_Integer make__V_32_32;

#line 217 "make.m"
                          make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 217 "make.m"
                          if (make__succeeded)
#line 217 "make.m"
                            {
#line 217 "make.m"
                              make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "make.m"
                              make__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 217 "make.m"
                              make__V_31_31 = (MR_Integer) make__V_16_16;
#line 217 "make.m"
                              make__V_32_32 = (MR_Integer) make__V_18_18;
#line 217 "make.m"
                              {
#line 217 "make.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_20_20, make__V_31_31, make__V_32_32);
                              }
#line 5484 "make.c"
                              make__succeeded = (make__V_20_20 == (MR_Integer) 0);
#line 217 "make.m"
                              make__succeeded = !(make__succeeded);
#line 217 "make.m"
                              if (make__succeeded)
#line 217 "make.m"
                                make__V_6_6 = make__V_20_20;
#line 217 "make.m"
                              else
#line 217 "make.m"
                                {
#line 217 "make.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&make__V_6_6, make__V_17_17, make__V_19_19);
                                }
#line 217 "make.m"
                              make__succeeded = MR_TRUE;
#line 217 "make.m"
                            }
#line 217 "make.m"
                        }
#line 217 "make.m"
                        break;
#line 217 "make.m"
                    }
#line 217 "make.m"
                    break;
#line 217 "make.m"
                }
#line 217 "make.m"
                if (make__succeeded)
#line 217 "make.m"
                  *make__HeadVar__1_1 = make__V_6_6;
#line 217 "make.m"
                else
#line 217 "make.m"
                  {
#line 217 "make.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 217 "make.m"
                    return;
                  }
#line 217 "make.m"
              }
#line 217 "make.m"
          }
#line 217 "make.m"
      }
#line 217 "make.m"
  }
#line 217 "make.m"
}

#line 217 "make.m"
void MR_CALL 
make____Index____module_target_type_0_0(
#line 217 "make.m"
  MR_Word make__HeadVar__1_1,
#line 217 "make.m"
  MR_Integer * make__HeadVar__2_2)
#line 217 "make.m"
{
#line 217 "make.m"
  {
#line 217 "make.m"
    MR_bool make__succeeded;

#line 217 "make.m"
#line 217 "make.m"
    switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 217 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
      case (MR_Integer) 0:
#line 217 "make.m"
#line 217 "make.m"
        switch (MR_unmkbody(make__HeadVar__1_1)) {
#line 217 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
          case (MR_Integer) 0:
#line 5565 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 0;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 1:
#line 5571 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 1;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 2:
#line 5577 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 2;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 3:
#line 5583 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 3;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 4:
#line 5589 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 4;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 5:
#line 5595 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 5;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 6:
#line 5601 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 6;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 7:
#line 5607 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 7;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 8:
#line 5613 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 8;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 9:
#line 5619 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 10;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 10:
#line 5625 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 11;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 11:
#line 5631 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 12;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 12:
#line 5637 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 13;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 13:
#line 5643 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 14;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 14:
#line 5649 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 15;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 15:
#line 5655 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 16;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 16:
#line 5661 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 20;
#line 217 "make.m"
            break;
#line 217 "make.m"
        }
#line 217 "make.m"
        break;
#line 217 "make.m"
      case (MR_Integer) 1:
#line 5671 "make.c"
        *make__HeadVar__2_2 = (MR_Integer) 9;
#line 217 "make.m"
        break;
#line 217 "make.m"
      case (MR_Integer) 2:
#line 5677 "make.c"
        *make__HeadVar__2_2 = (MR_Integer) 17;
#line 217 "make.m"
        break;
#line 217 "make.m"
      case (MR_Integer) 3:
#line 217 "make.m"
#line 217 "make.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) {
#line 217 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
          case (MR_Integer) 0:
#line 5690 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 18;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 1:
#line 5696 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 19;
#line 217 "make.m"
            break;
#line 217 "make.m"
        }
#line 217 "make.m"
        break;
#line 217 "make.m"
    }
#line 217 "make.m"
  }
#line 217 "make.m"
}

#line 217 "make.m"
MR_bool MR_CALL 
make____Unify____module_target_type_0_0(
#line 217 "make.m"
  MR_Word make__HeadVar__1_1,
#line 217 "make.m"
  MR_Word make__HeadVar__2_2)
#line 217 "make.m"
{
#line 217 "make.m"
  {
#line 217 "make.m"
    MR_bool make__succeeded;
#line 217 "make.m"
    MR_Integer make__CastX_49 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
    MR_Integer make__CastY_50 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
    make__succeeded = (make__CastX_49 == make__CastY_50);
#line 217 "make.m"
    if (make__succeeded)
#line 217 "make.m"
      make__succeeded = MR_TRUE;
#line 217 "make.m"
    else
#line 217 "make.m"
#line 217 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 217 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
        case (MR_Integer) 0:
#line 217 "make.m"
#line 217 "make.m"
          switch (MR_unmkbody(make__HeadVar__1_1)) {
#line 217 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
            case (MR_Integer) 0:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_4 == make__CastX_3);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 1:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_6 == make__CastX_5);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 2:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_8 == make__CastX_7);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 3:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_10 == make__CastX_9);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 4:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_12 == make__CastX_11);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 5:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_14 == make__CastX_13);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 6:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_16 == make__CastX_15);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 7:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_18 == make__CastX_17);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 8:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_19 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_20 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_20 == make__CastX_19);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 9:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_23 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_24 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_24 == make__CastX_23);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 10:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_25 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_26 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_26 == make__CastX_25);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 11:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_27 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_28 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_28 == make__CastX_27);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 12:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_29 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_30 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_30 == make__CastX_29);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 13:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_31 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_32 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_32 == make__CastX_31);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 14:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_33 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_34 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_34 == make__CastX_33);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 15:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_35 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_36 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_36 == make__CastX_35);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 16:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_47 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_48 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_48 == make__CastX_47);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
          }
#line 217 "make.m"
          break;
#line 217 "make.m"
        case (MR_Integer) 1:
#line 217 "make.m"
          {
#line 217 "make.m"
            MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "make.m"
            MR_Word make__V_22_22;

#line 217 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 217 "make.m"
            if (make__succeeded)
#line 217 "make.m"
              {
#line 217 "make.m"
                make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6025 "make.c"
                make__succeeded = (make__V_21_21 == make__V_22_22);
#line 217 "make.m"
              }
#line 217 "make.m"
          }
#line 217 "make.m"
          break;
#line 217 "make.m"
        case (MR_Integer) 2:
#line 217 "make.m"
          {
#line 217 "make.m"
            MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "make.m"
            MR_Word make__V_38_38;

#line 217 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 217 "make.m"
            if (make__succeeded)
#line 217 "make.m"
              {
#line 217 "make.m"
                make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6050 "make.c"
                make__succeeded = (make__V_37_37 == make__V_38_38);
#line 217 "make.m"
              }
#line 217 "make.m"
          }
#line 217 "make.m"
          break;
#line 217 "make.m"
        case (MR_Integer) 3:
#line 217 "make.m"
#line 217 "make.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) {
#line 217 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 217 "make.m"
            case (MR_Integer) 0:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Word make__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "make.m"
                MR_Word make__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 217 "make.m"
                MR_Word make__V_41_41;
#line 217 "make.m"
                MR_Word make__V_42_42;

#line 217 "make.m"
                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 217 "make.m"
                if (make__succeeded)
#line 217 "make.m"
                  {
#line 217 "make.m"
                    make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                    make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6088 "make.c"
                    make__succeeded = (make__V_39_39 == make__V_41_41);
#line 217 "make.m"
                    if (make__succeeded)
#line 6092 "make.c"
                      make__succeeded = (make__V_40_40 == make__V_42_42);
#line 217 "make.m"
                  }
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 1:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "make.m"
                MR_String make__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 217 "make.m"
                MR_Word make__V_45_45;
#line 217 "make.m"
                MR_String make__V_46_46;

#line 217 "make.m"
                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 217 "make.m"
                if (make__succeeded)
#line 217 "make.m"
                  {
#line 217 "make.m"
                    make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                    make__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6123 "make.c"
                    make__succeeded = (make__V_43_43 == make__V_45_45);
#line 217 "make.m"
                    if (make__succeeded)
#line 6127 "make.c"
                      make__succeeded = (strcmp(make__V_44_44, make__V_46_46) == 0);
#line 217 "make.m"
                  }
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
          }
#line 217 "make.m"
          break;
#line 217 "make.m"
      }
#line 217 "make.m"
    return make__succeeded;
#line 217 "make.m"
  }
#line 217 "make.m"
}

#line 178 "make.m"
void MR_CALL 
make____Compare____module_index_map_0_0(
#line 178 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 178 "make.m"
  MR_Word make__HeadVar__2_2,
#line 178 "make.m"
  MR_Word make__HeadVar__3_3)
#line 178 "make.m"
{
#line 178 "make.m"
  {
#line 178 "make.m"
    MR_bool make__succeeded;
#line 178 "make.m"
    MR_Integer make__CastX_12 = (MR_Integer) make__HeadVar__2_2;
#line 178 "make.m"
    MR_Integer make__CastY_13 = (MR_Integer) make__HeadVar__3_3;

#line 178 "make.m"
    make__succeeded = (make__CastX_12 == make__CastY_13);
#line 178 "make.m"
    if (make__succeeded)
#line 6172 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 178 "make.m"
    else
#line 178 "make.m"
      {
#line 178 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "make.m"
        MR_Box make__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "make.m"
        MR_Integer make__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
#line 178 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 178 "make.m"
        MR_Box make__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 178 "make.m"
        MR_Integer make__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
#line 178 "make.m"
        MR_Word make__V_10_10;

#line 178 "make.m"
        {
#line 178 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[12], &make__V_10_10, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_7_7)));
        }
#line 6198 "make.c"
        make__succeeded = (make__V_10_10 == (MR_Integer) 0);
#line 178 "make.m"
        make__succeeded = !(make__succeeded);
#line 178 "make.m"
        if (make__succeeded)
#line 178 "make.m"
          *make__HeadVar__1_1 = make__V_10_10;
#line 178 "make.m"
        else
#line 178 "make.m"
          {
#line 178 "make.m"
            MR_Word make__V_11_11;

#line 178 "make.m"
            {
#line 178 "make.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[9], &make__V_11_11, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_8_8)));
            }
#line 6218 "make.c"
            make__succeeded = (make__V_11_11 == (MR_Integer) 0);
#line 178 "make.m"
            make__succeeded = !(make__succeeded);
#line 178 "make.m"
            if (make__succeeded)
#line 178 "make.m"
              *make__HeadVar__1_1 = make__V_11_11;
#line 178 "make.m"
            else
#line 178 "make.m"
              {
#line 178 "make.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_6_6, make__V_9_9);
              }
#line 178 "make.m"
          }
#line 178 "make.m"
      }
#line 178 "make.m"
  }
#line 178 "make.m"
}

#line 178 "make.m"
MR_bool MR_CALL 
make____Unify____module_index_map_0_0(
#line 178 "make.m"
  MR_Word make__HeadVar__1_1,
#line 178 "make.m"
  MR_Word make__HeadVar__2_2)
#line 178 "make.m"
{
#line 178 "make.m"
  {
#line 178 "make.m"
    MR_bool make__succeeded;
#line 178 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 178 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 178 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 178 "make.m"
    if (make__succeeded)
#line 178 "make.m"
      make__succeeded = MR_TRUE;
#line 178 "make.m"
    else
#line 178 "make.m"
      {
#line 178 "make.m"
        MR_Word make__TypeCtorInfo_12_12;
#line 178 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "make.m"
        MR_Box make__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "make.m"
        MR_Integer make__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
#line 178 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "make.m"
        MR_Box make__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "make.m"
        MR_Integer make__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));

#line 6285 "make.c"
        {
#line 6287 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[12], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 178 "make.m"
        if (make__succeeded)
#line 178 "make.m"
          {
#line 6294 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 6296 "make.c"
            {
#line 6298 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 178 "make.m"
            if (make__succeeded)
#line 6303 "make.c"
              make__succeeded = (make__V_5_5 == make__V_8_8);
#line 178 "make.m"
          }
#line 178 "make.m"
      }
#line 178 "make.m"
    return make__succeeded;
#line 178 "make.m"
  }
#line 178 "make.m"
}

#line 207 "make.m"
void MR_CALL 
make____Compare____module_compilation_task_type_0_0(
#line 207 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 207 "make.m"
  MR_Word make__HeadVar__2_2,
#line 207 "make.m"
  MR_Word make__HeadVar__3_3)
#line 207 "make.m"
{
#line 207 "make.m"
  {
#line 207 "make.m"
    MR_bool make__succeeded;
#line 207 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 207 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 207 "make.m"
    {
#line 207 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
#line 207 "make.m"
  }
#line 207 "make.m"
}

#line 207 "make.m"
MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0(
#line 207 "make.m"
  MR_Word make__HeadVar__2_1,
#line 207 "make.m"
  MR_Word make__HeadVar__2_2)
#line 207 "make.m"
{
#line 6355 "make.c"
  {
#line 6357 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 6360 "make.c"
    return make__succeeded;
#line 6362 "make.c"
  }
#line 207 "make.m"
}

#line 246 "make.m"
void MR_CALL 
make____Compare____misc_target_type_0_0(
#line 246 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 246 "make.m"
  MR_Word make__HeadVar__2_2,
#line 246 "make.m"
  MR_Word make__HeadVar__3_3)
#line 246 "make.m"
{
#line 246 "make.m"
  {
#line 246 "make.m"
    MR_bool make__succeeded;
#line 246 "make.m"
    MR_Integer make__CastX_18 = (MR_Integer) make__HeadVar__2_2;
#line 246 "make.m"
    MR_Integer make__CastY_19 = (MR_Integer) make__HeadVar__3_3;

#line 246 "make.m"
    make__succeeded = (make__CastX_18 == make__CastY_19);
#line 246 "make.m"
    if (make__succeeded)
#line 6391 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "make.m"
    else
#line 246 "make.m"
#line 246 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
#line 246 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
        case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
          switch (MR_unmkbody(make__HeadVar__2_2)) {
#line 246 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
            case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 246 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 246 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                    case (MR_Integer) 0:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 1:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 2:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 3:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 4:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 5:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                  }
#line 246 "make.m"
                  break;
#line 246 "make.m"
                case (MR_Integer) 1:
#line 6463 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                  break;
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 1:
#line 246 "make.m"
#line 246 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 246 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 246 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                    case (MR_Integer) 0:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 1:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 2:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 3:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 4:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 5:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                  }
#line 246 "make.m"
                  break;
#line 246 "make.m"
                case (MR_Integer) 1:
#line 6527 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                  break;
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 2:
#line 246 "make.m"
#line 246 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 246 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 246 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                    case (MR_Integer) 0:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 1:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 2:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 3:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 4:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 5:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                  }
#line 246 "make.m"
                  break;
#line 246 "make.m"
                case (MR_Integer) 1:
#line 6591 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                  break;
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 3:
#line 246 "make.m"
#line 246 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 246 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 246 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                    case (MR_Integer) 0:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 1:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 2:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 3:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 4:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 5:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                  }
#line 246 "make.m"
                  break;
#line 246 "make.m"
                case (MR_Integer) 1:
#line 6655 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                  break;
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 4:
#line 246 "make.m"
#line 246 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 246 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 246 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                    case (MR_Integer) 0:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 1:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 2:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 3:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 4:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 5:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                  }
#line 246 "make.m"
                  break;
#line 246 "make.m"
                case (MR_Integer) 1:
#line 6719 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                  break;
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 5:
#line 246 "make.m"
#line 246 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 246 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 246 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                    case (MR_Integer) 0:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 1:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 2:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 3:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 4:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                    case (MR_Integer) 5:
#line 246 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "make.m"
                      break;
#line 246 "make.m"
                  }
#line 246 "make.m"
                  break;
#line 246 "make.m"
                case (MR_Integer) 1:
#line 6783 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                  break;
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
          }
#line 246 "make.m"
          break;
#line 246 "make.m"
        case (MR_Integer) 1:
#line 246 "make.m"
          {
#line 246 "make.m"
            MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 246 "make.m"
#line 246 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 246 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
              case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
                switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 246 "make.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
                  case (MR_Integer) 0:
#line 6816 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 1:
#line 6822 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 2:
#line 6828 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 3:
#line 6834 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 4:
#line 6840 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 5:
#line 6846 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                }
#line 246 "make.m"
                break;
#line 246 "make.m"
              case (MR_Integer) 1:
#line 246 "make.m"
                {
#line 246 "make.m"
                  MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

#line 246 "make.m"
                  {
#line 246 "make.m"
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_21_21, make__V_9_9);
                  }
#line 246 "make.m"
                }
#line 246 "make.m"
                break;
#line 246 "make.m"
            }
#line 246 "make.m"
          }
#line 246 "make.m"
          break;
#line 246 "make.m"
      }
#line 246 "make.m"
  }
#line 246 "make.m"
}

#line 246 "make.m"
MR_bool MR_CALL 
make____Unify____misc_target_type_0_0(
#line 246 "make.m"
  MR_Word make__HeadVar__1_1,
#line 246 "make.m"
  MR_Word make__HeadVar__2_2)
#line 246 "make.m"
{
#line 246 "make.m"
  {
#line 246 "make.m"
    MR_bool make__succeeded;
#line 246 "make.m"
    MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
#line 246 "make.m"
    MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

#line 246 "make.m"
    make__succeeded = (make__CastX_17 == make__CastY_18);
#line 246 "make.m"
    if (make__succeeded)
#line 246 "make.m"
      make__succeeded = MR_TRUE;
#line 246 "make.m"
    else
#line 246 "make.m"
#line 246 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 246 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
        case (MR_Integer) 0:
#line 246 "make.m"
#line 246 "make.m"
          switch (MR_unmkbody(make__HeadVar__1_1)) {
#line 246 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 246 "make.m"
            case (MR_Integer) 0:
#line 246 "make.m"
              {
#line 246 "make.m"
                MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
#line 246 "make.m"
                MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

#line 246 "make.m"
                make__succeeded = (make__CastY_4 == make__CastX_3);
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 1:
#line 246 "make.m"
              {
#line 246 "make.m"
                MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
#line 246 "make.m"
                MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

#line 246 "make.m"
                make__succeeded = (make__CastY_6 == make__CastX_5);
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 2:
#line 246 "make.m"
              {
#line 246 "make.m"
                MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 246 "make.m"
                MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 246 "make.m"
                make__succeeded = (make__CastY_10 == make__CastX_9);
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 3:
#line 246 "make.m"
              {
#line 246 "make.m"
                MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
#line 246 "make.m"
                MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

#line 246 "make.m"
                make__succeeded = (make__CastY_12 == make__CastX_11);
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 4:
#line 246 "make.m"
              {
#line 246 "make.m"
                MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
#line 246 "make.m"
                MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

#line 246 "make.m"
                make__succeeded = (make__CastY_14 == make__CastX_13);
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
            case (MR_Integer) 5:
#line 246 "make.m"
              {
#line 246 "make.m"
                MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 246 "make.m"
                MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 246 "make.m"
                make__succeeded = (make__CastY_16 == make__CastX_15);
#line 246 "make.m"
              }
#line 246 "make.m"
              break;
#line 246 "make.m"
          }
#line 246 "make.m"
          break;
#line 246 "make.m"
        case (MR_Integer) 1:
#line 246 "make.m"
          {
#line 246 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "make.m"
            MR_Word make__V_8_8;

#line 246 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 246 "make.m"
            if (make__succeeded)
#line 246 "make.m"
              {
#line 246 "make.m"
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 7032 "make.c"
                {
#line 7034 "make.c"
                  make__succeeded = make____Unify____module_target_type_0_0(make__V_7_7, make__V_8_8);
                }
#line 246 "make.m"
              }
#line 246 "make.m"
          }
#line 246 "make.m"
          break;
#line 246 "make.m"
      }
#line 246 "make.m"
    return make__succeeded;
#line 246 "make.m"
  }
#line 246 "make.m"
}

#line 100 "make.m"
void MR_CALL 
make____Compare____make_info_0_0(
#line 100 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 100 "make.m"
  MR_Word make__HeadVar__2_2,
#line 100 "make.m"
  MR_Word make__HeadVar__3_3)
#line 100 "make.m"
{
#line 100 "make.m"
  {
#line 100 "make.m"
    MR_bool make__succeeded;
#line 100 "make.m"
    MR_Integer make__CastX_63 = (MR_Integer) make__HeadVar__2_2;
#line 100 "make.m"
    MR_Integer make__CastY_64 = (MR_Integer) make__HeadVar__3_3;

#line 100 "make.m"
    make__succeeded = (make__CastX_63 == make__CastY_64);
#line 100 "make.m"
    if (make__succeeded)
#line 7076 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "make.m"
    else
#line 100 "make.m"
      {
#line 100 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "make.m"
        MR_Word make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "make.m"
        MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "make.m"
        MR_Word make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 6)));
#line 100 "make.m"
        MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 7)));
#line 100 "make.m"
        MR_Word make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 8)));
#line 100 "make.m"
        MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 9)));
#line 100 "make.m"
        MR_Word make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 10)));
#line 100 "make.m"
        MR_Word make__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 11)));
#line 100 "make.m"
        MR_Word make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)));
#line 100 "make.m"
        MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Word make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 17)));
#line 100 "make.m"
        MR_Integer make__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 18)));
#line 100 "make.m"
        MR_Word make__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 19)));
#line 100 "make.m"
        MR_Word make__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 100 "make.m"
        MR_Word make__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 100 "make.m"
        MR_Word make__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
#line 100 "make.m"
        MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 3)));
#line 100 "make.m"
        MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 4)));
#line 100 "make.m"
        MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 5)));
#line 100 "make.m"
        MR_Word make__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 6)));
#line 100 "make.m"
        MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 7)));
#line 100 "make.m"
        MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 8)));
#line 100 "make.m"
        MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 9)));
#line 100 "make.m"
        MR_Word make__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 10)));
#line 100 "make.m"
        MR_Word make__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 11)));
#line 100 "make.m"
        MR_Word make__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 12)));
#line 100 "make.m"
        MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Word make__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 17)));
#line 100 "make.m"
        MR_Integer make__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 18)));
#line 100 "make.m"
        MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 19)));
#line 100 "make.m"
        MR_Word make__V_44_44;

#line 100 "make.m"
        {
#line 100 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[6], &make__V_44_44, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_24_24)));
        }
#line 7170 "make.c"
        make__succeeded = (make__V_44_44 == (MR_Integer) 0);
#line 100 "make.m"
        make__succeeded = !(make__succeeded);
#line 100 "make.m"
        if (make__succeeded)
#line 100 "make.m"
          *make__HeadVar__1_1 = make__V_44_44;
#line 100 "make.m"
        else
#line 100 "make.m"
          {
#line 100 "make.m"
            MR_Word make__V_45_45;

#line 100 "make.m"
            {
#line 100 "make.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], &make__V_45_45, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_25_25)));
            }
#line 7190 "make.c"
            make__succeeded = (make__V_45_45 == (MR_Integer) 0);
#line 100 "make.m"
            make__succeeded = !(make__succeeded);
#line 100 "make.m"
            if (make__succeeded)
#line 100 "make.m"
              *make__HeadVar__1_1 = make__V_45_45;
#line 100 "make.m"
            else
#line 100 "make.m"
              {
#line 100 "make.m"
                MR_Word make__V_46_46;

#line 100 "make.m"
                {
#line 100 "make.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[7], &make__V_46_46, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_26_26)));
                }
#line 7210 "make.c"
                make__succeeded = (make__V_46_46 == (MR_Integer) 0);
#line 100 "make.m"
                make__succeeded = !(make__succeeded);
#line 100 "make.m"
                if (make__succeeded)
#line 100 "make.m"
                  *make__HeadVar__1_1 = make__V_46_46;
#line 100 "make.m"
                else
#line 100 "make.m"
                  {
#line 100 "make.m"
                    MR_Word make__V_47_47;

#line 100 "make.m"
                    {
#line 100 "make.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_47_47, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_27_27)));
                    }
#line 7230 "make.c"
                    make__succeeded = (make__V_47_47 == (MR_Integer) 0);
#line 100 "make.m"
                    make__succeeded = !(make__succeeded);
#line 100 "make.m"
                    if (make__succeeded)
#line 100 "make.m"
                      *make__HeadVar__1_1 = make__V_47_47;
#line 100 "make.m"
                    else
#line 100 "make.m"
                      {
#line 100 "make.m"
                        MR_Word make__V_48_48;

#line 100 "make.m"
                        {
#line 100 "make.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_48_48, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_28_28)));
                        }
#line 7250 "make.c"
                        make__succeeded = (make__V_48_48 == (MR_Integer) 0);
#line 100 "make.m"
                        make__succeeded = !(make__succeeded);
#line 100 "make.m"
                        if (make__succeeded)
#line 100 "make.m"
                          *make__HeadVar__1_1 = make__V_48_48;
#line 100 "make.m"
                        else
#line 100 "make.m"
                          {
#line 100 "make.m"
                            MR_Word make__V_49_49;

#line 100 "make.m"
                            {
#line 100 "make.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[8], &make__V_49_49, ((MR_Box) (make__V_9_9)), ((MR_Box) (make__V_29_29)));
                            }
#line 7270 "make.c"
                            make__succeeded = (make__V_49_49 == (MR_Integer) 0);
#line 100 "make.m"
                            make__succeeded = !(make__succeeded);
#line 100 "make.m"
                            if (make__succeeded)
#line 100 "make.m"
                              *make__HeadVar__1_1 = make__V_49_49;
#line 100 "make.m"
                            else
#line 100 "make.m"
                              {
#line 100 "make.m"
                                MR_Word make__V_50_50;

#line 100 "make.m"
                                {
#line 100 "make.m"
                                  make____Compare____module_index_map_0_0(&make__V_50_50, make__V_10_10, make__V_30_30);
                                }
#line 7290 "make.c"
                                make__succeeded = (make__V_50_50 == (MR_Integer) 0);
#line 100 "make.m"
                                make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                if (make__succeeded)
#line 100 "make.m"
                                  *make__HeadVar__1_1 = make__V_50_50;
#line 100 "make.m"
                                else
#line 100 "make.m"
                                  {
#line 100 "make.m"
                                    MR_Word make__V_51_51;

#line 100 "make.m"
                                    {
#line 100 "make.m"
                                      make____Compare____dependency_file_index_map_0_0(&make__V_51_51, make__V_11_11, make__V_31_31);
                                    }
#line 7310 "make.c"
                                    make__succeeded = (make__V_51_51 == (MR_Integer) 0);
#line 100 "make.m"
                                    make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                    if (make__succeeded)
#line 100 "make.m"
                                      *make__HeadVar__1_1 = make__V_51_51;
#line 100 "make.m"
                                    else
#line 100 "make.m"
                                      {
#line 100 "make.m"
                                        MR_Word make__V_52_52;

#line 100 "make.m"
                                        {
#line 100 "make.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[9], &make__V_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                        }
#line 7330 "make.c"
                                        make__succeeded = (make__V_52_52 == (MR_Integer) 0);
#line 100 "make.m"
                                        make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                        if (make__succeeded)
#line 100 "make.m"
                                          *make__HeadVar__1_1 = make__V_52_52;
#line 100 "make.m"
                                        else
#line 100 "make.m"
                                          {
#line 100 "make.m"
                                            MR_Word make__V_53_53;

#line 100 "make.m"
                                            {
#line 100 "make.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[10], &make__V_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                            }
#line 7350 "make.c"
                                            make__succeeded = (make__V_53_53 == (MR_Integer) 0);
#line 100 "make.m"
                                            make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                            if (make__succeeded)
#line 100 "make.m"
                                              *make__HeadVar__1_1 = make__V_53_53;
#line 100 "make.m"
                                            else
#line 100 "make.m"
                                              {
#line 100 "make.m"
                                                MR_Word make__V_54_54;

#line 100 "make.m"
                                                {
#line 100 "make.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[10], &make__V_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                }
#line 7370 "make.c"
                                                make__succeeded = (make__V_54_54 == (MR_Integer) 0);
#line 100 "make.m"
                                                make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                if (make__succeeded)
#line 100 "make.m"
                                                  *make__HeadVar__1_1 = make__V_54_54;
#line 100 "make.m"
                                                else
#line 100 "make.m"
                                                  {
#line 100 "make.m"
                                                    MR_Word make__V_55_55;

#line 100 "make.m"
                                                    {
#line 100 "make.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[11], &make__V_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                    }
#line 7390 "make.c"
                                                    make__succeeded = (make__V_55_55 == (MR_Integer) 0);
#line 100 "make.m"
                                                    make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                    if (make__succeeded)
#line 100 "make.m"
                                                      *make__HeadVar__1_1 = make__V_55_55;
#line 100 "make.m"
                                                    else
#line 100 "make.m"
                                                      {
#line 100 "make.m"
                                                        MR_Word make__V_56_56;

#line 100 "make.m"
                                                        {
#line 100 "make.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[10], &make__V_56_56, ((MR_Box) (make__V_16_16)), ((MR_Box) (make__V_36_36)));
                                                        }
#line 7410 "make.c"
                                                        make__succeeded = (make__V_56_56 == (MR_Integer) 0);
#line 100 "make.m"
                                                        make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                        if (make__succeeded)
#line 100 "make.m"
                                                          *make__HeadVar__1_1 = make__V_56_56;
#line 100 "make.m"
                                                        else
#line 100 "make.m"
                                                          {
#line 100 "make.m"
                                                            MR_Word make__V_57_57;
#line 100 "make.m"
                                                            MR_Integer make__V_85_85 = (MR_Integer) make__V_17_17;
#line 100 "make.m"
                                                            MR_Integer make__V_86_86 = (MR_Integer) make__V_37_37;

#line 100 "make.m"
                                                            {
#line 100 "make.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_57_57, make__V_85_85, make__V_86_86);
                                                            }
#line 7434 "make.c"
                                                            make__succeeded = (make__V_57_57 == (MR_Integer) 0);
#line 100 "make.m"
                                                            make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                            if (make__succeeded)
#line 100 "make.m"
                                                              *make__HeadVar__1_1 = make__V_57_57;
#line 100 "make.m"
                                                            else
#line 100 "make.m"
                                                              {
#line 100 "make.m"
                                                                MR_Word make__V_58_58;
#line 100 "make.m"
                                                                MR_Integer make__V_87_87 = (MR_Integer) make__V_18_18;
#line 100 "make.m"
                                                                MR_Integer make__V_88_88 = (MR_Integer) make__V_38_38;

#line 100 "make.m"
                                                                {
#line 100 "make.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_58_58, make__V_87_87, make__V_88_88);
                                                                }
#line 7458 "make.c"
                                                                make__succeeded = (make__V_58_58 == (MR_Integer) 0);
#line 100 "make.m"
                                                                make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                                if (make__succeeded)
#line 100 "make.m"
                                                                  *make__HeadVar__1_1 = make__V_58_58;
#line 100 "make.m"
                                                                else
#line 100 "make.m"
                                                                  {
#line 100 "make.m"
                                                                    MR_Word make__V_59_59;

#line 100 "make.m"
                                                                    {
#line 100 "make.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[5], &make__V_59_59, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                    }
#line 7478 "make.c"
                                                                    make__succeeded = (make__V_59_59 == (MR_Integer) 0);
#line 100 "make.m"
                                                                    make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                                    if (make__succeeded)
#line 100 "make.m"
                                                                      *make__HeadVar__1_1 = make__V_59_59;
#line 100 "make.m"
                                                                    else
#line 100 "make.m"
                                                                      {
#line 100 "make.m"
                                                                        MR_Word make__V_60_60;

#line 100 "make.m"
                                                                        {
#line 100 "make.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[6], &make__V_60_60, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                        }
#line 7498 "make.c"
                                                                        make__succeeded = (make__V_60_60 == (MR_Integer) 0);
#line 100 "make.m"
                                                                        make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                                        if (make__succeeded)
#line 100 "make.m"
                                                                          *make__HeadVar__1_1 = make__V_60_60;
#line 100 "make.m"
                                                                        else
#line 100 "make.m"
                                                                          {
#line 100 "make.m"
                                                                            MR_Word make__V_61_61;

#line 100 "make.m"
                                                                            {
#line 100 "make.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[7], &make__V_61_61, ((MR_Box) (make__V_21_21)), ((MR_Box) (make__V_41_41)));
                                                                            }
#line 7518 "make.c"
                                                                            make__succeeded = (make__V_61_61 == (MR_Integer) 0);
#line 100 "make.m"
                                                                            make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                                            if (make__succeeded)
#line 100 "make.m"
                                                                              *make__HeadVar__1_1 = make__V_61_61;
#line 100 "make.m"
                                                                            else
#line 100 "make.m"
                                                                              {
#line 100 "make.m"
                                                                                MR_Word make__V_62_62;

#line 100 "make.m"
                                                                                {
#line 100 "make.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_62_62, make__V_22_22, make__V_42_42);
                                                                                }
#line 7538 "make.c"
                                                                                make__succeeded = (make__V_62_62 == (MR_Integer) 0);
#line 100 "make.m"
                                                                                make__succeeded = !(make__succeeded);
#line 100 "make.m"
                                                                                if (make__succeeded)
#line 100 "make.m"
                                                                                  *make__HeadVar__1_1 = make__V_62_62;
#line 100 "make.m"
                                                                                else
#line 100 "make.m"
                                                                                  {
#line 100 "make.m"
                                                                                    {
#line 100 "make.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[8], make__HeadVar__1_1, ((MR_Box) (make__V_23_23)), ((MR_Box) (make__V_43_43)));
                                                                                    }
#line 100 "make.m"
                                                                                  }
#line 100 "make.m"
                                                                              }
#line 100 "make.m"
                                                                          }
#line 100 "make.m"
                                                                      }
#line 100 "make.m"
                                                                  }
#line 100 "make.m"
                                                              }
#line 100 "make.m"
                                                          }
#line 100 "make.m"
                                                      }
#line 100 "make.m"
                                                  }
#line 100 "make.m"
                                              }
#line 100 "make.m"
                                          }
#line 100 "make.m"
                                      }
#line 100 "make.m"
                                  }
#line 100 "make.m"
                              }
#line 100 "make.m"
                          }
#line 100 "make.m"
                      }
#line 100 "make.m"
                  }
#line 100 "make.m"
              }
#line 100 "make.m"
          }
#line 100 "make.m"
      }
#line 100 "make.m"
  }
#line 100 "make.m"
}

#line 100 "make.m"
MR_bool MR_CALL 
make____Unify____make_info_0_0(
#line 100 "make.m"
  MR_Word make__HeadVar__1_1,
#line 100 "make.m"
  MR_Word make__HeadVar__2_2)
#line 100 "make.m"
{
#line 100 "make.m"
  {
#line 100 "make.m"
    MR_bool make__succeeded;
#line 100 "make.m"
    MR_Integer make__CastX_43 = (MR_Integer) make__HeadVar__1_1;
#line 100 "make.m"
    MR_Integer make__CastY_44 = (MR_Integer) make__HeadVar__2_2;

#line 100 "make.m"
    make__succeeded = (make__CastX_43 == make__CastY_44);
#line 100 "make.m"
    if (make__succeeded)
#line 100 "make.m"
      make__succeeded = MR_TRUE;
#line 100 "make.m"
    else
#line 100 "make.m"
      {
#line 100 "make.m"
        MR_Word make__TypeInfo_46_46;
#line 100 "make.m"
        MR_Word make__TypeInfo_47_47;
#line 100 "make.m"
        MR_Word make__TypeInfo_48_48;
#line 100 "make.m"
        MR_Word make__TypeInfo_49_49;
#line 100 "make.m"
        MR_Word make__TypeInfo_50_50;
#line 100 "make.m"
        MR_Word make__TypeInfo_51_51;
#line 100 "make.m"
        MR_Word make__TypeInfo_52_52;
#line 100 "make.m"
        MR_Word make__TypeInfo_53_53;
#line 100 "make.m"
        MR_Word make__TypeInfo_54_54;
#line 100 "make.m"
        MR_Word make__TypeInfo_55_55;
#line 100 "make.m"
        MR_Word make__TypeInfo_56_56;
#line 100 "make.m"
        MR_Word make__TypeInfo_57_57;
#line 100 "make.m"
        MR_Word make__TypeInfo_58_58;
#line 100 "make.m"
        MR_Word make__TypeInfo_59_59;
#line 100 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 100 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
#line 100 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 3)));
#line 100 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 4)));
#line 100 "make.m"
        MR_Word make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 5)));
#line 100 "make.m"
        MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 6)));
#line 100 "make.m"
        MR_Word make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 7)));
#line 100 "make.m"
        MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 8)));
#line 100 "make.m"
        MR_Word make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 9)));
#line 100 "make.m"
        MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 10)));
#line 100 "make.m"
        MR_Word make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 11)));
#line 100 "make.m"
        MR_Word make__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 12)));
#line 100 "make.m"
        MR_Word make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Word make__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 17)));
#line 100 "make.m"
        MR_Integer make__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 18)));
#line 100 "make.m"
        MR_Word make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 19)));
#line 100 "make.m"
        MR_Word make__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "make.m"
        MR_Word make__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "make.m"
        MR_Word make__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "make.m"
        MR_Word make__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "make.m"
        MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "make.m"
        MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "make.m"
        MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 6)));
#line 100 "make.m"
        MR_Word make__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 7)));
#line 100 "make.m"
        MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 8)));
#line 100 "make.m"
        MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 9)));
#line 100 "make.m"
        MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 10)));
#line 100 "make.m"
        MR_Word make__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 11)));
#line 100 "make.m"
        MR_Word make__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)));
#line 100 "make.m"
        MR_Word make__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Word make__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 17)));
#line 100 "make.m"
        MR_Integer make__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 18)));
#line 100 "make.m"
        MR_Word make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 19)));

#line 7737 "make.c"
        {
#line 7739 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[6], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_23_23)));
        }
#line 100 "make.m"
        if (make__succeeded)
#line 100 "make.m"
          {
#line 7746 "make.c"
            make__TypeInfo_46_46 = (MR_Word) &make_scalar_common_1[5];
#line 7748 "make.c"
            {
#line 7750 "make.c"
              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_46_46, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_24_24)));
            }
#line 100 "make.m"
            if (make__succeeded)
#line 100 "make.m"
              {
#line 7757 "make.c"
                make__TypeInfo_47_47 = (MR_Word) &make_scalar_common_1[7];
#line 7759 "make.c"
                {
#line 7761 "make.c"
                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_47_47, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_25_25)));
                }
#line 100 "make.m"
                if (make__succeeded)
#line 100 "make.m"
                  {
#line 7768 "make.c"
                    make__TypeInfo_48_48 = (MR_Word) &make_scalar_common_2[3];
#line 7770 "make.c"
                    {
#line 7772 "make.c"
                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_48_48, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_26_26)));
                    }
#line 100 "make.m"
                    if (make__succeeded)
#line 100 "make.m"
                      {
#line 7779 "make.c"
                        make__TypeInfo_49_49 = (MR_Word) &make_scalar_common_2[3];
#line 7781 "make.c"
                        {
#line 7783 "make.c"
                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_49_49, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_27_27)));
                        }
#line 100 "make.m"
                        if (make__succeeded)
#line 100 "make.m"
                          {
#line 7790 "make.c"
                            make__TypeInfo_50_50 = (MR_Word) &make_scalar_common_1[8];
#line 7792 "make.c"
                            {
#line 7794 "make.c"
                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_50_50, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_28_28)));
                            }
#line 100 "make.m"
                            if (make__succeeded)
#line 100 "make.m"
                              {
#line 7801 "make.c"
                                {
#line 7803 "make.c"
                                  make__succeeded = make____Unify____module_index_map_0_0(make__V_9_9, make__V_29_29);
                                }
#line 100 "make.m"
                                if (make__succeeded)
#line 100 "make.m"
                                  {
#line 7810 "make.c"
                                    {
#line 7812 "make.c"
                                      make__succeeded = make____Unify____dependency_file_index_map_0_0(make__V_10_10, make__V_30_30);
                                    }
#line 100 "make.m"
                                    if (make__succeeded)
#line 100 "make.m"
                                      {
#line 7819 "make.c"
                                        make__TypeInfo_51_51 = (MR_Word) &make_scalar_common_1[9];
#line 7821 "make.c"
                                        {
#line 7823 "make.c"
                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_51_51, ((MR_Box) (make__V_11_11)), ((MR_Box) (make__V_31_31)));
                                        }
#line 100 "make.m"
                                        if (make__succeeded)
#line 100 "make.m"
                                          {
#line 7830 "make.c"
                                            make__TypeInfo_52_52 = (MR_Word) &make_scalar_common_1[10];
#line 7832 "make.c"
                                            {
#line 7834 "make.c"
                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                            }
#line 100 "make.m"
                                            if (make__succeeded)
#line 100 "make.m"
                                              {
#line 7841 "make.c"
                                                make__TypeInfo_53_53 = (MR_Word) &make_scalar_common_1[10];
#line 7843 "make.c"
                                                {
#line 7845 "make.c"
                                                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                                }
#line 100 "make.m"
                                                if (make__succeeded)
#line 100 "make.m"
                                                  {
#line 7852 "make.c"
                                                    make__TypeInfo_54_54 = (MR_Word) &make_scalar_common_1[11];
#line 7854 "make.c"
                                                    {
#line 7856 "make.c"
                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                    }
#line 100 "make.m"
                                                    if (make__succeeded)
#line 100 "make.m"
                                                      {
#line 7863 "make.c"
                                                        make__TypeInfo_55_55 = (MR_Word) &make_scalar_common_1[10];
#line 7865 "make.c"
                                                        {
#line 7867 "make.c"
                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                        }
#line 100 "make.m"
                                                        if (make__succeeded)
#line 100 "make.m"
                                                          {
#line 7874 "make.c"
                                                            make__succeeded = (make__V_16_16 == make__V_36_36);
#line 100 "make.m"
                                                            if (make__succeeded)
#line 100 "make.m"
                                                              {
#line 7880 "make.c"
                                                                make__succeeded = (make__V_17_17 == make__V_37_37);
#line 100 "make.m"
                                                                if (make__succeeded)
#line 100 "make.m"
                                                                  {
#line 7886 "make.c"
                                                                    make__TypeInfo_56_56 = (MR_Word) &make_scalar_common_2[5];
#line 7888 "make.c"
                                                                    {
#line 7890 "make.c"
                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_56_56, ((MR_Box) (make__V_18_18)), ((MR_Box) (make__V_38_38)));
                                                                    }
#line 100 "make.m"
                                                                    if (make__succeeded)
#line 100 "make.m"
                                                                      {
#line 7897 "make.c"
                                                                        make__TypeInfo_57_57 = (MR_Word) &make_scalar_common_2[6];
#line 7899 "make.c"
                                                                        {
#line 7901 "make.c"
                                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_57_57, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                        }
#line 100 "make.m"
                                                                        if (make__succeeded)
#line 100 "make.m"
                                                                          {
#line 7908 "make.c"
                                                                            make__TypeInfo_58_58 = (MR_Word) &make_scalar_common_2[7];
#line 7910 "make.c"
                                                                            {
#line 7912 "make.c"
                                                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_58_58, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                            }
#line 100 "make.m"
                                                                            if (make__succeeded)
#line 100 "make.m"
                                                                              {
#line 7919 "make.c"
                                                                                make__succeeded = (make__V_21_21 == make__V_41_41);
#line 100 "make.m"
                                                                                if (make__succeeded)
#line 100 "make.m"
                                                                                  {
#line 7925 "make.c"
                                                                                    make__TypeInfo_59_59 = (MR_Word) &make_scalar_common_2[8];
#line 7927 "make.c"
                                                                                    {
#line 7929 "make.c"
                                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_59_59, ((MR_Box) (make__V_22_22)), ((MR_Box) (make__V_42_42)));
                                                                                    }
#line 100 "make.m"
                                                                                  }
#line 100 "make.m"
                                                                              }
#line 100 "make.m"
                                                                          }
#line 100 "make.m"
                                                                      }
#line 100 "make.m"
                                                                  }
#line 100 "make.m"
                                                              }
#line 100 "make.m"
                                                          }
#line 100 "make.m"
                                                      }
#line 100 "make.m"
                                                  }
#line 100 "make.m"
                                              }
#line 100 "make.m"
                                          }
#line 100 "make.m"
                                      }
#line 100 "make.m"
                                  }
#line 100 "make.m"
                              }
#line 100 "make.m"
                          }
#line 100 "make.m"
                      }
#line 100 "make.m"
                  }
#line 100 "make.m"
              }
#line 100 "make.m"
          }
#line 100 "make.m"
      }
#line 100 "make.m"
    return make__succeeded;
#line 100 "make.m"
  }
#line 100 "make.m"
}

#line 194 "make.m"
void MR_CALL 
make____Compare____make_error_0_0(
#line 194 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 194 "make.m"
  MR_Word make__HeadVar__2_2,
#line 194 "make.m"
  MR_Word make__HeadVar__3_3)
#line 194 "make.m"
{
#line 194 "make.m"
  {
#line 194 "make.m"
    MR_bool make__succeeded;
#line 194 "make.m"
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
#line 194 "make.m"
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

#line 194 "make.m"
    make__succeeded = (make__CastX_22 == make__CastY_23);
#line 194 "make.m"
    if (make__succeeded)
#line 8003 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 194 "make.m"
    else
#line 194 "make.m"
#line 194 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
#line 194 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 194 "make.m"
        case (MR_Integer) 0:
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_Word make__V_29_29 = (MR_Word) MR_body(((MR_Word) make__HeadVar__2_2), (MR_Integer) 0);

#line 194 "make.m"
#line 194 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 194 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 194 "make.m"
              case (MR_Integer) 0:
#line 194 "make.m"
                {
#line 194 "make.m"
                  MR_Word make__V_5_5 = (MR_Word) MR_body(((MR_Word) make__HeadVar__3_3), (MR_Integer) 0);

#line 194 "make.m"
                  {
#line 194 "make.m"
                    make____Compare____target_file_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
                  }
#line 194 "make.m"
                }
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 1:
#line 8042 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 2:
#line 8048 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
                break;
#line 194 "make.m"
            }
#line 194 "make.m"
          }
#line 194 "make.m"
          break;
#line 194 "make.m"
        case (MR_Integer) 1:
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 194 "make.m"
#line 194 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 194 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 194 "make.m"
              case (MR_Integer) 0:
#line 8072 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 1:
#line 194 "make.m"
                {
#line 194 "make.m"
                  MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

#line 194 "make.m"
                  {
#line 194 "make.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(make__HeadVar__1_1, make__V_27_27, make__V_13_13);
                  }
#line 194 "make.m"
                }
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 2:
#line 8094 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
                break;
#line 194 "make.m"
            }
#line 194 "make.m"
          }
#line 194 "make.m"
          break;
#line 194 "make.m"
        case (MR_Integer) 2:
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_String make__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 194 "make.m"
#line 194 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 194 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 194 "make.m"
              case (MR_Integer) 0:
#line 8118 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 1:
#line 8124 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 2:
#line 194 "make.m"
                {
#line 194 "make.m"
                  MR_String make__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

#line 194 "make.m"
                  {
#line 194 "make.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
                  }
#line 194 "make.m"
                }
#line 194 "make.m"
                break;
#line 194 "make.m"
            }
#line 194 "make.m"
          }
#line 194 "make.m"
          break;
#line 194 "make.m"
      }
#line 194 "make.m"
  }
#line 194 "make.m"
}

#line 194 "make.m"
MR_bool MR_CALL 
make____Unify____make_error_0_0(
#line 194 "make.m"
  MR_Word make__HeadVar__1_1,
#line 194 "make.m"
  MR_Word make__HeadVar__2_2)
#line 194 "make.m"
{
#line 194 "make.m"
  {
#line 194 "make.m"
    MR_bool make__succeeded;
#line 194 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 194 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 194 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 194 "make.m"
    if (make__succeeded)
#line 194 "make.m"
      make__succeeded = MR_TRUE;
#line 194 "make.m"
    else
#line 194 "make.m"
#line 194 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 194 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 194 "make.m"
        case (MR_Integer) 0:
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_Word make__V_3_3 = (MR_Word) MR_body(((MR_Word) make__HeadVar__1_1), (MR_Integer) 0);
#line 194 "make.m"
            MR_Word make__V_4_4;

#line 194 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 194 "make.m"
            if (make__succeeded)
#line 194 "make.m"
              {
#line 194 "make.m"
                make__V_4_4 = (MR_Word) MR_body(((MR_Word) make__HeadVar__2_2), (MR_Integer) 0);
#line 8205 "make.c"
                {
#line 8207 "make.c"
                  make__succeeded = make____Unify____target_file_0_0(make__V_3_3, make__V_4_4);
                }
#line 194 "make.m"
              }
#line 194 "make.m"
          }
#line 194 "make.m"
          break;
#line 194 "make.m"
        case (MR_Integer) 1:
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 194 "make.m"
            MR_Word make__V_6_6;

#line 194 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 194 "make.m"
            if (make__succeeded)
#line 194 "make.m"
              {
#line 194 "make.m"
                make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 8233 "make.c"
                {
#line 8235 "make.c"
                  make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_5_5, make__V_6_6);
                }
#line 194 "make.m"
              }
#line 194 "make.m"
          }
#line 194 "make.m"
          break;
#line 194 "make.m"
        case (MR_Integer) 2:
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 194 "make.m"
            MR_String make__V_8_8;

#line 194 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 194 "make.m"
            if (make__succeeded)
#line 194 "make.m"
              {
#line 194 "make.m"
                make__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 8261 "make.c"
                make__succeeded = (strcmp(make__V_7_7, make__V_8_8) == 0);
#line 194 "make.m"
              }
#line 194 "make.m"
          }
#line 194 "make.m"
          break;
#line 194 "make.m"
      }
#line 194 "make.m"
    return make__succeeded;
#line 194 "make.m"
  }
#line 194 "make.m"
}

#line 269 "make.m"
void MR_CALL 
make____Compare____linked_target_file_0_0(
#line 269 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 269 "make.m"
  MR_Word make__HeadVar__2_2,
#line 269 "make.m"
  MR_Word make__HeadVar__3_3)
#line 269 "make.m"
{
#line 269 "make.m"
  {
#line 269 "make.m"
    MR_bool make__succeeded;
#line 269 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 269 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 269 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 269 "make.m"
    if (make__succeeded)
#line 8302 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "make.m"
    else
#line 269 "make.m"
      {
#line 269 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 269 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 269 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 269 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 269 "make.m"
        MR_Word make__V_8_8;

#line 269 "make.m"
        {
#line 269 "make.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 8324 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 269 "make.m"
        make__succeeded = !(make__succeeded);
#line 269 "make.m"
        if (make__succeeded)
#line 269 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 269 "make.m"
        else
#line 269 "make.m"
          {
#line 269 "make.m"
            MR_Integer make__V_13_13 = (MR_Integer) make__V_5_5;
#line 269 "make.m"
            MR_Integer make__V_14_14 = (MR_Integer) make__V_7_7;

#line 269 "make.m"
            {
#line 269 "make.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_13_13, make__V_14_14);
            }
#line 269 "make.m"
          }
#line 269 "make.m"
      }
#line 269 "make.m"
  }
#line 269 "make.m"
}

#line 269 "make.m"
MR_bool MR_CALL 
make____Unify____linked_target_file_0_0(
#line 269 "make.m"
  MR_Word make__HeadVar__1_1,
#line 269 "make.m"
  MR_Word make__HeadVar__2_2)
#line 269 "make.m"
{
#line 269 "make.m"
  {
#line 269 "make.m"
    MR_bool make__succeeded;
#line 269 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 269 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 269 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 269 "make.m"
    if (make__succeeded)
#line 269 "make.m"
      make__succeeded = MR_TRUE;
#line 269 "make.m"
    else
#line 269 "make.m"
      {
#line 269 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 269 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8392 "make.c"
        {
#line 8394 "make.c"
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 269 "make.m"
        if (make__succeeded)
#line 8399 "make.c"
          make__succeeded = (make__V_4_4 == make__V_6_6);
#line 269 "make.m"
      }
#line 269 "make.m"
    return make__succeeded;
#line 269 "make.m"
  }
#line 269 "make.m"
}

#line 592 "make.m"
void MR_CALL 
make____Compare____last_hash_0_0(
#line 592 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 592 "make.m"
  MR_Word make__HeadVar__2_2,
#line 592 "make.m"
  MR_Word make__HeadVar__3_3)
#line 592 "make.m"
{
#line 592 "make.m"
  {
#line 592 "make.m"
    MR_bool make__succeeded;
#line 592 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 592 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 592 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 592 "make.m"
    if (make__succeeded)
#line 8434 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 592 "make.m"
    else
#line 592 "make.m"
      {
#line 592 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 592 "make.m"
        MR_String make__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 592 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 592 "make.m"
        MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 592 "make.m"
        MR_Word make__V_8_8;

#line 592 "make.m"
        {
#line 592 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_8_8, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_6_6)));
        }
#line 8456 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 592 "make.m"
        make__succeeded = !(make__succeeded);
#line 592 "make.m"
        if (make__succeeded)
#line 592 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 592 "make.m"
        else
#line 592 "make.m"
          {
#line 592 "make.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
          }
#line 592 "make.m"
      }
#line 592 "make.m"
  }
#line 592 "make.m"
}

#line 592 "make.m"
MR_bool MR_CALL 
make____Unify____last_hash_0_0(
#line 592 "make.m"
  MR_Word make__HeadVar__1_1,
#line 592 "make.m"
  MR_Word make__HeadVar__2_2)
#line 592 "make.m"
{
#line 592 "make.m"
  {
#line 592 "make.m"
    MR_bool make__succeeded;
#line 592 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 592 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 592 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 592 "make.m"
    if (make__succeeded)
#line 592 "make.m"
      make__succeeded = MR_TRUE;
#line 592 "make.m"
    else
#line 592 "make.m"
      {
#line 592 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 592 "make.m"
        MR_String make__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 592 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 592 "make.m"
        MR_String make__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8515 "make.c"
        {
#line 8517 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_5_5)));
        }
#line 592 "make.m"
        if (make__succeeded)
#line 8522 "make.c"
          make__succeeded = (strcmp(make__V_4_4, make__V_6_6) == 0);
#line 592 "make.m"
      }
#line 592 "make.m"
    return make__succeeded;
#line 592 "make.m"
  }
#line 592 "make.m"
}

#line 255 "make.m"
void MR_CALL 
make____Compare____file_timestamps_0_0(
#line 255 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 255 "make.m"
  MR_Word make__HeadVar__2_2,
#line 255 "make.m"
  MR_Word make__HeadVar__3_3)
#line 255 "make.m"
{
#line 255 "make.m"
  {
#line 255 "make.m"
    MR_bool make__succeeded;
#line 255 "make.m"
    MR_Word make__Cast_HeadVar1_4 = make__HeadVar__2_2;
#line 255 "make.m"
    MR_Word make__Cast_HeadVar2_5 = make__HeadVar__3_3;

#line 255 "make.m"
    {
#line 255 "make.m"
      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], make__HeadVar__1_1, ((MR_Box) (make__Cast_HeadVar1_4)), ((MR_Box) (make__Cast_HeadVar2_5)));
    }
#line 255 "make.m"
  }
#line 255 "make.m"
}

#line 255 "make.m"
MR_bool MR_CALL 
make____Unify____file_timestamps_0_0(
#line 255 "make.m"
  MR_Word make__HeadVar__1_1,
#line 255 "make.m"
  MR_Word make__HeadVar__2_2)
#line 255 "make.m"
{
#line 255 "make.m"
  {
#line 255 "make.m"
    MR_bool make__succeeded;
#line 255 "make.m"
    MR_Word make__Cast_HeadVar1_3 = make__HeadVar__1_1;
#line 255 "make.m"
    MR_Word make__Cast_HeadVar2_4 = make__HeadVar__2_2;

#line 255 "make.m"
    {
#line 255 "make.m"
      make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[5], ((MR_Box) (make__Cast_HeadVar1_3)), ((MR_Box) (make__Cast_HeadVar2_4)));
    }
#line 255 "make.m"
    return make__succeeded;
#line 255 "make.m"
  }
#line 255 "make.m"
}

#line 257 "make.m"
void MR_CALL 
make____Compare____dependency_status_0_0(
#line 257 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 257 "make.m"
  MR_Word make__HeadVar__2_2,
#line 257 "make.m"
  MR_Word make__HeadVar__3_3)
#line 257 "make.m"
{
#line 257 "make.m"
  {
#line 257 "make.m"
    MR_bool make__succeeded;
#line 257 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 257 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 257 "make.m"
    {
#line 257 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
#line 257 "make.m"
  }
#line 257 "make.m"
}

#line 257 "make.m"
MR_bool MR_CALL 
make____Unify____dependency_status_0_0(
#line 257 "make.m"
  MR_Word make__HeadVar__2_1,
#line 257 "make.m"
  MR_Word make__HeadVar__2_2)
#line 257 "make.m"
{
#line 8632 "make.c"
  {
#line 8634 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 8637 "make.c"
    return make__succeeded;
#line 8639 "make.c"
  }
#line 257 "make.m"
}

#line 186 "make.m"
void MR_CALL 
make____Compare____dependency_file_index_map_0_0(
#line 186 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 186 "make.m"
  MR_Word make__HeadVar__2_2,
#line 186 "make.m"
  MR_Word make__HeadVar__3_3)
#line 186 "make.m"
{
#line 186 "make.m"
  {
#line 186 "make.m"
    MR_bool make__succeeded;
#line 186 "make.m"
    MR_Integer make__CastX_12 = (MR_Integer) make__HeadVar__2_2;
#line 186 "make.m"
    MR_Integer make__CastY_13 = (MR_Integer) make__HeadVar__3_3;

#line 186 "make.m"
    make__succeeded = (make__CastX_12 == make__CastY_13);
#line 186 "make.m"
    if (make__succeeded)
#line 8668 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 186 "make.m"
    else
#line 186 "make.m"
      {
#line 186 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "make.m"
        MR_Box make__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "make.m"
        MR_Integer make__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
#line 186 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "make.m"
        MR_Box make__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 186 "make.m"
        MR_Integer make__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
#line 186 "make.m"
        MR_Word make__V_10_10;

#line 186 "make.m"
        {
#line 186 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[4], &make__V_10_10, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_7_7)));
        }
#line 8694 "make.c"
        make__succeeded = (make__V_10_10 == (MR_Integer) 0);
#line 186 "make.m"
        make__succeeded = !(make__succeeded);
#line 186 "make.m"
        if (make__succeeded)
#line 186 "make.m"
          *make__HeadVar__1_1 = make__V_10_10;
#line 186 "make.m"
        else
#line 186 "make.m"
          {
#line 186 "make.m"
            MR_Word make__V_11_11;

#line 186 "make.m"
            {
#line 186 "make.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[2], &make__V_11_11, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_8_8)));
            }
#line 8714 "make.c"
            make__succeeded = (make__V_11_11 == (MR_Integer) 0);
#line 186 "make.m"
            make__succeeded = !(make__succeeded);
#line 186 "make.m"
            if (make__succeeded)
#line 186 "make.m"
              *make__HeadVar__1_1 = make__V_11_11;
#line 186 "make.m"
            else
#line 186 "make.m"
              {
#line 186 "make.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_6_6, make__V_9_9);
              }
#line 186 "make.m"
          }
#line 186 "make.m"
      }
#line 186 "make.m"
  }
#line 186 "make.m"
}

#line 186 "make.m"
MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0(
#line 186 "make.m"
  MR_Word make__HeadVar__1_1,
#line 186 "make.m"
  MR_Word make__HeadVar__2_2)
#line 186 "make.m"
{
#line 186 "make.m"
  {
#line 186 "make.m"
    MR_bool make__succeeded;
#line 186 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 186 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 186 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 186 "make.m"
    if (make__succeeded)
#line 186 "make.m"
      make__succeeded = MR_TRUE;
#line 186 "make.m"
    else
#line 186 "make.m"
      {
#line 186 "make.m"
        MR_Word make__TypeCtorInfo_12_12;
#line 186 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "make.m"
        MR_Box make__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "make.m"
        MR_Integer make__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
#line 186 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "make.m"
        MR_Box make__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "make.m"
        MR_Integer make__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));

#line 8781 "make.c"
        {
#line 8783 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[4], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 186 "make.m"
        if (make__succeeded)
#line 186 "make.m"
          {
#line 8790 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 8792 "make.c"
            {
#line 8794 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 186 "make.m"
            if (make__succeeded)
#line 8799 "make.c"
              make__succeeded = (make__V_5_5 == make__V_8_8);
#line 186 "make.m"
          }
#line 186 "make.m"
      }
#line 186 "make.m"
    return make__succeeded;
#line 186 "make.m"
  }
#line 186 "make.m"
}

#line 199 "make.m"
void MR_CALL 
make____Compare____compilation_task_type_0_0(
#line 199 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 199 "make.m"
  MR_Word make__HeadVar__2_2,
#line 199 "make.m"
  MR_Word make__HeadVar__3_3)
#line 199 "make.m"
{
#line 199 "make.m"
  {
#line 199 "make.m"
    MR_bool make__succeeded;
#line 199 "make.m"
    MR_Integer make__CastX_54 = (MR_Integer) make__HeadVar__2_2;
#line 199 "make.m"
    MR_Integer make__CastY_55 = (MR_Integer) make__HeadVar__3_3;

#line 199 "make.m"
    make__succeeded = (make__CastX_54 == make__CastY_55);
#line 199 "make.m"
    if (make__succeeded)
#line 8836 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "make.m"
    else
#line 199 "make.m"
#line 199 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
#line 199 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 199 "make.m"
        case (MR_Integer) 0:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
#line 199 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 199 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "make.m"
              case (MR_Integer) 0:
#line 199 "make.m"
                {
#line 199 "make.m"
                  MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "make.m"
                  MR_Integer make__V_74_74 = (MR_Integer) make__V_66_66;
#line 199 "make.m"
                  MR_Integer make__V_75_75 = (MR_Integer) make__V_5_5;

#line 199 "make.m"
                  {
#line 199 "make.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_74_74, make__V_75_75);
                  }
#line 199 "make.m"
                }
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 8879 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 8885 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 8891 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
            }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
        case (MR_Integer) 1:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
#line 199 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 199 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "make.m"
              case (MR_Integer) 0:
#line 8915 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 199 "make.m"
                {
#line 199 "make.m"
                  MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "make.m"
                  MR_Integer make__V_76_76 = (MR_Integer) make__V_67_67;
#line 199 "make.m"
                  MR_Integer make__V_77_77 = (MR_Integer) make__V_17_17;

#line 199 "make.m"
                  {
#line 199 "make.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_76_76, make__V_77_77);
                  }
#line 199 "make.m"
                }
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 8941 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 8947 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
            }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
        case (MR_Integer) 2:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "make.m"
            MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
#line 199 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 199 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "make.m"
              case (MR_Integer) 0:
#line 8973 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 8979 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 199 "make.m"
                {
#line 199 "make.m"
                  MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "make.m"
                  MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "make.m"
                  MR_Word make__V_34_34;
#line 199 "make.m"
                  MR_Integer make__V_70_70 = (MR_Integer) make__V_65_65;
#line 199 "make.m"
                  MR_Integer make__V_71_71 = (MR_Integer) make__V_32_32;

#line 199 "make.m"
                  {
#line 199 "make.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_34_34, make__V_70_70, make__V_71_71);
                  }
#line 9003 "make.c"
                  make__succeeded = (make__V_34_34 == (MR_Integer) 0);
#line 199 "make.m"
                  make__succeeded = !(make__succeeded);
#line 199 "make.m"
                  if (make__succeeded)
#line 199 "make.m"
                    *make__HeadVar__1_1 = make__V_34_34;
#line 199 "make.m"
                  else
#line 199 "make.m"
                    {
#line 199 "make.m"
                      MR_Integer make__V_72_72 = (MR_Integer) make__V_64_64;
#line 199 "make.m"
                      MR_Integer make__V_73_73 = (MR_Integer) make__V_33_33;

#line 199 "make.m"
                      {
#line 199 "make.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_72_72, make__V_73_73);
                      }
#line 199 "make.m"
                    }
#line 199 "make.m"
                }
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 9033 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
            }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
        case (MR_Integer) 3:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_String make__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "make.m"
            MR_Word make__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
#line 199 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 199 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "make.m"
              case (MR_Integer) 0:
#line 9059 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 9065 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 9071 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 199 "make.m"
                {
#line 199 "make.m"
                  MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "make.m"
                  MR_String make__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "make.m"
                  MR_Word make__V_53_53;
#line 199 "make.m"
                  MR_Integer make__V_68_68 = (MR_Integer) make__V_63_63;
#line 199 "make.m"
                  MR_Integer make__V_69_69 = (MR_Integer) make__V_51_51;

#line 199 "make.m"
                  {
#line 199 "make.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_53_53, make__V_68_68, make__V_69_69);
                  }
#line 9095 "make.c"
                  make__succeeded = (make__V_53_53 == (MR_Integer) 0);
#line 199 "make.m"
                  make__succeeded = !(make__succeeded);
#line 199 "make.m"
                  if (make__succeeded)
#line 199 "make.m"
                    *make__HeadVar__1_1 = make__V_53_53;
#line 199 "make.m"
                  else
#line 199 "make.m"
                    {
#line 199 "make.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_62_62, make__V_52_52);
                    }
#line 199 "make.m"
                }
#line 199 "make.m"
                break;
#line 199 "make.m"
            }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
      }
#line 199 "make.m"
  }
#line 199 "make.m"
}

#line 199 "make.m"
MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0(
#line 199 "make.m"
  MR_Word make__HeadVar__1_1,
#line 199 "make.m"
  MR_Word make__HeadVar__2_2)
#line 199 "make.m"
{
#line 199 "make.m"
  {
#line 199 "make.m"
    MR_bool make__succeeded;
#line 199 "make.m"
    MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 199 "make.m"
    MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 199 "make.m"
    make__succeeded = (make__CastX_15 == make__CastY_16);
#line 199 "make.m"
    if (make__succeeded)
#line 199 "make.m"
      make__succeeded = MR_TRUE;
#line 199 "make.m"
    else
#line 199 "make.m"
#line 199 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 199 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 199 "make.m"
        case (MR_Integer) 0:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "make.m"
            MR_Word make__V_4_4;

#line 199 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 199 "make.m"
            if (make__succeeded)
#line 199 "make.m"
              {
#line 199 "make.m"
                make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 9175 "make.c"
                make__succeeded = (make__V_3_3 == make__V_4_4);
#line 199 "make.m"
              }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
        case (MR_Integer) 1:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "make.m"
            MR_Word make__V_6_6;

#line 199 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 199 "make.m"
            if (make__succeeded)
#line 199 "make.m"
              {
#line 199 "make.m"
                make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 9200 "make.c"
                make__succeeded = (make__V_5_5 == make__V_6_6);
#line 199 "make.m"
              }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
        case (MR_Integer) 2:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "make.m"
            MR_Word make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "make.m"
            MR_Word make__V_9_9;
#line 199 "make.m"
            MR_Word make__V_10_10;

#line 199 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 199 "make.m"
            if (make__succeeded)
#line 199 "make.m"
              {
#line 199 "make.m"
                make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "make.m"
                make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 1)));
#line 9231 "make.c"
                make__succeeded = (make__V_7_7 == make__V_9_9);
#line 199 "make.m"
                if (make__succeeded)
#line 9235 "make.c"
                  make__succeeded = (make__V_8_8 == make__V_10_10);
#line 199 "make.m"
              }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
        case (MR_Integer) 3:
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "make.m"
            MR_String make__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "make.m"
            MR_Word make__V_13_13;
#line 199 "make.m"
            MR_String make__V_14_14;

#line 199 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 199 "make.m"
            if (make__succeeded)
#line 199 "make.m"
              {
#line 199 "make.m"
                make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "make.m"
                make__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 9266 "make.c"
                make__succeeded = (make__V_11_11 == make__V_13_13);
#line 199 "make.m"
                if (make__succeeded)
#line 9270 "make.c"
                  make__succeeded = (strcmp(make__V_12_12, make__V_14_14) == 0);
#line 199 "make.m"
              }
#line 199 "make.m"
          }
#line 199 "make.m"
          break;
#line 199 "make.m"
      }
#line 199 "make.m"
    return make__succeeded;
#line 199 "make.m"
  }
#line 199 "make.m"
}

#line 240 "make.m"
void MR_CALL 
make____Compare____c_header_type_0_0(
#line 240 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 240 "make.m"
  MR_Word make__HeadVar__2_2,
#line 240 "make.m"
  MR_Word make__HeadVar__3_3)
#line 240 "make.m"
{
#line 240 "make.m"
  {
#line 240 "make.m"
    MR_bool make__succeeded;
#line 240 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 240 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 240 "make.m"
    {
#line 240 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
    }
#line 240 "make.m"
  }
#line 240 "make.m"
}

#line 240 "make.m"
MR_bool MR_CALL 
make____Unify____c_header_type_0_0(
#line 240 "make.m"
  MR_Word make__HeadVar__2_1,
#line 240 "make.m"
  MR_Word make__HeadVar__2_2)
#line 240 "make.m"
{
#line 9326 "make.c"
  {
#line 9328 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 9331 "make.c"
    return make__succeeded;
#line 9333 "make.c"
  }
#line 240 "make.m"
}

#line 739 "make.m"
void MR_CALL 
make__write_hash_file_5_p_0(
#line 739 "make.m"
  MR_String make__FileName_6,
#line 739 "make.m"
  MR_String make__Hash_7,
#line 739 "make.m"
  MR_Word * make__Success_8)
#line 739 "make.m"
{
#line 742 "make.m"
  {
#line 742 "make.m"
    MR_bool make__succeeded;
#line 742 "make.m"
    MR_Word make__OpenResult_10;

#line 743 "make.m"
    {
#line 743 "make.m"
      mercury__io__open_output_4_p_0(make__FileName_6, &make__OpenResult_10);
    }
#line 749 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 750 "make.m"
      {
#line 750 "make.m"
        MR_Word make__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OpenResult_10, (MR_Integer) 0)));
#line 750 "make.m"
        MR_String make__V_21_21;

#line 751 "make.m"
        {
#line 751 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
        }
#line 752 "make.m"
        {
#line 752 "make.m"
          mercury__io__write_string_3_p_0(make__FileName_6);
        }
#line 753 "make.m"
        {
#line 753 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
#line 754 "make.m"
        {
#line 754 "make.m"
          make__V_21_21 = mercury__io__error_message_1_f_0(make__Error_12);
        }
#line 754 "make.m"
        {
#line 754 "make.m"
          mercury__io__write_string_3_p_0(make__V_21_21);
        }
#line 755 "make.m"
        {
#line 755 "make.m"
          mercury__io__nl_2_p_0();
        }
#line 756 "make.m"
        *make__Success_8 = (MR_Integer) 0;
#line 750 "make.m"
      }
#line 749 "make.m"
    else
#line 745 "make.m"
      {
#line 745 "make.m"
        MR_Word make__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_10, (MR_Integer) 0)));

#line 746 "make.m"
        {
#line 746 "make.m"
          mercury__io__write_string_4_p_0(make__Stream_11, make__Hash_7);
        }
#line 747 "make.m"
        {
#line 747 "make.m"
          mercury__io__close_output_3_p_0(make__Stream_11);
        }
#line 748 "make.m"
        *make__Success_8 = (MR_Integer) 1;
#line 745 "make.m"
      }
#line 742 "make.m"
  }
#line 739 "make.m"
}

#line 695 "make.m"
void MR_CALL 
make__compare_hash_file_6_p_0(
#line 695 "make.m"
  MR_Word make__Globals_7,
#line 695 "make.m"
  MR_String make__FileName_8,
#line 695 "make.m"
  MR_String make__Hash_9,
#line 695 "make.m"
  MR_Word * make__Same_10)
#line 695 "make.m"
{
#line 698 "make.m"
  {
#line 698 "make.m"
    MR_bool make__succeeded;
#line 698 "make.m"
    MR_Word make__OpenResult_12;
#line 698 "make.m"
    MR_Word make__Verbose_18;

#line 699 "make.m"
    {
#line 699 "make.m"
      mercury__io__open_input_4_p_0(make__FileName_8, &make__OpenResult_12);
    }
#line 718 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_12)) == (MR_mktag((MR_Integer) 1))))
#line 721 "make.m"
      *make__Same_10 = (MR_Integer) 0;
#line 718 "make.m"
    else
#line 701 "make.m"
      {
#line 701 "make.m"
        MR_Word make__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_12, (MR_Integer) 0)));
#line 701 "make.m"
        MR_Word make__ReadResult_14;

#line 702 "make.m"
        {
#line 702 "make.m"
          mercury__io__read_line_as_string_4_p_0(make__Stream_13, &make__ReadResult_14);
        }
#line 710 "make.m"
#line 710 "make.m"
        switch (MR_tag((MR_Word) make__ReadResult_14)) {
#line 710 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 710 "make.m"
          case (MR_Integer) 0:
#line 712 "make.m"
            *make__Same_10 = (MR_Integer) 0;
#line 710 "make.m"
            break;
#line 710 "make.m"
          case (MR_Integer) 1:
#line 704 "make.m"
            {
#line 704 "make.m"
              MR_String make__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), make__ReadResult_14, (MR_Integer) 0)));

#line 705 "make.m"
              make__succeeded = (strcmp(make__Line_15, make__Hash_9) == 0);
#line 705 "make.m"
              if (make__succeeded)
#line 706 "make.m"
                *make__Same_10 = (MR_Integer) 1;
#line 705 "make.m"
              else
#line 708 "make.m"
                *make__Same_10 = (MR_Integer) 0;
#line 704 "make.m"
            }
#line 710 "make.m"
            break;
#line 710 "make.m"
          case (MR_Integer) 2:
#line 715 "make.m"
            *make__Same_10 = (MR_Integer) 0;
#line 710 "make.m"
            break;
#line 710 "make.m"
        }
#line 717 "make.m"
        {
#line 717 "make.m"
          mercury__io__close_input_3_p_0(make__Stream_13);
        }
#line 701 "make.m"
      }
#line 723 "make.m"
    {
#line 723 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_7, (MR_Integer) 46, &make__Verbose_18);
    }
#line 735 "make.m"
#line 735 "make.m"
    switch (make__Verbose_18) {
#line 735 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 735 "make.m"
      case (MR_Integer) 0:
#line 736 "make.m"
        {
#line 736 "make.m"
        }
#line 735 "make.m"
        break;
#line 735 "make.m"
      case (MR_Integer) 1:
#line 725 "make.m"
        {
#line 726 "make.m"
          {
#line 726 "make.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 727 "make.m"
          {
#line 727 "make.m"
            mercury__io__write_string_3_p_0(make__FileName_8);
          }
#line 731 "make.m"
#line 731 "make.m"
          switch (*make__Same_10) {
#line 731 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 731 "make.m"
            case (MR_Integer) 0:
#line 732 "make.m"
              {
#line 733 "make.m"
                {
#line 733 "make.m"
                  mercury__io__write_string_3_p_0((MR_String) " will be UPDATED.\n");
                }
#line 732 "make.m"
              }
#line 731 "make.m"
              break;
#line 731 "make.m"
            case (MR_Integer) 1:
#line 729 "make.m"
              {
#line 730 "make.m"
                {
#line 730 "make.m"
                  mercury__io__write_string_3_p_0((MR_String) " does not need updating.\n");
                }
#line 729 "make.m"
              }
#line 731 "make.m"
              break;
#line 731 "make.m"
          }
#line 725 "make.m"
        }
#line 735 "make.m"
        break;
#line 735 "make.m"
    }
#line 698 "make.m"
  }
#line 695 "make.m"
}

#line 689 "make.m"
MR_bool MR_CALL 
make__is_consequential_option_2_p_0(
#line 689 "make.m"
  MR_Word make__InconsequentialOptions_3,
#line 689 "make.m"
  MR_Word make__HeadVar__2_2)
#line 689 "make.m"
{
#line 692 "make.m"
  {
#line 692 "make.m"
    MR_bool make__succeeded;
#line 692 "make.m"
    MR_Word make__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 692 "make.m"
    MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 693 "make.m"
    {
#line 693 "make.m"
      make__succeeded = mercury__set__contains_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, make__InconsequentialOptions_3, ((MR_Box) (make__Option_4)));
    }
#line 693 "make.m"
    make__succeeded = !(make__succeeded);
#line 692 "make.m"
    return make__succeeded;
#line 692 "make.m"
  }
#line 689 "make.m"
}

#line 685 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 685 "make.m"
  MR_Box make__closure_arg,
#line 685 "make.m"
  MR_Box make__wrapper_arg_1)
#line 685 "make.m"
{
#line 685 "make.m"
  {
#line 685 "make.m"
    MR_bool make__succeeded;
#line 685 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 685 "make.m"
    {
#line 685 "make.m"
      make__succeeded = make__is_consequential_option_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_Word) make__wrapper_arg_1));
    }
#line 685 "make.m"
    return make__succeeded;
#line 685 "make.m"
  }
#line 685 "make.m"
}

#line 662 "make.m"
void MR_CALL 
make__option_table_hash_4_p_0(
#line 662 "make.m"
  MR_Word make__AllOptionArgs_5,
#line 662 "make.m"
  MR_String * make__Hash_6)
#line 662 "make.m"
{
#line 665 "make.m"
  {
#line 665 "make.m"
    MR_bool make__succeeded;
#line 665 "make.m"
    MR_Word make__OptionsErrors_10;
#line 665 "make.m"
    MR_Word make__AllOptionArgsGlobals_11;
#line 665 "make.m"
    MR_Word make__OptionTable_14;
#line 665 "make.m"
    MR_Word make__OptionList_15;
#line 665 "make.m"
    MR_Word make__InconsequentialOptions_16;
#line 665 "make.m"
    MR_Word make__ConsequentialOptionList_17;
#line 665 "make.m"
    MR_Word make__V_27_27;
#line 665 "make.m"
    MR_String make__V_28_28;
#line 673 "make.m"
    MR_Word make__V_8_8;
#line 673 "make.m"
    MR_Word make__V_9_9;

#line 673 "make.m"
    {
#line 673 "make.m"
      libs__handle_options__handle_given_options_7_p_0(make__AllOptionArgs_5, &make__V_8_8, &make__V_9_9, &make__OptionsErrors_10, &make__AllOptionArgsGlobals_11);
    }
#line 677 "make.m"
    if ((make__OptionsErrors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "make.m"
      {
#line 676 "make.m"
      }
#line 677 "make.m"
    else
#line 678 "make.m"
      {
#line 679 "make.m"
        {
#line 679 "make.m"
          mercury__require__unexpected_2_p_0((MR_String) "make.m", (MR_String) "predicate \140make.option_table_hash\'/4: handle_options returned with errors");
#line 679 "make.m"
          return;
        }
#line 678 "make.m"
      }
#line 682 "make.m"
    {
#line 682 "make.m"
      libs__globals__get_options_2_p_0(make__AllOptionArgsGlobals_11, &make__OptionTable_14);
    }
#line 683 "make.m"
    {
#line 683 "make.m"
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, make__OptionTable_14, &make__OptionList_15);
    }
#line 684 "make.m"
    {
#line 684 "make.m"
      libs__options__inconsequential_options_1_p_0(&make__InconsequentialOptions_16);
    }
#line 685 "make.m"
    {
#line 685 "make.m"
      make__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 685 "make.m"
      MR_hl_field(MR_mktag(0), make__V_27_27, 0) = ((MR_Box) (&make_scalar_common_4[2]));
#line 685 "make.m"
      MR_hl_field(MR_mktag(0), make__V_27_27, 1) = ((MR_Box) (make__option_table_hash_4_p_0_1));
#line 685 "make.m"
      MR_hl_field(MR_mktag(0), make__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 685 "make.m"
      MR_hl_field(MR_mktag(0), make__V_27_27, 3) = ((MR_Box) (make__InconsequentialOptions_16));
#line 685 "make.m"
    }
#line 685 "make.m"
    {
#line 685 "make.m"
      mercury__list__filter_3_p_0((MR_Word) &make_scalar_common_1[3], make__V_27_27, make__OptionList_15, &make__ConsequentialOptionList_17);
    }
#line 687 "make.m"
    {
#line 687 "make.m"
      make__V_28_28 = mercury__string__string_1_f_0((MR_Word) &make_scalar_common_2[1], ((MR_Box) (make__ConsequentialOptionList_17)));
    }
#line 687 "make.m"
    {
#line 687 "make.m"
      *make__Hash_6 = libs__md4__md4sum_1_f_0(make__V_28_28);
    }
#line 665 "make.m"
  }
#line 662 "make.m"
}

#line 622 "make.m"
void MR_CALL 
make__make_track_flags_files_2_9_p_0(
#line 622 "make.m"
  MR_Word make__Globals_10,
#line 622 "make.m"
  MR_Word make__ModuleName_11,
#line 622 "make.m"
  MR_Word * make__Success_12,
#line 622 "make.m"
  MR_Word make__STATE_VARIABLE_LastHash_0_25,
#line 622 "make.m"
  MR_Word * make__STATE_VARIABLE_LastHash_26,
#line 622 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_27,
#line 622 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_28)
#line 622 "make.m"
{
#line 627 "make.m"
  {
#line 627 "make.m"
    MR_bool make__succeeded;
#line 627 "make.m"
    MR_Word make__OptionsResult_16;
#line 627 "make.m"
    MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
#line 628 "make.m"
    MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
#line 628 "make.m"
    MR_Word make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
#line 628 "make.m"
    MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
#line 628 "make.m"
    MR_Word make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
#line 628 "make.m"
    MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
#line 628 "make.m"
    MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
#line 628 "make.m"
    MR_Word make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
#line 628 "make.m"
    MR_Word make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
#line 628 "make.m"
    MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
#line 628 "make.m"
    MR_Word make__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
#line 628 "make.m"
    MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
#line 628 "make.m"
    MR_Word make__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
#line 628 "make.m"
    MR_Word make__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
#line 628 "make.m"
    MR_Word make__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
#line 628 "make.m"
    MR_Word make__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
#line 628 "make.m"
    MR_Word make__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
#line 628 "make.m"
    MR_Word make__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
#line 628 "make.m"
    MR_Integer make__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
#line 628 "make.m"
    MR_Word make__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));

#line 628 "make.m"
    {
#line 628 "make.m"
      make__options_file__lookup_mmc_module_options_6_p_0(make__Globals_10, make__V_31_31, make__ModuleName_11, &make__OptionsResult_16);
    }
#line 657 "make.m"
    if ((make__OptionsResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "make.m"
      {
#line 659 "make.m"
        *make__Success_12 = (MR_Integer) 0;
#line 658 "make.m"
        *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
#line 658 "make.m"
      }
#line 657 "make.m"
    else
#line 631 "make.m"
      {
#line 631 "make.m"
        MR_Word make__TypeCtorInfo_98_98 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 631 "make.m"
        MR_Word make__ModuleOptionArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OptionsResult_16, (MR_Integer) 0)));
#line 631 "make.m"
        MR_Word make__DetectedGradeFlags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
#line 631 "make.m"
        MR_Word make__OptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
#line 631 "make.m"
        MR_Word make__AllOptionArgs_20;
#line 631 "make.m"
        MR_String make__Hash_22;
#line 631 "make.m"
        MR_String make__HashFileName_23;
#line 631 "make.m"
        MR_Word make__Same_24;
#line 631 "make.m"
        MR_Word make__V_33_33;
#line 632 "make.m"
        MR_Word make__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
#line 632 "make.m"
        MR_Word make__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
#line 632 "make.m"
        MR_Word make__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
#line 632 "make.m"
        MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
#line 632 "make.m"
        MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
#line 632 "make.m"
        MR_Word make__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
#line 632 "make.m"
        MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
#line 632 "make.m"
        MR_Word make__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
#line 632 "make.m"
        MR_Word make__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
#line 632 "make.m"
        MR_Word make__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
#line 632 "make.m"
        MR_Word make__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
#line 632 "make.m"
        MR_Word make__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
#line 632 "make.m"
        MR_Word make__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
#line 632 "make.m"
        MR_Word make__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
#line 632 "make.m"
        MR_Word make__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
#line 632 "make.m"
        MR_Word make__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
#line 632 "make.m"
        MR_Integer make__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
#line 632 "make.m"
        MR_Word make__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
#line 640 "make.m"
        MR_String make__HashPrime_21;
#line 640 "make.m"
        MR_Word make__V_99_99;

#line 634 "make.m"
        {
#line 634 "make.m"
          make__V_33_33 = mercury__list__f_43_43_2_f_0(make__TypeCtorInfo_98_98, make__ModuleOptionArgs_17, make__OptionArgs_19);
        }
#line 634 "make.m"
        {
#line 634 "make.m"
          make__AllOptionArgs_20 = mercury__list__f_43_43_2_f_0(make__TypeCtorInfo_98_98, make__DetectedGradeFlags_18, make__V_33_33);
        }
#line 640 "make.m"
        make__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 0)));
#line 640 "make.m"
        make__HashPrime_21 = ((MR_String) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 1)));
#line 640 "make.m"
        {
#line 640 "make.m"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__AllOptionArgs_20)), ((MR_Box) (make__V_99_99)));
        }
#line 640 "make.m"
        if (make__succeeded)
#line 641 "make.m"
          {
#line 641 "make.m"
            make__Hash_22 = make__HashPrime_21;
#line 641 "make.m"
            *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
#line 641 "make.m"
          }
#line 640 "make.m"
        else
#line 643 "make.m"
          {
#line 643 "make.m"
            {
#line 643 "make.m"
              make__option_table_hash_4_p_0(make__AllOptionArgs_20, &make__Hash_22);
            }
#line 644 "make.m"
            {
#line 644 "make.m"
              MR_Word base;
#line 644 "make.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "make.m"
              *make__STATE_VARIABLE_LastHash_26 = base;
#line 644 "make.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__AllOptionArgs_20));
#line 644 "make.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__Hash_22));
#line 644 "make.m"
            }
#line 643 "make.m"
          }
#line 647 "make.m"
        {
#line 647 "make.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__Globals_10, make__ModuleName_11, (MR_String) ".track_flags", (MR_Integer) 0, &make__HashFileName_23);
        }
#line 649 "make.m"
        {
#line 649 "make.m"
          make__compare_hash_file_6_p_0(make__Globals_10, make__HashFileName_23, make__Hash_22, &make__Same_24);
        }
#line 653 "make.m"
#line 653 "make.m"
        switch (make__Same_24) {
#line 653 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 653 "make.m"
          case (MR_Integer) 0:
#line 655 "make.m"
            {
#line 655 "make.m"
              make__write_hash_file_5_p_0(make__HashFileName_23, make__Hash_22, make__Success_12);
            }
#line 653 "make.m"
            break;
#line 653 "make.m"
          case (MR_Integer) 1:
#line 652 "make.m"
            *make__Success_12 = (MR_Integer) 1;
#line 653 "make.m"
            break;
#line 653 "make.m"
        }
#line 631 "make.m"
      }
#line 627 "make.m"
    *make__STATE_VARIABLE_Info_28 = make__STATE_VARIABLE_Info_0_27;
#line 627 "make.m"
  }
#line 622 "make.m"
}

#line 614 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 614 "make.m"
  MR_Box make__closure_arg,
#line 614 "make.m"
  MR_Box make__wrapper_arg_1,
#line 614 "make.m"
  MR_Box make__wrapper_arg_2,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 614 "make.m"
  MR_Box make__wrapper_arg_4,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 614 "make.m"
  MR_Box make__wrapper_arg_6,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 614 "make.m"
  MR_Box make__wrapper_arg_8,
#line 614 "make.m"
  MR_Box * make__wrapper_arg_9)
#line 614 "make.m"
{
#line 614 "make.m"
  {
#line 614 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 614 "make.m"
    MR_Word make__conv2_Success_12;
#line 614 "make.m"
    MR_Word make__conv1_STATE_VARIABLE_LastHash_26;
#line 614 "make.m"
    MR_Word make__conv0_STATE_VARIABLE_Info_28;

#line 614 "make.m"
    {
#line 614 "make.m"
      make__make_track_flags_files_2_9_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv2_Success_12, ((MR_Word) make__wrapper_arg_4), &make__conv1_STATE_VARIABLE_LastHash_26, ((MR_Word) make__wrapper_arg_6), &make__conv0_STATE_VARIABLE_Info_28);
    }
#line 614 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv2_Success_12));
#line 614 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv1_STATE_VARIABLE_LastHash_26));
#line 614 "make.m"
    *make__wrapper_arg_7 = ((MR_Box) (make__conv0_STATE_VARIABLE_Info_28));
#line 614 "make.m"
  }
#line 614 "make.m"
}

#line 604 "make.m"
void MR_CALL 
make__make_track_flags_files_7_p_0(
#line 604 "make.m"
  MR_Word make__Globals_8,
#line 604 "make.m"
  MR_Word make__ModuleName_9,
#line 604 "make.m"
  MR_Word * make__Success_10,
#line 604 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_18,
#line 604 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_19)
#line 604 "make.m"
{
#line 607 "make.m"
  {
#line 607 "make.m"
    MR_bool make__succeeded;
#line 607 "make.m"
    MR_Word make__Success0_13;
#line 607 "make.m"
    MR_Word make__Modules_14;
#line 607 "make.m"
    MR_Word make__STATE_VARIABLE_Info_22_22;

#line 608 "make.m"
    {
#line 608 "make.m"
      make__dependencies__find_reachable_local_modules_8_p_0(make__Globals_8, make__ModuleName_9, &make__Success0_13, &make__Modules_14, make__STATE_VARIABLE_Info_0_18, &make__STATE_VARIABLE_Info_22_22);
    }
#line 617 "make.m"
#line 617 "make.m"
    switch (make__Success0_13) {
#line 617 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 617 "make.m"
      case (MR_Integer) 0:
#line 618 "make.m"
        {
#line 619 "make.m"
          *make__Success_10 = (MR_Integer) 0;
#line 618 "make.m"
          *make__STATE_VARIABLE_Info_19 = make__STATE_VARIABLE_Info_22_22;
#line 618 "make.m"
        }
#line 617 "make.m"
        break;
#line 617 "make.m"
      case (MR_Integer) 1:
#line 611 "make.m"
        {
#line 611 "make.m"
          MR_Word make__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 611 "make.m"
          MR_Word make__V_27_27;
#line 614 "make.m"
          MR_Word make___LastHash_17;
#line 614 "make.m"
          MR_Box make__conv5__LastHash_17;
#line 614 "make.m"
          MR_Box make__conv4_STATE_VARIABLE_Info_19;
#line 614 "make.m"
          MR_Box make__conv3_STATE_VARIABLE_IO_21;

#line 615 "make.m"
          {
#line 615 "make.m"
            make__V_27_27 = mercury__set__to_sorted_list_1_f_0(make__TypeCtorInfo_39_39, make__Modules_14);
          }
#line 614 "make.m"
          {
#line 614 "make.m"
            make__util__foldl3_maybe_stop_at_error_11_p_0(make__TypeCtorInfo_39_39, (MR_Word) &make__make__type_ctor_info_last_hash_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Integer) 0, (MR_Word) &make_scalar_common_1[20], make__Globals_8, make__V_27_27, make__Success_10, ((MR_Box) (&make_scalar_common_2[10])), &make__conv5__LastHash_17, ((MR_Box) (make__STATE_VARIABLE_Info_22_22)), &make__conv4_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &make__conv3_STATE_VARIABLE_IO_21);
          }
#line 614 "make.m"
          make___LastHash_17 = ((MR_Word) make__conv5__LastHash_17);
#line 614 "make.m"
          *make__STATE_VARIABLE_Info_19 = ((MR_Word) make__conv4_STATE_VARIABLE_Info_19);
#line 611 "make.m"
        }
#line 617 "make.m"
        break;
#line 617 "make.m"
    }
#line 607 "make.m"
  }
#line 604 "make.m"
}

#line 572 "make.m"
MR_Word MR_CALL 
make__get_executable_type_1_f_0(
#line 572 "make.m"
  MR_Word make__Globals_3)
#line 572 "make.m"
{
#line 574 "make.m"
  {
#line 574 "make.m"
    MR_bool make__succeeded;
#line 574 "make.m"
    MR_Word make__ExecutableType_4;
#line 574 "make.m"
    MR_Word make__CompilationTarget_5;

#line 575 "make.m"
    {
#line 575 "make.m"
      libs__globals__get_target_2_p_0(make__Globals_3, &make__CompilationTarget_5);
    }
#line 579 "make.m"
    make__ExecutableType_4 = ((&make_vector_common_9[8 + make__CompilationTarget_5]))->make__vector_common_type_9_0__vct_9_f_0;
#line 574 "make.m"
    return make__ExecutableType_4;
#line 574 "make.m"
  }
#line 572 "make.m"
}

#line 562 "make.m"
MR_bool MR_CALL 
make__search_backwards_for_dot_3_p_0(
#line 562 "make.m"
  MR_String make__String_4,
#line 562 "make.m"
  MR_Integer make__Index_5,
#line 562 "make.m"
  MR_Integer * make__DotIndex_6)
#line 562 "make.m"
{
#line 564 "make.m"
  while (MR_TRUE)
#line 564 "make.m"
    {
#line 564 "make.m"
      /* tailcall optimized into a loop */
#line 564 "make.m"
      {
#line 564 "make.m"
        MR_bool make__succeeded;
#line 564 "make.m"
        MR_Integer make__CharIndex_7;
#line 564 "make.m"
        MR_Char make__Char_8;

#line 565 "make.m"
        {
#line 565 "make.m"
          make__succeeded = mercury__string__unsafe_prev_index_4_p_0(make__String_4, make__Index_5, &make__CharIndex_7, &make__Char_8);
        }
#line 564 "make.m"
        if (make__succeeded)
#line 564 "make.m"
          {
#line 566 "make.m"
            make__succeeded = (make__Char_8 == (MR_Char) 46);
#line 566 "make.m"
            if (make__succeeded)
#line 567 "make.m"
              {
#line 567 "make.m"
                *make__DotIndex_6 = make__CharIndex_7;
#line 567 "make.m"
                make__succeeded = MR_TRUE;
#line 567 "make.m"
              }
#line 566 "make.m"
            else
#line 569 "make.m"
              {
#line 569 "make.m"
                /* direct tailcall eliminated */
#line 569 "make.m"
                {
#line 569 "make.m"
                  MR_Integer make__Index__tmp_copy_5 = make__CharIndex_7;

#line 569 "make.m"
                  make__Index_5 = make__Index__tmp_copy_5;
#line 569 "make.m"
                }
#line 569 "make.m"
                continue;
#line 569 "make.m"
              }
#line 564 "make.m"
          }
#line 564 "make.m"
        return make__succeeded;
#line 564 "make.m"
      }
#line 564 "make.m"
      break;
#line 564 "make.m"
    }
#line 562 "make.m"
}

#line 467 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 467 "make.m"
  void * make__env_ptr_arg)
#line 467 "make.m"
{
#line 467 "make.m"
  {
#line 467 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 471 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".cs") == 0);
#line 471 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 471 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 471 "make.m"
      {
#line 471 "make.m"
        make__classify_target_2_4_p_0_2(make__env_ptr);
      }
#line 467 "make.m"
  }
#line 467 "make.m"
}

#line 473 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 473 "make.m"
  void * make__env_ptr_arg)
#line 473 "make.m"
{
#line 473 "make.m"
  {
#line 473 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 473 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
#line 473 "make.m"
    {
#line 473 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 474 "make.m"
      {
#line 474 "make.m"
        MR_Word base;
#line 474 "make.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 474 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 474 "make.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_10));
#line 474 "make.m"
      }
#line 473 "make.m"
      {
#line 473 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
      }
#line 473 "make.m"
    }
#line 473 "make.m"
  }
#line 473 "make.m"
}

#line 465 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 465 "make.m"
  void * make__env_ptr_arg)
#line 465 "make.m"
{
#line 465 "make.m"
  {
#line 465 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 560 "make.m"
    {
#line 560 "make.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8);
    }
#line 465 "make.m"
    {
#line 465 "make.m"
      MR_Word base;
#line 465 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "make.m"
      *((make__env_ptr)->make__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
#line 465 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8));
#line 465 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9));
#line 465 "make.m"
    }
#line 465 "make.m"
    {
#line 465 "make.m"
      ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont)((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont_env_ptr);
    }
#line 465 "make.m"
  }
#line 465 "make.m"
}

#line 516 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 516 "make.m"
  void * make__env_ptr_arg)
#line 516 "make.m"
{
#line 516 "make.m"
  {
#line 516 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 516 "make.m"
    {
#line 522 "make.m"
      MR_Word make__V_17_17;

#line 522 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 522 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 522 "make.m"
        make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 522 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 522 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 522 "make.m"
        {
#line 522 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
        }
#line 516 "make.m"
    }
#line 516 "make.m"
  }
#line 516 "make.m"
}

#line 514 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 514 "make.m"
  void * make__env_ptr_arg)
#line 514 "make.m"
{
#line 514 "make.m"
  {
#line 514 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 516 "make.m"
    {
#line 516 "make.m"
      MR_Word make__V_32_32;

#line 516 "make.m"
      {
#line 516 "make.m"
        make__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 516 "make.m"
        MR_hl_field(MR_mktag(1), make__V_32_32, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16));
#line 516 "make.m"
      }
#line 516 "make.m"
      {
#line 516 "make.m"
        make__util__target_extension_2_f_1((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, make__V_32_32, make__classify_target_2_4_p_0_8, make__env_ptr);
      }
#line 516 "make.m"
    }
#line 518 "make.m"
    {
#line 522 "make.m"
      MR_Word make__V_65_65;

#line 518 "make.m"
      {
#line 518 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47);
      }
#line 518 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 518 "make.m"
        {
#line 522 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 522 "make.m"
          if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 522 "make.m"
            make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 522 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 518 "make.m"
        }
#line 518 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 518 "make.m"
        {
#line 518 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
        }
#line 518 "make.m"
    }
#line 514 "make.m"
  }
#line 514 "make.m"
}

#line 524 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 524 "make.m"
  void * make__env_ptr_arg)
#line 524 "make.m"
{
#line 524 "make.m"
  {
#line 524 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 524 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_1 = MR_TRUE;
#line 524 "make.m"
    {
#line 524 "make.m"
      MR_Word make__V_33_33;

#line 524 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 525 "make.m"
      {
#line 525 "make.m"
        make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "make.m"
        MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47));
#line 525 "make.m"
      }
#line 525 "make.m"
      {
#line 525 "make.m"
        MR_Word base;
#line 525 "make.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 525 "make.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__V_33_33));
#line 525 "make.m"
      }
#line 524 "make.m"
      {
#line 524 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
      }
#line 524 "make.m"
    }
#line 524 "make.m"
  }
#line 524 "make.m"
}

#line 508 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 508 "make.m"
  void * make__env_ptr_arg)
#line 508 "make.m"
{
#line 508 "make.m"
  {
#line 508 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 509 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_30_30, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_60_60) == 0);
#line 508 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 508 "make.m"
      {
#line 510 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31 = (MR_String) ".";
#line 510 "make.m"
        {
#line 510 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16 = mercury__string__f_43_43_2_f_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15);
        }
#line 510 "make.m"
        {
#line 510 "make.m"
          make__classify_target_2_4_p_0_5(make__env_ptr);
        }
#line 508 "make.m"
      }
#line 508 "make.m"
  }
#line 508 "make.m"
}

#line 513 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 513 "make.m"
  void * make__env_ptr_arg)
#line 513 "make.m"
{
#line 513 "make.m"
  {
#line 513 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 513 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((MR_String) "s", (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_61_61) == 0);
#line 513 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 513 "make.m"
      {
#line 513 "make.m"
        make__classify_target_2_4_p_0_5(make__env_ptr);
      }
#line 513 "make.m"
  }
#line 513 "make.m"
}

#line 462 "make.m"
void MR_CALL 
make__classify_target_2_4_p_0(
#line 462 "make.m"
  MR_Word make__Globals_5,
#line 462 "make.m"
  MR_String make__ModuleNameStr0_6,
#line 462 "make.m"
  MR_String make__Suffix_7,
#line 462 "make.m"
  MR_Word * make__HeadVar__4_4,
#line 462 "make.m"
  MR_Cont make__cont,
#line 462 "make.m"
  void * make__cont_env_ptr)
#line 462 "make.m"
{
#line 462 "make.m"
  {
#line 462 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s make__env;

#line 462 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Globals_5 = make__Globals_5;
#line 462 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = make__ModuleNameStr0_6;
#line 462 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7 = make__Suffix_7;
#line 462 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__HeadVar__4_4 = make__HeadVar__4_4;
#line 462 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont = make__cont;
#line 462 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont_env_ptr = make__cont_env_ptr;
#line 465 "make.m"
    {
#line 467 "make.m"
      MR_Word make__V_18_18;

#line 466 "make.m"
      (make__env).make__classify_target_2_4_p_0_env_0__cond_0 = MR_FALSE;
#line 467 "make.m"
      {
#line 467 "make.m"
        make__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "make.m"
        MR_hl_field(MR_mktag(1), make__V_18_18, 0) = ((MR_Box) ((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7));
#line 467 "make.m"
      }
#line 467 "make.m"
      {
#line 467 "make.m"
        make__util__target_extension_2_f_1((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env).make__classify_target_2_4_p_0_env_0__ModuleTargetType_10, make__V_18_18, make__classify_target_2_4_p_0_3, &make__env);
      }
#line 466 "make.m"
      if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_0))
#line 475 "make.m"
        {
#line 475 "make.m"
          MR_Word make__ModuleTargetType_56;

#line 476 "make.m"
          {
#line 476 "make.m"
            (make__env).make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, &make__ModuleTargetType_56);
          }
#line 475 "make.m"
          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 478 "make.m"
            {
#line 478 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 479 "make.m"
              {
#line 479 "make.m"
                MR_Word base;
#line 479 "make.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 479 "make.m"
                (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 479 "make.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleTargetType_56));
#line 479 "make.m"
              }
#line 478 "make.m"
              {
#line 478 "make.m"
                make__classify_target_2_4_p_0_1(&make__env);
              }
#line 478 "make.m"
            }
#line 475 "make.m"
          else
#line 480 "make.m"
            {
#line 480 "make.m"
              MR_String make__ModuleNameStr1_12;
#line 481 "make.m"
              MR_String make__V_20_20;
#line 481 "make.m"
              MR_String make__V_57_57;

#line 481 "make.m"
              {
#line 481 "make.m"
                libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 562, &make__V_57_57);
              }
#line 481 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_57_57) == 0);
#line 481 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 481 "make.m"
                {
#line 482 "make.m"
                  make__V_20_20 = (MR_String) "lib";
#line 482 "make.m"
                  {
#line 482 "make.m"
                    (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_20_20, &make__ModuleNameStr1_12, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                  }
#line 481 "make.m"
                }
#line 480 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 484 "make.m"
                {
#line 484 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_12;
#line 485 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[1]);
#line 484 "make.m"
                  {
#line 484 "make.m"
                    make__classify_target_2_4_p_0_1(&make__env);
                  }
#line 484 "make.m"
                }
#line 480 "make.m"
              else
#line 486 "make.m"
                {
#line 486 "make.m"
                  MR_String make__ModuleNameStr1_54;
#line 488 "make.m"
                  MR_String make__V_23_23;
#line 488 "make.m"
                  MR_String make__V_58_58;

#line 487 "make.m"
                  {
#line 487 "make.m"
                    libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 561, &make__V_58_58);
                  }
#line 487 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_58_58) == 0);
#line 488 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 488 "make.m"
                    {
#line 489 "make.m"
                      make__V_23_23 = (MR_String) "lib";
#line 489 "make.m"
                      {
#line 489 "make.m"
                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_23_23, &make__ModuleNameStr1_54, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                      }
#line 488 "make.m"
                    }
#line 486 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 491 "make.m"
                    {
#line 491 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_54;
#line 492 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[2]);
#line 491 "make.m"
                      {
#line 491 "make.m"
                        make__classify_target_2_4_p_0_1(&make__env);
                      }
#line 491 "make.m"
                    }
#line 486 "make.m"
                  else
#line 493 "make.m"
                    {
#line 494 "make.m"
                      MR_String make__V_59_59;

#line 494 "make.m"
                      {
#line 494 "make.m"
                        libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 563, &make__V_59_59);
                      }
#line 494 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_59_59) == 0);
#line 493 "make.m"
                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 497 "make.m"
                        {
#line 497 "make.m"
                          MR_Word make__ExecutableType_13;
#line 497 "make.m"
                          MR_Word make__CompilationTarget_64;

#line 497 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 575 "make.m"
                          {
#line 575 "make.m"
                            libs__globals__get_target_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &make__CompilationTarget_64);
                          }
#line 579 "make.m"
                          make__ExecutableType_13 = ((&make_vector_common_9[4 + make__CompilationTarget_64]))->make__vector_common_type_9_0__vct_9_f_0;
#line 499 "make.m"
                          {
#line 499 "make.m"
                            MR_Word base;
#line 499 "make.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 499 "make.m"
                            (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 499 "make.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__ExecutableType_13));
#line 499 "make.m"
                          }
#line 497 "make.m"
                          {
#line 497 "make.m"
                            make__classify_target_2_4_p_0_1(&make__env);
                          }
#line 497 "make.m"
                        }
#line 493 "make.m"
                      else
#line 500 "make.m"
                        {
#line 500 "make.m"
                          MR_String make__ModuleNameStr1_50;
#line 501 "make.m"
                          MR_String make__V_26_26;

#line 501 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".beams") == 0);
#line 501 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 501 "make.m"
                            {
#line 502 "make.m"
                              make__V_26_26 = (MR_String) "lib";
#line 502 "make.m"
                              {
#line 502 "make.m"
                                (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_26_26, &make__ModuleNameStr1_50, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                              }
#line 501 "make.m"
                            }
#line 500 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 504 "make.m"
                            {
#line 504 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_50;
#line 505 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[3]);
#line 504 "make.m"
                              {
#line 504 "make.m"
                                make__classify_target_2_4_p_0_1(&make__env);
                              }
#line 504 "make.m"
                            }
#line 500 "make.m"
                          else
#line 506 "make.m"
                            {
#line 506 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__cond_1 = MR_FALSE;
#line 508 "make.m"
                              {
#line 508 "make.m"
                                MR_String make__Rest_14;

#line 508 "make.m"
                                {
#line 508 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &make__Rest_14, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7);
                                }
#line 508 "make.m"
                                if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 508 "make.m"
                                  {
#line 509 "make.m"
                                    (make__env).make__classify_target_2_4_p_0_env_0__V_30_30 = (MR_String) "s";
#line 509 "make.m"
                                    {
#line 509 "make.m"
                                      mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15, &(make__env).make__classify_target_2_4_p_0_env_0__V_60_60, make__Rest_14, make__classify_target_2_4_p_0_6, &make__env);
                                    }
#line 508 "make.m"
                                  }
#line 508 "make.m"
                              }
#line 513 "make.m"
                              {
#line 513 "make.m"
                                mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env).make__classify_target_2_4_p_0_env_0__V_61_61, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__classify_target_2_4_p_0_7, &make__env);
                              }
#line 506 "make.m"
                              if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_1))
#line 526 "make.m"
                                {
#line 527 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".check") == 0);
#line 526 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 529 "make.m"
                                    {
#line 529 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 530 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[5]);
#line 529 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 529 "make.m"
                                    }
#line 526 "make.m"
                                  else
#line 531 "make.m"
                                    {
#line 532 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".analyse") == 0);
#line 531 "make.m"
                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 534 "make.m"
                                        {
#line 534 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 535 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[6]);
#line 534 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 534 "make.m"
                                        }
#line 531 "make.m"
                                      else
#line 536 "make.m"
                                        {
#line 537 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".clean") == 0);
#line 536 "make.m"
                                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 539 "make.m"
                                            {
#line 539 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 540 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[7]);
#line 539 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 539 "make.m"
                                            }
#line 536 "make.m"
                                          else
#line 541 "make.m"
                                            {
#line 542 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".realclean") == 0);
#line 541 "make.m"
                                              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 544 "make.m"
                                                {
#line 544 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 545 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[8]);
#line 544 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 544 "make.m"
                                                }
#line 541 "make.m"
                                              else
#line 546 "make.m"
                                                {
#line 546 "make.m"
                                                  MR_String make__ModuleNameStr1_42;
#line 547 "make.m"
                                                  MR_String make__V_39_39;

#line 547 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".install") == 0);
#line 547 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 547 "make.m"
                                                    {
#line 548 "make.m"
                                                      make__V_39_39 = (MR_String) "lib";
#line 548 "make.m"
                                                      {
#line 548 "make.m"
                                                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_39_39, &make__ModuleNameStr1_42, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                                                      }
#line 547 "make.m"
                                                    }
#line 546 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 550 "make.m"
                                                    {
#line 550 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_42;
#line 551 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[9]);
#line 550 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 550 "make.m"
                                                    }
#line 546 "make.m"
                                                  else
#line 552 "make.m"
                                                    {
#line 552 "make.m"
                                                      MR_Word make__V_41_41;

#line 553 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".doc") == 0);
#line 552 "make.m"
                                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 552 "make.m"
                                                        {
#line 555 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 556 "make.m"
                                                          make__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 556 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[10]);
#line 556 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 552 "make.m"
                                                        }
#line 552 "make.m"
                                                    }
#line 546 "make.m"
                                                }
#line 541 "make.m"
                                            }
#line 536 "make.m"
                                        }
#line 531 "make.m"
                                    }
#line 526 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 526 "make.m"
                                    {
#line 526 "make.m"
                                      make__classify_target_2_4_p_0_1(&make__env);
                                    }
#line 526 "make.m"
                                }
#line 506 "make.m"
                            }
#line 500 "make.m"
                        }
#line 493 "make.m"
                    }
#line 486 "make.m"
                }
#line 480 "make.m"
            }
#line 475 "make.m"
        }
#line 465 "make.m"
    }
#line 462 "make.m"
  }
#line 462 "make.m"
}

#line 446 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 446 "make.m"
  void * make__env_ptr_arg)
#line 446 "make.m"
{
#line 446 "make.m"
  {
#line 446 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s * make__env_ptr = (struct make__classify_target_3_p_0_2_env_0_s *) make__env_ptr_arg;

#line 446 "make.m"
    *((make__env_ptr)->make__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
#line 446 "make.m"
    {
#line 446 "make.m"
      ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont)((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont_env_ptr);
    }
#line 446 "make.m"
  }
#line 446 "make.m"
}

#line 446 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 446 "make.m"
  MR_Box make__closure_arg,
#line 446 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 446 "make.m"
  MR_Cont make__cont,
#line 446 "make.m"
  void * make__cont_env_ptr)
#line 446 "make.m"
{
#line 446 "make.m"
  {
#line 446 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s make__env;

#line 446 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__wrapper_arg_1 = make__wrapper_arg_1;
#line 446 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont = make__cont;
#line 446 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont_env_ptr = make__cont_env_ptr;
#line 446 "make.m"
    {
#line 446 "make.m"
      MR_Box make__closure = make__closure_arg;

#line 446 "make.m"
      {
#line 446 "make.m"
        make__classify_target_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 5))), &(make__env).make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__classify_target_3_p_0_1, &make__env);
      }
#line 446 "make.m"
    }
#line 446 "make.m"
  }
#line 446 "make.m"
}

#line 438 "make.m"
void MR_CALL 
make__classify_target_3_p_0(
#line 438 "make.m"
  MR_Word make__Globals_4,
#line 438 "make.m"
  MR_String make__FileName_5,
#line 438 "make.m"
  MR_Word * make__HeadVar__3_3)
#line 438 "make.m"
{
#line 441 "make.m"
  {
#line 441 "make.m"
    MR_bool make__succeeded;
#line 441 "make.m"
    MR_Word make__ModuleName_6;
#line 441 "make.m"
    MR_Word make__TargetType_7;
#line 442 "make.m"
    MR_Word make__TargetFile_13;
#line 443 "make.m"
    MR_Word make__TypeInfo_21_21;
#line 443 "make.m"
    MR_Integer make__NameLength_8;
#line 443 "make.m"
    MR_Integer make__DotLocn_9;
#line 443 "make.m"
    MR_String make__ModuleNameStr0_10;
#line 443 "make.m"
    MR_String make__Suffix_11;
#line 443 "make.m"
    MR_Word make__TargetFiles_12;
#line 443 "make.m"
    MR_Word make__V_16_16;
#line 443 "make.m"
    MR_Word make__V_17_17;

#line 443 "make.m"
    {
#line 443 "make.m"
      mercury__string__length_2_p_0(make__FileName_5, &make__NameLength_8);
    }
#line 444 "make.m"
    {
#line 444 "make.m"
      make__succeeded = make__search_backwards_for_dot_3_p_0(make__FileName_5, make__NameLength_8, &make__DotLocn_9);
    }
#line 443 "make.m"
    if (make__succeeded)
#line 443 "make.m"
      {
#line 445 "make.m"
        {
#line 445 "make.m"
          mercury__string__split_4_p_0(make__FileName_5, make__DotLocn_9, &make__ModuleNameStr0_10, &make__Suffix_11);
        }
#line 11191 "make.c"
        make__TypeInfo_21_21 = (MR_Word) &make_scalar_common_1[0];
#line 446 "make.m"
        {
#line 446 "make.m"
          make__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 446 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 0) = ((MR_Box) (&make_scalar_common_7[0]));
#line 446 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 1) = ((MR_Box) (make__classify_target_3_p_0_2));
#line 446 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 446 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 3) = ((MR_Box) (make__Globals_4));
#line 446 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 4) = ((MR_Box) (make__ModuleNameStr0_10));
#line 446 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 5) = ((MR_Box) (make__Suffix_11));
#line 446 "make.m"
        }
#line 446 "make.m"
        {
#line 446 "make.m"
          mercury__solutions__solutions_2_p_1(make__TypeInfo_21_21, make__V_16_16, &make__TargetFiles_12);
        }
#line 448 "make.m"
        make__succeeded = ((MR_tag((MR_Word) make__TargetFiles_12)) == (MR_mktag((MR_Integer) 1)));
#line 448 "make.m"
        if (make__succeeded)
#line 448 "make.m"
          {
#line 448 "make.m"
            make__TargetFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 0)));
#line 448 "make.m"
            make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 1)));
#line 448 "make.m"
            make__succeeded = (make__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "make.m"
          }
#line 443 "make.m"
      }
#line 442 "make.m"
    if (make__succeeded)
#line 450 "make.m"
      {
#line 450 "make.m"
        make__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 0)));
#line 450 "make.m"
        make__TargetType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 1)));
#line 450 "make.m"
      }
#line 442 "make.m"
    else
#line 451 "make.m"
      {
#line 451 "make.m"
        MR_String make__ModuleNameStr_14;

#line 452 "make.m"
        {
#line 452 "make.m"
          make__succeeded = mercury__string__append_3_p_1((MR_String) "lib", &make__ModuleNameStr_14, make__FileName_5);
        }
#line 451 "make.m"
        if (make__succeeded)
#line 454 "make.m"
          {
#line 454 "make.m"
            make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[0]);
#line 455 "make.m"
            {
#line 455 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__ModuleNameStr_14, &make__ModuleName_6);
            }
#line 454 "make.m"
          }
#line 451 "make.m"
        else
#line 457 "make.m"
          {
#line 457 "make.m"
            MR_Word make__ExecutableType_15;
#line 457 "make.m"
            MR_Word make__CompilationTarget_24;

#line 575 "make.m"
            {
#line 575 "make.m"
              libs__globals__get_target_2_p_0(make__Globals_4, &make__CompilationTarget_24);
            }
#line 579 "make.m"
            make__ExecutableType_15 = ((&make_vector_common_9[0 + make__CompilationTarget_24]))->make__vector_common_type_9_0__vct_9_f_0;
#line 458 "make.m"
            {
#line 458 "make.m"
              make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 458 "make.m"
              MR_hl_field(MR_mktag(1), make__TargetType_7, 0) = ((MR_Box) (make__ExecutableType_15));
#line 458 "make.m"
            }
#line 459 "make.m"
            {
#line 459 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__FileName_5, &make__ModuleName_6);
            }
#line 457 "make.m"
          }
#line 451 "make.m"
      }
#line 441 "make.m"
    {
#line 441 "make.m"
      MR_Word base;
#line 441 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "make.m"
      *make__HeadVar__3_3 = base;
#line 441 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleName_6));
#line 441 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__TargetType_7));
#line 441 "make.m"
    }
#line 441 "make.m"
  }
#line 438 "make.m"
}

#line 395 "make.m"
void MR_CALL 
make__make_target_7_p_0(
#line 395 "make.m"
  MR_Word make__Globals_8,
#line 395 "make.m"
  MR_Word make__Target_9,
#line 395 "make.m"
  MR_Word * make__Success_10,
#line 395 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_22,
#line 395 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_23)
#line 395 "make.m"
{
#line 398 "make.m"
  {
#line 398 "make.m"
    MR_bool make__succeeded;
#line 398 "make.m"
    MR_Word make__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 0)));
#line 398 "make.m"
    MR_Word make__TargetType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 1)));
#line 398 "make.m"
    MR_Word make__TrackFlags_15;
#line 398 "make.m"
    MR_Word make__TrackFlagsSuccess_16;
#line 398 "make.m"
    MR_Word make__STATE_VARIABLE_Info_27_27;

#line 400 "make.m"
    {
#line 400 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 614, &make__TrackFlags_15);
    }
#line 404 "make.m"
#line 404 "make.m"
    switch (make__TrackFlags_15) {
#line 404 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 404 "make.m"
      case (MR_Integer) 0:
#line 402 "make.m"
        {
#line 403 "make.m"
          make__TrackFlagsSuccess_16 = (MR_Integer) 1;
#line 402 "make.m"
          make__STATE_VARIABLE_Info_27_27 = make__STATE_VARIABLE_Info_0_22;
#line 402 "make.m"
        }
#line 404 "make.m"
        break;
#line 404 "make.m"
      case (MR_Integer) 1:
#line 406 "make.m"
        {
#line 406 "make.m"
          make__make_track_flags_files_7_p_0(make__Globals_8, make__ModuleName_13, &make__TrackFlagsSuccess_16, make__STATE_VARIABLE_Info_0_22, &make__STATE_VARIABLE_Info_27_27);
        }
#line 404 "make.m"
        break;
#line 404 "make.m"
    }
#line 426 "make.m"
#line 426 "make.m"
    switch (make__TrackFlagsSuccess_16) {
#line 426 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 426 "make.m"
      case (MR_Integer) 0:
#line 427 "make.m"
        {
#line 428 "make.m"
          *make__Success_10 = (MR_Integer) 0;
#line 427 "make.m"
          *make__STATE_VARIABLE_Info_23 = make__STATE_VARIABLE_Info_27_27;
#line 427 "make.m"
        }
#line 426 "make.m"
        break;
#line 426 "make.m"
      case (MR_Integer) 1:
#line 416 "make.m"
#line 416 "make.m"
        switch (MR_tag((MR_Word) make__TargetType_14)) {
#line 416 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 416 "make.m"
          case (MR_Integer) 0:
#line 412 "make.m"
            {
#line 412 "make.m"
              MR_Word make__ModuleTargetType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetType_14, (MR_Integer) 0)));
#line 412 "make.m"
              MR_Word make__TargetFile_18;
#line 412 "make.m"
              MR_Word make__V_34_34;

#line 413 "make.m"
              {
#line 413 "make.m"
                make__TargetFile_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "make.m"
                MR_hl_field(MR_mktag(0), make__TargetFile_18, 0) = ((MR_Box) (make__ModuleName_13));
#line 413 "make.m"
                MR_hl_field(MR_mktag(0), make__TargetFile_18, 1) = ((MR_Box) (make__ModuleTargetType_17));
#line 413 "make.m"
              }
#line 414 "make.m"
              {
#line 414 "make.m"
                make__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 414 "make.m"
                MR_hl_field(MR_mktag(0), make__V_34_34, 0) = ((MR_Box) (make__TargetFile_18));
#line 414 "make.m"
              }
#line 414 "make.m"
              {
#line 414 "make.m"
                make__module_target__make_module_target_7_p_0(make__Globals_8, make__V_34_34, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
              }
#line 412 "make.m"
            }
#line 416 "make.m"
            break;
#line 416 "make.m"
          case (MR_Integer) 1:
#line 417 "make.m"
            {
#line 417 "make.m"
              MR_Word make__ProgramTargetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetType_14, (MR_Integer) 0)));
#line 417 "make.m"
              MR_Word make__LinkedTargetFile_20;

#line 418 "make.m"
              {
#line 418 "make.m"
                make__LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "make.m"
                MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 0) = ((MR_Box) (make__ModuleName_13));
#line 418 "make.m"
                MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 1) = ((MR_Box) (make__ProgramTargetType_19));
#line 418 "make.m"
              }
#line 420 "make.m"
              {
#line 420 "make.m"
                make__program_target__make_linked_target_7_p_0(make__Globals_8, make__LinkedTargetFile_20, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
              }
#line 417 "make.m"
            }
#line 416 "make.m"
            break;
#line 416 "make.m"
          case (MR_Integer) 2:
#line 422 "make.m"
            {
#line 422 "make.m"
              MR_Word make__MiscTargetType_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__TargetType_14, (MR_Integer) 0)));
#line 422 "make.m"
              MR_Word make__V_29_29;

#line 423 "make.m"
              {
#line 423 "make.m"
                make__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "make.m"
                MR_hl_field(MR_mktag(0), make__V_29_29, 0) = ((MR_Box) (make__ModuleName_13));
#line 423 "make.m"
                MR_hl_field(MR_mktag(0), make__V_29_29, 1) = ((MR_Box) (make__MiscTargetType_21));
#line 423 "make.m"
              }
#line 423 "make.m"
              {
#line 423 "make.m"
                make__program_target__make_misc_target_7_p_0(make__Globals_8, make__V_29_29, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
              }
#line 422 "make.m"
            }
#line 416 "make.m"
            break;
#line 416 "make.m"
        }
#line 426 "make.m"
        break;
#line 426 "make.m"
    }
#line 398 "make.m"
  }
#line 395 "make.m"
}

#line 44 "make.m"
MR_String MR_CALL 
make__make_module_dep_file_extension_0_f_0(void)
#line 44 "make.m"
{
#line 280 "make.m"
  {
#line 280 "make.m"
    MR_bool make__succeeded;

#line 280 "make.m"
    return (MR_String) ".module_dep";
#line 280 "make.m"
  }
#line 44 "make.m"
}

#line 41 "make.m"
void MR_CALL 
make__make_write_module_dep_file_4_p_0(
#line 41 "make.m"
  MR_Word make__Globals_5,
#line 41 "make.m"
  MR_Word make__Imports_6)
#line 41 "make.m"
{
#line 278 "make.m"
  {
#line 278 "make.m"
    MR_bool make__succeeded;

#line 278 "make.m"
    {
#line 278 "make.m"
      make__module_dep_file__write_module_dep_file_4_p_0(make__Globals_5, make__Imports_6);
    }
#line 278 "make.m"
  }
#line 41 "make.m"
}

#line 322 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_8(
#line 322 "make.m"
  MR_Box make__closure_arg,
#line 322 "make.m"
  MR_Box make__wrapper_arg_1,
#line 322 "make.m"
  MR_Box make__wrapper_arg_2,
#line 322 "make.m"
  MR_Box * make__wrapper_arg_3)
#line 322 "make.m"
{
#line 322 "make.m"
  {
#line 322 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 322 "make.m"
    {
#line 322 "make.m"
      make__IntroducedFrom__pred__make_process_args__322__1_3_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 322 "make.m"
  }
#line 322 "make.m"
}

#line 384 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_7(
#line 384 "make.m"
  MR_Box make__closure_arg,
#line 384 "make.m"
  MR_Box make__wrapper_arg_1,
#line 384 "make.m"
  MR_Box make__wrapper_arg_2,
#line 384 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 384 "make.m"
  MR_Box make__wrapper_arg_4,
#line 384 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 384 "make.m"
  MR_Box make__wrapper_arg_6,
#line 384 "make.m"
  MR_Box * make__wrapper_arg_7)
#line 384 "make.m"
{
#line 384 "make.m"
  {
#line 384 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 384 "make.m"
    MR_Word make__conv5_Success_10;
#line 384 "make.m"
    MR_Word make__conv4_STATE_VARIABLE_Info_23;

#line 384 "make.m"
    {
#line 384 "make.m"
      make__make_target_7_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv5_Success_10, ((MR_Word) make__wrapper_arg_4), &make__conv4_STATE_VARIABLE_Info_23);
    }
#line 384 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv5_Success_10));
#line 384 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv4_STATE_VARIABLE_Info_23));
#line 384 "make.m"
  }
#line 384 "make.m"
}

#line 352 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_6(
#line 352 "make.m"
  MR_Box make__closure_arg,
#line 352 "make.m"
  MR_Box make__wrapper_arg_1,
#line 352 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 352 "make.m"
{
#line 352 "make.m"
  {
#line 352 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 352 "make.m"
    MR_Word make__conv3_HeadVar__3_3;

#line 352 "make.m"
    {
#line 352 "make.m"
      make__classify_target_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) make__wrapper_arg_1), &make__conv3_HeadVar__3_3);
    }
#line 352 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv3_HeadVar__3_3));
#line 352 "make.m"
  }
#line 352 "make.m"
}

#line 346 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_5(
#line 346 "make.m"
  MR_Box make__closure_arg,
#line 346 "make.m"
  MR_Box make__wrapper_arg_1)
#line 346 "make.m"
{
#line 346 "make.m"
  {
#line 346 "make.m"
    MR_bool make__succeeded;
#line 346 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 346 "make.m"
    {
#line 346 "make.m"
      make__succeeded = make__IntroducedFrom__pred__make_process_args__348__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 346 "make.m"
    return make__succeeded;
#line 346 "make.m"
  }
#line 346 "make.m"
}

#line 341 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_4(
#line 341 "make.m"
  MR_Box make__closure_arg,
#line 341 "make.m"
  MR_Box make__wrapper_arg_1,
#line 341 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 341 "make.m"
{
#line 341 "make.m"
  {
#line 341 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 341 "make.m"
    MR_Integer make__conv2_HeadVar__2_2;

#line 341 "make.m"
    {
#line 341 "make.m"
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv2_HeadVar__2_2);
    }
#line 341 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv2_HeadVar__2_2));
#line 341 "make.m"
  }
#line 341 "make.m"
}

#line 339 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_3(
#line 339 "make.m"
  MR_Box make__closure_arg,
#line 339 "make.m"
  MR_Box make__wrapper_arg_1,
#line 339 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 339 "make.m"
{
#line 339 "make.m"
  {
#line 339 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 339 "make.m"
    MR_Integer make__conv1_HeadVar__2_2;

#line 339 "make.m"
    {
#line 339 "make.m"
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv1_HeadVar__2_2);
    }
#line 339 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv1_HeadVar__2_2));
#line 339 "make.m"
  }
#line 339 "make.m"
}

#line 336 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_2(
#line 336 "make.m"
  MR_Box make__closure_arg,
#line 336 "make.m"
  MR_Box make__wrapper_arg_1,
#line 336 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 336 "make.m"
{
#line 336 "make.m"
  {
#line 336 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 336 "make.m"
    MR_Integer make__conv0_HeadVar__2_2;

#line 336 "make.m"
    {
#line 336 "make.m"
      make__util__module_name_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv0_HeadVar__2_2);
    }
#line 336 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv0_HeadVar__2_2));
#line 336 "make.m"
  }
#line 336 "make.m"
}

#line 312 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_1(
#line 312 "make.m"
  MR_Box make__closure_arg,
#line 312 "make.m"
  MR_Box make__wrapper_arg_1)
#line 312 "make.m"
{
#line 312 "make.m"
  {
#line 312 "make.m"
    MR_bool make__succeeded;
#line 312 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 312 "make.m"
    {
#line 312 "make.m"
      make__succeeded = make__IntroducedFrom__pred__make_process_args__312__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 312 "make.m"
    return make__succeeded;
#line 312 "make.m"
  }
#line 312 "make.m"
}

#line 38 "make.m"
void MR_CALL 
make__make_process_args_7_p_0(
#line 38 "make.m"
  MR_Word make__Globals_8,
#line 38 "make.m"
  MR_Word make__DetectedGradeFlags_9,
#line 38 "make.m"
  MR_Word make__Variables_10,
#line 38 "make.m"
  MR_Word make__OptionArgs_11,
#line 38 "make.m"
  MR_Word make__Targets0_12)
#line 38 "make.m"
{
#line 283 "make.m"
  {
#line 283 "make.m"
    MR_bool make__succeeded;
#line 283 "make.m"
    MR_Word make__TypeCtorInfo_94_94;
#line 283 "make.m"
    MR_Word make__Targets_15;
#line 283 "make.m"
    MR_Word make__Continue0_18;
#line 283 "make.m"
    MR_Word make__AbsTargets_22;

#line 303 "make.m"
    if ((make__Targets0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "make.m"
      {
#line 285 "make.m"
        MR_Word make__MaybeMAIN_TARGET_14;

#line 286 "make.m"
        {
#line 286 "make.m"
          make__options_file__lookup_main_target_5_p_0(make__Globals_8, make__Variables_10, &make__MaybeMAIN_TARGET_14);
        }
#line 298 "make.m"
        if ((make__MaybeMAIN_TARGET_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "make.m"
          {
#line 300 "make.m"
            make__Targets_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "make.m"
            make__Continue0_18 = (MR_Integer) 0;
#line 299 "make.m"
          }
#line 298 "make.m"
        else
#line 288 "make.m"
          {
#line 288 "make.m"
            make__Targets_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__MaybeMAIN_TARGET_14, (MR_Integer) 0)));
#line 292 "make.m"
            if ((make__Targets_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "make.m"
              {
#line 294 "make.m"
                make__Continue0_18 = (MR_Integer) 0;
#line 295 "make.m"
                {
#line 295 "make.m"
                  mercury__io__write_string_3_p_0((MR_String) "** Error: no targets specified and \140MAIN_TARGET\' not defined.\n");
                }
#line 293 "make.m"
              }
#line 292 "make.m"
            else
#line 291 "make.m"
              make__Continue0_18 = (MR_Integer) 1;
#line 288 "make.m"
          }
#line 285 "make.m"
      }
#line 303 "make.m"
    else
#line 304 "make.m"
      {
#line 305 "make.m"
        make__Continue0_18 = (MR_Integer) 1;
#line 306 "make.m"
        make__Targets_15 = make__Targets0_12;
#line 304 "make.m"
      }
#line 11887 "make.c"
    make__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 312 "make.m"
    {
#line 312 "make.m"
      mercury__list__filter_3_p_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[13], make__Targets_15, &make__AbsTargets_22);
    }
#line 11894 "make.c"
    if ((make__AbsTargets_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "make.m"
#line 331 "make.m"
      switch (make__Continue0_18) {
#line 331 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 331 "make.m"
        case (MR_Integer) 0:
#line 329 "make.m"
          {
#line 330 "make.m"
            {
#line 330 "make.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 329 "make.m"
          }
#line 331 "make.m"
          break;
#line 331 "make.m"
        case (MR_Integer) 1:
#line 332 "make.m"
          {
#line 332 "make.m"
            MR_Word make__TypeCtorInfo_96_96;
#line 332 "make.m"
            MR_Word make__TypeCtorInfo_100_100;
#line 332 "make.m"
            MR_Word make__TypeInfo_109_109;
#line 332 "make.m"
            MR_Word make__KeepGoing_27;
#line 332 "make.m"
            MR_Word make__ModuleIndexMap_28;
#line 332 "make.m"
            MR_Word make__DepIndexMap_29;
#line 332 "make.m"
            MR_Word make__DepStatusMap_30;
#line 332 "make.m"
            MR_Word make__NonDependTargets_31;
#line 332 "make.m"
            MR_Word make__ClassifiedTargets_32;
#line 332 "make.m"
            MR_Integer make__AnalysisRepeat_34;
#line 332 "make.m"
            MR_Word make__MakeInfo0_35;
#line 332 "make.m"
            MR_Word make__Success_36;
#line 332 "make.m"
            MR_Word make__V_58_58;
#line 332 "make.m"
            MR_Box make__V_60_60;
#line 332 "make.m"
            MR_Word make__V_62_62;
#line 332 "make.m"
            MR_Box make__V_64_64;
#line 332 "make.m"
            MR_Word make__V_70_70;
#line 332 "make.m"
            MR_Word make__V_72_72;
#line 332 "make.m"
            MR_Word make__V_73_73;
#line 332 "make.m"
            MR_Word make__V_74_74;
#line 332 "make.m"
            MR_Word make__V_75_75;
#line 332 "make.m"
            MR_Word make__V_76_76;
#line 332 "make.m"
            MR_Word make__V_77_77;
#line 332 "make.m"
            MR_Word make__V_78_78;
#line 332 "make.m"
            MR_Word make__V_79_79;
#line 332 "make.m"
            MR_Word make__V_81_81;
#line 384 "make.m"
            MR_Word make___MakeInfo_37;
#line 384 "make.m"
            MR_Box make__conv7__MakeInfo_37;
#line 384 "make.m"
            MR_Box make__conv6_STATE_VARIABLE_IO_84_84;

#line 333 "make.m"
            {
#line 333 "make.m"
              libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 611, &make__KeepGoing_27);
            }
#line 11982 "make.c"
            make__TypeCtorInfo_96_96 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 336 "make.m"
            {
#line 336 "make.m"
              make__V_58_58 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make_scalar_common_1[14]);
            }
#line 337 "make.m"
            {
#line 337 "make.m"
              make__V_60_60 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_96_96);
            }
#line 335 "make.m"
            {
#line 335 "make.m"
              make__ModuleIndexMap_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 335 "make.m"
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 0) = ((MR_Box) (make__V_58_58));
#line 335 "make.m"
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 1) = ((MR_Box) (make__V_60_60));
#line 335 "make.m"
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 2) = ((MR_Box) ((MR_Integer) 0));
#line 335 "make.m"
            }
#line 12006 "make.c"
            make__TypeCtorInfo_100_100 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 339 "make.m"
            {
#line 339 "make.m"
              make__V_62_62 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, (MR_Word) &make_scalar_common_1[15]);
            }
#line 340 "make.m"
            {
#line 340 "make.m"
              make__V_64_64 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_100_100);
            }
#line 338 "make.m"
            {
#line 338 "make.m"
              make__DepIndexMap_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 338 "make.m"
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 0) = ((MR_Box) (make__V_62_62));
#line 338 "make.m"
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 1) = ((MR_Box) (make__V_64_64));
#line 338 "make.m"
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 338 "make.m"
            }
#line 341 "make.m"
            {
#line 341 "make.m"
              make__DepStatusMap_30 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__make__type_ctor_info_dependency_status_0, (MR_Word) &make_scalar_common_1[16]);
            }
#line 346 "make.m"
            {
#line 346 "make.m"
              make__NonDependTargets_31 = mercury__list__filter_2_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[17], make__Targets_15);
            }
#line 352 "make.m"
            {
#line 352 "make.m"
              make__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 0) = ((MR_Box) (&make_scalar_common_5[0]));
#line 352 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 1) = ((MR_Box) (make__make_process_args_7_p_0_6));
#line 352 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 352 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 3) = ((MR_Box) (make__Globals_8));
#line 352 "make.m"
            }
#line 12054 "make.c"
            make__TypeInfo_109_109 = (MR_Word) &make_scalar_common_1[0];
#line 352 "make.m"
            {
#line 352 "make.m"
              mercury__list__map_3_p_0(make__TypeCtorInfo_94_94, make__TypeInfo_109_109, make__V_70_70, make__NonDependTargets_31, &make__ClassifiedTargets_32);
            }
#line 356 "make.m"
            {
#line 356 "make.m"
              libs__globals__lookup_int_option_3_p_0(make__Globals_8, (MR_Integer) 327, &make__AnalysisRepeat_34);
            }
#line 359 "make.m"
            {
#line 359 "make.m"
              make__V_72_72 = mercury__map__init_0_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make_scalar_common_2[0]);
            }
#line 360 "make.m"
            {
#line 360 "make.m"
              make__V_73_73 = mercury__map__init_0_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[1]);
            }
#line 361 "make.m"
            {
#line 361 "make.m"
              make__V_74_74 = mercury__map__init_0_f_0((MR_Word) &make_scalar_common_1[2], make__TypeCtorInfo_94_94);
            }
#line 368 "make.m"
            {
#line 368 "make.m"
              make__V_75_75 = make__dependencies__init_cached_direct_imports_0_f_0();
            }
#line 369 "make.m"
            {
#line 369 "make.m"
              make__V_76_76 = make__dependencies__init_cached_direct_imports_0_f_0();
            }
#line 370 "make.m"
            {
#line 370 "make.m"
              make__V_77_77 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
            }
#line 371 "make.m"
            {
#line 371 "make.m"
              make__V_78_78 = make__dependencies__init_cached_foreign_imports_0_f_0();
            }
#line 374 "make.m"
            {
#line 374 "make.m"
              make__V_79_79 = mercury__set__init_0_f_0(make__TypeCtorInfo_96_96);
            }
#line 376 "make.m"
            {
#line 376 "make.m"
              make__V_81_81 = mercury__set__list_to_set_1_f_0(make__TypeInfo_109_109, make__ClassifiedTargets_32);
            }
#line 358 "make.m"
            {
#line 358 "make.m"
              make__MakeInfo0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 0) = ((MR_Box) (make__V_72_72));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 1) = ((MR_Box) (make__V_73_73));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 2) = ((MR_Box) (make__V_74_74));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 3) = ((MR_Box) (make__DetectedGradeFlags_9));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 4) = ((MR_Box) (make__OptionArgs_11));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 5) = ((MR_Box) (make__Variables_10));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 6) = ((MR_Box) (make__ModuleIndexMap_28));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 7) = ((MR_Box) (make__DepIndexMap_29));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 8) = ((MR_Box) (make__DepStatusMap_30));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 9) = ((MR_Box) (make__V_75_75));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 10) = ((MR_Box) (make__V_76_76));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 11) = ((MR_Box) (make__V_77_77));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 12) = ((MR_Box) (make__V_78_78));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 13) = ((MR_Box) ((MR_Integer) 0));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 14) = ((MR_Box) (make__KeepGoing_27));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 15) = ((MR_Box) (make__V_79_79));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 17) = ((MR_Box) (make__V_81_81));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 18) = ((MR_Box) (make__AnalysisRepeat_34));
#line 358 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 19) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "make.m"
            }
#line 384 "make.m"
            {
#line 384 "make.m"
              make__util__foldl2_maybe_stop_at_error_9_p_0(make__TypeInfo_109_109, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__KeepGoing_27, (MR_Word) &make_scalar_common_1[18], make__Globals_8, make__ClassifiedTargets_32, &make__Success_36, ((MR_Box) (make__MakeInfo0_35)), &make__conv7__MakeInfo_37, ((MR_Box) ((MR_Integer) 0)), &make__conv6_STATE_VARIABLE_IO_84_84);
            }
#line 384 "make.m"
            make___MakeInfo_37 = ((MR_Word) make__conv7__MakeInfo_37);
#line 390 "make.m"
#line 390 "make.m"
            switch (make__Success_36) {
#line 390 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 390 "make.m"
              case (MR_Integer) 0:
#line 388 "make.m"
                {
#line 389 "make.m"
                  {
#line 389 "make.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
#line 388 "make.m"
                }
#line 390 "make.m"
                break;
#line 390 "make.m"
              case (MR_Integer) 1:
#line 391 "make.m"
                {
#line 391 "make.m"
                }
#line 390 "make.m"
                break;
#line 390 "make.m"
            }
#line 332 "make.m"
          }
#line 331 "make.m"
          break;
#line 331 "make.m"
      }
#line 12198 "make.c"
    else
#line 12200 "make.c"
      {
#line 322 "make.m"
        MR_Box make__conv8_STATE_VARIABLE_IO_49_124;

#line 322 "make.m"
        {
#line 322 "make.m"
          mercury__list__foldl_4_p_2(make__TypeCtorInfo_94_94, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make_scalar_common_1[19], make__AbsTargets_22, ((MR_Box) ((MR_Integer) 0)), &make__conv8_STATE_VARIABLE_IO_49_124);
        }
#line 330 "make.m"
        {
#line 330 "make.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 12215 "make.c"
      }
#line 283 "make.m"
  }
#line 38 "make.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make. */
