/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 465 "make.m"
struct make__classify_target_2_4_p_0_env_0_s {
#line 465 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__Globals_5;
#line 465 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 465 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix_7;
#line 465 "make.m"
  MR_Word * make__classify_target_2_4_p_0_env_0__HeadVar__4_4;
#line 465 "make.m"
  MR_Cont make__classify_target_2_4_p_0_env_0__cont;
#line 465 "make.m"
  void * make__classify_target_2_4_p_0_env_0__cont_env_ptr;
#line 468 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__succeeded;
#line 468 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleName_8;
#line 468 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__TargetType_9;
#line 468 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr_11;
#line 478 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_10;
#line 478 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_0;
#line 529 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_47;
#line 529 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_1;
#line 517 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix1_16;
#line 511 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15;
#line 511 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_30_30;
#line 511 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_31_31;
#line 511 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_60_60;
#line 516 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_61_61;
#line 465 "make.m"
};

#line 449 "make.m"
struct make__classify_target_3_p_0_2_env_0_s {
#line 449 "make.m"
  MR_Box * make__classify_target_3_p_0_2_env_0__wrapper_arg_1;
#line 449 "make.m"
  MR_Cont make__classify_target_3_p_0_2_env_0__cont;
#line 449 "make.m"
  void * make__classify_target_3_p_0_2_env_0__cont_env_ptr;
#line 449 "make.m"
  MR_Word make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4;
#line 449 "make.m"
};


#line 218 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0;

#line 221 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0;

#line 224 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 227 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0;

#line 230 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1;

#line 233 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2];

#line 236 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2];

#line 239 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2];

#line 242 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1];

#line 245 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0;

#line 248 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1];

#line 251 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1;

#line 254 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2];

#line 257 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2;

#line 260 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2];

#line 263 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_3;

#line 266 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1];

#line 269 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1];

#line 272 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1];

#line 275 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1];

#line 278 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_compilation_task_type_0[4];

#line 281 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4];

#line 284 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4];

#line 287 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0;

#line 290 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0;

#line 293 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3];

#line 296 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3];

#line 299 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_dependency_file_index_map_0_0;

#line 302 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1];

#line 305 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1];

#line 308 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1];

#line 311 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1];

#line 314 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0;

#line 317 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1;

#line 320 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2;

#line 323 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3;

#line 326 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4];

#line 329 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4];

#line 332 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4];

#line 335 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 338 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 341 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0;

#line 344 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2];

#line 347 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2];

#line 350 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_last_hash_0_0;

#line 353 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1];

#line 356 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1];

#line 359 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1];

#line 362 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1];

#line 365 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2];

#line 368 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2];

#line 371 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_linked_target_file_0_0;

#line 374 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1];

#line 377 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1];

#line 380 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1];

#line 383 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1];

#line 386 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1];

#line 389 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_0;

#line 392 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1];

#line 395 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_1;

#line 398 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1];

#line 401 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_2;

#line 404 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1];

#line 407 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1];

#line 410 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1];

#line 413 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_error_0[3];

#line 416 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3];

#line 419 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3];

#line 422 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 425 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 428 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 431 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

#line 434 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

#line 437 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0;

#line 440 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 443 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 446 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 449 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 452 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 455 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 458 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 461 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0;

#line 464 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20];

#line 467 "make.c"
static const MR_ConstString make__make__field_names_make_info_0_0[20];

#line 470 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0;

#line 473 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1];

#line 476 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1];

#line 479 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1];

#line 482 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1];

#line 485 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_0;

#line 488 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_1;

#line 491 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1];

#line 494 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_2;

#line 497 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_3;

#line 500 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_4;

#line 503 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_5;

#line 506 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_6;

#line 509 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6];

#line 512 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1];

#line 515 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_misc_target_type_0[2];

#line 518 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7];

#line 521 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7];

#line 524 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0;

#line 527 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1;

#line 530 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2;

#line 533 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3;

#line 536 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4;

#line 539 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5;

#line 542 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6;

#line 545 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7;

#line 548 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_module_compilation_task_type_0[8];

#line 551 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_module_compilation_task_type_0[8];

#line 554 "make.c"
static const MR_Integer make__make__functor_number_map_module_compilation_task_type_0[8];

#line 557 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0;

#line 560 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 563 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3];

#line 566 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3];

#line 569 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_index_map_0_0;

#line 572 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1];

#line 575 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1];

#line 578 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1];

#line 581 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1];

#line 584 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_0;

#line 587 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_1;

#line 590 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_2;

#line 593 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_3;

#line 596 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_4;

#line 599 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_5;

#line 602 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_6;

#line 605 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_7;

#line 608 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_8;

#line 611 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1];

#line 614 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9;

#line 617 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10;

#line 620 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11;

#line 623 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12;

#line 626 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13;

#line 629 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14;

#line 632 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15;

#line 635 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16;

#line 638 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17;

#line 641 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18;

#line 644 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[1];

#line 647 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19;

#line 650 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_20[1];

#line 653 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20;

#line 656 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_21[2];

#line 659 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_21;

#line 662 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_22[2];

#line 665 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_22;

#line 668 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_23;

#line 671 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_0[19];

#line 674 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1];

#line 677 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1];

#line 680 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[3];

#line 683 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_target_type_0[4];

#line 686 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_target_type_0[24];

#line 689 "make.c"
static const MR_Integer make__make__functor_number_map_module_target_type_0[24];

#line 692 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0;

#line 695 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1;

#line 698 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2];

#line 701 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2];

#line 704 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2];

#line 707 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2];

#line 710 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2];

#line 713 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_file_0_0;

#line 716 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1];

#line 719 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1];

#line 722 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1];

#line 725 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1];

#line 728 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1];

#line 731 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_0;

#line 734 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1];

#line 737 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_1;

#line 740 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1];

#line 743 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_2;

#line 746 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1];

#line 749 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1];

#line 752 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1];

#line 755 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_type_0[3];

#line 758 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3];

#line 761 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3];

#line 764 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 767 "make.c"
  MR_Box make__wrapper_arg_1,
#line 769 "make.c"
  MR_Box make__wrapper_arg_2);

#line 772 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 775 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 777 "make.c"
  MR_Box make__wrapper_arg_2,
#line 779 "make.c"
  MR_Box make__wrapper_arg_3);

#line 782 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 785 "make.c"
  MR_Box make__wrapper_arg_1,
#line 787 "make.c"
  MR_Box make__wrapper_arg_2);

#line 790 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 793 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 795 "make.c"
  MR_Box make__wrapper_arg_2,
#line 797 "make.c"
  MR_Box make__wrapper_arg_3);

#line 800 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 803 "make.c"
  MR_Box make__wrapper_arg_1,
#line 805 "make.c"
  MR_Box make__wrapper_arg_2);

#line 808 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 811 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 813 "make.c"
  MR_Box make__wrapper_arg_2,
#line 815 "make.c"
  MR_Box make__wrapper_arg_3);

#line 818 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 821 "make.c"
  MR_Box make__wrapper_arg_1,
#line 823 "make.c"
  MR_Box make__wrapper_arg_2);

#line 826 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 829 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 831 "make.c"
  MR_Box make__wrapper_arg_2,
#line 833 "make.c"
  MR_Box make__wrapper_arg_3);

#line 836 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 839 "make.c"
  MR_Box make__wrapper_arg_1,
#line 841 "make.c"
  MR_Box make__wrapper_arg_2);

#line 844 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 847 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 849 "make.c"
  MR_Box make__wrapper_arg_2,
#line 851 "make.c"
  MR_Box make__wrapper_arg_3);

#line 854 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 857 "make.c"
  MR_Box make__wrapper_arg_1,
#line 859 "make.c"
  MR_Box make__wrapper_arg_2);

#line 862 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 865 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 867 "make.c"
  MR_Box make__wrapper_arg_2,
#line 869 "make.c"
  MR_Box make__wrapper_arg_3);

#line 872 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 875 "make.c"
  MR_Box make__wrapper_arg_1,
#line 877 "make.c"
  MR_Box make__wrapper_arg_2);

#line 880 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 883 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 885 "make.c"
  MR_Box make__wrapper_arg_2,
#line 887 "make.c"
  MR_Box make__wrapper_arg_3);

#line 890 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 893 "make.c"
  MR_Box make__wrapper_arg_1,
#line 895 "make.c"
  MR_Box make__wrapper_arg_2);

#line 898 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 901 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 903 "make.c"
  MR_Box make__wrapper_arg_2,
#line 905 "make.c"
  MR_Box make__wrapper_arg_3);

#line 908 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 911 "make.c"
  MR_Box make__wrapper_arg_1,
#line 913 "make.c"
  MR_Box make__wrapper_arg_2);

#line 916 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 919 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 921 "make.c"
  MR_Box make__wrapper_arg_2,
#line 923 "make.c"
  MR_Box make__wrapper_arg_3);

#line 926 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 929 "make.c"
  MR_Box make__wrapper_arg_1,
#line 931 "make.c"
  MR_Box make__wrapper_arg_2);

#line 934 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 937 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 939 "make.c"
  MR_Box make__wrapper_arg_2,
#line 941 "make.c"
  MR_Box make__wrapper_arg_3);

#line 944 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 947 "make.c"
  MR_Box make__wrapper_arg_1,
#line 949 "make.c"
  MR_Box make__wrapper_arg_2);

#line 952 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 955 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 957 "make.c"
  MR_Box make__wrapper_arg_2,
#line 959 "make.c"
  MR_Box make__wrapper_arg_3);

#line 962 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 965 "make.c"
  MR_Box make__wrapper_arg_1,
#line 967 "make.c"
  MR_Box make__wrapper_arg_2);

#line 970 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 973 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 975 "make.c"
  MR_Box make__wrapper_arg_2,
#line 977 "make.c"
  MR_Box make__wrapper_arg_3);

#line 980 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 983 "make.c"
  MR_Box make__wrapper_arg_1,
#line 985 "make.c"
  MR_Box make__wrapper_arg_2);

#line 988 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 991 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 993 "make.c"
  MR_Box make__wrapper_arg_2,
#line 995 "make.c"
  MR_Box make__wrapper_arg_3);

#line 998 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 1001 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1003 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1006 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 1009 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1011 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1013 "make.c"
  MR_Box make__wrapper_arg_3);

#line 1016 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 1019 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1021 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1024 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 1027 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1029 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1031 "make.c"
  MR_Box make__wrapper_arg_3);

#line 1034 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 1037 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1039 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1042 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 1045 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1047 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1049 "make.c"
  MR_Box make__wrapper_arg_3);

#line 351 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__351__1_1_p_0(
#line 351 "make.m"
  MR_String make__HeadVar__1_68);

#line 325 "make.m"
static void MR_CALL 
make__IntroducedFrom__pred__make_process_args__325__1_3_p_0(
#line 325 "make.m"
  MR_String make__HeadVar__1_52);

#line 315 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__315__1_1_p_0(
#line 315 "make.m"
  MR_String make__HeadVar__1_46);

#line 690 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 690 "make.m"
  MR_Box make__closure_arg,
#line 690 "make.m"
  MR_Box make__wrapper_arg_1);

#line 619 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 619 "make.m"
  MR_Box make__closure_arg,
#line 619 "make.m"
  MR_Box make__wrapper_arg_1,
#line 619 "make.m"
  MR_Box make__wrapper_arg_2,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 619 "make.m"
  MR_Box make__wrapper_arg_4,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 619 "make.m"
  MR_Box make__wrapper_arg_6,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 619 "make.m"
  MR_Box make__wrapper_arg_8,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_9);

#line 470 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 470 "make.m"
  void * make__env_ptr_arg);

#line 476 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 476 "make.m"
  void * make__env_ptr_arg);

#line 468 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 468 "make.m"
  void * make__env_ptr_arg);

#line 519 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 519 "make.m"
  void * make__env_ptr_arg);

#line 517 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 517 "make.m"
  void * make__env_ptr_arg);

#line 527 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 527 "make.m"
  void * make__env_ptr_arg);

#line 511 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 511 "make.m"
  void * make__env_ptr_arg);

#line 516 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 516 "make.m"
  void * make__env_ptr_arg);

#line 449 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 449 "make.m"
  void * make__env_ptr_arg);

#line 449 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 449 "make.m"
  MR_Box make__closure_arg,
#line 449 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 449 "make.m"
  MR_Cont make__cont,
#line 449 "make.m"
  void * make__cont_env_ptr);

#line 325 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_8(
#line 325 "make.m"
  MR_Box make__closure_arg,
#line 325 "make.m"
  MR_Box make__wrapper_arg_1,
#line 325 "make.m"
  MR_Box make__wrapper_arg_2,
#line 325 "make.m"
  MR_Box * make__wrapper_arg_3);

#line 387 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_7(
#line 387 "make.m"
  MR_Box make__closure_arg,
#line 387 "make.m"
  MR_Box make__wrapper_arg_1,
#line 387 "make.m"
  MR_Box make__wrapper_arg_2,
#line 387 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 387 "make.m"
  MR_Box make__wrapper_arg_4,
#line 387 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 387 "make.m"
  MR_Box make__wrapper_arg_6,
#line 387 "make.m"
  MR_Box * make__wrapper_arg_7);

#line 355 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_6(
#line 355 "make.m"
  MR_Box make__closure_arg,
#line 355 "make.m"
  MR_Box make__wrapper_arg_1,
#line 355 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 349 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_5(
#line 349 "make.m"
  MR_Box make__closure_arg,
#line 349 "make.m"
  MR_Box make__wrapper_arg_1);

#line 344 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_4(
#line 344 "make.m"
  MR_Box make__closure_arg,
#line 344 "make.m"
  MR_Box make__wrapper_arg_1,
#line 344 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 342 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_3(
#line 342 "make.m"
  MR_Box make__closure_arg,
#line 342 "make.m"
  MR_Box make__wrapper_arg_1,
#line 342 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 339 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_2(
#line 339 "make.m"
  MR_Box make__closure_arg,
#line 339 "make.m"
  MR_Box make__wrapper_arg_1,
#line 339 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 315 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_1(
#line 315 "make.m"
  MR_Box make__closure_arg,
#line 315 "make.m"
  MR_Box make__wrapper_arg_1);


static /* final */ const MR_Box make_scalar_common_1[18][3];

static /* final */ const MR_Box make_scalar_common_2[10][2];

static /* final */ const MR_Box make_scalar_common_3[1][4];

static /* final */ const MR_Box make_scalar_common_4[3][5];

static /* final */ const MR_Box make_scalar_common_5[2][6];

static /* final */ const MR_Box make_scalar_common_6[1][10];

static /* final */ const MR_Box make_scalar_common_7[1][7];

static /* final */ const MR_Box make_scalar_common_8[11][1];

static /* final */ const MR_Box make_scalar_common_10[1][12];


#line 584 "make.m"
/* sealed */ struct make__vector_common_type_9_0_s {
#line 584 "make.m"
  const MR_Word make__vector_common_type_9_0__vct_9_f_0;
#line 584 "make.m"
};

static /* final */ const struct make__vector_common_type_9_0_s make_vector_common_9[15];



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
    ((MR_Box) (make__make_process_args_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make_scalar_common_4[0])),
    ((MR_Box) (make__make_process_args_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_args_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_args_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_args_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make_scalar_common_6[0])),
    ((MR_Box) (make__make_process_args_7_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make_scalar_common_5[1])),
    ((MR_Box) (make__make_process_args_7_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make_scalar_common_10[0])),
    ((MR_Box) (make__make_track_flags_files_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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


static /* final */ const struct make__vector_common_type_9_0_s make_vector_common_9[15] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 5 },
  /* row 4 */   {     (MR_Integer) 7 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 3 },
  /* row 8 */   {     (MR_Integer) 5 },
  /* row 9 */   {     (MR_Integer) 7 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) 3 },
  /* row 13 */   {     (MR_Integer) 5 },
  /* row 14 */   {     (MR_Integer) 7 },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1638 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 1647 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 1655 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1664 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  (MR_Integer) 0
};

#line 1670 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  (MR_Integer) 1
};

#line 1676 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1682 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1688 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1694 "make.c"
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

#line 1711 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_compilation_task_type_0
};

#line 1716 "make.c"
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

#line 1731 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 1736 "make.c"
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

#line 1751 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 1757 "make.c"
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

#line 1772 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1778 "make.c"
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

#line 1793 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_0
};

#line 1798 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1803 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_2
};

#line 1808 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_3
};

#line 1813 "make.c"
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

#line 1837 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4] = {
  &make__make__du_functor_desc_compilation_task_type_0_3,
  &make__make__du_functor_desc_compilation_task_type_0_2,
  &make__make__du_functor_desc_compilation_task_type_0_0,
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1845 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1853 "make.c"
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

#line 1870 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 1879 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

#line 1887 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1894 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

#line 1901 "make.c"
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

#line 1916 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1921 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_dependency_file_index_map_0_0
  }
};

#line 1930 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1935 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1] = {
  (MR_Integer) 0
};

#line 1940 "make.c"
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

#line 1957 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  (MR_Integer) 0
};

#line 1963 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  (MR_Integer) 1
};

#line 1969 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  (MR_Integer) 2
};

#line 1975 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  (MR_Integer) 3
};

#line 1981 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_2,
  &make__make__enum_functor_desc_dependency_status_0_3
};

#line 1989 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_3,
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_2
};

#line 1997 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2005 "make.c"
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

#line 2022 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2031 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

#line 2040 "make.c"
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

#line 2057 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2065 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2071 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

#line 2077 "make.c"
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

#line 2092 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2097 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_last_hash_0_0
  }
};

#line 2106 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2111 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1] = {
  (MR_Integer) 0
};

#line 2116 "make.c"
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

#line 2133 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 2139 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2] = {
  (MR_String) "linked_tf_name",
  (MR_String) "linked_tf_type"
};

#line 2145 "make.c"
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

#line 2160 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2165 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_linked_target_file_0_0
  }
};

#line 2174 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2179 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1] = {
  (MR_Integer) 0
};

#line 2184 "make.c"
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

#line 2201 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
};

#line 2206 "make.c"
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

#line 2221 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2226 "make.c"
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

#line 2241 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2246 "make.c"
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

#line 2261 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1] = {
  &make__make__du_functor_desc_make_error_0_0
};

#line 2266 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1] = {
  &make__make__du_functor_desc_make_error_0_1
};

#line 2271 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1] = {
  &make__make__du_functor_desc_make_error_0_2
};

#line 2276 "make.c"
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

#line 2295 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3] = {
  &make__make__du_functor_desc_make_error_0_1,
  &make__make__du_functor_desc_make_error_0_2,
  &make__make__du_functor_desc_make_error_0_0
};

#line 2302 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2309 "make.c"
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

#line 2326 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2334 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2343 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2352 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2361 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

#line 2370 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

#line 2379 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2387 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2396 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2405 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2413 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2421 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 2430 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0
  }
};

#line 2438 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__util__make__util__type_ctor_info_job_ctl_0
  }
};

#line 2446 "make.c"
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

#line 2470 "make.c"
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

#line 2494 "make.c"
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

#line 2509 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2514 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_info_0_0
  }
};

#line 2523 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2528 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1] = {
  (MR_Integer) 0
};

#line 2533 "make.c"
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

#line 2550 "make.c"
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

#line 2565 "make.c"
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

#line 2580 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 2585 "make.c"
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

#line 2600 "make.c"
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

#line 2615 "make.c"
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

#line 2630 "make.c"
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

#line 2645 "make.c"
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

#line 2660 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6] = {
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_1,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_6
};

