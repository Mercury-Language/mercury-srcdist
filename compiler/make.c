/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "tree_bitset.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 452 "make.m"
struct make__classify_target_2_4_p_0_env_0_s {
#line 452 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__Globals_5;
#line 452 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 452 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix_7;
#line 452 "make.m"
  MR_Word * make__classify_target_2_4_p_0_env_0__HeadVar__4_4;
#line 452 "make.m"
  MR_Cont make__classify_target_2_4_p_0_env_0__cont;
#line 452 "make.m"
  void * make__classify_target_2_4_p_0_env_0__cont_env_ptr;
#line 455 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__succeeded;
#line 455 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleName_8;
#line 455 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__TargetType_9;
#line 455 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr_11;
#line 465 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_10;
#line 465 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_0;
#line 516 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_47;
#line 516 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_1;
#line 504 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix1_16;
#line 498 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15;
#line 498 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_30_30;
#line 498 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_31_31;
#line 498 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_60_60;
#line 503 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_61_61;
#line 452 "make.m"
};

#line 436 "make.m"
struct make__classify_target_3_p_0_2_env_0_s {
#line 436 "make.m"
  MR_Box * make__classify_target_3_p_0_2_env_0__wrapper_arg_1;
#line 436 "make.m"
  MR_Cont make__classify_target_3_p_0_2_env_0__cont;
#line 436 "make.m"
  void * make__classify_target_3_p_0_2_env_0__cont_env_ptr;
#line 436 "make.m"
  MR_Word make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4;
#line 436 "make.m"
};


#line 215 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0;

#line 218 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0;

#line 221 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 224 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0;

#line 227 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1;

#line 230 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2];

#line 233 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2];

#line 236 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2];

#line 239 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1];

#line 242 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_0;

#line 245 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1];

#line 248 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_1;

#line 251 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2];

#line 254 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_2;

#line 257 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2];

#line 260 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_compilation_task_type_0_3;

#line 263 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1];

#line 266 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1];

#line 269 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1];

#line 272 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1];

#line 275 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_compilation_task_type_0[4];

#line 278 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4];

#line 281 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4];

#line 284 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0;

#line 287 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0;

#line 290 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3];

#line 293 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3];

#line 296 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_dependency_file_index_map_0_0;

#line 299 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1];

#line 302 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1];

#line 305 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1];

#line 308 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1];

#line 311 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0;

#line 314 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1;

#line 317 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2;

#line 320 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3;

#line 323 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4];

#line 326 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4];

#line 329 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4];

#line 332 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 335 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

#line 338 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0;

#line 341 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2];

#line 344 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2];

#line 347 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_last_hash_0_0;

#line 350 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1];

#line 353 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1];

#line 356 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1];

#line 359 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1];

#line 362 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2];

#line 365 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2];

#line 368 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_linked_target_file_0_0;

#line 371 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1];

#line 374 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1];

#line 377 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1];

#line 380 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1];

#line 383 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1];

#line 386 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_0;

#line 389 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1];

#line 392 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_1;

#line 395 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1];

#line 398 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_error_0_2;

#line 401 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1];

#line 404 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1];

#line 407 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1];

#line 410 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_error_0[3];

#line 413 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3];

#line 416 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3];

#line 419 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 422 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 425 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 428 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

#line 431 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

#line 434 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0;

#line 437 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 440 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 443 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

#line 446 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 449 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 452 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 455 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0;

#line 458 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0;

#line 461 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[19];

#line 464 "make.c"
static const MR_ConstString make__make__field_names_make_info_0_0[19];

#line 467 "make.c"
static const MR_DuArgLocn make__make__field_locns_make_info_0_0[19];

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
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0;

#line 560 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

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

#line 348 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__348__1_1_p_0(
#line 348 "make.m"
  MR_String make__HeadVar__1_66);

#line 322 "make.m"
static void MR_CALL 
make__IntroducedFrom__pred__make_process_args__322__1_3_p_0(
#line 322 "make.m"
  MR_String make__HeadVar__1_50);

#line 312 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__312__1_1_p_0(
#line 312 "make.m"
  MR_String make__HeadVar__1_44);

#line 677 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 677 "make.m"
  MR_Box make__closure_arg,
#line 677 "make.m"
  MR_Box make__wrapper_arg_1);

#line 607 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 607 "make.m"
  MR_Box make__closure_arg,
#line 607 "make.m"
  MR_Box make__wrapper_arg_1,
#line 607 "make.m"
  MR_Box make__wrapper_arg_2,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 607 "make.m"
  MR_Box make__wrapper_arg_4,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 607 "make.m"
  MR_Box make__wrapper_arg_6,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 607 "make.m"
  MR_Box make__wrapper_arg_8,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_9);

#line 457 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 457 "make.m"
  void * make__env_ptr_arg);

#line 463 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 463 "make.m"
  void * make__env_ptr_arg);

#line 455 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 455 "make.m"
  void * make__env_ptr_arg);

#line 506 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 506 "make.m"
  void * make__env_ptr_arg);

#line 504 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 504 "make.m"
  void * make__env_ptr_arg);

#line 514 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 514 "make.m"
  void * make__env_ptr_arg);

#line 498 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 498 "make.m"
  void * make__env_ptr_arg);

#line 503 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 503 "make.m"
  void * make__env_ptr_arg);

#line 436 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 436 "make.m"
  void * make__env_ptr_arg);

#line 436 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 436 "make.m"
  MR_Box make__closure_arg,
#line 436 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 436 "make.m"
  MR_Cont make__cont,
#line 436 "make.m"
  void * make__cont_env_ptr);

#line 322 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_8(
#line 322 "make.m"
  MR_Box make__closure_arg,
#line 322 "make.m"
  MR_Box make__wrapper_arg_1,
#line 322 "make.m"
  MR_Box make__wrapper_arg_2,
#line 322 "make.m"
  MR_Box * make__wrapper_arg_3);

#line 374 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_7(
#line 374 "make.m"
  MR_Box make__closure_arg,
#line 374 "make.m"
  MR_Box make__wrapper_arg_1,
#line 374 "make.m"
  MR_Box make__wrapper_arg_2,
#line 374 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 374 "make.m"
  MR_Box make__wrapper_arg_4,
#line 374 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 374 "make.m"
  MR_Box make__wrapper_arg_6,
#line 374 "make.m"
  MR_Box * make__wrapper_arg_7);

#line 352 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_6(
#line 352 "make.m"
  MR_Box make__closure_arg,
#line 352 "make.m"
  MR_Box make__wrapper_arg_1,
#line 352 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 346 "make.m"
static MR_bool MR_CALL 
make__make_process_args_6_p_0_5(
#line 346 "make.m"
  MR_Box make__closure_arg,
#line 346 "make.m"
  MR_Box make__wrapper_arg_1);

#line 341 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_4(
#line 341 "make.m"
  MR_Box make__closure_arg,
#line 341 "make.m"
  MR_Box make__wrapper_arg_1,
#line 341 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 339 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_3(
#line 339 "make.m"
  MR_Box make__closure_arg,
#line 339 "make.m"
  MR_Box make__wrapper_arg_1,
#line 339 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 336 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_2(
#line 336 "make.m"
  MR_Box make__closure_arg,
#line 336 "make.m"
  MR_Box make__wrapper_arg_1,
#line 336 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 312 "make.m"
static MR_bool MR_CALL 
make__make_process_args_6_p_0_1(
#line 312 "make.m"
  MR_Box make__closure_arg,
#line 312 "make.m"
  MR_Box make__wrapper_arg_1);


static /* final */ const MR_Box make_scalar_common_1[18][3];

static /* final */ const MR_Box make_scalar_common_2[10][2];

static /* final */ const MR_Box make_scalar_common_3[1][4];

static /* final */ const MR_Box make_scalar_common_4[3][5];

static /* final */ const MR_Box make_scalar_common_5[2][6];

static /* final */ const MR_Box make_scalar_common_6[1][10];

static /* final */ const MR_Box make_scalar_common_7[1][7];

static /* final */ const MR_Box make_scalar_common_8[11][1];

static /* final */ const MR_Box make_scalar_common_9[1][12];




static /* final */ const MR_Box make_scalar_common_1[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_args_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make_scalar_common_4[0])),
    ((MR_Box) (make__make_process_args_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_args_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make_scalar_common_4[1])),
    ((MR_Box) (make__make_process_args_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make_scalar_common_3[0])),
    ((MR_Box) (make__make_process_args_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make_scalar_common_6[0])),
    ((MR_Box) (make__make_process_args_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make_scalar_common_5[1])),
    ((MR_Box) (make__make_process_args_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make_scalar_common_9[0])),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0))
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
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0)),
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
    ((MR_Box) (&make__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0))
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

static /* final */ const MR_Box make_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_last_hash_0)),
    ((MR_Box) (&make__make__type_ctor_info_last_hash_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1617 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 1626 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 1634 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1643 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  (MR_Integer) 0
};

#line 1649 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  (MR_Integer) 1
};

#line 1655 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1661 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1667 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1673 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_c_header_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____c_header_type_0_0_10001)),
  ((MR_Box) (make____Compare____c_header_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "c_header_type",
  {
    make__make__enum_name_ordered_c_header_type_0
  },
  {
    make__make__enum_value_ordered_c_header_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__make__functor_number_map_c_header_type_0
};

#line 1694 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_compilation_task_type_0
};

#line 1699 "make.c"
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

#line 1714 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 1719 "make.c"
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

#line 1734 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 1740 "make.c"
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

#line 1755 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1761 "make.c"
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

#line 1776 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_0
};

#line 1781 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1786 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_2
};

#line 1791 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_3
};

#line 1796 "make.c"
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

#line 1820 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4] = {
  &make__make__du_functor_desc_compilation_task_type_0_3,
  &make__make__du_functor_desc_compilation_task_type_0_2,
  &make__make__du_functor_desc_compilation_task_type_0_0,
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1828 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1836 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_compilation_task_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____compilation_task_type_0_0_10001)),
  ((MR_Box) (make____Compare____compilation_task_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "compilation_task_type",
  {
    make__make__du_name_ordered_compilation_task_type_0
  },
  {
    make__make__du_ptag_ordered_compilation_task_type_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  make__make__functor_number_map_compilation_task_type_0
};

#line 1857 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 1866 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

#line 1874 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1881 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

#line 1888 "make.c"
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

#line 1903 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1908 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_dependency_file_index_map_0_0
  }
};

#line 1917 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1922 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1] = {
  (MR_Integer) 0
};

#line 1927 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_dependency_file_index_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____dependency_file_index_map_0_0_10001)),
  ((MR_Box) (make____Compare____dependency_file_index_map_0_0_10001)),
  (MR_String) "make",
  (MR_String) "dependency_file_index_map",
  {
    make__make__du_name_ordered_dependency_file_index_map_0
  },
  {
    make__make__du_ptag_ordered_dependency_file_index_map_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_dependency_file_index_map_0
};

#line 1948 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  (MR_Integer) 0
};

#line 1954 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  (MR_Integer) 1
};

#line 1960 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  (MR_Integer) 2
};

#line 1966 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  (MR_Integer) 3
};

#line 1972 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_2,
  &make__make__enum_functor_desc_dependency_status_0_3
};

#line 1980 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_3,
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_2
};

#line 1988 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1996 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_dependency_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____dependency_status_0_0_10001)),
  ((MR_Box) (make____Compare____dependency_status_0_0_10001)),
  (MR_String) "make",
  (MR_String) "dependency_status",
  {
    make__make__enum_name_ordered_dependency_status_0
  },
  {
    make__make__enum_value_ordered_dependency_status_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  make__make__functor_number_map_dependency_status_0
};

#line 2017 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2026 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

#line 2035 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_file_timestamps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make____Unify____file_timestamps_0_0_10001)),
  ((MR_Box) (make____Compare____file_timestamps_0_0_10001)),
  (MR_String) "make",
  (MR_String) "file_timestamps",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2056 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2064 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2070 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

#line 2076 "make.c"
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

#line 2091 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2096 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_last_hash_0_0
  }
};

#line 2105 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2110 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1] = {
  (MR_Integer) 0
};

#line 2115 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_last_hash_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____last_hash_0_0_10001)),
  ((MR_Box) (make____Compare____last_hash_0_0_10001)),
  (MR_String) "make",
  (MR_String) "last_hash",
  {
    make__make__du_name_ordered_last_hash_0
  },
  {
    make__make__du_ptag_ordered_last_hash_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_last_hash_0
};

#line 2136 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 2142 "make.c"
static const MR_ConstString make__make__field_names_linked_target_file_0_0[2] = {
  (MR_String) "linked_tf_name",
  (MR_String) "linked_tf_type"
};

#line 2148 "make.c"
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

#line 2163 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_linked_target_file_0_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2168 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_linked_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_linked_target_file_0_0
  }
};

#line 2177 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_linked_target_file_0[1] = {
  &make__make__du_functor_desc_linked_target_file_0_0
};

#line 2182 "make.c"
static const MR_Integer make__make__functor_number_map_linked_target_file_0[1] = {
  (MR_Integer) 0
};

#line 2187 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_linked_target_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____linked_target_file_0_0_10001)),
  ((MR_Box) (make____Compare____linked_target_file_0_0_10001)),
  (MR_String) "make",
  (MR_String) "linked_target_file",
  {
    make__make__du_name_ordered_linked_target_file_0
  },
  {
    make__make__du_ptag_ordered_linked_target_file_0
  },
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
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
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
  {
    make__make__du_name_ordered_make_error_0
  },
  {
    make__make__du_ptag_ordered_make_error_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__make__functor_number_map_make_error_0
};

#line 2337 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2345 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2354 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2363 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2372 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

#line 2381 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

#line 2390 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2398 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2407 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2416 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2424 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2432 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 2441 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0
  }
};

#line 2449 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__util__make__util__type_ctor_info_job_ctl_0
  }
};

#line 2457 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[19] = {
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0,
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
  (MR_PseudoTypeInfo) &make__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0
};

#line 2480 "make.c"
static const MR_ConstString make__make__field_names_make_info_0_0[19] = {
  (MR_String) "module_dependencies",
  (MR_String) "file_timestamps",
  (MR_String) "search_file_name_cache",
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

#line 2503 "make.c"
static const MR_DuArgLocn make__make__field_locns_make_info_0_0[19] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
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
  }
};

#line 2602 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0 = {
  (MR_String) "make_info",
  (MR_Integer) 19,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__make__field_types_make_info_0_0,
  make__make__field_names_make_info_0_0,
  make__make__field_locns_make_info_0_0,
  NULL
};

#line 2617 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2622 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_info_0_0
  }
};

#line 2631 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2636 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1] = {
  (MR_Integer) 0
};

#line 2641 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_make_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____make_info_0_0_10001)),
  ((MR_Box) (make____Compare____make_info_0_0_10001)),
  (MR_String) "make",
  (MR_String) "make_info",
  {
    make__make__du_name_ordered_make_info_0
  },
  {
    make__make__du_ptag_ordered_make_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_make_info_0
};

#line 2662 "make.c"
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

#line 2677 "make.c"
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

#line 2692 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 2697 "make.c"
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

#line 2712 "make.c"
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

#line 2727 "make.c"
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

#line 2742 "make.c"
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

#line 2757 "make.c"
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

#line 2772 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6] = {
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_1,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_6
};

#line 2782 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1] = {
  &make__make__du_functor_desc_misc_target_type_0_2
};

#line 2787 "make.c"
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

#line 2801 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7] = {
  &make__make__du_functor_desc_misc_target_type_0_2,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_6,
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_1
};

#line 2812 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 2823 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_misc_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____misc_target_type_0_0_10001)),
  ((MR_Box) (make____Compare____misc_target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "misc_target_type",
  {
    make__make__du_name_ordered_misc_target_type_0
  },
  {
    make__make__du_ptag_ordered_misc_target_type_0
  },
  (MR_Integer) 7,
  (MR_Integer) 4,
  make__make__functor_number_map_misc_target_type_0
};

#line 2844 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  (MR_Integer) 0
};

#line 2850 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_short_interface",
  (MR_Integer) 1
};

#line 2856 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_interface",
  (MR_Integer) 2
};

#line 2862 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_private_interface",
  (MR_Integer) 3
};

#line 2868 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_optimization_interface",
  (MR_Integer) 4
};

#line 2874 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  (MR_Integer) 5
};

#line 2880 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  (MR_Integer) 6
};

#line 2886 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  (MR_Integer) 7
};

#line 2892 "make.c"
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

#line 2904 "make.c"
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

#line 2916 "make.c"
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

#line 2928 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_compilation_task_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____module_compilation_task_type_0_0_10001)),
  ((MR_Box) (make____Compare____module_compilation_task_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_compilation_task_type",
  {
    make__make__enum_name_ordered_module_compilation_task_type_0
  },
  {
    make__make__enum_value_ordered_module_compilation_task_type_0
  },
  (MR_Integer) 8,
  (MR_Integer) 4,
  make__make__functor_number_map_module_compilation_task_type_0
};

#line 2949 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2958 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2966 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2973 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

#line 2980 "make.c"
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

#line 2995 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 3000 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_index_map_0_0
  }
};

#line 3009 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 3014 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1] = {
  (MR_Integer) 0
};

#line 3019 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_index_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____module_index_map_0_0_10001)),
  ((MR_Box) (make____Compare____module_index_map_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_index_map",
  {
    make__make__du_name_ordered_module_index_map_0
  },
  {
    make__make__du_ptag_ordered_module_index_map_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_module_index_map_0
};

#line 3040 "make.c"
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

#line 3055 "make.c"
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

#line 3070 "make.c"
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

#line 3085 "make.c"
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

#line 3100 "make.c"
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

#line 3115 "make.c"
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

#line 3130 "make.c"
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

#line 3145 "make.c"
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

#line 3160 "make.c"
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

#line 3175 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_c_header_type_0
};

#line 3180 "make.c"
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

#line 3195 "make.c"
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

#line 3210 "make.c"
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

#line 3225 "make.c"
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

#line 3240 "make.c"
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

#line 3255 "make.c"
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

#line 3270 "make.c"
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

#line 3285 "make.c"
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

#line 3300 "make.c"
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

#line 3315 "make.c"
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

#line 3330 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 3335 "make.c"
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

#line 3350 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_20[1] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3355 "make.c"
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

#line 3370 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_21[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3376 "make.c"
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

#line 3391 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_22[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3397 "make.c"
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

#line 3412 "make.c"
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

#line 3427 "make.c"
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

#line 3450 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1] = {
  &make__make__du_functor_desc_module_target_type_0_9
};

#line 3455 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1] = {
  &make__make__du_functor_desc_module_target_type_0_19
};

#line 3460 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[3] = {
  &make__make__du_functor_desc_module_target_type_0_20,
  &make__make__du_functor_desc_module_target_type_0_21,
  &make__make__du_functor_desc_module_target_type_0_22
};

#line 3467 "make.c"
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

#line 3491 "make.c"
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

#line 3519 "make.c"
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

#line 3547 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_module_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____module_target_type_0_0_10001)),
  ((MR_Box) (make____Compare____module_target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "module_target_type",
  {
    make__make__du_name_ordered_module_target_type_0
  },
  {
    make__make__du_ptag_ordered_module_target_type_0
  },
  (MR_Integer) 24,
  (MR_Integer) 4,
  make__make__functor_number_map_module_target_type_0
};

#line 3568 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  (MR_Integer) 0
};

#line 3574 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  (MR_Integer) 1
};

#line 3580 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_0,
  &make__make__enum_functor_desc_rebuild_module_deps_0_1
};

#line 3586 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_1,
  &make__make__enum_functor_desc_rebuild_module_deps_0_0
};

#line 3592 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3598 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_rebuild_module_deps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make____Unify____rebuild_module_deps_0_0_10001)),
  ((MR_Box) (make____Compare____rebuild_module_deps_0_0_10001)),
  (MR_String) "make",
  (MR_String) "rebuild_module_deps",
  {
    make__make__enum_name_ordered_rebuild_module_deps_0
  },
  {
    make__make__enum_value_ordered_rebuild_module_deps_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__make__functor_number_map_rebuild_module_deps_0
};

#line 3619 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3625 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

#line 3631 "make.c"
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

#line 3646 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3651 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_file_0_0
  }
};

#line 3660 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3665 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1] = {
  (MR_Integer) 0
};

#line 3670 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_target_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____target_file_0_0_10001)),
  ((MR_Box) (make____Compare____target_file_0_0_10001)),
  (MR_String) "make",
  (MR_String) "target_file",
  {
    make__make__du_name_ordered_target_file_0
  },
  {
    make__make__du_ptag_ordered_target_file_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__make__functor_number_map_target_file_0
};

#line 3691 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3696 "make.c"
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

#line 3711 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 3716 "make.c"
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

#line 3731 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_misc_target_type_0
};

#line 3736 "make.c"
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

#line 3751 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1] = {
  &make__make__du_functor_desc_target_type_0_0
};

#line 3756 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1] = {
  &make__make__du_functor_desc_target_type_0_1
};

#line 3761 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1] = {
  &make__make__du_functor_desc_target_type_0_2
};

#line 3766 "make.c"
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

#line 3785 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3] = {
  &make__make__du_functor_desc_target_type_0_1,
  &make__make__du_functor_desc_target_type_0_2,
  &make__make__du_functor_desc_target_type_0_0
};

#line 3792 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3799 "make.c"
const MR_TypeCtorInfo_Struct make__make__type_ctor_info_target_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make____Unify____target_type_0_0_10001)),
  ((MR_Box) (make____Compare____target_type_0_0_10001)),
  (MR_String) "make",
  (MR_String) "target_type",
  {
    make__make__du_name_ordered_target_type_0
  },
  {
    make__make__du_ptag_ordered_target_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__make__functor_number_map_target_type_0
};

