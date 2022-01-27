/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version 2015-10-27
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


#include "analysis.mih"
#include "backend_libs.mih"
#include "bytecode_backend.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "backend_libs.compile_target_code.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "dir.mih"
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
#include "solutions.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
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
#line 475 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_10;
#line 475 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_0;
#line 526 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_47;
#line 526 "make.m"
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


#line 222 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0;

#line 225 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0;

#line 228 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 231 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0;

#line 234 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1;

#line 237 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2];

#line 240 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2];

#line 243 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2];

#line 246 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1];

#line 249 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0;

#line 252 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1];

#line 255 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1;

#line 258 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2];

#line 261 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2;

#line 264 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2];

#line 267 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_3;

#line 270 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1];

#line 273 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1];

#line 276 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1];

#line 279 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1];

#line 282 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_compilation_task_type_0[4];

#line 285 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4];

#line 288 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4];

#line 291 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0;

#line 294 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0;

#line 297 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3];

#line 300 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3];

#line 303 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_dependency_file_index_map_0_0;

#line 306 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1];

#line 309 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1];

#line 312 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1];

#line 315 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1];

#line 318 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0;

#line 321 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1;

#line 324 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2;

#line 327 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3;

#line 330 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4];

#line 333 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4];

#line 336 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4];

#line 339 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 342 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 345 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0;

#line 348 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2];

#line 351 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2];

#line 354 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_last_hash_0_0;

#line 357 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1];

#line 360 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1];

#line 363 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1];

#line 366 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1];

#line 369 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2];

#line 372 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2];

#line 375 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_linked_target_file_0_0;

#line 378 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1];

#line 381 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1];

#line 384 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1];

#line 387 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1];

#line 390 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1];

#line 393 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_0;

#line 396 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1];

#line 399 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_1;

#line 402 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1];

#line 405 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_2;

#line 408 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1];

#line 411 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1];

#line 414 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1];

#line 417 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_error_0[3];

#line 420 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3];

#line 423 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3];

#line 426 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 429 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 432 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 435 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

#line 438 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

#line 441 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0;

#line 444 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 447 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 450 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 453 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 456 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 459 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 462 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 465 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0;

#line 468 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20];

#line 471 "make.c"
static const MR_ConstString make__make__field_names_make_info_0_0[20];

#line 474 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0;

#line 477 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1];

#line 480 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1];

#line 483 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1];

#line 486 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1];

#line 489 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_0;

#line 492 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_1;

#line 495 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1];

#line 498 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_2;

#line 501 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_3;

#line 504 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_4;

#line 507 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_5;

#line 510 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_6;

#line 513 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6];

#line 516 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1];

#line 519 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_misc_target_type_0[2];

#line 522 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7];

#line 525 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7];

#line 528 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0;

#line 531 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1;

#line 534 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2;

#line 537 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3;

#line 540 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4;

#line 543 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5;

#line 546 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6;

#line 549 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7;

#line 552 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_module_compilation_task_type_0[8];

#line 555 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_module_compilation_task_type_0[8];

#line 558 "make.c"
static const MR_Integer make__make__functor_number_map_module_compilation_task_type_0[8];

#line 561 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0;

#line 564 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 567 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3];

#line 570 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3];

#line 573 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_index_map_0_0;

#line 576 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1];

#line 579 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1];

#line 582 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1];

#line 585 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1];

#line 588 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_0;

#line 591 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_1;

#line 594 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_2;

#line 597 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_3;

#line 600 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_4;

#line 603 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_5;

#line 606 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_6;

#line 609 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_7;

#line 612 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_8;

#line 615 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1];

#line 618 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9;

#line 621 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10;

#line 624 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11;

#line 627 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12;

#line 630 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13;

#line 633 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14;

#line 636 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15;

#line 639 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16;

#line 642 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1];

#line 645 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17;

#line 648 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2];

#line 651 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18;

#line 654 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2];

#line 657 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19;

#line 660 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20;

#line 663 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_0[17];

#line 666 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1];

#line 669 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1];

#line 672 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[2];

#line 675 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_target_type_0[4];

#line 678 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_target_type_0[21];

#line 681 "make.c"
static const MR_Integer make__make__functor_number_map_module_target_type_0[21];

#line 684 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0;

#line 687 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1;

#line 690 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2];

#line 693 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2];

#line 696 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2];

#line 699 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2];

#line 702 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2];

#line 705 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_file_0_0;

#line 708 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1];

#line 711 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1];

#line 714 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1];

#line 717 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1];

#line 720 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1];

#line 723 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_0;

#line 726 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1];

#line 729 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_1;

#line 732 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1];

#line 735 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_2;

#line 738 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1];

#line 741 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1];

#line 744 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1];

#line 747 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_type_0[3];

#line 750 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3];

#line 753 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3];

#line 756 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 759 "make.c"
  MR_Box make__wrapper_arg_1,
#line 761 "make.c"
  MR_Box make__wrapper_arg_2);

#line 764 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 767 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 769 "make.c"
  MR_Box make__wrapper_arg_2,
#line 771 "make.c"
  MR_Box make__wrapper_arg_3);

#line 774 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 777 "make.c"
  MR_Box make__wrapper_arg_1,
#line 779 "make.c"
  MR_Box make__wrapper_arg_2);

#line 782 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 785 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 787 "make.c"
  MR_Box make__wrapper_arg_2,
#line 789 "make.c"
  MR_Box make__wrapper_arg_3);

#line 792 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 795 "make.c"
  MR_Box make__wrapper_arg_1,
#line 797 "make.c"
  MR_Box make__wrapper_arg_2);

#line 800 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 803 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 805 "make.c"
  MR_Box make__wrapper_arg_2,
#line 807 "make.c"
  MR_Box make__wrapper_arg_3);

#line 810 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 813 "make.c"
  MR_Box make__wrapper_arg_1,
#line 815 "make.c"
  MR_Box make__wrapper_arg_2);

#line 818 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 821 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 823 "make.c"
  MR_Box make__wrapper_arg_2,
#line 825 "make.c"
  MR_Box make__wrapper_arg_3);

#line 828 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 831 "make.c"
  MR_Box make__wrapper_arg_1,
#line 833 "make.c"
  MR_Box make__wrapper_arg_2);

#line 836 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 839 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 841 "make.c"
  MR_Box make__wrapper_arg_2,
#line 843 "make.c"
  MR_Box make__wrapper_arg_3);

#line 846 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 849 "make.c"
  MR_Box make__wrapper_arg_1,
#line 851 "make.c"
  MR_Box make__wrapper_arg_2);

#line 854 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 857 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 859 "make.c"
  MR_Box make__wrapper_arg_2,