#line 2670 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1] = {
  &make__make__du_functor_desc_misc_target_type_0_2
};

#line 2675 "make.c"
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

#line 2689 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7] = {
  &make__make__du_functor_desc_misc_target_type_0_2,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_6,
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_1
};

#line 2700 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 2711 "make.c"
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

#line 2728 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  (MR_Integer) 0
};

#line 2734 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_short_interface",
  (MR_Integer) 1
};

#line 2740 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_interface",
  (MR_Integer) 2
};

#line 2746 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_private_interface",
  (MR_Integer) 3
};

#line 2752 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_optimization_interface",
  (MR_Integer) 4
};

#line 2758 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  (MR_Integer) 5
};

#line 2764 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  (MR_Integer) 6
};

#line 2770 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  (MR_Integer) 7
};

#line 2776 "make.c"
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

#line 2788 "make.c"
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

#line 2800 "make.c"
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

#line 2812 "make.c"
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

#line 2829 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2838 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2846 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2mdbcomp__sym_name__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2853 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

#line 2860 "make.c"
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

#line 2875 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2880 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_index_map_0_0
  }
};

#line 2889 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2894 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1] = {
  (MR_Integer) 0
};

#line 2899 "make.c"
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

#line 2916 "make.c"
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

#line 2931 "make.c"
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

#line 2946 "make.c"
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

#line 2961 "make.c"
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

#line 2976 "make.c"
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

#line 2991 "make.c"
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

#line 3006 "make.c"
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

#line 3021 "make.c"
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

#line 3036 "make.c"
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

#line 3051 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_c_header_type_0
};

#line 3056 "make.c"
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

#line 3071 "make.c"
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

#line 3086 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11 = {
  (MR_String) "module_target_il_code",
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

#line 3101 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12 = {
  (MR_String) "module_target_il_asm",
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

#line 3116 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13 = {
  (MR_String) "module_target_csharp_code",
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

#line 3131 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14 = {
  (MR_String) "module_target_java_code",
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

#line 3146 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15 = {
  (MR_String) "module_target_java_class_code",
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

#line 3161 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16 = {
  (MR_String) "module_target_erlang_header",
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

#line 3176 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17 = {
  (MR_String) "module_target_erlang_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3191 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18 = {
  (MR_String) "module_target_erlang_beam_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3206 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 3211 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19 = {
  (MR_String) "module_target_object_code",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 19,
  make__make__field_types_module_target_type_0_19,
  NULL,
  NULL,
  NULL
};

#line 3226 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_20[1] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3231 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20 = {
  (MR_String) "module_target_foreign_il_asm",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 20,
  make__make__field_types_module_target_type_0_20,
  NULL,
  NULL,
  NULL
};

#line 3246 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_21[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3252 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_21 = {
  (MR_String) "module_target_foreign_object",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 21,
  make__make__field_types_module_target_type_0_21,
  NULL,
  NULL,
  NULL
};

#line 3267 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_22[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3273 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_22 = {
  (MR_String) "module_target_fact_table_object",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 22,
  make__make__field_types_module_target_type_0_22,
  NULL,
  NULL,
  NULL
};

#line 3288 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_23 = {
  (MR_String) "module_target_xml_doc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 18,
  (MR_Integer) 23,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3303 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_0[19] = {
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
  &make__make__du_functor_desc_module_target_type_0_17,
  &make__make__du_functor_desc_module_target_type_0_18,
  &make__make__du_functor_desc_module_target_type_0_23
};

#line 3326 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1] = {
  &make__make__du_functor_desc_module_target_type_0_9
};

#line 3331 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1] = {
  &make__make__du_functor_desc_module_target_type_0_19
};

#line 3336 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[3] = {
  &make__make__du_functor_desc_module_target_type_0_20,
  &make__make__du_functor_desc_module_target_type_0_21,
  &make__make__du_functor_desc_module_target_type_0_22
};

#line 3343 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_target_type_0[4] = {
  {
    (MR_Integer) 19,
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
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    make__make__du_stag_ordered_module_target_type_0_3
  }
};

#line 3367 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_target_type_0[24] = {
  &make__make__du_functor_desc_module_target_type_0_7,
  &make__make__du_functor_desc_module_target_type_0_10,
  &make__make__du_functor_desc_module_target_type_0_9,
  &make__make__du_functor_desc_module_target_type_0_13,
  &make__make__du_functor_desc_module_target_type_0_18,
  &make__make__du_functor_desc_module_target_type_0_17,
  &make__make__du_functor_desc_module_target_type_0_16,
  &make__make__du_functor_desc_module_target_type_0_1,
  &make__make__du_functor_desc_module_target_type_0_22,
  &make__make__du_functor_desc_module_target_type_0_20,
  &make__make__du_functor_desc_module_target_type_0_21,
  &make__make__du_functor_desc_module_target_type_0_12,
  &make__make__du_functor_desc_module_target_type_0_11,
  &make__make__du_functor_desc_module_target_type_0_6,
  &make__make__du_functor_desc_module_target_type_0_15,
  &make__make__du_functor_desc_module_target_type_0_14,
  &make__make__du_functor_desc_module_target_type_0_3,
  &make__make__du_functor_desc_module_target_type_0_19,
  &make__make__du_functor_desc_module_target_type_0_2,
  &make__make__du_functor_desc_module_target_type_0_4,
  &make__make__du_functor_desc_module_target_type_0_0,
  &make__make__du_functor_desc_module_target_type_0_8,
  &make__make__du_functor_desc_module_target_type_0_5,
  &make__make__du_functor_desc_module_target_type_0_23
};

#line 3395 "make.c"
static const MR_Integer make__make__functor_number_map_module_target_type_0[24] = {
  (MR_Integer) 20,
  (MR_Integer) 7,
  (MR_Integer) 18,
  (MR_Integer) 16,
  (MR_Integer) 19,
  (MR_Integer) 22,
  (MR_Integer) 13,
  (MR_Integer) 0,
  (MR_Integer) 21,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 17,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 23
};

#line 3423 "make.c"
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
  (MR_Integer) 24,
  (MR_Integer) 4,
  make__make__functor_number_map_module_target_type_0
};

#line 3440 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  (MR_Integer) 0
};

#line 3446 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  (MR_Integer) 1
};

#line 3452 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_0,
  &make__make__enum_functor_desc_rebuild_module_deps_0_1
};

#line 3458 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_1,
  &make__make__enum_functor_desc_rebuild_module_deps_0_0
};

#line 3464 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3470 "make.c"
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

#line 3487 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3493 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

#line 3499 "make.c"
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

#line 3514 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3519 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_file_0_0
  }
};

#line 3528 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3533 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1] = {
  (MR_Integer) 0
};

#line 3538 "make.c"
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

#line 3555 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3560 "make.c"
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

#line 3575 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 3580 "make.c"
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

#line 3595 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_misc_target_type_0
};

#line 3600 "make.c"
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

#line 3615 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1] = {
  &make__make__du_functor_desc_target_type_0_0
};

#line 3620 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1] = {
  &make__make__du_functor_desc_target_type_0_1
};

#line 3625 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1] = {
  &make__make__du_functor_desc_target_type_0_2
};

#line 3630 "make.c"
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

#line 3649 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3] = {
  &make__make__du_functor_desc_target_type_0_1,
  &make__make__du_functor_desc_target_type_0_2,
  &make__make__du_functor_desc_target_type_0_0
};

#line 3656 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3663 "make.c"
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