#line 3820 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 3823 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3825 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3827 "make.c"
{
#line 3829 "make.c"
  {
#line 3831 "make.c"
    MR_bool make__succeeded;

#line 3834 "make.c"
    {
#line 3836 "make.c"
      make__succeeded = make____Unify____c_header_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3839 "make.c"
    return make__succeeded;
#line 3841 "make.c"
  }
#line 3843 "make.c"
}

#line 3846 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 3849 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3851 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3853 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3855 "make.c"
{
#line 3857 "make.c"
  {
#line 3859 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3862 "make.c"
    {
#line 3864 "make.c"
      make____Compare____c_header_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3867 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3869 "make.c"
  }
#line 3871 "make.c"
}

#line 3874 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 3877 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3879 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3881 "make.c"
{
#line 3883 "make.c"
  {
#line 3885 "make.c"
    MR_bool make__succeeded;

#line 3888 "make.c"
    {
#line 3890 "make.c"
      make__succeeded = make____Unify____compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3893 "make.c"
    return make__succeeded;
#line 3895 "make.c"
  }
#line 3897 "make.c"
}

#line 3900 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 3903 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3905 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3907 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3909 "make.c"
{
#line 3911 "make.c"
  {
#line 3913 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3916 "make.c"
    {
#line 3918 "make.c"
      make____Compare____compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3921 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3923 "make.c"
  }
#line 3925 "make.c"
}

#line 3928 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 3931 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3933 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3935 "make.c"
{
#line 3937 "make.c"
  {
#line 3939 "make.c"
    MR_bool make__succeeded;

#line 3942 "make.c"
    {
#line 3944 "make.c"
      make__succeeded = make____Unify____dependency_file_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3947 "make.c"
    return make__succeeded;
#line 3949 "make.c"
  }
#line 3951 "make.c"
}

#line 3954 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 3957 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3959 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3961 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3963 "make.c"
{
#line 3965 "make.c"
  {
#line 3967 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3970 "make.c"
    {
#line 3972 "make.c"
      make____Compare____dependency_file_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3975 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3977 "make.c"
  }
#line 3979 "make.c"
}

#line 3982 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 3985 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3987 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3989 "make.c"
{
#line 3991 "make.c"
  {
#line 3993 "make.c"
    MR_bool make__succeeded;

#line 3996 "make.c"
    {
#line 3998 "make.c"
      make__succeeded = make____Unify____dependency_status_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4001 "make.c"
    return make__succeeded;
#line 4003 "make.c"
  }
#line 4005 "make.c"
}

#line 4008 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 4011 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4013 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4015 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4017 "make.c"
{
#line 4019 "make.c"
  {
#line 4021 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4024 "make.c"
    {
#line 4026 "make.c"
      make____Compare____dependency_status_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4029 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4031 "make.c"
  }
#line 4033 "make.c"
}

#line 4036 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 4039 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4041 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4043 "make.c"
{
#line 4045 "make.c"
  {
#line 4047 "make.c"
    MR_bool make__succeeded;

#line 4050 "make.c"
    {
#line 4052 "make.c"
      make__succeeded = make____Unify____file_timestamps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4055 "make.c"
    return make__succeeded;
#line 4057 "make.c"
  }
#line 4059 "make.c"
}

#line 4062 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 4065 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4067 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4069 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4071 "make.c"
{
#line 4073 "make.c"
  {
#line 4075 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4078 "make.c"
    {
#line 4080 "make.c"
      make____Compare____file_timestamps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4083 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4085 "make.c"
  }
#line 4087 "make.c"
}

#line 4090 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 4093 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4095 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4097 "make.c"
{
#line 4099 "make.c"
  {
#line 4101 "make.c"
    MR_bool make__succeeded;

#line 4104 "make.c"
    {
#line 4106 "make.c"
      make__succeeded = make____Unify____last_hash_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4109 "make.c"
    return make__succeeded;
#line 4111 "make.c"
  }
#line 4113 "make.c"
}

#line 4116 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 4119 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4121 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4123 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4125 "make.c"
{
#line 4127 "make.c"
  {
#line 4129 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4132 "make.c"
    {
#line 4134 "make.c"
      make____Compare____last_hash_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4137 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4139 "make.c"
  }
#line 4141 "make.c"
}

#line 4144 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 4147 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4149 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4151 "make.c"
{
#line 4153 "make.c"
  {
#line 4155 "make.c"
    MR_bool make__succeeded;

#line 4158 "make.c"
    {
#line 4160 "make.c"
      make__succeeded = make____Unify____linked_target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4163 "make.c"
    return make__succeeded;
#line 4165 "make.c"
  }
#line 4167 "make.c"
}

#line 4170 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 4173 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4175 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4177 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4179 "make.c"
{
#line 4181 "make.c"
  {
#line 4183 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4186 "make.c"
    {
#line 4188 "make.c"
      make____Compare____linked_target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4191 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4193 "make.c"
  }
#line 4195 "make.c"
}

#line 4198 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 4201 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4203 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4205 "make.c"
{
#line 4207 "make.c"
  {
#line 4209 "make.c"
    MR_bool make__succeeded;

#line 4212 "make.c"
    {
#line 4214 "make.c"
      make__succeeded = make____Unify____make_error_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4217 "make.c"
    return make__succeeded;
#line 4219 "make.c"
  }
#line 4221 "make.c"
}

#line 4224 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 4227 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4229 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4231 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4233 "make.c"
{
#line 4235 "make.c"
  {
#line 4237 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4240 "make.c"
    {
#line 4242 "make.c"
      make____Compare____make_error_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4245 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4247 "make.c"
  }
#line 4249 "make.c"
}

#line 4252 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 4255 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4257 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4259 "make.c"
{
#line 4261 "make.c"
  {
#line 4263 "make.c"
    MR_bool make__succeeded;

#line 4266 "make.c"
    {
#line 4268 "make.c"
      make__succeeded = make____Unify____make_info_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4271 "make.c"
    return make__succeeded;
#line 4273 "make.c"
  }
#line 4275 "make.c"
}

#line 4278 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 4281 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4283 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4285 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4287 "make.c"
{
#line 4289 "make.c"
  {
#line 4291 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4294 "make.c"
    {
#line 4296 "make.c"
      make____Compare____make_info_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4299 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4301 "make.c"
  }
#line 4303 "make.c"
}

#line 4306 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 4309 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4311 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4313 "make.c"
{
#line 4315 "make.c"
  {
#line 4317 "make.c"
    MR_bool make__succeeded;

#line 4320 "make.c"
    {
#line 4322 "make.c"
      make__succeeded = make____Unify____misc_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4325 "make.c"
    return make__succeeded;
#line 4327 "make.c"
  }
#line 4329 "make.c"
}

#line 4332 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 4335 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4337 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4339 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4341 "make.c"
{
#line 4343 "make.c"
  {
#line 4345 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4348 "make.c"
    {
#line 4350 "make.c"
      make____Compare____misc_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4353 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4355 "make.c"
  }
#line 4357 "make.c"
}

#line 4360 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 4363 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4365 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4367 "make.c"
{
#line 4369 "make.c"
  {
#line 4371 "make.c"
    MR_bool make__succeeded;

#line 4374 "make.c"
    {
#line 4376 "make.c"
      make__succeeded = make____Unify____module_compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4379 "make.c"
    return make__succeeded;
#line 4381 "make.c"
  }
#line 4383 "make.c"
}

#line 4386 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 4389 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4391 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4393 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4395 "make.c"
{
#line 4397 "make.c"
  {
#line 4399 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4402 "make.c"
    {
#line 4404 "make.c"
      make____Compare____module_compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4407 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4409 "make.c"
  }
#line 4411 "make.c"
}

#line 4414 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 4417 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4419 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4421 "make.c"
{
#line 4423 "make.c"
  {
#line 4425 "make.c"
    MR_bool make__succeeded;

#line 4428 "make.c"
    {
#line 4430 "make.c"
      make__succeeded = make____Unify____module_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4433 "make.c"
    return make__succeeded;
#line 4435 "make.c"
  }
#line 4437 "make.c"
}

#line 4440 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 4443 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4445 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4447 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4449 "make.c"
{
#line 4451 "make.c"
  {
#line 4453 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4456 "make.c"
    {
#line 4458 "make.c"
      make____Compare____module_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4461 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4463 "make.c"
  }
#line 4465 "make.c"
}

#line 4468 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 4471 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4473 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4475 "make.c"
{
#line 4477 "make.c"
  {
#line 4479 "make.c"
    MR_bool make__succeeded;

#line 4482 "make.c"
    {
#line 4484 "make.c"
      make__succeeded = make____Unify____module_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4487 "make.c"
    return make__succeeded;
#line 4489 "make.c"
  }
#line 4491 "make.c"
}

#line 4494 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 4497 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4499 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4501 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4503 "make.c"
{
#line 4505 "make.c"
  {
#line 4507 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4510 "make.c"
    {
#line 4512 "make.c"
      make____Compare____module_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4515 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4517 "make.c"
  }
#line 4519 "make.c"
}

#line 4522 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 4525 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4527 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4529 "make.c"
{
#line 4531 "make.c"
  {
#line 4533 "make.c"
    MR_bool make__succeeded;

#line 4536 "make.c"
    {
#line 4538 "make.c"
      make__succeeded = make____Unify____rebuild_module_deps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4541 "make.c"
    return make__succeeded;
#line 4543 "make.c"
  }
#line 4545 "make.c"
}

#line 4548 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 4551 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4553 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4555 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4557 "make.c"
{
#line 4559 "make.c"
  {
#line 4561 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4564 "make.c"
    {
#line 4566 "make.c"
      make____Compare____rebuild_module_deps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4569 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4571 "make.c"
  }
#line 4573 "make.c"
}

#line 4576 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 4579 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4581 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4583 "make.c"
{
#line 4585 "make.c"
  {
#line 4587 "make.c"
    MR_bool make__succeeded;

#line 4590 "make.c"
    {
#line 4592 "make.c"
      make__succeeded = make____Unify____target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4595 "make.c"
    return make__succeeded;
#line 4597 "make.c"
  }
#line 4599 "make.c"
}

#line 4602 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 4605 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4607 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4609 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4611 "make.c"
{
#line 4613 "make.c"
  {
#line 4615 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4618 "make.c"
    {
#line 4620 "make.c"
      make____Compare____target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4623 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4625 "make.c"
  }
#line 4627 "make.c"
}

#line 4630 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 4633 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4635 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4637 "make.c"
{
#line 4639 "make.c"
  {
#line 4641 "make.c"
    MR_bool make__succeeded;

#line 4644 "make.c"
    {
#line 4646 "make.c"
      make__succeeded = make____Unify____target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4649 "make.c"
    return make__succeeded;
#line 4651 "make.c"
  }
#line 4653 "make.c"
}

#line 4656 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 4659 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4661 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4663 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4665 "make.c"
{
#line 4667 "make.c"
  {
#line 4669 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4672 "make.c"
    {
#line 4674 "make.c"
      make____Compare____target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4677 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4679 "make.c"
  }
#line 4681 "make.c"
}

#line 348 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__348__1_1_p_0(
#line 348 "make.m"
  MR_String make__HeadVar__1_66)
#line 348 "make.m"
{
#line 348 "make.m"
  {
#line 348 "make.m"
    MR_bool make__succeeded;

#line 348 "make.m"
    {
#line 348 "make.m"
      make__succeeded = mercury__string__suffix_2_p_0(make__HeadVar__1_66, (MR_String) ".depend");
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
  MR_String make__HeadVar__1_50)
#line 322 "make.m"
{
#line 322 "make.m"
  {
#line 322 "make.m"
    MR_bool make__succeeded;

#line 324 "make.m"
    {
#line 324 "make.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(make__HeadVar__1_50, (MR_String) "Make target must not contain any directory component.");
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
  MR_String make__HeadVar__1_44)
#line 312 "make.m"
{
#line 312 "make.m"
  {
#line 312 "make.m"
    MR_bool make__succeeded;
#line 312 "make.m"
    MR_Char make__V_45_45;

#line 314 "make.m"
    {
#line 314 "make.m"
      make__V_45_45 = mercury__dir__directory_separator_0_f_0();
    }
#line 314 "make.m"
    {
#line 314 "make.m"
      return make__succeeded = mercury__string__contains_char_2_p_0(make__HeadVar__1_44, make__V_45_45);
    }
#line 312 "make.m"
    return make__succeeded;
#line 312 "make.m"
  }
#line 312 "make.m"
}

#line 423 "make.m"
void MR_CALL 
make____Compare____target_type_0_0(
#line 423 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 423 "make.m"
  MR_Word make__HeadVar__2_2,
#line 423 "make.m"
  MR_Word make__HeadVar__3_3)
#line 423 "make.m"
{
#line 423 "make.m"
  {
#line 423 "make.m"
    MR_bool make__succeeded;
#line 423 "make.m"
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
#line 423 "make.m"
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

#line 423 "make.m"
    make__succeeded = (make__CastX_22 == make__CastY_23);
#line 423 "make.m"
    if (make__succeeded)
#line 4789 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 423 "make.m"
    else
#line 423 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 423 "make.m"
        {
#line 423 "make.m"
          MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 423 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 423 "make.m"
            {
#line 423 "make.m"
              MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 423 "make.m"
              MR_Integer make__V_30_30 = (MR_Integer) make__V_27_27;
#line 423 "make.m"
              MR_Integer make__V_31_31 = (MR_Integer) make__V_13_13;

#line 423 "make.m"
              {
#line 423 "make.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_30_30, make__V_31_31);
#line 423 "make.m"
                return;
              }
#line 423 "make.m"
            }
#line 423 "make.m"
          else
#line 423 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4824 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 423 "make.m"
            else
#line 4828 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 423 "make.m"
        }
#line 423 "make.m"
      else
#line 423 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 423 "make.m"
          {
#line 423 "make.m"
            MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 423 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4843 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 423 "make.m"
            else
#line 423 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 423 "make.m"
                {
#line 423 "make.m"
                  MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

#line 423 "make.m"
                  {
#line 423 "make.m"
                    make____Compare____misc_target_type_0_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
#line 423 "make.m"
                    return;
                  }
#line 423 "make.m"
                }
#line 423 "make.m"
              else
#line 4865 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 423 "make.m"
          }
#line 423 "make.m"
        else
#line 423 "make.m"
          {
#line 423 "make.m"
            MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

#line 423 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4878 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 423 "make.m"
            else
#line 423 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4884 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 423 "make.m"
              else
#line 423 "make.m"
                {
#line 423 "make.m"
                  MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));

#line 423 "make.m"
                  {
#line 423 "make.m"
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
#line 423 "make.m"
                    return;
                  }
#line 423 "make.m"
                }
#line 423 "make.m"
          }
#line 423 "make.m"
  }
#line 423 "make.m"
}

#line 423 "make.m"
MR_bool MR_CALL 
make____Unify____target_type_0_0(
#line 423 "make.m"
  MR_Word make__HeadVar__1_1,
#line 423 "make.m"
  MR_Word make__HeadVar__2_2)
#line 423 "make.m"
{
#line 423 "make.m"
  {
#line 423 "make.m"
    MR_bool make__succeeded;
#line 423 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 423 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 423 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 423 "make.m"
    if (make__succeeded)
#line 423 "make.m"
      make__succeeded = MR_TRUE;
#line 423 "make.m"
    else
#line 423 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 423 "make.m"
        {
#line 423 "make.m"
          MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "make.m"
          MR_Word make__V_6_6;

#line 423 "make.m"
          make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 423 "make.m"
          if (make__succeeded)
#line 423 "make.m"
            {
#line 423 "make.m"
              make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4952 "make.c"
              make__succeeded = (make__V_5_5 == make__V_6_6);
#line 423 "make.m"
            }
#line 423 "make.m"
        }
#line 423 "make.m"
      else
#line 423 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 423 "make.m"
          {
#line 423 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "make.m"
            MR_Word make__V_8_8;

#line 423 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 423 "make.m"
            if (make__succeeded)
#line 423 "make.m"
              {
#line 423 "make.m"
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4977 "make.c"
                {
#line 4979 "make.c"
                  return make__succeeded = make____Unify____misc_target_type_0_0(make__V_7_7, make__V_8_8);
                }
#line 423 "make.m"
              }
#line 423 "make.m"
          }
#line 423 "make.m"
        else
#line 423 "make.m"
          {
#line 423 "make.m"
            MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "make.m"
            MR_Word make__V_4_4;

#line 423 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 423 "make.m"
            if (make__succeeded)
#line 423 "make.m"
              {
#line 423 "make.m"
                make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 5003 "make.c"
                {
#line 5005 "make.c"
                  return make__succeeded = make____Unify____module_target_type_0_0(make__V_3_3, make__V_4_4);
                }
#line 423 "make.m"
              }
#line 423 "make.m"
          }
#line 423 "make.m"
    return make__succeeded;
#line 423 "make.m"
  }
#line 423 "make.m"
}

#line 264 "make.m"
void MR_CALL 
make____Compare____target_file_0_0(
#line 264 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 264 "make.m"
  MR_Word make__HeadVar__2_2,
#line 264 "make.m"
  MR_Word make__HeadVar__3_3)
#line 264 "make.m"
{
#line 264 "make.m"
  {
#line 264 "make.m"
    MR_bool make__succeeded;
#line 264 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 264 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 264 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 264 "make.m"
    if (make__succeeded)
#line 5043 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "make.m"
    else
#line 264 "make.m"
      {
#line 264 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 264 "make.m"
        MR_Word make__V_8_8;

#line 264 "make.m"
        {
#line 264 "make.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 5065 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 264 "make.m"
        make__succeeded = !(make__succeeded);
#line 264 "make.m"
        if (make__succeeded)
#line 264 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 264 "make.m"
        else
#line 264 "make.m"
          {
#line 264 "make.m"
            make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
#line 264 "make.m"
            return;
          }
#line 264 "make.m"
      }
#line 264 "make.m"
  }
#line 264 "make.m"
}

#line 264 "make.m"
MR_bool MR_CALL 
make____Unify____target_file_0_0(
#line 264 "make.m"
  MR_Word make__HeadVar__1_1,
#line 264 "make.m"
  MR_Word make__HeadVar__2_2)
#line 264 "make.m"
{
#line 264 "make.m"
  {
#line 264 "make.m"
    MR_bool make__succeeded;
#line 264 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 264 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 264 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 264 "make.m"
    if (make__succeeded)
#line 264 "make.m"
      make__succeeded = MR_TRUE;
#line 264 "make.m"
    else
#line 264 "make.m"
      {
#line 264 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 5126 "make.c"
        {
#line 5128 "make.c"
          make__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 264 "make.m"
        if (make__succeeded)
#line 5133 "make.c"
          {
#line 5135 "make.c"
            return make__succeeded = make____Unify____module_target_type_0_0(make__V_4_4, make__V_6_6);
          }
#line 264 "make.m"
      }
#line 264 "make.m"
    return make__succeeded;
#line 264 "make.m"
  }
#line 264 "make.m"
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
#line 5188 "make.c"
  {
#line 5190 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 5193 "make.c"
    return make__succeeded;
#line 5195 "make.c"
  }
#line 50 "make.m"
}

#line 215 "make.m"
void MR_CALL 
make____Compare____module_target_type_0_0(
#line 215 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 215 "make.m"
  MR_Word make__HeadVar__2_2,
#line 215 "make.m"
  MR_Word make__HeadVar__3_3)
#line 215 "make.m"
{
#line 215 "make.m"
  {
#line 215 "make.m"
    MR_bool make__succeeded;
#line 215 "make.m"
    MR_Integer make__CastX_23 = (MR_Integer) make__HeadVar__2_2;
#line 215 "make.m"
    MR_Integer make__CastY_24 = (MR_Integer) make__HeadVar__3_3;

#line 215 "make.m"
    make__succeeded = (make__CastX_23 == make__CastY_24);
#line 215 "make.m"
    if (make__succeeded)
#line 5224 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "make.m"
    else
#line 215 "make.m"
      {
#line 215 "make.m"
        MR_Integer make__V_4_4;
#line 215 "make.m"
        MR_Integer make__V_5_5;

#line 215 "make.m"
        {
#line 215 "make.m"
          make____Index____module_target_type_0_0(make__HeadVar__2_2, &make__V_4_4);
        }
#line 215 "make.m"
        {
#line 215 "make.m"
          make____Index____module_target_type_0_0(make__HeadVar__3_3, &make__V_5_5);
        }
#line 215 "make.m"
        make__succeeded = (make__V_4_4 < make__V_5_5);
#line 215 "make.m"
        if (make__succeeded)
#line 5249 "make.c"
          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "make.m"
        else
#line 215 "make.m"
          {
#line 215 "make.m"
            make__succeeded = (make__V_4_4 > make__V_5_5);
#line 215 "make.m"
            if (make__succeeded)
#line 5259 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "make.m"
            else
#line 215 "make.m"
              {
#line 215 "make.m"
                MR_Word make__V_6_6;

#line 215 "make.m"
                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 215 "make.m"
                  {
#line 215 "make.m"
                    make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                    make__succeeded = MR_TRUE;
#line 215 "make.m"
                  }
#line 215 "make.m"
                else
#line 215 "make.m"
                  if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 215 "make.m"
                    {
#line 215 "make.m"
                      make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                      make__succeeded = MR_TRUE;
#line 215 "make.m"
                    }
#line 215 "make.m"
                  else
#line 215 "make.m"
                    if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 215 "make.m"
                      {
#line 215 "make.m"
                        make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                        make__succeeded = MR_TRUE;
#line 215 "make.m"
                      }
#line 215 "make.m"
                    else
#line 215 "make.m"
                      if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 215 "make.m"
                        {
#line 215 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                          make__succeeded = MR_TRUE;
#line 215 "make.m"
                        }
#line 215 "make.m"
                      else
#line 215 "make.m"
                        if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 215 "make.m"
                          {
#line 215 "make.m"
                            make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                            make__succeeded = MR_TRUE;
#line 215 "make.m"
                          }
#line 215 "make.m"
                        else
#line 215 "make.m"
                          if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 215 "make.m"
                            {
#line 215 "make.m"
                              make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                              make__succeeded = MR_TRUE;
#line 215 "make.m"
                            }
#line 215 "make.m"
                          else
#line 215 "make.m"
                            if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 215 "make.m"
                              {
#line 215 "make.m"
                                make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                make__succeeded = MR_TRUE;
#line 215 "make.m"
                              }
#line 215 "make.m"
                            else
#line 215 "make.m"
                              if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 215 "make.m"
                                {
#line 215 "make.m"
                                  make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                  make__succeeded = MR_TRUE;
#line 215 "make.m"
                                }
#line 215 "make.m"
                              else
#line 215 "make.m"
                                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 215 "make.m"
                                  {
#line 215 "make.m"
                                    make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                    make__succeeded = MR_TRUE;
#line 215 "make.m"
                                  }
#line 215 "make.m"
                                else
#line 215 "make.m"
                                  if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 215 "make.m"
                                    {
#line 215 "make.m"
                                      make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                      make__succeeded = MR_TRUE;
#line 215 "make.m"
                                    }
#line 215 "make.m"
                                  else
#line 215 "make.m"
                                    if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 215 "make.m"
                                      {
#line 215 "make.m"
                                        make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                        make__succeeded = MR_TRUE;
#line 215 "make.m"
                                      }
#line 215 "make.m"
                                    else
#line 215 "make.m"
                                      if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 215 "make.m"
                                        {
#line 215 "make.m"
                                          make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                          make__succeeded = MR_TRUE;
#line 215 "make.m"
                                        }
#line 215 "make.m"
                                      else
#line 215 "make.m"
                                        if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 215 "make.m"
                                          {
#line 215 "make.m"
                                            make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                            make__succeeded = MR_TRUE;
#line 215 "make.m"
                                          }
#line 215 "make.m"
                                        else
#line 215 "make.m"
                                          if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 215 "make.m"
                                            {
#line 215 "make.m"
                                              make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                              make__succeeded = MR_TRUE;
#line 215 "make.m"
                                            }
#line 215 "make.m"
                                          else
#line 215 "make.m"
                                            if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 215 "make.m"
                                              {
#line 215 "make.m"
                                                make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                                make__succeeded = MR_TRUE;
#line 215 "make.m"
                                              }
#line 215 "make.m"
                                            else
#line 215 "make.m"
                                              if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "make.m"
                                                {
#line 215 "make.m"
                                                  make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                                  make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                }
#line 215 "make.m"
                                              else
#line 215 "make.m"
                                                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 215 "make.m"
                                                  {
#line 215 "make.m"
                                                    make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                                    make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                  }
#line 215 "make.m"
                                                else
#line 215 "make.m"
                                                  if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 215 "make.m"
                                                    {
#line 215 "make.m"
                                                      make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                                      make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                    }
#line 215 "make.m"
                                                  else
#line 215 "make.m"
                                                    if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 215 "make.m"
                                                      {
#line 215 "make.m"
                                                        make__V_6_6 = (MR_Integer) 0;
#line 215 "make.m"
                                                        make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                      }
#line 215 "make.m"
                                                    else
#line 215 "make.m"
                                                      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 215 "make.m"
                                                        {
#line 215 "make.m"
                                                          MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "make.m"
                                                          MR_Word make__V_8_8;
#line 215 "make.m"
                                                          MR_Integer make__V_32_32;
#line 215 "make.m"
                                                          MR_Integer make__V_33_33;

#line 215 "make.m"
                                                          make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 215 "make.m"
                                                          if (make__succeeded)
#line 215 "make.m"
                                                            {
#line 215 "make.m"
                                                              make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 215 "make.m"
                                                              make__V_32_32 = (MR_Integer) make__V_7_7;
#line 215 "make.m"
                                                              make__V_33_33 = (MR_Integer) make__V_8_8;
#line 215 "make.m"
                                                              {
#line 215 "make.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_32_32, make__V_33_33);
                                                              }
#line 215 "make.m"
                                                              make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                            }
#line 215 "make.m"
                                                        }
#line 215 "make.m"
                                                      else
#line 215 "make.m"
                                                        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 215 "make.m"
                                                          {
#line 215 "make.m"
                                                            MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "make.m"
                                                            MR_Word make__V_10_10;
#line 215 "make.m"
                                                            MR_Integer make__V_42_42;
#line 215 "make.m"
                                                            MR_Integer make__V_43_43;

#line 215 "make.m"
                                                            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 215 "make.m"
                                                            if (make__succeeded)
#line 215 "make.m"
                                                              {
#line 215 "make.m"
                                                                make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
#line 215 "make.m"
                                                                make__V_42_42 = (MR_Integer) make__V_9_9;
#line 215 "make.m"
                                                                make__V_43_43 = (MR_Integer) make__V_10_10;
#line 215 "make.m"
                                                                {
#line 215 "make.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_42_42, make__V_43_43);
                                                                }
#line 215 "make.m"
                                                                make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                              }
#line 215 "make.m"
                                                          }
#line 215 "make.m"
                                                        else
#line 215 "make.m"
                                                          if (((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 215 "make.m"
                                                            {
#line 215 "make.m"
                                                              MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "make.m"
                                                              MR_String make__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 215 "make.m"
                                                              MR_Word make__V_20_20;
#line 215 "make.m"
                                                              MR_String make__V_21_21;
#line 215 "make.m"
                                                              MR_Word make__V_22_22;
#line 215 "make.m"
                                                              MR_Integer make__V_34_34;
#line 215 "make.m"
                                                              MR_Integer make__V_35_35;

#line 215 "make.m"
                                                              make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 215 "make.m"
                                                              if (make__succeeded)
#line 215 "make.m"
                                                                {
#line 215 "make.m"
                                                                  make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 215 "make.m"
                                                                  make__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 215 "make.m"
                                                                  make__V_34_34 = (MR_Integer) make__V_18_18;
#line 215 "make.m"
                                                                  make__V_35_35 = (MR_Integer) make__V_20_20;
#line 215 "make.m"
                                                                  {
#line 215 "make.m"
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_22_22, make__V_34_34, make__V_35_35);
                                                                  }
#line 5610 "make.c"
                                                                  make__succeeded = (make__V_22_22 == (MR_Integer) 0);
#line 215 "make.m"
                                                                  make__succeeded = !(make__succeeded);
#line 215 "make.m"
                                                                  if (make__succeeded)
#line 215 "make.m"
                                                                    make__V_6_6 = make__V_22_22;
#line 215 "make.m"
                                                                  else
#line 215 "make.m"
                                                                    {
#line 215 "make.m"
                                                                      mercury__private_builtin__builtin_compare_string_3_p_0(&make__V_6_6, make__V_19_19, make__V_21_21);
                                                                    }
#line 215 "make.m"
                                                                  make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                                }
#line 215 "make.m"
                                                            }
#line 215 "make.m"
                                                          else
#line 215 "make.m"
                                                            if (((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 215 "make.m"
                                                              {
#line 215 "make.m"
                                                                MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "make.m"
                                                                MR_Word make__V_12_12;
#line 215 "make.m"
                                                                MR_Integer make__V_36_36;
#line 215 "make.m"
                                                                MR_Integer make__V_37_37;

#line 215 "make.m"
                                                                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 215 "make.m"
                                                                if (make__succeeded)
#line 215 "make.m"
                                                                  {
#line 215 "make.m"
                                                                    make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 215 "make.m"
                                                                    make__V_36_36 = (MR_Integer) make__V_11_11;
#line 215 "make.m"
                                                                    make__V_37_37 = (MR_Integer) make__V_12_12;
#line 215 "make.m"
                                                                    {
#line 215 "make.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_36_36, make__V_37_37);
                                                                    }
#line 215 "make.m"
                                                                    make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                                  }
#line 215 "make.m"
                                                              }
#line 215 "make.m"
                                                            else
#line 215 "make.m"
                                                              {
#line 215 "make.m"
                                                                MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "make.m"
                                                                MR_Word make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 215 "make.m"
                                                                MR_Word make__V_15_15;
#line 215 "make.m"
                                                                MR_Word make__V_16_16;
#line 215 "make.m"
                                                                MR_Word make__V_17_17;
#line 215 "make.m"
                                                                MR_Integer make__V_38_38;
#line 215 "make.m"
                                                                MR_Integer make__V_39_39;

#line 215 "make.m"
                                                                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 215 "make.m"
                                                                if (make__succeeded)
#line 215 "make.m"
                                                                  {
#line 215 "make.m"
                                                                    make__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 215 "make.m"
                                                                    make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 215 "make.m"
                                                                    make__V_38_38 = (MR_Integer) make__V_13_13;
#line 215 "make.m"
                                                                    make__V_39_39 = (MR_Integer) make__V_15_15;
#line 215 "make.m"
                                                                    {
#line 215 "make.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_17_17, make__V_38_38, make__V_39_39);
                                                                    }
#line 5707 "make.c"
                                                                    make__succeeded = (make__V_17_17 == (MR_Integer) 0);
#line 215 "make.m"
                                                                    make__succeeded = !(make__succeeded);
#line 215 "make.m"
                                                                    if (make__succeeded)
#line 215 "make.m"
                                                                      make__V_6_6 = make__V_17_17;
#line 215 "make.m"
                                                                    else
#line 215 "make.m"
                                                                      {
#line 215 "make.m"
                                                                        MR_Integer make__V_40_40 = (MR_Integer) make__V_14_14;
#line 215 "make.m"
                                                                        MR_Integer make__V_41_41 = (MR_Integer) make__V_16_16;

#line 215 "make.m"
                                                                        {
#line 215 "make.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_40_40, make__V_41_41);
                                                                        }
#line 215 "make.m"
                                                                      }
#line 215 "make.m"
                                                                    make__succeeded = MR_TRUE;
#line 215 "make.m"
                                                                  }
#line 215 "make.m"
                                                              }
#line 215 "make.m"
                if (make__succeeded)
#line 215 "make.m"
                  *make__HeadVar__1_1 = make__V_6_6;
#line 215 "make.m"
                else
#line 215 "make.m"
                  {
#line 215 "make.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 215 "make.m"
                    return;
                  }
#line 215 "make.m"
              }
#line 215 "make.m"
          }
#line 215 "make.m"
      }
#line 215 "make.m"
  }
#line 215 "make.m"
}

#line 215 "make.m"
void MR_CALL 
make____Index____module_target_type_0_0(
#line 215 "make.m"
  MR_Word make__HeadVar__1_1,
#line 215 "make.m"
  MR_Integer * make__HeadVar__2_2)
#line 215 "make.m"
{
#line 215 "make.m"
  {
#line 215 "make.m"
    MR_bool make__succeeded;

#line 215 "make.m"
    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 5777 "make.c"
      *make__HeadVar__2_2 = (MR_Integer) 7;
#line 215 "make.m"
    else
#line 215 "make.m"
      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 5783 "make.c"
        *make__HeadVar__2_2 = (MR_Integer) 10;
#line 215 "make.m"
      else
#line 215 "make.m"
        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 5789 "make.c"
          *make__HeadVar__2_2 = (MR_Integer) 13;
#line 215 "make.m"
        else
#line 215 "make.m"
          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 5795 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 18;
#line 215 "make.m"
          else
#line 215 "make.m"
            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 5801 "make.c"
              *make__HeadVar__2_2 = (MR_Integer) 17;
#line 215 "make.m"
            else
#line 215 "make.m"
              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 5807 "make.c"
                *make__HeadVar__2_2 = (MR_Integer) 16;
#line 215 "make.m"
              else
#line 215 "make.m"
                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5813 "make.c"
                  *make__HeadVar__2_2 = (MR_Integer) 1;
#line 215 "make.m"
                else
#line 215 "make.m"
                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 5819 "make.c"
                    *make__HeadVar__2_2 = (MR_Integer) 12;
#line 215 "make.m"
                  else
#line 215 "make.m"
                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 5825 "make.c"
                      *make__HeadVar__2_2 = (MR_Integer) 11;
#line 215 "make.m"
                    else
#line 215 "make.m"
                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 5831 "make.c"
                        *make__HeadVar__2_2 = (MR_Integer) 6;
#line 215 "make.m"
                      else
#line 215 "make.m"
                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 5837 "make.c"
                          *make__HeadVar__2_2 = (MR_Integer) 15;
#line 215 "make.m"
                        else
#line 215 "make.m"
                          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 5843 "make.c"
                            *make__HeadVar__2_2 = (MR_Integer) 14;
#line 215 "make.m"
                          else
#line 215 "make.m"
                            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5849 "make.c"
                              *make__HeadVar__2_2 = (MR_Integer) 3;
#line 215 "make.m"
                            else
#line 215 "make.m"
                              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5855 "make.c"
                                *make__HeadVar__2_2 = (MR_Integer) 2;
#line 215 "make.m"
                              else
#line 215 "make.m"
                                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5861 "make.c"
                                  *make__HeadVar__2_2 = (MR_Integer) 4;
#line 215 "make.m"
                                else
#line 215 "make.m"
                                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5867 "make.c"
                                    *make__HeadVar__2_2 = (MR_Integer) 0;
#line 215 "make.m"
                                  else
#line 215 "make.m"
                                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 5873 "make.c"
                                      *make__HeadVar__2_2 = (MR_Integer) 8;
#line 215 "make.m"
                                    else
#line 215 "make.m"
                                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 5879 "make.c"
                                        *make__HeadVar__2_2 = (MR_Integer) 5;
#line 215 "make.m"
                                      else
#line 215 "make.m"
                                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 5885 "make.c"
                                          *make__HeadVar__2_2 = (MR_Integer) 23;
#line 215 "make.m"
                                        else
#line 215 "make.m"
                                          if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 5891 "make.c"
                                            *make__HeadVar__2_2 = (MR_Integer) 9;
#line 215 "make.m"
                                          else
#line 215 "make.m"
                                            if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 5897 "make.c"
                                              *make__HeadVar__2_2 = (MR_Integer) 19;
#line 215 "make.m"
                                            else
#line 215 "make.m"
                                              if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5903 "make.c"
                                                *make__HeadVar__2_2 = (MR_Integer) 22;
#line 215 "make.m"
                                              else
#line 215 "make.m"
                                                if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5909 "make.c"
                                                  *make__HeadVar__2_2 = (MR_Integer) 20;
#line 215 "make.m"
                                                else
#line 5913 "make.c"
                                                  *make__HeadVar__2_2 = (MR_Integer) 21;
#line 215 "make.m"
  }
#line 215 "make.m"
}

#line 215 "make.m"
MR_bool MR_CALL 
make____Unify____module_target_type_0_0(
#line 215 "make.m"
  MR_Word make__HeadVar__1_1,
#line 215 "make.m"
  MR_Word make__HeadVar__2_2)
#line 215 "make.m"
{
#line 215 "make.m"
  {
#line 215 "make.m"
    MR_bool make__succeeded;
#line 215 "make.m"
    MR_Integer make__CastX_55 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
    MR_Integer make__CastY_56 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
    make__succeeded = (make__CastX_55 == make__CastY_56);
#line 215 "make.m"
    if (make__succeeded)
#line 215 "make.m"
      make__succeeded = MR_TRUE;
#line 215 "make.m"
    else
#line 215 "make.m"
      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 215 "make.m"
        {
#line 215 "make.m"
          MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
          MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
          make__succeeded = (make__CastY_18 == make__CastX_17);
#line 215 "make.m"
        }
#line 215 "make.m"
      else
#line 215 "make.m"
        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 215 "make.m"
          {
#line 215 "make.m"
            MR_Integer make__CastX_23 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
            MR_Integer make__CastY_24 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
            make__succeeded = (make__CastY_24 == make__CastX_23);
#line 215 "make.m"
          }
#line 215 "make.m"
        else
#line 215 "make.m"
          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 215 "make.m"
            {
#line 215 "make.m"
              MR_Integer make__CastX_29 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
              MR_Integer make__CastY_30 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
              make__succeeded = (make__CastY_30 == make__CastX_29);
#line 215 "make.m"
            }
#line 215 "make.m"
          else
#line 215 "make.m"
            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 215 "make.m"
              {
#line 215 "make.m"
                MR_Integer make__CastX_39 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                MR_Integer make__CastY_40 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                make__succeeded = (make__CastY_40 == make__CastX_39);
#line 215 "make.m"
              }
#line 215 "make.m"
            else
#line 215 "make.m"
              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 215 "make.m"
                {
#line 215 "make.m"
                  MR_Integer make__CastX_37 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                  MR_Integer make__CastY_38 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                  make__succeeded = (make__CastY_38 == make__CastX_37);
#line 215 "make.m"
                }
#line 215 "make.m"
              else
#line 215 "make.m"
                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 215 "make.m"
                  {
#line 215 "make.m"
                    MR_Integer make__CastX_35 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                    MR_Integer make__CastY_36 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                    make__succeeded = (make__CastY_36 == make__CastX_35);
#line 215 "make.m"
                  }
#line 215 "make.m"
                else
#line 215 "make.m"
                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 215 "make.m"
                    {
#line 215 "make.m"
                      MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                      MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                      make__succeeded = (make__CastY_6 == make__CastX_5);
#line 215 "make.m"
                    }
#line 215 "make.m"
                  else
#line 215 "make.m"
                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 215 "make.m"
                      {
#line 215 "make.m"
                        MR_Integer make__CastX_27 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                        MR_Integer make__CastY_28 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                        make__succeeded = (make__CastY_28 == make__CastX_27);
#line 215 "make.m"
                      }
#line 215 "make.m"
                    else
#line 215 "make.m"
                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 215 "make.m"
                        {
#line 215 "make.m"
                          MR_Integer make__CastX_25 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                          MR_Integer make__CastY_26 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                          make__succeeded = (make__CastY_26 == make__CastX_25);
#line 215 "make.m"
                        }
#line 215 "make.m"
                      else
#line 215 "make.m"
                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 215 "make.m"
                          {
#line 215 "make.m"
                            MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                            MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                            make__succeeded = (make__CastY_16 == make__CastX_15);
#line 215 "make.m"
                          }
#line 215 "make.m"
                        else
#line 215 "make.m"
                          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 215 "make.m"
                            {
#line 215 "make.m"
                              MR_Integer make__CastX_33 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                              MR_Integer make__CastY_34 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                              make__succeeded = (make__CastY_34 == make__CastX_33);
#line 215 "make.m"
                            }
#line 215 "make.m"
                          else
#line 215 "make.m"
                            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 215 "make.m"
                              {
#line 215 "make.m"
                                MR_Integer make__CastX_31 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                MR_Integer make__CastY_32 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                make__succeeded = (make__CastY_32 == make__CastX_31);
#line 215 "make.m"
                              }
#line 215 "make.m"
                            else
#line 215 "make.m"
                              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 215 "make.m"
                                {
#line 215 "make.m"
                                  MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                  MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                  make__succeeded = (make__CastY_10 == make__CastX_9);
#line 215 "make.m"
                                }
#line 215 "make.m"
                              else
#line 215 "make.m"
                                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 215 "make.m"
                                  {
#line 215 "make.m"
                                    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                    make__succeeded = (make__CastY_8 == make__CastX_7);
#line 215 "make.m"
                                  }
#line 215 "make.m"
                                else
#line 215 "make.m"
                                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 215 "make.m"
                                    {
#line 215 "make.m"
                                      MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                      MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                      make__succeeded = (make__CastY_12 == make__CastX_11);
#line 215 "make.m"
                                    }
#line 215 "make.m"
                                  else
#line 215 "make.m"
                                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "make.m"
                                      {
#line 215 "make.m"
                                        MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                        MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                        make__succeeded = (make__CastY_4 == make__CastX_3);
#line 215 "make.m"
                                      }
#line 215 "make.m"
                                    else
#line 215 "make.m"
                                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 215 "make.m"
                                        {
#line 215 "make.m"
                                          MR_Integer make__CastX_19 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                          MR_Integer make__CastY_20 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                          make__succeeded = (make__CastY_20 == make__CastX_19);
#line 215 "make.m"
                                        }
#line 215 "make.m"
                                      else
#line 215 "make.m"
                                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 215 "make.m"
                                          {
#line 215 "make.m"
                                            MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                            MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                            make__succeeded = (make__CastY_14 == make__CastX_13);
#line 215 "make.m"
                                          }
#line 215 "make.m"
                                        else
#line 215 "make.m"
                                          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 215 "make.m"
                                            {
#line 215 "make.m"
                                              MR_Integer make__CastX_53 = (MR_Integer) make__HeadVar__1_1;
#line 215 "make.m"
                                              MR_Integer make__CastY_54 = (MR_Integer) make__HeadVar__2_2;

#line 215 "make.m"
                                              make__succeeded = (make__CastY_54 == make__CastX_53);
#line 215 "make.m"
                                            }
#line 215 "make.m"
                                          else
#line 215 "make.m"
                                            if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 215 "make.m"
                                              {
#line 215 "make.m"
                                                MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "make.m"
                                                MR_Word make__V_22_22;

#line 215 "make.m"
                                                make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 215 "make.m"
                                                if (make__succeeded)
#line 215 "make.m"
                                                  {
#line 215 "make.m"
                                                    make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6248 "make.c"
                                                    make__succeeded = (make__V_21_21 == make__V_22_22);
#line 215 "make.m"
                                                  }
#line 215 "make.m"
                                              }
#line 215 "make.m"
                                            else
#line 215 "make.m"
                                              if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 215 "make.m"
                                                {
#line 215 "make.m"
                                                  MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "make.m"
                                                  MR_Word make__V_42_42;

#line 215 "make.m"
                                                  make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 215 "make.m"
                                                  if (make__succeeded)
#line 215 "make.m"
                                                    {
#line 215 "make.m"
                                                      make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6273 "make.c"
                                                      make__succeeded = (make__V_41_41 == make__V_42_42);
#line 215 "make.m"
                                                    }
#line 215 "make.m"
                                                }
#line 215 "make.m"
                                              else
#line 215 "make.m"
                                                if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 215 "make.m"
                                                  {
#line 215 "make.m"
                                                    MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "make.m"
                                                    MR_String make__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 215 "make.m"
                                                    MR_Word make__V_51_51;
#line 215 "make.m"
                                                    MR_String make__V_52_52;

#line 215 "make.m"
                                                    make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 215 "make.m"
                                                    if (make__succeeded)
#line 215 "make.m"
                                                      {
#line 215 "make.m"
                                                        make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "make.m"
                                                        make__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6304 "make.c"
                                                        make__succeeded = (make__V_49_49 == make__V_51_51);
#line 215 "make.m"
                                                        if (make__succeeded)
#line 6308 "make.c"
                                                          make__succeeded = (strcmp(make__V_50_50, make__V_52_52) == 0);
#line 215 "make.m"
                                                      }
#line 215 "make.m"
                                                  }
#line 215 "make.m"
                                                else
#line 215 "make.m"
                                                  if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 215 "make.m"
                                                    {
#line 215 "make.m"
                                                      MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "make.m"
                                                      MR_Word make__V_44_44;

#line 215 "make.m"
                                                      make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 215 "make.m"
                                                      if (make__succeeded)
#line 215 "make.m"
                                                        {
#line 215 "make.m"
                                                          make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 6333 "make.c"
                                                          make__succeeded = (make__V_43_43 == make__V_44_44);
#line 215 "make.m"
                                                        }
#line 215 "make.m"
                                                    }
#line 215 "make.m"
                                                  else
#line 215 "make.m"
                                                    {
#line 215 "make.m"
                                                      MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "make.m"
                                                      MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 215 "make.m"
                                                      MR_Word make__V_47_47;
#line 215 "make.m"
                                                      MR_Word make__V_48_48;

#line 215 "make.m"
                                                      make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 215 "make.m"
                                                      if (make__succeeded)
#line 215 "make.m"
                                                        {
#line 215 "make.m"
                                                          make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "make.m"
                                                          make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6362 "make.c"
                                                          make__succeeded = (make__V_45_45 == make__V_47_47);
#line 215 "make.m"
                                                          if (make__succeeded)
#line 6366 "make.c"
                                                            make__succeeded = (make__V_46_46 == make__V_48_48);
#line 215 "make.m"
                                                        }
#line 215 "make.m"
                                                    }
#line 215 "make.m"
    return make__succeeded;
#line 215 "make.m"
  }
#line 215 "make.m"
}

#line 175 "make.m"
void MR_CALL 
make____Compare____module_index_map_0_0(
#line 175 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 175 "make.m"
  MR_Word make__HeadVar__2_2,
#line 175 "make.m"
  MR_Word make__HeadVar__3_3)
#line 175 "make.m"
{
#line 175 "make.m"
  {
#line 175 "make.m"
    MR_bool make__succeeded;
#line 175 "make.m"
    MR_Integer make__CastX_12 = (MR_Integer) make__HeadVar__2_2;
#line 175 "make.m"
    MR_Integer make__CastY_13 = (MR_Integer) make__HeadVar__3_3;

#line 175 "make.m"
    make__succeeded = (make__CastX_12 == make__CastY_13);
#line 175 "make.m"
    if (make__succeeded)
#line 6403 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 175 "make.m"
    else
#line 175 "make.m"
      {
#line 175 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "make.m"
        MR_Box make__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 175 "make.m"
        MR_Integer make__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
#line 175 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 175 "make.m"
        MR_Box make__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 175 "make.m"
        MR_Integer make__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
#line 175 "make.m"
        MR_Word make__V_10_10;

#line 175 "make.m"
        {
#line 175 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[9], &make__V_10_10, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_7_7)));
        }
#line 6429 "make.c"
        make__succeeded = (make__V_10_10 == (MR_Integer) 0);
#line 175 "make.m"
        make__succeeded = !(make__succeeded);
#line 175 "make.m"
        if (make__succeeded)
#line 175 "make.m"
          *make__HeadVar__1_1 = make__V_10_10;
#line 175 "make.m"
        else
#line 175 "make.m"
          {
#line 175 "make.m"
            MR_Word make__V_11_11;

#line 175 "make.m"
            {
#line 175 "make.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[8], &make__V_11_11, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_8_8)));
            }
#line 6449 "make.c"
            make__succeeded = (make__V_11_11 == (MR_Integer) 0);
#line 175 "make.m"
            make__succeeded = !(make__succeeded);
#line 175 "make.m"
            if (make__succeeded)
#line 175 "make.m"
              *make__HeadVar__1_1 = make__V_11_11;
#line 175 "make.m"
            else
#line 175 "make.m"
              {
#line 175 "make.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_6_6, make__V_9_9);
#line 175 "make.m"
                return;
              }
#line 175 "make.m"
          }
#line 175 "make.m"
      }
#line 175 "make.m"
  }
#line 175 "make.m"
}

#line 175 "make.m"
MR_bool MR_CALL 
make____Unify____module_index_map_0_0(
#line 175 "make.m"
  MR_Word make__HeadVar__1_1,
#line 175 "make.m"
  MR_Word make__HeadVar__2_2)
#line 175 "make.m"
{
#line 175 "make.m"
  {
#line 175 "make.m"
    MR_bool make__succeeded;
#line 175 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 175 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 175 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 175 "make.m"
    if (make__succeeded)
#line 175 "make.m"
      make__succeeded = MR_TRUE;
#line 175 "make.m"
    else
#line 175 "make.m"
      {
#line 175 "make.m"
        MR_Word make__TypeCtorInfo_12_12;
#line 175 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 175 "make.m"
        MR_Box make__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 175 "make.m"
        MR_Integer make__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
#line 175 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "make.m"
        MR_Box make__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 175 "make.m"
        MR_Integer make__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));

#line 6518 "make.c"
        {
#line 6520 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[9], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 175 "make.m"
        if (make__succeeded)
#line 175 "make.m"
          {
#line 6527 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 6529 "make.c"
            {
#line 6531 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 175 "make.m"
            if (make__succeeded)
#line 6536 "make.c"
              make__succeeded = (make__V_5_5 == make__V_8_8);
#line 175 "make.m"
          }
#line 175 "make.m"
      }
#line 175 "make.m"
    return make__succeeded;
#line 175 "make.m"
  }
#line 175 "make.m"
}

#line 205 "make.m"
void MR_CALL 
make____Compare____module_compilation_task_type_0_0(
#line 205 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 205 "make.m"
  MR_Word make__HeadVar__2_2,
#line 205 "make.m"
  MR_Word make__HeadVar__3_3)
#line 205 "make.m"
{
#line 205 "make.m"
  {
#line 205 "make.m"
    MR_bool make__succeeded;
#line 205 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 205 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 205 "make.m"
    {
#line 205 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 205 "make.m"
      return;
    }
#line 205 "make.m"
  }
#line 205 "make.m"
}

#line 205 "make.m"
MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0(
#line 205 "make.m"
  MR_Word make__HeadVar__2_1,
#line 205 "make.m"
  MR_Word make__HeadVar__2_2)
#line 205 "make.m"
{
#line 6590 "make.c"
  {
#line 6592 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 6595 "make.c"
    return make__succeeded;
#line 6597 "make.c"
  }
#line 205 "make.m"
}

#line 247 "make.m"
void MR_CALL 
make____Compare____misc_target_type_0_0(
#line 247 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 247 "make.m"
  MR_Word make__HeadVar__2_2,
#line 247 "make.m"
  MR_Word make__HeadVar__3_3)
#line 247 "make.m"
{
#line 247 "make.m"
  {
#line 247 "make.m"
    MR_bool make__succeeded;
#line 247 "make.m"
    MR_Integer make__CastX_18 = (MR_Integer) make__HeadVar__2_2;
#line 247 "make.m"
    MR_Integer make__CastY_19 = (MR_Integer) make__HeadVar__3_3;

#line 247 "make.m"
    make__succeeded = (make__CastX_18 == make__CastY_19);
#line 247 "make.m"
    if (make__succeeded)
#line 6626 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "make.m"
    else
#line 247 "make.m"
      if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
          *make__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "make.m"
        else
#line 247 "make.m"
          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
            *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
          else
#line 247 "make.m"
            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
            else
#line 247 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
              else
#line 247 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                else
#line 247 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                  else
#line 6668 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
      else
#line 247 "make.m"
        if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
          else
#line 247 "make.m"
            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
              *make__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "make.m"
            else
#line 247 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
              else
#line 247 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                else
#line 247 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                  else
#line 247 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                    else
#line 6710 "make.c"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
        else
#line 247 "make.m"
          if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
            else
#line 247 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
              else
#line 247 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "make.m"
                else
#line 247 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                  else
#line 247 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                    else
#line 247 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                      else
#line 6752 "make.c"
                        *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
          else
#line 247 "make.m"
            if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
              else
#line 247 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                else
#line 247 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                  else
#line 247 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "make.m"
                    else
#line 247 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                      else
#line 247 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                        else
#line 6794 "make.c"
                          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
            else
#line 247 "make.m"
              if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                else
#line 247 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                  else
#line 247 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                    else
#line 247 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                      else
#line 247 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                          *make__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "make.m"
                        else
#line 247 "make.m"
                          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                          else
#line 6836 "make.c"
                            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
              else
#line 247 "make.m"
                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                  else
#line 247 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                    else
#line 247 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                      else
#line 247 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
                          *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                        else
#line 247 "make.m"
                          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                            *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                          else
#line 247 "make.m"
                            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                              *make__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "make.m"
                            else
#line 6878 "make.c"
                              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                else
#line 247 "make.m"
                  {
#line 247 "make.m"
                    MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 247 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6889 "make.c"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                    else
#line 247 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6895 "make.c"
                        *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                      else
#line 247 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 6901 "make.c"
                          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                        else
#line 247 "make.m"
                          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6907 "make.c"
                            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                          else
#line 247 "make.m"
                            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6913 "make.c"
                              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "make.m"
                            else
#line 247 "make.m"
                              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6919 "make.c"
                                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "make.m"
                              else
#line 247 "make.m"
                                {
#line 247 "make.m"
                                  MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

#line 247 "make.m"
                                  {
#line 247 "make.m"
                                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_21_21, make__V_9_9);
#line 247 "make.m"
                                    return;
                                  }
#line 247 "make.m"
                                }
#line 247 "make.m"
                  }
#line 247 "make.m"
  }
#line 247 "make.m"
}

#line 247 "make.m"
MR_bool MR_CALL 
make____Unify____misc_target_type_0_0(
#line 247 "make.m"
  MR_Word make__HeadVar__1_1,
#line 247 "make.m"
  MR_Word make__HeadVar__2_2)
#line 247 "make.m"
{
#line 247 "make.m"
  {
#line 247 "make.m"
    MR_bool make__succeeded;
#line 247 "make.m"
    MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
#line 247 "make.m"
    MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

#line 247 "make.m"
    make__succeeded = (make__CastX_17 == make__CastY_18);
#line 247 "make.m"
    if (make__succeeded)
#line 247 "make.m"
      make__succeeded = MR_TRUE;
#line 247 "make.m"
    else
#line 247 "make.m"
      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "make.m"
        {
#line 247 "make.m"
          MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 247 "make.m"
          MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 247 "make.m"
          make__succeeded = (make__CastY_10 == make__CastX_9);
#line 247 "make.m"
        }
#line 247 "make.m"
      else
#line 247 "make.m"
        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "make.m"
          {
#line 247 "make.m"
            MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
#line 247 "make.m"
            MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

#line 247 "make.m"
            make__succeeded = (make__CastY_12 == make__CastX_11);
#line 247 "make.m"
          }
#line 247 "make.m"
        else
#line 247 "make.m"
          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "make.m"
            {
#line 247 "make.m"
              MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 247 "make.m"
              MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 247 "make.m"
              make__succeeded = (make__CastY_16 == make__CastX_15);
#line 247 "make.m"
            }
#line 247 "make.m"
          else
#line 247 "make.m"
            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "make.m"
              {
#line 247 "make.m"
                MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
#line 247 "make.m"
                MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

#line 247 "make.m"
                make__succeeded = (make__CastY_4 == make__CastX_3);
#line 247 "make.m"
              }
#line 247 "make.m"
            else
#line 247 "make.m"
              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "make.m"
                {
#line 247 "make.m"
                  MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
#line 247 "make.m"
                  MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

#line 247 "make.m"
                  make__succeeded = (make__CastY_14 == make__CastX_13);
#line 247 "make.m"
                }
#line 247 "make.m"
              else
#line 247 "make.m"
                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "make.m"
                  {
#line 247 "make.m"
                    MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
#line 247 "make.m"
                    MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

#line 247 "make.m"
                    make__succeeded = (make__CastY_6 == make__CastX_5);
#line 247 "make.m"
                  }
#line 247 "make.m"
                else
#line 247 "make.m"
                  {
#line 247 "make.m"
                    MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "make.m"
                    MR_Word make__V_8_8;

#line 247 "make.m"
                    make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 247 "make.m"
                    if (make__succeeded)
#line 247 "make.m"
                      {
#line 247 "make.m"
                        make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 7075 "make.c"
                        {
#line 7077 "make.c"
                          return make__succeeded = make____Unify____module_target_type_0_0(make__V_7_7, make__V_8_8);
                        }
#line 247 "make.m"
                      }
#line 247 "make.m"
                  }
#line 247 "make.m"
    return make__succeeded;
#line 247 "make.m"
  }
#line 247 "make.m"
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
    MR_Integer make__CastX_60 = (MR_Integer) make__HeadVar__2_2;
#line 100 "make.m"
    MR_Integer make__CastY_61 = (MR_Integer) make__HeadVar__3_3;

#line 100 "make.m"
    make__succeeded = (make__CastX_60 == make__CastY_61);
#line 100 "make.m"
    if (make__succeeded)
#line 7115 "make.c"
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
        MR_Word make__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Integer make__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 17)));
#line 100 "make.m"
        MR_Word make__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 100 "make.m"
        MR_Word make__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 100 "make.m"
        MR_Word make__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
#line 100 "make.m"
        MR_Word make__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 3)));
#line 100 "make.m"
        MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 4)));
#line 100 "make.m"
        MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 5)));
#line 100 "make.m"
        MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 6)));
#line 100 "make.m"
        MR_Word make__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 7)));
#line 100 "make.m"
        MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 8)));
#line 100 "make.m"
        MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 9)));
#line 100 "make.m"
        MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 10)));
#line 100 "make.m"
        MR_Word make__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 11)));
#line 100 "make.m"
        MR_Word make__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Integer make__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 17)));
#line 100 "make.m"
        MR_Word make__V_42_42;

#line 100 "make.m"
        {
#line 100 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[6], &make__V_42_42, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_23_23)));
        }
#line 7205 "make.c"
        make__succeeded = (make__V_42_42 == (MR_Integer) 0);
#line 100 "make.m"
        make__succeeded = !(make__succeeded);
#line 100 "make.m"
        if (make__succeeded)
#line 100 "make.m"
          *make__HeadVar__1_1 = make__V_42_42;
#line 100 "make.m"
        else
#line 100 "make.m"
          {
#line 100 "make.m"
            MR_Word make__V_43_43;

#line 100 "make.m"
            {
#line 100 "make.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], &make__V_43_43, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_24_24)));
            }
#line 7225 "make.c"
            make__succeeded = (make__V_43_43 == (MR_Integer) 0);
#line 100 "make.m"
            make__succeeded = !(make__succeeded);
#line 100 "make.m"
            if (make__succeeded)
#line 100 "make.m"
              *make__HeadVar__1_1 = make__V_43_43;
#line 100 "make.m"
            else
#line 100 "make.m"
              {
#line 100 "make.m"
                MR_Word make__V_44_44;

#line 100 "make.m"
                {
#line 100 "make.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[7], &make__V_44_44, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_25_25)));
                }
#line 7245 "make.c"
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
                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_45_45, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_26_26)));
                    }
#line 7265 "make.c"
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
                          mercury__builtin__compare_3_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variables_0, &make__V_46_46, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_27_27)));
                        }
#line 7285 "make.c"
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
                              make____Compare____module_index_map_0_0(&make__V_47_47, make__V_9_9, make__V_28_28);
                            }