#line 861 "make.c"
  MR_Box make__wrapper_arg_3);

#line 864 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 867 "make.c"
  MR_Box make__wrapper_arg_1,
#line 869 "make.c"
  MR_Box make__wrapper_arg_2);

#line 872 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 875 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 877 "make.c"
  MR_Box make__wrapper_arg_2,
#line 879 "make.c"
  MR_Box make__wrapper_arg_3);

#line 882 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 885 "make.c"
  MR_Box make__wrapper_arg_1,
#line 887 "make.c"
  MR_Box make__wrapper_arg_2);

#line 890 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 893 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 895 "make.c"
  MR_Box make__wrapper_arg_2,
#line 897 "make.c"
  MR_Box make__wrapper_arg_3);

#line 900 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 903 "make.c"
  MR_Box make__wrapper_arg_1,
#line 905 "make.c"
  MR_Box make__wrapper_arg_2);

#line 908 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 911 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 913 "make.c"
  MR_Box make__wrapper_arg_2,
#line 915 "make.c"
  MR_Box make__wrapper_arg_3);

#line 918 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 921 "make.c"
  MR_Box make__wrapper_arg_1,
#line 923 "make.c"
  MR_Box make__wrapper_arg_2);

#line 926 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 929 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 931 "make.c"
  MR_Box make__wrapper_arg_2,
#line 933 "make.c"
  MR_Box make__wrapper_arg_3);

#line 936 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 939 "make.c"
  MR_Box make__wrapper_arg_1,
#line 941 "make.c"
  MR_Box make__wrapper_arg_2);

#line 944 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 947 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 949 "make.c"
  MR_Box make__wrapper_arg_2,
#line 951 "make.c"
  MR_Box make__wrapper_arg_3);

#line 954 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 957 "make.c"
  MR_Box make__wrapper_arg_1,
#line 959 "make.c"
  MR_Box make__wrapper_arg_2);

#line 962 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 965 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 967 "make.c"
  MR_Box make__wrapper_arg_2,
#line 969 "make.c"
  MR_Box make__wrapper_arg_3);

#line 972 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 975 "make.c"
  MR_Box make__wrapper_arg_1,
#line 977 "make.c"
  MR_Box make__wrapper_arg_2);

#line 980 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 983 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 985 "make.c"
  MR_Box make__wrapper_arg_2,
#line 987 "make.c"
  MR_Box make__wrapper_arg_3);

#line 990 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 993 "make.c"
  MR_Box make__wrapper_arg_1,
#line 995 "make.c"
  MR_Box make__wrapper_arg_2);

#line 998 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 1001 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1003 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1005 "make.c"
  MR_Box make__wrapper_arg_3);

#line 1008 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 1011 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1013 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1016 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 1019 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1021 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1023 "make.c"
  MR_Box make__wrapper_arg_3);

#line 1026 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 1029 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1031 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1034 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 1037 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1039 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1041 "make.c"
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



#line 1645 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 1654 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 1662 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1671 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  (MR_Integer) 0
};

#line 1677 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  (MR_Integer) 1
};

#line 1683 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1689 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1695 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1701 "make.c"
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

#line 1718 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_compilation_task_type_0
};

#line 1723 "make.c"
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

#line 1738 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 1743 "make.c"
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

#line 1758 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 1764 "make.c"
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

#line 1779 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1785 "make.c"
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

#line 1800 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_0
};

#line 1805 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1810 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_2
};

#line 1815 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_3
};

#line 1820 "make.c"
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

#line 1844 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4] = {
  &make__make__du_functor_desc_compilation_task_type_0_3,
  &make__make__du_functor_desc_compilation_task_type_0_2,
  &make__make__du_functor_desc_compilation_task_type_0_0,
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1852 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1860 "make.c"
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

#line 1877 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 1886 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

#line 1894 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1901 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

#line 1908 "make.c"
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

#line 1923 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1928 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_dependency_file_index_map_0_0
  }
};

#line 1937 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1942 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1] = {
  (MR_Integer) 0
};

#line 1947 "make.c"
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

#line 1964 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  (MR_Integer) 0
};

#line 1970 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  (MR_Integer) 1
};

#line 1976 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  (MR_Integer) 2
};

#line 1982 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  (MR_Integer) 3
};

#line 1988 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_2,
  &make__make__enum_functor_desc_dependency_status_0_3
};

#line 1996 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_3,
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_2
};

#line 2004 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2012 "make.c"
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

#line 2029 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2038 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

#line 2047 "make.c"
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

#line 2064 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2072 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2078 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

#line 2084 "make.c"
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

#line 2099 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2104 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_last_hash_0_0
  }
};

#line 2113 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2118 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1] = {
  (MR_Integer) 0
};

#line 2123 "make.c"
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

#line 2140 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 2146 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2] = {
  (MR_String) "linked_tf_name",
  (MR_String) "linked_tf_type"
};

#line 2152 "make.c"
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

#line 2167 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2172 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_linked_target_file_0_0
  }
};

#line 2181 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2186 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1] = {
  (MR_Integer) 0
};

#line 2191 "make.c"
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

#line 2208 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
};

#line 2213 "make.c"
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

#line 2228 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2233 "make.c"
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

#line 2248 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2253 "make.c"
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

#line 2268 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1] = {
  &make__make__du_functor_desc_make_error_0_0
};

#line 2273 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1] = {
  &make__make__du_functor_desc_make_error_0_1
};

#line 2278 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1] = {
  &make__make__du_functor_desc_make_error_0_2
};

#line 2283 "make.c"
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

#line 2302 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3] = {
  &make__make__du_functor_desc_make_error_0_1,
  &make__make__du_functor_desc_make_error_0_2,
  &make__make__du_functor_desc_make_error_0_0
};

#line 2309 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2316 "make.c"
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

#line 2333 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2341 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2350 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2359 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2368 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

#line 2377 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

#line 2386 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2394 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2403 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2412 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2420 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2428 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 2437 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0
  }
};

#line 2445 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__util__make__util__type_ctor_info_job_ctl_0
  }
};

#line 2453 "make.c"
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

#line 2477 "make.c"
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

#line 2501 "make.c"
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

#line 2516 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2521 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_info_0_0
  }
};

#line 2530 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2535 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1] = {
  (MR_Integer) 0
};

#line 2540 "make.c"
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

#line 2557 "make.c"
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

#line 2572 "make.c"
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

#line 2587 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 2592 "make.c"
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

#line 2607 "make.c"
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

#line 2622 "make.c"
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

#line 2637 "make.c"
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

#line 2652 "make.c"
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

#line 2667 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6] = {
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_1,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_6
};

#line 2677 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1] = {
  &make__make__du_functor_desc_misc_target_type_0_2
};