#line 3680 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 3683 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3685 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3687 "make.c"
{
#line 3689 "make.c"
  {
#line 3691 "make.c"
    MR_bool make__succeeded;

#line 3694 "make.c"
    {
#line 3696 "make.c"
      make__succeeded = make____Unify____c_header_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3699 "make.c"
    return make__succeeded;
#line 3701 "make.c"
  }
#line 3703 "make.c"
}

#line 3706 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 3709 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3711 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3713 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3715 "make.c"
{
#line 3717 "make.c"
  {
#line 3719 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3722 "make.c"
    {
#line 3724 "make.c"
      make____Compare____c_header_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3727 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3729 "make.c"
  }
#line 3731 "make.c"
}

#line 3734 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 3737 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3739 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3741 "make.c"
{
#line 3743 "make.c"
  {
#line 3745 "make.c"
    MR_bool make__succeeded;

#line 3748 "make.c"
    {
#line 3750 "make.c"
      make__succeeded = make____Unify____compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3753 "make.c"
    return make__succeeded;
#line 3755 "make.c"
  }
#line 3757 "make.c"
}

#line 3760 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 3763 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3765 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3767 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3769 "make.c"
{
#line 3771 "make.c"
  {
#line 3773 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3776 "make.c"
    {
#line 3778 "make.c"
      make____Compare____compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3781 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3783 "make.c"
  }
#line 3785 "make.c"
}

#line 3788 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 3791 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3793 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3795 "make.c"
{
#line 3797 "make.c"
  {
#line 3799 "make.c"
    MR_bool make__succeeded;

#line 3802 "make.c"
    {
#line 3804 "make.c"
      make__succeeded = make____Unify____dependency_file_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3807 "make.c"
    return make__succeeded;
#line 3809 "make.c"
  }
#line 3811 "make.c"
}

#line 3814 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 3817 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3819 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3821 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3823 "make.c"
{
#line 3825 "make.c"
  {
#line 3827 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3830 "make.c"
    {
#line 3832 "make.c"
      make____Compare____dependency_file_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3835 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3837 "make.c"
  }
#line 3839 "make.c"
}

#line 3842 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 3845 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3847 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3849 "make.c"
{
#line 3851 "make.c"
  {
#line 3853 "make.c"
    MR_bool make__succeeded;

#line 3856 "make.c"
    {
#line 3858 "make.c"
      make__succeeded = make____Unify____dependency_status_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3861 "make.c"
    return make__succeeded;
#line 3863 "make.c"
  }
#line 3865 "make.c"
}

#line 3868 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 3871 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3873 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3875 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3877 "make.c"
{
#line 3879 "make.c"
  {
#line 3881 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3884 "make.c"
    {
#line 3886 "make.c"
      make____Compare____dependency_status_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3889 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3891 "make.c"
  }
#line 3893 "make.c"
}

#line 3896 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 3899 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3901 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3903 "make.c"
{
#line 3905 "make.c"
  {
#line 3907 "make.c"
    MR_bool make__succeeded;

#line 3910 "make.c"
    {
#line 3912 "make.c"
      make__succeeded = make____Unify____file_timestamps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3915 "make.c"
    return make__succeeded;
#line 3917 "make.c"
  }
#line 3919 "make.c"
}

#line 3922 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 3925 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3927 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3929 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3931 "make.c"
{
#line 3933 "make.c"
  {
#line 3935 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3938 "make.c"
    {
#line 3940 "make.c"
      make____Compare____file_timestamps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3943 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3945 "make.c"
  }
#line 3947 "make.c"
}

#line 3950 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 3953 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3955 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3957 "make.c"
{
#line 3959 "make.c"
  {
#line 3961 "make.c"
    MR_bool make__succeeded;

#line 3964 "make.c"
    {
#line 3966 "make.c"
      make__succeeded = make____Unify____last_hash_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3969 "make.c"
    return make__succeeded;
#line 3971 "make.c"
  }
#line 3973 "make.c"
}

#line 3976 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 3979 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3981 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3983 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3985 "make.c"
{
#line 3987 "make.c"
  {
#line 3989 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3992 "make.c"
    {
#line 3994 "make.c"
      make____Compare____last_hash_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3997 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3999 "make.c"
  }
#line 4001 "make.c"
}

#line 4004 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 4007 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4009 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4011 "make.c"
{
#line 4013 "make.c"
  {
#line 4015 "make.c"
    MR_bool make__succeeded;

#line 4018 "make.c"
    {
#line 4020 "make.c"
      make__succeeded = make____Unify____linked_target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4023 "make.c"
    return make__succeeded;
#line 4025 "make.c"
  }
#line 4027 "make.c"
}

#line 4030 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 4033 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4035 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4037 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4039 "make.c"
{
#line 4041 "make.c"
  {
#line 4043 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4046 "make.c"
    {
#line 4048 "make.c"
      make____Compare____linked_target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4051 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4053 "make.c"
  }
#line 4055 "make.c"
}

#line 4058 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 4061 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4063 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4065 "make.c"
{
#line 4067 "make.c"
  {
#line 4069 "make.c"
    MR_bool make__succeeded;

#line 4072 "make.c"
    {
#line 4074 "make.c"
      make__succeeded = make____Unify____make_error_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4077 "make.c"
    return make__succeeded;
#line 4079 "make.c"
  }
#line 4081 "make.c"
}

#line 4084 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 4087 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4089 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4091 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4093 "make.c"
{
#line 4095 "make.c"
  {
#line 4097 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4100 "make.c"
    {
#line 4102 "make.c"
      make____Compare____make_error_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4105 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4107 "make.c"
  }
#line 4109 "make.c"
}

#line 4112 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 4115 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4117 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4119 "make.c"
{
#line 4121 "make.c"
  {
#line 4123 "make.c"
    MR_bool make__succeeded;

#line 4126 "make.c"
    {
#line 4128 "make.c"
      make__succeeded = make____Unify____make_info_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4131 "make.c"
    return make__succeeded;
#line 4133 "make.c"
  }
#line 4135 "make.c"
}

#line 4138 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 4141 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4143 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4145 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4147 "make.c"
{
#line 4149 "make.c"
  {
#line 4151 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4154 "make.c"
    {
#line 4156 "make.c"
      make____Compare____make_info_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4159 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4161 "make.c"
  }
#line 4163 "make.c"
}

#line 4166 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 4169 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4171 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4173 "make.c"
{
#line 4175 "make.c"
  {
#line 4177 "make.c"
    MR_bool make__succeeded;

#line 4180 "make.c"
    {
#line 4182 "make.c"
      make__succeeded = make____Unify____misc_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4185 "make.c"
    return make__succeeded;
#line 4187 "make.c"
  }
#line 4189 "make.c"
}

#line 4192 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 4195 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4197 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4199 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4201 "make.c"
{
#line 4203 "make.c"
  {
#line 4205 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4208 "make.c"
    {
#line 4210 "make.c"
      make____Compare____misc_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4213 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4215 "make.c"
  }
#line 4217 "make.c"
}

#line 4220 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 4223 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4225 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4227 "make.c"
{
#line 4229 "make.c"
  {
#line 4231 "make.c"
    MR_bool make__succeeded;

#line 4234 "make.c"
    {
#line 4236 "make.c"
      make__succeeded = make____Unify____module_compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4239 "make.c"
    return make__succeeded;
#line 4241 "make.c"
  }
#line 4243 "make.c"
}

#line 4246 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 4249 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4251 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4253 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4255 "make.c"
{
#line 4257 "make.c"
  {
#line 4259 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4262 "make.c"
    {
#line 4264 "make.c"
      make____Compare____module_compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4267 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4269 "make.c"
  }
#line 4271 "make.c"
}

#line 4274 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 4277 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4279 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4281 "make.c"
{
#line 4283 "make.c"
  {
#line 4285 "make.c"
    MR_bool make__succeeded;

#line 4288 "make.c"
    {
#line 4290 "make.c"
      make__succeeded = make____Unify____module_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4293 "make.c"
    return make__succeeded;
#line 4295 "make.c"
  }
#line 4297 "make.c"
}

#line 4300 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 4303 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4305 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4307 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4309 "make.c"
{
#line 4311 "make.c"
  {
#line 4313 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4316 "make.c"
    {
#line 4318 "make.c"
      make____Compare____module_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4321 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4323 "make.c"
  }
#line 4325 "make.c"
}

#line 4328 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 4331 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4333 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4335 "make.c"
{
#line 4337 "make.c"
  {
#line 4339 "make.c"
    MR_bool make__succeeded;

#line 4342 "make.c"
    {
#line 4344 "make.c"
      make__succeeded = make____Unify____module_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4347 "make.c"
    return make__succeeded;
#line 4349 "make.c"
  }
#line 4351 "make.c"
}

#line 4354 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 4357 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4359 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4361 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4363 "make.c"
{
#line 4365 "make.c"
  {
#line 4367 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4370 "make.c"
    {
#line 4372 "make.c"
      make____Compare____module_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4375 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4377 "make.c"
  }
#line 4379 "make.c"
}

#line 4382 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 4385 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4387 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4389 "make.c"
{
#line 4391 "make.c"
  {
#line 4393 "make.c"
    MR_bool make__succeeded;

#line 4396 "make.c"
    {
#line 4398 "make.c"
      make__succeeded = make____Unify____rebuild_module_deps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4401 "make.c"
    return make__succeeded;
#line 4403 "make.c"
  }
#line 4405 "make.c"
}

#line 4408 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 4411 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4413 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4415 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4417 "make.c"
{
#line 4419 "make.c"
  {
#line 4421 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4424 "make.c"
    {
#line 4426 "make.c"
      make____Compare____rebuild_module_deps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4429 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4431 "make.c"
  }
#line 4433 "make.c"
}

#line 4436 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 4439 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4441 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4443 "make.c"
{
#line 4445 "make.c"
  {
#line 4447 "make.c"
    MR_bool make__succeeded;

#line 4450 "make.c"
    {
#line 4452 "make.c"
      make__succeeded = make____Unify____target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4455 "make.c"
    return make__succeeded;
#line 4457 "make.c"
  }
#line 4459 "make.c"
}

#line 4462 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 4465 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4467 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4469 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4471 "make.c"
{
#line 4473 "make.c"
  {
#line 4475 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4478 "make.c"
    {
#line 4480 "make.c"
      make____Compare____target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4483 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4485 "make.c"
  }
#line 4487 "make.c"
}

#line 4490 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 4493 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4495 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4497 "make.c"
{
#line 4499 "make.c"
  {
#line 4501 "make.c"
    MR_bool make__succeeded;

#line 4504 "make.c"
    {
#line 4506 "make.c"
      make__succeeded = make____Unify____target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4509 "make.c"
    return make__succeeded;
#line 4511 "make.c"
  }
#line 4513 "make.c"
}

#line 4516 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 4519 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4521 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4523 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4525 "make.c"
{
#line 4527 "make.c"
  {
#line 4529 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4532 "make.c"
    {
#line 4534 "make.c"
      make____Compare____target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4537 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4539 "make.c"
  }
#line 4541 "make.c"
}

#line 351 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__351__1_1_p_0(
#line 351 "make.m"
  MR_String make__HeadVar__1_68)
#line 351 "make.m"
{
#line 351 "make.m"
  {
#line 351 "make.m"
    MR_bool make__succeeded;

#line 351 "make.m"
    {
#line 351 "make.m"
      make__succeeded = mercury__string__suffix_2_p_0(make__HeadVar__1_68, (MR_String) ".depend");
    }
#line 351 "make.m"
    make__succeeded = !(make__succeeded);
#line 351 "make.m"
    return make__succeeded;
#line 351 "make.m"
  }
#line 351 "make.m"
}

#line 325 "make.m"
static void MR_CALL 
make__IntroducedFrom__pred__make_process_args__325__1_3_p_0(
#line 325 "make.m"
  MR_String make__HeadVar__1_52)
#line 325 "make.m"
{
#line 325 "make.m"
  {
#line 325 "make.m"
    MR_bool make__succeeded;

#line 327 "make.m"
    {
#line 327 "make.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(make__HeadVar__1_52, (MR_String) "Make target must not contain any directory component.");
#line 327 "make.m"
      return;
    }
#line 325 "make.m"
  }
#line 325 "make.m"
}

#line 315 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__315__1_1_p_0(
#line 315 "make.m"
  MR_String make__HeadVar__1_46)
#line 315 "make.m"
{
#line 315 "make.m"
  {
#line 315 "make.m"
    MR_bool make__succeeded;
#line 315 "make.m"
    MR_Char make__V_47_47;

#line 317 "make.m"
    {
#line 317 "make.m"
      make__V_47_47 = mercury__dir__directory_separator_0_f_0();
    }
#line 317 "make.m"
    {
#line 317 "make.m"
      return make__succeeded = mercury__string__contains_char_2_p_0(make__HeadVar__1_46, make__V_47_47);
    }
#line 315 "make.m"
    return make__succeeded;
#line 315 "make.m"
  }
#line 315 "make.m"
}

#line 436 "make.m"
void MR_CALL 
make____Compare____target_type_0_0(
#line 436 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 436 "make.m"
  MR_Word make__HeadVar__2_2,
#line 436 "make.m"
  MR_Word make__HeadVar__3_3)
#line 436 "make.m"
{
#line 436 "make.m"
  {
#line 436 "make.m"
    MR_bool make__succeeded;
#line 436 "make.m"
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
#line 436 "make.m"
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

#line 436 "make.m"
    make__succeeded = (make__CastX_22 == make__CastY_23);
#line 436 "make.m"
    if (make__succeeded)
#line 4649 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 436 "make.m"
    else
#line 436 "make.m"
#line 436 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
#line 436 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 436 "make.m"
        case (MR_Integer) 0:
#line 436 "make.m"
          {
#line 436 "make.m"
            MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

#line 436 "make.m"
#line 436 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 436 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 436 "make.m"
              case (MR_Integer) 0:
#line 436 "make.m"
                {
#line 436 "make.m"
                  MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));

#line 436 "make.m"
                  {
#line 436 "make.m"
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
#line 436 "make.m"
                    return;
                  }
#line 436 "make.m"
                }
#line 436 "make.m"
                break;
#line 436 "make.m"
              case (MR_Integer) 1:
#line 4690 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "make.m"
                break;
#line 436 "make.m"
              case (MR_Integer) 2:
#line 4696 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "make.m"
                break;
#line 436 "make.m"
            }
#line 436 "make.m"
          }
#line 436 "make.m"
          break;
#line 436 "make.m"
        case (MR_Integer) 1:
#line 436 "make.m"
          {
#line 436 "make.m"
            MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 436 "make.m"
#line 436 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 436 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 436 "make.m"
              case (MR_Integer) 0:
#line 4720 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "make.m"
                break;
#line 436 "make.m"
              case (MR_Integer) 1:
#line 436 "make.m"
                {
#line 436 "make.m"
                  MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 436 "make.m"
                  MR_Integer make__V_30_30 = (MR_Integer) make__V_27_27;
#line 436 "make.m"
                  MR_Integer make__V_31_31 = (MR_Integer) make__V_13_13;

#line 436 "make.m"
                  {
#line 436 "make.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_30_30, make__V_31_31);
#line 436 "make.m"
                    return;
                  }
#line 436 "make.m"
                }
#line 436 "make.m"
                break;
#line 436 "make.m"
              case (MR_Integer) 2:
#line 4748 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "make.m"
                break;
#line 436 "make.m"
            }
#line 436 "make.m"
          }
#line 436 "make.m"
          break;
#line 436 "make.m"
        case (MR_Integer) 2:
#line 436 "make.m"
          {
#line 436 "make.m"
            MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 436 "make.m"
#line 436 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 436 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 436 "make.m"
              case (MR_Integer) 0:
#line 4772 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "make.m"
                break;
#line 436 "make.m"
              case (MR_Integer) 1:
#line 4778 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "make.m"
                break;
#line 436 "make.m"
              case (MR_Integer) 2:
#line 436 "make.m"
                {
#line 436 "make.m"
                  MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

#line 436 "make.m"
                  {
#line 436 "make.m"
                    make____Compare____misc_target_type_0_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
#line 436 "make.m"
                    return;
                  }
#line 436 "make.m"
                }
#line 436 "make.m"
                break;
#line 436 "make.m"
            }
#line 436 "make.m"
          }
#line 436 "make.m"
          break;
#line 436 "make.m"
      }
#line 436 "make.m"
  }
#line 436 "make.m"
}

#line 436 "make.m"
MR_bool MR_CALL 
make____Unify____target_type_0_0(
#line 436 "make.m"
  MR_Word make__HeadVar__1_1,
#line 436 "make.m"
  MR_Word make__HeadVar__2_2)
#line 436 "make.m"
{
#line 436 "make.m"
  {
#line 436 "make.m"
    MR_bool make__succeeded;
#line 436 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 436 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 436 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 436 "make.m"
    if (make__succeeded)
#line 436 "make.m"
      make__succeeded = MR_TRUE;
#line 436 "make.m"
    else
#line 436 "make.m"
#line 436 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 436 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 436 "make.m"
        case (MR_Integer) 0:
#line 436 "make.m"
          {
#line 436 "make.m"
            MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "make.m"
            MR_Word make__V_4_4;

#line 436 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 436 "make.m"
            if (make__succeeded)
#line 436 "make.m"
              {
#line 436 "make.m"
                make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4861 "make.c"
                {
#line 4863 "make.c"
                  return make__succeeded = make____Unify____module_target_type_0_0(make__V_3_3, make__V_4_4);
                }
#line 436 "make.m"
              }
#line 436 "make.m"
          }
#line 436 "make.m"
          break;
#line 436 "make.m"
        case (MR_Integer) 1:
#line 436 "make.m"
          {
#line 436 "make.m"
            MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "make.m"
            MR_Word make__V_6_6;

#line 436 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 436 "make.m"
            if (make__succeeded)
#line 436 "make.m"
              {
#line 436 "make.m"
                make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4889 "make.c"
                make__succeeded = (make__V_5_5 == make__V_6_6);
#line 436 "make.m"
              }
#line 436 "make.m"
          }
#line 436 "make.m"
          break;
#line 436 "make.m"
        case (MR_Integer) 2:
#line 436 "make.m"
          {
#line 436 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "make.m"
            MR_Word make__V_8_8;

#line 436 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 436 "make.m"
            if (make__succeeded)
#line 436 "make.m"
              {
#line 436 "make.m"
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4914 "make.c"
                {
#line 4916 "make.c"
                  return make__succeeded = make____Unify____misc_target_type_0_0(make__V_7_7, make__V_8_8);
                }
#line 436 "make.m"
              }
#line 436 "make.m"
          }
#line 436 "make.m"
          break;
#line 436 "make.m"
      }
#line 436 "make.m"
    return make__succeeded;
#line 436 "make.m"
  }
#line 436 "make.m"
}

#line 266 "make.m"
void MR_CALL 
make____Compare____target_file_0_0(
#line 266 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 266 "make.m"
  MR_Word make__HeadVar__2_2,
#line 266 "make.m"
  MR_Word make__HeadVar__3_3)
#line 266 "make.m"
{
#line 266 "make.m"
  {
#line 266 "make.m"
    MR_bool make__succeeded;
#line 266 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 266 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 266 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 266 "make.m"
    if (make__succeeded)
#line 4958 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "make.m"
    else
#line 266 "make.m"
      {
#line 266 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 266 "make.m"
        MR_Word make__V_8_8;

#line 266 "make.m"
        {
#line 266 "make.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 4980 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 266 "make.m"
        make__succeeded = !(make__succeeded);
#line 266 "make.m"
        if (make__succeeded)
#line 266 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 266 "make.m"
        else
#line 266 "make.m"
          {
#line 266 "make.m"
            make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
#line 266 "make.m"
            return;
          }
#line 266 "make.m"
      }
#line 266 "make.m"
  }
#line 266 "make.m"
}

#line 266 "make.m"
MR_bool MR_CALL 
make____Unify____target_file_0_0(
#line 266 "make.m"
  MR_Word make__HeadVar__1_1,
#line 266 "make.m"
  MR_Word make__HeadVar__2_2)
#line 266 "make.m"
{
#line 266 "make.m"
  {
#line 266 "make.m"
    MR_bool make__succeeded;
#line 266 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 266 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 266 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 266 "make.m"
    if (make__succeeded)
#line 266 "make.m"
      make__succeeded = MR_TRUE;
#line 266 "make.m"
    else
#line 266 "make.m"
      {
#line 266 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 266 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 5041 "make.c"
        {
#line 5043 "make.c"
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 266 "make.m"
        if (make__succeeded)
#line 5048 "make.c"
          {
#line 5050 "make.c"
            return make__succeeded = make____Unify____module_target_type_0_0(make__V_4_4, make__V_6_6);
          }
#line 266 "make.m"
      }
#line 266 "make.m"
    return make__succeeded;
#line 266 "make.m"
  }
#line 266 "make.m"
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
#line 5103 "make.c"
  {
#line 5105 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 5108 "make.c"
    return make__succeeded;
#line 5110 "make.c"
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
    MR_Integer make__CastX_23 = (MR_Integer) make__HeadVar__2_2;
#line 217 "make.m"
    MR_Integer make__CastY_24 = (MR_Integer) make__HeadVar__3_3;

#line 217 "make.m"
    make__succeeded = (make__CastX_23 == make__CastY_24);
#line 217 "make.m"
    if (make__succeeded)
#line 5139 "make.c"
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
#line 5164 "make.c"
          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 217 "make.m"
        else
#line 217 "make.m"
          {
#line 217 "make.m"
            make__succeeded = (make__V_4_4 > make__V_5_5);
#line 217 "make.m"
            if (make__succeeded)
#line 5174 "make.c"
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
                      case (MR_Integer) 17:
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
                      case (MR_Integer) 18:
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
                      MR_Integer make__V_32_32;
#line 217 "make.m"
                      MR_Integer make__V_33_33;

#line 217 "make.m"
                      make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 217 "make.m"
                      if (make__succeeded)
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 217 "make.m"
                          make__V_32_32 = (MR_Integer) make__V_7_7;
#line 217 "make.m"
                          make__V_33_33 = (MR_Integer) make__V_8_8;
#line 217 "make.m"
                          {
#line 217 "make.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_32_32, make__V_33_33);
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
                      MR_Integer make__V_42_42;
#line 217 "make.m"
                      MR_Integer make__V_43_43;

#line 217 "make.m"
                      make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 217 "make.m"
                      if (make__succeeded)
#line 217 "make.m"
                        {
#line 217 "make.m"
                          make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
#line 217 "make.m"
                          make__V_42_42 = (MR_Integer) make__V_9_9;
#line 217 "make.m"
                          make__V_43_43 = (MR_Integer) make__V_10_10;
#line 217 "make.m"
                          {
#line 217 "make.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_42_42, make__V_43_43);
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
                          MR_Word make__V_12_12;
#line 217 "make.m"
                          MR_Integer make__V_36_36;
#line 217 "make.m"
                          MR_Integer make__V_37_37;

#line 217 "make.m"
                          make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 217 "make.m"
                          if (make__succeeded)
#line 217 "make.m"
                            {
#line 217 "make.m"
                              make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "make.m"
                              make__V_36_36 = (MR_Integer) make__V_11_11;
#line 217 "make.m"
                              make__V_37_37 = (MR_Integer) make__V_12_12;
#line 217 "make.m"
                              {
#line 217 "make.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_36_36, make__V_37_37);
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
                          MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                          MR_Word make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 217 "make.m"
                          MR_Word make__V_15_15;
#line 217 "make.m"
                          MR_Word make__V_16_16;
#line 217 "make.m"
                          MR_Word make__V_17_17;
#line 217 "make.m"
                          MR_Integer make__V_38_38;
#line 217 "make.m"
                          MR_Integer make__V_39_39;

#line 217 "make.m"
                          make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 217 "make.m"
                          if (make__succeeded)
#line 217 "make.m"
                            {
#line 217 "make.m"
                              make__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "make.m"
                              make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 217 "make.m"
                              make__V_38_38 = (MR_Integer) make__V_13_13;
#line 217 "make.m"
                              make__V_39_39 = (MR_Integer) make__V_15_15;
#line 217 "make.m"
                              {
#line 217 "make.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_17_17, make__V_38_38, make__V_39_39);
                              }
#line 5586 "make.c"
                              make__succeeded = (make__V_17_17 == (MR_Integer) 0);
#line 217 "make.m"
                              make__succeeded = !(make__succeeded);
#line 217 "make.m"
                              if (make__succeeded)
#line 217 "make.m"
                                make__V_6_6 = make__V_17_17;
#line 217 "make.m"
                              else
#line 217 "make.m"
                                {
#line 217 "make.m"
                                  MR_Integer make__V_40_40 = (MR_Integer) make__V_14_14;
#line 217 "make.m"
                                  MR_Integer make__V_41_41 = (MR_Integer) make__V_16_16;

#line 217 "make.m"
                                  {
#line 217 "make.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_40_40, make__V_41_41);
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
                      case (MR_Integer) 2:
#line 217 "make.m"
                        {
#line 217 "make.m"
                          MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                          MR_String make__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 217 "make.m"
                          MR_Word make__V_20_20;
#line 217 "make.m"
                          MR_String make__V_21_21;
#line 217 "make.m"
                          MR_Word make__V_22_22;
#line 217 "make.m"
                          MR_Integer make__V_34_34;
#line 217 "make.m"
                          MR_Integer make__V_35_35;

#line 217 "make.m"
                          make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 217 "make.m"
                          if (make__succeeded)
#line 217 "make.m"
                            {
#line 217 "make.m"
                              make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "make.m"
                              make__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 217 "make.m"
                              make__V_34_34 = (MR_Integer) make__V_18_18;
#line 217 "make.m"
                              make__V_35_35 = (MR_Integer) make__V_20_20;
#line 217 "make.m"
                              {
#line 217 "make.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_22_22, make__V_34_34, make__V_35_35);
                              }
#line 5656 "make.c"
                              make__succeeded = (make__V_22_22 == (MR_Integer) 0);
#line 217 "make.m"
                              make__succeeded = !(make__succeeded);
#line 217 "make.m"
                              if (make__succeeded)
#line 217 "make.m"
                                make__V_6_6 = make__V_22_22;
#line 217 "make.m"
                              else
#line 217 "make.m"
                                {
#line 217 "make.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&make__V_6_6, make__V_19_19, make__V_21_21);
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
#line 5737 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 0;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 1:
#line 5743 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 1;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 2:
#line 5749 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 2;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 3:
#line 5755 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 3;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 4:
#line 5761 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 4;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 5:
#line 5767 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 5;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 6:
#line 5773 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 6;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 7:
#line 5779 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 7;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 8:
#line 5785 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 8;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 9:
#line 5791 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 10;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 10:
#line 5797 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 11;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 11:
#line 5803 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 12;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 12:
#line 5809 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 13;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 13:
#line 5815 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 14;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 14:
#line 5821 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 15;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 15:
#line 5827 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 16;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 16:
#line 5833 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 17;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 17:
#line 5839 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 18;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 18:
#line 5845 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 23;
#line 217 "make.m"
            break;
#line 217 "make.m"
        }
#line 217 "make.m"
        break;
#line 217 "make.m"
      case (MR_Integer) 1:
#line 5855 "make.c"
        *make__HeadVar__2_2 = (MR_Integer) 9;
#line 217 "make.m"
        break;
#line 217 "make.m"
      case (MR_Integer) 2:
#line 5861 "make.c"
        *make__HeadVar__2_2 = (MR_Integer) 19;
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
#line 5874 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 20;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 1:
#line 5880 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 21;
#line 217 "make.m"
            break;
#line 217 "make.m"
          case (MR_Integer) 2:
#line 5886 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 22;
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
    MR_Integer make__CastX_55 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
    MR_Integer make__CastY_56 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
    make__succeeded = (make__CastX_55 == make__CastY_56);
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
                MR_Integer make__CastX_37 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_38 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_38 == make__CastX_37);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 17:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_39 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_40 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_40 == make__CastX_39);
#line 217 "make.m"
              }
#line 217 "make.m"
              break;
#line 217 "make.m"
            case (MR_Integer) 18:
#line 217 "make.m"
              {
#line 217 "make.m"
                MR_Integer make__CastX_53 = (MR_Integer) make__HeadVar__1_1;
#line 217 "make.m"
                MR_Integer make__CastY_54 = (MR_Integer) make__HeadVar__2_2;

#line 217 "make.m"
                make__succeeded = (make__CastY_54 == make__CastX_53);
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
#line 6245 "make.c"
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
            MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "make.m"
            MR_Word make__V_42_42;

#line 217 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 217 "make.m"
            if (make__succeeded)
#line 217 "make.m"
              {
#line 217 "make.m"
                make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6270 "make.c"
                make__succeeded = (make__V_41_41 == make__V_42_42);
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
                MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "make.m"
                MR_Word make__V_44_44;

#line 217 "make.m"
                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 217 "make.m"
                if (make__succeeded)
#line 217 "make.m"
                  {
#line 217 "make.m"
                    make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 6302 "make.c"
                    make__succeeded = (make__V_43_43 == make__V_44_44);
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
                MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "make.m"
                MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 217 "make.m"
                MR_Word make__V_47_47;
#line 217 "make.m"
                MR_Word make__V_48_48;

#line 217 "make.m"
                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 217 "make.m"
                if (make__succeeded)
#line 217 "make.m"
                  {
#line 217 "make.m"
                    make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                    make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6333 "make.c"
                    make__succeeded = (make__V_45_45 == make__V_47_47);
#line 217 "make.m"
                    if (make__succeeded)
#line 6337 "make.c"
                      make__succeeded = (make__V_46_46 == make__V_48_48);
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
                MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "make.m"
                MR_String make__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 217 "make.m"
                MR_Word make__V_51_51;
#line 217 "make.m"
                MR_String make__V_52_52;

#line 217 "make.m"
                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 217 "make.m"
                if (make__succeeded)
#line 217 "make.m"
                  {
#line 217 "make.m"
                    make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "make.m"
                    make__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6368 "make.c"
                    make__succeeded = (make__V_49_49 == make__V_51_51);
#line 217 "make.m"
                    if (make__succeeded)
#line 6372 "make.c"
                      make__succeeded = (strcmp(make__V_50_50, make__V_52_52) == 0);
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
#line 6417 "make.c"
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
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[9], &make__V_10_10, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_7_7)));
        }
#line 6443 "make.c"
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
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[8], &make__V_11_11, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_8_8)));
            }
#line 6463 "make.c"
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

#line 6532 "make.c"
        {
#line 6534 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[9], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 178 "make.m"
        if (make__succeeded)
#line 178 "make.m"
          {
#line 6541 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 6543 "make.c"
            {
#line 6545 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 178 "make.m"
            if (make__succeeded)
#line 6550 "make.c"
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
#line 6604 "make.c"
  {
#line 6606 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 6609 "make.c"
    return make__succeeded;
#line 6611 "make.c"
  }
#line 207 "make.m"
}

#line 249 "make.m"
void MR_CALL 
make____Compare____misc_target_type_0_0(
#line 249 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 249 "make.m"
  MR_Word make__HeadVar__2_2,
#line 249 "make.m"
  MR_Word make__HeadVar__3_3)
#line 249 "make.m"
{
#line 249 "make.m"
  {
#line 249 "make.m"
    MR_bool make__succeeded;
#line 249 "make.m"
    MR_Integer make__CastX_18 = (MR_Integer) make__HeadVar__2_2;
#line 249 "make.m"
    MR_Integer make__CastY_19 = (MR_Integer) make__HeadVar__3_3;

#line 249 "make.m"
    make__succeeded = (make__CastX_18 == make__CastY_19);
#line 249 "make.m"
    if (make__succeeded)
#line 6640 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "make.m"
    else
#line 249 "make.m"
#line 249 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__2_2)) {
#line 249 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
        case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
          switch (MR_unmkbody(make__HeadVar__2_2)) {
#line 249 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
            case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 249 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 249 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                    case (MR_Integer) 0:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 1:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 2:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 3:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 4:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 5:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                  }
#line 249 "make.m"
                  break;
#line 249 "make.m"
                case (MR_Integer) 1:
#line 6712 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                  break;
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 1:
#line 249 "make.m"
#line 249 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 249 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 249 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                    case (MR_Integer) 0:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 1:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 2:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 3:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 4:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 5:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                  }
#line 249 "make.m"
                  break;
#line 249 "make.m"
                case (MR_Integer) 1:
#line 6776 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                  break;
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 2:
#line 249 "make.m"
#line 249 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 249 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 249 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                    case (MR_Integer) 0:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 1:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 2:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 3:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 4:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 5:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                  }
#line 249 "make.m"
                  break;
#line 249 "make.m"
                case (MR_Integer) 1:
#line 6840 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                  break;
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 3:
#line 249 "make.m"
#line 249 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 249 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 249 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                    case (MR_Integer) 0:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 1:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 2:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 3:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 4:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 5:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                  }
#line 249 "make.m"
                  break;
#line 249 "make.m"
                case (MR_Integer) 1:
#line 6904 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                  break;
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 4:
#line 249 "make.m"
#line 249 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 249 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 249 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                    case (MR_Integer) 0:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 1:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 2:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 3:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 4:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 5:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                  }
#line 249 "make.m"
                  break;
#line 249 "make.m"
                case (MR_Integer) 1:
#line 6968 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                  break;
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 5:
#line 249 "make.m"
#line 249 "make.m"
              switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 249 "make.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
                  switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 249 "make.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                    case (MR_Integer) 0:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 1:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 2:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 3:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 4:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                    case (MR_Integer) 5:
#line 249 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "make.m"
                      break;
#line 249 "make.m"
                  }
#line 249 "make.m"
                  break;
#line 249 "make.m"
                case (MR_Integer) 1:
#line 7032 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                  break;
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
          }
#line 249 "make.m"
          break;
#line 249 "make.m"
        case (MR_Integer) 1:
#line 249 "make.m"
          {
#line 249 "make.m"
            MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 249 "make.m"
#line 249 "make.m"
            switch (MR_tag((MR_Word) make__HeadVar__3_3)) {
#line 249 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
              case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
                switch (MR_unmkbody(make__HeadVar__3_3)) {
#line 249 "make.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
                  case (MR_Integer) 0:
#line 7065 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                    break;
#line 249 "make.m"
                  case (MR_Integer) 1:
#line 7071 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 249 "make.m"
                    break;
#line 249 "make.m"
                  case (MR_Integer) 2:
#line 7077 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                    break;
#line 249 "make.m"
                  case (MR_Integer) 3:
#line 7083 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                    break;
#line 249 "make.m"
                  case (MR_Integer) 4:
#line 7089 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                    break;
#line 249 "make.m"
                  case (MR_Integer) 5:
#line 7095 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 249 "make.m"
                    break;
#line 249 "make.m"
                }
#line 249 "make.m"
                break;
#line 249 "make.m"
              case (MR_Integer) 1:
#line 249 "make.m"
                {
#line 249 "make.m"
                  MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

#line 249 "make.m"
                  {
#line 249 "make.m"
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_21_21, make__V_9_9);
#line 249 "make.m"
                    return;
                  }
#line 249 "make.m"
                }
#line 249 "make.m"
                break;
#line 249 "make.m"
            }
#line 249 "make.m"
          }
#line 249 "make.m"
          break;
#line 249 "make.m"
      }
#line 249 "make.m"
  }
#line 249 "make.m"
}

#line 249 "make.m"
MR_bool MR_CALL 
make____Unify____misc_target_type_0_0(
#line 249 "make.m"
  MR_Word make__HeadVar__1_1,
#line 249 "make.m"
  MR_Word make__HeadVar__2_2)
#line 249 "make.m"
{
#line 249 "make.m"
  {
#line 249 "make.m"
    MR_bool make__succeeded;
#line 249 "make.m"
    MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
#line 249 "make.m"
    MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

#line 249 "make.m"
    make__succeeded = (make__CastX_17 == make__CastY_18);
#line 249 "make.m"
    if (make__succeeded)
#line 249 "make.m"
      make__succeeded = MR_TRUE;
#line 249 "make.m"
    else
#line 249 "make.m"
#line 249 "make.m"
      switch (MR_tag((MR_Word) make__HeadVar__1_1)) {
#line 249 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
        case (MR_Integer) 0:
#line 249 "make.m"
#line 249 "make.m"
          switch (MR_unmkbody(make__HeadVar__1_1)) {
#line 249 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 249 "make.m"
            case (MR_Integer) 0:
#line 249 "make.m"
              {
#line 249 "make.m"
                MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
#line 249 "make.m"
                MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

#line 249 "make.m"
                make__succeeded = (make__CastY_4 == make__CastX_3);
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 1:
#line 249 "make.m"
              {
#line 249 "make.m"
                MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
#line 249 "make.m"
                MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

#line 249 "make.m"
                make__succeeded = (make__CastY_6 == make__CastX_5);
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 2:
#line 249 "make.m"
              {
#line 249 "make.m"
                MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 249 "make.m"
                MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 249 "make.m"
                make__succeeded = (make__CastY_10 == make__CastX_9);
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 3:
#line 249 "make.m"
              {
#line 249 "make.m"
                MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
#line 249 "make.m"
                MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

#line 249 "make.m"
                make__succeeded = (make__CastY_12 == make__CastX_11);
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 4:
#line 249 "make.m"
              {
#line 249 "make.m"
                MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
#line 249 "make.m"
                MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

#line 249 "make.m"
                make__succeeded = (make__CastY_14 == make__CastX_13);
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
            case (MR_Integer) 5:
#line 249 "make.m"
              {
#line 249 "make.m"
                MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 249 "make.m"
                MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 249 "make.m"
                make__succeeded = (make__CastY_16 == make__CastX_15);
#line 249 "make.m"
              }
#line 249 "make.m"
              break;
#line 249 "make.m"
          }
#line 249 "make.m"
          break;
#line 249 "make.m"
        case (MR_Integer) 1:
#line 249 "make.m"
          {
#line 249 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "make.m"
            MR_Word make__V_8_8;

#line 249 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 249 "make.m"
            if (make__succeeded)
#line 249 "make.m"
              {
#line 249 "make.m"
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 7283 "make.c"
                {
#line 7285 "make.c"
                  return make__succeeded = make____Unify____module_target_type_0_0(make__V_7_7, make__V_8_8);
                }
#line 249 "make.m"
              }
#line 249 "make.m"
          }
#line 249 "make.m"
          break;
#line 249 "make.m"
      }
#line 249 "make.m"
    return make__succeeded;
#line 249 "make.m"
  }
#line 249 "make.m"
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
#line 7327 "make.c"
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
#line 7421 "make.c"
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
#line 7441 "make.c"
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
#line 7461 "make.c"
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
#line 7481 "make.c"
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
#line 7501 "make.c"
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
                              mercury__builtin__compare_3_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variables_0, &make__V_49_49, ((MR_Box) (make__V_9_9)), ((MR_Box) (make__V_29_29)));
                            }
#line 7521 "make.c"
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
#line 7541 "make.c"
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
#line 7561 "make.c"
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
                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[8], &make__V_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                        }
#line 7581 "make.c"
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
                                              mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0, &make__V_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                            }
#line 7601 "make.c"
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
                                                  mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0, &make__V_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                }
#line 7621 "make.c"
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
                                                      mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0, &make__V_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                    }
#line 7641 "make.c"
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
                                                          mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0, &make__V_56_56, ((MR_Box) (make__V_16_16)), ((MR_Box) (make__V_36_36)));
                                                        }
#line 7661 "make.c"
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
#line 7685 "make.c"
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
#line 7709 "make.c"
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
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[4], &make__V_59_59, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                    }
#line 7729 "make.c"
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
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[5], &make__V_60_60, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                        }
#line 7749 "make.c"
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
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[6], &make__V_61_61, ((MR_Box) (make__V_21_21)), ((MR_Box) (make__V_41_41)));
                                                                            }
#line 7769 "make.c"
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
#line 7789 "make.c"
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
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[7], make__HeadVar__1_1, ((MR_Box) (make__V_23_23)), ((MR_Box) (make__V_43_43)));
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
        MR_Word make__TypeCtorInfo_50_50;
#line 100 "make.m"
        MR_Word make__TypeInfo_51_51;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_52_52;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_53_53;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_54_54;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_55_55;
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

#line 7990 "make.c"
        {
#line 7992 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[6], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_23_23)));
        }
#line 100 "make.m"
        if (make__succeeded)
#line 100 "make.m"
          {
#line 7999 "make.c"
            make__TypeInfo_46_46 = (MR_Word) &make_scalar_common_1[5];
#line 8001 "make.c"
            {
#line 8003 "make.c"
              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_46_46, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_24_24)));
            }
#line 100 "make.m"
            if (make__succeeded)
#line 100 "make.m"
              {
#line 8010 "make.c"
                make__TypeInfo_47_47 = (MR_Word) &make_scalar_common_1[7];
#line 8012 "make.c"
                {
#line 8014 "make.c"
                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_47_47, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_25_25)));
                }
#line 100 "make.m"
                if (make__succeeded)
#line 100 "make.m"
                  {
#line 8021 "make.c"
                    make__TypeInfo_48_48 = (MR_Word) &make_scalar_common_2[3];
#line 8023 "make.c"
                    {
#line 8025 "make.c"
                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_48_48, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_26_26)));
                    }
#line 100 "make.m"
                    if (make__succeeded)
#line 100 "make.m"
                      {
#line 8032 "make.c"
                        make__TypeInfo_49_49 = (MR_Word) &make_scalar_common_2[3];
#line 8034 "make.c"
                        {
#line 8036 "make.c"
                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_49_49, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_27_27)));
                        }
#line 100 "make.m"
                        if (make__succeeded)
#line 100 "make.m"
                          {
#line 8043 "make.c"
                            make__TypeCtorInfo_50_50 = (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variables_0;
#line 8045 "make.c"
                            {
#line 8047 "make.c"
                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_50_50, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_28_28)));
                            }
#line 100 "make.m"
                            if (make__succeeded)
#line 100 "make.m"
                              {
#line 8054 "make.c"
                                {
#line 8056 "make.c"
                                  make__succeeded = make____Unify____module_index_map_0_0(make__V_9_9, make__V_29_29);
                                }
#line 100 "make.m"
                                if (make__succeeded)
#line 100 "make.m"
                                  {
#line 8063 "make.c"
                                    {
#line 8065 "make.c"
                                      make__succeeded = make____Unify____dependency_file_index_map_0_0(make__V_10_10, make__V_30_30);
                                    }
#line 100 "make.m"
                                    if (make__succeeded)
#line 100 "make.m"
                                      {
#line 8072 "make.c"
                                        make__TypeInfo_51_51 = (MR_Word) &make_scalar_common_1[8];
#line 8074 "make.c"
                                        {
#line 8076 "make.c"
                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_51_51, ((MR_Box) (make__V_11_11)), ((MR_Box) (make__V_31_31)));
                                        }
#line 100 "make.m"
                                        if (make__succeeded)
#line 100 "make.m"
                                          {
#line 8083 "make.c"
                                            make__TypeCtorInfo_52_52 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0;
#line 8085 "make.c"
                                            {
#line 8087 "make.c"
                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                            }
#line 100 "make.m"
                                            if (make__succeeded)
#line 100 "make.m"
                                              {
#line 8094 "make.c"
                                                make__TypeCtorInfo_53_53 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0;
#line 8096 "make.c"
                                                {
#line 8098 "make.c"
                                                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                                }
#line 100 "make.m"
                                                if (make__succeeded)
#line 100 "make.m"
                                                  {
#line 8105 "make.c"
                                                    make__TypeCtorInfo_54_54 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0;
#line 8107 "make.c"
                                                    {
#line 8109 "make.c"
                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                    }
#line 100 "make.m"
                                                    if (make__succeeded)
#line 100 "make.m"
                                                      {
#line 8116 "make.c"
                                                        make__TypeCtorInfo_55_55 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0;
#line 8118 "make.c"
                                                        {
#line 8120 "make.c"
                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                        }
#line 100 "make.m"
                                                        if (make__succeeded)
#line 100 "make.m"
                                                          {
#line 8127 "make.c"
                                                            make__succeeded = (make__V_16_16 == make__V_36_36);
#line 100 "make.m"
                                                            if (make__succeeded)
#line 100 "make.m"
                                                              {
#line 8133 "make.c"
                                                                make__succeeded = (make__V_17_17 == make__V_37_37);
#line 100 "make.m"
                                                                if (make__succeeded)
#line 100 "make.m"
                                                                  {
#line 8139 "make.c"
                                                                    make__TypeInfo_56_56 = (MR_Word) &make_scalar_common_2[4];
#line 8141 "make.c"
                                                                    {
#line 8143 "make.c"
                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_56_56, ((MR_Box) (make__V_18_18)), ((MR_Box) (make__V_38_38)));
                                                                    }
#line 100 "make.m"
                                                                    if (make__succeeded)
#line 100 "make.m"
                                                                      {
#line 8150 "make.c"
                                                                        make__TypeInfo_57_57 = (MR_Word) &make_scalar_common_2[5];
#line 8152 "make.c"
                                                                        {
#line 8154 "make.c"
                                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_57_57, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                        }
#line 100 "make.m"
                                                                        if (make__succeeded)
#line 100 "make.m"
                                                                          {
#line 8161 "make.c"
                                                                            make__TypeInfo_58_58 = (MR_Word) &make_scalar_common_2[6];
#line 8163 "make.c"
                                                                            {
#line 8165 "make.c"
                                                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_58_58, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                            }
#line 100 "make.m"
                                                                            if (make__succeeded)
#line 100 "make.m"
                                                                              {
#line 8172 "make.c"
                                                                                make__succeeded = (make__V_21_21 == make__V_41_41);
#line 100 "make.m"
                                                                                if (make__succeeded)
#line 100 "make.m"
                                                                                  {
#line 8178 "make.c"
                                                                                    make__TypeInfo_59_59 = (MR_Word) &make_scalar_common_2[7];
#line 8180 "make.c"
                                                                                    {
#line 8182 "make.c"
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
#line 8256 "make.c"
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
#line 8297 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 2:
#line 8303 "make.c"
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
#line 8327 "make.c"
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
#line 8351 "make.c"
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
#line 8375 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
                break;
#line 194 "make.m"
              case (MR_Integer) 1:
#line 8381 "make.c"
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
#line 8464 "make.c"
                {
#line 8466 "make.c"
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
#line 8492 "make.c"
                {
#line 8494 "make.c"
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
#line 8520 "make.c"
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

#line 272 "make.m"
void MR_CALL 
make____Compare____linked_target_file_0_0(
#line 272 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 272 "make.m"
  MR_Word make__HeadVar__2_2,
#line 272 "make.m"
  MR_Word make__HeadVar__3_3)
#line 272 "make.m"
{
#line 272 "make.m"
  {
#line 272 "make.m"
    MR_bool make__succeeded;
#line 272 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 272 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 272 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 272 "make.m"
    if (make__succeeded)
#line 8561 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 272 "make.m"
    else
#line 272 "make.m"
      {
#line 272 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 272 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 272 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 272 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 272 "make.m"
        MR_Word make__V_8_8;

#line 272 "make.m"
        {
#line 272 "make.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 8583 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 272 "make.m"
        make__succeeded = !(make__succeeded);
#line 272 "make.m"
        if (make__succeeded)
#line 272 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 272 "make.m"
        else
#line 272 "make.m"
          {
#line 272 "make.m"
            MR_Integer make__V_13_13 = (MR_Integer) make__V_5_5;
#line 272 "make.m"
            MR_Integer make__V_14_14 = (MR_Integer) make__V_7_7;

#line 272 "make.m"
            {
#line 272 "make.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_13_13, make__V_14_14);
#line 272 "make.m"
              return;
            }
#line 272 "make.m"
          }
#line 272 "make.m"
      }
#line 272 "make.m"
  }
#line 272 "make.m"
}

#line 272 "make.m"
MR_bool MR_CALL 
make____Unify____linked_target_file_0_0(
#line 272 "make.m"
  MR_Word make__HeadVar__1_1,
#line 272 "make.m"
  MR_Word make__HeadVar__2_2)
#line 272 "make.m"
{
#line 272 "make.m"
  {
#line 272 "make.m"
    MR_bool make__succeeded;
#line 272 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 272 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 272 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 272 "make.m"
    if (make__succeeded)
#line 272 "make.m"
      make__succeeded = MR_TRUE;
#line 272 "make.m"
    else
#line 272 "make.m"
      {
#line 272 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 272 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 272 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8653 "make.c"
        {
#line 8655 "make.c"
          make__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 272 "make.m"
        if (make__succeeded)
#line 8660 "make.c"
          make__succeeded = (make__V_4_4 == make__V_6_6);
#line 272 "make.m"
      }
#line 272 "make.m"
    return make__succeeded;
#line 272 "make.m"
  }
#line 272 "make.m"
}

#line 597 "make.m"
void MR_CALL 
make____Compare____last_hash_0_0(
#line 597 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 597 "make.m"
  MR_Word make__HeadVar__2_2,
#line 597 "make.m"
  MR_Word make__HeadVar__3_3)
#line 597 "make.m"
{
#line 597 "make.m"
  {
#line 597 "make.m"
    MR_bool make__succeeded;
#line 597 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 597 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 597 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 597 "make.m"
    if (make__succeeded)
#line 8695 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 597 "make.m"
    else
#line 597 "make.m"
      {
#line 597 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 597 "make.m"
        MR_String make__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 597 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 597 "make.m"
        MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 597 "make.m"
        MR_Word make__V_8_8;

#line 597 "make.m"
        {
#line 597 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_8_8, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_6_6)));
        }
#line 8717 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 597 "make.m"
        make__succeeded = !(make__succeeded);
#line 597 "make.m"
        if (make__succeeded)
#line 597 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 597 "make.m"
        else
#line 597 "make.m"
          {
#line 597 "make.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
#line 597 "make.m"
            return;
          }
#line 597 "make.m"
      }
#line 597 "make.m"
  }
#line 597 "make.m"
}

#line 597 "make.m"
MR_bool MR_CALL 
make____Unify____last_hash_0_0(
#line 597 "make.m"
  MR_Word make__HeadVar__1_1,
#line 597 "make.m"
  MR_Word make__HeadVar__2_2)
#line 597 "make.m"
{
#line 597 "make.m"
  {
#line 597 "make.m"
    MR_bool make__succeeded;
#line 597 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 597 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 597 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 597 "make.m"
    if (make__succeeded)
#line 597 "make.m"
      make__succeeded = MR_TRUE;
#line 597 "make.m"
    else
#line 597 "make.m"
      {
#line 597 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 597 "make.m"
        MR_String make__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 597 "make.m"
        MR_String make__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8778 "make.c"
        {
#line 8780 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_5_5)));
        }
#line 597 "make.m"
        if (make__succeeded)
#line 8785 "make.c"
          make__succeeded = (strcmp(make__V_4_4, make__V_6_6) == 0);
#line 597 "make.m"
      }
#line 597 "make.m"
    return make__succeeded;
#line 597 "make.m"
  }
#line 597 "make.m"
}

#line 258 "make.m"
void MR_CALL 
make____Compare____file_timestamps_0_0(
#line 258 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 258 "make.m"
  MR_Word make__HeadVar__2_2,
#line 258 "make.m"
  MR_Word make__HeadVar__3_3)
#line 258 "make.m"
{
#line 258 "make.m"
  {
#line 258 "make.m"
    MR_bool make__succeeded;
#line 258 "make.m"
    MR_Word make__Cast_HeadVar1_4 = make__HeadVar__2_2;
#line 258 "make.m"
    MR_Word make__Cast_HeadVar2_5 = make__HeadVar__3_3;

#line 258 "make.m"
    {
#line 258 "make.m"
      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], make__HeadVar__1_1, ((MR_Box) (make__Cast_HeadVar1_4)), ((MR_Box) (make__Cast_HeadVar2_5)));
#line 258 "make.m"
      return;
    }
#line 258 "make.m"
  }
#line 258 "make.m"
}

#line 258 "make.m"
MR_bool MR_CALL 
make____Unify____file_timestamps_0_0(
#line 258 "make.m"
  MR_Word make__HeadVar__1_1,
#line 258 "make.m"
  MR_Word make__HeadVar__2_2)
#line 258 "make.m"
{
#line 258 "make.m"
  {
#line 258 "make.m"
    MR_bool make__succeeded;
#line 258 "make.m"
    MR_Word make__Cast_HeadVar1_3 = make__HeadVar__1_1;
#line 258 "make.m"
    MR_Word make__Cast_HeadVar2_4 = make__HeadVar__2_2;

#line 258 "make.m"
    {
#line 258 "make.m"
      return make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[5], ((MR_Box) (make__Cast_HeadVar1_3)), ((MR_Box) (make__Cast_HeadVar2_4)));
    }
#line 258 "make.m"
    return make__succeeded;
#line 258 "make.m"
  }
#line 258 "make.m"
}

#line 260 "make.m"
void MR_CALL 
make____Compare____dependency_status_0_0(
#line 260 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 260 "make.m"
  MR_Word make__HeadVar__2_2,
#line 260 "make.m"
  MR_Word make__HeadVar__3_3)
#line 260 "make.m"
{
#line 260 "make.m"
  {
#line 260 "make.m"
    MR_bool make__succeeded;
#line 260 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 260 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 260 "make.m"
    {
#line 260 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 260 "make.m"
      return;
    }
#line 260 "make.m"
  }
#line 260 "make.m"
}

#line 260 "make.m"
MR_bool MR_CALL 
make____Unify____dependency_status_0_0(
#line 260 "make.m"
  MR_Word make__HeadVar__2_1,
#line 260 "make.m"
  MR_Word make__HeadVar__2_2)
#line 260 "make.m"
{
#line 8899 "make.c"
  {
#line 8901 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 8904 "make.c"
    return make__succeeded;
#line 8906 "make.c"
  }
#line 260 "make.m"
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
#line 8935 "make.c"
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
#line 8961 "make.c"
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
#line 8981 "make.c"
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

#line 9050 "make.c"
        {
#line 9052 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[4], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 186 "make.m"
        if (make__succeeded)
#line 186 "make.m"
          {
#line 9059 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 9061 "make.c"
            {
#line 9063 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 186 "make.m"
            if (make__succeeded)
#line 9068 "make.c"
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
#line 9105 "make.c"
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
#line 9150 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 9156 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 9162 "make.c"
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
#line 9186 "make.c"
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
#line 9214 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 3:
#line 9220 "make.c"
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
#line 9246 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 9252 "make.c"
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
#line 9276 "make.c"
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
#line 9308 "make.c"
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
#line 9334 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 1:
#line 9340 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                break;
#line 199 "make.m"
              case (MR_Integer) 2:
#line 9346 "make.c"
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
#line 9370 "make.c"
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
#line 9452 "make.c"
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
#line 9477 "make.c"
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
#line 9508 "make.c"
                make__succeeded = (make__V_7_7 == make__V_9_9);
#line 199 "make.m"
                if (make__succeeded)
#line 9512 "make.c"
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
#line 9543 "make.c"
                make__succeeded = (make__V_11_11 == make__V_13_13);
#line 199 "make.m"
                if (make__succeeded)
#line 9547 "make.c"
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

#line 243 "make.m"
void MR_CALL 
make____Compare____c_header_type_0_0(
#line 243 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 243 "make.m"
  MR_Word make__HeadVar__2_2,
#line 243 "make.m"
  MR_Word make__HeadVar__3_3)
#line 243 "make.m"
{
#line 243 "make.m"
  {
#line 243 "make.m"
    MR_bool make__succeeded;
#line 243 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 243 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 243 "make.m"
    {
#line 243 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 243 "make.m"
      return;
    }
#line 243 "make.m"
  }
#line 243 "make.m"
}

#line 243 "make.m"
MR_bool MR_CALL 
make____Unify____c_header_type_0_0(
#line 243 "make.m"
  MR_Word make__HeadVar__2_1,
#line 243 "make.m"
  MR_Word make__HeadVar__2_2)
#line 243 "make.m"
{
#line 9605 "make.c"
  {
#line 9607 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 9610 "make.c"
    return make__succeeded;
#line 9612 "make.c"
  }
#line 243 "make.m"
}

#line 744 "make.m"
void MR_CALL 
make__write_hash_file_5_p_0(
#line 744 "make.m"
  MR_String make__FileName_6,
#line 744 "make.m"
  MR_String make__Hash_7,
#line 744 "make.m"
  MR_Word * make__Success_8)
#line 744 "make.m"
{
#line 747 "make.m"
  {
#line 747 "make.m"
    MR_bool make__succeeded;
#line 747 "make.m"
    MR_Word make__OpenResult_10;

#line 748 "make.m"
    {
#line 748 "make.m"
      mercury__io__open_output_4_p_0(make__FileName_6, &make__OpenResult_10);
    }
#line 754 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 755 "make.m"
      {
#line 755 "make.m"
        MR_Word make__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OpenResult_10, (MR_Integer) 0)));
#line 755 "make.m"
        MR_String make__V_21_21;

#line 756 "make.m"
        {
#line 756 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
        }
#line 757 "make.m"
        {
#line 757 "make.m"
          mercury__io__write_string_3_p_0(make__FileName_6);
        }
#line 758 "make.m"
        {
#line 758 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
#line 759 "make.m"
        {
#line 759 "make.m"
          make__V_21_21 = mercury__io__error_message_1_f_0(make__Error_12);
        }
#line 759 "make.m"
        {
#line 759 "make.m"
          mercury__io__write_string_3_p_0(make__V_21_21);
        }
#line 760 "make.m"
        {
#line 760 "make.m"
          mercury__io__nl_2_p_0();
        }
#line 761 "make.m"
        *make__Success_8 = (MR_Integer) 0;
#line 755 "make.m"
      }
#line 754 "make.m"
    else
#line 750 "make.m"
      {
#line 750 "make.m"
        MR_Word make__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_10, (MR_Integer) 0)));

#line 751 "make.m"
        {
#line 751 "make.m"
          mercury__io__write_string_4_p_0(make__Stream_11, make__Hash_7);
        }
#line 752 "make.m"
        {
#line 752 "make.m"
          mercury__io__close_output_3_p_0(make__Stream_11);
        }
#line 753 "make.m"
        *make__Success_8 = (MR_Integer) 1;
#line 750 "make.m"
      }
#line 747 "make.m"
  }
#line 744 "make.m"
}

#line 700 "make.m"
void MR_CALL 
make__compare_hash_file_6_p_0(
#line 700 "make.m"
  MR_Word make__Globals_7,
#line 700 "make.m"
  MR_String make__FileName_8,
#line 700 "make.m"
  MR_String make__Hash_9,
#line 700 "make.m"
  MR_Word * make__Same_10)
#line 700 "make.m"
{
#line 703 "make.m"
  {
#line 703 "make.m"
    MR_bool make__succeeded;
#line 703 "make.m"
    MR_Word make__OpenResult_12;
#line 703 "make.m"
    MR_Word make__Verbose_18;

#line 704 "make.m"
    {
#line 704 "make.m"
      mercury__io__open_input_4_p_0(make__FileName_8, &make__OpenResult_12);
    }
#line 723 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_12)) == (MR_mktag((MR_Integer) 1))))
#line 726 "make.m"
      *make__Same_10 = (MR_Integer) 0;
#line 723 "make.m"
    else
#line 706 "make.m"
      {
#line 706 "make.m"
        MR_Word make__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_12, (MR_Integer) 0)));
#line 706 "make.m"
        MR_Word make__ReadResult_14;

#line 707 "make.m"
        {
#line 707 "make.m"
          mercury__io__read_line_as_string_4_p_0(make__Stream_13, &make__ReadResult_14);
        }
#line 715 "make.m"
#line 715 "make.m"
        switch (MR_tag((MR_Word) make__ReadResult_14)) {
#line 715 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 715 "make.m"
          case (MR_Integer) 0:
#line 717 "make.m"
            *make__Same_10 = (MR_Integer) 0;
#line 715 "make.m"
            break;
#line 715 "make.m"
          case (MR_Integer) 1:
#line 709 "make.m"
            {
#line 709 "make.m"
              MR_String make__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), make__ReadResult_14, (MR_Integer) 0)));

#line 710 "make.m"
              make__succeeded = (strcmp(make__Line_15, make__Hash_9) == 0);
#line 712 "make.m"
              if (make__succeeded)
#line 711 "make.m"
                *make__Same_10 = (MR_Integer) 1;
#line 712 "make.m"
              else
#line 713 "make.m"
                *make__Same_10 = (MR_Integer) 0;
#line 709 "make.m"
            }
#line 715 "make.m"
            break;
#line 715 "make.m"
          case (MR_Integer) 2:
#line 720 "make.m"
            *make__Same_10 = (MR_Integer) 0;
#line 715 "make.m"
            break;
#line 715 "make.m"
        }
#line 722 "make.m"
        {
#line 722 "make.m"
          mercury__io__close_input_3_p_0(make__Stream_13);
        }
#line 706 "make.m"
      }
#line 728 "make.m"
    {
#line 728 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_7, (MR_Integer) 45, &make__Verbose_18);
    }
#line 740 "make.m"
#line 740 "make.m"
    switch (make__Verbose_18) {
#line 740 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 740 "make.m"
      case (MR_Integer) 0:
#line 741 "make.m"
        {
#line 741 "make.m"
        }
#line 740 "make.m"
        break;
#line 740 "make.m"
      case (MR_Integer) 1:
#line 730 "make.m"
        {
#line 731 "make.m"
          {
#line 731 "make.m"
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
#line 732 "make.m"
          {
#line 732 "make.m"
            mercury__io__write_string_3_p_0(make__FileName_8);
          }
#line 736 "make.m"
#line 736 "make.m"
          switch (*make__Same_10) {
#line 736 "make.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 736 "make.m"
            case (MR_Integer) 0:
#line 737 "make.m"
              {
#line 738 "make.m"
                {
#line 738 "make.m"
                  mercury__io__write_string_3_p_0((MR_String) " will be UPDATED.\n");
#line 738 "make.m"
                  return;
                }
#line 737 "make.m"
              }
#line 736 "make.m"
              break;
#line 736 "make.m"
            case (MR_Integer) 1:
#line 734 "make.m"
              {
#line 735 "make.m"
                {
#line 735 "make.m"
                  mercury__io__write_string_3_p_0((MR_String) " does not need updating.\n");
#line 735 "make.m"
                  return;
                }
#line 734 "make.m"
              }
#line 736 "make.m"
              break;
#line 736 "make.m"
          }
#line 730 "make.m"
        }
#line 740 "make.m"
        break;
#line 740 "make.m"
    }
#line 703 "make.m"
  }
#line 700 "make.m"
}

#line 694 "make.m"
MR_bool MR_CALL 
make__is_consequential_option_2_p_0(
#line 694 "make.m"
  MR_Word make__InconsequentialOptions_3,
#line 694 "make.m"
  MR_Word make__HeadVar__2_2)
#line 694 "make.m"
{
#line 697 "make.m"
  {
#line 697 "make.m"
    MR_bool make__succeeded;
#line 697 "make.m"
    MR_Word make__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 697 "make.m"
    MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 698 "make.m"
    {
#line 698 "make.m"
      make__succeeded = mercury__set__contains_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, make__InconsequentialOptions_3, ((MR_Box) (make__Option_4)));
    }
#line 698 "make.m"
    make__succeeded = !(make__succeeded);
#line 697 "make.m"
    return make__succeeded;
#line 697 "make.m"
  }
#line 694 "make.m"
}

#line 690 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 690 "make.m"
  MR_Box make__closure_arg,
#line 690 "make.m"
  MR_Box make__wrapper_arg_1)
#line 690 "make.m"
{
#line 690 "make.m"
  {
#line 690 "make.m"
    MR_bool make__succeeded;
#line 690 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 690 "make.m"
    {
#line 690 "make.m"
      return make__succeeded = make__is_consequential_option_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_Word) make__wrapper_arg_1));
    }
#line 690 "make.m"
    return make__succeeded;
#line 690 "make.m"
  }
#line 690 "make.m"
}

#line 667 "make.m"
void MR_CALL 
make__option_table_hash_4_p_0(
#line 667 "make.m"
  MR_Word make__AllOptionArgs_5,
#line 667 "make.m"
  MR_String * make__Hash_6)
#line 667 "make.m"
{
#line 670 "make.m"
  {
#line 670 "make.m"
    MR_bool make__succeeded;
#line 670 "make.m"
    MR_Word make__OptionsErrors_11;
#line 670 "make.m"
    MR_Word make__AllOptionArgsGlobals_12;
#line 670 "make.m"
    MR_Word make__OptionTable_15;
#line 670 "make.m"
    MR_Word make__OptionList_16;
#line 670 "make.m"
    MR_Word make__InconsequentialOptions_17;
#line 670 "make.m"
    MR_Word make__ConsequentialOptionList_18;
#line 670 "make.m"
    MR_Word make__V_28_28;
#line 670 "make.m"
    MR_String make__V_29_29;
#line 678 "make.m"
    MR_Word make__V_8_8;
#line 678 "make.m"
    MR_Word make__V_9_9;
#line 678 "make.m"
    MR_Word make__V_10_10;

#line 678 "make.m"
    {
#line 678 "make.m"
      libs__handle_options__handle_given_options_8_p_0(make__AllOptionArgs_5, &make__V_8_8, &make__V_9_9, &make__V_10_10, &make__OptionsErrors_11, &make__AllOptionArgsGlobals_12);
    }
#line 682 "make.m"
    if ((make__OptionsErrors_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 681 "make.m"
      {
#line 681 "make.m"
      }
#line 682 "make.m"
    else
#line 683 "make.m"
      {
#line 684 "make.m"
        {
#line 684 "make.m"
          mercury__require__unexpected_2_p_0((MR_String) "make.m", (MR_String) "predicate \140make.option_table_hash\'/4: handle_options returned with errors");
#line 684 "make.m"
          return;
        }
#line 683 "make.m"
      }
#line 687 "make.m"
    {
#line 687 "make.m"
      libs__globals__get_options_2_p_0(make__AllOptionArgsGlobals_12, &make__OptionTable_15);
    }
#line 688 "make.m"
    {
#line 688 "make.m"
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, make__OptionTable_15, &make__OptionList_16);
    }
#line 689 "make.m"
    {
#line 689 "make.m"
      libs__options__inconsequential_options_1_p_0(&make__InconsequentialOptions_17);
    }
#line 690 "make.m"
    {
#line 690 "make.m"
      make__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 690 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 0) = ((MR_Box) (&make_scalar_common_4[2]));
#line 690 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 1) = ((MR_Box) (make__option_table_hash_4_p_0_1));
#line 690 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 690 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 3) = ((MR_Box) (make__InconsequentialOptions_17));
#line 690 "make.m"
    }
#line 690 "make.m"
    {
#line 690 "make.m"
      mercury__list__filter_3_p_0((MR_Word) &make_scalar_common_1[3], make__V_28_28, make__OptionList_16, &make__ConsequentialOptionList_18);
    }
#line 692 "make.m"
    {
#line 692 "make.m"
      make__V_29_29 = mercury__string__string_1_f_0((MR_Word) &make_scalar_common_2[1], ((MR_Box) (make__ConsequentialOptionList_18)));
    }
#line 692 "make.m"
    {
#line 692 "make.m"
      *make__Hash_6 = libs__md4__md4sum_1_f_0(make__V_29_29);
    }
#line 670 "make.m"
  }
#line 667 "make.m"
}

#line 627 "make.m"
void MR_CALL 
make__make_track_flags_files_2_9_p_0(
#line 627 "make.m"
  MR_Word make__Globals_10,
#line 627 "make.m"
  MR_Word make__ModuleName_11,
#line 627 "make.m"
  MR_Word * make__Success_12,
#line 627 "make.m"
  MR_Word make__STATE_VARIABLE_LastHash_0_25,
#line 627 "make.m"
  MR_Word * make__STATE_VARIABLE_LastHash_26,
#line 627 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_27,
#line 627 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_28)
#line 627 "make.m"
{
#line 632 "make.m"
  {
#line 632 "make.m"
    MR_bool make__succeeded;
#line 632 "make.m"
    MR_Word make__OptionsResult_16;
#line 632 "make.m"
    MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
#line 633 "make.m"
    MR_Word make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
#line 633 "make.m"
    MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
#line 633 "make.m"
    MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
#line 633 "make.m"
    MR_Word make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
#line 633 "make.m"
    MR_Word make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
#line 633 "make.m"
    MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
#line 633 "make.m"
    MR_Word make__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
#line 633 "make.m"
    MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
#line 633 "make.m"
    MR_Word make__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
#line 633 "make.m"
    MR_Word make__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
#line 633 "make.m"
    MR_Word make__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
#line 633 "make.m"
    MR_Word make__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
#line 633 "make.m"
    MR_Word make__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
#line 633 "make.m"
    MR_Word make__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
#line 633 "make.m"
    MR_Word make__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
#line 633 "make.m"
    MR_Word make__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
#line 633 "make.m"
    MR_Word make__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
#line 633 "make.m"
    MR_Integer make__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
#line 633 "make.m"
    MR_Word make__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));

#line 633 "make.m"
    {
#line 633 "make.m"
      make__options_file__lookup_mmc_module_options_6_p_0(make__Globals_10, make__V_31_31, make__ModuleName_11, &make__OptionsResult_16);
    }
#line 662 "make.m"
    if ((make__OptionsResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "make.m"
      {
#line 664 "make.m"
        *make__Success_12 = (MR_Integer) 0;
#line 663 "make.m"
        *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
#line 663 "make.m"
      }
#line 662 "make.m"
    else
#line 636 "make.m"
      {
#line 636 "make.m"
        MR_Word make__ModuleOptionArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OptionsResult_16, (MR_Integer) 0)));
#line 636 "make.m"
        MR_Word make__DetectedGradeFlags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
#line 636 "make.m"
        MR_Word make__OptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
#line 636 "make.m"
        MR_Word make__AllOptionArgs_20;
#line 636 "make.m"
        MR_String make__Hash_22;
#line 636 "make.m"
        MR_String make__HashFileName_23;
#line 636 "make.m"
        MR_Word make__Same_24;
#line 636 "make.m"
        MR_Word make__V_33_33;
#line 636 "make.m"
        MR_Word make__V_34_34;
#line 636 "make.m"
        MR_Word make__V_35_35;
#line 637 "make.m"
        MR_Word make__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
#line 637 "make.m"
        MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
#line 637 "make.m"
        MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
#line 637 "make.m"
        MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
#line 637 "make.m"
        MR_Word make__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
#line 637 "make.m"
        MR_Word make__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
#line 637 "make.m"
        MR_Word make__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
#line 637 "make.m"
        MR_Word make__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
#line 637 "make.m"
        MR_Word make__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
#line 637 "make.m"
        MR_Word make__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
#line 637 "make.m"
        MR_Word make__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
#line 637 "make.m"
        MR_Word make__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
#line 637 "make.m"
        MR_Word make__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
#line 637 "make.m"
        MR_Word make__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
#line 637 "make.m"
        MR_Word make__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
#line 637 "make.m"
        MR_Word make__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
#line 637 "make.m"
        MR_Integer make__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
#line 637 "make.m"
        MR_Word make__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
#line 647 "make.m"
        MR_String make__HashPrime_21;
#line 645 "make.m"
        MR_Word make__V_102_102;

#line 639 "make.m"
        {
#line 639 "make.m"
          make__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "make.m"
          MR_hl_field(MR_mktag(1), make__V_35_35, 0) = ((MR_Box) (make__OptionArgs_19));
#line 639 "make.m"
          MR_hl_field(MR_mktag(1), make__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "make.m"
        }
#line 639 "make.m"
        {
#line 639 "make.m"
          make__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "make.m"
          MR_hl_field(MR_mktag(1), make__V_34_34, 0) = ((MR_Box) (make__ModuleOptionArgs_17));
#line 639 "make.m"
          MR_hl_field(MR_mktag(1), make__V_34_34, 1) = ((MR_Box) (make__V_35_35));
#line 639 "make.m"
        }
#line 639 "make.m"
        {
#line 639 "make.m"
          make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "make.m"
          MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) (make__DetectedGradeFlags_18));
#line 639 "make.m"
          MR_hl_field(MR_mktag(1), make__V_33_33, 1) = ((MR_Box) (make__V_34_34));
#line 639 "make.m"
        }
#line 639 "make.m"
        {
#line 639 "make.m"
          make__AllOptionArgs_20 = mercury__list__condense_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__V_33_33);
        }
#line 645 "make.m"
        make__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 0)));
#line 645 "make.m"
        make__HashPrime_21 = ((MR_String) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 1)));
#line 645 "make.m"
        {
#line 645 "make.m"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__AllOptionArgs_20)), ((MR_Box) (make__V_102_102)));
        }
#line 647 "make.m"
        if (make__succeeded)
#line 646 "make.m"
          {
#line 646 "make.m"
            make__Hash_22 = make__HashPrime_21;
#line 646 "make.m"
            *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
#line 646 "make.m"
          }
#line 647 "make.m"
        else
#line 648 "make.m"
          {
#line 648 "make.m"
            {
#line 648 "make.m"
              make__option_table_hash_4_p_0(make__AllOptionArgs_20, &make__Hash_22);
            }
#line 649 "make.m"
            {
#line 649 "make.m"
              MR_Word base;
#line 649 "make.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 649 "make.m"
              *make__STATE_VARIABLE_LastHash_26 = base;
#line 649 "make.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__AllOptionArgs_20));
#line 649 "make.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__Hash_22));
#line 649 "make.m"
            }
#line 648 "make.m"
          }
#line 652 "make.m"
        {
#line 652 "make.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__Globals_10, make__ModuleName_11, (MR_String) ".track_flags", (MR_Integer) 0, &make__HashFileName_23);
        }
#line 654 "make.m"
        {
#line 654 "make.m"
          make__compare_hash_file_6_p_0(make__Globals_10, make__HashFileName_23, make__Hash_22, &make__Same_24);
        }
#line 658 "make.m"
#line 658 "make.m"
        switch (make__Same_24) {
#line 658 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 658 "make.m"
          case (MR_Integer) 0:
#line 660 "make.m"
            {
#line 660 "make.m"
              make__write_hash_file_5_p_0(make__HashFileName_23, make__Hash_22, make__Success_12);
            }
#line 658 "make.m"
            break;
#line 658 "make.m"
          case (MR_Integer) 1:
#line 657 "make.m"
            *make__Success_12 = (MR_Integer) 1;
#line 658 "make.m"
            break;
#line 658 "make.m"
        }
#line 636 "make.m"
      }
#line 632 "make.m"
    *make__STATE_VARIABLE_Info_28 = make__STATE_VARIABLE_Info_0_27;
#line 632 "make.m"
  }
#line 627 "make.m"
}

#line 619 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 619 "make.m"
  MR_Box make__closure_arg,
#line 619 "make.m"
  MR_Box make__wrapper_arg_1,
#line 619 "make.m"
  MR_Box make__wrapper_arg_2,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 619 "make.m"
  MR_Box make__wrapper_arg_4,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 619 "make.m"
  MR_Box make__wrapper_arg_6,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 619 "make.m"
  MR_Box make__wrapper_arg_8,
#line 619 "make.m"
  MR_Box * make__wrapper_arg_9)
#line 619 "make.m"
{
#line 619 "make.m"
  {
#line 619 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 619 "make.m"
    MR_Word make__conv2_Success_12;
#line 619 "make.m"
    MR_Word make__conv1_STATE_VARIABLE_LastHash_26;
#line 619 "make.m"
    MR_Word make__conv0_STATE_VARIABLE_Info_28;

#line 619 "make.m"
    {
#line 619 "make.m"
      make__make_track_flags_files_2_9_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv2_Success_12, ((MR_Word) make__wrapper_arg_4), &make__conv1_STATE_VARIABLE_LastHash_26, ((MR_Word) make__wrapper_arg_6), &make__conv0_STATE_VARIABLE_Info_28);
    }
#line 619 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv2_Success_12));
#line 619 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv1_STATE_VARIABLE_LastHash_26));
#line 619 "make.m"
    *make__wrapper_arg_7 = ((MR_Box) (make__conv0_STATE_VARIABLE_Info_28));
#line 619 "make.m"
  }
#line 619 "make.m"
}

#line 609 "make.m"
void MR_CALL 
make__make_track_flags_files_7_p_0(
#line 609 "make.m"
  MR_Word make__Globals_8,
#line 609 "make.m"
  MR_Word make__ModuleName_9,
#line 609 "make.m"
  MR_Word * make__Success_10,
#line 609 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_18,
#line 609 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_19)
#line 609 "make.m"
{
#line 612 "make.m"
  {
#line 612 "make.m"
    MR_bool make__succeeded;
#line 612 "make.m"
    MR_Word make__Success0_13;
#line 612 "make.m"
    MR_Word make__Modules_14;
#line 612 "make.m"
    MR_Word make__STATE_VARIABLE_Info_22_22;

#line 613 "make.m"
    {
#line 613 "make.m"
      make__dependencies__find_reachable_local_modules_8_p_0(make__Globals_8, make__ModuleName_9, &make__Success0_13, &make__Modules_14, make__STATE_VARIABLE_Info_0_18, &make__STATE_VARIABLE_Info_22_22);
    }
#line 622 "make.m"
#line 622 "make.m"
    switch (make__Success0_13) {
#line 622 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 622 "make.m"
      case (MR_Integer) 0:
#line 623 "make.m"
        {
#line 624 "make.m"
          *make__Success_10 = (MR_Integer) 0;
#line 623 "make.m"
          *make__STATE_VARIABLE_Info_19 = make__STATE_VARIABLE_Info_22_22;
#line 623 "make.m"
        }
#line 622 "make.m"
        break;
#line 622 "make.m"
      case (MR_Integer) 1:
#line 616 "make.m"
        {
#line 616 "make.m"
          MR_Word make__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 616 "make.m"
          MR_Word make__V_27_27;
#line 619 "make.m"
          MR_Word make___LastHash_17;
#line 619 "make.m"
          MR_Box make__conv5__LastHash_17;
#line 619 "make.m"
          MR_Box make__conv4_STATE_VARIABLE_Info_19;
#line 619 "make.m"
          MR_Box make__conv3_STATE_VARIABLE_IO_21;

#line 620 "make.m"
          {
#line 620 "make.m"
            make__V_27_27 = mercury__set__to_sorted_list_1_f_0(make__TypeCtorInfo_39_39, make__Modules_14);
          }
#line 619 "make.m"
          {
#line 619 "make.m"
            make__util__foldl3_maybe_stop_at_error_11_p_0(make__TypeCtorInfo_39_39, (MR_Word) &make__make__type_ctor_info_last_hash_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Integer) 0, (MR_Word) &make_scalar_common_1[17], make__Globals_8, make__V_27_27, make__Success_10, ((MR_Box) (&make_scalar_common_2[9])), &make__conv5__LastHash_17, ((MR_Box) (make__STATE_VARIABLE_Info_22_22)), &make__conv4_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &make__conv3_STATE_VARIABLE_IO_21);
          }
#line 619 "make.m"
          make___LastHash_17 = ((MR_Word) make__conv5__LastHash_17);
#line 619 "make.m"
          *make__STATE_VARIABLE_Info_19 = ((MR_Word) make__conv4_STATE_VARIABLE_Info_19);
#line 616 "make.m"
        }
#line 622 "make.m"
        break;
#line 622 "make.m"
    }
#line 612 "make.m"
  }
#line 609 "make.m"
}

#line 575 "make.m"
MR_Word MR_CALL 
make__get_executable_type_1_f_0(
#line 575 "make.m"
  MR_Word make__Globals_3)
#line 575 "make.m"
{
#line 577 "make.m"
  {
#line 577 "make.m"
    MR_bool make__succeeded;
#line 577 "make.m"
    MR_Word make__ExecutableType_4;
#line 577 "make.m"
    MR_Word make__CompilationTarget_5;

#line 578 "make.m"
    {
#line 578 "make.m"
      libs__globals__get_target_2_p_0(make__Globals_3, &make__CompilationTarget_5);
    }
#line 584 "make.m"
    make__ExecutableType_4 = ((&make_vector_common_9[10 + make__CompilationTarget_5]))->make__vector_common_type_9_0__vct_9_f_0;
#line 577 "make.m"
    return make__ExecutableType_4;
#line 577 "make.m"
  }
#line 575 "make.m"
}

#line 565 "make.m"
MR_bool MR_CALL 
make__search_backwards_for_dot_3_p_0(
#line 565 "make.m"
  MR_String make__String_4,
#line 565 "make.m"
  MR_Integer make__Index_5,
#line 565 "make.m"
  MR_Integer * make__DotIndex_6)
#line 565 "make.m"
{
#line 567 "make.m"
  while (MR_TRUE)
#line 567 "make.m"
    {
#line 567 "make.m"
      /* tailcall optimized into a loop */
#line 567 "make.m"
      {
#line 567 "make.m"
        MR_bool make__succeeded;
#line 567 "make.m"
        MR_Integer make__CharIndex_7;
#line 567 "make.m"
        MR_Char make__Char_8;

#line 568 "make.m"
        {
#line 568 "make.m"
          make__succeeded = mercury__string__unsafe_prev_index_4_p_0(make__String_4, make__Index_5, &make__CharIndex_7, &make__Char_8);
        }
#line 567 "make.m"
        if (make__succeeded)
#line 567 "make.m"
          {
#line 569 "make.m"
            make__succeeded = (make__Char_8 == (MR_Char) 46);
#line 571 "make.m"
            if (make__succeeded)
#line 570 "make.m"
              {
#line 570 "make.m"
                *make__DotIndex_6 = make__CharIndex_7;
#line 570 "make.m"
                make__succeeded = MR_TRUE;
#line 570 "make.m"
              }
#line 571 "make.m"
            else
#line 572 "make.m"
              {
#line 572 "make.m"
                /* direct tailcall eliminated */
#line 572 "make.m"
                {
#line 572 "make.m"
                  MR_Integer make__Index__tmp_copy_5 = make__CharIndex_7;

#line 572 "make.m"
                  make__Index_5 = make__Index__tmp_copy_5;
#line 572 "make.m"
                }
#line 572 "make.m"
                continue;
#line 572 "make.m"
              }
#line 567 "make.m"
          }
#line 567 "make.m"
        return make__succeeded;
#line 567 "make.m"
      }
#line 567 "make.m"
      break;
#line 567 "make.m"
    }
#line 565 "make.m"
}

#line 470 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 470 "make.m"
  void * make__env_ptr_arg)
#line 470 "make.m"
{
#line 470 "make.m"
  {
#line 470 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 474 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".cs") == 0);
#line 474 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 474 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 474 "make.m"
      {
#line 474 "make.m"
        make__classify_target_2_4_p_0_2(make__env_ptr);
#line 474 "make.m"
        return;
      }
#line 470 "make.m"
  }
#line 470 "make.m"
}

#line 476 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 476 "make.m"
  void * make__env_ptr_arg)
#line 476 "make.m"
{
#line 476 "make.m"
  {
#line 476 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 476 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
#line 476 "make.m"
    {
#line 476 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 477 "make.m"
      {
#line 477 "make.m"
        MR_Word base;
#line 477 "make.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 477 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 477 "make.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_10));
#line 477 "make.m"
      }
#line 476 "make.m"
      {
#line 476 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
#line 476 "make.m"
        return;
      }
#line 476 "make.m"
    }
#line 476 "make.m"
  }
#line 476 "make.m"
}

#line 468 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 468 "make.m"
  void * make__env_ptr_arg)
#line 468 "make.m"
{
#line 468 "make.m"
  {
#line 468 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 563 "make.m"
    {
#line 563 "make.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8);
    }
#line 468 "make.m"
    {
#line 468 "make.m"
      MR_Word base;
#line 468 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "make.m"
      *((make__env_ptr)->make__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
#line 468 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8));
#line 468 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9));
#line 468 "make.m"
    }
#line 468 "make.m"
    {
#line 468 "make.m"
      ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont)((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont_env_ptr);
#line 468 "make.m"
      return;
    }
#line 468 "make.m"
  }
#line 468 "make.m"
}

#line 519 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 519 "make.m"
  void * make__env_ptr_arg)
#line 519 "make.m"
{
#line 519 "make.m"
  {
#line 519 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 519 "make.m"
    {
#line 525 "make.m"
      MR_Word make__V_17_17;

#line 525 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 525 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 525 "make.m"
        make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 525 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 525 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 525 "make.m"
        {
#line 525 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
#line 525 "make.m"
          return;
        }
#line 519 "make.m"
    }
#line 519 "make.m"
  }
#line 519 "make.m"
}

#line 517 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 517 "make.m"
  void * make__env_ptr_arg)
#line 517 "make.m"
{
#line 517 "make.m"
  {
#line 517 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 519 "make.m"
    {
#line 519 "make.m"
      MR_Word make__V_32_32;

#line 519 "make.m"
      {
#line 519 "make.m"
        make__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 519 "make.m"
        MR_hl_field(MR_mktag(1), make__V_32_32, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16));
#line 519 "make.m"
      }
#line 519 "make.m"
      {
#line 519 "make.m"
        make__util__target_extension_2_f_1((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, make__V_32_32, make__classify_target_2_4_p_0_8, make__env_ptr);
      }
#line 519 "make.m"
    }
#line 521 "make.m"
    {
#line 525 "make.m"
      MR_Word make__V_65_65;

#line 521 "make.m"
      {
#line 521 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47);
      }
#line 521 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 521 "make.m"
        {
#line 525 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 525 "make.m"
          if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 525 "make.m"
            make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 525 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 521 "make.m"
        }
#line 521 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 521 "make.m"
        {
#line 521 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
#line 521 "make.m"
          return;
        }
#line 521 "make.m"
    }
#line 517 "make.m"
  }
#line 517 "make.m"
}

#line 527 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 527 "make.m"
  void * make__env_ptr_arg)