#line 7305 "make.c"
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
                                  make____Compare____dependency_file_index_map_0_0(&make__V_48_48, make__V_10_10, make__V_29_29);
                                }
#line 7325 "make.c"
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
                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[8], &make__V_49_49, ((MR_Box) (make__V_11_11)), ((MR_Box) (make__V_30_30)));
                                    }
#line 7345 "make.c"
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
                                          mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0, &make__V_50_50, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_31_31)));
                                        }
#line 7365 "make.c"
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
                                              mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0, &make__V_51_51, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_32_32)));
                                            }
#line 7385 "make.c"
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
                                                  mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0, &make__V_52_52, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_33_33)));
                                                }
#line 7405 "make.c"
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
                                                      mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0, &make__V_53_53, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_34_34)));
                                                    }
#line 7425 "make.c"
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
                                                        MR_Integer make__V_81_81 = (MR_Integer) make__V_16_16;
#line 100 "make.m"
                                                        MR_Integer make__V_82_82 = (MR_Integer) make__V_35_35;

#line 100 "make.m"
                                                        {
#line 100 "make.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_54_54, make__V_81_81, make__V_82_82);
                                                        }
#line 7449 "make.c"
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
                                                            MR_Integer make__V_83_83 = (MR_Integer) make__V_17_17;