#line 2682 "make.c"
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

#line 2696 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7] = {
  &make__make__du_functor_desc_misc_target_type_0_2,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_6,
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_1
};

#line 2707 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 2718 "make.c"
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

#line 2735 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  (MR_Integer) 0
};

#line 2741 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_short_interface",
  (MR_Integer) 1
};

#line 2747 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_interface",
  (MR_Integer) 2
};

#line 2753 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_private_interface",
  (MR_Integer) 3
};

#line 2759 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_optimization_interface",
  (MR_Integer) 4
};

#line 2765 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  (MR_Integer) 5
};

#line 2771 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  (MR_Integer) 6
};

#line 2777 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  (MR_Integer) 7
};

#line 2783 "make.c"
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

#line 2795 "make.c"
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

#line 2807 "make.c"
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

#line 2819 "make.c"
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

#line 2836 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2845 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2853 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2860 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

#line 2867 "make.c"
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

#line 2882 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2887 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_index_map_0_0
  }
};

#line 2896 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2901 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1] = {
  (MR_Integer) 0
};

#line 2906 "make.c"
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

#line 2923 "make.c"
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

#line 2938 "make.c"
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

#line 2953 "make.c"
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

#line 2968 "make.c"
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

#line 2983 "make.c"
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

#line 2998 "make.c"
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

#line 3013 "make.c"
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

#line 3028 "make.c"
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

#line 3043 "make.c"
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

#line 3058 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_c_header_type_0
};

#line 3063 "make.c"
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

#line 3078 "make.c"
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

#line 3093 "make.c"
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

#line 3108 "make.c"
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

#line 3123 "make.c"
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

#line 3138 "make.c"
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

#line 3153 "make.c"
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

#line 3168 "make.c"
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

#line 3183 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_17[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 3188 "make.c"
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

#line 3203 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_18[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3209 "make.c"
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

#line 3224 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3230 "make.c"
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

#line 3245 "make.c"
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

#line 3260 "make.c"
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

#line 3281 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1] = {
  &make__make__du_functor_desc_module_target_type_0_9
};

#line 3286 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1] = {
  &make__make__du_functor_desc_module_target_type_0_17
};

#line 3291 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[2] = {
  &make__make__du_functor_desc_module_target_type_0_18,
  &make__make__du_functor_desc_module_target_type_0_19
};

#line 3297 "make.c"
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

#line 3321 "make.c"
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

#line 3346 "make.c"
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

#line 3371 "make.c"
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

#line 3388 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  (MR_Integer) 0
};

#line 3394 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  (MR_Integer) 1
};

#line 3400 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_0,
  &make__make__enum_functor_desc_rebuild_module_deps_0_1
};

#line 3406 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_1,
  &make__make__enum_functor_desc_rebuild_module_deps_0_0
};

#line 3412 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3418 "make.c"
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

#line 3435 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3441 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

#line 3447 "make.c"
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

#line 3462 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3467 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_file_0_0
  }
};

#line 3476 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3481 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1] = {
  (MR_Integer) 0
};

#line 3486 "make.c"
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

#line 3503 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3508 "make.c"
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

#line 3523 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 3528 "make.c"
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

#line 3543 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_misc_target_type_0
};

#line 3548 "make.c"
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

#line 3563 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1] = {
  &make__make__du_functor_desc_target_type_0_0
};

#line 3568 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1] = {
  &make__make__du_functor_desc_target_type_0_1
};

#line 3573 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1] = {
  &make__make__du_functor_desc_target_type_0_2
};

#line 3578 "make.c"
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

#line 3597 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3] = {
  &make__make__du_functor_desc_target_type_0_1,
  &make__make__du_functor_desc_target_type_0_2,
  &make__make__du_functor_desc_target_type_0_0
};

#line 3604 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3611 "make.c"
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