#line 527 "make.m"
{
#line 527 "make.m"
  {
#line 527 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 527 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_1 = MR_TRUE;
#line 527 "make.m"
    {
#line 527 "make.m"
      MR_Word make__V_33_33;

#line 527 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 528 "make.m"
      {
#line 528 "make.m"
        make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "make.m"
        MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47));
#line 528 "make.m"
      }
#line 528 "make.m"
      {
#line 528 "make.m"
        MR_Word base;
#line 528 "make.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 528 "make.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__V_33_33));
#line 528 "make.m"
      }
#line 527 "make.m"
      {
#line 527 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
#line 527 "make.m"
        return;
      }
#line 527 "make.m"
    }
#line 527 "make.m"
  }
#line 527 "make.m"
}

#line 511 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 511 "make.m"
  void * make__env_ptr_arg)
#line 511 "make.m"
{
#line 511 "make.m"
  {
#line 511 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 512 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_30_30, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_60_60) == 0);
#line 511 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 511 "make.m"
      {
#line 513 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31 = (MR_String) ".";
#line 513 "make.m"
        {
#line 513 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16 = mercury__string__f_43_43_2_f_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15);
        }
#line 513 "make.m"
        {
#line 513 "make.m"
          make__classify_target_2_4_p_0_5(make__env_ptr);
#line 513 "make.m"
          return;
        }
#line 511 "make.m"
      }
#line 511 "make.m"
  }
#line 511 "make.m"
}