#line 100 "make.m"
                                                            MR_Integer make__V_84_84 = (MR_Integer) make__V_36_36;

#line 100 "make.m"
                                                            {
#line 100 "make.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_55_55, make__V_83_83, make__V_84_84);
                                                            }
#line 7473 "make.c"
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
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[4], &make__V_56_56, ((MR_Box) (make__V_18_18)), ((MR_Box) (make__V_37_37)));
                                                                }
#line 7493 "make.c"
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
                                                                    {
#line 100 "make.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[5], &make__V_57_57, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_38_38)));
                                                                    }
#line 7513 "make.c"
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
                                                                        {
#line 100 "make.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[6], &make__V_58_58, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_39_39)));
                                                                        }
#line 7533 "make.c"
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
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_59_59, make__V_21_21, make__V_40_40);
                                                                            }
#line 7553 "make.c"
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
                                                                                {
#line 100 "make.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[7], make__HeadVar__1_1, ((MR_Box) (make__V_22_22)), ((MR_Box) (make__V_41_41)));
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
    MR_Integer make__CastX_41 = (MR_Integer) make__HeadVar__1_1;
#line 100 "make.m"
    MR_Integer make__CastY_42 = (MR_Integer) make__HeadVar__2_2;

#line 100 "make.m"
    make__succeeded = (make__CastX_41 == make__CastY_42);
#line 100 "make.m"
    if (make__succeeded)
#line 100 "make.m"
      make__succeeded = MR_TRUE;
#line 100 "make.m"
    else
#line 100 "make.m"
      {
#line 100 "make.m"
        MR_Word make__TypeInfo_44_44;
#line 100 "make.m"
        MR_Word make__TypeInfo_45_45;
#line 100 "make.m"
        MR_Word make__TypeInfo_46_46;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_47_47;
#line 100 "make.m"
        MR_Word make__TypeInfo_48_48;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_49_49;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_50_50;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_51_51;
#line 100 "make.m"
        MR_Word make__TypeCtorInfo_52_52;
#line 100 "make.m"
        MR_Word make__TypeInfo_53_53;
#line 100 "make.m"
        MR_Word make__TypeInfo_54_54;
#line 100 "make.m"
        MR_Word make__TypeInfo_55_55;
#line 100 "make.m"
        MR_Word make__TypeInfo_56_56;
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
        MR_Word make__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Integer make__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 17)));
#line 100 "make.m"
        MR_Word make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "make.m"
        MR_Word make__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "make.m"
        MR_Word make__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "make.m"
        MR_Word make__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "make.m"
        MR_Word make__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "make.m"
        MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "make.m"
        MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 6)));
#line 100 "make.m"
        MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 7)));
#line 100 "make.m"
        MR_Word make__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 8)));
#line 100 "make.m"
        MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 9)));
#line 100 "make.m"
        MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 10)));
#line 100 "make.m"
        MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 11)));
#line 100 "make.m"
        MR_Word make__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "make.m"
        MR_Word make__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 13)));
#line 100 "make.m"
        MR_Word make__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 14)));
#line 100 "make.m"
        MR_Word make__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 15)));
#line 100 "make.m"
        MR_Integer make__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 16)));
#line 100 "make.m"
        MR_Word make__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 17)));

#line 7746 "make.c"
        {
#line 7748 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[6], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_22_22)));
        }
#line 100 "make.m"
        if (make__succeeded)
#line 100 "make.m"
          {
#line 7755 "make.c"
            make__TypeInfo_44_44 = (MR_Word) &make_scalar_common_1[5];
#line 7757 "make.c"
            {
#line 7759 "make.c"
              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_44_44, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_23_23)));
            }
#line 100 "make.m"
            if (make__succeeded)
#line 100 "make.m"
              {
#line 7766 "make.c"
                make__TypeInfo_45_45 = (MR_Word) &make_scalar_common_1[7];
#line 7768 "make.c"
                {
#line 7770 "make.c"
                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_45_45, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_24_24)));
                }
#line 100 "make.m"
                if (make__succeeded)
#line 100 "make.m"
                  {
#line 7777 "make.c"
                    make__TypeInfo_46_46 = (MR_Word) &make_scalar_common_2[3];
#line 7779 "make.c"
                    {
#line 7781 "make.c"
                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_46_46, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_25_25)));
                    }
#line 100 "make.m"
                    if (make__succeeded)
#line 100 "make.m"
                      {
#line 7788 "make.c"
                        make__TypeCtorInfo_47_47 = (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variables_0;
#line 7790 "make.c"
                        {
#line 7792 "make.c"
                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_47_47, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_26_26)));
                        }
#line 100 "make.m"
                        if (make__succeeded)
#line 100 "make.m"
                          {
#line 7799 "make.c"
                            {
#line 7801 "make.c"
                              make__succeeded = make____Unify____module_index_map_0_0(make__V_8_8, make__V_27_27);
                            }
#line 100 "make.m"
                            if (make__succeeded)
#line 100 "make.m"
                              {
#line 7808 "make.c"
                                {
#line 7810 "make.c"
                                  make__succeeded = make____Unify____dependency_file_index_map_0_0(make__V_9_9, make__V_28_28);
                                }
#line 100 "make.m"
                                if (make__succeeded)
#line 100 "make.m"
                                  {
#line 7817 "make.c"
                                    make__TypeInfo_48_48 = (MR_Word) &make_scalar_common_1[8];
#line 7819 "make.c"
                                    {
#line 7821 "make.c"
                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_48_48, ((MR_Box) (make__V_10_10)), ((MR_Box) (make__V_29_29)));
                                    }
#line 100 "make.m"
                                    if (make__succeeded)
#line 100 "make.m"
                                      {
#line 7828 "make.c"
                                        make__TypeCtorInfo_49_49 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0;
#line 7830 "make.c"
                                        {
#line 7832 "make.c"
                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_49_49, ((MR_Box) (make__V_11_11)), ((MR_Box) (make__V_30_30)));
                                        }
#line 100 "make.m"
                                        if (make__succeeded)
#line 100 "make.m"
                                          {
#line 7839 "make.c"
                                            make__TypeCtorInfo_50_50 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0;
#line 7841 "make.c"
                                            {
#line 7843 "make.c"
                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_50_50, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_31_31)));
                                            }
#line 100 "make.m"
                                            if (make__succeeded)
#line 100 "make.m"
                                              {
#line 7850 "make.c"
                                                make__TypeCtorInfo_51_51 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0;
#line 7852 "make.c"
                                                {
#line 7854 "make.c"
                                                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_51_51, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_32_32)));
                                                }
#line 100 "make.m"
                                                if (make__succeeded)
#line 100 "make.m"
                                                  {
#line 7861 "make.c"
                                                    make__TypeCtorInfo_52_52 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0;
#line 7863 "make.c"
                                                    {
#line 7865 "make.c"
                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_52_52, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_33_33)));
                                                    }
#line 100 "make.m"
                                                    if (make__succeeded)
#line 100 "make.m"
                                                      {
#line 7872 "make.c"
                                                        make__succeeded = (make__V_15_15 == make__V_34_34);
#line 100 "make.m"
                                                        if (make__succeeded)
#line 100 "make.m"
                                                          {
#line 7878 "make.c"
                                                            make__succeeded = (make__V_16_16 == make__V_35_35);
#line 100 "make.m"
                                                            if (make__succeeded)
#line 100 "make.m"
                                                              {
#line 7884 "make.c"
                                                                make__TypeInfo_53_53 = (MR_Word) &make_scalar_common_2[4];
#line 7886 "make.c"
                                                                {
#line 7888 "make.c"
                                                                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_53_53, ((MR_Box) (make__V_17_17)), ((MR_Box) (make__V_36_36)));
                                                                }
#line 100 "make.m"
                                                                if (make__succeeded)
#line 100 "make.m"
                                                                  {
#line 7895 "make.c"
                                                                    make__TypeInfo_54_54 = (MR_Word) &make_scalar_common_2[5];
#line 7897 "make.c"
                                                                    {
#line 7899 "make.c"
                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_54_54, ((MR_Box) (make__V_18_18)), ((MR_Box) (make__V_37_37)));
                                                                    }
#line 100 "make.m"
                                                                    if (make__succeeded)
#line 100 "make.m"
                                                                      {
#line 7906 "make.c"
                                                                        make__TypeInfo_55_55 = (MR_Word) &make_scalar_common_2[6];
#line 7908 "make.c"
                                                                        {
#line 7910 "make.c"
                                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_55_55, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_38_38)));
                                                                        }
#line 100 "make.m"
                                                                        if (make__succeeded)