#line 3628 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 3631 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3633 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3635 "make.c"
{
#line 3637 "make.c"
  {
#line 3639 "make.c"
    MR_bool make__succeeded;

#line 3642 "make.c"
    {
#line 3644 "make.c"
      make__succeeded = make____Unify____c_header_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3647 "make.c"
    return make__succeeded;
#line 3649 "make.c"
  }
#line 3651 "make.c"
}

#line 3654 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 3657 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3659 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3661 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3663 "make.c"
{
#line 3665 "make.c"
  {
#line 3667 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3670 "make.c"
    {
#line 3672 "make.c"
      make____Compare____c_header_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3675 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3677 "make.c"
  }
#line 3679 "make.c"
}

#line 3682 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 3685 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3687 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3689 "make.c"
{
#line 3691 "make.c"
  {
#line 3693 "make.c"
    MR_bool make__succeeded;

#line 3696 "make.c"
    {
#line 3698 "make.c"
      make__succeeded = make____Unify____compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3701 "make.c"
    return make__succeeded;
#line 3703 "make.c"
  }
#line 3705 "make.c"
}

#line 3708 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 3711 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3713 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3715 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3717 "make.c"
{
#line 3719 "make.c"
  {
#line 3721 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3724 "make.c"
    {
#line 3726 "make.c"
      make____Compare____compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3729 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3731 "make.c"
  }
#line 3733 "make.c"
}

#line 3736 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 3739 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3741 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3743 "make.c"
{
#line 3745 "make.c"
  {
#line 3747 "make.c"
    MR_bool make__succeeded;

#line 3750 "make.c"
    {
#line 3752 "make.c"
      make__succeeded = make____Unify____dependency_file_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3755 "make.c"
    return make__succeeded;
#line 3757 "make.c"
  }
#line 3759 "make.c"
}

#line 3762 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 3765 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3767 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3769 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3771 "make.c"
{
#line 3773 "make.c"
  {
#line 3775 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3778 "make.c"
    {
#line 3780 "make.c"
      make____Compare____dependency_file_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3783 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3785 "make.c"
  }
#line 3787 "make.c"
}

#line 3790 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 3793 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3795 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3797 "make.c"
{
#line 3799 "make.c"
  {
#line 3801 "make.c"
    MR_bool make__succeeded;

#line 3804 "make.c"
    {
#line 3806 "make.c"
      make__succeeded = make____Unify____dependency_status_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3809 "make.c"
    return make__succeeded;
#line 3811 "make.c"
  }
#line 3813 "make.c"
}

#line 3816 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 3819 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3821 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3823 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3825 "make.c"
{
#line 3827 "make.c"
  {
#line 3829 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3832 "make.c"
    {
#line 3834 "make.c"
      make____Compare____dependency_status_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3837 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3839 "make.c"
  }
#line 3841 "make.c"
}

#line 3844 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 3847 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3849 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3851 "make.c"
{
#line 3853 "make.c"
  {
#line 3855 "make.c"
    MR_bool make__succeeded;

#line 3858 "make.c"
    {
#line 3860 "make.c"
      make__succeeded = make____Unify____file_timestamps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3863 "make.c"
    return make__succeeded;
#line 3865 "make.c"
  }
#line 3867 "make.c"
}

#line 3870 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 3873 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3875 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3877 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3879 "make.c"
{
#line 3881 "make.c"
  {
#line 3883 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3886 "make.c"
    {
#line 3888 "make.c"
      make____Compare____file_timestamps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3891 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3893 "make.c"
  }
#line 3895 "make.c"
}

#line 3898 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 3901 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3903 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3905 "make.c"
{
#line 3907 "make.c"
  {
#line 3909 "make.c"
    MR_bool make__succeeded;

#line 3912 "make.c"
    {
#line 3914 "make.c"
      make__succeeded = make____Unify____last_hash_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3917 "make.c"
    return make__succeeded;
#line 3919 "make.c"
  }
#line 3921 "make.c"
}

#line 3924 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 3927 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3929 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3931 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3933 "make.c"
{
#line 3935 "make.c"
  {
#line 3937 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3940 "make.c"
    {
#line 3942 "make.c"
      make____Compare____last_hash_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3945 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3947 "make.c"
  }
#line 3949 "make.c"
}

#line 3952 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 3955 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3957 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3959 "make.c"
{
#line 3961 "make.c"
  {
#line 3963 "make.c"
    MR_bool make__succeeded;

#line 3966 "make.c"
    {
#line 3968 "make.c"
      make__succeeded = make____Unify____linked_target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3971 "make.c"
    return make__succeeded;
#line 3973 "make.c"
  }
#line 3975 "make.c"
}

#line 3978 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 3981 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3983 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3985 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3987 "make.c"
{
#line 3989 "make.c"
  {
#line 3991 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3994 "make.c"
    {
#line 3996 "make.c"
      make____Compare____linked_target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3999 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4001 "make.c"
  }
#line 4003 "make.c"
}

#line 4006 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 4009 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4011 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4013 "make.c"
{
#line 4015 "make.c"
  {
#line 4017 "make.c"
    MR_bool make__succeeded;

#line 4020 "make.c"
    {
#line 4022 "make.c"
      make__succeeded = make____Unify____make_error_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4025 "make.c"
    return make__succeeded;
#line 4027 "make.c"
  }
#line 4029 "make.c"
}

#line 4032 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 4035 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4037 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4039 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4041 "make.c"
{
#line 4043 "make.c"
  {
#line 4045 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4048 "make.c"
    {
#line 4050 "make.c"
      make____Compare____make_error_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4053 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4055 "make.c"
  }
#line 4057 "make.c"
}

#line 4060 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 4063 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4065 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4067 "make.c"
{
#line 4069 "make.c"
  {
#line 4071 "make.c"
    MR_bool make__succeeded;

#line 4074 "make.c"
    {
#line 4076 "make.c"
      make__succeeded = make____Unify____make_info_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4079 "make.c"
    return make__succeeded;
#line 4081 "make.c"
  }
#line 4083 "make.c"
}

#line 4086 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 4089 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4091 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4093 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4095 "make.c"
{
#line 4097 "make.c"
  {
#line 4099 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4102 "make.c"
    {
#line 4104 "make.c"
      make____Compare____make_info_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4107 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4109 "make.c"
  }
#line 4111 "make.c"
}

#line 4114 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 4117 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4119 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4121 "make.c"
{
#line 4123 "make.c"
  {
#line 4125 "make.c"
    MR_bool make__succeeded;

#line 4128 "make.c"
    {
#line 4130 "make.c"
      make__succeeded = make____Unify____misc_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4133 "make.c"
    return make__succeeded;
#line 4135 "make.c"
  }
#line 4137 "make.c"
}

#line 4140 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 4143 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4145 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4147 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4149 "make.c"
{
#line 4151 "make.c"
  {
#line 4153 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4156 "make.c"
    {
#line 4158 "make.c"
      make____Compare____misc_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4161 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4163 "make.c"
  }
#line 4165 "make.c"
}

#line 4168 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 4171 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4173 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4175 "make.c"
{
#line 4177 "make.c"
  {
#line 4179 "make.c"
    MR_bool make__succeeded;

#line 4182 "make.c"
    {
#line 4184 "make.c"
      make__succeeded = make____Unify____module_compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4187 "make.c"
    return make__succeeded;
#line 4189 "make.c"
  }
#line 4191 "make.c"
}

#line 4194 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 4197 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4199 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4201 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4203 "make.c"
{
#line 4205 "make.c"
  {
#line 4207 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4210 "make.c"
    {
#line 4212 "make.c"
      make____Compare____module_compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4215 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4217 "make.c"
  }
#line 4219 "make.c"
}

#line 4222 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 4225 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4227 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4229 "make.c"
{
#line 4231 "make.c"
  {
#line 4233 "make.c"
    MR_bool make__succeeded;

#line 4236 "make.c"
    {
#line 4238 "make.c"
      make__succeeded = make____Unify____module_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4241 "make.c"
    return make__succeeded;
#line 4243 "make.c"
  }
#line 4245 "make.c"
}

#line 4248 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 4251 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4253 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4255 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4257 "make.c"
{
#line 4259 "make.c"
  {
#line 4261 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4264 "make.c"
    {
#line 4266 "make.c"
      make____Compare____module_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4269 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4271 "make.c"
  }
#line 4273 "make.c"
}

#line 4276 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 4279 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4281 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4283 "make.c"
{
#line 4285 "make.c"
  {
#line 4287 "make.c"
    MR_bool make__succeeded;

#line 4290 "make.c"
    {
#line 4292 "make.c"
      make__succeeded = make____Unify____module_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4295 "make.c"
    return make__succeeded;
#line 4297 "make.c"
  }
#line 4299 "make.c"
}

#line 4302 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 4305 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4307 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4309 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4311 "make.c"
{
#line 4313 "make.c"
  {
#line 4315 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4318 "make.c"
    {
#line 4320 "make.c"
      make____Compare____module_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4323 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4325 "make.c"
  }
#line 4327 "make.c"
}

#line 4330 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 4333 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4335 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4337 "make.c"
{
#line 4339 "make.c"
  {
#line 4341 "make.c"
    MR_bool make__succeeded;

#line 4344 "make.c"
    {
#line 4346 "make.c"
      make__succeeded = make____Unify____rebuild_module_deps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4349 "make.c"
    return make__succeeded;
#line 4351 "make.c"
  }
#line 4353 "make.c"
}

#line 4356 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 4359 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4361 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4363 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4365 "make.c"
{
#line 4367 "make.c"
  {
#line 4369 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4372 "make.c"
    {
#line 4374 "make.c"
      make____Compare____rebuild_module_deps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4377 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4379 "make.c"
  }
#line 4381 "make.c"
}

#line 4384 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 4387 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4389 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4391 "make.c"
{
#line 4393 "make.c"
  {
#line 4395 "make.c"
    MR_bool make__succeeded;

#line 4398 "make.c"
    {
#line 4400 "make.c"
      make__succeeded = make____Unify____target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4403 "make.c"
    return make__succeeded;
#line 4405 "make.c"
  }
#line 4407 "make.c"
}

#line 4410 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 4413 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4415 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4417 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4419 "make.c"
{
#line 4421 "make.c"
  {
#line 4423 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4426 "make.c"
    {
#line 4428 "make.c"
      make____Compare____target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4431 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4433 "make.c"
  }
#line 4435 "make.c"
}

#line 4438 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 4441 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4443 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4445 "make.c"
{
#line 4447 "make.c"
  {
#line 4449 "make.c"
    MR_bool make__succeeded;

#line 4452 "make.c"
    {
#line 4454 "make.c"
      make__succeeded = make____Unify____target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4457 "make.c"
    return make__succeeded;
#line 4459 "make.c"
  }
#line 4461 "make.c"
}

#line 4464 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 4467 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4469 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4471 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4473 "make.c"
{
#line 4475 "make.c"
  {
#line 4477 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4480 "make.c"
    {
#line 4482 "make.c"
      make____Compare____target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4485 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4487 "make.c"
  }
#line 4489 "make.c"
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
#line 324 "make.m"
      return;
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
      return make__succeeded = mercury__string__contains_char_2_p_0(make__LambdaHeadVar__1_46, make__V_47_47);
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
#line 4597 "make.c"
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
#line 433 "make.m"
                    return;
                  }
#line 433 "make.m"
                }
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 1:
#line 4638 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
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
#line 4668 "make.c"
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
#line 433 "make.m"
                    return;
                  }
#line 433 "make.m"
                }
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 2:
#line 4696 "make.c"
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
#line 4720 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 433 "make.m"
                break;
#line 433 "make.m"
              case (MR_Integer) 1:
#line 4726 "make.c"
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
#line 433 "make.m"
                    return;
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
#line 4809 "make.c"
                {
#line 4811 "make.c"
                  return make__succeeded = make____Unify____module_target_type_0_0(make__V_3_3, make__V_4_4);
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
#line 4837 "make.c"
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
#line 4862 "make.c"
                {
#line 4864 "make.c"
                  return make__succeeded = make____Unify____misc_target_type_0_0(make__V_7_7, make__V_8_8);
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
#line 4906 "make.c"
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
#line 4928 "make.c"
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
#line 263 "make.m"
            return;
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

#line 4989 "make.c"
        {
#line 4991 "make.c"
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 263 "make.m"
        if (make__succeeded)
#line 4996 "make.c"
          {
#line 4998 "make.c"
            return make__succeeded = make____Unify____module_target_type_0_0(make__V_4_4, make__V_6_6);
          }
#line 263 "make.m"
      }
#line 263 "make.m"
    return make__succeeded;
#line 263 "make.m"
  }
#line 263 "make.m"
}

#line 50 "make.m"
void MR_CALL 
make____Compare____rebuild_module_deps_0_0(
#line 50 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 50 "make.m"
  MR_Word make__HeadVar__2_2,
#line 50 "make.m"
  MR_Word make__HeadVar__3_3)
#line 50 "make.m"
{
#line 50 "make.m"
  {
#line 50 "make.m"
    MR_bool make__succeeded;
#line 50 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 50 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 50 "make.m"
    {
#line 50 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 50 "make.m"
      return;
    }
#line 50 "make.m"
  }
#line 50 "make.m"
}

#line 50 "make.m"
MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0(
#line 50 "make.m"
  MR_Word make__HeadVar__2_1,
#line 50 "make.m"
  MR_Word make__HeadVar__2_2)
#line 50 "make.m"
{
#line 5051 "make.c"
  {
#line 5053 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 5056 "make.c"
    return make__succeeded;
#line 5058 "make.c"
  }
#line 50 "make.m"
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
#line 5087 "make.c"
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
#line 5112 "make.c"
          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 217 "make.m"
        else
#line 217 "make.m"
          {
#line 217 "make.m"
            make__succeeded = (make__V_4_4 > make__V_5_5);
#line 217 "make.m"
            if (make__succeeded)
#line 5122 "make.c"
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
#line 5472 "make.c"
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
#line 5542 "make.c"
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
#line 5623 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 0;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 1:
#line 5629 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 1;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 2:
#line 5635 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 2;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 3:
#line 5641 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 3;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 4:
#line 5647 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 4;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 5:
#line 5653 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 5;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 6:
#line 5659 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 6;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 7:
#line 5665 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 7;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 8:
#line 5671 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 8;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 9:
#line 5677 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 10;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 10:
#line 5683 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 11;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 11:
#line 5689 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 12;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 12:
#line 5695 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 13;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 13:
#line 5701 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 14;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 14:
#line 5707 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 15;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 15:
#line 5713 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 16;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 16:
#line 5719 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 20;
#line 217 "make.m"
            break;
#line 217 "make.m"
        }
#line 217 "make.m"
        break;
#line 217 "make.m"
      case (MR_Integer) 1:
#line 5729 "make.c"
        *make__HeadVar__2_2 = (MR_Integer) 9;
#line 217 "make.m"
        break;
#line 217 "make.m"
      case (MR_Integer) 2:
#line 5735 "make.c"
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
#line 5748 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 18;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 1:
#line 5754 "make.c"
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
#line 6083 "make.c"
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
#line 6108 "make.c"
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
#line 6146 "make.c"
                    make__succeeded = (make__V_39_39 == make__V_41_41);
#line 217 "make.m"
                    if (make__succeeded)
#line 6150 "make.c"
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
#line 6181 "make.c"
                    make__succeeded = (make__V_43_43 == make__V_45_45);
#line 217 "make.m"
                    if (make__succeeded)
#line 6185 "make.c"
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
#line 6230 "make.c"
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
#line 6256 "make.c"
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
#line 6276 "make.c"
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
#line 178 "make.m"
                return;
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

#line 6345 "make.c"
        {
#line 6347 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[12], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 178 "make.m"
        if (make__succeeded)
#line 178 "make.m"
          {
#line 6354 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 6356 "make.c"
            {
#line 6358 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 178 "make.m"
            if (make__succeeded)
#line 6363 "make.c"
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
#line 207 "make.m"
      return;
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
#line 6417 "make.c"
  {
#line 6419 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 6422 "make.c"
    return make__succeeded;
#line 6424 "make.c"
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
#line 6453 "make.c"
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
#line 6525 "make.c"
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
#line 6589 "make.c"
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
#line 6653 "make.c"
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
#line 6717 "make.c"
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
#line 6781 "make.c"
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
#line 6845 "make.c"
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
#line 6878 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 1:
#line 6884 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 2:
#line 6890 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 3:
#line 6896 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 4:
#line 6902 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "make.m"
                    break;
#line 246 "make.m"
                  case (MR_Integer) 5:
#line 6908 "make.c"
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
#line 246 "make.m"
                    return;
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
#line 7096 "make.c"
                {
#line 7098 "make.c"
                  return make__succeeded = make____Unify____module_target_type_0_0(make__V_7_7, make__V_8_8);
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
#line 7140 "make.c"
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
#line 7234 "make.c"
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
#line 7254 "make.c"
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
#line 7274 "make.c"
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
#line 7294 "make.c"
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
#line 7314 "make.c"
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
#line 7334 "make.c"
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
#line 7354 "make.c"
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
#line 7374 "make.c"
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
#line 7394 "make.c"
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
#line 7414 "make.c"
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
#line 7434 "make.c"
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
#line 7454 "make.c"
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
#line 7474 "make.c"
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
#line 7498 "make.c"
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
#line 7522 "make.c"
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
#line 7542 "make.c"
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
#line 7562 "make.c"
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
#line 7582 "make.c"
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
#line 7602 "make.c"
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
#line 100 "make.m"
                                                                                      return;
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

#line 7803 "make.c"
        {
#line 7805 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[6], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_23_23)));
        }
#line 100 "make.m"
        if (make__succeeded)
#line 100 "make.m"
          {
#line 7812 "make.c"
            make__TypeInfo_46_46 = (MR_Word) &make_scalar_common_1[5];
#line 7814 "make.c"
            {
#line 7816 "make.c"
              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_46_46, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_24_24)));
            }
#line 100 "make.m"
            if (make__succeeded)
#line 100 "make.m"
              {
#line 7823 "make.c"
                make__TypeInfo_47_47 = (MR_Word) &make_scalar_common_1[7];
#line 7825 "make.c"
                {
#line 7827 "make.c"
                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_47_47, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_25_25)));
                }
#line 100 "make.m"
                if (make__succeeded)
#line 100 "make.m"
                  {
#line 7834 "make.c"
                    make__TypeInfo_48_48 = (MR_Word) &make_scalar_common_2[3];
#line 7836 "make.c"
                    {
#line 7838 "make.c"
                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_48_48, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_26_26)));
                    }
#line 100 "make.m"
                    if (make__succeeded)
#line 100 "make.m"
                      {
#line 7845 "make.c"
                        make__TypeInfo_49_49 = (MR_Word) &make_scalar_common_2[3];
#line 7847 "make.c"
                        {
#line 7849 "make.c"
                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_49_49, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_27_27)));
                        }
#line 100 "make.m"
                        if (make__succeeded)
#line 100 "make.m"
                          {
#line 7856 "make.c"
                            make__TypeInfo_50_50 = (MR_Word) &make_scalar_common_1[8];
#line 7858 "make.c"
                            {
#line 7860 "make.c"
                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_50_50, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_28_28)));
                            }
#line 100 "make.m"
                            if (make__succeeded)
#line 100 "make.m"
                              {
#line 7867 "make.c"
                                {
#line 7869 "make.c"
                                  make__succeeded = make____Unify____module_index_map_0_0(make__V_9_9, make__V_29_29);
                                }
#line 100 "make.m"
                                if (make__succeeded)
#line 100 "make.m"
                                  {
#line 7876 "make.c"
                                    {
#line 7878 "make.c"
                                      make__succeeded = make____Unify____dependency_file_index_map_0_0(make__V_10_10, make__V_30_30);
                                    }
#line 100 "make.m"
                                    if (make__succeeded)
#line 100 "make.m"
                                      {
#line 7885 "make.c"
                                        make__TypeInfo_51_51 = (MR_Word) &make_scalar_common_1[9];
#line 7887 "make.c"
                                        {
#line 7889 "make.c"
                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_51_51, ((MR_Box) (make__V_11_11)), ((MR_Box) (make__V_31_31)));
                                        }
#line 100 "make.m"
                                        if (make__succeeded)
#line 100 "make.m"
                                          {
#line 7896 "make.c"
                                            make__TypeInfo_52_52 = (MR_Word) &make_scalar_common_1[10];
#line 7898 "make.c"
                                            {
#line 7900 "make.c"
                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                            }
#line 100 "make.m"
                                            if (make__succeeded)
#line 100 "make.m"
                                              {
#line 7907 "make.c"
                                                make__TypeInfo_53_53 = (MR_Word) &make_scalar_common_1[10];
#line 7909 "make.c"
                                                {
#line 7911 "make.c"
                                                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                                }
#line 100 "make.m"
                                                if (make__succeeded)
#line 100 "make.m"
                                                  {
#line 7918 "make.c"
                                                    make__TypeInfo_54_54 = (MR_Word) &make_scalar_common_1[11];
#line 7920 "make.c"
                                                    {
#line 7922 "make.c"
                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                    }
#line 100 "make.m"
                                                    if (make__succeeded)
#line 100 "make.m"
                                                      {
#line 7929 "make.c"
                                                        make__TypeInfo_55_55 = (MR_Word) &make_scalar_common_1[10];
#line 7931 "make.c"
                                                        {
#line 7933 "make.c"
                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                        }
#line 100 "make.m"
                                                        if (make__succeeded)
#line 100 "make.m"
                                                          {
#line 7940 "make.c"
                                                            make__succeeded = (make__V_16_16 == make__V_36_36);
#line 100 "make.m"
                                                            if (make__succeeded)
#line 100 "make.m"
                                                              {
#line 7946 "make.c"
                                                                make__succeeded = (make__V_17_17 == make__V_37_37);
#line 100 "make.m"
                                                                if (make__succeeded)
#line 100 "make.m"
                                                                  {
#line 7952 "make.c"
                                                                    make__TypeInfo_56_56 = (MR_Word) &make_scalar_common_2[5];
#line 7954 "make.c"
                                                                    {
#line 7956 "make.c"
                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_56_56, ((MR_Box) (make__V_18_18)), ((MR_Box) (make__V_38_38)));
                                                                    }
#line 100 "make.m"
                                                                    if (make__succeeded)
#line 100 "make.m"
                                                                      {
#line 7963 "make.c"
                                                                        make__TypeInfo_57_57 = (MR_Word) &make_scalar_common_2[6];
#line 7965 "make.c"
                                                                        {
#line 7967 "make.c"
                                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_57_57, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                        }
#line 100 "make.m"
                                                                        if (make__succeeded)
#line 100 "make.m"
                                                                          {
#line 7974 "make.c"
                                                                            make__TypeInfo_58_58 = (MR_Word) &make_scalar_common_2[7];
#line 7976 "make.c"
                                                                            {
#line 7978 "make.c"
                                                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_58_58, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                            }
#line 100 "make.m"
                                                                            if (make__succeeded)
#line 100 "make.m"
                                                                              {
#line 7985 "make.c"
                                                                                make__succeeded = (make__V_21_21 == make__V_41_41);
#line 100 "make.m"
                                                                                if (make__succeeded)
#line 100 "make.m"
                                                                                  {
#line 7991 "make.c"
                                                                                    make__TypeInfo_59_59 = (MR_Word) &make_scalar_common_2[8];
#line 7993 "make.c"
                                                                                    {
#line 7995 "make.c"
                                                                                      return make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_59_59, ((MR_Box) (make__V_22_22)), ((MR_Box) (make__V_42_42)));
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
#line 8069 "make.c"
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
#line 194 "make.m"
                    return;
                  }
#line 194 "make.m"
                }
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 1:
#line 8110 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 2:
#line 8116 "make.c"
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
#line 8140 "make.c"
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
#line 194 "make.m"
                    return;
                  }
#line 194 "make.m"
                }
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 2:
#line 8164 "make.c"
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
#line 8188 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 1:
#line 8194 "make.c"
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
#line 194 "make.m"
                    return;
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
#line 8277 "make.c"
                {
#line 8279 "make.c"
                  return make__succeeded = make____Unify____target_file_0_0(make__V_3_3, make__V_4_4);
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
#line 8305 "make.c"
                {
#line 8307 "make.c"
                  return make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_5_5, make__V_6_6);
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
#line 8333 "make.c"
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
#line 8374 "make.c"
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
#line 8396 "make.c"
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
#line 269 "make.m"
              return;
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

#line 8466 "make.c"
        {
#line 8468 "make.c"
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 269 "make.m"
        if (make__succeeded)
#line 8473 "make.c"
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
#line 8508 "make.c"
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
#line 8530 "make.c"
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
#line 592 "make.m"
            return;
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

#line 8591 "make.c"
        {
#line 8593 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_5_5)));
        }
#line 592 "make.m"
        if (make__succeeded)
#line 8598 "make.c"
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
#line 255 "make.m"
      return;
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
      return make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[5], ((MR_Box) (make__Cast_HeadVar1_3)), ((MR_Box) (make__Cast_HeadVar2_4)));
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
#line 257 "make.m"
      return;
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
#line 8712 "make.c"
  {
#line 8714 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 8717 "make.c"
    return make__succeeded;
#line 8719 "make.c"
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
#line 8748 "make.c"
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
#line 8774 "make.c"
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
#line 8794 "make.c"
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
#line 186 "make.m"
                return;
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

#line 8863 "make.c"
        {
#line 8865 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[4], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 186 "make.m"
        if (make__succeeded)
#line 186 "make.m"
          {
#line 8872 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 8874 "make.c"
            {
#line 8876 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 186 "make.m"
            if (make__succeeded)
#line 8881 "make.c"
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
#line 8918 "make.c"
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
#line 199 "make.m"
                    return;
                  }
#line 199 "make.m"
                }
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 8963 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 8969 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 8975 "make.c"
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
#line 8999 "make.c"
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
#line 199 "make.m"
                    return;
                  }
#line 199 "make.m"
                }
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 9027 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
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
#line 9089 "make.c"
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
#line 199 "make.m"
                        return;
                      }
#line 199 "make.m"
                    }
#line 199 "make.m"
                }
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 9121 "make.c"
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
#line 9147 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 9153 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 9159 "make.c"
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
#line 9183 "make.c"
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
#line 199 "make.m"
                      return;
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
#line 9265 "make.c"
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
#line 9290 "make.c"
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
#line 9321 "make.c"
                make__succeeded = (make__V_7_7 == make__V_9_9);
#line 199 "make.m"
                if (make__succeeded)
#line 9325 "make.c"
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
#line 9356 "make.c"
                make__succeeded = (make__V_11_11 == make__V_13_13);
#line 199 "make.m"
                if (make__succeeded)
#line 9360 "make.c"
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
#line 240 "make.m"
      return;
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
#line 9418 "make.c"
  {
#line 9420 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 9423 "make.c"
    return make__succeeded;
#line 9425 "make.c"
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
#line 707 "make.m"
              if (make__succeeded)
#line 706 "make.m"
                *make__Same_10 = (MR_Integer) 1;
#line 707 "make.m"
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
      libs__globals__lookup_bool_option_3_p_0(make__Globals_7, (MR_Integer) 45, &make__Verbose_18);
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
#line 733 "make.m"
                  return;
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
#line 730 "make.m"
                  return;
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
      return make__succeeded = make__is_consequential_option_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_Word) make__wrapper_arg_1));
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
#line 642 "make.m"
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
#line 642 "make.m"
        if (make__succeeded)
#line 641 "make.m"
          {
#line 641 "make.m"
            make__Hash_22 = make__HashPrime_21;
#line 641 "make.m"
            *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
#line 641 "make.m"
          }
#line 642 "make.m"
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
#line 568 "make.m"
            if (make__succeeded)
#line 567 "make.m"
              {
#line 567 "make.m"
                *make__DotIndex_6 = make__CharIndex_7;
#line 567 "make.m"
                make__succeeded = MR_TRUE;
#line 567 "make.m"
              }
#line 568 "make.m"
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
#line 471 "make.m"
        return;
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
#line 473 "make.m"
        return;
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
#line 465 "make.m"
      return;
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
#line 522 "make.m"
          return;
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
#line 518 "make.m"
          return;
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
#line 524 "make.m"
        return;
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
#line 510 "make.m"
          return;
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
#line 513 "make.m"
        return;
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

#line 475 "make.m"
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
#line 475 "make.m"
      if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_0))
#line 480 "make.m"
        {
#line 480 "make.m"
          MR_Word make__ModuleTargetType_56;

#line 476 "make.m"
          {
#line 476 "make.m"
            (make__env).make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, &make__ModuleTargetType_56);
          }
#line 480 "make.m"
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
#line 480 "make.m"
          else
#line 486 "make.m"
            {
#line 486 "make.m"
              MR_String make__ModuleNameStr1_12;
#line 481 "make.m"
              MR_String make__V_20_20;
#line 481 "make.m"
              MR_String make__V_57_57;

#line 481 "make.m"
              {
#line 481 "make.m"
                libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 561, &make__V_57_57);
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
#line 486 "make.m"
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
#line 486 "make.m"
              else
#line 493 "make.m"
                {
#line 493 "make.m"
                  MR_String make__ModuleNameStr1_54;
#line 488 "make.m"
                  MR_String make__V_23_23;
#line 488 "make.m"
                  MR_String make__V_58_58;

#line 487 "make.m"
                  {
#line 487 "make.m"
                    libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 560, &make__V_58_58);
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
#line 493 "make.m"
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
#line 493 "make.m"
                  else
#line 500 "make.m"
                    {
#line 494 "make.m"
                      MR_String make__V_59_59;

#line 494 "make.m"
                      {
#line 494 "make.m"
                        libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 562, &make__V_59_59);
                      }
#line 494 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_59_59) == 0);
#line 500 "make.m"
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
#line 500 "make.m"
                      else
#line 506 "make.m"
                        {
#line 506 "make.m"
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
#line 506 "make.m"
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
#line 506 "make.m"
                          else
#line 526 "make.m"
                            {
#line 526 "make.m"
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
#line 526 "make.m"
                              if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_1))
#line 531 "make.m"
                                {
#line 527 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".check") == 0);
#line 531 "make.m"
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
#line 531 "make.m"
                                  else
#line 536 "make.m"
                                    {
#line 532 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".analyse") == 0);
#line 536 "make.m"
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
#line 536 "make.m"
                                      else
#line 541 "make.m"
                                        {
#line 537 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".clean") == 0);
#line 541 "make.m"
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
#line 541 "make.m"
                                          else
#line 546 "make.m"
                                            {
#line 542 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".realclean") == 0);
#line 546 "make.m"
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
#line 546 "make.m"
                                              else
#line 552 "make.m"
                                                {
#line 552 "make.m"
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
#line 552 "make.m"
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
#line 552 "make.m"
                                                  else
#line 557 "make.m"
                                                    {
#line 557 "make.m"
                                                      MR_Word make__V_41_41;

#line 553 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".doc") == 0);
#line 557 "make.m"
                                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 557 "make.m"
                                                        {
#line 555 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 556 "make.m"
                                                          make__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 556 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[10]);
#line 556 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 557 "make.m"
                                                        }
#line 557 "make.m"
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
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 531 "make.m"
                                    {
#line 531 "make.m"
                                      make__classify_target_2_4_p_0_1(&make__env);
                                    }
#line 531 "make.m"
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
#line 446 "make.m"
      return;
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
#line 451 "make.m"
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
#line 11305 "make.c"
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
#line 451 "make.m"
    if (make__succeeded)
#line 450 "make.m"
      {
#line 450 "make.m"
        make__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 0)));
#line 450 "make.m"
        make__TargetType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 1)));
#line 450 "make.m"
      }
#line 451 "make.m"
    else
#line 456 "make.m"
      {
#line 456 "make.m"
        MR_String make__ModuleNameStr_14;

#line 452 "make.m"
        {
#line 452 "make.m"
          make__succeeded = mercury__string__append_3_p_1((MR_String) "lib", &make__ModuleNameStr_14, make__FileName_5);
        }
#line 456 "make.m"
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
#line 456 "make.m"
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
#line 456 "make.m"
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
      libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 613, &make__TrackFlags_15);
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
#line 414 "make.m"
                return;
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
#line 420 "make.m"
                return;
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
#line 423 "make.m"
                return;
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

#line 46 "make.m"
MR_String MR_CALL 
make__make_module_dep_file_extension_0_f_0(void)
#line 46 "make.m"
{
#line 280 "make.m"
  {
#line 280 "make.m"
    MR_bool make__succeeded;

#line 280 "make.m"
    return (MR_String) ".module_dep";
#line 280 "make.m"
  }
#line 46 "make.m"
}

#line 43 "make.m"
void MR_CALL 
make__make_write_module_dep_file_4_p_0(
#line 43 "make.m"
  MR_Word make__Globals_5,
#line 43 "make.m"
  MR_Word make__Imports_6)
#line 43 "make.m"
{
#line 278 "make.m"
  {
#line 278 "make.m"
    MR_bool make__succeeded;

#line 278 "make.m"
    {
#line 278 "make.m"
      make__module_dep_file__write_module_dep_file_4_p_0(make__Globals_5, make__Imports_6);
#line 278 "make.m"
      return;
    }
#line 278 "make.m"
  }
#line 43 "make.m"
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
#line 322 "make.m"
      return;
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
      return make__succeeded = make__IntroducedFrom__pred__make_process_args__348__1_1_p_0(((MR_String) make__wrapper_arg_1));
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
      return make__succeeded = make__IntroducedFrom__pred__make_process_args__312__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 312 "make.m"
    return make__succeeded;
#line 312 "make.m"
  }
#line 312 "make.m"
}

#line 40 "make.m"
void MR_CALL 
make__make_process_args_7_p_0(
#line 40 "make.m"
  MR_Word make__Globals_8,
#line 40 "make.m"
  MR_Word make__DetectedGradeFlags_9,
#line 40 "make.m"
  MR_Word make__Variables_10,
#line 40 "make.m"
  MR_Word make__OptionArgs_11,
#line 40 "make.m"
  MR_Word make__Targets0_12)
#line 40 "make.m"
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
#line 12011 "make.c"
    make__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 312 "make.m"
    {
#line 312 "make.m"
      mercury__list__filter_3_p_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[13], make__Targets_15, &make__AbsTargets_22);
    }
#line 12018 "make.c"
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
#line 330 "make.m"
              return;
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
              libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 610, &make__KeepGoing_27);
            }
#line 12108 "make.c"
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
#line 12132 "make.c"
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
#line 12180 "make.c"
            make__TypeInfo_109_109 = (MR_Word) &make_scalar_common_1[0];
#line 352 "make.m"
            {
#line 352 "make.m"
              mercury__list__map_3_p_0(make__TypeCtorInfo_94_94, make__TypeInfo_109_109, make__V_70_70, make__NonDependTargets_31, &make__ClassifiedTargets_32);
            }
#line 356 "make.m"
            {
#line 356 "make.m"
              libs__globals__lookup_int_option_3_p_0(make__Globals_8, (MR_Integer) 326, &make__AnalysisRepeat_34);
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
#line 389 "make.m"
                    return;
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
#line 12326 "make.c"
    else
#line 12328 "make.c"
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
#line 330 "make.m"
          return;
        }
#line 12345 "make.c"
      }
#line 283 "make.m"
  }
#line 40 "make.m"
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