#line 516 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 516 "make.m"
  void * make__env_ptr_arg)
#line 516 "make.m"
{
#line 516 "make.m"
  {
#line 516 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 516 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((MR_String) "s", (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_61_61) == 0);
#line 516 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 516 "make.m"
      {
#line 516 "make.m"
        make__classify_target_2_4_p_0_5(make__env_ptr);
#line 516 "make.m"
        return;
      }
#line 516 "make.m"
  }
#line 516 "make.m"
}

#line 465 "make.m"
void MR_CALL 
make__classify_target_2_4_p_0(
#line 465 "make.m"
  MR_Word make__Globals_5,
#line 465 "make.m"
  MR_String make__ModuleNameStr0_6,
#line 465 "make.m"
  MR_String make__Suffix_7,
#line 465 "make.m"
  MR_Word * make__HeadVar__4_4,
#line 465 "make.m"
  MR_Cont make__cont,
#line 465 "make.m"
  void * make__cont_env_ptr)
#line 465 "make.m"
{
#line 465 "make.m"
  {
#line 465 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s make__env;

#line 465 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Globals_5 = make__Globals_5;
#line 465 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = make__ModuleNameStr0_6;
#line 465 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7 = make__Suffix_7;
#line 465 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__HeadVar__4_4 = make__HeadVar__4_4;
#line 465 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont = make__cont;
#line 465 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont_env_ptr = make__cont_env_ptr;
#line 468 "make.m"
    {
#line 470 "make.m"
      MR_Word make__V_18_18;

#line 478 "make.m"
      (make__env).make__classify_target_2_4_p_0_env_0__cond_0 = MR_FALSE;
#line 470 "make.m"
      {
#line 470 "make.m"
        make__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 470 "make.m"
        MR_hl_field(MR_mktag(1), make__V_18_18, 0) = ((MR_Box) ((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7));
#line 470 "make.m"
      }
#line 470 "make.m"
      {
#line 470 "make.m"
        make__util__target_extension_2_f_1((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env).make__classify_target_2_4_p_0_env_0__ModuleTargetType_10, make__V_18_18, make__classify_target_2_4_p_0_3, &make__env);
      }
#line 478 "make.m"
      if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_0))
#line 483 "make.m"
        {
#line 483 "make.m"
          MR_Word make__ModuleTargetType_56;

#line 479 "make.m"
          {
#line 479 "make.m"
            (make__env).make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, &make__ModuleTargetType_56);
          }
#line 483 "make.m"
          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 481 "make.m"
            {
#line 481 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 482 "make.m"
              {
#line 482 "make.m"
                MR_Word base;
#line 482 "make.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 482 "make.m"
                (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 482 "make.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleTargetType_56));
#line 482 "make.m"
              }
#line 481 "make.m"
              {
#line 481 "make.m"
                make__classify_target_2_4_p_0_1(&make__env);
              }
#line 481 "make.m"
            }
#line 483 "make.m"
          else
#line 489 "make.m"
            {
#line 489 "make.m"
              MR_String make__ModuleNameStr1_12;
#line 484 "make.m"
              MR_String make__V_20_20;
#line 484 "make.m"
              MR_String make__V_57_57;

#line 484 "make.m"
              {
#line 484 "make.m"
                libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 576, &make__V_57_57);
              }
#line 484 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_57_57) == 0);
#line 484 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 484 "make.m"
                {
#line 485 "make.m"
                  make__V_20_20 = (MR_String) "lib";
#line 485 "make.m"
                  {
#line 485 "make.m"
                    (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_20_20, &make__ModuleNameStr1_12, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                  }
#line 484 "make.m"
                }
#line 489 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 487 "make.m"
                {
#line 487 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_12;
#line 488 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[1]);
#line 487 "make.m"
                  {
#line 487 "make.m"
                    make__classify_target_2_4_p_0_1(&make__env);
                  }
#line 487 "make.m"
                }
#line 489 "make.m"
              else
#line 496 "make.m"
                {
#line 496 "make.m"
                  MR_String make__ModuleNameStr1_54;
#line 491 "make.m"
                  MR_String make__V_23_23;
#line 491 "make.m"
                  MR_String make__V_58_58;

#line 490 "make.m"
                  {
#line 490 "make.m"
                    libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 575, &make__V_58_58);
                  }
#line 490 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_58_58) == 0);
#line 491 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 491 "make.m"
                    {
#line 492 "make.m"
                      make__V_23_23 = (MR_String) "lib";
#line 492 "make.m"
                      {
#line 492 "make.m"
                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_23_23, &make__ModuleNameStr1_54, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                      }
#line 491 "make.m"
                    }
#line 496 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 494 "make.m"
                    {
#line 494 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_54;
#line 495 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[2]);
#line 494 "make.m"
                      {
#line 494 "make.m"
                        make__classify_target_2_4_p_0_1(&make__env);
                      }
#line 494 "make.m"
                    }
#line 496 "make.m"
                  else
#line 503 "make.m"
                    {
#line 497 "make.m"
                      MR_String make__V_59_59;

#line 497 "make.m"
                      {
#line 497 "make.m"
                        libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 577, &make__V_59_59);
                      }
#line 497 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_59_59) == 0);
#line 503 "make.m"
                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 500 "make.m"
                        {
#line 500 "make.m"
                          MR_Word make__ExecutableType_13;
#line 500 "make.m"
                          MR_Word make__CompilationTarget_64;

#line 500 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 578 "make.m"
                          {
#line 578 "make.m"
                            libs__globals__get_target_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &make__CompilationTarget_64);
                          }
#line 584 "make.m"
                          make__ExecutableType_13 = ((&make_vector_common_9[5 + make__CompilationTarget_64]))->make__vector_common_type_9_0__vct_9_f_0;
#line 502 "make.m"
                          {
#line 502 "make.m"
                            MR_Word base;
#line 502 "make.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "make.m"
                            (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 502 "make.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__ExecutableType_13));
#line 502 "make.m"
                          }
#line 500 "make.m"
                          {
#line 500 "make.m"
                            make__classify_target_2_4_p_0_1(&make__env);
                          }
#line 500 "make.m"
                        }
#line 503 "make.m"
                      else
#line 509 "make.m"
                        {
#line 509 "make.m"
                          MR_String make__ModuleNameStr1_50;
#line 504 "make.m"
                          MR_String make__V_26_26;

#line 504 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".beams") == 0);
#line 504 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 504 "make.m"
                            {
#line 505 "make.m"
                              make__V_26_26 = (MR_String) "lib";
#line 505 "make.m"
                              {
#line 505 "make.m"
                                (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_26_26, &make__ModuleNameStr1_50, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                              }
#line 504 "make.m"
                            }
#line 509 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 507 "make.m"
                            {
#line 507 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_50;
#line 508 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[3]);
#line 507 "make.m"
                              {
#line 507 "make.m"
                                make__classify_target_2_4_p_0_1(&make__env);
                              }
#line 507 "make.m"
                            }
#line 509 "make.m"
                          else
#line 529 "make.m"
                            {
#line 529 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__cond_1 = MR_FALSE;
#line 511 "make.m"
                              {
#line 511 "make.m"
                                MR_String make__Rest_14;

#line 511 "make.m"
                                {
#line 511 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &make__Rest_14, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7);
                                }
#line 511 "make.m"
                                if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 511 "make.m"
                                  {
#line 512 "make.m"
                                    (make__env).make__classify_target_2_4_p_0_env_0__V_30_30 = (MR_String) "s";
#line 512 "make.m"
                                    {
#line 512 "make.m"
                                      mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15, &(make__env).make__classify_target_2_4_p_0_env_0__V_60_60, make__Rest_14, make__classify_target_2_4_p_0_6, &make__env);
                                    }
#line 511 "make.m"
                                  }
#line 511 "make.m"
                              }
#line 516 "make.m"
                              {
#line 516 "make.m"
                                mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env).make__classify_target_2_4_p_0_env_0__V_61_61, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__classify_target_2_4_p_0_7, &make__env);
                              }
#line 529 "make.m"
                              if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_1))
#line 534 "make.m"
                                {
#line 530 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".check") == 0);
#line 534 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 532 "make.m"
                                    {
#line 532 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 533 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[5]);
#line 532 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 532 "make.m"
                                    }
#line 534 "make.m"
                                  else
#line 539 "make.m"
                                    {
#line 535 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".analyse") == 0);
#line 539 "make.m"
                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 537 "make.m"
                                        {
#line 537 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 538 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[6]);
#line 537 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 537 "make.m"
                                        }
#line 539 "make.m"
                                      else
#line 544 "make.m"
                                        {
#line 540 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".clean") == 0);
#line 544 "make.m"
                                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 542 "make.m"
                                            {
#line 542 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 543 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[7]);
#line 542 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 542 "make.m"
                                            }
#line 544 "make.m"
                                          else
#line 549 "make.m"
                                            {
#line 545 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".realclean") == 0);
#line 549 "make.m"
                                              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 547 "make.m"
                                                {
#line 547 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 548 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[8]);
#line 547 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 547 "make.m"
                                                }
#line 549 "make.m"
                                              else
#line 555 "make.m"
                                                {
#line 555 "make.m"
                                                  MR_String make__ModuleNameStr1_42;
#line 550 "make.m"
                                                  MR_String make__V_39_39;

#line 550 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".install") == 0);
#line 550 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 550 "make.m"
                                                    {
#line 551 "make.m"
                                                      make__V_39_39 = (MR_String) "lib";
#line 551 "make.m"
                                                      {
#line 551 "make.m"
                                                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_39_39, &make__ModuleNameStr1_42, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                                                      }
#line 550 "make.m"
                                                    }
#line 555 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 553 "make.m"
                                                    {
#line 553 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_42;
#line 554 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[9]);
#line 553 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 553 "make.m"
                                                    }
#line 555 "make.m"
                                                  else
#line 560 "make.m"
                                                    {
#line 560 "make.m"
                                                      MR_Word make__V_41_41;

#line 556 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".doc") == 0);
#line 560 "make.m"
                                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 560 "make.m"
                                                        {
#line 558 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 559 "make.m"
                                                          make__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 559 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[10]);
#line 559 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 560 "make.m"
                                                        }
#line 560 "make.m"
                                                    }
#line 555 "make.m"
                                                }
#line 549 "make.m"
                                            }
#line 544 "make.m"
                                        }
#line 539 "make.m"
                                    }
#line 534 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 534 "make.m"
                                    {
#line 534 "make.m"
                                      make__classify_target_2_4_p_0_1(&make__env);
                                    }
#line 534 "make.m"
                                }
#line 529 "make.m"
                            }