#line 100 "make.m"
                                                                          {
#line 7917 "make.c"
                                                                            make__succeeded = (make__V_20_20 == make__V_39_39);
#line 100 "make.m"
                                                                            if (make__succeeded)
#line 100 "make.m"
                                                                              {
#line 7923 "make.c"
                                                                                make__TypeInfo_56_56 = (MR_Word) &make_scalar_common_2[7];
#line 7925 "make.c"
                                                                                {
#line 7927 "make.c"
                                                                                  return make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_56_56, ((MR_Box) (make__V_21_21)), ((MR_Box) (make__V_40_40)));
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

#line 191 "make.m"
void MR_CALL 
make____Compare____make_error_0_0(
#line 191 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 191 "make.m"
  MR_Word make__HeadVar__2_2,
#line 191 "make.m"
  MR_Word make__HeadVar__3_3)
#line 191 "make.m"
{
#line 191 "make.m"
  {
#line 191 "make.m"
    MR_bool make__succeeded;
#line 191 "make.m"
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
#line 191 "make.m"
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

#line 191 "make.m"
    make__succeeded = (make__CastX_22 == make__CastY_23);
#line 191 "make.m"
    if (make__succeeded)
#line 7999 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 191 "make.m"
    else
#line 191 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 191 "make.m"
        {
#line 191 "make.m"
          MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 191 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 191 "make.m"
            {
#line 191 "make.m"
              MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

#line 191 "make.m"
              {
#line 191 "make.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(make__HeadVar__1_1, make__V_27_27, make__V_13_13);
#line 191 "make.m"
                return;
              }
#line 191 "make.m"
            }
#line 191 "make.m"
          else
#line 191 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8030 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 191 "make.m"
            else
#line 8034 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 191 "make.m"
        }
#line 191 "make.m"
      else
#line 191 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 191 "make.m"
          {
#line 191 "make.m"
            MR_String make__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 191 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8049 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 191 "make.m"
            else
#line 191 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 191 "make.m"
                {
#line 191 "make.m"
                  MR_String make__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

#line 191 "make.m"
                  {
#line 191 "make.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
#line 191 "make.m"
                    return;
                  }
#line 191 "make.m"
                }
#line 191 "make.m"
              else
#line 8071 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 191 "make.m"
          }
#line 191 "make.m"
        else
#line 191 "make.m"
          {
#line 191 "make.m"
            MR_Word make__V_29_29 = (MR_Word) MR_body(((MR_Word) make__HeadVar__2_2), (MR_Integer) 0);

#line 191 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8084 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 191 "make.m"
            else
#line 191 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8090 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 191 "make.m"
              else
#line 191 "make.m"
                {
#line 191 "make.m"
                  MR_Word make__V_5_5 = (MR_Word) MR_body(((MR_Word) make__HeadVar__3_3), (MR_Integer) 0);

#line 191 "make.m"
                  {
#line 191 "make.m"
                    make____Compare____target_file_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
#line 191 "make.m"
                    return;
                  }
#line 191 "make.m"
                }
#line 191 "make.m"
          }
#line 191 "make.m"
  }
#line 191 "make.m"
}

#line 191 "make.m"
MR_bool MR_CALL 
make____Unify____make_error_0_0(
#line 191 "make.m"
  MR_Word make__HeadVar__1_1,
#line 191 "make.m"
  MR_Word make__HeadVar__2_2)
#line 191 "make.m"
{
#line 191 "make.m"
  {
#line 191 "make.m"
    MR_bool make__succeeded;
#line 191 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 191 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 191 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 191 "make.m"
    if (make__succeeded)
#line 191 "make.m"
      make__succeeded = MR_TRUE;
#line 191 "make.m"
    else
#line 191 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 191 "make.m"
        {
#line 191 "make.m"
          MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 191 "make.m"
          MR_Word make__V_6_6;

#line 191 "make.m"
          make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 191 "make.m"
          if (make__succeeded)
#line 191 "make.m"
            {
#line 191 "make.m"
              make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 8158 "make.c"
              {
#line 8160 "make.c"
                return make__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(make__V_5_5, make__V_6_6);
              }
#line 191 "make.m"
            }
#line 191 "make.m"
        }
#line 191 "make.m"
      else
#line 191 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 191 "make.m"
          {
#line 191 "make.m"
            MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 191 "make.m"
            MR_String make__V_8_8;

#line 191 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 191 "make.m"
            if (make__succeeded)
#line 191 "make.m"
              {
#line 191 "make.m"
                make__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 8186 "make.c"
                make__succeeded = (strcmp(make__V_7_7, make__V_8_8) == 0);
#line 191 "make.m"
              }
#line 191 "make.m"
          }
#line 191 "make.m"
        else
#line 191 "make.m"
          {
#line 191 "make.m"
            MR_Word make__V_3_3 = (MR_Word) MR_body(((MR_Word) make__HeadVar__1_1), (MR_Integer) 0);
#line 191 "make.m"
            MR_Word make__V_4_4;

#line 191 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 191 "make.m"
            if (make__succeeded)
#line 191 "make.m"
              {
#line 191 "make.m"
                make__V_4_4 = (MR_Word) MR_body(((MR_Word) make__HeadVar__2_2), (MR_Integer) 0);
#line 8209 "make.c"
                {
#line 8211 "make.c"
                  return make__succeeded = make____Unify____target_file_0_0(make__V_3_3, make__V_4_4);
                }
#line 191 "make.m"
              }
#line 191 "make.m"
          }
#line 191 "make.m"
    return make__succeeded;
#line 191 "make.m"
  }
#line 191 "make.m"
}

#line 270 "make.m"
void MR_CALL 
make____Compare____linked_target_file_0_0(
#line 270 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 270 "make.m"
  MR_Word make__HeadVar__2_2,
#line 270 "make.m"
  MR_Word make__HeadVar__3_3)
#line 270 "make.m"
{
#line 270 "make.m"
  {
#line 270 "make.m"
    MR_bool make__succeeded;
#line 270 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 270 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 270 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 270 "make.m"
    if (make__succeeded)
#line 8249 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "make.m"
    else
#line 270 "make.m"
      {
#line 270 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 270 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 270 "make.m"
        MR_Word make__V_8_8;

#line 270 "make.m"
        {
#line 270 "make.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 8271 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 270 "make.m"
        make__succeeded = !(make__succeeded);
#line 270 "make.m"
        if (make__succeeded)
#line 270 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 270 "make.m"
        else
#line 270 "make.m"
          {
#line 270 "make.m"
            MR_Integer make__V_13_13 = (MR_Integer) make__V_5_5;
#line 270 "make.m"
            MR_Integer make__V_14_14 = (MR_Integer) make__V_7_7;

#line 270 "make.m"
            {
#line 270 "make.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_13_13, make__V_14_14);
#line 270 "make.m"
              return;
            }
#line 270 "make.m"
          }
#line 270 "make.m"
      }
#line 270 "make.m"
  }
#line 270 "make.m"
}

#line 270 "make.m"
MR_bool MR_CALL 
make____Unify____linked_target_file_0_0(
#line 270 "make.m"
  MR_Word make__HeadVar__1_1,
#line 270 "make.m"
  MR_Word make__HeadVar__2_2)
#line 270 "make.m"
{
#line 270 "make.m"
  {
#line 270 "make.m"
    MR_bool make__succeeded;
#line 270 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 270 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 270 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 270 "make.m"
    if (make__succeeded)
#line 270 "make.m"
      make__succeeded = MR_TRUE;
#line 270 "make.m"
    else
#line 270 "make.m"
      {
#line 270 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8341 "make.c"
        {
#line 8343 "make.c"
          make__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 270 "make.m"
        if (make__succeeded)
#line 8348 "make.c"
          make__succeeded = (make__V_4_4 == make__V_6_6);
#line 270 "make.m"
      }
#line 270 "make.m"
    return make__succeeded;
#line 270 "make.m"
  }
#line 270 "make.m"
}

#line 585 "make.m"
void MR_CALL 
make____Compare____last_hash_0_0(
#line 585 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 585 "make.m"
  MR_Word make__HeadVar__2_2,
#line 585 "make.m"
  MR_Word make__HeadVar__3_3)
#line 585 "make.m"
{
#line 585 "make.m"
  {
#line 585 "make.m"
    MR_bool make__succeeded;
#line 585 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 585 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 585 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 585 "make.m"
    if (make__succeeded)
#line 8383 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 585 "make.m"
    else
#line 585 "make.m"
      {
#line 585 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 585 "make.m"
        MR_String make__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 585 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 585 "make.m"
        MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 585 "make.m"
        MR_Word make__V_8_8;

#line 585 "make.m"
        {
#line 585 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_8_8, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_6_6)));
        }
#line 8405 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 585 "make.m"
        make__succeeded = !(make__succeeded);
#line 585 "make.m"
        if (make__succeeded)
#line 585 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 585 "make.m"
        else
#line 585 "make.m"
          {
#line 585 "make.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
#line 585 "make.m"
            return;
          }
#line 585 "make.m"
      }
#line 585 "make.m"
  }
#line 585 "make.m"
}

#line 585 "make.m"
MR_bool MR_CALL 
make____Unify____last_hash_0_0(
#line 585 "make.m"
  MR_Word make__HeadVar__1_1,
#line 585 "make.m"
  MR_Word make__HeadVar__2_2)
#line 585 "make.m"
{
#line 585 "make.m"
  {
#line 585 "make.m"
    MR_bool make__succeeded;
#line 585 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 585 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 585 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 585 "make.m"
    if (make__succeeded)
#line 585 "make.m"
      make__succeeded = MR_TRUE;
#line 585 "make.m"
    else
#line 585 "make.m"
      {
#line 585 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 585 "make.m"
        MR_String make__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 585 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 585 "make.m"
        MR_String make__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8466 "make.c"
        {
#line 8468 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_5_5)));
        }
#line 585 "make.m"
        if (make__succeeded)
#line 8473 "make.c"
          make__succeeded = (strcmp(make__V_4_4, make__V_6_6) == 0);
#line 585 "make.m"
      }
#line 585 "make.m"
    return make__succeeded;
#line 585 "make.m"
  }
#line 585 "make.m"
}

#line 256 "make.m"
void MR_CALL 
make____Compare____file_timestamps_0_0(
#line 256 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 256 "make.m"
  MR_Word make__HeadVar__2_2,
#line 256 "make.m"
  MR_Word make__HeadVar__3_3)
#line 256 "make.m"
{
#line 256 "make.m"
  {
#line 256 "make.m"
    MR_bool make__succeeded;
#line 256 "make.m"
    MR_Word make__Cast_HeadVar1_4 = make__HeadVar__2_2;
#line 256 "make.m"
    MR_Word make__Cast_HeadVar2_5 = make__HeadVar__3_3;

#line 256 "make.m"
    {
#line 256 "make.m"
      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], make__HeadVar__1_1, ((MR_Box) (make__Cast_HeadVar1_4)), ((MR_Box) (make__Cast_HeadVar2_5)));
#line 256 "make.m"
      return;
    }
#line 256 "make.m"
  }
#line 256 "make.m"
}

#line 256 "make.m"
MR_bool MR_CALL 
make____Unify____file_timestamps_0_0(
#line 256 "make.m"
  MR_Word make__HeadVar__1_1,
#line 256 "make.m"
  MR_Word make__HeadVar__2_2)
#line 256 "make.m"
{
#line 256 "make.m"
  {
#line 256 "make.m"
    MR_bool make__succeeded;
#line 256 "make.m"
    MR_Word make__Cast_HeadVar1_3 = make__HeadVar__1_1;
#line 256 "make.m"
    MR_Word make__Cast_HeadVar2_4 = make__HeadVar__2_2;

#line 256 "make.m"
    {
#line 256 "make.m"
      return make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[5], ((MR_Box) (make__Cast_HeadVar1_3)), ((MR_Box) (make__Cast_HeadVar2_4)));
    }
#line 256 "make.m"
    return make__succeeded;
#line 256 "make.m"
  }
#line 256 "make.m"
}

#line 258 "make.m"
void MR_CALL 
make____Compare____dependency_status_0_0(
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
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 258 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 258 "make.m"
    {
#line 258 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 258 "make.m"
      return;
    }
#line 258 "make.m"
  }
#line 258 "make.m"
}

#line 258 "make.m"
MR_bool MR_CALL 
make____Unify____dependency_status_0_0(
#line 258 "make.m"
  MR_Word make__HeadVar__2_1,
#line 258 "make.m"
  MR_Word make__HeadVar__2_2)
#line 258 "make.m"
{
#line 8587 "make.c"
  {
#line 8589 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 8592 "make.c"
    return make__succeeded;
#line 8594 "make.c"
  }
#line 258 "make.m"
}

#line 183 "make.m"
void MR_CALL 
make____Compare____dependency_file_index_map_0_0(
#line 183 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 183 "make.m"
  MR_Word make__HeadVar__2_2,
#line 183 "make.m"
  MR_Word make__HeadVar__3_3)
#line 183 "make.m"
{
#line 183 "make.m"
  {
#line 183 "make.m"
    MR_bool make__succeeded;
#line 183 "make.m"
    MR_Integer make__CastX_12 = (MR_Integer) make__HeadVar__2_2;
#line 183 "make.m"
    MR_Integer make__CastY_13 = (MR_Integer) make__HeadVar__3_3;

#line 183 "make.m"
    make__succeeded = (make__CastX_12 == make__CastY_13);
#line 183 "make.m"
    if (make__succeeded)
#line 8623 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 183 "make.m"
    else
#line 183 "make.m"
      {
#line 183 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 183 "make.m"
        MR_Box make__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 183 "make.m"
        MR_Integer make__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));
#line 183 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 183 "make.m"
        MR_Box make__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 183 "make.m"
        MR_Integer make__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 2)));
#line 183 "make.m"
        MR_Word make__V_10_10;

#line 183 "make.m"
        {
#line 183 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[4], &make__V_10_10, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_7_7)));
        }
#line 8649 "make.c"
        make__succeeded = (make__V_10_10 == (MR_Integer) 0);
#line 183 "make.m"
        make__succeeded = !(make__succeeded);
#line 183 "make.m"
        if (make__succeeded)
#line 183 "make.m"
          *make__HeadVar__1_1 = make__V_10_10;
#line 183 "make.m"
        else
#line 183 "make.m"
          {
#line 183 "make.m"
            MR_Word make__V_11_11;

#line 183 "make.m"
            {
#line 183 "make.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[2], &make__V_11_11, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_8_8)));
            }
#line 8669 "make.c"
            make__succeeded = (make__V_11_11 == (MR_Integer) 0);
#line 183 "make.m"
            make__succeeded = !(make__succeeded);
#line 183 "make.m"
            if (make__succeeded)
#line 183 "make.m"
              *make__HeadVar__1_1 = make__V_11_11;
#line 183 "make.m"
            else
#line 183 "make.m"
              {
#line 183 "make.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_6_6, make__V_9_9);
#line 183 "make.m"
                return;
              }
#line 183 "make.m"
          }
#line 183 "make.m"
      }
#line 183 "make.m"
  }
#line 183 "make.m"
}

#line 183 "make.m"
MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0(
#line 183 "make.m"
  MR_Word make__HeadVar__1_1,
#line 183 "make.m"
  MR_Word make__HeadVar__2_2)
#line 183 "make.m"
{
#line 183 "make.m"
  {
#line 183 "make.m"
    MR_bool make__succeeded;
#line 183 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 183 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 183 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 183 "make.m"
    if (make__succeeded)
#line 183 "make.m"
      make__succeeded = MR_TRUE;
#line 183 "make.m"
    else
#line 183 "make.m"
      {
#line 183 "make.m"
        MR_Word make__TypeCtorInfo_12_12;
#line 183 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 183 "make.m"
        MR_Box make__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 183 "make.m"
        MR_Integer make__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 2)));
#line 183 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 183 "make.m"
        MR_Box make__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 183 "make.m"
        MR_Integer make__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 2)));

#line 8738 "make.c"
        {
#line 8740 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[4], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 183 "make.m"
        if (make__succeeded)
#line 183 "make.m"
          {
#line 8747 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 8749 "make.c"
            {
#line 8751 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 183 "make.m"
            if (make__succeeded)
#line 8756 "make.c"
              make__succeeded = (make__V_5_5 == make__V_8_8);
#line 183 "make.m"
          }
#line 183 "make.m"
      }
#line 183 "make.m"
    return make__succeeded;
#line 183 "make.m"
  }
#line 183 "make.m"
}

#line 196 "make.m"
void MR_CALL 
make____Compare____compilation_task_type_0_0(
#line 196 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 196 "make.m"
  MR_Word make__HeadVar__2_2,
#line 196 "make.m"
  MR_Word make__HeadVar__3_3)
#line 196 "make.m"
{
#line 196 "make.m"
  {
#line 196 "make.m"
    MR_bool make__succeeded;
#line 196 "make.m"
    MR_Integer make__CastX_54 = (MR_Integer) make__HeadVar__2_2;
#line 196 "make.m"
    MR_Integer make__CastY_55 = (MR_Integer) make__HeadVar__3_3;

#line 196 "make.m"
    make__succeeded = (make__CastX_54 == make__CastY_55);
#line 196 "make.m"
    if (make__succeeded)
#line 8793 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 196 "make.m"
    else
#line 196 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 196 "make.m"
        {
#line 196 "make.m"
          MR_String make__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 196 "make.m"
          MR_Word make__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 196 "make.m"
            {
#line 196 "make.m"
              MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "make.m"
              MR_String make__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "make.m"
              MR_Word make__V_53_53;
#line 196 "make.m"
              MR_Integer make__V_68_68 = (MR_Integer) make__V_63_63;
#line 196 "make.m"
              MR_Integer make__V_69_69 = (MR_Integer) make__V_51_51;

#line 196 "make.m"
              {
#line 196 "make.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_53_53, make__V_68_68, make__V_69_69);
              }
#line 8826 "make.c"
              make__succeeded = (make__V_53_53 == (MR_Integer) 0);
#line 196 "make.m"
              make__succeeded = !(make__succeeded);
#line 196 "make.m"
              if (make__succeeded)
#line 196 "make.m"
                *make__HeadVar__1_1 = make__V_53_53;
#line 196 "make.m"
              else
#line 196 "make.m"
                {
#line 196 "make.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_62_62, make__V_52_52);
#line 196 "make.m"
                  return;
                }
#line 196 "make.m"
            }
#line 196 "make.m"
          else
#line 196 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8849 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "make.m"
            else
#line 196 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8855 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "make.m"
              else
#line 8859 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "make.m"
        }
#line 196 "make.m"
      else
#line 196 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 196 "make.m"
          {
#line 196 "make.m"
            MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 1)));
#line 196 "make.m"
            MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8876 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "make.m"
            else
#line 196 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 196 "make.m"
                {
#line 196 "make.m"
                  MR_Word make__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "make.m"
                  MR_Word make__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "make.m"
                  MR_Word make__V_34_34;
#line 196 "make.m"
                  MR_Integer make__V_70_70 = (MR_Integer) make__V_65_65;
#line 196 "make.m"
                  MR_Integer make__V_71_71 = (MR_Integer) make__V_32_32;

#line 196 "make.m"
                  {
#line 196 "make.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_34_34, make__V_70_70, make__V_71_71);
                  }
#line 8900 "make.c"
                  make__succeeded = (make__V_34_34 == (MR_Integer) 0);
#line 196 "make.m"
                  make__succeeded = !(make__succeeded);
#line 196 "make.m"
                  if (make__succeeded)
#line 196 "make.m"
                    *make__HeadVar__1_1 = make__V_34_34;
#line 196 "make.m"
                  else
#line 196 "make.m"
                    {
#line 196 "make.m"
                      MR_Integer make__V_72_72 = (MR_Integer) make__V_64_64;
#line 196 "make.m"
                      MR_Integer make__V_73_73 = (MR_Integer) make__V_33_33;

#line 196 "make.m"
                      {
#line 196 "make.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_72_72, make__V_73_73);
#line 196 "make.m"
                        return;
                      }
#line 196 "make.m"
                    }
#line 196 "make.m"
                }
#line 196 "make.m"
              else
#line 196 "make.m"
                if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8932 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "make.m"
                else
#line 8936 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "make.m"
          }
#line 196 "make.m"
        else
#line 196 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 196 "make.m"
            {
#line 196 "make.m"
              MR_Word make__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8951 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "make.m"
              else
#line 196 "make.m"
                if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8957 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "make.m"
                else
#line 196 "make.m"
                  if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 196 "make.m"
                    {
#line 196 "make.m"
                      MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "make.m"
                      MR_Integer make__V_74_74 = (MR_Integer) make__V_66_66;
#line 196 "make.m"
                      MR_Integer make__V_75_75 = (MR_Integer) make__V_5_5;

#line 196 "make.m"
                      {
#line 196 "make.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_74_74, make__V_75_75);
#line 196 "make.m"
                        return;
                      }
#line 196 "make.m"
                    }
#line 196 "make.m"
                  else
#line 8983 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "make.m"
            }
#line 196 "make.m"
          else
#line 196 "make.m"
            {
#line 196 "make.m"
              MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8996 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "make.m"
              else
#line 196 "make.m"
                if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 9002 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "make.m"
                else
#line 196 "make.m"
                  if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 9008 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "make.m"
                  else
#line 196 "make.m"
                    {
#line 196 "make.m"
                      MR_Word make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "make.m"
                      MR_Integer make__V_76_76 = (MR_Integer) make__V_67_67;
#line 196 "make.m"
                      MR_Integer make__V_77_77 = (MR_Integer) make__V_17_17;

#line 196 "make.m"
                      {
#line 196 "make.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_76_76, make__V_77_77);
#line 196 "make.m"
                        return;
                      }
#line 196 "make.m"
                    }
#line 196 "make.m"
            }
#line 196 "make.m"
  }
#line 196 "make.m"
}

#line 196 "make.m"
MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0(
#line 196 "make.m"
  MR_Word make__HeadVar__1_1,
#line 196 "make.m"
  MR_Word make__HeadVar__2_2)
#line 196 "make.m"
{
#line 196 "make.m"
  {
#line 196 "make.m"
    MR_bool make__succeeded;
#line 196 "make.m"
    MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 196 "make.m"
    MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 196 "make.m"
    make__succeeded = (make__CastX_15 == make__CastY_16);
#line 196 "make.m"
    if (make__succeeded)
#line 196 "make.m"
      make__succeeded = MR_TRUE;
#line 196 "make.m"
    else
#line 196 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 196 "make.m"
        {
#line 196 "make.m"
          MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "make.m"
          MR_String make__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "make.m"
          MR_Word make__V_13_13;
#line 196 "make.m"
          MR_String make__V_14_14;

#line 196 "make.m"
          make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 196 "make.m"
          if (make__succeeded)
#line 196 "make.m"
            {
#line 196 "make.m"
              make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "make.m"
              make__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 9086 "make.c"
              make__succeeded = (make__V_11_11 == make__V_13_13);
#line 196 "make.m"
              if (make__succeeded)
#line 9090 "make.c"
                make__succeeded = (strcmp(make__V_12_12, make__V_14_14) == 0);
#line 196 "make.m"
            }
#line 196 "make.m"
        }
#line 196 "make.m"
      else
#line 196 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 196 "make.m"
          {
#line 196 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "make.m"
            MR_Word make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "make.m"
            MR_Word make__V_9_9;
#line 196 "make.m"
            MR_Word make__V_10_10;

#line 196 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 196 "make.m"
            if (make__succeeded)
#line 196 "make.m"
              {
#line 196 "make.m"
                make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "make.m"
                make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 1)));
#line 9121 "make.c"
                make__succeeded = (make__V_7_7 == make__V_9_9);
#line 196 "make.m"
                if (make__succeeded)
#line 9125 "make.c"
                  make__succeeded = (make__V_8_8 == make__V_10_10);
#line 196 "make.m"
              }
#line 196 "make.m"
          }
#line 196 "make.m"
        else
#line 196 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 196 "make.m"
            {
#line 196 "make.m"
              MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "make.m"
              MR_Word make__V_4_4;

#line 196 "make.m"
              make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 196 "make.m"
              if (make__succeeded)
#line 196 "make.m"
                {
#line 196 "make.m"
                  make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 9150 "make.c"
                  make__succeeded = (make__V_3_3 == make__V_4_4);
#line 196 "make.m"
                }
#line 196 "make.m"
            }
#line 196 "make.m"
          else