#line 509 "make.m"
                        }
#line 503 "make.m"
                    }
#line 496 "make.m"
                }
#line 489 "make.m"
            }
#line 483 "make.m"
        }
#line 468 "make.m"
    }
#line 465 "make.m"
  }
#line 465 "make.m"
}

#line 449 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 449 "make.m"
  void * make__env_ptr_arg)
#line 449 "make.m"
{
#line 449 "make.m"
  {
#line 449 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s * make__env_ptr = (struct make__classify_target_3_p_0_2_env_0_s *) make__env_ptr_arg;

#line 449 "make.m"
    *((make__env_ptr)->make__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
#line 449 "make.m"
    {
#line 449 "make.m"
      ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont)((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont_env_ptr);
#line 449 "make.m"
      return;
    }
#line 449 "make.m"
  }
#line 449 "make.m"
}

#line 449 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 449 "make.m"
  MR_Box make__closure_arg,
#line 449 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 449 "make.m"
  MR_Cont make__cont,
#line 449 "make.m"
  void * make__cont_env_ptr)
#line 449 "make.m"
{
#line 449 "make.m"
  {
#line 449 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s make__env;

#line 449 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__wrapper_arg_1 = make__wrapper_arg_1;
#line 449 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont = make__cont;
#line 449 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont_env_ptr = make__cont_env_ptr;
#line 449 "make.m"
    {
#line 449 "make.m"
      MR_Box make__closure = make__closure_arg;

#line 449 "make.m"
      {
#line 449 "make.m"
        make__classify_target_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 5))), &(make__env).make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__classify_target_3_p_0_1, &make__env);
      }
#line 449 "make.m"
    }
#line 449 "make.m"
  }
#line 449 "make.m"
}

#line 441 "make.m"
void MR_CALL 
make__classify_target_3_p_0(
#line 441 "make.m"
  MR_Word make__Globals_4,
#line 441 "make.m"
  MR_String make__FileName_5,
#line 441 "make.m"
  MR_Word * make__HeadVar__3_3)
#line 441 "make.m"
{
#line 444 "make.m"
  {
#line 444 "make.m"
    MR_bool make__succeeded;
#line 444 "make.m"
    MR_Word make__ModuleName_6;
#line 444 "make.m"
    MR_Word make__TargetType_7;
#line 454 "make.m"
    MR_Word make__TargetFile_13;
#line 446 "make.m"
    MR_Word make__TypeInfo_21_21;
#line 446 "make.m"
    MR_Integer make__NameLength_8;
#line 446 "make.m"
    MR_Integer make__DotLocn_9;
#line 446 "make.m"
    MR_String make__ModuleNameStr0_10;
#line 446 "make.m"
    MR_String make__Suffix_11;
#line 446 "make.m"
    MR_Word make__TargetFiles_12;
#line 446 "make.m"
    MR_Word make__V_16_16;
#line 446 "make.m"
    MR_Word make__V_17_17;

#line 446 "make.m"
    {
#line 446 "make.m"
      mercury__string__length_2_p_0(make__FileName_5, &make__NameLength_8);
    }
#line 447 "make.m"
    {
#line 447 "make.m"
      make__succeeded = make__search_backwards_for_dot_3_p_0(make__FileName_5, make__NameLength_8, &make__DotLocn_9);
    }
#line 446 "make.m"
    if (make__succeeded)
#line 446 "make.m"
      {
#line 448 "make.m"
        {
#line 448 "make.m"
          mercury__string__split_4_p_0(make__FileName_5, make__DotLocn_9, &make__ModuleNameStr0_10, &make__Suffix_11);
        }
#line 11521 "make.c"
        make__TypeInfo_21_21 = (MR_Word) &make_scalar_common_1[0];
#line 449 "make.m"
        {
#line 449 "make.m"
          make__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 449 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 0) = ((MR_Box) (&make_scalar_common_7[0]));
#line 449 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 1) = ((MR_Box) (make__classify_target_3_p_0_2));
#line 449 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 449 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 3) = ((MR_Box) (make__Globals_4));
#line 449 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 4) = ((MR_Box) (make__ModuleNameStr0_10));
#line 449 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 5) = ((MR_Box) (make__Suffix_11));
#line 449 "make.m"
        }
#line 449 "make.m"
        {
#line 449 "make.m"
          mercury__solutions__solutions_2_p_1(make__TypeInfo_21_21, make__V_16_16, &make__TargetFiles_12);
        }
#line 451 "make.m"
        make__succeeded = ((MR_tag((MR_Word) make__TargetFiles_12)) == (MR_mktag((MR_Integer) 1)));
#line 451 "make.m"
        if (make__succeeded)
#line 451 "make.m"
          {
#line 451 "make.m"
            make__TargetFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 0)));
#line 451 "make.m"
            make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 1)));
#line 451 "make.m"
            make__succeeded = (make__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "make.m"
          }
#line 446 "make.m"
      }
#line 454 "make.m"
    if (make__succeeded)
#line 453 "make.m"
      {
#line 453 "make.m"
        make__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 0)));
#line 453 "make.m"
        make__TargetType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 1)));
#line 453 "make.m"
      }
#line 454 "make.m"
    else
#line 459 "make.m"
      {
#line 459 "make.m"
        MR_String make__ModuleNameStr_14;

#line 455 "make.m"
        {
#line 455 "make.m"
          make__succeeded = mercury__string__append_3_p_1((MR_String) "lib", &make__ModuleNameStr_14, make__FileName_5);
        }
#line 459 "make.m"
        if (make__succeeded)
#line 457 "make.m"
          {
#line 457 "make.m"
            make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[0]);
#line 458 "make.m"
            {
#line 458 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__ModuleNameStr_14, &make__ModuleName_6);
            }
#line 457 "make.m"
          }
#line 459 "make.m"
        else
#line 460 "make.m"
          {
#line 460 "make.m"
            MR_Word make__ExecutableType_15;
#line 460 "make.m"
            MR_Word make__CompilationTarget_24;

#line 578 "make.m"
            {
#line 578 "make.m"
              libs__globals__get_target_2_p_0(make__Globals_4, &make__CompilationTarget_24);
            }
#line 584 "make.m"
            make__ExecutableType_15 = ((&make_vector_common_9[0 + make__CompilationTarget_24]))->make__vector_common_type_9_0__vct_9_f_0;
#line 461 "make.m"
            {
#line 461 "make.m"
              make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "make.m"
              MR_hl_field(MR_mktag(1), make__TargetType_7, 0) = ((MR_Box) (make__ExecutableType_15));
#line 461 "make.m"
            }
#line 462 "make.m"
            {
#line 462 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__FileName_5, &make__ModuleName_6);
            }
#line 460 "make.m"
          }
#line 459 "make.m"
      }
#line 444 "make.m"
    {
#line 444 "make.m"
      MR_Word base;
#line 444 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "make.m"
      *make__HeadVar__3_3 = base;
#line 444 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleName_6));
#line 444 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__TargetType_7));
#line 444 "make.m"
    }
#line 444 "make.m"
  }
#line 441 "make.m"
}

#line 398 "make.m"
void MR_CALL 
make__make_target_7_p_0(
#line 398 "make.m"
  MR_Word make__Globals_8,
#line 398 "make.m"
  MR_Word make__Target_9,
#line 398 "make.m"
  MR_Word * make__Success_10,
#line 398 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_22,
#line 398 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_23)
#line 398 "make.m"
{
#line 401 "make.m"
  {
#line 401 "make.m"
    MR_bool make__succeeded;
#line 401 "make.m"
    MR_Word make__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 0)));
#line 401 "make.m"
    MR_Word make__TargetType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 1)));
#line 401 "make.m"
    MR_Word make__TrackFlags_15;
#line 401 "make.m"
    MR_Word make__TrackFlagsSuccess_16;
#line 401 "make.m"
    MR_Word make__STATE_VARIABLE_Info_27_27;

#line 403 "make.m"
    {
#line 403 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 628, &make__TrackFlags_15);
    }
#line 407 "make.m"
#line 407 "make.m"
    switch (make__TrackFlags_15) {
#line 407 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 407 "make.m"
      case (MR_Integer) 0:
#line 405 "make.m"
        {
#line 406 "make.m"
          make__TrackFlagsSuccess_16 = (MR_Integer) 1;
#line 405 "make.m"
          make__STATE_VARIABLE_Info_27_27 = make__STATE_VARIABLE_Info_0_22;
#line 405 "make.m"
        }
#line 407 "make.m"
        break;
#line 407 "make.m"
      case (MR_Integer) 1:
#line 409 "make.m"
        {
#line 409 "make.m"
          make__make_track_flags_files_7_p_0(make__Globals_8, make__ModuleName_13, &make__TrackFlagsSuccess_16, make__STATE_VARIABLE_Info_0_22, &make__STATE_VARIABLE_Info_27_27);
        }
#line 407 "make.m"
        break;
#line 407 "make.m"
    }
#line 429 "make.m"
#line 429 "make.m"
    switch (make__TrackFlagsSuccess_16) {
#line 429 "make.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 429 "make.m"
      case (MR_Integer) 0:
#line 430 "make.m"
        {
#line 431 "make.m"
          *make__Success_10 = (MR_Integer) 0;
#line 430 "make.m"
          *make__STATE_VARIABLE_Info_23 = make__STATE_VARIABLE_Info_27_27;
#line 430 "make.m"
        }
#line 429 "make.m"
        break;
#line 429 "make.m"
      case (MR_Integer) 1:
#line 419 "make.m"
#line 419 "make.m"
        switch (MR_tag((MR_Word) make__TargetType_14)) {
#line 419 "make.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 419 "make.m"
          case (MR_Integer) 0:
#line 415 "make.m"
            {
#line 415 "make.m"
              MR_Word make__ModuleTargetType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetType_14, (MR_Integer) 0)));
#line 415 "make.m"
              MR_Word make__TargetFile_18;
#line 415 "make.m"
              MR_Word make__V_34_34;

#line 416 "make.m"
              {
#line 416 "make.m"
                make__TargetFile_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "make.m"
                MR_hl_field(MR_mktag(0), make__TargetFile_18, 0) = ((MR_Box) (make__ModuleName_13));
#line 416 "make.m"
                MR_hl_field(MR_mktag(0), make__TargetFile_18, 1) = ((MR_Box) (make__ModuleTargetType_17));
#line 416 "make.m"
              }
#line 417 "make.m"
              {
#line 417 "make.m"
                make__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 417 "make.m"
                MR_hl_field(MR_mktag(0), make__V_34_34, 0) = ((MR_Box) (make__TargetFile_18));
#line 417 "make.m"
              }
#line 417 "make.m"
              {
#line 417 "make.m"
                make__module_target__make_module_target_7_p_0(make__Globals_8, make__V_34_34, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 417 "make.m"
                return;
              }
#line 415 "make.m"
            }
#line 419 "make.m"
            break;
#line 419 "make.m"
          case (MR_Integer) 1:
#line 420 "make.m"
            {
#line 420 "make.m"
              MR_Word make__ProgramTargetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetType_14, (MR_Integer) 0)));
#line 420 "make.m"
              MR_Word make__LinkedTargetFile_20;