#line 196 "make.m"
            {
#line 196 "make.m"
              MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "make.m"
              MR_Word make__V_6_6;

#line 196 "make.m"
              make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 196 "make.m"
              if (make__succeeded)
#line 196 "make.m"
                {
#line 196 "make.m"
                  make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 9173 "make.c"
                  make__succeeded = (make__V_5_5 == make__V_6_6);
#line 196 "make.m"
                }
#line 196 "make.m"
            }
#line 196 "make.m"
    return make__succeeded;
#line 196 "make.m"
  }
#line 196 "make.m"
}

#line 241 "make.m"
void MR_CALL 
make____Compare____c_header_type_0_0(
#line 241 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 241 "make.m"
  MR_Word make__HeadVar__2_2,
#line 241 "make.m"
  MR_Word make__HeadVar__3_3)
#line 241 "make.m"
{
#line 241 "make.m"
  {
#line 241 "make.m"
    MR_bool make__succeeded;
#line 241 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 241 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 241 "make.m"
    {
#line 241 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 241 "make.m"
      return;
    }
#line 241 "make.m"
  }
#line 241 "make.m"
}

#line 241 "make.m"
MR_bool MR_CALL 
make____Unify____c_header_type_0_0(
#line 241 "make.m"
  MR_Word make__HeadVar__2_1,
#line 241 "make.m"
  MR_Word make__HeadVar__2_2)
#line 241 "make.m"
{
#line 9227 "make.c"
  {
#line 9229 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 9232 "make.c"
    return make__succeeded;
#line 9234 "make.c"
  }
#line 241 "make.m"
}

#line 731 "make.m"
void MR_CALL 
make__write_hash_file_5_p_0(
#line 731 "make.m"
  MR_String make__FileName_6,
#line 731 "make.m"
  MR_String make__Hash_7,
#line 731 "make.m"
  MR_Word * make__Success_8)
#line 731 "make.m"
{
#line 734 "make.m"
  {
#line 734 "make.m"
    MR_bool make__succeeded;
#line 734 "make.m"
    MR_Word make__OpenResult_10;

#line 735 "make.m"
    {
#line 735 "make.m"
      mercury__io__open_output_4_p_0(make__FileName_6, &make__OpenResult_10);
    }
#line 741 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 742 "make.m"
      {
#line 742 "make.m"
        MR_Word make__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OpenResult_10, (MR_Integer) 0)));
#line 742 "make.m"
        MR_String make__V_21_21;

#line 743 "make.m"
        {
#line 743 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
        }
#line 744 "make.m"
        {
#line 744 "make.m"
          mercury__io__write_string_3_p_0(make__FileName_6);
        }
#line 745 "make.m"
        {
#line 745 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
#line 746 "make.m"
        {
#line 746 "make.m"
          make__V_21_21 = mercury__io__error_message_1_f_0(make__Error_12);
        }
#line 746 "make.m"
        {
#line 746 "make.m"
          mercury__io__write_string_3_p_0(make__V_21_21);
        }
#line 747 "make.m"
        {
#line 747 "make.m"
          mercury__io__nl_2_p_0();
        }
#line 748 "make.m"
        *make__Success_8 = (MR_Integer) 0;
#line 742 "make.m"
      }
#line 741 "make.m"
    else
#line 737 "make.m"
      {
#line 737 "make.m"
        MR_Word make__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_10, (MR_Integer) 0)));

#line 738 "make.m"
        {
#line 738 "make.m"
          mercury__io__write_string_4_p_0(make__Stream_11, make__Hash_7);
        }
#line 739 "make.m"
        {
#line 739 "make.m"
          mercury__io__close_output_3_p_0(make__Stream_11);
        }
#line 740 "make.m"
        *make__Success_8 = (MR_Integer) 1;
#line 737 "make.m"
      }
#line 734 "make.m"
  }
#line 731 "make.m"
}

#line 687 "make.m"
void MR_CALL 
make__compare_hash_file_6_p_0(
#line 687 "make.m"
  MR_Word make__Globals_7,
#line 687 "make.m"
  MR_String make__FileName_8,
#line 687 "make.m"
  MR_String make__Hash_9,
#line 687 "make.m"
  MR_Word * make__Same_10)
#line 687 "make.m"
{
#line 690 "make.m"
  {
#line 690 "make.m"
    MR_bool make__succeeded;
#line 690 "make.m"
    MR_Word make__OpenResult_12;
#line 690 "make.m"
    MR_Word make__Verbose_18;

#line 691 "make.m"
    {
#line 691 "make.m"
      mercury__io__open_input_4_p_0(make__FileName_8, &make__OpenResult_12);
    }
#line 710 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_12)) == (MR_mktag((MR_Integer) 1))))
#line 713 "make.m"
      *make__Same_10 = (MR_Integer) 0;
#line 710 "make.m"
    else
#line 693 "make.m"
      {
#line 693 "make.m"
        MR_Word make__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_12, (MR_Integer) 0)));
#line 693 "make.m"
        MR_Word make__ReadResult_14;

#line 694 "make.m"
        {
#line 694 "make.m"
          mercury__io__read_line_as_string_4_p_0(make__Stream_13, &make__ReadResult_14);
        }
#line 702 "make.m"
        if ((make__ReadResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "make.m"
          *make__Same_10 = (MR_Integer) 0;
#line 702 "make.m"
        else
#line 702 "make.m"
          if (((MR_tag((MR_Word) make__ReadResult_14)) == (MR_mktag((MR_Integer) 2))))
#line 707 "make.m"
            *make__Same_10 = (MR_Integer) 0;
#line 702 "make.m"
          else
#line 696 "make.m"
            {
#line 696 "make.m"
              MR_String make__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), make__ReadResult_14, (MR_Integer) 0)));

#line 697 "make.m"
              make__succeeded = (strcmp(make__Line_15, make__Hash_9) == 0);
#line 699 "make.m"
              if (make__succeeded)
#line 698 "make.m"
                *make__Same_10 = (MR_Integer) 1;
#line 699 "make.m"
              else
#line 700 "make.m"
                *make__Same_10 = (MR_Integer) 0;
#line 696 "make.m"
            }
#line 709 "make.m"
        {
#line 709 "make.m"
          mercury__io__close_input_3_p_0(make__Stream_13);
        }
#line 693 "make.m"
      }
#line 715 "make.m"
    {
#line 715 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_7, (MR_Integer) 44, &make__Verbose_18);
    }
#line 727 "make.m"
    if ((make__Verbose_18 == (MR_Integer) 0))
#line 728 "make.m"
      {
#line 728 "make.m"
      }
#line 727 "make.m"
    else
#line 717 "make.m"
      {
#line 718 "make.m"
        {
#line 718 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 719 "make.m"
        {
#line 719 "make.m"
          mercury__io__write_string_3_p_0(make__FileName_8);
        }
#line 723 "make.m"
        if ((*make__Same_10 == (MR_Integer) 0))
#line 724 "make.m"
          {
#line 725 "make.m"
            {
#line 725 "make.m"
              mercury__io__write_string_3_p_0((MR_String) " will be UPDATED.\n");
#line 725 "make.m"
              return;
            }
#line 724 "make.m"
          }
#line 723 "make.m"
        else
#line 721 "make.m"
          {
#line 722 "make.m"
            {
#line 722 "make.m"
              mercury__io__write_string_3_p_0((MR_String) " does not need updating.\n");
#line 722 "make.m"
              return;
            }
#line 721 "make.m"
          }
#line 717 "make.m"
      }
#line 690 "make.m"
  }
#line 687 "make.m"
}

#line 681 "make.m"
MR_bool MR_CALL 
make__is_consequential_option_2_p_0(
#line 681 "make.m"
  MR_Word make__InconsequentialOptions_3,
#line 681 "make.m"
  MR_Word make__HeadVar__2_2)
#line 681 "make.m"
{
#line 684 "make.m"
  {
#line 684 "make.m"
    MR_bool make__succeeded;
#line 684 "make.m"
    MR_Word make__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 684 "make.m"
    MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 685 "make.m"
    {
#line 685 "make.m"
      make__succeeded = mercury__set__contains_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, make__InconsequentialOptions_3, ((MR_Box) (make__Option_4)));
    }
#line 685 "make.m"
    make__succeeded = !(make__succeeded);
#line 684 "make.m"
    return make__succeeded;
#line 684 "make.m"
  }
#line 681 "make.m"
}

#line 677 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 677 "make.m"
  MR_Box make__closure_arg,
#line 677 "make.m"
  MR_Box make__wrapper_arg_1)
#line 677 "make.m"
{
#line 677 "make.m"
  {
#line 677 "make.m"
    MR_bool make__succeeded;
#line 677 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 677 "make.m"
    {
#line 677 "make.m"
      return make__succeeded = make__is_consequential_option_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_Word) make__wrapper_arg_1));
    }
#line 677 "make.m"
    return make__succeeded;
#line 677 "make.m"
  }
#line 677 "make.m"
}

#line 654 "make.m"
void MR_CALL 
make__option_table_hash_4_p_0(
#line 654 "make.m"
  MR_Word make__AllOptionArgs_5,
#line 654 "make.m"
  MR_String * make__Hash_6)
#line 654 "make.m"
{
#line 657 "make.m"
  {
#line 657 "make.m"
    MR_bool make__succeeded;
#line 657 "make.m"
    MR_Word make__OptionsErrors_11;
#line 657 "make.m"
    MR_Word make__AllOptionArgsGlobals_12;
#line 657 "make.m"
    MR_Word make__OptionTable_15;
#line 657 "make.m"
    MR_Word make__OptionList_16;
#line 657 "make.m"
    MR_Word make__InconsequentialOptions_17;
#line 657 "make.m"
    MR_Word make__ConsequentialOptionList_18;
#line 657 "make.m"
    MR_Word make__V_28_28;
#line 657 "make.m"
    MR_String make__V_29_29;
#line 665 "make.m"
    MR_Word make__V_8_8;
#line 665 "make.m"
    MR_Word make__V_9_9;
#line 665 "make.m"
    MR_Word make__V_10_10;

#line 665 "make.m"
    {
#line 665 "make.m"
      libs__handle_options__handle_given_options_8_p_0(make__AllOptionArgs_5, &make__V_8_8, &make__V_9_9, &make__V_10_10, &make__OptionsErrors_11, &make__AllOptionArgsGlobals_12);
    }
#line 669 "make.m"
    if ((make__OptionsErrors_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 668 "make.m"
      {
#line 668 "make.m"
      }
#line 669 "make.m"
    else
#line 670 "make.m"
      {
#line 671 "make.m"
        {
#line 671 "make.m"
          mercury__require__unexpected_2_p_0((MR_String) "make.m", (MR_String) "predicate \140make.option_table_hash\'/4: handle_options returned with errors");
#line 671 "make.m"
          return;
        }
#line 670 "make.m"
      }
#line 674 "make.m"
    {
#line 674 "make.m"
      libs__globals__get_options_2_p_0(make__AllOptionArgsGlobals_12, &make__OptionTable_15);
    }
#line 675 "make.m"
    {
#line 675 "make.m"
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, make__OptionTable_15, &make__OptionList_16);
    }
#line 676 "make.m"
    {
#line 676 "make.m"
      libs__options__inconsequential_options_1_p_0(&make__InconsequentialOptions_17);
    }
#line 677 "make.m"
    {
#line 677 "make.m"
      make__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 677 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 0) = ((MR_Box) (&make_scalar_common_4[2]));
#line 677 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 1) = ((MR_Box) (make__option_table_hash_4_p_0_1));
#line 677 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 677 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 3) = ((MR_Box) (make__InconsequentialOptions_17));
#line 677 "make.m"
    }
#line 677 "make.m"
    {
#line 677 "make.m"
      mercury__list__filter_3_p_0((MR_Word) &make_scalar_common_1[3], make__V_28_28, make__OptionList_16, &make__ConsequentialOptionList_18);
    }
#line 679 "make.m"
    {
#line 679 "make.m"
      make__V_29_29 = mercury__string__string_1_f_0((MR_Word) &make_scalar_common_2[1], ((MR_Box) (make__ConsequentialOptionList_18)));
    }
#line 679 "make.m"
    {
#line 679 "make.m"
      *make__Hash_6 = libs__md4__md4sum_1_f_0(make__V_29_29);
    }
#line 657 "make.m"
  }
#line 654 "make.m"
}

#line 615 "make.m"
void MR_CALL 
make__make_track_flags_files_2_9_p_0(
#line 615 "make.m"
  MR_Word make__Globals_10,
#line 615 "make.m"
  MR_Word make__ModuleName_11,
#line 615 "make.m"
  MR_Word * make__Success_12,
#line 615 "make.m"
  MR_Word make__STATE_VARIABLE_LastHash_0_24,
#line 615 "make.m"
  MR_Word * make__STATE_VARIABLE_LastHash_25,
#line 615 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_26,
#line 615 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_27)
#line 615 "make.m"
{
#line 620 "make.m"
  {
#line 620 "make.m"
    MR_bool make__succeeded;
#line 620 "make.m"
    MR_Word make__OptionsResult_16;
#line 620 "make.m"
    MR_Word make__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 621 "make.m"
    MR_Word make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 621 "make.m"
    MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 621 "make.m"
    MR_Word make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 621 "make.m"
    MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 621 "make.m"
    MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 621 "make.m"
    MR_Word make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
#line 621 "make.m"
    MR_Word make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 621 "make.m"
    MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 8)));
#line 621 "make.m"
    MR_Word make__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 9)));
#line 621 "make.m"
    MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 10)));
#line 621 "make.m"
    MR_Word make__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 11)));
#line 621 "make.m"
    MR_Word make__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 621 "make.m"
    MR_Word make__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 621 "make.m"
    MR_Word make__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 13)));
#line 621 "make.m"
    MR_Word make__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 14)));
#line 621 "make.m"
    MR_Word make__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 15)));
#line 621 "make.m"
    MR_Integer make__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 16)));
#line 621 "make.m"
    MR_Word make__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 17)));

#line 621 "make.m"
    {
#line 621 "make.m"
      make__options_file__lookup_mmc_module_options_6_p_0(make__Globals_10, make__V_30_30, make__ModuleName_11, &make__OptionsResult_16);
    }
#line 649 "make.m"
    if ((make__OptionsResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "make.m"
      {
#line 651 "make.m"
        *make__Success_12 = (MR_Integer) 0;
#line 651 "make.m"
        *make__STATE_VARIABLE_LastHash_25 = make__STATE_VARIABLE_LastHash_0_24;
#line 650 "make.m"
      }
#line 649 "make.m"
    else
#line 624 "make.m"
      {
#line 624 "make.m"
        MR_Word make__ModuleOptionArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OptionsResult_16, (MR_Integer) 0)));
#line 624 "make.m"
        MR_Word make__OptionArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 624 "make.m"
        MR_Word make__AllOptionArgs_19;
#line 624 "make.m"
        MR_String make__Hash_21;
#line 624 "make.m"
        MR_String make__HashFileName_22;
#line 624 "make.m"
        MR_Word make__Same_23;
#line 624 "make.m"
        MR_Word make__V_32_32;
#line 624 "make.m"
        MR_Word make__V_33_33;
#line 625 "make.m"
        MR_Word make__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 625 "make.m"
        MR_Word make__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 625 "make.m"
        MR_Word make__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 625 "make.m"
        MR_Word make__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 625 "make.m"
        MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 625 "make.m"
        MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
#line 625 "make.m"
        MR_Word make__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 625 "make.m"
        MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 8)));
#line 625 "make.m"
        MR_Word make__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 9)));
#line 625 "make.m"
        MR_Word make__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 10)));
#line 625 "make.m"
        MR_Word make__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 11)));
#line 625 "make.m"
        MR_Word make__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 625 "make.m"
        MR_Word make__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "make.m"
        MR_Word make__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 13)));
#line 625 "make.m"
        MR_Word make__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 14)));
#line 625 "make.m"
        MR_Word make__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 15)));
#line 625 "make.m"
        MR_Integer make__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 16)));
#line 625 "make.m"
        MR_Word make__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_26, (MR_Integer) 17)));
#line 634 "make.m"
        MR_String make__HashPrime_20;
#line 632 "make.m"
        MR_Word make__V_79_79;

#line 626 "make.m"
        {
#line 626 "make.m"
          make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "make.m"
          MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) (make__OptionArgs_18));
#line 626 "make.m"
          MR_hl_field(MR_mktag(1), make__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "make.m"
        }
#line 626 "make.m"
        {
#line 626 "make.m"
          make__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "make.m"
          MR_hl_field(MR_mktag(1), make__V_32_32, 0) = ((MR_Box) (make__ModuleOptionArgs_17));
#line 626 "make.m"
          MR_hl_field(MR_mktag(1), make__V_32_32, 1) = ((MR_Box) (make__V_33_33));
#line 626 "make.m"
        }
#line 626 "make.m"
        {
#line 626 "make.m"
          make__AllOptionArgs_19 = mercury__list__condense_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__V_32_32);
        }
#line 632 "make.m"
        make__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_24, (MR_Integer) 0)));
#line 632 "make.m"
        make__HashPrime_20 = ((MR_String) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_24, (MR_Integer) 1)));
#line 632 "make.m"
        {
#line 632 "make.m"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__AllOptionArgs_19)), ((MR_Box) (make__V_79_79)));
        }
#line 634 "make.m"
        if (make__succeeded)
#line 633 "make.m"
          {
#line 633 "make.m"
            make__Hash_21 = make__HashPrime_20;
#line 633 "make.m"
            *make__STATE_VARIABLE_LastHash_25 = make__STATE_VARIABLE_LastHash_0_24;
#line 633 "make.m"
          }
#line 634 "make.m"
        else
#line 635 "make.m"
          {
#line 635 "make.m"
            {
#line 635 "make.m"
              make__option_table_hash_4_p_0(make__AllOptionArgs_19, &make__Hash_21);
            }
#line 636 "make.m"
            {
#line 636 "make.m"
              MR_Word base;
#line 636 "make.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 636 "make.m"
              *make__STATE_VARIABLE_LastHash_25 = base;
#line 636 "make.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__AllOptionArgs_19));
#line 636 "make.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__Hash_21));
#line 636 "make.m"
            }
#line 635 "make.m"
          }
#line 639 "make.m"
        {
#line 639 "make.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__Globals_10, make__ModuleName_11, (MR_String) ".track_flags", (MR_Integer) 0, &make__HashFileName_22);
        }
#line 641 "make.m"
        {
#line 641 "make.m"
          make__compare_hash_file_6_p_0(make__Globals_10, make__HashFileName_22, make__Hash_21, &make__Same_23);
        }
#line 645 "make.m"
        if ((make__Same_23 == (MR_Integer) 0))
#line 647 "make.m"
          {
#line 647 "make.m"
            make__write_hash_file_5_p_0(make__HashFileName_22, make__Hash_21, make__Success_12);
          }
#line 645 "make.m"
        else
#line 644 "make.m"
          *make__Success_12 = (MR_Integer) 1;
#line 624 "make.m"
      }
#line 651 "make.m"
    *make__STATE_VARIABLE_Info_27 = make__STATE_VARIABLE_Info_0_26;
#line 620 "make.m"
  }
#line 615 "make.m"
}

#line 607 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 607 "make.m"
  MR_Box make__closure_arg,
#line 607 "make.m"
  MR_Box make__wrapper_arg_1,
#line 607 "make.m"
  MR_Box make__wrapper_arg_2,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 607 "make.m"
  MR_Box make__wrapper_arg_4,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 607 "make.m"
  MR_Box make__wrapper_arg_6,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 607 "make.m"
  MR_Box make__wrapper_arg_8,
#line 607 "make.m"
  MR_Box * make__wrapper_arg_9)
#line 607 "make.m"
{
#line 607 "make.m"
  {
#line 607 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 607 "make.m"
    MR_Word make__conv2_Success_12;
#line 607 "make.m"
    MR_Word make__conv1_STATE_VARIABLE_LastHash_25;
#line 607 "make.m"
    MR_Word make__conv0_STATE_VARIABLE_Info_27;

#line 607 "make.m"
    {
#line 607 "make.m"
      make__make_track_flags_files_2_9_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv2_Success_12, ((MR_Word) make__wrapper_arg_4), &make__conv1_STATE_VARIABLE_LastHash_25, ((MR_Word) make__wrapper_arg_6), &make__conv0_STATE_VARIABLE_Info_27);
    }
#line 607 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv2_Success_12));
#line 607 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv1_STATE_VARIABLE_LastHash_25));
#line 607 "make.m"
    *make__wrapper_arg_7 = ((MR_Box) (make__conv0_STATE_VARIABLE_Info_27));
#line 607 "make.m"
  }
#line 607 "make.m"
}

#line 597 "make.m"
void MR_CALL 
make__make_track_flags_files_7_p_0(
#line 597 "make.m"
  MR_Word make__Globals_8,
#line 597 "make.m"
  MR_Word make__ModuleName_9,
#line 597 "make.m"
  MR_Word * make__Success_10,
#line 597 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_18,
#line 597 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_19)
#line 597 "make.m"
{
#line 600 "make.m"
  {
#line 600 "make.m"
    MR_bool make__succeeded;
#line 600 "make.m"
    MR_Word make__Success0_13;
#line 600 "make.m"
    MR_Word make__Modules_14;
#line 600 "make.m"
    MR_Word make__STATE_VARIABLE_Info_22_22;

#line 601 "make.m"
    {
#line 601 "make.m"
      make__dependencies__find_reachable_local_modules_8_p_0(make__Globals_8, make__ModuleName_9, &make__Success0_13, &make__Modules_14, make__STATE_VARIABLE_Info_0_18, &make__STATE_VARIABLE_Info_22_22);
    }
#line 610 "make.m"
    if ((make__Success0_13 == (MR_Integer) 0))
#line 611 "make.m"
      {
#line 612 "make.m"
        *make__Success_10 = (MR_Integer) 0;
#line 612 "make.m"
        *make__STATE_VARIABLE_Info_19 = make__STATE_VARIABLE_Info_22_22;
#line 611 "make.m"
      }
#line 610 "make.m"
    else
#line 604 "make.m"
      {
#line 604 "make.m"
        MR_Word make__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 604 "make.m"
        MR_Word make__V_27_27;
#line 607 "make.m"
        MR_Word make___LastHash_17;
#line 607 "make.m"
        MR_Box make__conv5__LastHash_17;
#line 607 "make.m"
        MR_Box make__conv4_STATE_VARIABLE_Info_19;
#line 607 "make.m"
        MR_Box make__conv3_STATE_VARIABLE_IO_21;

#line 607 "make.m"
        {
#line 607 "make.m"
          make__V_27_27 = mercury__set__to_sorted_list_1_f_0(make__TypeCtorInfo_39_39, make__Modules_14);
        }
#line 607 "make.m"
        {
#line 607 "make.m"
          make__util__foldl3_maybe_stop_at_error_11_p_0(make__TypeCtorInfo_39_39, (MR_Word) &make__make__type_ctor_info_last_hash_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Integer) 0, (MR_Word) &make_scalar_common_1[17], make__Globals_8, make__V_27_27, make__Success_10, ((MR_Box) (&make_scalar_common_2[9])), &make__conv5__LastHash_17, ((MR_Box) (make__STATE_VARIABLE_Info_22_22)), &make__conv4_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &make__conv3_STATE_VARIABLE_IO_21);
        }
#line 607 "make.m"
        make___LastHash_17 = ((MR_Word) make__conv5__LastHash_17);
#line 607 "make.m"
        *make__STATE_VARIABLE_Info_19 = ((MR_Word) make__conv4_STATE_VARIABLE_Info_19);
#line 604 "make.m"
      }
#line 600 "make.m"
  }
#line 597 "make.m"
}