#line 421 "make.m"
              {
#line 421 "make.m"
                make__LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "make.m"
                MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 0) = ((MR_Box) (make__ModuleName_13));
#line 421 "make.m"
                MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 1) = ((MR_Box) (make__ProgramTargetType_19));
#line 421 "make.m"
              }
#line 423 "make.m"
              {
#line 423 "make.m"
                make__program_target__make_linked_target_7_p_0(make__Globals_8, make__LinkedTargetFile_20, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 423 "make.m"
                return;
              }
#line 420 "make.m"
            }
#line 419 "make.m"
            break;
#line 419 "make.m"
          case (MR_Integer) 2:
#line 425 "make.m"
            {
#line 425 "make.m"
              MR_Word make__MiscTargetType_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__TargetType_14, (MR_Integer) 0)));
#line 425 "make.m"
              MR_Word make__V_29_29;

#line 426 "make.m"
              {
#line 426 "make.m"
                make__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "make.m"
                MR_hl_field(MR_mktag(0), make__V_29_29, 0) = ((MR_Box) (make__ModuleName_13));
#line 426 "make.m"
                MR_hl_field(MR_mktag(0), make__V_29_29, 1) = ((MR_Box) (make__MiscTargetType_21));
#line 426 "make.m"
              }
#line 426 "make.m"
              {
#line 426 "make.m"
                make__program_target__make_misc_target_7_p_0(make__Globals_8, make__V_29_29, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 426 "make.m"
                return;
              }
#line 425 "make.m"
            }
#line 419 "make.m"
            break;
#line 419 "make.m"
        }
#line 429 "make.m"
        break;
#line 429 "make.m"
    }
#line 401 "make.m"
  }
#line 398 "make.m"
}

#line 46 "make.m"
MR_String MR_CALL 
make__make_module_dep_file_extension_0_f_0(void)
#line 46 "make.m"
{
#line 283 "make.m"
  {
#line 283 "make.m"
    MR_bool make__succeeded;

#line 283 "make.m"
    return (MR_String) ".module_dep";
#line 283 "make.m"
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
#line 281 "make.m"
  {
#line 281 "make.m"
    MR_bool make__succeeded;

#line 281 "make.m"
    {
#line 281 "make.m"
      make__module_dep_file__write_module_dep_file_4_p_0(make__Globals_5, make__Imports_6);
#line 281 "make.m"
      return;
    }
#line 281 "make.m"
  }
#line 43 "make.m"
}

#line 325 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_8(
#line 325 "make.m"
  MR_Box make__closure_arg,
#line 325 "make.m"
  MR_Box make__wrapper_arg_1,
#line 325 "make.m"
  MR_Box make__wrapper_arg_2,
#line 325 "make.m"
  MR_Box * make__wrapper_arg_3)
#line 325 "make.m"
{
#line 325 "make.m"
  {
#line 325 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 325 "make.m"
    {
#line 325 "make.m"
      make__IntroducedFrom__pred__make_process_args__325__1_3_p_0(((MR_String) make__wrapper_arg_1));
#line 325 "make.m"
      return;
    }
#line 325 "make.m"
  }
#line 325 "make.m"
}

#line 387 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_7(
#line 387 "make.m"
  MR_Box make__closure_arg,
#line 387 "make.m"
  MR_Box make__wrapper_arg_1,
#line 387 "make.m"
  MR_Box make__wrapper_arg_2,
#line 387 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 387 "make.m"
  MR_Box make__wrapper_arg_4,
#line 387 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 387 "make.m"
  MR_Box make__wrapper_arg_6,
#line 387 "make.m"
  MR_Box * make__wrapper_arg_7)
#line 387 "make.m"
{
#line 387 "make.m"
  {
#line 387 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 387 "make.m"
    MR_Word make__conv5_Success_10;
#line 387 "make.m"
    MR_Word make__conv4_STATE_VARIABLE_Info_23;

#line 387 "make.m"
    {
#line 387 "make.m"
      make__make_target_7_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv5_Success_10, ((MR_Word) make__wrapper_arg_4), &make__conv4_STATE_VARIABLE_Info_23);
    }
#line 387 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv5_Success_10));
#line 387 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv4_STATE_VARIABLE_Info_23));
#line 387 "make.m"
  }
#line 387 "make.m"
}

#line 355 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_6(
#line 355 "make.m"
  MR_Box make__closure_arg,
#line 355 "make.m"
  MR_Box make__wrapper_arg_1,
#line 355 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 355 "make.m"
{
#line 355 "make.m"
  {
#line 355 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 355 "make.m"
    MR_Word make__conv3_HeadVar__3_3;

#line 355 "make.m"
    {
#line 355 "make.m"
      make__classify_target_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) make__wrapper_arg_1), &make__conv3_HeadVar__3_3);
    }
#line 355 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv3_HeadVar__3_3));
#line 355 "make.m"
  }
#line 355 "make.m"
}

#line 349 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_5(
#line 349 "make.m"
  MR_Box make__closure_arg,
#line 349 "make.m"
  MR_Box make__wrapper_arg_1)
#line 349 "make.m"
{
#line 349 "make.m"
  {
#line 349 "make.m"
    MR_bool make__succeeded;
#line 349 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 349 "make.m"
    {
#line 349 "make.m"
      return make__succeeded = make__IntroducedFrom__pred__make_process_args__351__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 349 "make.m"
    return make__succeeded;
#line 349 "make.m"
  }
#line 349 "make.m"
}

#line 344 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_4(
#line 344 "make.m"
  MR_Box make__closure_arg,
#line 344 "make.m"
  MR_Box make__wrapper_arg_1,
#line 344 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 344 "make.m"
{
#line 344 "make.m"
  {
#line 344 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 344 "make.m"
    MR_Integer make__conv2_HeadVar__2_2;

#line 344 "make.m"
    {
#line 344 "make.m"
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv2_HeadVar__2_2);
    }
#line 344 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv2_HeadVar__2_2));
#line 344 "make.m"
  }
#line 344 "make.m"
}

#line 342 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_3(
#line 342 "make.m"
  MR_Box make__closure_arg,
#line 342 "make.m"
  MR_Box make__wrapper_arg_1,
#line 342 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 342 "make.m"
{
#line 342 "make.m"
  {
#line 342 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 342 "make.m"
    MR_Integer make__conv1_HeadVar__2_2;

#line 342 "make.m"
    {
#line 342 "make.m"
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv1_HeadVar__2_2);
    }
#line 342 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv1_HeadVar__2_2));
#line 342 "make.m"
  }
#line 342 "make.m"
}

#line 339 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_2(
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
    MR_Integer make__conv0_HeadVar__2_2;

#line 339 "make.m"
    {
#line 339 "make.m"
      make__util__module_name_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv0_HeadVar__2_2);
    }
#line 339 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv0_HeadVar__2_2));
#line 339 "make.m"
  }
#line 339 "make.m"
}

#line 315 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_1(
#line 315 "make.m"
  MR_Box make__closure_arg,
#line 315 "make.m"
  MR_Box make__wrapper_arg_1)
#line 315 "make.m"
{
#line 315 "make.m"
  {
#line 315 "make.m"
    MR_bool make__succeeded;
#line 315 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 315 "make.m"
    {
#line 315 "make.m"
      return make__succeeded = make__IntroducedFrom__pred__make_process_args__315__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 315 "make.m"
    return make__succeeded;
#line 315 "make.m"
  }
#line 315 "make.m"
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
#line 286 "make.m"
  {
#line 286 "make.m"
    MR_bool make__succeeded;
#line 286 "make.m"
    MR_Word make__TypeCtorInfo_94_94;
#line 286 "make.m"
    MR_Word make__Targets_15;
#line 286 "make.m"
    MR_Word make__Continue0_18;
#line 286 "make.m"
    MR_Word make__AbsTargets_22;

#line 306 "make.m"
    if ((make__Targets0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "make.m"
      {
#line 288 "make.m"
        MR_Word make__MaybeMAIN_TARGET_14;

#line 289 "make.m"
        {
#line 289 "make.m"
          make__options_file__lookup_main_target_5_p_0(make__Globals_8, make__Variables_10, &make__MaybeMAIN_TARGET_14);
        }
#line 301 "make.m"
        if ((make__MaybeMAIN_TARGET_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "make.m"
          {
#line 303 "make.m"
            make__Targets_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "make.m"
            make__Continue0_18 = (MR_Integer) 0;
#line 302 "make.m"
          }
#line 301 "make.m"
        else
#line 291 "make.m"
          {
#line 291 "make.m"
            make__Targets_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__MaybeMAIN_TARGET_14, (MR_Integer) 0)));
#line 295 "make.m"
            if ((make__Targets_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "make.m"
              {
#line 297 "make.m"
                make__Continue0_18 = (MR_Integer) 0;
#line 298 "make.m"
                {
#line 298 "make.m"
                  mercury__io__write_string_3_p_0((MR_String) "** Error: no targets specified and \140MAIN_TARGET\' not defined.\n");
                }
#line 296 "make.m"
              }
#line 295 "make.m"
            else
#line 294 "make.m"
              make__Continue0_18 = (MR_Integer) 1;
#line 291 "make.m"
          }
#line 288 "make.m"
      }
#line 306 "make.m"
    else
#line 307 "make.m"
      {
#line 308 "make.m"
        make__Continue0_18 = (MR_Integer) 1;
#line 309 "make.m"
        make__Targets_15 = make__Targets0_12;
#line 307 "make.m"
      }
#line 12227 "make.c"
    make__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 315 "make.m"
    {
#line 315 "make.m"
      mercury__list__filter_3_p_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[10], make__Targets_15, &make__AbsTargets_22);
    }
#line 12234 "make.c"
    if ((make__AbsTargets_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "make.m"
#line 334 "make.m"
      switch (make__Continue0_18) {
#line 334 "make.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 334 "make.m"
        case (MR_Integer) 0:
#line 332 "make.m"
          {
#line 333 "make.m"
            {
#line 333 "make.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 333 "make.m"
              return;
            }
#line 332 "make.m"
          }
#line 334 "make.m"
          break;
#line 334 "make.m"
        case (MR_Integer) 1:
#line 335 "make.m"
          {
#line 335 "make.m"
            MR_Word make__TypeCtorInfo_96_96;
#line 335 "make.m"
            MR_Word make__TypeCtorInfo_100_100;
#line 335 "make.m"
            MR_Word make__TypeInfo_109_109;
#line 335 "make.m"
            MR_Word make__KeepGoing_27;
#line 335 "make.m"
            MR_Word make__ModuleIndexMap_28;
#line 335 "make.m"
            MR_Word make__DepIndexMap_29;
#line 335 "make.m"
            MR_Word make__DepStatusMap_30;
#line 335 "make.m"
            MR_Word make__NonDependTargets_31;
#line 335 "make.m"
            MR_Word make__ClassifiedTargets_32;
#line 335 "make.m"
            MR_Integer make__AnalysisRepeat_34;
#line 335 "make.m"
            MR_Word make__MakeInfo0_35;
#line 335 "make.m"
            MR_Word make__Success_36;
#line 335 "make.m"
            MR_Word make__V_58_58;
#line 335 "make.m"
            MR_Box make__V_60_60;
#line 335 "make.m"
            MR_Word make__V_62_62;
#line 335 "make.m"
            MR_Box make__V_64_64;
#line 335 "make.m"
            MR_Word make__V_70_70;
#line 335 "make.m"
            MR_Word make__V_72_72;
#line 335 "make.m"
            MR_Word make__V_73_73;
#line 335 "make.m"
            MR_Word make__V_74_74;
#line 335 "make.m"
            MR_Word make__V_75_75;
#line 335 "make.m"
            MR_Word make__V_76_76;
#line 335 "make.m"
            MR_Word make__V_77_77;
#line 335 "make.m"
            MR_Word make__V_78_78;
#line 335 "make.m"
            MR_Word make__V_79_79;
#line 335 "make.m"
            MR_Word make__V_81_81;
#line 387 "make.m"
            MR_Word make___MakeInfo_37;
#line 387 "make.m"
            MR_Box make__conv7__MakeInfo_37;
#line 387 "make.m"
            MR_Box make__conv6_STATE_VARIABLE_IO_84_84;

#line 336 "make.m"
            {
#line 336 "make.m"
              libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 625, &make__KeepGoing_27);
            }
#line 12324 "make.c"
            make__TypeCtorInfo_96_96 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 339 "make.m"
            {
#line 339 "make.m"
              make__V_58_58 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make_scalar_common_1[11]);
            }
#line 340 "make.m"
            {
#line 340 "make.m"
              make__V_60_60 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_96_96);
            }
#line 338 "make.m"
            {
#line 338 "make.m"
              make__ModuleIndexMap_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 338 "make.m"
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 0) = ((MR_Box) (make__V_58_58));
#line 338 "make.m"
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 1) = ((MR_Box) (make__V_60_60));
#line 338 "make.m"
              MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 2) = ((MR_Box) ((MR_Integer) 0));
#line 338 "make.m"
            }
#line 12348 "make.c"
            make__TypeCtorInfo_100_100 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 342 "make.m"
            {
#line 342 "make.m"
              make__V_62_62 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, (MR_Word) &make_scalar_common_1[12]);
            }
#line 343 "make.m"
            {
#line 343 "make.m"
              make__V_64_64 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_100_100);
            }
#line 341 "make.m"
            {
#line 341 "make.m"
              make__DepIndexMap_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 341 "make.m"
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 0) = ((MR_Box) (make__V_62_62));
#line 341 "make.m"
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 1) = ((MR_Box) (make__V_64_64));
#line 341 "make.m"
              MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 341 "make.m"
            }
#line 344 "make.m"
            {
#line 344 "make.m"
              make__DepStatusMap_30 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__make__type_ctor_info_dependency_status_0, (MR_Word) &make_scalar_common_1[13]);
            }
#line 349 "make.m"
            {
#line 349 "make.m"
              make__NonDependTargets_31 = mercury__list__filter_2_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[14], make__Targets_15);
            }
#line 355 "make.m"
            {
#line 355 "make.m"
              make__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 355 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 0) = ((MR_Box) (&make_scalar_common_5[0]));
#line 355 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 1) = ((MR_Box) (make__make_process_args_7_p_0_6));
#line 355 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 355 "make.m"
              MR_hl_field(MR_mktag(0), make__V_70_70, 3) = ((MR_Box) (make__Globals_8));
#line 355 "make.m"
            }
#line 12396 "make.c"
            make__TypeInfo_109_109 = (MR_Word) &make_scalar_common_1[0];
#line 355 "make.m"
            {
#line 355 "make.m"
              mercury__list__map_3_p_0(make__TypeCtorInfo_94_94, make__TypeInfo_109_109, make__V_70_70, make__NonDependTargets_31, &make__ClassifiedTargets_32);
            }
#line 359 "make.m"
            {
#line 359 "make.m"
              libs__globals__lookup_int_option_3_p_0(make__Globals_8, (MR_Integer) 335, &make__AnalysisRepeat_34);
            }
#line 362 "make.m"
            {
#line 362 "make.m"
              make__V_72_72 = mercury__map__init_0_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make_scalar_common_2[0]);
            }
#line 363 "make.m"
            {
#line 363 "make.m"
              make__V_73_73 = mercury__map__init_0_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[1]);
            }
#line 364 "make.m"
            {
#line 364 "make.m"
              make__V_74_74 = mercury__map__init_0_f_0((MR_Word) &make_scalar_common_1[2], make__TypeCtorInfo_94_94);
            }
#line 371 "make.m"
            {
#line 371 "make.m"
              make__V_75_75 = make__dependencies__init_cached_direct_imports_0_f_0();
            }
#line 372 "make.m"
            {
#line 372 "make.m"
              make__V_76_76 = make__dependencies__init_cached_direct_imports_0_f_0();
            }
#line 373 "make.m"
            {
#line 373 "make.m"
              make__V_77_77 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
            }
#line 374 "make.m"
            {
#line 374 "make.m"
              make__V_78_78 = make__dependencies__init_cached_foreign_imports_0_f_0();
            }
#line 377 "make.m"
            {
#line 377 "make.m"
              make__V_79_79 = mercury__set__init_0_f_0(make__TypeCtorInfo_96_96);
            }
#line 379 "make.m"
            {
#line 379 "make.m"
              make__V_81_81 = mercury__set__list_to_set_1_f_0(make__TypeInfo_109_109, make__ClassifiedTargets_32);
            }
#line 361 "make.m"
            {
#line 361 "make.m"
              make__MakeInfo0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 0) = ((MR_Box) (make__V_72_72));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 1) = ((MR_Box) (make__V_73_73));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 2) = ((MR_Box) (make__V_74_74));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 3) = ((MR_Box) (make__DetectedGradeFlags_9));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 4) = ((MR_Box) (make__OptionArgs_11));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 5) = ((MR_Box) (make__Variables_10));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 6) = ((MR_Box) (make__ModuleIndexMap_28));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 7) = ((MR_Box) (make__DepIndexMap_29));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 8) = ((MR_Box) (make__DepStatusMap_30));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 9) = ((MR_Box) (make__V_75_75));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 10) = ((MR_Box) (make__V_76_76));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 11) = ((MR_Box) (make__V_77_77));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 12) = ((MR_Box) (make__V_78_78));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 13) = ((MR_Box) ((MR_Integer) 0));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 14) = ((MR_Box) (make__KeepGoing_27));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 15) = ((MR_Box) (make__V_79_79));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 17) = ((MR_Box) (make__V_81_81));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 18) = ((MR_Box) (make__AnalysisRepeat_34));
#line 361 "make.m"
              MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 19) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "make.m"
            }
#line 387 "make.m"
            {
#line 387 "make.m"
              make__util__foldl2_maybe_stop_at_error_9_p_0(make__TypeInfo_109_109, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__KeepGoing_27, (MR_Word) &make_scalar_common_1[15], make__Globals_8, make__ClassifiedTargets_32, &make__Success_36, ((MR_Box) (make__MakeInfo0_35)), &make__conv7__MakeInfo_37, ((MR_Box) ((MR_Integer) 0)), &make__conv6_STATE_VARIABLE_IO_84_84);
            }
#line 387 "make.m"
            make___MakeInfo_37 = ((MR_Word) make__conv7__MakeInfo_37);
#line 393 "make.m"
#line 393 "make.m"
            switch (make__Success_36) {
#line 393 "make.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 393 "make.m"
              case (MR_Integer) 0:
#line 391 "make.m"
                {
#line 392 "make.m"
                  {
#line 392 "make.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 392 "make.m"
                    return;
                  }
#line 391 "make.m"
                }
#line 393 "make.m"
                break;
#line 393 "make.m"
              case (MR_Integer) 1:
#line 394 "make.m"
                {
#line 394 "make.m"
                }
#line 393 "make.m"
                break;
#line 393 "make.m"
            }
#line 335 "make.m"
          }
#line 334 "make.m"
          break;
#line 334 "make.m"
      }
#line 12542 "make.c"
    else
#line 12544 "make.c"
      {
#line 325 "make.m"
        MR_Box make__conv8_STATE_VARIABLE_IO_49_124;

#line 325 "make.m"
        {
#line 325 "make.m"
          mercury__list__foldl_4_p_2(make__TypeCtorInfo_94_94, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make_scalar_common_1[16], make__AbsTargets_22, ((MR_Box) ((MR_Integer) 0)), &make__conv8_STATE_VARIABLE_IO_49_124);
        }
#line 333 "make.m"
        {
#line 333 "make.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 333 "make.m"
          return;
        }
#line 12561 "make.c"
      }
#line 286 "make.m"
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