#line 562 "make.m"
MR_Word MR_CALL 
make__get_executable_type_1_f_0(
#line 562 "make.m"
  MR_Word make__Globals_3)
#line 562 "make.m"
{
#line 564 "make.m"
  {
#line 564 "make.m"
    MR_bool make__succeeded;
#line 564 "make.m"
    MR_Word make__ExecutableType_4;
#line 564 "make.m"
    MR_Word make__CompilationTarget_5;

#line 565 "make.m"
    {
#line 565 "make.m"
      libs__globals__get_target_2_p_0(make__Globals_3, &make__CompilationTarget_5);
    }
#line 572 "make.m"
    if ((make__CompilationTarget_5 == (MR_Integer) 2))
#line 574 "make.m"
      make__ExecutableType_4 = (MR_Integer) 3;
#line 572 "make.m"
    else
#line 572 "make.m"
      if ((make__CompilationTarget_5 == (MR_Integer) 5))
#line 580 "make.m"
        make__ExecutableType_4 = (MR_Integer) 7;
#line 572 "make.m"
      else
#line 572 "make.m"
        if ((make__CompilationTarget_5 == (MR_Integer) 3))
#line 577 "make.m"
          make__ExecutableType_4 = (MR_Integer) 5;
#line 572 "make.m"
        else
#line 571 "make.m"
          make__ExecutableType_4 = (MR_Integer) 0;
#line 564 "make.m"
    return make__ExecutableType_4;
#line 564 "make.m"
  }
#line 562 "make.m"
}

#line 552 "make.m"
MR_bool MR_CALL 
make__search_backwards_for_dot_3_p_0(
#line 552 "make.m"
  MR_String make__String_4,
#line 552 "make.m"
  MR_Integer make__Index_5,
#line 552 "make.m"
  MR_Integer * make__DotIndex_6)
#line 552 "make.m"
{
#line 554 "make.m"
  while (MR_TRUE)
#line 554 "make.m"
    {
#line 554 "make.m"
      /* tailcall optimized into a loop */
#line 554 "make.m"
      {
#line 554 "make.m"
        MR_bool make__succeeded;
#line 554 "make.m"
        MR_Integer make__CharIndex_7;
#line 554 "make.m"
        MR_Char make__Char_8;

#line 555 "make.m"
        {
#line 555 "make.m"
          make__succeeded = mercury__string__unsafe_prev_index_4_p_0(make__String_4, make__Index_5, &make__CharIndex_7, &make__Char_8);
        }
#line 554 "make.m"
        if (make__succeeded)
#line 554 "make.m"
          {
#line 556 "make.m"
            make__succeeded = (make__Char_8 == (MR_Char) 46);
#line 558 "make.m"
            if (make__succeeded)
#line 557 "make.m"
              {
#line 557 "make.m"
                *make__DotIndex_6 = make__CharIndex_7;
#line 557 "make.m"
                make__succeeded = MR_TRUE;
#line 557 "make.m"
              }
#line 558 "make.m"
            else
#line 559 "make.m"
              {
#line 559 "make.m"
                /* direct tailcall eliminated */
#line 559 "make.m"
                {
#line 559 "make.m"
                  MR_Integer make__Index__tmp_copy_5 = make__CharIndex_7;

#line 559 "make.m"
                  make__Index_5 = make__Index__tmp_copy_5;
#line 559 "make.m"
                }
#line 559 "make.m"
                continue;
#line 559 "make.m"
              }
#line 554 "make.m"
          }
#line 554 "make.m"
        return make__succeeded;
#line 554 "make.m"
      }
#line 554 "make.m"
      break;
#line 554 "make.m"
    }
#line 552 "make.m"
}

#line 457 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 457 "make.m"
  void * make__env_ptr_arg)
#line 457 "make.m"
{
#line 457 "make.m"
  {
#line 457 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 461 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".cs") == 0);
#line 461 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 461 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 461 "make.m"
      {
#line 461 "make.m"
        make__classify_target_2_4_p_0_2(make__env_ptr);
#line 461 "make.m"
        return;
      }
#line 457 "make.m"
  }
#line 457 "make.m"
}

#line 463 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 463 "make.m"
  void * make__env_ptr_arg)
#line 463 "make.m"
{
#line 463 "make.m"
  {
#line 463 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 463 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
#line 463 "make.m"
    {
#line 463 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 464 "make.m"
      {
#line 464 "make.m"
        MR_Word base;
#line 464 "make.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 464 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 464 "make.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_10));
#line 464 "make.m"
      }
#line 463 "make.m"
      {
#line 463 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
#line 463 "make.m"
        return;
      }
#line 463 "make.m"
    }
#line 463 "make.m"
  }
#line 463 "make.m"
}

#line 455 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 455 "make.m"
  void * make__env_ptr_arg)
#line 455 "make.m"
{
#line 455 "make.m"
  {
#line 455 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 550 "make.m"
    {
#line 550 "make.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8);
    }
#line 455 "make.m"
    {
#line 455 "make.m"
      MR_Word base;
#line 455 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "make.m"
      *((make__env_ptr)->make__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
#line 455 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8));
#line 455 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9));
#line 455 "make.m"
    }
#line 455 "make.m"
    {
#line 455 "make.m"
      ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont)((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont_env_ptr);
#line 455 "make.m"
      return;
    }
#line 455 "make.m"
  }
#line 455 "make.m"
}

#line 506 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 506 "make.m"
  void * make__env_ptr_arg)
#line 506 "make.m"
{
#line 506 "make.m"
  {
#line 506 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 506 "make.m"
    {
#line 512 "make.m"
      MR_Word make__V_17_17;

#line 512 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 512 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 512 "make.m"
        make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 512 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 512 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 512 "make.m"
        {
#line 512 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
#line 512 "make.m"
          return;
        }
#line 506 "make.m"
    }
#line 506 "make.m"
  }
#line 506 "make.m"
}

#line 504 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 504 "make.m"
  void * make__env_ptr_arg)
#line 504 "make.m"
{
#line 504 "make.m"
  {
#line 504 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 506 "make.m"
    {
#line 506 "make.m"
      MR_Word make__V_32_32;

#line 506 "make.m"
      {
#line 506 "make.m"
        make__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "make.m"
        MR_hl_field(MR_mktag(1), make__V_32_32, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16));
#line 506 "make.m"
      }
#line 506 "make.m"
      {
#line 506 "make.m"
        make__util__target_extension_2_f_1((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, make__V_32_32, make__classify_target_2_4_p_0_8, make__env_ptr);
      }
#line 506 "make.m"
    }
#line 508 "make.m"
    {
#line 512 "make.m"
      MR_Word make__V_65_65;

#line 508 "make.m"
      {
#line 508 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47);
      }
#line 508 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 508 "make.m"
        {
#line 512 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 512 "make.m"
          if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 512 "make.m"
            make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 512 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 508 "make.m"
        }
#line 508 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 508 "make.m"
        {
#line 508 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
#line 508 "make.m"
          return;
        }
#line 508 "make.m"
    }
#line 504 "make.m"
  }
#line 504 "make.m"
}

#line 514 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 514 "make.m"
  void * make__env_ptr_arg)
#line 514 "make.m"
{
#line 514 "make.m"
  {
#line 514 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 514 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_1 = MR_TRUE;
#line 514 "make.m"
    {
#line 514 "make.m"
      MR_Word make__V_33_33;

#line 514 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 515 "make.m"
      {
#line 515 "make.m"
        make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 515 "make.m"
        MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47));
#line 515 "make.m"
      }
#line 515 "make.m"
      {
#line 515 "make.m"
        MR_Word base;
#line 515 "make.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 515 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 515 "make.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__V_33_33));
#line 515 "make.m"
      }
#line 514 "make.m"
      {
#line 514 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
#line 514 "make.m"
        return;
      }
#line 514 "make.m"
    }
#line 514 "make.m"
  }
#line 514 "make.m"
}

#line 498 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 498 "make.m"
  void * make__env_ptr_arg)
#line 498 "make.m"
{
#line 498 "make.m"
  {
#line 498 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 499 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_30_30, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_60_60) == 0);
#line 498 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 498 "make.m"
      {
#line 500 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31 = (MR_String) ".";
#line 500 "make.m"
        {
#line 500 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16 = mercury__string__f_43_43_2_f_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15);
        }
#line 500 "make.m"
        {
#line 500 "make.m"
          make__classify_target_2_4_p_0_5(make__env_ptr);
#line 500 "make.m"
          return;
        }
#line 498 "make.m"
      }
#line 498 "make.m"
  }
#line 498 "make.m"
}

#line 503 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 503 "make.m"
  void * make__env_ptr_arg)
#line 503 "make.m"
{
#line 503 "make.m"
  {
#line 503 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 503 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((MR_String) "s", (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_61_61) == 0);
#line 503 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 503 "make.m"
      {
#line 503 "make.m"
        make__classify_target_2_4_p_0_5(make__env_ptr);
#line 503 "make.m"
        return;
      }
#line 503 "make.m"
  }
#line 503 "make.m"
}

#line 452 "make.m"
void MR_CALL 
make__classify_target_2_4_p_0(
#line 452 "make.m"
  MR_Word make__Globals_5,
#line 452 "make.m"
  MR_String make__ModuleNameStr0_6,
#line 452 "make.m"
  MR_String make__Suffix_7,
#line 452 "make.m"
  MR_Word * make__HeadVar__4_4,
#line 452 "make.m"
  MR_Cont make__cont,
#line 452 "make.m"
  void * make__cont_env_ptr)
#line 452 "make.m"
{
#line 452 "make.m"
  {
#line 452 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s make__env;

#line 452 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Globals_5 = make__Globals_5;
#line 452 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = make__ModuleNameStr0_6;
#line 452 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7 = make__Suffix_7;
#line 452 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__HeadVar__4_4 = make__HeadVar__4_4;
#line 452 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont = make__cont;
#line 452 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont_env_ptr = make__cont_env_ptr;
#line 455 "make.m"
    {
#line 457 "make.m"
      MR_Word make__V_18_18;

#line 465 "make.m"
      (make__env).make__classify_target_2_4_p_0_env_0__cond_0 = MR_FALSE;
#line 457 "make.m"
      {
#line 457 "make.m"
        make__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 457 "make.m"
        MR_hl_field(MR_mktag(1), make__V_18_18, 0) = ((MR_Box) ((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7));
#line 457 "make.m"
      }
#line 457 "make.m"
      {
#line 457 "make.m"
        make__util__target_extension_2_f_1((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env).make__classify_target_2_4_p_0_env_0__ModuleTargetType_10, make__V_18_18, make__classify_target_2_4_p_0_3, &make__env);
      }
#line 465 "make.m"
      if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_0))
#line 470 "make.m"
        {
#line 470 "make.m"
          MR_Word make__ModuleTargetType_56;

#line 466 "make.m"
          {
#line 466 "make.m"
            (make__env).make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, &make__ModuleTargetType_56);
          }
#line 470 "make.m"
          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 468 "make.m"
            {
#line 468 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 469 "make.m"
              {
#line 469 "make.m"
                MR_Word base;
#line 469 "make.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 469 "make.m"
                (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 469 "make.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleTargetType_56));
#line 469 "make.m"
              }
#line 468 "make.m"
              {
#line 468 "make.m"
                make__classify_target_2_4_p_0_1(&make__env);
              }
#line 468 "make.m"
            }
#line 470 "make.m"
          else
#line 476 "make.m"
            {
#line 476 "make.m"
              MR_String make__ModuleNameStr1_12;
#line 471 "make.m"
              MR_String make__V_20_20;
#line 471 "make.m"
              MR_String make__V_57_57;

#line 471 "make.m"
              {
#line 471 "make.m"
                libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 566, &make__V_57_57);
              }
#line 471 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_57_57) == 0);
#line 471 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 471 "make.m"
                {
#line 472 "make.m"
                  make__V_20_20 = (MR_String) "lib";
#line 472 "make.m"
                  {
#line 472 "make.m"
                    (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_20_20, &make__ModuleNameStr1_12, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                  }
#line 471 "make.m"
                }
#line 476 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 474 "make.m"
                {
#line 474 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_12;
#line 475 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[1]);
#line 474 "make.m"
                  {
#line 474 "make.m"
                    make__classify_target_2_4_p_0_1(&make__env);
                  }
#line 474 "make.m"
                }
#line 476 "make.m"
              else
#line 483 "make.m"
                {
#line 483 "make.m"
                  MR_String make__ModuleNameStr1_54;
#line 478 "make.m"
                  MR_String make__V_23_23;
#line 478 "make.m"
                  MR_String make__V_58_58;

#line 477 "make.m"
                  {
#line 477 "make.m"
                    libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 565, &make__V_58_58);
                  }
#line 477 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_58_58) == 0);
#line 478 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 478 "make.m"
                    {
#line 479 "make.m"
                      make__V_23_23 = (MR_String) "lib";
#line 479 "make.m"
                      {
#line 479 "make.m"
                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_23_23, &make__ModuleNameStr1_54, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                      }
#line 478 "make.m"
                    }
#line 483 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 481 "make.m"
                    {
#line 481 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_54;
#line 482 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[2]);
#line 481 "make.m"
                      {
#line 481 "make.m"
                        make__classify_target_2_4_p_0_1(&make__env);
                      }
#line 481 "make.m"
                    }
#line 483 "make.m"
                  else
#line 490 "make.m"
                    {
#line 484 "make.m"
                      MR_String make__V_59_59;

#line 484 "make.m"
                      {
#line 484 "make.m"
                        libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 567, &make__V_59_59);
                      }
#line 484 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_59_59) == 0);
#line 490 "make.m"
                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 487 "make.m"
                        {
#line 487 "make.m"
                          MR_Word make__ExecutableType_13;
#line 487 "make.m"
                          MR_Word make__CompilationTarget_64;

#line 487 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 565 "make.m"
                          {
#line 565 "make.m"
                            libs__globals__get_target_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &make__CompilationTarget_64);
                          }
#line 572 "make.m"
                          if ((make__CompilationTarget_64 == (MR_Integer) 2))
#line 574 "make.m"
                            make__ExecutableType_13 = (MR_Integer) 3;
#line 572 "make.m"
                          else
#line 572 "make.m"
                            if ((make__CompilationTarget_64 == (MR_Integer) 5))
#line 580 "make.m"
                              make__ExecutableType_13 = (MR_Integer) 7;
#line 572 "make.m"
                            else
#line 572 "make.m"
                              if ((make__CompilationTarget_64 == (MR_Integer) 3))
#line 577 "make.m"
                                make__ExecutableType_13 = (MR_Integer) 5;
#line 572 "make.m"
                              else
#line 571 "make.m"
                                make__ExecutableType_13 = (MR_Integer) 0;
#line 489 "make.m"
                          {
#line 489 "make.m"
                            MR_Word base;
#line 489 "make.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 489 "make.m"
                            (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 489 "make.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__ExecutableType_13));
#line 489 "make.m"
                          }
#line 487 "make.m"
                          {
#line 487 "make.m"
                            make__classify_target_2_4_p_0_1(&make__env);
                          }
#line 487 "make.m"
                        }
#line 490 "make.m"
                      else
#line 496 "make.m"
                        {
#line 496 "make.m"
                          MR_String make__ModuleNameStr1_50;
#line 491 "make.m"
                          MR_String make__V_26_26;

#line 491 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".beams") == 0);
#line 491 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 491 "make.m"
                            {
#line 492 "make.m"
                              make__V_26_26 = (MR_String) "lib";
#line 492 "make.m"
                              {
#line 492 "make.m"
                                (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_26_26, &make__ModuleNameStr1_50, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                              }
#line 491 "make.m"
                            }
#line 496 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 494 "make.m"
                            {
#line 494 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_50;
#line 495 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[3]);
#line 494 "make.m"
                              {
#line 494 "make.m"
                                make__classify_target_2_4_p_0_1(&make__env);
                              }
#line 494 "make.m"
                            }
#line 496 "make.m"
                          else
#line 516 "make.m"
                            {
#line 516 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__cond_1 = MR_FALSE;
#line 498 "make.m"
                              {
#line 498 "make.m"
                                MR_String make__Rest_14;

#line 498 "make.m"
                                {
#line 498 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &make__Rest_14, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7);
                                }
#line 498 "make.m"
                                if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 498 "make.m"
                                  {
#line 499 "make.m"
                                    (make__env).make__classify_target_2_4_p_0_env_0__V_30_30 = (MR_String) "s";
#line 499 "make.m"
                                    {
#line 499 "make.m"
                                      mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15, &(make__env).make__classify_target_2_4_p_0_env_0__V_60_60, make__Rest_14, make__classify_target_2_4_p_0_6, &make__env);
                                    }
#line 498 "make.m"
                                  }
#line 498 "make.m"
                              }
#line 503 "make.m"
                              {
#line 503 "make.m"
                                mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env).make__classify_target_2_4_p_0_env_0__V_61_61, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__classify_target_2_4_p_0_7, &make__env);
                              }
#line 516 "make.m"
                              if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_1))
#line 521 "make.m"
                                {
#line 517 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".check") == 0);
#line 521 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 519 "make.m"
                                    {
#line 519 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 520 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[5]);
#line 519 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 519 "make.m"
                                    }
#line 521 "make.m"
                                  else
#line 526 "make.m"
                                    {
#line 522 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".analyse") == 0);
#line 526 "make.m"
                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 524 "make.m"
                                        {
#line 524 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 525 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[6]);
#line 524 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 524 "make.m"
                                        }
#line 526 "make.m"
                                      else
#line 531 "make.m"
                                        {
#line 527 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".clean") == 0);
#line 531 "make.m"
                                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 529 "make.m"
                                            {
#line 529 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 530 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[7]);
#line 529 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 529 "make.m"
                                            }
#line 531 "make.m"
                                          else
#line 536 "make.m"
                                            {
#line 532 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".realclean") == 0);
#line 536 "make.m"
                                              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 534 "make.m"
                                                {
#line 534 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 535 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[8]);
#line 534 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 534 "make.m"
                                                }
#line 536 "make.m"
                                              else
#line 542 "make.m"
                                                {
#line 542 "make.m"
                                                  MR_String make__ModuleNameStr1_42;
#line 537 "make.m"
                                                  MR_String make__V_39_39;

#line 537 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".install") == 0);
#line 537 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 537 "make.m"
                                                    {
#line 538 "make.m"
                                                      make__V_39_39 = (MR_String) "lib";
#line 538 "make.m"
                                                      {
#line 538 "make.m"
                                                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_39_39, &make__ModuleNameStr1_42, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                                                      }
#line 537 "make.m"
                                                    }
#line 542 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 540 "make.m"
                                                    {
#line 540 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_42;
#line 541 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[9]);
#line 540 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 540 "make.m"
                                                    }
#line 542 "make.m"
                                                  else
#line 547 "make.m"
                                                    {
#line 547 "make.m"
                                                      MR_Word make__V_41_41;

#line 543 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".doc") == 0);
#line 547 "make.m"
                                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 547 "make.m"
                                                        {
#line 545 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 546 "make.m"
                                                          make__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 546 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[10]);
#line 546 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 547 "make.m"
                                                        }
#line 547 "make.m"
                                                    }
#line 542 "make.m"
                                                }
#line 536 "make.m"
                                            }
#line 531 "make.m"
                                        }
#line 526 "make.m"
                                    }
#line 521 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 521 "make.m"
                                    {
#line 521 "make.m"
                                      make__classify_target_2_4_p_0_1(&make__env);
                                    }
#line 521 "make.m"
                                }
#line 516 "make.m"
                            }
#line 496 "make.m"
                        }
#line 490 "make.m"
                    }
#line 483 "make.m"
                }
#line 476 "make.m"
            }
#line 470 "make.m"
        }
#line 455 "make.m"
    }
#line 452 "make.m"
  }
#line 452 "make.m"
}

#line 436 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 436 "make.m"
  void * make__env_ptr_arg)
#line 436 "make.m"
{
#line 436 "make.m"
  {
#line 436 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s * make__env_ptr = (struct make__classify_target_3_p_0_2_env_0_s *) make__env_ptr_arg;

#line 436 "make.m"
    *((make__env_ptr)->make__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
#line 436 "make.m"
    {
#line 436 "make.m"
      ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont)((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont_env_ptr);
#line 436 "make.m"
      return;
    }
#line 436 "make.m"
  }
#line 436 "make.m"
}

#line 436 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 436 "make.m"
  MR_Box make__closure_arg,
#line 436 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 436 "make.m"
  MR_Cont make__cont,
#line 436 "make.m"
  void * make__cont_env_ptr)
#line 436 "make.m"
{
#line 436 "make.m"
  {
#line 436 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s make__env;

#line 436 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__wrapper_arg_1 = make__wrapper_arg_1;
#line 436 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont = make__cont;
#line 436 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont_env_ptr = make__cont_env_ptr;
#line 436 "make.m"
    {
#line 436 "make.m"
      MR_Box make__closure = make__closure_arg;

#line 436 "make.m"
      {
#line 436 "make.m"
        make__classify_target_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 5))), &(make__env).make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__classify_target_3_p_0_1, &make__env);
      }
#line 436 "make.m"
    }
#line 436 "make.m"
  }
#line 436 "make.m"
}

#line 428 "make.m"
void MR_CALL 
make__classify_target_3_p_0(
#line 428 "make.m"
  MR_Word make__Globals_4,
#line 428 "make.m"
  MR_String make__FileName_5,
#line 428 "make.m"
  MR_Word * make__HeadVar__3_3)
#line 428 "make.m"
{
#line 431 "make.m"
  {
#line 431 "make.m"
    MR_bool make__succeeded;
#line 431 "make.m"
    MR_Word make__ModuleName_6;
#line 431 "make.m"
    MR_Word make__TargetType_7;
#line 441 "make.m"
    MR_Word make__TargetFile_13;
#line 433 "make.m"
    MR_Word make__TypeInfo_21_21;
#line 433 "make.m"
    MR_Integer make__NameLength_8;
#line 433 "make.m"
    MR_Integer make__DotLocn_9;
#line 433 "make.m"
    MR_String make__ModuleNameStr0_10;
#line 433 "make.m"
    MR_String make__Suffix_11;
#line 433 "make.m"
    MR_Word make__TargetFiles_12;
#line 433 "make.m"
    MR_Word make__V_16_16;
#line 433 "make.m"
    MR_Word make__V_17_17;

#line 433 "make.m"
    {
#line 433 "make.m"
      mercury__string__length_2_p_0(make__FileName_5, &make__NameLength_8);
    }
#line 434 "make.m"
    {
#line 434 "make.m"
      make__succeeded = make__search_backwards_for_dot_3_p_0(make__FileName_5, make__NameLength_8, &make__DotLocn_9);
    }
#line 433 "make.m"
    if (make__succeeded)
#line 433 "make.m"
      {
#line 435 "make.m"
        {
#line 435 "make.m"
          mercury__string__split_4_p_0(make__FileName_5, make__DotLocn_9, &make__ModuleNameStr0_10, &make__Suffix_11);
        }
#line 11108 "make.c"
        make__TypeInfo_21_21 = (MR_Word) &make_scalar_common_1[0];
#line 436 "make.m"
        {
#line 436 "make.m"
          make__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 436 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 0) = ((MR_Box) (&make_scalar_common_7[0]));
#line 436 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 1) = ((MR_Box) (make__classify_target_3_p_0_2));
#line 436 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 436 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 3) = ((MR_Box) (make__Globals_4));
#line 436 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 4) = ((MR_Box) (make__ModuleNameStr0_10));
#line 436 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 5) = ((MR_Box) (make__Suffix_11));
#line 436 "make.m"
        }
#line 436 "make.m"
        {
#line 436 "make.m"
          mercury__solutions__solutions_2_p_1(make__TypeInfo_21_21, make__V_16_16, &make__TargetFiles_12);
        }
#line 438 "make.m"
        make__succeeded = ((MR_tag((MR_Word) make__TargetFiles_12)) == (MR_mktag((MR_Integer) 1)));
#line 438 "make.m"
        if (make__succeeded)
#line 438 "make.m"
          {
#line 438 "make.m"
            make__TargetFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 0)));
#line 438 "make.m"
            make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 1)));
#line 438 "make.m"
            make__succeeded = (make__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "make.m"
          }
#line 433 "make.m"
      }
#line 441 "make.m"
    if (make__succeeded)
#line 440 "make.m"
      {
#line 440 "make.m"
        make__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 0)));
#line 440 "make.m"
        make__TargetType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 1)));
#line 440 "make.m"
      }
#line 441 "make.m"
    else
#line 446 "make.m"
      {
#line 446 "make.m"
        MR_String make__ModuleNameStr_14;

#line 442 "make.m"
        {
#line 442 "make.m"
          make__succeeded = mercury__string__append_3_p_1((MR_String) "lib", &make__ModuleNameStr_14, make__FileName_5);
        }
#line 446 "make.m"
        if (make__succeeded)
#line 444 "make.m"
          {
#line 444 "make.m"
            make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[0]);
#line 445 "make.m"
            {
#line 445 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__ModuleNameStr_14, &make__ModuleName_6);
            }
#line 444 "make.m"
          }
#line 446 "make.m"
        else
#line 447 "make.m"
          {
#line 447 "make.m"
            MR_Word make__ExecutableType_15;
#line 447 "make.m"
            MR_Word make__CompilationTarget_24;

#line 565 "make.m"
            {
#line 565 "make.m"
              libs__globals__get_target_2_p_0(make__Globals_4, &make__CompilationTarget_24);
            }
#line 572 "make.m"
            if ((make__CompilationTarget_24 == (MR_Integer) 2))
#line 574 "make.m"
              make__ExecutableType_15 = (MR_Integer) 3;
#line 572 "make.m"
            else
#line 572 "make.m"
              if ((make__CompilationTarget_24 == (MR_Integer) 5))
#line 580 "make.m"
                make__ExecutableType_15 = (MR_Integer) 7;
#line 572 "make.m"
              else
#line 572 "make.m"
                if ((make__CompilationTarget_24 == (MR_Integer) 3))
#line 577 "make.m"
                  make__ExecutableType_15 = (MR_Integer) 5;
#line 572 "make.m"
                else
#line 571 "make.m"
                  make__ExecutableType_15 = (MR_Integer) 0;
#line 448 "make.m"
            {
#line 448 "make.m"
              make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "make.m"
              MR_hl_field(MR_mktag(1), make__TargetType_7, 0) = ((MR_Box) (make__ExecutableType_15));
#line 448 "make.m"
            }
#line 449 "make.m"
            {
#line 449 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__FileName_5, &make__ModuleName_6);
            }
#line 447 "make.m"
          }
#line 446 "make.m"
      }
#line 431 "make.m"
    {
#line 431 "make.m"
      MR_Word base;
#line 431 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "make.m"
      *make__HeadVar__3_3 = base;
#line 431 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleName_6));
#line 431 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__TargetType_7));
#line 431 "make.m"
    }
#line 431 "make.m"
  }
#line 428 "make.m"
}

#line 385 "make.m"
void MR_CALL 
make__make_target_7_p_0(
#line 385 "make.m"
  MR_Word make__Globals_8,
#line 385 "make.m"
  MR_Word make__Target_9,
#line 385 "make.m"
  MR_Word * make__Success_10,
#line 385 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_22,
#line 385 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_23)
#line 385 "make.m"
{
#line 388 "make.m"
  {
#line 388 "make.m"
    MR_bool make__succeeded;
#line 388 "make.m"
    MR_Word make__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 0)));
#line 388 "make.m"
    MR_Word make__TargetType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 1)));
#line 388 "make.m"
    MR_Word make__TrackFlags_15;
#line 388 "make.m"
    MR_Word make__TrackFlagsSuccess_16;
#line 388 "make.m"
    MR_Word make__STATE_VARIABLE_Info_27_27;

#line 390 "make.m"
    {
#line 390 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 614, &make__TrackFlags_15);
    }
#line 394 "make.m"
    if ((make__TrackFlags_15 == (MR_Integer) 0))
#line 392 "make.m"
      {
#line 393 "make.m"
        make__TrackFlagsSuccess_16 = (MR_Integer) 1;
#line 393 "make.m"
        make__STATE_VARIABLE_Info_27_27 = make__STATE_VARIABLE_Info_0_22;
#line 392 "make.m"
      }
#line 394 "make.m"
    else
#line 396 "make.m"
      {
#line 396 "make.m"
        make__make_track_flags_files_7_p_0(make__Globals_8, make__ModuleName_13, &make__TrackFlagsSuccess_16, make__STATE_VARIABLE_Info_0_22, &make__STATE_VARIABLE_Info_27_27);
      }
#line 416 "make.m"
    if ((make__TrackFlagsSuccess_16 == (MR_Integer) 0))
#line 417 "make.m"
      {
#line 418 "make.m"
        *make__Success_10 = (MR_Integer) 0;
#line 418 "make.m"
        *make__STATE_VARIABLE_Info_23 = make__STATE_VARIABLE_Info_27_27;
#line 417 "make.m"
      }
#line 416 "make.m"
    else
#line 406 "make.m"
      if (((MR_tag((MR_Word) make__TargetType_14)) == (MR_mktag((MR_Integer) 1))))
#line 407 "make.m"
        {
#line 407 "make.m"
          MR_Word make__ProgramTargetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetType_14, (MR_Integer) 0)));
#line 407 "make.m"
          MR_Word make__LinkedTargetFile_20;

#line 408 "make.m"
          {
#line 408 "make.m"
            make__LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "make.m"
            MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 0) = ((MR_Box) (make__ModuleName_13));
#line 408 "make.m"
            MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 1) = ((MR_Box) (make__ProgramTargetType_19));
#line 408 "make.m"
          }
#line 410 "make.m"
          {
#line 410 "make.m"
            make__program_target__make_linked_target_7_p_0(make__Globals_8, make__LinkedTargetFile_20, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 410 "make.m"
            return;
          }
#line 407 "make.m"
        }
#line 406 "make.m"
      else
#line 406 "make.m"
        if (((MR_tag((MR_Word) make__TargetType_14)) == (MR_mktag((MR_Integer) 2))))
#line 412 "make.m"
          {
#line 412 "make.m"
            MR_Word make__MiscTargetType_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__TargetType_14, (MR_Integer) 0)));
#line 412 "make.m"
            MR_Word make__V_29_29;

#line 413 "make.m"
            {
#line 413 "make.m"
              make__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "make.m"
              MR_hl_field(MR_mktag(0), make__V_29_29, 0) = ((MR_Box) (make__ModuleName_13));
#line 413 "make.m"
              MR_hl_field(MR_mktag(0), make__V_29_29, 1) = ((MR_Box) (make__MiscTargetType_21));
#line 413 "make.m"
            }
#line 413 "make.m"
            {
#line 413 "make.m"
              make__program_target__make_misc_target_7_p_0(make__Globals_8, make__V_29_29, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 413 "make.m"
              return;
            }
#line 412 "make.m"
          }
#line 406 "make.m"
        else
#line 402 "make.m"
          {
#line 402 "make.m"
            MR_Word make__ModuleTargetType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetType_14, (MR_Integer) 0)));
#line 402 "make.m"
            MR_Word make__TargetFile_18;
#line 402 "make.m"
            MR_Word make__V_34_34;

#line 403 "make.m"
            {
#line 403 "make.m"
              make__TargetFile_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "make.m"
              MR_hl_field(MR_mktag(0), make__TargetFile_18, 0) = ((MR_Box) (make__ModuleName_13));
#line 403 "make.m"
              MR_hl_field(MR_mktag(0), make__TargetFile_18, 1) = ((MR_Box) (make__ModuleTargetType_17));
#line 403 "make.m"
            }
#line 404 "make.m"
            {
#line 404 "make.m"
              make__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 404 "make.m"
              MR_hl_field(MR_mktag(0), make__V_34_34, 0) = ((MR_Box) (make__TargetFile_18));
#line 404 "make.m"
            }
#line 404 "make.m"
            {
#line 404 "make.m"
              make__module_target__make_module_target_7_p_0(make__Globals_8, make__V_34_34, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 404 "make.m"
              return;
            }
#line 402 "make.m"
          }
#line 388 "make.m"
  }
#line 385 "make.m"
}

#line 46 "make.m"
MR_String MR_CALL 
make__make_module_dep_file_extension_0_f_0(void)
#line 46 "make.m"
{
#line 281 "make.m"
  {
#line 281 "make.m"
    MR_bool make__succeeded;

#line 281 "make.m"
    return (MR_String) ".module_dep";
#line 281 "make.m"
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
#line 279 "make.m"
  {
#line 279 "make.m"
    MR_bool make__succeeded;

#line 279 "make.m"
    {
#line 279 "make.m"
      make__module_dep_file__write_module_dep_file_4_p_0(make__Globals_5, make__Imports_6);
#line 279 "make.m"
      return;
    }
#line 279 "make.m"
  }
#line 43 "make.m"
}

#line 322 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_8(
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

#line 374 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_7(
#line 374 "make.m"
  MR_Box make__closure_arg,
#line 374 "make.m"
  MR_Box make__wrapper_arg_1,
#line 374 "make.m"
  MR_Box make__wrapper_arg_2,
#line 374 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 374 "make.m"
  MR_Box make__wrapper_arg_4,
#line 374 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 374 "make.m"
  MR_Box make__wrapper_arg_6,
#line 374 "make.m"
  MR_Box * make__wrapper_arg_7)
#line 374 "make.m"
{
#line 374 "make.m"
  {
#line 374 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 374 "make.m"
    MR_Word make__conv5_Success_10;
#line 374 "make.m"
    MR_Word make__conv4_STATE_VARIABLE_Info_23;

#line 374 "make.m"
    {
#line 374 "make.m"
      make__make_target_7_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv5_Success_10, ((MR_Word) make__wrapper_arg_4), &make__conv4_STATE_VARIABLE_Info_23);
    }
#line 374 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv5_Success_10));
#line 374 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv4_STATE_VARIABLE_Info_23));
#line 374 "make.m"
  }
#line 374 "make.m"
}

#line 352 "make.m"
static void MR_CALL 
make__make_process_args_6_p_0_6(
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
make__make_process_args_6_p_0_5(
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
make__make_process_args_6_p_0_4(
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
make__make_process_args_6_p_0_3(
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
make__make_process_args_6_p_0_2(
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
make__make_process_args_6_p_0_1(
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
make__make_process_args_6_p_0(
#line 40 "make.m"
  MR_Word make__Globals_7,
#line 40 "make.m"
  MR_Word make__Variables_8,
#line 40 "make.m"
  MR_Word make__OptionArgs_9,
#line 40 "make.m"
  MR_Word make__Targets0_10)
#line 40 "make.m"
{
#line 283 "make.m"
  {
#line 283 "make.m"
    MR_bool make__succeeded;
#line 283 "make.m"
    MR_Word make__TypeCtorInfo_92_92;
#line 283 "make.m"
    MR_Word make__Targets_13;
#line 283 "make.m"
    MR_Word make__Continue0_16;
#line 283 "make.m"
    MR_Word make__AbsTargets_20;

#line 303 "make.m"
    if ((make__Targets0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "make.m"
      {
#line 285 "make.m"
        MR_Word make__MaybeMAIN_TARGET_12;

#line 286 "make.m"
        {
#line 286 "make.m"
          make__options_file__lookup_main_target_5_p_0(make__Globals_7, make__Variables_8, &make__MaybeMAIN_TARGET_12);
        }
#line 298 "make.m"
        if ((make__MaybeMAIN_TARGET_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "make.m"
          {
#line 300 "make.m"
            make__Targets_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "make.m"
            make__Continue0_16 = (MR_Integer) 0;
#line 299 "make.m"
          }
#line 298 "make.m"
        else
#line 288 "make.m"
          {
#line 288 "make.m"
            make__Targets_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__MaybeMAIN_TARGET_12, (MR_Integer) 0)));
#line 292 "make.m"
            if ((make__Targets_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "make.m"
              {
#line 294 "make.m"
                make__Continue0_16 = (MR_Integer) 0;
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
              make__Continue0_16 = (MR_Integer) 1;
#line 288 "make.m"
          }
#line 285 "make.m"
      }
#line 303 "make.m"
    else
#line 304 "make.m"
      {
#line 305 "make.m"
        make__Continue0_16 = (MR_Integer) 1;
#line 306 "make.m"
        make__Targets_13 = make__Targets0_10;
#line 304 "make.m"
      }
#line 11797 "make.c"
    make__TypeCtorInfo_92_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 312 "make.m"
    {
#line 312 "make.m"
      mercury__list__filter_3_p_0(make__TypeCtorInfo_92_92, (MR_Word) &make_scalar_common_1[10], make__Targets_13, &make__AbsTargets_20);
    }
#line 11804 "make.c"
    if ((make__AbsTargets_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "make.m"
      if ((make__Continue0_16 == (MR_Integer) 0))
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
      else
#line 332 "make.m"
        {
#line 332 "make.m"
          MR_Word make__TypeCtorInfo_94_94;
#line 332 "make.m"
          MR_Word make__TypeCtorInfo_98_98;
#line 332 "make.m"
          MR_Word make__TypeInfo_107_107;
#line 332 "make.m"
          MR_Word make__KeepGoing_25;
#line 332 "make.m"
          MR_Word make__ModuleIndexMap_26;
#line 332 "make.m"
          MR_Word make__DepIndexMap_27;
#line 332 "make.m"
          MR_Word make__DepStatusMap_28;
#line 332 "make.m"
          MR_Word make__NonDependTargets_29;
#line 332 "make.m"
          MR_Word make__ClassifiedTargets_30;
#line 332 "make.m"
          MR_Integer make__AnalysisRepeat_32;
#line 332 "make.m"
          MR_Word make__MakeInfo0_33;
#line 332 "make.m"
          MR_Word make__Success_34;
#line 332 "make.m"
          MR_Word make__V_56_56;
#line 332 "make.m"
          MR_Box make__V_58_58;
#line 332 "make.m"
          MR_Word make__V_60_60;
#line 332 "make.m"
          MR_Box make__V_62_62;
#line 332 "make.m"
          MR_Word make__V_68_68;
#line 332 "make.m"
          MR_Word make__V_70_70;
#line 332 "make.m"
          MR_Word make__V_71_71;
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
          MR_Word make__V_79_79;
#line 374 "make.m"
          MR_Word make___MakeInfo_35;
#line 374 "make.m"
          MR_Box make__conv7__MakeInfo_35;
#line 374 "make.m"
          MR_Box make__conv6_STATE_VARIABLE_IO_82_82;

#line 333 "make.m"
          {
#line 333 "make.m"
            libs__globals__lookup_bool_option_3_p_0(make__Globals_7, (MR_Integer) 611, &make__KeepGoing_25);
          }
#line 11887 "make.c"
          make__TypeCtorInfo_94_94 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 335 "make.m"
          {
#line 335 "make.m"
            make__V_56_56 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make_scalar_common_1[11]);
          }
#line 335 "make.m"
          {
#line 335 "make.m"
            make__V_58_58 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_94_94);
          }
#line 335 "make.m"
          {
#line 335 "make.m"
            make__ModuleIndexMap_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 335 "make.m"
            MR_hl_field(MR_mktag(0), make__ModuleIndexMap_26, 0) = ((MR_Box) (make__V_56_56));
#line 335 "make.m"
            MR_hl_field(MR_mktag(0), make__ModuleIndexMap_26, 1) = ((MR_Box) (make__V_58_58));
#line 335 "make.m"
            MR_hl_field(MR_mktag(0), make__ModuleIndexMap_26, 2) = ((MR_Box) ((MR_Integer) 0));
#line 335 "make.m"
          }
#line 11911 "make.c"
          make__TypeCtorInfo_98_98 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 338 "make.m"
          {
#line 338 "make.m"
            make__V_60_60 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_98_98, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, (MR_Word) &make_scalar_common_1[12]);
          }
#line 338 "make.m"
          {
#line 338 "make.m"
            make__V_62_62 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_98_98);
          }
#line 338 "make.m"
          {
#line 338 "make.m"
            make__DepIndexMap_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 338 "make.m"
            MR_hl_field(MR_mktag(0), make__DepIndexMap_27, 0) = ((MR_Box) (make__V_60_60));
#line 338 "make.m"
            MR_hl_field(MR_mktag(0), make__DepIndexMap_27, 1) = ((MR_Box) (make__V_62_62));
#line 338 "make.m"
            MR_hl_field(MR_mktag(0), make__DepIndexMap_27, 2) = ((MR_Box) ((MR_Integer) 0));
#line 338 "make.m"
          }
#line 341 "make.m"
          {
#line 341 "make.m"
            make__DepStatusMap_28 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_98_98, (MR_Word) &make__make__type_ctor_info_dependency_status_0, (MR_Word) &make_scalar_common_1[13]);
          }
#line 346 "make.m"
          {
#line 346 "make.m"
            make__NonDependTargets_29 = mercury__list__filter_2_f_0(make__TypeCtorInfo_92_92, (MR_Word) &make_scalar_common_1[14], make__Targets_13);
          }
#line 352 "make.m"
          {
#line 352 "make.m"
            make__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 352 "make.m"
            MR_hl_field(MR_mktag(0), make__V_68_68, 0) = ((MR_Box) (&make_scalar_common_5[0]));
#line 352 "make.m"
            MR_hl_field(MR_mktag(0), make__V_68_68, 1) = ((MR_Box) (make__make_process_args_6_p_0_6));
#line 352 "make.m"
            MR_hl_field(MR_mktag(0), make__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 352 "make.m"
            MR_hl_field(MR_mktag(0), make__V_68_68, 3) = ((MR_Box) (make__Globals_7));
#line 352 "make.m"
          }
#line 11959 "make.c"
          make__TypeInfo_107_107 = (MR_Word) &make_scalar_common_1[0];
#line 352 "make.m"
          {
#line 352 "make.m"
            mercury__list__map_3_p_0(make__TypeCtorInfo_92_92, make__TypeInfo_107_107, make__V_68_68, make__NonDependTargets_29, &make__ClassifiedTargets_30);
          }
#line 356 "make.m"
          {
#line 356 "make.m"
            libs__globals__lookup_int_option_3_p_0(make__Globals_7, (MR_Integer) 331, &make__AnalysisRepeat_32);
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_70_70 = mercury__map__init_0_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_2[0]);
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_71_71 = mercury__map__init_0_f_0(make__TypeCtorInfo_92_92, (MR_Word) &make_scalar_common_1[1]);
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_72_72 = mercury__map__init_0_f_0((MR_Word) &make_scalar_common_1[2], make__TypeCtorInfo_92_92);
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_73_73 = make__dependencies__init_cached_direct_imports_0_f_0();
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_74_74 = make__dependencies__init_cached_direct_imports_0_f_0();
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_75_75 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_76_76 = make__dependencies__init_cached_foreign_imports_0_f_0();
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_77_77 = mercury__set__init_0_f_0(make__TypeCtorInfo_94_94);
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__V_79_79 = mercury__set__list_to_set_1_f_0(make__TypeInfo_107_107, make__ClassifiedTargets_30);
          }
#line 358 "make.m"
          {
#line 358 "make.m"
            make__MakeInfo0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 0) = ((MR_Box) (make__V_70_70));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 1) = ((MR_Box) (make__V_71_71));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 2) = ((MR_Box) (make__V_72_72));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 3) = ((MR_Box) (make__OptionArgs_9));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 4) = ((MR_Box) (make__Variables_8));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 5) = ((MR_Box) (make__ModuleIndexMap_26));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 6) = ((MR_Box) (make__DepIndexMap_27));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 7) = ((MR_Box) (make__DepStatusMap_28));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 8) = ((MR_Box) (make__V_73_73));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 9) = ((MR_Box) (make__V_74_74));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 10) = ((MR_Box) (make__V_75_75));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 11) = ((MR_Box) (make__V_76_76));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 12) = ((MR_Box) (((MR_Integer) 0 | ((make__KeepGoing_25 << (MR_Integer) 1)))));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 13) = ((MR_Box) (make__V_77_77));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 15) = ((MR_Box) (make__V_79_79));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 16) = ((MR_Box) (make__AnalysisRepeat_32));
#line 358 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_33, 17) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "make.m"
          }
#line 374 "make.m"
          {
#line 374 "make.m"
            make__util__foldl2_maybe_stop_at_error_9_p_0(make__TypeInfo_107_107, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__KeepGoing_25, (MR_Word) &make_scalar_common_1[15], make__Globals_7, make__ClassifiedTargets_30, &make__Success_34, ((MR_Box) (make__MakeInfo0_33)), &make__conv7__MakeInfo_35, ((MR_Box) ((MR_Integer) 0)), &make__conv6_STATE_VARIABLE_IO_82_82);
          }
#line 374 "make.m"
          make___MakeInfo_35 = ((MR_Word) make__conv7__MakeInfo_35);
#line 380 "make.m"
          if ((make__Success_34 == (MR_Integer) 0))
#line 378 "make.m"
            {
#line 379 "make.m"
              {
#line 379 "make.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 379 "make.m"
                return;
              }
#line 378 "make.m"
            }
#line 380 "make.m"
          else
#line 381 "make.m"
            {
#line 381 "make.m"
            }
#line 332 "make.m"
        }
#line 12086 "make.c"
    else
#line 12088 "make.c"
      {
#line 322 "make.m"
        MR_Box make__conv8_STATE_VARIABLE_IO_47_122;

#line 322 "make.m"
        {
#line 322 "make.m"
          mercury__list__foldl_4_p_2(make__TypeCtorInfo_92_92, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make_scalar_common_1[16], make__AbsTargets_20, ((MR_Box) ((MR_Integer) 0)), &make__conv8_STATE_VARIABLE_IO_47_122);
        }
#line 330 "make.m"
        {
#line 330 "make.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 330 "make.m"
          return;
        }
#line 12105 "make.c"
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
