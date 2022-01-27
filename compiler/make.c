/*
** Automatically generated from `make.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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



#line 466 "make.m"
struct make__classify_target_2_4_p_0_env_0_s {
#line 466 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__Globals_5;
#line 466 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 466 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix_7;
#line 466 "make.m"
  MR_Word * make__classify_target_2_4_p_0_env_0__HeadVar__4_4;
#line 466 "make.m"
  MR_Cont make__classify_target_2_4_p_0_env_0__cont;
#line 466 "make.m"
  void * make__classify_target_2_4_p_0_env_0__cont_env_ptr;
#line 469 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__succeeded;
#line 469 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleName_8;
#line 469 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__TargetType_9;
#line 469 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__ModuleNameStr_11;
#line 479 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_10;
#line 479 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_0;
#line 530 "make.m"
  MR_Word make__classify_target_2_4_p_0_env_0__ModuleTargetType_47;
#line 530 "make.m"
  MR_bool make__classify_target_2_4_p_0_env_0__cond_1;
#line 518 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__Suffix1_16;
#line 512 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15;
#line 512 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_30_30;
#line 512 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_31_31;
#line 512 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_60_60;
#line 517 "make.m"
  MR_String make__classify_target_2_4_p_0_env_0__V_61_61;
#line 466 "make.m"
};

#line 450 "make.m"
struct make__classify_target_3_p_0_2_env_0_s {
#line 450 "make.m"
  MR_Box * make__classify_target_3_p_0_2_env_0__wrapper_arg_1;
#line 450 "make.m"
  MR_Cont make__classify_target_3_p_0_2_env_0__cont;
#line 450 "make.m"
  void * make__classify_target_3_p_0_2_env_0__cont_env_ptr;
#line 450 "make.m"
  MR_Word make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4;
#line 450 "make.m"
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
static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20];

#line 464 "make.c"
static const MR_ConstString make__make__field_names_make_info_0_0[20];

#line 467 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_make_info_0_0;

#line 470 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1];

#line 473 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1];

#line 476 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1];

#line 479 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1];

#line 482 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_0;

#line 485 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_1;

#line 488 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1];

#line 491 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_2;

#line 494 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_3;

#line 497 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_4;

#line 500 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_5;

#line 503 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_misc_target_type_0_6;

#line 506 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6];

#line 509 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1];

#line 512 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_misc_target_type_0[2];

#line 515 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7];

#line 518 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7];

#line 521 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0;

#line 524 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1;

#line 527 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2;

#line 530 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3;

#line 533 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4;

#line 536 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5;

#line 539 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6;

#line 542 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7;

#line 545 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_module_compilation_task_type_0[8];

#line 548 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_module_compilation_task_type_0[8];

#line 551 "make.c"
static const MR_Integer make__make__functor_number_map_module_compilation_task_type_0[8];

#line 554 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0;

#line 557 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 560 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3];

#line 563 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3];

#line 566 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_index_map_0_0;

#line 569 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1];

#line 572 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1];

#line 575 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1];

#line 578 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1];

#line 581 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_0;

#line 584 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_1;

#line 587 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_2;

#line 590 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_3;

#line 593 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_4;

#line 596 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_5;

#line 599 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_6;

#line 602 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_7;

#line 605 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_8;

#line 608 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1];

#line 611 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_9;

#line 614 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_10;

#line 617 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_11;

#line 620 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_12;

#line 623 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_13;

#line 626 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_14;

#line 629 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_15;

#line 632 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_16;

#line 635 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_17;

#line 638 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_18;

#line 641 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[1];

#line 644 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_19;

#line 647 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_20[1];

#line 650 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_20;

#line 653 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_21[2];

#line 656 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_21;

#line 659 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_22[2];

#line 662 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_22;

#line 665 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_module_target_type_0_23;

#line 668 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_0[19];

#line 671 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1];

#line 674 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1];

#line 677 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[3];

#line 680 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_target_type_0[4];

#line 683 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_target_type_0[24];

#line 686 "make.c"
static const MR_Integer make__make__functor_number_map_module_target_type_0[24];

#line 689 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0;

#line 692 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1;

#line 695 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2];

#line 698 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2];

#line 701 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2];

#line 704 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2];

#line 707 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2];

#line 710 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_file_0_0;

#line 713 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1];

#line 716 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1];

#line 719 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1];

#line 722 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1];

#line 725 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1];

#line 728 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_0;

#line 731 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1];

#line 734 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_1;

#line 737 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1];

#line 740 "make.c"
static const MR_DuFunctorDesc make__make__du_functor_desc_target_type_0_2;

#line 743 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1];

#line 746 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1];

#line 749 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1];

#line 752 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_type_0[3];

#line 755 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3];

#line 758 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3];

#line 761 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 764 "make.c"
  MR_Box make__wrapper_arg_1,
#line 766 "make.c"
  MR_Box make__wrapper_arg_2);

#line 769 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 772 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 774 "make.c"
  MR_Box make__wrapper_arg_2,
#line 776 "make.c"
  MR_Box make__wrapper_arg_3);

#line 779 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 782 "make.c"
  MR_Box make__wrapper_arg_1,
#line 784 "make.c"
  MR_Box make__wrapper_arg_2);

#line 787 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 790 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 792 "make.c"
  MR_Box make__wrapper_arg_2,
#line 794 "make.c"
  MR_Box make__wrapper_arg_3);

#line 797 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 800 "make.c"
  MR_Box make__wrapper_arg_1,
#line 802 "make.c"
  MR_Box make__wrapper_arg_2);

#line 805 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 808 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 810 "make.c"
  MR_Box make__wrapper_arg_2,
#line 812 "make.c"
  MR_Box make__wrapper_arg_3);

#line 815 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 818 "make.c"
  MR_Box make__wrapper_arg_1,
#line 820 "make.c"
  MR_Box make__wrapper_arg_2);

#line 823 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 826 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 828 "make.c"
  MR_Box make__wrapper_arg_2,
#line 830 "make.c"
  MR_Box make__wrapper_arg_3);

#line 833 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 836 "make.c"
  MR_Box make__wrapper_arg_1,
#line 838 "make.c"
  MR_Box make__wrapper_arg_2);

#line 841 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 844 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 846 "make.c"
  MR_Box make__wrapper_arg_2,
#line 848 "make.c"
  MR_Box make__wrapper_arg_3);

#line 851 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 854 "make.c"
  MR_Box make__wrapper_arg_1,
#line 856 "make.c"
  MR_Box make__wrapper_arg_2);

#line 859 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 862 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 864 "make.c"
  MR_Box make__wrapper_arg_2,
#line 866 "make.c"
  MR_Box make__wrapper_arg_3);

#line 869 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 872 "make.c"
  MR_Box make__wrapper_arg_1,
#line 874 "make.c"
  MR_Box make__wrapper_arg_2);

#line 877 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 880 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 882 "make.c"
  MR_Box make__wrapper_arg_2,
#line 884 "make.c"
  MR_Box make__wrapper_arg_3);

#line 887 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 890 "make.c"
  MR_Box make__wrapper_arg_1,
#line 892 "make.c"
  MR_Box make__wrapper_arg_2);

#line 895 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 898 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 900 "make.c"
  MR_Box make__wrapper_arg_2,
#line 902 "make.c"
  MR_Box make__wrapper_arg_3);

#line 905 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 908 "make.c"
  MR_Box make__wrapper_arg_1,
#line 910 "make.c"
  MR_Box make__wrapper_arg_2);

#line 913 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 916 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 918 "make.c"
  MR_Box make__wrapper_arg_2,
#line 920 "make.c"
  MR_Box make__wrapper_arg_3);

#line 923 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 926 "make.c"
  MR_Box make__wrapper_arg_1,
#line 928 "make.c"
  MR_Box make__wrapper_arg_2);

#line 931 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 934 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 936 "make.c"
  MR_Box make__wrapper_arg_2,
#line 938 "make.c"
  MR_Box make__wrapper_arg_3);

#line 941 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 944 "make.c"
  MR_Box make__wrapper_arg_1,
#line 946 "make.c"
  MR_Box make__wrapper_arg_2);

#line 949 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 952 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 954 "make.c"
  MR_Box make__wrapper_arg_2,
#line 956 "make.c"
  MR_Box make__wrapper_arg_3);

#line 959 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 962 "make.c"
  MR_Box make__wrapper_arg_1,
#line 964 "make.c"
  MR_Box make__wrapper_arg_2);

#line 967 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 970 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 972 "make.c"
  MR_Box make__wrapper_arg_2,
#line 974 "make.c"
  MR_Box make__wrapper_arg_3);

#line 977 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 980 "make.c"
  MR_Box make__wrapper_arg_1,
#line 982 "make.c"
  MR_Box make__wrapper_arg_2);

#line 985 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 988 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 990 "make.c"
  MR_Box make__wrapper_arg_2,
#line 992 "make.c"
  MR_Box make__wrapper_arg_3);

#line 995 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 998 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1000 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1003 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 1006 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1008 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1010 "make.c"
  MR_Box make__wrapper_arg_3);

#line 1013 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 1016 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1018 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1021 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 1024 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1026 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1028 "make.c"
  MR_Box make__wrapper_arg_3);

#line 1031 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 1034 "make.c"
  MR_Box make__wrapper_arg_1,
#line 1036 "make.c"
  MR_Box make__wrapper_arg_2);

#line 1039 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 1042 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 1044 "make.c"
  MR_Box make__wrapper_arg_2,
#line 1046 "make.c"
  MR_Box make__wrapper_arg_3);

#line 352 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__352__1_1_p_0(
#line 352 "make.m"
  MR_String make__HeadVar__1_68);

#line 326 "make.m"
static void MR_CALL 
make__IntroducedFrom__pred__make_process_args__326__1_3_p_0(
#line 326 "make.m"
  MR_String make__HeadVar__1_52);

#line 316 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__316__1_1_p_0(
#line 316 "make.m"
  MR_String make__HeadVar__1_46);

#line 692 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 692 "make.m"
  MR_Box make__closure_arg,
#line 692 "make.m"
  MR_Box make__wrapper_arg_1);

#line 621 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 621 "make.m"
  MR_Box make__closure_arg,
#line 621 "make.m"
  MR_Box make__wrapper_arg_1,
#line 621 "make.m"
  MR_Box make__wrapper_arg_2,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 621 "make.m"
  MR_Box make__wrapper_arg_4,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 621 "make.m"
  MR_Box make__wrapper_arg_6,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 621 "make.m"
  MR_Box make__wrapper_arg_8,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_9);

#line 471 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 471 "make.m"
  void * make__env_ptr_arg);

#line 477 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 477 "make.m"
  void * make__env_ptr_arg);

#line 469 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 469 "make.m"
  void * make__env_ptr_arg);

#line 520 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 520 "make.m"
  void * make__env_ptr_arg);

#line 518 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 518 "make.m"
  void * make__env_ptr_arg);

#line 528 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 528 "make.m"
  void * make__env_ptr_arg);

#line 512 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 512 "make.m"
  void * make__env_ptr_arg);

#line 517 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 517 "make.m"
  void * make__env_ptr_arg);

#line 450 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 450 "make.m"
  void * make__env_ptr_arg);

#line 450 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 450 "make.m"
  MR_Box make__closure_arg,
#line 450 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 450 "make.m"
  MR_Cont make__cont,
#line 450 "make.m"
  void * make__cont_env_ptr);

#line 326 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_8(
#line 326 "make.m"
  MR_Box make__closure_arg,
#line 326 "make.m"
  MR_Box make__wrapper_arg_1,
#line 326 "make.m"
  MR_Box make__wrapper_arg_2,
#line 326 "make.m"
  MR_Box * make__wrapper_arg_3);

#line 388 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_7(
#line 388 "make.m"
  MR_Box make__closure_arg,
#line 388 "make.m"
  MR_Box make__wrapper_arg_1,
#line 388 "make.m"
  MR_Box make__wrapper_arg_2,
#line 388 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 388 "make.m"
  MR_Box make__wrapper_arg_4,
#line 388 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 388 "make.m"
  MR_Box make__wrapper_arg_6,
#line 388 "make.m"
  MR_Box * make__wrapper_arg_7);

#line 356 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_6(
#line 356 "make.m"
  MR_Box make__closure_arg,
#line 356 "make.m"
  MR_Box make__wrapper_arg_1,
#line 356 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 350 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_5(
#line 350 "make.m"
  MR_Box make__closure_arg,
#line 350 "make.m"
  MR_Box make__wrapper_arg_1);

#line 345 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_4(
#line 345 "make.m"
  MR_Box make__closure_arg,
#line 345 "make.m"
  MR_Box make__wrapper_arg_1,
#line 345 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 343 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_3(
#line 343 "make.m"
  MR_Box make__closure_arg,
#line 343 "make.m"
  MR_Box make__wrapper_arg_1,
#line 343 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 340 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_2(
#line 340 "make.m"
  MR_Box make__closure_arg,
#line 340 "make.m"
  MR_Box make__wrapper_arg_1,
#line 340 "make.m"
  MR_Box * make__wrapper_arg_2);

#line 316 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_1(
#line 316 "make.m"
  MR_Box make__closure_arg,
#line 316 "make.m"
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



#line 1614 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 1623 "make.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__set_ordlist__pti_set_ordlist_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

#line 1631 "make.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 1640 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_0 = {
  (MR_String) "header_mh",
  (MR_Integer) 0
};

#line 1646 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_c_header_type_0_1 = {
  (MR_String) "header_mih",
  (MR_Integer) 1
};

#line 1652 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1658 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_c_header_type_0[2] = {
  &make__make__enum_functor_desc_c_header_type_0_0,
  &make__make__enum_functor_desc_c_header_type_0_1
};

#line 1664 "make.c"
static const MR_Integer make__make__functor_number_map_c_header_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1670 "make.c"
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

#line 1691 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_compilation_task_type_0
};

#line 1696 "make.c"
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

#line 1711 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 1716 "make.c"
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

#line 1731 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 1737 "make.c"
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

#line 1752 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_compilation_task_type_0_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1758 "make.c"
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

#line 1773 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_0[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_0
};

#line 1778 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_1[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1783 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_2[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_2
};

#line 1788 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_compilation_task_type_0_3[1] = {
  &make__make__du_functor_desc_compilation_task_type_0_3
};

#line 1793 "make.c"
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

#line 1817 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_compilation_task_type_0[4] = {
  &make__make__du_functor_desc_compilation_task_type_0_3,
  &make__make__du_functor_desc_compilation_task_type_0_2,
  &make__make__du_functor_desc_compilation_task_type_0_0,
  &make__make__du_functor_desc_compilation_task_type_0_1
};

#line 1825 "make.c"
static const MR_Integer make__make__functor_number_map_compilation_task_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1833 "make.c"
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

#line 1854 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

#line 1863 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

#line 1871 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_dependency_file_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__dependencies__type_ctor_info_dependency_file_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1make__dependencies__type_ctor_info_dependency_file_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1878 "make.c"
static const MR_ConstString make__make__field_names_dependency_file_index_map_0_0[3] = {
  (MR_String) "dfim_forward_map",
  (MR_String) "dfim_reverse_map",
  (MR_String) "dfim_counter"
};

#line 1885 "make.c"
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

#line 1900 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_dependency_file_index_map_0_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1905 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_dependency_file_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_dependency_file_index_map_0_0
  }
};

#line 1914 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_dependency_file_index_map_0[1] = {
  &make__make__du_functor_desc_dependency_file_index_map_0_0
};

#line 1919 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_file_index_map_0[1] = {
  (MR_Integer) 0
};

#line 1924 "make.c"
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

#line 1945 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_0 = {
  (MR_String) "deps_status_not_considered",
  (MR_Integer) 0
};

#line 1951 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_1 = {
  (MR_String) "deps_status_being_built",
  (MR_Integer) 1
};

#line 1957 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_2 = {
  (MR_String) "deps_status_up_to_date",
  (MR_Integer) 2
};

#line 1963 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_dependency_status_0_3 = {
  (MR_String) "deps_status_error",
  (MR_Integer) 3
};

#line 1969 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_2,
  &make__make__enum_functor_desc_dependency_status_0_3
};

#line 1977 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_dependency_status_0[4] = {
  &make__make__enum_functor_desc_dependency_status_0_1,
  &make__make__enum_functor_desc_dependency_status_0_3,
  &make__make__enum_functor_desc_dependency_status_0_0,
  &make__make__enum_functor_desc_dependency_status_0_2
};

#line 1985 "make.c"
static const MR_Integer make__make__functor_number_map_dependency_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1993 "make.c"
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

#line 2014 "make.c"
static const MR_FA_TypeInfo_Struct2 make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2023 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

#line 2032 "make.c"
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

#line 2053 "make.c"
static const MR_FA_TypeInfo_Struct1 make__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2061 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) &make__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2067 "make.c"
static const MR_ConstString make__make__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

#line 2073 "make.c"
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

#line 2088 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_last_hash_0_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2093 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_last_hash_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_last_hash_0_0
  }
};

#line 2102 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_last_hash_0[1] = {
  &make__make__du_functor_desc_last_hash_0_0
};

#line 2107 "make.c"
static const MR_Integer make__make__functor_number_map_last_hash_0[1] = {
  (MR_Integer) 0
};

#line 2112 "make.c"
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

#line 2133 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_linked_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
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

#line 2205 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
};

#line 2210 "make.c"
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

#line 2225 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 2230 "make.c"
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

#line 2245 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_error_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2250 "make.c"
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

#line 2265 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_0[1] = {
  &make__make__du_functor_desc_make_error_0_0
};

#line 2270 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_1[1] = {
  &make__make__du_functor_desc_make_error_0_1
};

#line 2275 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_error_0_2[1] = {
  &make__make__du_functor_desc_make_error_0_2
};

#line 2280 "make.c"
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

#line 2299 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_error_0[3] = {
  &make__make__du_functor_desc_make_error_0_1,
  &make__make__du_functor_desc_make_error_0_2,
  &make__make__du_functor_desc_make_error_0_0
};

#line 2306 "make.c"
static const MR_Integer make__make__functor_number_map_make_error_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2313 "make.c"
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

#line 2334 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2342 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 2351 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2360 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2369 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

#line 2378 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

#line 2387 "make.c"
static const MR_FA_TypeInfo_Struct1 make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2395 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2404 "make.c"
static const MR_FA_TypeInfo_Struct2 make__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0,
    (MR_TypeInfo) &make__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2413 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2421 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2429 "make.c"
static const MR_FA_TypeInfo_Struct2 make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__make__type_ctor_info_target_type_0
  }
};

#line 2438 "make.c"
static const MR_FA_TypeInfo_Struct1 make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &make__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0
  }
};

#line 2446 "make.c"
static const MR_FA_TypeInfo_Struct1 make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__util__make__util__type_ctor_info_job_ctl_0
  }
};

#line 2454 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_make_info_0_0[20] = {
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0maybe__ti_maybe_1parse_tree__module_imports__type_ctor_info_module_and_imports_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0,
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
  (MR_PseudoTypeInfo) &make__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__set_ordlist__ti_set_ordlist_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__type_ctor_info_target_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &make__maybe__ti_maybe_1make__util__type_ctor_info_job_ctl_0
};

#line 2478 "make.c"
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

#line 2502 "make.c"
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

#line 2517 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_make_info_0_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2522 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_make_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_make_info_0_0
  }
};

#line 2531 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_make_info_0[1] = {
  &make__make__du_functor_desc_make_info_0_0
};

#line 2536 "make.c"
static const MR_Integer make__make__functor_number_map_make_info_0[1] = {
  (MR_Integer) 0
};

#line 2541 "make.c"
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

#line 2562 "make.c"
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

#line 2577 "make.c"
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

#line 2592 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_misc_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 2597 "make.c"
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

#line 2612 "make.c"
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

#line 2627 "make.c"
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

#line 2642 "make.c"
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

#line 2657 "make.c"
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

#line 2672 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_0[6] = {
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_1,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_6
};

#line 2682 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_misc_target_type_0_1[1] = {
  &make__make__du_functor_desc_misc_target_type_0_2
};

#line 2687 "make.c"
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

#line 2701 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_misc_target_type_0[7] = {
  &make__make__du_functor_desc_misc_target_type_0_2,
  &make__make__du_functor_desc_misc_target_type_0_3,
  &make__make__du_functor_desc_misc_target_type_0_4,
  &make__make__du_functor_desc_misc_target_type_0_6,
  &make__make__du_functor_desc_misc_target_type_0_0,
  &make__make__du_functor_desc_misc_target_type_0_5,
  &make__make__du_functor_desc_misc_target_type_0_1
};

#line 2712 "make.c"
static const MR_Integer make__make__functor_number_map_misc_target_type_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 2723 "make.c"
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

#line 2744 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_0 = {
  (MR_String) "task_errorcheck",
  (MR_Integer) 0
};

#line 2750 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_1 = {
  (MR_String) "task_make_short_interface",
  (MR_Integer) 1
};

#line 2756 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_2 = {
  (MR_String) "task_make_interface",
  (MR_Integer) 2
};

#line 2762 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_3 = {
  (MR_String) "task_make_private_interface",
  (MR_Integer) 3
};

#line 2768 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_4 = {
  (MR_String) "task_make_optimization_interface",
  (MR_Integer) 4
};

#line 2774 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_5 = {
  (MR_String) "task_make_analysis_registry",
  (MR_Integer) 5
};

#line 2780 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_6 = {
  (MR_String) "task_compile_to_target_code",
  (MR_Integer) 6
};

#line 2786 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_module_compilation_task_type_0_7 = {
  (MR_String) "task_make_xml_doc",
  (MR_Integer) 7
};

#line 2792 "make.c"
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

#line 2804 "make.c"
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

#line 2816 "make.c"
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

#line 2828 "make.c"
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

#line 2849 "make.c"
static const MR_FA_TypeInfo_Struct2 make__version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__version_hash_table__version_hash_table__type_ctor_info_version_hash_table_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

#line 2858 "make.c"
static const MR_FA_TypeInfo_Struct1 make__version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2866 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_index_map_0_0[3] = {
  (MR_PseudoTypeInfo) &make__version_hash_table__ti_version_hash_table_2mdbcomp__prim_data__type_ctor_info_sym_name_0make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__version_array__ti_version_array_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2873 "make.c"
static const MR_ConstString make__make__field_names_module_index_map_0_0[3] = {
  (MR_String) "mim_forward_map",
  (MR_String) "mim_reverse_map",
  (MR_String) "mim_counter"
};

#line 2880 "make.c"
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

#line 2895 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_index_map_0_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2900 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_module_index_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_module_index_map_0_0
  }
};

#line 2909 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_module_index_map_0[1] = {
  &make__make__du_functor_desc_module_index_map_0_0
};

#line 2914 "make.c"
static const MR_Integer make__make__functor_number_map_module_index_map_0[1] = {
  (MR_Integer) 0
};

#line 2919 "make.c"
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

#line 2940 "make.c"
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

#line 2955 "make.c"
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

#line 2970 "make.c"
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

#line 2985 "make.c"
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

#line 3000 "make.c"
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

#line 3015 "make.c"
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

#line 3030 "make.c"
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

#line 3045 "make.c"
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

#line 3060 "make.c"
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

#line 3075 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_9[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_c_header_type_0
};

#line 3080 "make.c"
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

#line 3095 "make.c"
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

#line 3110 "make.c"
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

#line 3125 "make.c"
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

#line 3140 "make.c"
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

#line 3155 "make.c"
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

#line 3170 "make.c"
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

#line 3185 "make.c"
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

#line 3200 "make.c"
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

#line 3215 "make.c"
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

#line 3230 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_19[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0
};

#line 3235 "make.c"
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

#line 3250 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_20[1] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3255 "make.c"
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

#line 3270 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_21[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
};

#line 3276 "make.c"
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

#line 3291 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_module_target_type_0_22[2] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3297 "make.c"
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

#line 3312 "make.c"
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

#line 3327 "make.c"
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

#line 3350 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_1[1] = {
  &make__make__du_functor_desc_module_target_type_0_9
};

#line 3355 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_2[1] = {
  &make__make__du_functor_desc_module_target_type_0_19
};

#line 3360 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_module_target_type_0_3[3] = {
  &make__make__du_functor_desc_module_target_type_0_20,
  &make__make__du_functor_desc_module_target_type_0_21,
  &make__make__du_functor_desc_module_target_type_0_22
};

#line 3367 "make.c"
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

#line 3391 "make.c"
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

#line 3419 "make.c"
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

#line 3447 "make.c"
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

#line 3468 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_0 = {
  (MR_String) "do_rebuild_module_deps",
  (MR_Integer) 0
};

#line 3474 "make.c"
static const MR_EnumFunctorDesc make__make__enum_functor_desc_rebuild_module_deps_0_1 = {
  (MR_String) "do_not_rebuild_module_deps",
  (MR_Integer) 1
};

#line 3480 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_value_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_0,
  &make__make__enum_functor_desc_rebuild_module_deps_0_1
};

#line 3486 "make.c"
static const MR_EnumFunctorDescPtr make__make__enum_name_ordered_rebuild_module_deps_0[2] = {
  &make__make__enum_functor_desc_rebuild_module_deps_0_1,
  &make__make__enum_functor_desc_rebuild_module_deps_0_0
};

#line 3492 "make.c"
static const MR_Integer make__make__functor_number_map_rebuild_module_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3498 "make.c"
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

#line 3519 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3525 "make.c"
static const MR_ConstString make__make__field_names_target_file_0_0[2] = {
  (MR_String) "target_file_name",
  (MR_String) "target_file_type"
};

#line 3531 "make.c"
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

#line 3546 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_file_0_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3551 "make.c"
static const MR_DuPtagLayout make__make__du_ptag_ordered_target_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__make__du_stag_ordered_target_file_0_0
  }
};

#line 3560 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_file_0[1] = {
  &make__make__du_functor_desc_target_file_0_0
};

#line 3565 "make.c"
static const MR_Integer make__make__functor_number_map_target_file_0[1] = {
  (MR_Integer) 0
};

#line 3570 "make.c"
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

#line 3591 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_module_target_type_0
};

#line 3596 "make.c"
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

#line 3611 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0
};

#line 3616 "make.c"
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

#line 3631 "make.c"
static const MR_PseudoTypeInfo make__make__field_types_target_type_0_2[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_misc_target_type_0
};

#line 3636 "make.c"
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

#line 3651 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_0[1] = {
  &make__make__du_functor_desc_target_type_0_0
};

#line 3656 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_1[1] = {
  &make__make__du_functor_desc_target_type_0_1
};

#line 3661 "make.c"
static const MR_DuFunctorDescPtr make__make__du_stag_ordered_target_type_0_2[1] = {
  &make__make__du_functor_desc_target_type_0_2
};

#line 3666 "make.c"
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

#line 3685 "make.c"
static const MR_DuFunctorDescPtr make__make__du_name_ordered_target_type_0[3] = {
  &make__make__du_functor_desc_target_type_0_1,
  &make__make__du_functor_desc_target_type_0_2,
  &make__make__du_functor_desc_target_type_0_0
};

#line 3692 "make.c"
static const MR_Integer make__make__functor_number_map_target_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3699 "make.c"
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

#line 3720 "make.c"
static MR_bool MR_CALL 
make____Unify____c_header_type_0_0_10001(
#line 3723 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3725 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3727 "make.c"
{
#line 3729 "make.c"
  {
#line 3731 "make.c"
    MR_bool make__succeeded;

#line 3734 "make.c"
    {
#line 3736 "make.c"
      make__succeeded = make____Unify____c_header_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3739 "make.c"
    return make__succeeded;
#line 3741 "make.c"
  }
#line 3743 "make.c"
}

#line 3746 "make.c"
static void MR_CALL 
make____Compare____c_header_type_0_0_10001(
#line 3749 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3751 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3753 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3755 "make.c"
{
#line 3757 "make.c"
  {
#line 3759 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3762 "make.c"
    {
#line 3764 "make.c"
      make____Compare____c_header_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3767 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3769 "make.c"
  }
#line 3771 "make.c"
}

#line 3774 "make.c"
static MR_bool MR_CALL 
make____Unify____compilation_task_type_0_0_10001(
#line 3777 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3779 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3781 "make.c"
{
#line 3783 "make.c"
  {
#line 3785 "make.c"
    MR_bool make__succeeded;

#line 3788 "make.c"
    {
#line 3790 "make.c"
      make__succeeded = make____Unify____compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3793 "make.c"
    return make__succeeded;
#line 3795 "make.c"
  }
#line 3797 "make.c"
}

#line 3800 "make.c"
static void MR_CALL 
make____Compare____compilation_task_type_0_0_10001(
#line 3803 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3805 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3807 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3809 "make.c"
{
#line 3811 "make.c"
  {
#line 3813 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3816 "make.c"
    {
#line 3818 "make.c"
      make____Compare____compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3821 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3823 "make.c"
  }
#line 3825 "make.c"
}

#line 3828 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_file_index_map_0_0_10001(
#line 3831 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3833 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3835 "make.c"
{
#line 3837 "make.c"
  {
#line 3839 "make.c"
    MR_bool make__succeeded;

#line 3842 "make.c"
    {
#line 3844 "make.c"
      make__succeeded = make____Unify____dependency_file_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3847 "make.c"
    return make__succeeded;
#line 3849 "make.c"
  }
#line 3851 "make.c"
}

#line 3854 "make.c"
static void MR_CALL 
make____Compare____dependency_file_index_map_0_0_10001(
#line 3857 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3859 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3861 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3863 "make.c"
{
#line 3865 "make.c"
  {
#line 3867 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3870 "make.c"
    {
#line 3872 "make.c"
      make____Compare____dependency_file_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3875 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3877 "make.c"
  }
#line 3879 "make.c"
}

#line 3882 "make.c"
static MR_bool MR_CALL 
make____Unify____dependency_status_0_0_10001(
#line 3885 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3887 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3889 "make.c"
{
#line 3891 "make.c"
  {
#line 3893 "make.c"
    MR_bool make__succeeded;

#line 3896 "make.c"
    {
#line 3898 "make.c"
      make__succeeded = make____Unify____dependency_status_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3901 "make.c"
    return make__succeeded;
#line 3903 "make.c"
  }
#line 3905 "make.c"
}

#line 3908 "make.c"
static void MR_CALL 
make____Compare____dependency_status_0_0_10001(
#line 3911 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3913 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3915 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3917 "make.c"
{
#line 3919 "make.c"
  {
#line 3921 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3924 "make.c"
    {
#line 3926 "make.c"
      make____Compare____dependency_status_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3929 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3931 "make.c"
  }
#line 3933 "make.c"
}

#line 3936 "make.c"
static MR_bool MR_CALL 
make____Unify____file_timestamps_0_0_10001(
#line 3939 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3941 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3943 "make.c"
{
#line 3945 "make.c"
  {
#line 3947 "make.c"
    MR_bool make__succeeded;

#line 3950 "make.c"
    {
#line 3952 "make.c"
      make__succeeded = make____Unify____file_timestamps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 3955 "make.c"
    return make__succeeded;
#line 3957 "make.c"
  }
#line 3959 "make.c"
}

#line 3962 "make.c"
static void MR_CALL 
make____Compare____file_timestamps_0_0_10001(
#line 3965 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 3967 "make.c"
  MR_Box make__wrapper_arg_2,
#line 3969 "make.c"
  MR_Box make__wrapper_arg_3)
#line 3971 "make.c"
{
#line 3973 "make.c"
  {
#line 3975 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 3978 "make.c"
    {
#line 3980 "make.c"
      make____Compare____file_timestamps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 3983 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 3985 "make.c"
  }
#line 3987 "make.c"
}

#line 3990 "make.c"
static MR_bool MR_CALL 
make____Unify____last_hash_0_0_10001(
#line 3993 "make.c"
  MR_Box make__wrapper_arg_1,
#line 3995 "make.c"
  MR_Box make__wrapper_arg_2)
#line 3997 "make.c"
{
#line 3999 "make.c"
  {
#line 4001 "make.c"
    MR_bool make__succeeded;

#line 4004 "make.c"
    {
#line 4006 "make.c"
      make__succeeded = make____Unify____last_hash_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4009 "make.c"
    return make__succeeded;
#line 4011 "make.c"
  }
#line 4013 "make.c"
}

#line 4016 "make.c"
static void MR_CALL 
make____Compare____last_hash_0_0_10001(
#line 4019 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4021 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4023 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4025 "make.c"
{
#line 4027 "make.c"
  {
#line 4029 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4032 "make.c"
    {
#line 4034 "make.c"
      make____Compare____last_hash_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4037 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4039 "make.c"
  }
#line 4041 "make.c"
}

#line 4044 "make.c"
static MR_bool MR_CALL 
make____Unify____linked_target_file_0_0_10001(
#line 4047 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4049 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4051 "make.c"
{
#line 4053 "make.c"
  {
#line 4055 "make.c"
    MR_bool make__succeeded;

#line 4058 "make.c"
    {
#line 4060 "make.c"
      make__succeeded = make____Unify____linked_target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4063 "make.c"
    return make__succeeded;
#line 4065 "make.c"
  }
#line 4067 "make.c"
}

#line 4070 "make.c"
static void MR_CALL 
make____Compare____linked_target_file_0_0_10001(
#line 4073 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4075 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4077 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4079 "make.c"
{
#line 4081 "make.c"
  {
#line 4083 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4086 "make.c"
    {
#line 4088 "make.c"
      make____Compare____linked_target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4091 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4093 "make.c"
  }
#line 4095 "make.c"
}

#line 4098 "make.c"
static MR_bool MR_CALL 
make____Unify____make_error_0_0_10001(
#line 4101 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4103 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4105 "make.c"
{
#line 4107 "make.c"
  {
#line 4109 "make.c"
    MR_bool make__succeeded;

#line 4112 "make.c"
    {
#line 4114 "make.c"
      make__succeeded = make____Unify____make_error_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4117 "make.c"
    return make__succeeded;
#line 4119 "make.c"
  }
#line 4121 "make.c"
}

#line 4124 "make.c"
static void MR_CALL 
make____Compare____make_error_0_0_10001(
#line 4127 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4129 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4131 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4133 "make.c"
{
#line 4135 "make.c"
  {
#line 4137 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4140 "make.c"
    {
#line 4142 "make.c"
      make____Compare____make_error_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4145 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4147 "make.c"
  }
#line 4149 "make.c"
}

#line 4152 "make.c"
static MR_bool MR_CALL 
make____Unify____make_info_0_0_10001(
#line 4155 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4157 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4159 "make.c"
{
#line 4161 "make.c"
  {
#line 4163 "make.c"
    MR_bool make__succeeded;

#line 4166 "make.c"
    {
#line 4168 "make.c"
      make__succeeded = make____Unify____make_info_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4171 "make.c"
    return make__succeeded;
#line 4173 "make.c"
  }
#line 4175 "make.c"
}

#line 4178 "make.c"
static void MR_CALL 
make____Compare____make_info_0_0_10001(
#line 4181 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4183 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4185 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4187 "make.c"
{
#line 4189 "make.c"
  {
#line 4191 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4194 "make.c"
    {
#line 4196 "make.c"
      make____Compare____make_info_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4199 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4201 "make.c"
  }
#line 4203 "make.c"
}

#line 4206 "make.c"
static MR_bool MR_CALL 
make____Unify____misc_target_type_0_0_10001(
#line 4209 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4211 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4213 "make.c"
{
#line 4215 "make.c"
  {
#line 4217 "make.c"
    MR_bool make__succeeded;

#line 4220 "make.c"
    {
#line 4222 "make.c"
      make__succeeded = make____Unify____misc_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4225 "make.c"
    return make__succeeded;
#line 4227 "make.c"
  }
#line 4229 "make.c"
}

#line 4232 "make.c"
static void MR_CALL 
make____Compare____misc_target_type_0_0_10001(
#line 4235 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4237 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4239 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4241 "make.c"
{
#line 4243 "make.c"
  {
#line 4245 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4248 "make.c"
    {
#line 4250 "make.c"
      make____Compare____misc_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4253 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4255 "make.c"
  }
#line 4257 "make.c"
}

#line 4260 "make.c"
static MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0_10001(
#line 4263 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4265 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4267 "make.c"
{
#line 4269 "make.c"
  {
#line 4271 "make.c"
    MR_bool make__succeeded;

#line 4274 "make.c"
    {
#line 4276 "make.c"
      make__succeeded = make____Unify____module_compilation_task_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4279 "make.c"
    return make__succeeded;
#line 4281 "make.c"
  }
#line 4283 "make.c"
}

#line 4286 "make.c"
static void MR_CALL 
make____Compare____module_compilation_task_type_0_0_10001(
#line 4289 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4291 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4293 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4295 "make.c"
{
#line 4297 "make.c"
  {
#line 4299 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4302 "make.c"
    {
#line 4304 "make.c"
      make____Compare____module_compilation_task_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4307 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4309 "make.c"
  }
#line 4311 "make.c"
}

#line 4314 "make.c"
static MR_bool MR_CALL 
make____Unify____module_index_map_0_0_10001(
#line 4317 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4319 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4321 "make.c"
{
#line 4323 "make.c"
  {
#line 4325 "make.c"
    MR_bool make__succeeded;

#line 4328 "make.c"
    {
#line 4330 "make.c"
      make__succeeded = make____Unify____module_index_map_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4333 "make.c"
    return make__succeeded;
#line 4335 "make.c"
  }
#line 4337 "make.c"
}

#line 4340 "make.c"
static void MR_CALL 
make____Compare____module_index_map_0_0_10001(
#line 4343 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4345 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4347 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4349 "make.c"
{
#line 4351 "make.c"
  {
#line 4353 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4356 "make.c"
    {
#line 4358 "make.c"
      make____Compare____module_index_map_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4361 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4363 "make.c"
  }
#line 4365 "make.c"
}

#line 4368 "make.c"
static MR_bool MR_CALL 
make____Unify____module_target_type_0_0_10001(
#line 4371 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4373 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4375 "make.c"
{
#line 4377 "make.c"
  {
#line 4379 "make.c"
    MR_bool make__succeeded;

#line 4382 "make.c"
    {
#line 4384 "make.c"
      make__succeeded = make____Unify____module_target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4387 "make.c"
    return make__succeeded;
#line 4389 "make.c"
  }
#line 4391 "make.c"
}

#line 4394 "make.c"
static void MR_CALL 
make____Compare____module_target_type_0_0_10001(
#line 4397 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4399 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4401 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4403 "make.c"
{
#line 4405 "make.c"
  {
#line 4407 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4410 "make.c"
    {
#line 4412 "make.c"
      make____Compare____module_target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4415 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4417 "make.c"
  }
#line 4419 "make.c"
}

#line 4422 "make.c"
static MR_bool MR_CALL 
make____Unify____rebuild_module_deps_0_0_10001(
#line 4425 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4427 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4429 "make.c"
{
#line 4431 "make.c"
  {
#line 4433 "make.c"
    MR_bool make__succeeded;

#line 4436 "make.c"
    {
#line 4438 "make.c"
      make__succeeded = make____Unify____rebuild_module_deps_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4441 "make.c"
    return make__succeeded;
#line 4443 "make.c"
  }
#line 4445 "make.c"
}

#line 4448 "make.c"
static void MR_CALL 
make____Compare____rebuild_module_deps_0_0_10001(
#line 4451 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4453 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4455 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4457 "make.c"
{
#line 4459 "make.c"
  {
#line 4461 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4464 "make.c"
    {
#line 4466 "make.c"
      make____Compare____rebuild_module_deps_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4469 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4471 "make.c"
  }
#line 4473 "make.c"
}

#line 4476 "make.c"
static MR_bool MR_CALL 
make____Unify____target_file_0_0_10001(
#line 4479 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4481 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4483 "make.c"
{
#line 4485 "make.c"
  {
#line 4487 "make.c"
    MR_bool make__succeeded;

#line 4490 "make.c"
    {
#line 4492 "make.c"
      make__succeeded = make____Unify____target_file_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4495 "make.c"
    return make__succeeded;
#line 4497 "make.c"
  }
#line 4499 "make.c"
}

#line 4502 "make.c"
static void MR_CALL 
make____Compare____target_file_0_0_10001(
#line 4505 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4507 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4509 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4511 "make.c"
{
#line 4513 "make.c"
  {
#line 4515 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4518 "make.c"
    {
#line 4520 "make.c"
      make____Compare____target_file_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4523 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4525 "make.c"
  }
#line 4527 "make.c"
}

#line 4530 "make.c"
static MR_bool MR_CALL 
make____Unify____target_type_0_0_10001(
#line 4533 "make.c"
  MR_Box make__wrapper_arg_1,
#line 4535 "make.c"
  MR_Box make__wrapper_arg_2)
#line 4537 "make.c"
{
#line 4539 "make.c"
  {
#line 4541 "make.c"
    MR_bool make__succeeded;

#line 4544 "make.c"
    {
#line 4546 "make.c"
      make__succeeded = make____Unify____target_type_0_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2));
    }
#line 4549 "make.c"
    return make__succeeded;
#line 4551 "make.c"
  }
#line 4553 "make.c"
}

#line 4556 "make.c"
static void MR_CALL 
make____Compare____target_type_0_0_10001(
#line 4559 "make.c"
  MR_Box * make__wrapper_arg_1,
#line 4561 "make.c"
  MR_Box make__wrapper_arg_2,
#line 4563 "make.c"
  MR_Box make__wrapper_arg_3)
#line 4565 "make.c"
{
#line 4567 "make.c"
  {
#line 4569 "make.c"
    MR_Word make__conv0_HeadVar__1_1;

#line 4572 "make.c"
    {
#line 4574 "make.c"
      make____Compare____target_type_0_0(&make__conv0_HeadVar__1_1, ((MR_Word) make__wrapper_arg_2), ((MR_Word) make__wrapper_arg_3));
    }
#line 4577 "make.c"
    *make__wrapper_arg_1 = ((MR_Box) (make__conv0_HeadVar__1_1));
#line 4579 "make.c"
  }
#line 4581 "make.c"
}

#line 352 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__352__1_1_p_0(
#line 352 "make.m"
  MR_String make__HeadVar__1_68)
#line 352 "make.m"
{
#line 352 "make.m"
  {
#line 352 "make.m"
    MR_bool make__succeeded;

#line 352 "make.m"
    {
#line 352 "make.m"
      make__succeeded = mercury__string__suffix_2_p_0(make__HeadVar__1_68, (MR_String) ".depend");
    }
#line 352 "make.m"
    make__succeeded = !(make__succeeded);
#line 352 "make.m"
    return make__succeeded;
#line 352 "make.m"
  }
#line 352 "make.m"
}

#line 326 "make.m"
static void MR_CALL 
make__IntroducedFrom__pred__make_process_args__326__1_3_p_0(
#line 326 "make.m"
  MR_String make__HeadVar__1_52)
#line 326 "make.m"
{
#line 326 "make.m"
  {
#line 326 "make.m"
    MR_bool make__succeeded;

#line 328 "make.m"
    {
#line 328 "make.m"
      parse_tree__error_util__write_error_plain_with_progname_4_p_0(make__HeadVar__1_52, (MR_String) "Make target must not contain any directory component.");
#line 328 "make.m"
      return;
    }
#line 326 "make.m"
  }
#line 326 "make.m"
}

#line 316 "make.m"
static MR_bool MR_CALL 
make__IntroducedFrom__pred__make_process_args__316__1_1_p_0(
#line 316 "make.m"
  MR_String make__HeadVar__1_46)
#line 316 "make.m"
{
#line 316 "make.m"
  {
#line 316 "make.m"
    MR_bool make__succeeded;
#line 316 "make.m"
    MR_Char make__V_47_47;

#line 318 "make.m"
    {
#line 318 "make.m"
      make__V_47_47 = mercury__dir__directory_separator_0_f_0();
    }
#line 318 "make.m"
    {
#line 318 "make.m"
      return make__succeeded = mercury__string__contains_char_2_p_0(make__HeadVar__1_46, make__V_47_47);
    }
#line 316 "make.m"
    return make__succeeded;
#line 316 "make.m"
  }
#line 316 "make.m"
}

#line 437 "make.m"
void MR_CALL 
make____Compare____target_type_0_0(
#line 437 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 437 "make.m"
  MR_Word make__HeadVar__2_2,
#line 437 "make.m"
  MR_Word make__HeadVar__3_3)
#line 437 "make.m"
{
#line 437 "make.m"
  {
#line 437 "make.m"
    MR_bool make__succeeded;
#line 437 "make.m"
    MR_Integer make__CastX_22 = (MR_Integer) make__HeadVar__2_2;
#line 437 "make.m"
    MR_Integer make__CastY_23 = (MR_Integer) make__HeadVar__3_3;

#line 437 "make.m"
    make__succeeded = (make__CastX_22 == make__CastY_23);
#line 437 "make.m"
    if (make__succeeded)
#line 4689 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 437 "make.m"
    else
#line 437 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 437 "make.m"
        {
#line 437 "make.m"
          MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 437 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 437 "make.m"
            {
#line 437 "make.m"
              MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 437 "make.m"
              MR_Integer make__V_30_30 = (MR_Integer) make__V_27_27;
#line 437 "make.m"
              MR_Integer make__V_31_31 = (MR_Integer) make__V_13_13;

#line 437 "make.m"
              {
#line 437 "make.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_30_30, make__V_31_31);
#line 437 "make.m"
                return;
              }
#line 437 "make.m"
            }
#line 437 "make.m"
          else
#line 437 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4724 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 437 "make.m"
            else
#line 4728 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 437 "make.m"
        }
#line 437 "make.m"
      else
#line 437 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 437 "make.m"
          {
#line 437 "make.m"
            MR_Word make__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 437 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4743 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 437 "make.m"
            else
#line 437 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 437 "make.m"
                {
#line 437 "make.m"
                  MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));

#line 437 "make.m"
                  {
#line 437 "make.m"
                    make____Compare____misc_target_type_0_0(make__HeadVar__1_1, make__V_28_28, make__V_21_21);
#line 437 "make.m"
                    return;
                  }
#line 437 "make.m"
                }
#line 437 "make.m"
              else
#line 4765 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 437 "make.m"
          }
#line 437 "make.m"
        else
#line 437 "make.m"
          {
#line 437 "make.m"
            MR_Word make__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

#line 437 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4778 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 437 "make.m"
            else
#line 437 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4784 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 437 "make.m"
              else
#line 437 "make.m"
                {
#line 437 "make.m"
                  MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));

#line 437 "make.m"
                  {
#line 437 "make.m"
                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_29_29, make__V_5_5);
#line 437 "make.m"
                    return;
                  }
#line 437 "make.m"
                }
#line 437 "make.m"
          }
#line 437 "make.m"
  }
#line 437 "make.m"
}

#line 437 "make.m"
MR_bool MR_CALL 
make____Unify____target_type_0_0(
#line 437 "make.m"
  MR_Word make__HeadVar__1_1,
#line 437 "make.m"
  MR_Word make__HeadVar__2_2)
#line 437 "make.m"
{
#line 437 "make.m"
  {
#line 437 "make.m"
    MR_bool make__succeeded;
#line 437 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 437 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 437 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 437 "make.m"
    if (make__succeeded)
#line 437 "make.m"
      make__succeeded = MR_TRUE;
#line 437 "make.m"
    else
#line 437 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 437 "make.m"
        {
#line 437 "make.m"
          MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "make.m"
          MR_Word make__V_6_6;

#line 437 "make.m"
          make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 437 "make.m"
          if (make__succeeded)
#line 437 "make.m"
            {
#line 437 "make.m"
              make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4852 "make.c"
              make__succeeded = (make__V_5_5 == make__V_6_6);
#line 437 "make.m"
            }
#line 437 "make.m"
        }
#line 437 "make.m"
      else
#line 437 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 437 "make.m"
          {
#line 437 "make.m"
            MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "make.m"
            MR_Word make__V_8_8;

#line 437 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 437 "make.m"
            if (make__succeeded)
#line 437 "make.m"
              {
#line 437 "make.m"
                make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4877 "make.c"
                {
#line 4879 "make.c"
                  return make__succeeded = make____Unify____misc_target_type_0_0(make__V_7_7, make__V_8_8);
                }
#line 437 "make.m"
              }
#line 437 "make.m"
          }
#line 437 "make.m"
        else
#line 437 "make.m"
          {
#line 437 "make.m"
            MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "make.m"
            MR_Word make__V_4_4;

#line 437 "make.m"
            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 437 "make.m"
            if (make__succeeded)
#line 437 "make.m"
              {
#line 437 "make.m"
                make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 4903 "make.c"
                {
#line 4905 "make.c"
                  return make__succeeded = make____Unify____module_target_type_0_0(make__V_3_3, make__V_4_4);
                }
#line 437 "make.m"
              }
#line 437 "make.m"
          }
#line 437 "make.m"
    return make__succeeded;
#line 437 "make.m"
  }
#line 437 "make.m"
}

#line 267 "make.m"
void MR_CALL 
make____Compare____target_file_0_0(
#line 267 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 267 "make.m"
  MR_Word make__HeadVar__2_2,
#line 267 "make.m"
  MR_Word make__HeadVar__3_3)
#line 267 "make.m"
{
#line 267 "make.m"
  {
#line 267 "make.m"
    MR_bool make__succeeded;
#line 267 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 267 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 267 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 267 "make.m"
    if (make__succeeded)
#line 4943 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 267 "make.m"
    else
#line 267 "make.m"
      {
#line 267 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "make.m"
        MR_Word make__V_8_8;

#line 267 "make.m"
        {
#line 267 "make.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 4965 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 267 "make.m"
        make__succeeded = !(make__succeeded);
#line 267 "make.m"
        if (make__succeeded)
#line 267 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 267 "make.m"
        else
#line 267 "make.m"
          {
#line 267 "make.m"
            make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
#line 267 "make.m"
            return;
          }
#line 267 "make.m"
      }
#line 267 "make.m"
  }
#line 267 "make.m"
}

#line 267 "make.m"
MR_bool MR_CALL 
make____Unify____target_file_0_0(
#line 267 "make.m"
  MR_Word make__HeadVar__1_1,
#line 267 "make.m"
  MR_Word make__HeadVar__2_2)
#line 267 "make.m"
{
#line 267 "make.m"
  {
#line 267 "make.m"
    MR_bool make__succeeded;
#line 267 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 267 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 267 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 267 "make.m"
    if (make__succeeded)
#line 267 "make.m"
      make__succeeded = MR_TRUE;
#line 267 "make.m"
    else
#line 267 "make.m"
      {
#line 267 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 5026 "make.c"
        {
#line 5028 "make.c"
          make__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 267 "make.m"
        if (make__succeeded)
#line 5033 "make.c"
          {
#line 5035 "make.c"
            return make__succeeded = make____Unify____module_target_type_0_0(make__V_4_4, make__V_6_6);
          }
#line 267 "make.m"
      }
#line 267 "make.m"
    return make__succeeded;
#line 267 "make.m"
  }
#line 267 "make.m"
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
#line 5088 "make.c"
  {
#line 5090 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 5093 "make.c"
    return make__succeeded;
#line 5095 "make.c"
  }
#line 50 "make.m"
}

#line 218 "make.m"
void MR_CALL 
make____Compare____module_target_type_0_0(
#line 218 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 218 "make.m"
  MR_Word make__HeadVar__2_2,
#line 218 "make.m"
  MR_Word make__HeadVar__3_3)
#line 218 "make.m"
{
#line 218 "make.m"
  {
#line 218 "make.m"
    MR_bool make__succeeded;
#line 218 "make.m"
    MR_Integer make__CastX_23 = (MR_Integer) make__HeadVar__2_2;
#line 218 "make.m"
    MR_Integer make__CastY_24 = (MR_Integer) make__HeadVar__3_3;

#line 218 "make.m"
    make__succeeded = (make__CastX_23 == make__CastY_24);
#line 218 "make.m"
    if (make__succeeded)
#line 5124 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 218 "make.m"
    else
#line 218 "make.m"
      {
#line 218 "make.m"
        MR_Integer make__V_4_4;
#line 218 "make.m"
        MR_Integer make__V_5_5;

#line 218 "make.m"
        {
#line 218 "make.m"
          make____Index____module_target_type_0_0(make__HeadVar__2_2, &make__V_4_4);
        }
#line 218 "make.m"
        {
#line 218 "make.m"
          make____Index____module_target_type_0_0(make__HeadVar__3_3, &make__V_5_5);
        }
#line 218 "make.m"
        make__succeeded = (make__V_4_4 < make__V_5_5);
#line 218 "make.m"
        if (make__succeeded)
#line 5149 "make.c"
          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 218 "make.m"
        else
#line 218 "make.m"
          {
#line 218 "make.m"
            make__succeeded = (make__V_4_4 > make__V_5_5);
#line 218 "make.m"
            if (make__succeeded)
#line 5159 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 218 "make.m"
            else
#line 218 "make.m"
              {
#line 218 "make.m"
                MR_Word make__V_6_6;

#line 218 "make.m"
                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 218 "make.m"
                  {
#line 218 "make.m"
                    make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                    make__succeeded = MR_TRUE;
#line 218 "make.m"
                  }
#line 218 "make.m"
                else
#line 218 "make.m"
                  if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 218 "make.m"
                    {
#line 218 "make.m"
                      make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                      make__succeeded = MR_TRUE;
#line 218 "make.m"
                    }
#line 218 "make.m"
                  else
#line 218 "make.m"
                    if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 218 "make.m"
                      {
#line 218 "make.m"
                        make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                        make__succeeded = MR_TRUE;
#line 218 "make.m"
                      }
#line 218 "make.m"
                    else
#line 218 "make.m"
                      if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 218 "make.m"
                        {
#line 218 "make.m"
                          make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                          make__succeeded = MR_TRUE;
#line 218 "make.m"
                        }
#line 218 "make.m"
                      else
#line 218 "make.m"
                        if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 218 "make.m"
                          {
#line 218 "make.m"
                            make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                            make__succeeded = MR_TRUE;
#line 218 "make.m"
                          }
#line 218 "make.m"
                        else
#line 218 "make.m"
                          if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 218 "make.m"
                            {
#line 218 "make.m"
                              make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                              make__succeeded = MR_TRUE;
#line 218 "make.m"
                            }
#line 218 "make.m"
                          else
#line 218 "make.m"
                            if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 218 "make.m"
                              {
#line 218 "make.m"
                                make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                make__succeeded = MR_TRUE;
#line 218 "make.m"
                              }
#line 218 "make.m"
                            else
#line 218 "make.m"
                              if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 218 "make.m"
                                {
#line 218 "make.m"
                                  make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                  make__succeeded = MR_TRUE;
#line 218 "make.m"
                                }
#line 218 "make.m"
                              else
#line 218 "make.m"
                                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 218 "make.m"
                                  {
#line 218 "make.m"
                                    make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                    make__succeeded = MR_TRUE;
#line 218 "make.m"
                                  }
#line 218 "make.m"
                                else
#line 218 "make.m"
                                  if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 218 "make.m"
                                    {
#line 218 "make.m"
                                      make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                      make__succeeded = MR_TRUE;
#line 218 "make.m"
                                    }
#line 218 "make.m"
                                  else
#line 218 "make.m"
                                    if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 218 "make.m"
                                      {
#line 218 "make.m"
                                        make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                        make__succeeded = MR_TRUE;
#line 218 "make.m"
                                      }
#line 218 "make.m"
                                    else
#line 218 "make.m"
                                      if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 218 "make.m"
                                        {
#line 218 "make.m"
                                          make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                          make__succeeded = MR_TRUE;
#line 218 "make.m"
                                        }
#line 218 "make.m"
                                      else
#line 218 "make.m"
                                        if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 218 "make.m"
                                          {
#line 218 "make.m"
                                            make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                            make__succeeded = MR_TRUE;
#line 218 "make.m"
                                          }
#line 218 "make.m"
                                        else
#line 218 "make.m"
                                          if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 218 "make.m"
                                            {
#line 218 "make.m"
                                              make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                              make__succeeded = MR_TRUE;
#line 218 "make.m"
                                            }
#line 218 "make.m"
                                          else
#line 218 "make.m"
                                            if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 218 "make.m"
                                              {
#line 218 "make.m"
                                                make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                                make__succeeded = MR_TRUE;
#line 218 "make.m"
                                              }
#line 218 "make.m"
                                            else
#line 218 "make.m"
                                              if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "make.m"
                                                {
#line 218 "make.m"
                                                  make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                                  make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                }
#line 218 "make.m"
                                              else
#line 218 "make.m"
                                                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 218 "make.m"
                                                  {
#line 218 "make.m"
                                                    make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                                    make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                  }
#line 218 "make.m"
                                                else
#line 218 "make.m"
                                                  if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 218 "make.m"
                                                    {
#line 218 "make.m"
                                                      make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                                      make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                    }
#line 218 "make.m"
                                                  else
#line 218 "make.m"
                                                    if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 218 "make.m"
                                                      {
#line 218 "make.m"
                                                        make__V_6_6 = (MR_Integer) 0;
#line 218 "make.m"
                                                        make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                      }
#line 218 "make.m"
                                                    else
#line 218 "make.m"
                                                      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 218 "make.m"
                                                        {
#line 218 "make.m"
                                                          MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "make.m"
                                                          MR_Word make__V_8_8;
#line 218 "make.m"
                                                          MR_Integer make__V_32_32;
#line 218 "make.m"
                                                          MR_Integer make__V_33_33;

#line 218 "make.m"
                                                          make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 218 "make.m"
                                                          if (make__succeeded)
#line 218 "make.m"
                                                            {
#line 218 "make.m"
                                                              make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "make.m"
                                                              make__V_32_32 = (MR_Integer) make__V_7_7;
#line 218 "make.m"
                                                              make__V_33_33 = (MR_Integer) make__V_8_8;
#line 218 "make.m"
                                                              {
#line 218 "make.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_32_32, make__V_33_33);
                                                              }
#line 218 "make.m"
                                                              make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                            }
#line 218 "make.m"
                                                        }
#line 218 "make.m"
                                                      else
#line 218 "make.m"
                                                        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 218 "make.m"
                                                          {
#line 218 "make.m"
                                                            MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "make.m"
                                                            MR_Word make__V_10_10;
#line 218 "make.m"
                                                            MR_Integer make__V_42_42;
#line 218 "make.m"
                                                            MR_Integer make__V_43_43;

#line 218 "make.m"
                                                            make__succeeded = ((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 218 "make.m"
                                                            if (make__succeeded)
#line 218 "make.m"
                                                              {
#line 218 "make.m"
                                                                make__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "make.m"
                                                                make__V_42_42 = (MR_Integer) make__V_9_9;
#line 218 "make.m"
                                                                make__V_43_43 = (MR_Integer) make__V_10_10;
#line 218 "make.m"
                                                                {
#line 218 "make.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_42_42, make__V_43_43);
                                                                }
#line 218 "make.m"
                                                                make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                              }
#line 218 "make.m"
                                                          }
#line 218 "make.m"
                                                        else
#line 218 "make.m"
                                                          if (((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 218 "make.m"
                                                            {
#line 218 "make.m"
                                                              MR_Word make__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "make.m"
                                                              MR_String make__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 218 "make.m"
                                                              MR_Word make__V_20_20;
#line 218 "make.m"
                                                              MR_String make__V_21_21;
#line 218 "make.m"
                                                              MR_Word make__V_22_22;
#line 218 "make.m"
                                                              MR_Integer make__V_34_34;
#line 218 "make.m"
                                                              MR_Integer make__V_35_35;

#line 218 "make.m"
                                                              make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 218 "make.m"
                                                              if (make__succeeded)
#line 218 "make.m"
                                                                {
#line 218 "make.m"
                                                                  make__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "make.m"
                                                                  make__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 218 "make.m"
                                                                  make__V_34_34 = (MR_Integer) make__V_18_18;
#line 218 "make.m"
                                                                  make__V_35_35 = (MR_Integer) make__V_20_20;
#line 218 "make.m"
                                                                  {
#line 218 "make.m"
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_22_22, make__V_34_34, make__V_35_35);
                                                                  }
#line 5510 "make.c"
                                                                  make__succeeded = (make__V_22_22 == (MR_Integer) 0);
#line 218 "make.m"
                                                                  make__succeeded = !(make__succeeded);
#line 218 "make.m"
                                                                  if (make__succeeded)
#line 218 "make.m"
                                                                    make__V_6_6 = make__V_22_22;
#line 218 "make.m"
                                                                  else
#line 218 "make.m"
                                                                    {
#line 218 "make.m"
                                                                      mercury__private_builtin__builtin_compare_string_3_p_0(&make__V_6_6, make__V_19_19, make__V_21_21);
                                                                    }
#line 218 "make.m"
                                                                  make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                                }
#line 218 "make.m"
                                                            }
#line 218 "make.m"
                                                          else
#line 218 "make.m"
                                                            if (((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 218 "make.m"
                                                              {
#line 218 "make.m"
                                                                MR_Word make__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "make.m"
                                                                MR_Word make__V_12_12;
#line 218 "make.m"
                                                                MR_Integer make__V_36_36;
#line 218 "make.m"
                                                                MR_Integer make__V_37_37;

#line 218 "make.m"
                                                                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 218 "make.m"
                                                                if (make__succeeded)
#line 218 "make.m"
                                                                  {
#line 218 "make.m"
                                                                    make__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "make.m"
                                                                    make__V_36_36 = (MR_Integer) make__V_11_11;
#line 218 "make.m"
                                                                    make__V_37_37 = (MR_Integer) make__V_12_12;
#line 218 "make.m"
                                                                    {
#line 218 "make.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_36_36, make__V_37_37);
                                                                    }
#line 218 "make.m"
                                                                    make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                                  }
#line 218 "make.m"
                                                              }
#line 218 "make.m"
                                                            else
#line 218 "make.m"
                                                              {
#line 218 "make.m"
                                                                MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "make.m"
                                                                MR_Word make__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 218 "make.m"
                                                                MR_Word make__V_15_15;
#line 218 "make.m"
                                                                MR_Word make__V_16_16;
#line 218 "make.m"
                                                                MR_Word make__V_17_17;
#line 218 "make.m"
                                                                MR_Integer make__V_38_38;
#line 218 "make.m"
                                                                MR_Integer make__V_39_39;

#line 218 "make.m"
                                                                make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 218 "make.m"
                                                                if (make__succeeded)
#line 218 "make.m"
                                                                  {
#line 218 "make.m"
                                                                    make__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "make.m"
                                                                    make__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__3_3, (MR_Integer) 2)));
#line 218 "make.m"
                                                                    make__V_38_38 = (MR_Integer) make__V_13_13;
#line 218 "make.m"
                                                                    make__V_39_39 = (MR_Integer) make__V_15_15;
#line 218 "make.m"
                                                                    {
#line 218 "make.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_17_17, make__V_38_38, make__V_39_39);
                                                                    }
#line 5607 "make.c"
                                                                    make__succeeded = (make__V_17_17 == (MR_Integer) 0);
#line 218 "make.m"
                                                                    make__succeeded = !(make__succeeded);
#line 218 "make.m"
                                                                    if (make__succeeded)
#line 218 "make.m"
                                                                      make__V_6_6 = make__V_17_17;
#line 218 "make.m"
                                                                    else
#line 218 "make.m"
                                                                      {
#line 218 "make.m"
                                                                        MR_Integer make__V_40_40 = (MR_Integer) make__V_14_14;
#line 218 "make.m"
                                                                        MR_Integer make__V_41_41 = (MR_Integer) make__V_16_16;

#line 218 "make.m"
                                                                        {
#line 218 "make.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&make__V_6_6, make__V_40_40, make__V_41_41);
                                                                        }
#line 218 "make.m"
                                                                      }
#line 218 "make.m"
                                                                    make__succeeded = MR_TRUE;
#line 218 "make.m"
                                                                  }
#line 218 "make.m"
                                                              }
#line 218 "make.m"
                if (make__succeeded)
#line 218 "make.m"
                  *make__HeadVar__1_1 = make__V_6_6;
#line 218 "make.m"
                else
#line 218 "make.m"
                  {
#line 218 "make.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 218 "make.m"
                    return;
                  }
#line 218 "make.m"
              }
#line 218 "make.m"
          }
#line 218 "make.m"
      }
#line 218 "make.m"
  }
#line 218 "make.m"
}

#line 218 "make.m"
void MR_CALL 
make____Index____module_target_type_0_0(
#line 218 "make.m"
  MR_Word make__HeadVar__1_1,
#line 218 "make.m"
  MR_Integer * make__HeadVar__2_2)
#line 218 "make.m"
{
#line 218 "make.m"
  {
#line 218 "make.m"
    MR_bool make__succeeded;

#line 218 "make.m"
    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 5677 "make.c"
      *make__HeadVar__2_2 = (MR_Integer) 7;
#line 218 "make.m"
    else
#line 218 "make.m"
      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 5683 "make.c"
        *make__HeadVar__2_2 = (MR_Integer) 10;
#line 218 "make.m"
      else
#line 218 "make.m"
        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 5689 "make.c"
          *make__HeadVar__2_2 = (MR_Integer) 13;
#line 218 "make.m"
        else
#line 218 "make.m"
          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 5695 "make.c"
            *make__HeadVar__2_2 = (MR_Integer) 18;
#line 218 "make.m"
          else
#line 218 "make.m"
            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 5701 "make.c"
              *make__HeadVar__2_2 = (MR_Integer) 17;
#line 218 "make.m"
            else
#line 218 "make.m"
              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 5707 "make.c"
                *make__HeadVar__2_2 = (MR_Integer) 16;
#line 218 "make.m"
              else
#line 218 "make.m"
                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5713 "make.c"
                  *make__HeadVar__2_2 = (MR_Integer) 1;
#line 218 "make.m"
                else
#line 218 "make.m"
                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 5719 "make.c"
                    *make__HeadVar__2_2 = (MR_Integer) 12;
#line 218 "make.m"
                  else
#line 218 "make.m"
                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 5725 "make.c"
                      *make__HeadVar__2_2 = (MR_Integer) 11;
#line 218 "make.m"
                    else
#line 218 "make.m"
                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 5731 "make.c"
                        *make__HeadVar__2_2 = (MR_Integer) 6;
#line 218 "make.m"
                      else
#line 218 "make.m"
                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 5737 "make.c"
                          *make__HeadVar__2_2 = (MR_Integer) 15;
#line 218 "make.m"
                        else
#line 218 "make.m"
                          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 5743 "make.c"
                            *make__HeadVar__2_2 = (MR_Integer) 14;
#line 218 "make.m"
                          else
#line 218 "make.m"
                            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5749 "make.c"
                              *make__HeadVar__2_2 = (MR_Integer) 3;
#line 218 "make.m"
                            else
#line 218 "make.m"
                              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5755 "make.c"
                                *make__HeadVar__2_2 = (MR_Integer) 2;
#line 218 "make.m"
                              else
#line 218 "make.m"
                                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5761 "make.c"
                                  *make__HeadVar__2_2 = (MR_Integer) 4;
#line 218 "make.m"
                                else
#line 218 "make.m"
                                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5767 "make.c"
                                    *make__HeadVar__2_2 = (MR_Integer) 0;
#line 218 "make.m"
                                  else
#line 218 "make.m"
                                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 5773 "make.c"
                                      *make__HeadVar__2_2 = (MR_Integer) 8;
#line 218 "make.m"
                                    else
#line 218 "make.m"
                                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 5779 "make.c"
                                        *make__HeadVar__2_2 = (MR_Integer) 5;
#line 218 "make.m"
                                      else
#line 218 "make.m"
                                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 5785 "make.c"
                                          *make__HeadVar__2_2 = (MR_Integer) 23;
#line 218 "make.m"
                                        else
#line 218 "make.m"
                                          if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 5791 "make.c"
                                            *make__HeadVar__2_2 = (MR_Integer) 9;
#line 218 "make.m"
                                          else
#line 218 "make.m"
                                            if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 5797 "make.c"
                                              *make__HeadVar__2_2 = (MR_Integer) 19;
#line 218 "make.m"
                                            else
#line 218 "make.m"
                                              if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5803 "make.c"
                                                *make__HeadVar__2_2 = (MR_Integer) 22;
#line 218 "make.m"
                                              else
#line 218 "make.m"
                                                if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5809 "make.c"
                                                  *make__HeadVar__2_2 = (MR_Integer) 20;
#line 218 "make.m"
                                                else
#line 5813 "make.c"
                                                  *make__HeadVar__2_2 = (MR_Integer) 21;
#line 218 "make.m"
  }
#line 218 "make.m"
}

#line 218 "make.m"
MR_bool MR_CALL 
make____Unify____module_target_type_0_0(
#line 218 "make.m"
  MR_Word make__HeadVar__1_1,
#line 218 "make.m"
  MR_Word make__HeadVar__2_2)
#line 218 "make.m"
{
#line 218 "make.m"
  {
#line 218 "make.m"
    MR_bool make__succeeded;
#line 218 "make.m"
    MR_Integer make__CastX_55 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
    MR_Integer make__CastY_56 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
    make__succeeded = (make__CastX_55 == make__CastY_56);
#line 218 "make.m"
    if (make__succeeded)
#line 218 "make.m"
      make__succeeded = MR_TRUE;
#line 218 "make.m"
    else
#line 218 "make.m"
      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 218 "make.m"
        {
#line 218 "make.m"
          MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
          MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
          make__succeeded = (make__CastY_18 == make__CastX_17);
#line 218 "make.m"
        }
#line 218 "make.m"
      else
#line 218 "make.m"
        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 218 "make.m"
          {
#line 218 "make.m"
            MR_Integer make__CastX_23 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
            MR_Integer make__CastY_24 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
            make__succeeded = (make__CastY_24 == make__CastX_23);
#line 218 "make.m"
          }
#line 218 "make.m"
        else
#line 218 "make.m"
          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 218 "make.m"
            {
#line 218 "make.m"
              MR_Integer make__CastX_29 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
              MR_Integer make__CastY_30 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
              make__succeeded = (make__CastY_30 == make__CastX_29);
#line 218 "make.m"
            }
#line 218 "make.m"
          else
#line 218 "make.m"
            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 218 "make.m"
              {
#line 218 "make.m"
                MR_Integer make__CastX_39 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                MR_Integer make__CastY_40 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                make__succeeded = (make__CastY_40 == make__CastX_39);
#line 218 "make.m"
              }
#line 218 "make.m"
            else
#line 218 "make.m"
              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 218 "make.m"
                {
#line 218 "make.m"
                  MR_Integer make__CastX_37 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                  MR_Integer make__CastY_38 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                  make__succeeded = (make__CastY_38 == make__CastX_37);
#line 218 "make.m"
                }
#line 218 "make.m"
              else
#line 218 "make.m"
                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 218 "make.m"
                  {
#line 218 "make.m"
                    MR_Integer make__CastX_35 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                    MR_Integer make__CastY_36 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                    make__succeeded = (make__CastY_36 == make__CastX_35);
#line 218 "make.m"
                  }
#line 218 "make.m"
                else
#line 218 "make.m"
                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 218 "make.m"
                    {
#line 218 "make.m"
                      MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                      MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                      make__succeeded = (make__CastY_6 == make__CastX_5);
#line 218 "make.m"
                    }
#line 218 "make.m"
                  else
#line 218 "make.m"
                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 218 "make.m"
                      {
#line 218 "make.m"
                        MR_Integer make__CastX_27 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                        MR_Integer make__CastY_28 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                        make__succeeded = (make__CastY_28 == make__CastX_27);
#line 218 "make.m"
                      }
#line 218 "make.m"
                    else
#line 218 "make.m"
                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 218 "make.m"
                        {
#line 218 "make.m"
                          MR_Integer make__CastX_25 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                          MR_Integer make__CastY_26 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                          make__succeeded = (make__CastY_26 == make__CastX_25);
#line 218 "make.m"
                        }
#line 218 "make.m"
                      else
#line 218 "make.m"
                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 218 "make.m"
                          {
#line 218 "make.m"
                            MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                            MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                            make__succeeded = (make__CastY_16 == make__CastX_15);
#line 218 "make.m"
                          }
#line 218 "make.m"
                        else
#line 218 "make.m"
                          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 218 "make.m"
                            {
#line 218 "make.m"
                              MR_Integer make__CastX_33 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                              MR_Integer make__CastY_34 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                              make__succeeded = (make__CastY_34 == make__CastX_33);
#line 218 "make.m"
                            }
#line 218 "make.m"
                          else
#line 218 "make.m"
                            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 218 "make.m"
                              {
#line 218 "make.m"
                                MR_Integer make__CastX_31 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                MR_Integer make__CastY_32 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                make__succeeded = (make__CastY_32 == make__CastX_31);
#line 218 "make.m"
                              }
#line 218 "make.m"
                            else
#line 218 "make.m"
                              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 218 "make.m"
                                {
#line 218 "make.m"
                                  MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                  MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                  make__succeeded = (make__CastY_10 == make__CastX_9);
#line 218 "make.m"
                                }
#line 218 "make.m"
                              else
#line 218 "make.m"
                                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 218 "make.m"
                                  {
#line 218 "make.m"
                                    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                    make__succeeded = (make__CastY_8 == make__CastX_7);
#line 218 "make.m"
                                  }
#line 218 "make.m"
                                else
#line 218 "make.m"
                                  if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 218 "make.m"
                                    {
#line 218 "make.m"
                                      MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                      MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                      make__succeeded = (make__CastY_12 == make__CastX_11);
#line 218 "make.m"
                                    }
#line 218 "make.m"
                                  else
#line 218 "make.m"
                                    if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "make.m"
                                      {
#line 218 "make.m"
                                        MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                        MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                        make__succeeded = (make__CastY_4 == make__CastX_3);
#line 218 "make.m"
                                      }
#line 218 "make.m"
                                    else
#line 218 "make.m"
                                      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 218 "make.m"
                                        {
#line 218 "make.m"
                                          MR_Integer make__CastX_19 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                          MR_Integer make__CastY_20 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                          make__succeeded = (make__CastY_20 == make__CastX_19);
#line 218 "make.m"
                                        }
#line 218 "make.m"
                                      else
#line 218 "make.m"
                                        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 218 "make.m"
                                          {
#line 218 "make.m"
                                            MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                            MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                            make__succeeded = (make__CastY_14 == make__CastX_13);
#line 218 "make.m"
                                          }
#line 218 "make.m"
                                        else
#line 218 "make.m"
                                          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 218 "make.m"
                                            {
#line 218 "make.m"
                                              MR_Integer make__CastX_53 = (MR_Integer) make__HeadVar__1_1;
#line 218 "make.m"
                                              MR_Integer make__CastY_54 = (MR_Integer) make__HeadVar__2_2;

#line 218 "make.m"
                                              make__succeeded = (make__CastY_54 == make__CastX_53);
#line 218 "make.m"
                                            }
#line 218 "make.m"
                                          else
#line 218 "make.m"
                                            if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 218 "make.m"
                                              {
#line 218 "make.m"
                                                MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "make.m"
                                                MR_Word make__V_22_22;

#line 218 "make.m"
                                                make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 218 "make.m"
                                                if (make__succeeded)
#line 218 "make.m"
                                                  {
#line 218 "make.m"
                                                    make__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6148 "make.c"
                                                    make__succeeded = (make__V_21_21 == make__V_22_22);
#line 218 "make.m"
                                                  }
#line 218 "make.m"
                                              }
#line 218 "make.m"
                                            else
#line 218 "make.m"
                                              if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 218 "make.m"
                                                {
#line 218 "make.m"
                                                  MR_Word make__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "make.m"
                                                  MR_Word make__V_42_42;

#line 218 "make.m"
                                                  make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 218 "make.m"
                                                  if (make__succeeded)
#line 218 "make.m"
                                                    {
#line 218 "make.m"
                                                      make__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6173 "make.c"
                                                      make__succeeded = (make__V_41_41 == make__V_42_42);
#line 218 "make.m"
                                                    }
#line 218 "make.m"
                                                }
#line 218 "make.m"
                                              else
#line 218 "make.m"
                                                if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 218 "make.m"
                                                  {
#line 218 "make.m"
                                                    MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "make.m"
                                                    MR_String make__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 218 "make.m"
                                                    MR_Word make__V_51_51;
#line 218 "make.m"
                                                    MR_String make__V_52_52;

#line 218 "make.m"
                                                    make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 218 "make.m"
                                                    if (make__succeeded)
#line 218 "make.m"
                                                      {
#line 218 "make.m"
                                                        make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "make.m"
                                                        make__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6204 "make.c"
                                                        make__succeeded = (make__V_49_49 == make__V_51_51);
#line 218 "make.m"
                                                        if (make__succeeded)
#line 6208 "make.c"
                                                          make__succeeded = (strcmp(make__V_50_50, make__V_52_52) == 0);
#line 218 "make.m"
                                                      }
#line 218 "make.m"
                                                  }
#line 218 "make.m"
                                                else
#line 218 "make.m"
                                                  if (((((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 218 "make.m"
                                                    {
#line 218 "make.m"
                                                      MR_Word make__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "make.m"
                                                      MR_Word make__V_44_44;

#line 218 "make.m"
                                                      make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 218 "make.m"
                                                      if (make__succeeded)
#line 218 "make.m"
                                                        {
#line 218 "make.m"
                                                          make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 6233 "make.c"
                                                          make__succeeded = (make__V_43_43 == make__V_44_44);
#line 218 "make.m"
                                                        }
#line 218 "make.m"
                                                    }
#line 218 "make.m"
                                                  else
#line 218 "make.m"
                                                    {
#line 218 "make.m"
                                                      MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "make.m"
                                                      MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__1_1, (MR_Integer) 2)));
#line 218 "make.m"
                                                      MR_Word make__V_47_47;
#line 218 "make.m"
                                                      MR_Word make__V_48_48;

#line 218 "make.m"
                                                      make__succeeded = ((((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 218 "make.m"
                                                      if (make__succeeded)
#line 218 "make.m"
                                                        {
#line 218 "make.m"
                                                          make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "make.m"
                                                          make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 2)));
#line 6262 "make.c"
                                                          make__succeeded = (make__V_45_45 == make__V_47_47);
#line 218 "make.m"
                                                          if (make__succeeded)
#line 6266 "make.c"
                                                            make__succeeded = (make__V_46_46 == make__V_48_48);
#line 218 "make.m"
                                                        }
#line 218 "make.m"
                                                    }
#line 218 "make.m"
    return make__succeeded;
#line 218 "make.m"
  }
#line 218 "make.m"
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
#line 6303 "make.c"
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
#line 6329 "make.c"
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
#line 6349 "make.c"
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

#line 6418 "make.c"
        {
#line 6420 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[9], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 178 "make.m"
        if (make__succeeded)
#line 178 "make.m"
          {
#line 6427 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 6429 "make.c"
            {
#line 6431 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 178 "make.m"
            if (make__succeeded)
#line 6436 "make.c"
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

#line 208 "make.m"
void MR_CALL 
make____Compare____module_compilation_task_type_0_0(
#line 208 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 208 "make.m"
  MR_Word make__HeadVar__2_2,
#line 208 "make.m"
  MR_Word make__HeadVar__3_3)
#line 208 "make.m"
{
#line 208 "make.m"
  {
#line 208 "make.m"
    MR_bool make__succeeded;
#line 208 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 208 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 208 "make.m"
    {
#line 208 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 208 "make.m"
      return;
    }
#line 208 "make.m"
  }
#line 208 "make.m"
}

#line 208 "make.m"
MR_bool MR_CALL 
make____Unify____module_compilation_task_type_0_0(
#line 208 "make.m"
  MR_Word make__HeadVar__2_1,
#line 208 "make.m"
  MR_Word make__HeadVar__2_2)
#line 208 "make.m"
{
#line 6490 "make.c"
  {
#line 6492 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 6495 "make.c"
    return make__succeeded;
#line 6497 "make.c"
  }
#line 208 "make.m"
}

#line 250 "make.m"
void MR_CALL 
make____Compare____misc_target_type_0_0(
#line 250 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 250 "make.m"
  MR_Word make__HeadVar__2_2,
#line 250 "make.m"
  MR_Word make__HeadVar__3_3)
#line 250 "make.m"
{
#line 250 "make.m"
  {
#line 250 "make.m"
    MR_bool make__succeeded;
#line 250 "make.m"
    MR_Integer make__CastX_18 = (MR_Integer) make__HeadVar__2_2;
#line 250 "make.m"
    MR_Integer make__CastY_19 = (MR_Integer) make__HeadVar__3_3;

#line 250 "make.m"
    make__succeeded = (make__CastX_18 == make__CastY_19);
#line 250 "make.m"
    if (make__succeeded)
#line 6526 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "make.m"
    else
#line 250 "make.m"
      if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
          *make__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "make.m"
        else
#line 250 "make.m"
          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
            *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
          else
#line 250 "make.m"
            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
            else
#line 250 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
              else
#line 250 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                else
#line 250 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                  else
#line 6568 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
      else
#line 250 "make.m"
        if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
          else
#line 250 "make.m"
            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
              *make__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "make.m"
            else
#line 250 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
              else
#line 250 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                else
#line 250 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                  else
#line 250 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                    else
#line 6610 "make.c"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
        else
#line 250 "make.m"
          if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
            else
#line 250 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
              else
#line 250 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "make.m"
                else
#line 250 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                  else
#line 250 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                    else
#line 250 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                      else
#line 6652 "make.c"
                        *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
          else
#line 250 "make.m"
            if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
              else
#line 250 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                else
#line 250 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                  else
#line 250 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "make.m"
                    else
#line 250 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                      else
#line 250 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                        else
#line 6694 "make.c"
                          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
            else
#line 250 "make.m"
              if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                else
#line 250 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                  else
#line 250 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                    else
#line 250 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                      else
#line 250 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                          *make__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "make.m"
                        else
#line 250 "make.m"
                          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                          else
#line 6736 "make.c"
                            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
              else
#line 250 "make.m"
                if ((make__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                  if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                  else
#line 250 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                    else
#line 250 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
                        *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                      else
#line 250 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
                          *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                        else
#line 250 "make.m"
                          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                            *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                          else
#line 250 "make.m"
                            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                              *make__HeadVar__1_1 = (MR_Integer) 0;
#line 250 "make.m"
                            else
#line 6778 "make.c"
                              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                else
#line 250 "make.m"
                  {
#line 250 "make.m"
                    MR_Word make__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 250 "make.m"
                    if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6789 "make.c"
                      *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                    else
#line 250 "make.m"
                      if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 6795 "make.c"
                        *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                      else
#line 250 "make.m"
                        if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 6801 "make.c"
                          *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                        else
#line 250 "make.m"
                          if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6807 "make.c"
                            *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                          else
#line 250 "make.m"
                            if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 6813 "make.c"
                              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 250 "make.m"
                            else
#line 250 "make.m"
                              if ((make__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6819 "make.c"
                                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 250 "make.m"
                              else
#line 250 "make.m"
                                {
#line 250 "make.m"
                                  MR_Word make__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

#line 250 "make.m"
                                  {
#line 250 "make.m"
                                    make____Compare____module_target_type_0_0(make__HeadVar__1_1, make__V_21_21, make__V_9_9);
#line 250 "make.m"
                                    return;
                                  }
#line 250 "make.m"
                                }
#line 250 "make.m"
                  }
#line 250 "make.m"
  }
#line 250 "make.m"
}

#line 250 "make.m"
MR_bool MR_CALL 
make____Unify____misc_target_type_0_0(
#line 250 "make.m"
  MR_Word make__HeadVar__1_1,
#line 250 "make.m"
  MR_Word make__HeadVar__2_2)
#line 250 "make.m"
{
#line 250 "make.m"
  {
#line 250 "make.m"
    MR_bool make__succeeded;
#line 250 "make.m"
    MR_Integer make__CastX_17 = (MR_Integer) make__HeadVar__1_1;
#line 250 "make.m"
    MR_Integer make__CastY_18 = (MR_Integer) make__HeadVar__2_2;

#line 250 "make.m"
    make__succeeded = (make__CastX_17 == make__CastY_18);
#line 250 "make.m"
    if (make__succeeded)
#line 250 "make.m"
      make__succeeded = MR_TRUE;
#line 250 "make.m"
    else
#line 250 "make.m"
      if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 250 "make.m"
        {
#line 250 "make.m"
          MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__1_1;
#line 250 "make.m"
          MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__2_2;

#line 250 "make.m"
          make__succeeded = (make__CastY_10 == make__CastX_9);
#line 250 "make.m"
        }
#line 250 "make.m"
      else
#line 250 "make.m"
        if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 250 "make.m"
          {
#line 250 "make.m"
            MR_Integer make__CastX_11 = (MR_Integer) make__HeadVar__1_1;
#line 250 "make.m"
            MR_Integer make__CastY_12 = (MR_Integer) make__HeadVar__2_2;

#line 250 "make.m"
            make__succeeded = (make__CastY_12 == make__CastX_11);
#line 250 "make.m"
          }
#line 250 "make.m"
        else
#line 250 "make.m"
          if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "make.m"
            {
#line 250 "make.m"
              MR_Integer make__CastX_15 = (MR_Integer) make__HeadVar__1_1;
#line 250 "make.m"
              MR_Integer make__CastY_16 = (MR_Integer) make__HeadVar__2_2;

#line 250 "make.m"
              make__succeeded = (make__CastY_16 == make__CastX_15);
#line 250 "make.m"
            }
#line 250 "make.m"
          else
#line 250 "make.m"
            if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "make.m"
              {
#line 250 "make.m"
                MR_Integer make__CastX_3 = (MR_Integer) make__HeadVar__1_1;
#line 250 "make.m"
                MR_Integer make__CastY_4 = (MR_Integer) make__HeadVar__2_2;

#line 250 "make.m"
                make__succeeded = (make__CastY_4 == make__CastX_3);
#line 250 "make.m"
              }
#line 250 "make.m"
            else
#line 250 "make.m"
              if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 250 "make.m"
                {
#line 250 "make.m"
                  MR_Integer make__CastX_13 = (MR_Integer) make__HeadVar__1_1;
#line 250 "make.m"
                  MR_Integer make__CastY_14 = (MR_Integer) make__HeadVar__2_2;

#line 250 "make.m"
                  make__succeeded = (make__CastY_14 == make__CastX_13);
#line 250 "make.m"
                }
#line 250 "make.m"
              else
#line 250 "make.m"
                if ((make__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 250 "make.m"
                  {
#line 250 "make.m"
                    MR_Integer make__CastX_5 = (MR_Integer) make__HeadVar__1_1;
#line 250 "make.m"
                    MR_Integer make__CastY_6 = (MR_Integer) make__HeadVar__2_2;

#line 250 "make.m"
                    make__succeeded = (make__CastY_6 == make__CastX_5);
#line 250 "make.m"
                  }
#line 250 "make.m"
                else
#line 250 "make.m"
                  {
#line 250 "make.m"
                    MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "make.m"
                    MR_Word make__V_8_8;

#line 250 "make.m"
                    make__succeeded = ((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 250 "make.m"
                    if (make__succeeded)
#line 250 "make.m"
                      {
#line 250 "make.m"
                        make__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));
#line 6975 "make.c"
                        {
#line 6977 "make.c"
                          return make__succeeded = make____Unify____module_target_type_0_0(make__V_7_7, make__V_8_8);
                        }
#line 250 "make.m"
                      }
#line 250 "make.m"
                  }
#line 250 "make.m"
    return make__succeeded;
#line 250 "make.m"
  }
#line 250 "make.m"
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
#line 7015 "make.c"
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
#line 7109 "make.c"
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
#line 7129 "make.c"
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
#line 7149 "make.c"
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
#line 7169 "make.c"
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
#line 7189 "make.c"
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
#line 7209 "make.c"
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
#line 7229 "make.c"
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
#line 7249 "make.c"
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
#line 7269 "make.c"
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
#line 7289 "make.c"
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
#line 7309 "make.c"
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
#line 7329 "make.c"
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
#line 7349 "make.c"
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
#line 7373 "make.c"
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
#line 7397 "make.c"
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
#line 7417 "make.c"
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
#line 7437 "make.c"
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
#line 7457 "make.c"
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
#line 7477 "make.c"
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

#line 7678 "make.c"
        {
#line 7680 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[6], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_23_23)));
        }
#line 100 "make.m"
        if (make__succeeded)
#line 100 "make.m"
          {
#line 7687 "make.c"
            make__TypeInfo_46_46 = (MR_Word) &make_scalar_common_1[5];
#line 7689 "make.c"
            {
#line 7691 "make.c"
              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_46_46, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_24_24)));
            }
#line 100 "make.m"
            if (make__succeeded)
#line 100 "make.m"
              {
#line 7698 "make.c"
                make__TypeInfo_47_47 = (MR_Word) &make_scalar_common_1[7];
#line 7700 "make.c"
                {
#line 7702 "make.c"
                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_47_47, ((MR_Box) (make__V_5_5)), ((MR_Box) (make__V_25_25)));
                }
#line 100 "make.m"
                if (make__succeeded)
#line 100 "make.m"
                  {
#line 7709 "make.c"
                    make__TypeInfo_48_48 = (MR_Word) &make_scalar_common_2[3];
#line 7711 "make.c"
                    {
#line 7713 "make.c"
                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_48_48, ((MR_Box) (make__V_6_6)), ((MR_Box) (make__V_26_26)));
                    }
#line 100 "make.m"
                    if (make__succeeded)
#line 100 "make.m"
                      {
#line 7720 "make.c"
                        make__TypeInfo_49_49 = (MR_Word) &make_scalar_common_2[3];
#line 7722 "make.c"
                        {
#line 7724 "make.c"
                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_49_49, ((MR_Box) (make__V_7_7)), ((MR_Box) (make__V_27_27)));
                        }
#line 100 "make.m"
                        if (make__succeeded)
#line 100 "make.m"
                          {
#line 7731 "make.c"
                            make__TypeCtorInfo_50_50 = (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variables_0;
#line 7733 "make.c"
                            {
#line 7735 "make.c"
                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_50_50, ((MR_Box) (make__V_8_8)), ((MR_Box) (make__V_28_28)));
                            }
#line 100 "make.m"
                            if (make__succeeded)
#line 100 "make.m"
                              {
#line 7742 "make.c"
                                {
#line 7744 "make.c"
                                  make__succeeded = make____Unify____module_index_map_0_0(make__V_9_9, make__V_29_29);
                                }
#line 100 "make.m"
                                if (make__succeeded)
#line 100 "make.m"
                                  {
#line 7751 "make.c"
                                    {
#line 7753 "make.c"
                                      make__succeeded = make____Unify____dependency_file_index_map_0_0(make__V_10_10, make__V_30_30);
                                    }
#line 100 "make.m"
                                    if (make__succeeded)
#line 100 "make.m"
                                      {
#line 7760 "make.c"
                                        make__TypeInfo_51_51 = (MR_Word) &make_scalar_common_1[8];
#line 7762 "make.c"
                                        {
#line 7764 "make.c"
                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_51_51, ((MR_Box) (make__V_11_11)), ((MR_Box) (make__V_31_31)));
                                        }
#line 100 "make.m"
                                        if (make__succeeded)
#line 100 "make.m"
                                          {
#line 7771 "make.c"
                                            make__TypeCtorInfo_52_52 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0;
#line 7773 "make.c"
                                            {
#line 7775 "make.c"
                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_52_52, ((MR_Box) (make__V_12_12)), ((MR_Box) (make__V_32_32)));
                                            }
#line 100 "make.m"
                                            if (make__succeeded)
#line 100 "make.m"
                                              {
#line 7782 "make.c"
                                                make__TypeCtorInfo_53_53 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0;
#line 7784 "make.c"
                                                {
#line 7786 "make.c"
                                                  make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_53_53, ((MR_Box) (make__V_13_13)), ((MR_Box) (make__V_33_33)));
                                                }
#line 100 "make.m"
                                                if (make__succeeded)
#line 100 "make.m"
                                                  {
#line 7793 "make.c"
                                                    make__TypeCtorInfo_54_54 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0;
#line 7795 "make.c"
                                                    {
#line 7797 "make.c"
                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_54_54, ((MR_Box) (make__V_14_14)), ((MR_Box) (make__V_34_34)));
                                                    }
#line 100 "make.m"
                                                    if (make__succeeded)
#line 100 "make.m"
                                                      {
#line 7804 "make.c"
                                                        make__TypeCtorInfo_55_55 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0;
#line 7806 "make.c"
                                                        {
#line 7808 "make.c"
                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeCtorInfo_55_55, ((MR_Box) (make__V_15_15)), ((MR_Box) (make__V_35_35)));
                                                        }
#line 100 "make.m"
                                                        if (make__succeeded)
#line 100 "make.m"
                                                          {
#line 7815 "make.c"
                                                            make__succeeded = (make__V_16_16 == make__V_36_36);
#line 100 "make.m"
                                                            if (make__succeeded)
#line 100 "make.m"
                                                              {
#line 7821 "make.c"
                                                                make__succeeded = (make__V_17_17 == make__V_37_37);
#line 100 "make.m"
                                                                if (make__succeeded)
#line 100 "make.m"
                                                                  {
#line 7827 "make.c"
                                                                    make__TypeInfo_56_56 = (MR_Word) &make_scalar_common_2[4];
#line 7829 "make.c"
                                                                    {
#line 7831 "make.c"
                                                                      make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_56_56, ((MR_Box) (make__V_18_18)), ((MR_Box) (make__V_38_38)));
                                                                    }
#line 100 "make.m"
                                                                    if (make__succeeded)
#line 100 "make.m"
                                                                      {
#line 7838 "make.c"
                                                                        make__TypeInfo_57_57 = (MR_Word) &make_scalar_common_2[5];
#line 7840 "make.c"
                                                                        {
#line 7842 "make.c"
                                                                          make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_57_57, ((MR_Box) (make__V_19_19)), ((MR_Box) (make__V_39_39)));
                                                                        }
#line 100 "make.m"
                                                                        if (make__succeeded)
#line 100 "make.m"
                                                                          {
#line 7849 "make.c"
                                                                            make__TypeInfo_58_58 = (MR_Word) &make_scalar_common_2[6];
#line 7851 "make.c"
                                                                            {
#line 7853 "make.c"
                                                                              make__succeeded = mercury__builtin__unify_2_p_0(make__TypeInfo_58_58, ((MR_Box) (make__V_20_20)), ((MR_Box) (make__V_40_40)));
                                                                            }
#line 100 "make.m"
                                                                            if (make__succeeded)
#line 100 "make.m"
                                                                              {
#line 7860 "make.c"
                                                                                make__succeeded = (make__V_21_21 == make__V_41_41);
#line 100 "make.m"
                                                                                if (make__succeeded)
#line 100 "make.m"
                                                                                  {
#line 7866 "make.c"
                                                                                    make__TypeInfo_59_59 = (MR_Word) &make_scalar_common_2[7];
#line 7868 "make.c"
                                                                                    {
#line 7870 "make.c"
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
#line 7944 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 194 "make.m"
    else
#line 194 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 194 "make.m"
        {
#line 194 "make.m"
          MR_Word make__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 194 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 194 "make.m"
            {
#line 194 "make.m"
              MR_Word make__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__3_3, (MR_Integer) 0)));

#line 194 "make.m"
              {
#line 194 "make.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(make__HeadVar__1_1, make__V_27_27, make__V_13_13);
#line 194 "make.m"
                return;
              }
#line 194 "make.m"
            }
#line 194 "make.m"
          else
#line 194 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7975 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
            else
#line 7979 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
        }
#line 194 "make.m"
      else
#line 194 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_String make__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 194 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7994 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
            else
#line 194 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
              else
#line 8016 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 194 "make.m"
          }
#line 194 "make.m"
        else
#line 194 "make.m"
          {
#line 194 "make.m"
            MR_Word make__V_29_29 = (MR_Word) MR_body(((MR_Word) make__HeadVar__2_2), (MR_Integer) 0);

#line 194 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8029 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
            else
#line 194 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8035 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 194 "make.m"
              else
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
      if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 8103 "make.c"
              {
#line 8105 "make.c"
                return make__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(make__V_5_5, make__V_6_6);
              }
#line 194 "make.m"
            }
#line 194 "make.m"
        }
#line 194 "make.m"
      else
#line 194 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 8131 "make.c"
                make__succeeded = (strcmp(make__V_7_7, make__V_8_8) == 0);
#line 194 "make.m"
              }
#line 194 "make.m"
          }
#line 194 "make.m"
        else
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
#line 8154 "make.c"
                {
#line 8156 "make.c"
                  return make__succeeded = make____Unify____target_file_0_0(make__V_3_3, make__V_4_4);
                }
#line 194 "make.m"
              }
#line 194 "make.m"
          }
#line 194 "make.m"
    return make__succeeded;
#line 194 "make.m"
  }
#line 194 "make.m"
}

#line 273 "make.m"
void MR_CALL 
make____Compare____linked_target_file_0_0(
#line 273 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 273 "make.m"
  MR_Word make__HeadVar__2_2,
#line 273 "make.m"
  MR_Word make__HeadVar__3_3)
#line 273 "make.m"
{
#line 273 "make.m"
  {
#line 273 "make.m"
    MR_bool make__succeeded;
#line 273 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 273 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 273 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 273 "make.m"
    if (make__succeeded)
#line 8194 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 273 "make.m"
    else
#line 273 "make.m"
      {
#line 273 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 273 "make.m"
        MR_Word make__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "make.m"
        MR_Word make__V_8_8;

#line 273 "make.m"
        {
#line 273 "make.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&make__V_8_8, make__V_4_4, make__V_6_6);
        }
#line 8216 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 273 "make.m"
        make__succeeded = !(make__succeeded);
#line 273 "make.m"
        if (make__succeeded)
#line 273 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 273 "make.m"
        else
#line 273 "make.m"
          {
#line 273 "make.m"
            MR_Integer make__V_13_13 = (MR_Integer) make__V_5_5;
#line 273 "make.m"
            MR_Integer make__V_14_14 = (MR_Integer) make__V_7_7;

#line 273 "make.m"
            {
#line 273 "make.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__V_13_13, make__V_14_14);
#line 273 "make.m"
              return;
            }
#line 273 "make.m"
          }
#line 273 "make.m"
      }
#line 273 "make.m"
  }
#line 273 "make.m"
}

#line 273 "make.m"
MR_bool MR_CALL 
make____Unify____linked_target_file_0_0(
#line 273 "make.m"
  MR_Word make__HeadVar__1_1,
#line 273 "make.m"
  MR_Word make__HeadVar__2_2)
#line 273 "make.m"
{
#line 273 "make.m"
  {
#line 273 "make.m"
    MR_bool make__succeeded;
#line 273 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 273 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 273 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 273 "make.m"
    if (make__succeeded)
#line 273 "make.m"
      make__succeeded = MR_TRUE;
#line 273 "make.m"
    else
#line 273 "make.m"
      {
#line 273 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8286 "make.c"
        {
#line 8288 "make.c"
          make__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(make__V_3_3, make__V_5_5);
        }
#line 273 "make.m"
        if (make__succeeded)
#line 8293 "make.c"
          make__succeeded = (make__V_4_4 == make__V_6_6);
#line 273 "make.m"
      }
#line 273 "make.m"
    return make__succeeded;
#line 273 "make.m"
  }
#line 273 "make.m"
}

#line 599 "make.m"
void MR_CALL 
make____Compare____last_hash_0_0(
#line 599 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 599 "make.m"
  MR_Word make__HeadVar__2_2,
#line 599 "make.m"
  MR_Word make__HeadVar__3_3)
#line 599 "make.m"
{
#line 599 "make.m"
  {
#line 599 "make.m"
    MR_bool make__succeeded;
#line 599 "make.m"
    MR_Integer make__CastX_9 = (MR_Integer) make__HeadVar__2_2;
#line 599 "make.m"
    MR_Integer make__CastY_10 = (MR_Integer) make__HeadVar__3_3;

#line 599 "make.m"
    make__succeeded = (make__CastX_9 == make__CastY_10);
#line 599 "make.m"
    if (make__succeeded)
#line 8328 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 599 "make.m"
    else
#line 599 "make.m"
      {
#line 599 "make.m"
        MR_Word make__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 599 "make.m"
        MR_String make__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));
#line 599 "make.m"
        MR_Word make__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 0)));
#line 599 "make.m"
        MR_String make__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__3_3, (MR_Integer) 1)));
#line 599 "make.m"
        MR_Word make__V_8_8;

#line 599 "make.m"
        {
#line 599 "make.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_2[3], &make__V_8_8, ((MR_Box) (make__V_4_4)), ((MR_Box) (make__V_6_6)));
        }
#line 8350 "make.c"
        make__succeeded = (make__V_8_8 == (MR_Integer) 0);
#line 599 "make.m"
        make__succeeded = !(make__succeeded);
#line 599 "make.m"
        if (make__succeeded)
#line 599 "make.m"
          *make__HeadVar__1_1 = make__V_8_8;
#line 599 "make.m"
        else
#line 599 "make.m"
          {
#line 599 "make.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(make__HeadVar__1_1, make__V_5_5, make__V_7_7);
#line 599 "make.m"
            return;
          }
#line 599 "make.m"
      }
#line 599 "make.m"
  }
#line 599 "make.m"
}

#line 599 "make.m"
MR_bool MR_CALL 
make____Unify____last_hash_0_0(
#line 599 "make.m"
  MR_Word make__HeadVar__1_1,
#line 599 "make.m"
  MR_Word make__HeadVar__2_2)
#line 599 "make.m"
{
#line 599 "make.m"
  {
#line 599 "make.m"
    MR_bool make__succeeded;
#line 599 "make.m"
    MR_Integer make__CastX_7 = (MR_Integer) make__HeadVar__1_1;
#line 599 "make.m"
    MR_Integer make__CastY_8 = (MR_Integer) make__HeadVar__2_2;

#line 599 "make.m"
    make__succeeded = (make__CastX_7 == make__CastY_8);
#line 599 "make.m"
    if (make__succeeded)
#line 599 "make.m"
      make__succeeded = MR_TRUE;
#line 599 "make.m"
    else
#line 599 "make.m"
      {
#line 599 "make.m"
        MR_Word make__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "make.m"
        MR_String make__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "make.m"
        MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 599 "make.m"
        MR_String make__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 8411 "make.c"
        {
#line 8413 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_5_5)));
        }
#line 599 "make.m"
        if (make__succeeded)
#line 8418 "make.c"
          make__succeeded = (strcmp(make__V_4_4, make__V_6_6) == 0);
#line 599 "make.m"
      }
#line 599 "make.m"
    return make__succeeded;
#line 599 "make.m"
  }
#line 599 "make.m"
}

#line 259 "make.m"
void MR_CALL 
make____Compare____file_timestamps_0_0(
#line 259 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 259 "make.m"
  MR_Word make__HeadVar__2_2,
#line 259 "make.m"
  MR_Word make__HeadVar__3_3)
#line 259 "make.m"
{
#line 259 "make.m"
  {
#line 259 "make.m"
    MR_bool make__succeeded;
#line 259 "make.m"
    MR_Word make__Cast_HeadVar1_4 = make__HeadVar__2_2;
#line 259 "make.m"
    MR_Word make__Cast_HeadVar2_5 = make__HeadVar__3_3;

#line 259 "make.m"
    {
#line 259 "make.m"
      mercury__builtin__compare_3_p_0((MR_Word) &make_scalar_common_1[5], make__HeadVar__1_1, ((MR_Box) (make__Cast_HeadVar1_4)), ((MR_Box) (make__Cast_HeadVar2_5)));
#line 259 "make.m"
      return;
    }
#line 259 "make.m"
  }
#line 259 "make.m"
}

#line 259 "make.m"
MR_bool MR_CALL 
make____Unify____file_timestamps_0_0(
#line 259 "make.m"
  MR_Word make__HeadVar__1_1,
#line 259 "make.m"
  MR_Word make__HeadVar__2_2)
#line 259 "make.m"
{
#line 259 "make.m"
  {
#line 259 "make.m"
    MR_bool make__succeeded;
#line 259 "make.m"
    MR_Word make__Cast_HeadVar1_3 = make__HeadVar__1_1;
#line 259 "make.m"
    MR_Word make__Cast_HeadVar2_4 = make__HeadVar__2_2;

#line 259 "make.m"
    {
#line 259 "make.m"
      return make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[5], ((MR_Box) (make__Cast_HeadVar1_3)), ((MR_Box) (make__Cast_HeadVar2_4)));
    }
#line 259 "make.m"
    return make__succeeded;
#line 259 "make.m"
  }
#line 259 "make.m"
}

#line 261 "make.m"
void MR_CALL 
make____Compare____dependency_status_0_0(
#line 261 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 261 "make.m"
  MR_Word make__HeadVar__2_2,
#line 261 "make.m"
  MR_Word make__HeadVar__3_3)
#line 261 "make.m"
{
#line 261 "make.m"
  {
#line 261 "make.m"
    MR_bool make__succeeded;
#line 261 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 261 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 261 "make.m"
    {
#line 261 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 261 "make.m"
      return;
    }
#line 261 "make.m"
  }
#line 261 "make.m"
}

#line 261 "make.m"
MR_bool MR_CALL 
make____Unify____dependency_status_0_0(
#line 261 "make.m"
  MR_Word make__HeadVar__2_1,
#line 261 "make.m"
  MR_Word make__HeadVar__2_2)
#line 261 "make.m"
{
#line 8532 "make.c"
  {
#line 8534 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 8537 "make.c"
    return make__succeeded;
#line 8539 "make.c"
  }
#line 261 "make.m"
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
#line 8568 "make.c"
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
#line 8594 "make.c"
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
#line 8614 "make.c"
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

#line 8683 "make.c"
        {
#line 8685 "make.c"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_1[4], ((MR_Box) (make__V_3_3)), ((MR_Box) (make__V_6_6)));
        }
#line 186 "make.m"
        if (make__succeeded)
#line 186 "make.m"
          {
#line 8692 "make.c"
            make__TypeCtorInfo_12_12 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 8694 "make.c"
            {
#line 8696 "make.c"
              make__succeeded = mercury__version_array____Unify____version_array_1_0(make__TypeCtorInfo_12_12, make__V_4_4, make__V_7_7);
            }
#line 186 "make.m"
            if (make__succeeded)
#line 8701 "make.c"
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
#line 8738 "make.c"
      *make__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "make.m"
    else
#line 199 "make.m"
      if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 199 "make.m"
        {
#line 199 "make.m"
          MR_String make__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "make.m"
          MR_Word make__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
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
#line 8771 "make.c"
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
          else
#line 199 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8794 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
            else
#line 199 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8800 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
              else
#line 8804 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
        }
#line 199 "make.m"
      else
#line 199 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 199 "make.m"
          {
#line 199 "make.m"
            MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "make.m"
            MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
            if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8821 "make.c"
              *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
            else
#line 199 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
#line 8845 "make.c"
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
              else
#line 199 "make.m"
                if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8877 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                else
#line 8881 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
          }
#line 199 "make.m"
        else
#line 199 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 199 "make.m"
            {
#line 199 "make.m"
              MR_Word make__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8896 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
              else
#line 199 "make.m"
                if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8902 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                else
#line 199 "make.m"
                  if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
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
                  else
#line 8928 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
            }
#line 199 "make.m"
          else
#line 199 "make.m"
            {
#line 199 "make.m"
              MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "make.m"
              if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 8941 "make.c"
                *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
              else
#line 199 "make.m"
                if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8947 "make.c"
                  *make__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "make.m"
                else
#line 199 "make.m"
                  if (((MR_tag((MR_Word) make__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8953 "make.c"
                    *make__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "make.m"
                  else
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
      if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 9031 "make.c"
              make__succeeded = (make__V_11_11 == make__V_13_13);
#line 199 "make.m"
              if (make__succeeded)
#line 9035 "make.c"
                make__succeeded = (strcmp(make__V_12_12, make__V_14_14) == 0);
#line 199 "make.m"
            }
#line 199 "make.m"
        }
#line 199 "make.m"
      else
#line 199 "make.m"
        if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 9066 "make.c"
                make__succeeded = (make__V_7_7 == make__V_9_9);
#line 199 "make.m"
                if (make__succeeded)
#line 9070 "make.c"
                  make__succeeded = (make__V_8_8 == make__V_10_10);
#line 199 "make.m"
              }
#line 199 "make.m"
          }
#line 199 "make.m"
        else
#line 199 "make.m"
          if (((MR_tag((MR_Word) make__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 9095 "make.c"
                  make__succeeded = (make__V_3_3 == make__V_4_4);
#line 199 "make.m"
                }
#line 199 "make.m"
            }
#line 199 "make.m"
          else
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
#line 9118 "make.c"
                  make__succeeded = (make__V_5_5 == make__V_6_6);
#line 199 "make.m"
                }
#line 199 "make.m"
            }
#line 199 "make.m"
    return make__succeeded;
#line 199 "make.m"
  }
#line 199 "make.m"
}

#line 244 "make.m"
void MR_CALL 
make____Compare____c_header_type_0_0(
#line 244 "make.m"
  MR_Word * make__HeadVar__1_1,
#line 244 "make.m"
  MR_Word make__HeadVar__2_2,
#line 244 "make.m"
  MR_Word make__HeadVar__3_3)
#line 244 "make.m"
{
#line 244 "make.m"
  {
#line 244 "make.m"
    MR_bool make__succeeded;
#line 244 "make.m"
    MR_Integer make__Cast_HeadVar1_4 = (MR_Integer) make__HeadVar__2_2;
#line 244 "make.m"
    MR_Integer make__Cast_HeadVar2_5 = (MR_Integer) make__HeadVar__3_3;

#line 244 "make.m"
    {
#line 244 "make.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__HeadVar__1_1, make__Cast_HeadVar1_4, make__Cast_HeadVar2_5);
#line 244 "make.m"
      return;
    }
#line 244 "make.m"
  }
#line 244 "make.m"
}

#line 244 "make.m"
MR_bool MR_CALL 
make____Unify____c_header_type_0_0(
#line 244 "make.m"
  MR_Word make__HeadVar__2_1,
#line 244 "make.m"
  MR_Word make__HeadVar__2_2)
#line 244 "make.m"
{
#line 9172 "make.c"
  {
#line 9174 "make.c"
    MR_bool make__succeeded = (make__HeadVar__2_1 == make__HeadVar__2_2);

#line 9177 "make.c"
    return make__succeeded;
#line 9179 "make.c"
  }
#line 244 "make.m"
}

#line 746 "make.m"
void MR_CALL 
make__write_hash_file_5_p_0(
#line 746 "make.m"
  MR_String make__FileName_6,
#line 746 "make.m"
  MR_String make__Hash_7,
#line 746 "make.m"
  MR_Word * make__Success_8)
#line 746 "make.m"
{
#line 749 "make.m"
  {
#line 749 "make.m"
    MR_bool make__succeeded;
#line 749 "make.m"
    MR_Word make__OpenResult_10;

#line 750 "make.m"
    {
#line 750 "make.m"
      mercury__io__open_output_4_p_0(make__FileName_6, &make__OpenResult_10);
    }
#line 756 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 757 "make.m"
      {
#line 757 "make.m"
        MR_Word make__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OpenResult_10, (MR_Integer) 0)));
#line 757 "make.m"
        MR_String make__V_21_21;

#line 758 "make.m"
        {
#line 758 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
        }
#line 759 "make.m"
        {
#line 759 "make.m"
          mercury__io__write_string_3_p_0(make__FileName_6);
        }
#line 760 "make.m"
        {
#line 760 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "\': ");
        }
#line 761 "make.m"
        {
#line 761 "make.m"
          make__V_21_21 = mercury__io__error_message_1_f_0(make__Error_12);
        }
#line 761 "make.m"
        {
#line 761 "make.m"
          mercury__io__write_string_3_p_0(make__V_21_21);
        }
#line 762 "make.m"
        {
#line 762 "make.m"
          mercury__io__nl_2_p_0();
        }
#line 763 "make.m"
        *make__Success_8 = (MR_Integer) 0;
#line 757 "make.m"
      }
#line 756 "make.m"
    else
#line 752 "make.m"
      {
#line 752 "make.m"
        MR_Word make__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_10, (MR_Integer) 0)));

#line 753 "make.m"
        {
#line 753 "make.m"
          mercury__io__write_string_4_p_0(make__Stream_11, make__Hash_7);
        }
#line 754 "make.m"
        {
#line 754 "make.m"
          mercury__io__close_output_3_p_0(make__Stream_11);
        }
#line 755 "make.m"
        *make__Success_8 = (MR_Integer) 1;
#line 752 "make.m"
      }
#line 749 "make.m"
  }
#line 746 "make.m"
}

#line 702 "make.m"
void MR_CALL 
make__compare_hash_file_6_p_0(
#line 702 "make.m"
  MR_Word make__Globals_7,
#line 702 "make.m"
  MR_String make__FileName_8,
#line 702 "make.m"
  MR_String make__Hash_9,
#line 702 "make.m"
  MR_Word * make__Same_10)
#line 702 "make.m"
{
#line 705 "make.m"
  {
#line 705 "make.m"
    MR_bool make__succeeded;
#line 705 "make.m"
    MR_Word make__OpenResult_12;
#line 705 "make.m"
    MR_Word make__Verbose_18;

#line 706 "make.m"
    {
#line 706 "make.m"
      mercury__io__open_input_4_p_0(make__FileName_8, &make__OpenResult_12);
    }
#line 725 "make.m"
    if (((MR_tag((MR_Word) make__OpenResult_12)) == (MR_mktag((MR_Integer) 1))))
#line 728 "make.m"
      *make__Same_10 = (MR_Integer) 0;
#line 725 "make.m"
    else
#line 708 "make.m"
      {
#line 708 "make.m"
        MR_Word make__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__OpenResult_12, (MR_Integer) 0)));
#line 708 "make.m"
        MR_Word make__ReadResult_14;

#line 709 "make.m"
        {
#line 709 "make.m"
          mercury__io__read_line_as_string_4_p_0(make__Stream_13, &make__ReadResult_14);
        }
#line 717 "make.m"
        if ((make__ReadResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "make.m"
          *make__Same_10 = (MR_Integer) 0;
#line 717 "make.m"
        else
#line 717 "make.m"
          if (((MR_tag((MR_Word) make__ReadResult_14)) == (MR_mktag((MR_Integer) 2))))
#line 722 "make.m"
            *make__Same_10 = (MR_Integer) 0;
#line 717 "make.m"
          else
#line 711 "make.m"
            {
#line 711 "make.m"
              MR_String make__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), make__ReadResult_14, (MR_Integer) 0)));

#line 712 "make.m"
              make__succeeded = (strcmp(make__Line_15, make__Hash_9) == 0);
#line 714 "make.m"
              if (make__succeeded)
#line 713 "make.m"
                *make__Same_10 = (MR_Integer) 1;
#line 714 "make.m"
              else
#line 715 "make.m"
                *make__Same_10 = (MR_Integer) 0;
#line 711 "make.m"
            }
#line 724 "make.m"
        {
#line 724 "make.m"
          mercury__io__close_input_3_p_0(make__Stream_13);
        }
#line 708 "make.m"
      }
#line 730 "make.m"
    {
#line 730 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_7, (MR_Integer) 44, &make__Verbose_18);
    }
#line 742 "make.m"
    if ((make__Verbose_18 == (MR_Integer) 0))
#line 743 "make.m"
      {
#line 743 "make.m"
      }
#line 742 "make.m"
    else
#line 732 "make.m"
      {
#line 733 "make.m"
        {
#line 733 "make.m"
          mercury__io__write_string_3_p_0((MR_String) "% ");
        }
#line 734 "make.m"
        {
#line 734 "make.m"
          mercury__io__write_string_3_p_0(make__FileName_8);
        }
#line 738 "make.m"
        if ((*make__Same_10 == (MR_Integer) 0))
#line 739 "make.m"
          {
#line 740 "make.m"
            {
#line 740 "make.m"
              mercury__io__write_string_3_p_0((MR_String) " will be UPDATED.\n");
#line 740 "make.m"
              return;
            }
#line 739 "make.m"
          }
#line 738 "make.m"
        else
#line 736 "make.m"
          {
#line 737 "make.m"
            {
#line 737 "make.m"
              mercury__io__write_string_3_p_0((MR_String) " does not need updating.\n");
#line 737 "make.m"
              return;
            }
#line 736 "make.m"
          }
#line 732 "make.m"
      }
#line 705 "make.m"
  }
#line 702 "make.m"
}

#line 696 "make.m"
MR_bool MR_CALL 
make__is_consequential_option_2_p_0(
#line 696 "make.m"
  MR_Word make__InconsequentialOptions_3,
#line 696 "make.m"
  MR_Word make__HeadVar__2_2)
#line 696 "make.m"
{
#line 699 "make.m"
  {
#line 699 "make.m"
    MR_bool make__succeeded;
#line 699 "make.m"
    MR_Word make__Option_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "make.m"
    MR_Word make__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__HeadVar__2_2, (MR_Integer) 1)));

#line 700 "make.m"
    {
#line 700 "make.m"
      make__succeeded = mercury__set__contains_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, make__InconsequentialOptions_3, ((MR_Box) (make__Option_4)));
    }
#line 700 "make.m"
    make__succeeded = !(make__succeeded);
#line 699 "make.m"
    return make__succeeded;
#line 699 "make.m"
  }
#line 696 "make.m"
}

#line 692 "make.m"
static MR_bool MR_CALL 
make__option_table_hash_4_p_0_1(
#line 692 "make.m"
  MR_Box make__closure_arg,
#line 692 "make.m"
  MR_Box make__wrapper_arg_1)
#line 692 "make.m"
{
#line 692 "make.m"
  {
#line 692 "make.m"
    MR_bool make__succeeded;
#line 692 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 692 "make.m"
    {
#line 692 "make.m"
      return make__succeeded = make__is_consequential_option_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_Word) make__wrapper_arg_1));
    }
#line 692 "make.m"
    return make__succeeded;
#line 692 "make.m"
  }
#line 692 "make.m"
}

#line 669 "make.m"
void MR_CALL 
make__option_table_hash_4_p_0(
#line 669 "make.m"
  MR_Word make__AllOptionArgs_5,
#line 669 "make.m"
  MR_String * make__Hash_6)
#line 669 "make.m"
{
#line 672 "make.m"
  {
#line 672 "make.m"
    MR_bool make__succeeded;
#line 672 "make.m"
    MR_Word make__OptionsErrors_11;
#line 672 "make.m"
    MR_Word make__AllOptionArgsGlobals_12;
#line 672 "make.m"
    MR_Word make__OptionTable_15;
#line 672 "make.m"
    MR_Word make__OptionList_16;
#line 672 "make.m"
    MR_Word make__InconsequentialOptions_17;
#line 672 "make.m"
    MR_Word make__ConsequentialOptionList_18;
#line 672 "make.m"
    MR_Word make__V_28_28;
#line 672 "make.m"
    MR_String make__V_29_29;
#line 680 "make.m"
    MR_Word make__V_8_8;
#line 680 "make.m"
    MR_Word make__V_9_9;
#line 680 "make.m"
    MR_Word make__V_10_10;

#line 680 "make.m"
    {
#line 680 "make.m"
      libs__handle_options__handle_given_options_8_p_0(make__AllOptionArgs_5, &make__V_8_8, &make__V_9_9, &make__V_10_10, &make__OptionsErrors_11, &make__AllOptionArgsGlobals_12);
    }
#line 684 "make.m"
    if ((make__OptionsErrors_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 683 "make.m"
      {
#line 683 "make.m"
      }
#line 684 "make.m"
    else
#line 685 "make.m"
      {
#line 686 "make.m"
        {
#line 686 "make.m"
          mercury__require__unexpected_2_p_0((MR_String) "make.m", (MR_String) "predicate \140make.option_table_hash\'/4: handle_options returned with errors");
#line 686 "make.m"
          return;
        }
#line 685 "make.m"
      }
#line 689 "make.m"
    {
#line 689 "make.m"
      libs__globals__get_options_2_p_0(make__AllOptionArgsGlobals_12, &make__OptionTable_15);
    }
#line 690 "make.m"
    {
#line 690 "make.m"
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, make__OptionTable_15, &make__OptionList_16);
    }
#line 691 "make.m"
    {
#line 691 "make.m"
      libs__options__inconsequential_options_1_p_0(&make__InconsequentialOptions_17);
    }
#line 692 "make.m"
    {
#line 692 "make.m"
      make__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 692 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 0) = ((MR_Box) (&make_scalar_common_4[2]));
#line 692 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 1) = ((MR_Box) (make__option_table_hash_4_p_0_1));
#line 692 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 692 "make.m"
      MR_hl_field(MR_mktag(0), make__V_28_28, 3) = ((MR_Box) (make__InconsequentialOptions_17));
#line 692 "make.m"
    }
#line 692 "make.m"
    {
#line 692 "make.m"
      mercury__list__filter_3_p_0((MR_Word) &make_scalar_common_1[3], make__V_28_28, make__OptionList_16, &make__ConsequentialOptionList_18);
    }
#line 694 "make.m"
    {
#line 694 "make.m"
      make__V_29_29 = mercury__string__string_1_f_0((MR_Word) &make_scalar_common_2[1], ((MR_Box) (make__ConsequentialOptionList_18)));
    }
#line 694 "make.m"
    {
#line 694 "make.m"
      *make__Hash_6 = libs__md4__md4sum_1_f_0(make__V_29_29);
    }
#line 672 "make.m"
  }
#line 669 "make.m"
}

#line 629 "make.m"
void MR_CALL 
make__make_track_flags_files_2_9_p_0(
#line 629 "make.m"
  MR_Word make__Globals_10,
#line 629 "make.m"
  MR_Word make__ModuleName_11,
#line 629 "make.m"
  MR_Word * make__Success_12,
#line 629 "make.m"
  MR_Word make__STATE_VARIABLE_LastHash_0_25,
#line 629 "make.m"
  MR_Word * make__STATE_VARIABLE_LastHash_26,
#line 629 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_27,
#line 629 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_28)
#line 629 "make.m"
{
#line 634 "make.m"
  {
#line 634 "make.m"
    MR_bool make__succeeded;
#line 634 "make.m"
    MR_Word make__OptionsResult_16;
#line 634 "make.m"
    MR_Word make__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
#line 635 "make.m"
    MR_Word make__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
#line 635 "make.m"
    MR_Word make__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
#line 635 "make.m"
    MR_Word make__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
#line 635 "make.m"
    MR_Word make__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
#line 635 "make.m"
    MR_Word make__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
#line 635 "make.m"
    MR_Word make__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
#line 635 "make.m"
    MR_Word make__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
#line 635 "make.m"
    MR_Word make__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
#line 635 "make.m"
    MR_Word make__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
#line 635 "make.m"
    MR_Word make__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
#line 635 "make.m"
    MR_Word make__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
#line 635 "make.m"
    MR_Word make__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
#line 635 "make.m"
    MR_Word make__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
#line 635 "make.m"
    MR_Word make__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
#line 635 "make.m"
    MR_Word make__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
#line 635 "make.m"
    MR_Word make__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
#line 635 "make.m"
    MR_Word make__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
#line 635 "make.m"
    MR_Integer make__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
#line 635 "make.m"
    MR_Word make__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));

#line 635 "make.m"
    {
#line 635 "make.m"
      make__options_file__lookup_mmc_module_options_6_p_0(make__Globals_10, make__V_31_31, make__ModuleName_11, &make__OptionsResult_16);
    }
#line 664 "make.m"
    if ((make__OptionsResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "make.m"
      {
#line 666 "make.m"
        *make__Success_12 = (MR_Integer) 0;
#line 666 "make.m"
        *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
#line 665 "make.m"
      }
#line 664 "make.m"
    else
#line 638 "make.m"
      {
#line 638 "make.m"
        MR_Word make__ModuleOptionArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__OptionsResult_16, (MR_Integer) 0)));
#line 638 "make.m"
        MR_Word make__DetectedGradeFlags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
#line 638 "make.m"
        MR_Word make__OptionArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
#line 638 "make.m"
        MR_Word make__AllOptionArgs_20;
#line 638 "make.m"
        MR_String make__Hash_22;
#line 638 "make.m"
        MR_String make__HashFileName_23;
#line 638 "make.m"
        MR_Word make__Same_24;
#line 638 "make.m"
        MR_Word make__V_33_33;
#line 638 "make.m"
        MR_Word make__V_34_34;
#line 638 "make.m"
        MR_Word make__V_35_35;
#line 639 "make.m"
        MR_Word make__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
#line 639 "make.m"
        MR_Word make__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
#line 639 "make.m"
        MR_Word make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
#line 639 "make.m"
        MR_Word make__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
#line 639 "make.m"
        MR_Word make__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
#line 639 "make.m"
        MR_Word make__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
#line 639 "make.m"
        MR_Word make__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
#line 639 "make.m"
        MR_Word make__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
#line 639 "make.m"
        MR_Word make__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
#line 639 "make.m"
        MR_Word make__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
#line 639 "make.m"
        MR_Word make__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
#line 639 "make.m"
        MR_Word make__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
#line 639 "make.m"
        MR_Word make__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
#line 639 "make.m"
        MR_Word make__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
#line 639 "make.m"
        MR_Word make__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
#line 639 "make.m"
        MR_Word make__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
#line 639 "make.m"
        MR_Integer make__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
#line 639 "make.m"
        MR_Word make__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
#line 649 "make.m"
        MR_String make__HashPrime_21;
#line 647 "make.m"
        MR_Word make__V_102_102;

#line 641 "make.m"
        {
#line 641 "make.m"
          make__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "make.m"
          MR_hl_field(MR_mktag(1), make__V_35_35, 0) = ((MR_Box) (make__OptionArgs_19));
#line 641 "make.m"
          MR_hl_field(MR_mktag(1), make__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "make.m"
        }
#line 641 "make.m"
        {
#line 641 "make.m"
          make__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "make.m"
          MR_hl_field(MR_mktag(1), make__V_34_34, 0) = ((MR_Box) (make__ModuleOptionArgs_17));
#line 641 "make.m"
          MR_hl_field(MR_mktag(1), make__V_34_34, 1) = ((MR_Box) (make__V_35_35));
#line 641 "make.m"
        }
#line 641 "make.m"
        {
#line 641 "make.m"
          make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "make.m"
          MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) (make__DetectedGradeFlags_18));
#line 641 "make.m"
          MR_hl_field(MR_mktag(1), make__V_33_33, 1) = ((MR_Box) (make__V_34_34));
#line 641 "make.m"
        }
#line 641 "make.m"
        {
#line 641 "make.m"
          make__AllOptionArgs_20 = mercury__list__condense_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__V_33_33);
        }
#line 647 "make.m"
        make__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 0)));
#line 647 "make.m"
        make__HashPrime_21 = ((MR_String) (MR_hl_field(MR_mktag(0), make__STATE_VARIABLE_LastHash_0_25, (MR_Integer) 1)));
#line 647 "make.m"
        {
#line 647 "make.m"
          make__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make_scalar_common_2[3], ((MR_Box) (make__AllOptionArgs_20)), ((MR_Box) (make__V_102_102)));
        }
#line 649 "make.m"
        if (make__succeeded)
#line 648 "make.m"
          {
#line 648 "make.m"
            make__Hash_22 = make__HashPrime_21;
#line 648 "make.m"
            *make__STATE_VARIABLE_LastHash_26 = make__STATE_VARIABLE_LastHash_0_25;
#line 648 "make.m"
          }
#line 649 "make.m"
        else
#line 650 "make.m"
          {
#line 650 "make.m"
            {
#line 650 "make.m"
              make__option_table_hash_4_p_0(make__AllOptionArgs_20, &make__Hash_22);
            }
#line 651 "make.m"
            {
#line 651 "make.m"
              MR_Word base;
#line 651 "make.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "make.m"
              *make__STATE_VARIABLE_LastHash_26 = base;
#line 651 "make.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__AllOptionArgs_20));
#line 651 "make.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__Hash_22));
#line 651 "make.m"
            }
#line 650 "make.m"
          }
#line 654 "make.m"
        {
#line 654 "make.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(make__Globals_10, make__ModuleName_11, (MR_String) ".track_flags", (MR_Integer) 0, &make__HashFileName_23);
        }
#line 656 "make.m"
        {
#line 656 "make.m"
          make__compare_hash_file_6_p_0(make__Globals_10, make__HashFileName_23, make__Hash_22, &make__Same_24);
        }
#line 660 "make.m"
        if ((make__Same_24 == (MR_Integer) 0))
#line 662 "make.m"
          {
#line 662 "make.m"
            make__write_hash_file_5_p_0(make__HashFileName_23, make__Hash_22, make__Success_12);
          }
#line 660 "make.m"
        else
#line 659 "make.m"
          *make__Success_12 = (MR_Integer) 1;
#line 638 "make.m"
      }
#line 666 "make.m"
    *make__STATE_VARIABLE_Info_28 = make__STATE_VARIABLE_Info_0_27;
#line 634 "make.m"
  }
#line 629 "make.m"
}

#line 621 "make.m"
static void MR_CALL 
make__make_track_flags_files_7_p_0_1(
#line 621 "make.m"
  MR_Box make__closure_arg,
#line 621 "make.m"
  MR_Box make__wrapper_arg_1,
#line 621 "make.m"
  MR_Box make__wrapper_arg_2,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 621 "make.m"
  MR_Box make__wrapper_arg_4,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 621 "make.m"
  MR_Box make__wrapper_arg_6,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_7,
#line 621 "make.m"
  MR_Box make__wrapper_arg_8,
#line 621 "make.m"
  MR_Box * make__wrapper_arg_9)
#line 621 "make.m"
{
#line 621 "make.m"
  {
#line 621 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 621 "make.m"
    MR_Word make__conv2_Success_12;
#line 621 "make.m"
    MR_Word make__conv1_STATE_VARIABLE_LastHash_26;
#line 621 "make.m"
    MR_Word make__conv0_STATE_VARIABLE_Info_28;

#line 621 "make.m"
    {
#line 621 "make.m"
      make__make_track_flags_files_2_9_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv2_Success_12, ((MR_Word) make__wrapper_arg_4), &make__conv1_STATE_VARIABLE_LastHash_26, ((MR_Word) make__wrapper_arg_6), &make__conv0_STATE_VARIABLE_Info_28);
    }
#line 621 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv2_Success_12));
#line 621 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv1_STATE_VARIABLE_LastHash_26));
#line 621 "make.m"
    *make__wrapper_arg_7 = ((MR_Box) (make__conv0_STATE_VARIABLE_Info_28));
#line 621 "make.m"
  }
#line 621 "make.m"
}

#line 611 "make.m"
void MR_CALL 
make__make_track_flags_files_7_p_0(
#line 611 "make.m"
  MR_Word make__Globals_8,
#line 611 "make.m"
  MR_Word make__ModuleName_9,
#line 611 "make.m"
  MR_Word * make__Success_10,
#line 611 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_18,
#line 611 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_19)
#line 611 "make.m"
{
#line 614 "make.m"
  {
#line 614 "make.m"
    MR_bool make__succeeded;
#line 614 "make.m"
    MR_Word make__Success0_13;
#line 614 "make.m"
    MR_Word make__Modules_14;
#line 614 "make.m"
    MR_Word make__STATE_VARIABLE_Info_22_22;

#line 615 "make.m"
    {
#line 615 "make.m"
      make__dependencies__find_reachable_local_modules_8_p_0(make__Globals_8, make__ModuleName_9, &make__Success0_13, &make__Modules_14, make__STATE_VARIABLE_Info_0_18, &make__STATE_VARIABLE_Info_22_22);
    }
#line 624 "make.m"
    if ((make__Success0_13 == (MR_Integer) 0))
#line 625 "make.m"
      {
#line 626 "make.m"
        *make__Success_10 = (MR_Integer) 0;
#line 626 "make.m"
        *make__STATE_VARIABLE_Info_19 = make__STATE_VARIABLE_Info_22_22;
#line 625 "make.m"
      }
#line 624 "make.m"
    else
#line 618 "make.m"
      {
#line 618 "make.m"
        MR_Word make__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 618 "make.m"
        MR_Word make__V_27_27;
#line 621 "make.m"
        MR_Word make___LastHash_17;
#line 621 "make.m"
        MR_Box make__conv5__LastHash_17;
#line 621 "make.m"
        MR_Box make__conv4_STATE_VARIABLE_Info_19;
#line 621 "make.m"
        MR_Box make__conv3_STATE_VARIABLE_IO_21;

#line 621 "make.m"
        {
#line 621 "make.m"
          make__V_27_27 = mercury__set__to_sorted_list_1_f_0(make__TypeCtorInfo_39_39, make__Modules_14);
        }
#line 621 "make.m"
        {
#line 621 "make.m"
          make__util__foldl3_maybe_stop_at_error_11_p_0(make__TypeCtorInfo_39_39, (MR_Word) &make__make__type_ctor_info_last_hash_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Integer) 0, (MR_Word) &make_scalar_common_1[17], make__Globals_8, make__V_27_27, make__Success_10, ((MR_Box) (&make_scalar_common_2[9])), &make__conv5__LastHash_17, ((MR_Box) (make__STATE_VARIABLE_Info_22_22)), &make__conv4_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &make__conv3_STATE_VARIABLE_IO_21);
        }
#line 621 "make.m"
        make___LastHash_17 = ((MR_Word) make__conv5__LastHash_17);
#line 621 "make.m"
        *make__STATE_VARIABLE_Info_19 = ((MR_Word) make__conv4_STATE_VARIABLE_Info_19);
#line 618 "make.m"
      }
#line 614 "make.m"
  }
#line 611 "make.m"
}

#line 576 "make.m"
MR_Word MR_CALL 
make__get_executable_type_1_f_0(
#line 576 "make.m"
  MR_Word make__Globals_3)
#line 576 "make.m"
{
#line 578 "make.m"
  {
#line 578 "make.m"
    MR_bool make__succeeded;
#line 578 "make.m"
    MR_Word make__ExecutableType_4;
#line 578 "make.m"
    MR_Word make__CompilationTarget_5;

#line 579 "make.m"
    {
#line 579 "make.m"
      libs__globals__get_target_2_p_0(make__Globals_3, &make__CompilationTarget_5);
    }
#line 586 "make.m"
    if ((make__CompilationTarget_5 == (MR_Integer) 2))
#line 588 "make.m"
      make__ExecutableType_4 = (MR_Integer) 3;
#line 586 "make.m"
    else
#line 586 "make.m"
      if ((make__CompilationTarget_5 == (MR_Integer) 5))
#line 594 "make.m"
        make__ExecutableType_4 = (MR_Integer) 7;
#line 586 "make.m"
      else
#line 586 "make.m"
        if ((make__CompilationTarget_5 == (MR_Integer) 3))
#line 591 "make.m"
          make__ExecutableType_4 = (MR_Integer) 5;
#line 586 "make.m"
        else
#line 585 "make.m"
          make__ExecutableType_4 = (MR_Integer) 0;
#line 578 "make.m"
    return make__ExecutableType_4;
#line 578 "make.m"
  }
#line 576 "make.m"
}

#line 566 "make.m"
MR_bool MR_CALL 
make__search_backwards_for_dot_3_p_0(
#line 566 "make.m"
  MR_String make__String_4,
#line 566 "make.m"
  MR_Integer make__Index_5,
#line 566 "make.m"
  MR_Integer * make__DotIndex_6)
#line 566 "make.m"
{
#line 568 "make.m"
  while (MR_TRUE)
#line 568 "make.m"
    {
#line 568 "make.m"
      /* tailcall optimized into a loop */
#line 568 "make.m"
      {
#line 568 "make.m"
        MR_bool make__succeeded;
#line 568 "make.m"
        MR_Integer make__CharIndex_7;
#line 568 "make.m"
        MR_Char make__Char_8;

#line 569 "make.m"
        {
#line 569 "make.m"
          make__succeeded = mercury__string__unsafe_prev_index_4_p_0(make__String_4, make__Index_5, &make__CharIndex_7, &make__Char_8);
        }
#line 568 "make.m"
        if (make__succeeded)
#line 568 "make.m"
          {
#line 570 "make.m"
            make__succeeded = (make__Char_8 == (MR_Char) 46);
#line 572 "make.m"
            if (make__succeeded)
#line 571 "make.m"
              {
#line 571 "make.m"
                *make__DotIndex_6 = make__CharIndex_7;
#line 571 "make.m"
                make__succeeded = MR_TRUE;
#line 571 "make.m"
              }
#line 572 "make.m"
            else
#line 573 "make.m"
              {
#line 573 "make.m"
                /* direct tailcall eliminated */
#line 573 "make.m"
                {
#line 573 "make.m"
                  MR_Integer make__Index__tmp_copy_5 = make__CharIndex_7;

#line 573 "make.m"
                  make__Index_5 = make__Index__tmp_copy_5;
#line 573 "make.m"
                }
#line 573 "make.m"
                continue;
#line 573 "make.m"
              }
#line 568 "make.m"
          }
#line 568 "make.m"
        return make__succeeded;
#line 568 "make.m"
      }
#line 568 "make.m"
      break;
#line 568 "make.m"
    }
#line 566 "make.m"
}

#line 471 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_3(
#line 471 "make.m"
  void * make__env_ptr_arg)
#line 471 "make.m"
{
#line 471 "make.m"
  {
#line 471 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 475 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".cs") == 0);
#line 475 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 475 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 475 "make.m"
      {
#line 475 "make.m"
        make__classify_target_2_4_p_0_2(make__env_ptr);
#line 475 "make.m"
        return;
      }
#line 471 "make.m"
  }
#line 471 "make.m"
}

#line 477 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_2(
#line 477 "make.m"
  void * make__env_ptr_arg)
#line 477 "make.m"
{
#line 477 "make.m"
  {
#line 477 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 477 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_0 = MR_TRUE;
#line 477 "make.m"
    {
#line 477 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 478 "make.m"
      {
#line 478 "make.m"
        MR_Word base;
#line 478 "make.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 478 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 478 "make.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_10));
#line 478 "make.m"
      }
#line 477 "make.m"
      {
#line 477 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
#line 477 "make.m"
        return;
      }
#line 477 "make.m"
    }
#line 477 "make.m"
  }
#line 477 "make.m"
}

#line 469 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_1(
#line 469 "make.m"
  void * make__env_ptr_arg)
#line 469 "make.m"
{
#line 469 "make.m"
  {
#line 469 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 564 "make.m"
    {
#line 564 "make.m"
      parse_tree__file_names__file_name_to_module_name_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8);
    }
#line 469 "make.m"
    {
#line 469 "make.m"
      MR_Word base;
#line 469 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "make.m"
      *((make__env_ptr)->make__classify_target_2_4_p_0_env_0__HeadVar__4_4) = base;
#line 469 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleName_8));
#line 469 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9));
#line 469 "make.m"
    }
#line 469 "make.m"
    {
#line 469 "make.m"
      ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont)((make__env_ptr)->make__classify_target_2_4_p_0_env_0__cont_env_ptr);
#line 469 "make.m"
      return;
    }
#line 469 "make.m"
  }
#line 469 "make.m"
}

#line 520 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_8(
#line 520 "make.m"
  void * make__env_ptr_arg)
#line 520 "make.m"
{
#line 520 "make.m"
  {
#line 520 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 520 "make.m"
    {
#line 526 "make.m"
      MR_Word make__V_17_17;

#line 526 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 526 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 526 "make.m"
        make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 526 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 526 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 526 "make.m"
        {
#line 526 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
#line 526 "make.m"
          return;
        }
#line 520 "make.m"
    }
#line 520 "make.m"
  }
#line 520 "make.m"
}

#line 518 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_5(
#line 518 "make.m"
  void * make__env_ptr_arg)
#line 518 "make.m"
{
#line 518 "make.m"
  {
#line 518 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 520 "make.m"
    {
#line 520 "make.m"
      MR_Word make__V_32_32;

#line 520 "make.m"
      {
#line 520 "make.m"
        make__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 520 "make.m"
        MR_hl_field(MR_mktag(1), make__V_32_32, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16));
#line 520 "make.m"
      }
#line 520 "make.m"
      {
#line 520 "make.m"
        make__util__target_extension_2_f_1((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, make__V_32_32, make__classify_target_2_4_p_0_8, make__env_ptr);
      }
#line 520 "make.m"
    }
#line 522 "make.m"
    {
#line 526 "make.m"
      MR_Word make__V_65_65;

#line 522 "make.m"
      {
#line 522 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47);
      }
#line 522 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 522 "make.m"
        {
#line 526 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47)) == (MR_mktag((MR_Integer) 1)));
#line 526 "make.m"
          if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 526 "make.m"
            make__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47, (MR_Integer) 0)));
#line 526 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = !((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded);
#line 522 "make.m"
        }
#line 522 "make.m"
      if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 522 "make.m"
        {
#line 522 "make.m"
          make__classify_target_2_4_p_0_4(make__env_ptr);
#line 522 "make.m"
          return;
        }
#line 522 "make.m"
    }
#line 518 "make.m"
  }
#line 518 "make.m"
}

#line 528 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_4(
#line 528 "make.m"
  void * make__env_ptr_arg)
#line 528 "make.m"
{
#line 528 "make.m"
  {
#line 528 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 528 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__cond_1 = MR_TRUE;
#line 528 "make.m"
    {
#line 528 "make.m"
      MR_Word make__V_33_33;

#line 528 "make.m"
      (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 529 "make.m"
      {
#line 529 "make.m"
        make__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "make.m"
        MR_hl_field(MR_mktag(1), make__V_33_33, 0) = ((MR_Box) ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__ModuleTargetType_47));
#line 529 "make.m"
      }
#line 529 "make.m"
      {
#line 529 "make.m"
        MR_Word base;
#line 529 "make.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 529 "make.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__V_33_33));
#line 529 "make.m"
      }
#line 528 "make.m"
      {
#line 528 "make.m"
        make__classify_target_2_4_p_0_1(make__env_ptr);
#line 528 "make.m"
        return;
      }
#line 528 "make.m"
    }
#line 528 "make.m"
  }
#line 528 "make.m"
}

#line 512 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_6(
#line 512 "make.m"
  void * make__env_ptr_arg)
#line 512 "make.m"
{
#line 512 "make.m"
  {
#line 512 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 513 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_30_30, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_60_60) == 0);
#line 512 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 512 "make.m"
      {
#line 514 "make.m"
        (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31 = (MR_String) ".";
#line 514 "make.m"
        {
#line 514 "make.m"
          (make__env_ptr)->make__classify_target_2_4_p_0_env_0__Suffix1_16 = mercury__string__f_43_43_2_f_0((make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_31_31, (make__env_ptr)->make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15);
        }
#line 514 "make.m"
        {
#line 514 "make.m"
          make__classify_target_2_4_p_0_5(make__env_ptr);
#line 514 "make.m"
          return;
        }
#line 512 "make.m"
      }
#line 512 "make.m"
  }
#line 512 "make.m"
}

#line 517 "make.m"
static void MR_CALL 
make__classify_target_2_4_p_0_7(
#line 517 "make.m"
  void * make__env_ptr_arg)
#line 517 "make.m"
{
#line 517 "make.m"
  {
#line 517 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s * make__env_ptr = (struct make__classify_target_2_4_p_0_env_0_s *) make__env_ptr_arg;

#line 517 "make.m"
    (make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((MR_String) "s", (make__env_ptr)->make__classify_target_2_4_p_0_env_0__V_61_61) == 0);
#line 517 "make.m"
    if ((make__env_ptr)->make__classify_target_2_4_p_0_env_0__succeeded)
#line 517 "make.m"
      {
#line 517 "make.m"
        make__classify_target_2_4_p_0_5(make__env_ptr);
#line 517 "make.m"
        return;
      }
#line 517 "make.m"
  }
#line 517 "make.m"
}

#line 466 "make.m"
void MR_CALL 
make__classify_target_2_4_p_0(
#line 466 "make.m"
  MR_Word make__Globals_5,
#line 466 "make.m"
  MR_String make__ModuleNameStr0_6,
#line 466 "make.m"
  MR_String make__Suffix_7,
#line 466 "make.m"
  MR_Word * make__HeadVar__4_4,
#line 466 "make.m"
  MR_Cont make__cont,
#line 466 "make.m"
  void * make__cont_env_ptr)
#line 466 "make.m"
{
#line 466 "make.m"
  {
#line 466 "make.m"
    struct make__classify_target_2_4_p_0_env_0_s make__env;

#line 466 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Globals_5 = make__Globals_5;
#line 466 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6 = make__ModuleNameStr0_6;
#line 466 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7 = make__Suffix_7;
#line 466 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__HeadVar__4_4 = make__HeadVar__4_4;
#line 466 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont = make__cont;
#line 466 "make.m"
    (make__env).make__classify_target_2_4_p_0_env_0__cont_env_ptr = make__cont_env_ptr;
#line 469 "make.m"
    {
#line 471 "make.m"
      MR_Word make__V_18_18;

#line 479 "make.m"
      (make__env).make__classify_target_2_4_p_0_env_0__cond_0 = MR_FALSE;
#line 471 "make.m"
      {
#line 471 "make.m"
        make__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 471 "make.m"
        MR_hl_field(MR_mktag(1), make__V_18_18, 0) = ((MR_Box) ((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7));
#line 471 "make.m"
      }
#line 471 "make.m"
      {
#line 471 "make.m"
        make__util__target_extension_2_f_1((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &(make__env).make__classify_target_2_4_p_0_env_0__ModuleTargetType_10, make__V_18_18, make__classify_target_2_4_p_0_3, &make__env);
      }
#line 479 "make.m"
      if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_0))
#line 484 "make.m"
        {
#line 484 "make.m"
          MR_Word make__ModuleTargetType_56;

#line 480 "make.m"
          {
#line 480 "make.m"
            (make__env).make__classify_target_2_4_p_0_env_0__succeeded = make__util__target_extension_synonym_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, &make__ModuleTargetType_56);
          }
#line 484 "make.m"
          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 482 "make.m"
            {
#line 482 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 483 "make.m"
              {
#line 483 "make.m"
                MR_Word base;
#line 483 "make.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 483 "make.m"
                (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 483 "make.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleTargetType_56));
#line 483 "make.m"
              }
#line 482 "make.m"
              {
#line 482 "make.m"
                make__classify_target_2_4_p_0_1(&make__env);
              }
#line 482 "make.m"
            }
#line 484 "make.m"
          else
#line 490 "make.m"
            {
#line 490 "make.m"
              MR_String make__ModuleNameStr1_12;
#line 485 "make.m"
              MR_String make__V_20_20;
#line 485 "make.m"
              MR_String make__V_57_57;

#line 485 "make.m"
              {
#line 485 "make.m"
                libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 572, &make__V_57_57);
              }
#line 485 "make.m"
              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_57_57) == 0);
#line 485 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 485 "make.m"
                {
#line 486 "make.m"
                  make__V_20_20 = (MR_String) "lib";
#line 486 "make.m"
                  {
#line 486 "make.m"
                    (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_20_20, &make__ModuleNameStr1_12, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                  }
#line 485 "make.m"
                }
#line 490 "make.m"
              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 488 "make.m"
                {
#line 488 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_12;
#line 489 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[1]);
#line 488 "make.m"
                  {
#line 488 "make.m"
                    make__classify_target_2_4_p_0_1(&make__env);
                  }
#line 488 "make.m"
                }
#line 490 "make.m"
              else
#line 497 "make.m"
                {
#line 497 "make.m"
                  MR_String make__ModuleNameStr1_54;
#line 492 "make.m"
                  MR_String make__V_23_23;
#line 492 "make.m"
                  MR_String make__V_58_58;

#line 491 "make.m"
                  {
#line 491 "make.m"
                    libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 571, &make__V_58_58);
                  }
#line 491 "make.m"
                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_58_58) == 0);
#line 492 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 492 "make.m"
                    {
#line 493 "make.m"
                      make__V_23_23 = (MR_String) "lib";
#line 493 "make.m"
                      {
#line 493 "make.m"
                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_23_23, &make__ModuleNameStr1_54, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                      }
#line 492 "make.m"
                    }
#line 497 "make.m"
                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 495 "make.m"
                    {
#line 495 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_54;
#line 496 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[2]);
#line 495 "make.m"
                      {
#line 495 "make.m"
                        make__classify_target_2_4_p_0_1(&make__env);
                      }
#line 495 "make.m"
                    }
#line 497 "make.m"
                  else
#line 504 "make.m"
                    {
#line 498 "make.m"
                      MR_String make__V_59_59;

#line 498 "make.m"
                      {
#line 498 "make.m"
                        libs__globals__lookup_string_option_3_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, (MR_Integer) 573, &make__V_59_59);
                      }
#line 498 "make.m"
                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__V_59_59) == 0);
#line 504 "make.m"
                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 501 "make.m"
                        {
#line 501 "make.m"
                          MR_Word make__ExecutableType_13;
#line 501 "make.m"
                          MR_Word make__CompilationTarget_64;

#line 501 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 579 "make.m"
                          {
#line 579 "make.m"
                            libs__globals__get_target_2_p_0((make__env).make__classify_target_2_4_p_0_env_0__Globals_5, &make__CompilationTarget_64);
                          }
#line 586 "make.m"
                          if ((make__CompilationTarget_64 == (MR_Integer) 2))
#line 588 "make.m"
                            make__ExecutableType_13 = (MR_Integer) 3;
#line 586 "make.m"
                          else
#line 586 "make.m"
                            if ((make__CompilationTarget_64 == (MR_Integer) 5))
#line 594 "make.m"
                              make__ExecutableType_13 = (MR_Integer) 7;
#line 586 "make.m"
                            else
#line 586 "make.m"
                              if ((make__CompilationTarget_64 == (MR_Integer) 3))
#line 591 "make.m"
                                make__ExecutableType_13 = (MR_Integer) 5;
#line 586 "make.m"
                              else
#line 585 "make.m"
                                make__ExecutableType_13 = (MR_Integer) 0;
#line 503 "make.m"
                          {
#line 503 "make.m"
                            MR_Word base;
#line 503 "make.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "make.m"
                            (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = base;
#line 503 "make.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__ExecutableType_13));
#line 503 "make.m"
                          }
#line 501 "make.m"
                          {
#line 501 "make.m"
                            make__classify_target_2_4_p_0_1(&make__env);
                          }
#line 501 "make.m"
                        }
#line 504 "make.m"
                      else
#line 510 "make.m"
                        {
#line 510 "make.m"
                          MR_String make__ModuleNameStr1_50;
#line 505 "make.m"
                          MR_String make__V_26_26;

#line 505 "make.m"
                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".beams") == 0);
#line 505 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 505 "make.m"
                            {
#line 506 "make.m"
                              make__V_26_26 = (MR_String) "lib";
#line 506 "make.m"
                              {
#line 506 "make.m"
                                (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_26_26, &make__ModuleNameStr1_50, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                              }
#line 505 "make.m"
                            }
#line 510 "make.m"
                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 508 "make.m"
                            {
#line 508 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_50;
#line 509 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(1), &make_scalar_common_8[3]);
#line 508 "make.m"
                              {
#line 508 "make.m"
                                make__classify_target_2_4_p_0_1(&make__env);
                              }
#line 508 "make.m"
                            }
#line 510 "make.m"
                          else
#line 530 "make.m"
                            {
#line 530 "make.m"
                              (make__env).make__classify_target_2_4_p_0_env_0__cond_1 = MR_FALSE;
#line 512 "make.m"
                              {
#line 512 "make.m"
                                MR_String make__Rest_14;

#line 512 "make.m"
                                {
#line 512 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) ".all_", &make__Rest_14, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7);
                                }
#line 512 "make.m"
                                if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 512 "make.m"
                                  {
#line 513 "make.m"
                                    (make__env).make__classify_target_2_4_p_0_env_0__V_30_30 = (MR_String) "s";
#line 513 "make.m"
                                    {
#line 513 "make.m"
                                      mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__DotlessSuffix1_15, &(make__env).make__classify_target_2_4_p_0_env_0__V_60_60, make__Rest_14, make__classify_target_2_4_p_0_6, &make__env);
                                    }
#line 512 "make.m"
                                  }
#line 512 "make.m"
                              }
#line 517 "make.m"
                              {
#line 517 "make.m"
                                mercury__string__append_3_p_3(&(make__env).make__classify_target_2_4_p_0_env_0__Suffix1_16, &(make__env).make__classify_target_2_4_p_0_env_0__V_61_61, (make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, make__classify_target_2_4_p_0_7, &make__env);
                              }
#line 530 "make.m"
                              if (!((make__env).make__classify_target_2_4_p_0_env_0__cond_1))
#line 535 "make.m"
                                {
#line 531 "make.m"
                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".check") == 0);
#line 535 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 533 "make.m"
                                    {
#line 533 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 534 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[5]);
#line 533 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 533 "make.m"
                                    }
#line 535 "make.m"
                                  else
#line 540 "make.m"
                                    {
#line 536 "make.m"
                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".analyse") == 0);
#line 540 "make.m"
                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 538 "make.m"
                                        {
#line 538 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 539 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[6]);
#line 538 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 538 "make.m"
                                        }
#line 540 "make.m"
                                      else
#line 545 "make.m"
                                        {
#line 541 "make.m"
                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".clean") == 0);
#line 545 "make.m"
                                          if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 543 "make.m"
                                            {
#line 543 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 544 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[7]);
#line 543 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 543 "make.m"
                                            }
#line 545 "make.m"
                                          else
#line 550 "make.m"
                                            {
#line 546 "make.m"
                                              (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".realclean") == 0);
#line 550 "make.m"
                                              if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 548 "make.m"
                                                {
#line 548 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 549 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[8]);
#line 548 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 548 "make.m"
                                                }
#line 550 "make.m"
                                              else
#line 556 "make.m"
                                                {
#line 556 "make.m"
                                                  MR_String make__ModuleNameStr1_42;
#line 551 "make.m"
                                                  MR_String make__V_39_39;

#line 551 "make.m"
                                                  (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".install") == 0);
#line 551 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 551 "make.m"
                                                    {
#line 552 "make.m"
                                                      make__V_39_39 = (MR_String) "lib";
#line 552 "make.m"
                                                      {
#line 552 "make.m"
                                                        (make__env).make__classify_target_2_4_p_0_env_0__succeeded = mercury__string__append_3_p_1(make__V_39_39, &make__ModuleNameStr1_42, (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6);
                                                      }
#line 551 "make.m"
                                                    }
#line 556 "make.m"
                                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 554 "make.m"
                                                    {
#line 554 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = make__ModuleNameStr1_42;
#line 555 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[9]);
#line 554 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 554 "make.m"
                                                    }
#line 556 "make.m"
                                                  else
#line 561 "make.m"
                                                    {
#line 561 "make.m"
                                                      MR_Word make__V_41_41;

#line 557 "make.m"
                                                      (make__env).make__classify_target_2_4_p_0_env_0__succeeded = (strcmp((make__env).make__classify_target_2_4_p_0_env_0__Suffix_7, (MR_String) ".doc") == 0);
#line 561 "make.m"
                                                      if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 561 "make.m"
                                                        {
#line 559 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr_11 = (make__env).make__classify_target_2_4_p_0_env_0__ModuleNameStr0_6;
#line 560 "make.m"
                                                          make__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 560 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__TargetType_9 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[10]);
#line 560 "make.m"
                                                          (make__env).make__classify_target_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 561 "make.m"
                                                        }
#line 561 "make.m"
                                                    }
#line 556 "make.m"
                                                }
#line 550 "make.m"
                                            }
#line 545 "make.m"
                                        }
#line 540 "make.m"
                                    }
#line 535 "make.m"
                                  if ((make__env).make__classify_target_2_4_p_0_env_0__succeeded)
#line 535 "make.m"
                                    {
#line 535 "make.m"
                                      make__classify_target_2_4_p_0_1(&make__env);
                                    }
#line 535 "make.m"
                                }
#line 530 "make.m"
                            }
#line 510 "make.m"
                        }
#line 504 "make.m"
                    }
#line 497 "make.m"
                }
#line 490 "make.m"
            }
#line 484 "make.m"
        }
#line 469 "make.m"
    }
#line 466 "make.m"
  }
#line 466 "make.m"
}

#line 450 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_1(
#line 450 "make.m"
  void * make__env_ptr_arg)
#line 450 "make.m"
{
#line 450 "make.m"
  {
#line 450 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s * make__env_ptr = (struct make__classify_target_3_p_0_2_env_0_s *) make__env_ptr_arg;

#line 450 "make.m"
    *((make__env_ptr)->make__classify_target_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4));
#line 450 "make.m"
    {
#line 450 "make.m"
      ((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont)((make__env_ptr)->make__classify_target_3_p_0_2_env_0__cont_env_ptr);
#line 450 "make.m"
      return;
    }
#line 450 "make.m"
  }
#line 450 "make.m"
}

#line 450 "make.m"
static void MR_CALL 
make__classify_target_3_p_0_2(
#line 450 "make.m"
  MR_Box make__closure_arg,
#line 450 "make.m"
  MR_Box * make__wrapper_arg_1,
#line 450 "make.m"
  MR_Cont make__cont,
#line 450 "make.m"
  void * make__cont_env_ptr)
#line 450 "make.m"
{
#line 450 "make.m"
  {
#line 450 "make.m"
    struct make__classify_target_3_p_0_2_env_0_s make__env;

#line 450 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__wrapper_arg_1 = make__wrapper_arg_1;
#line 450 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont = make__cont;
#line 450 "make.m"
    (make__env).make__classify_target_3_p_0_2_env_0__cont_env_ptr = make__cont_env_ptr;
#line 450 "make.m"
    {
#line 450 "make.m"
      MR_Box make__closure = make__closure_arg;

#line 450 "make.m"
      {
#line 450 "make.m"
        make__classify_target_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 5))), &(make__env).make__classify_target_3_p_0_2_env_0__conv0_HeadVar__4_4, make__classify_target_3_p_0_1, &make__env);
      }
#line 450 "make.m"
    }
#line 450 "make.m"
  }
#line 450 "make.m"
}

#line 442 "make.m"
void MR_CALL 
make__classify_target_3_p_0(
#line 442 "make.m"
  MR_Word make__Globals_4,
#line 442 "make.m"
  MR_String make__FileName_5,
#line 442 "make.m"
  MR_Word * make__HeadVar__3_3)
#line 442 "make.m"
{
#line 445 "make.m"
  {
#line 445 "make.m"
    MR_bool make__succeeded;
#line 445 "make.m"
    MR_Word make__ModuleName_6;
#line 445 "make.m"
    MR_Word make__TargetType_7;
#line 455 "make.m"
    MR_Word make__TargetFile_13;
#line 447 "make.m"
    MR_Word make__TypeInfo_21_21;
#line 447 "make.m"
    MR_Integer make__NameLength_8;
#line 447 "make.m"
    MR_Integer make__DotLocn_9;
#line 447 "make.m"
    MR_String make__ModuleNameStr0_10;
#line 447 "make.m"
    MR_String make__Suffix_11;
#line 447 "make.m"
    MR_Word make__TargetFiles_12;
#line 447 "make.m"
    MR_Word make__V_16_16;
#line 447 "make.m"
    MR_Word make__V_17_17;

#line 447 "make.m"
    {
#line 447 "make.m"
      mercury__string__length_2_p_0(make__FileName_5, &make__NameLength_8);
    }
#line 448 "make.m"
    {
#line 448 "make.m"
      make__succeeded = make__search_backwards_for_dot_3_p_0(make__FileName_5, make__NameLength_8, &make__DotLocn_9);
    }
#line 447 "make.m"
    if (make__succeeded)
#line 447 "make.m"
      {
#line 449 "make.m"
        {
#line 449 "make.m"
          mercury__string__split_4_p_0(make__FileName_5, make__DotLocn_9, &make__ModuleNameStr0_10, &make__Suffix_11);
        }
#line 11069 "make.c"
        make__TypeInfo_21_21 = (MR_Word) &make_scalar_common_1[0];
#line 450 "make.m"
        {
#line 450 "make.m"
          make__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 450 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 0) = ((MR_Box) (&make_scalar_common_7[0]));
#line 450 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 1) = ((MR_Box) (make__classify_target_3_p_0_2));
#line 450 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 450 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 3) = ((MR_Box) (make__Globals_4));
#line 450 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 4) = ((MR_Box) (make__ModuleNameStr0_10));
#line 450 "make.m"
          MR_hl_field(MR_mktag(0), make__V_16_16, 5) = ((MR_Box) (make__Suffix_11));
#line 450 "make.m"
        }
#line 450 "make.m"
        {
#line 450 "make.m"
          mercury__solutions__solutions_2_p_1(make__TypeInfo_21_21, make__V_16_16, &make__TargetFiles_12);
        }
#line 452 "make.m"
        make__succeeded = ((MR_tag((MR_Word) make__TargetFiles_12)) == (MR_mktag((MR_Integer) 1)));
#line 452 "make.m"
        if (make__succeeded)
#line 452 "make.m"
          {
#line 452 "make.m"
            make__TargetFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 0)));
#line 452 "make.m"
            make__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetFiles_12, (MR_Integer) 1)));
#line 452 "make.m"
            make__succeeded = (make__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "make.m"
          }
#line 447 "make.m"
      }
#line 455 "make.m"
    if (make__succeeded)
#line 454 "make.m"
      {
#line 454 "make.m"
        make__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 0)));
#line 454 "make.m"
        make__TargetType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetFile_13, (MR_Integer) 1)));
#line 454 "make.m"
      }
#line 455 "make.m"
    else
#line 460 "make.m"
      {
#line 460 "make.m"
        MR_String make__ModuleNameStr_14;

#line 456 "make.m"
        {
#line 456 "make.m"
          make__succeeded = mercury__string__append_3_p_1((MR_String) "lib", &make__ModuleNameStr_14, make__FileName_5);
        }
#line 460 "make.m"
        if (make__succeeded)
#line 458 "make.m"
          {
#line 458 "make.m"
            make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(2), &make_scalar_common_8[0]);
#line 459 "make.m"
            {
#line 459 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__ModuleNameStr_14, &make__ModuleName_6);
            }
#line 458 "make.m"
          }
#line 460 "make.m"
        else
#line 461 "make.m"
          {
#line 461 "make.m"
            MR_Word make__ExecutableType_15;
#line 461 "make.m"
            MR_Word make__CompilationTarget_24;

#line 579 "make.m"
            {
#line 579 "make.m"
              libs__globals__get_target_2_p_0(make__Globals_4, &make__CompilationTarget_24);
            }
#line 586 "make.m"
            if ((make__CompilationTarget_24 == (MR_Integer) 2))
#line 588 "make.m"
              make__ExecutableType_15 = (MR_Integer) 3;
#line 586 "make.m"
            else
#line 586 "make.m"
              if ((make__CompilationTarget_24 == (MR_Integer) 5))
#line 594 "make.m"
                make__ExecutableType_15 = (MR_Integer) 7;
#line 586 "make.m"
              else
#line 586 "make.m"
                if ((make__CompilationTarget_24 == (MR_Integer) 3))
#line 591 "make.m"
                  make__ExecutableType_15 = (MR_Integer) 5;
#line 586 "make.m"
                else
#line 585 "make.m"
                  make__ExecutableType_15 = (MR_Integer) 0;
#line 462 "make.m"
            {
#line 462 "make.m"
              make__TargetType_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 462 "make.m"
              MR_hl_field(MR_mktag(1), make__TargetType_7, 0) = ((MR_Box) (make__ExecutableType_15));
#line 462 "make.m"
            }
#line 463 "make.m"
            {
#line 463 "make.m"
              parse_tree__file_names__file_name_to_module_name_2_p_0(make__FileName_5, &make__ModuleName_6);
            }
#line 461 "make.m"
          }
#line 460 "make.m"
      }
#line 445 "make.m"
    {
#line 445 "make.m"
      MR_Word base;
#line 445 "make.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "make.m"
      *make__HeadVar__3_3 = base;
#line 445 "make.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__ModuleName_6));
#line 445 "make.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__TargetType_7));
#line 445 "make.m"
    }
#line 445 "make.m"
  }
#line 442 "make.m"
}

#line 399 "make.m"
void MR_CALL 
make__make_target_7_p_0(
#line 399 "make.m"
  MR_Word make__Globals_8,
#line 399 "make.m"
  MR_Word make__Target_9,
#line 399 "make.m"
  MR_Word * make__Success_10,
#line 399 "make.m"
  MR_Word make__STATE_VARIABLE_Info_0_22,
#line 399 "make.m"
  MR_Word * make__STATE_VARIABLE_Info_23)
#line 399 "make.m"
{
#line 402 "make.m"
  {
#line 402 "make.m"
    MR_bool make__succeeded;
#line 402 "make.m"
    MR_Word make__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 0)));
#line 402 "make.m"
    MR_Word make__TargetType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__Target_9, (MR_Integer) 1)));
#line 402 "make.m"
    MR_Word make__TrackFlags_15;
#line 402 "make.m"
    MR_Word make__TrackFlagsSuccess_16;
#line 402 "make.m"
    MR_Word make__STATE_VARIABLE_Info_27_27;

#line 404 "make.m"
    {
#line 404 "make.m"
      libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 621, &make__TrackFlags_15);
    }
#line 408 "make.m"
    if ((make__TrackFlags_15 == (MR_Integer) 0))
#line 406 "make.m"
      {
#line 407 "make.m"
        make__TrackFlagsSuccess_16 = (MR_Integer) 1;
#line 407 "make.m"
        make__STATE_VARIABLE_Info_27_27 = make__STATE_VARIABLE_Info_0_22;
#line 406 "make.m"
      }
#line 408 "make.m"
    else
#line 410 "make.m"
      {
#line 410 "make.m"
        make__make_track_flags_files_7_p_0(make__Globals_8, make__ModuleName_13, &make__TrackFlagsSuccess_16, make__STATE_VARIABLE_Info_0_22, &make__STATE_VARIABLE_Info_27_27);
      }
#line 430 "make.m"
    if ((make__TrackFlagsSuccess_16 == (MR_Integer) 0))
#line 431 "make.m"
      {
#line 432 "make.m"
        *make__Success_10 = (MR_Integer) 0;
#line 432 "make.m"
        *make__STATE_VARIABLE_Info_23 = make__STATE_VARIABLE_Info_27_27;
#line 431 "make.m"
      }
#line 430 "make.m"
    else
#line 420 "make.m"
      if (((MR_tag((MR_Word) make__TargetType_14)) == (MR_mktag((MR_Integer) 1))))
#line 421 "make.m"
        {
#line 421 "make.m"
          MR_Word make__ProgramTargetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__TargetType_14, (MR_Integer) 0)));
#line 421 "make.m"
          MR_Word make__LinkedTargetFile_20;

#line 422 "make.m"
          {
#line 422 "make.m"
            make__LinkedTargetFile_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "make.m"
            MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 0) = ((MR_Box) (make__ModuleName_13));
#line 422 "make.m"
            MR_hl_field(MR_mktag(0), make__LinkedTargetFile_20, 1) = ((MR_Box) (make__ProgramTargetType_19));
#line 422 "make.m"
          }
#line 424 "make.m"
          {
#line 424 "make.m"
            make__program_target__make_linked_target_7_p_0(make__Globals_8, make__LinkedTargetFile_20, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 424 "make.m"
            return;
          }
#line 421 "make.m"
        }
#line 420 "make.m"
      else
#line 420 "make.m"
        if (((MR_tag((MR_Word) make__TargetType_14)) == (MR_mktag((MR_Integer) 2))))
#line 426 "make.m"
          {
#line 426 "make.m"
            MR_Word make__MiscTargetType_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__TargetType_14, (MR_Integer) 0)));
#line 426 "make.m"
            MR_Word make__V_29_29;

#line 427 "make.m"
            {
#line 427 "make.m"
              make__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 427 "make.m"
              MR_hl_field(MR_mktag(0), make__V_29_29, 0) = ((MR_Box) (make__ModuleName_13));
#line 427 "make.m"
              MR_hl_field(MR_mktag(0), make__V_29_29, 1) = ((MR_Box) (make__MiscTargetType_21));
#line 427 "make.m"
            }
#line 427 "make.m"
            {
#line 427 "make.m"
              make__program_target__make_misc_target_7_p_0(make__Globals_8, make__V_29_29, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 427 "make.m"
              return;
            }
#line 426 "make.m"
          }
#line 420 "make.m"
        else
#line 416 "make.m"
          {
#line 416 "make.m"
            MR_Word make__ModuleTargetType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__TargetType_14, (MR_Integer) 0)));
#line 416 "make.m"
            MR_Word make__TargetFile_18;
#line 416 "make.m"
            MR_Word make__V_34_34;

#line 417 "make.m"
            {
#line 417 "make.m"
              make__TargetFile_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "make.m"
              MR_hl_field(MR_mktag(0), make__TargetFile_18, 0) = ((MR_Box) (make__ModuleName_13));
#line 417 "make.m"
              MR_hl_field(MR_mktag(0), make__TargetFile_18, 1) = ((MR_Box) (make__ModuleTargetType_17));
#line 417 "make.m"
            }
#line 418 "make.m"
            {
#line 418 "make.m"
              make__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 418 "make.m"
              MR_hl_field(MR_mktag(0), make__V_34_34, 0) = ((MR_Box) (make__TargetFile_18));
#line 418 "make.m"
            }
#line 418 "make.m"
            {
#line 418 "make.m"
              make__module_target__make_module_target_7_p_0(make__Globals_8, make__V_34_34, make__Success_10, make__STATE_VARIABLE_Info_27_27, make__STATE_VARIABLE_Info_23);
#line 418 "make.m"
              return;
            }
#line 416 "make.m"
          }
#line 402 "make.m"
  }
#line 399 "make.m"
}

#line 46 "make.m"
MR_String MR_CALL 
make__make_module_dep_file_extension_0_f_0(void)
#line 46 "make.m"
{
#line 284 "make.m"
  {
#line 284 "make.m"
    MR_bool make__succeeded;

#line 284 "make.m"
    return (MR_String) ".module_dep";
#line 284 "make.m"
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
#line 282 "make.m"
  {
#line 282 "make.m"
    MR_bool make__succeeded;

#line 282 "make.m"
    {
#line 282 "make.m"
      make__module_dep_file__write_module_dep_file_4_p_0(make__Globals_5, make__Imports_6);
#line 282 "make.m"
      return;
    }
#line 282 "make.m"
  }
#line 43 "make.m"
}

#line 326 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_8(
#line 326 "make.m"
  MR_Box make__closure_arg,
#line 326 "make.m"
  MR_Box make__wrapper_arg_1,
#line 326 "make.m"
  MR_Box make__wrapper_arg_2,
#line 326 "make.m"
  MR_Box * make__wrapper_arg_3)
#line 326 "make.m"
{
#line 326 "make.m"
  {
#line 326 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 326 "make.m"
    {
#line 326 "make.m"
      make__IntroducedFrom__pred__make_process_args__326__1_3_p_0(((MR_String) make__wrapper_arg_1));
#line 326 "make.m"
      return;
    }
#line 326 "make.m"
  }
#line 326 "make.m"
}

#line 388 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_7(
#line 388 "make.m"
  MR_Box make__closure_arg,
#line 388 "make.m"
  MR_Box make__wrapper_arg_1,
#line 388 "make.m"
  MR_Box make__wrapper_arg_2,
#line 388 "make.m"
  MR_Box * make__wrapper_arg_3,
#line 388 "make.m"
  MR_Box make__wrapper_arg_4,
#line 388 "make.m"
  MR_Box * make__wrapper_arg_5,
#line 388 "make.m"
  MR_Box make__wrapper_arg_6,
#line 388 "make.m"
  MR_Box * make__wrapper_arg_7)
#line 388 "make.m"
{
#line 388 "make.m"
  {
#line 388 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 388 "make.m"
    MR_Word make__conv5_Success_10;
#line 388 "make.m"
    MR_Word make__conv4_STATE_VARIABLE_Info_23;

#line 388 "make.m"
    {
#line 388 "make.m"
      make__make_target_7_p_0(((MR_Word) make__wrapper_arg_1), ((MR_Word) make__wrapper_arg_2), &make__conv5_Success_10, ((MR_Word) make__wrapper_arg_4), &make__conv4_STATE_VARIABLE_Info_23);
    }
#line 388 "make.m"
    *make__wrapper_arg_3 = ((MR_Box) (make__conv5_Success_10));
#line 388 "make.m"
    *make__wrapper_arg_5 = ((MR_Box) (make__conv4_STATE_VARIABLE_Info_23));
#line 388 "make.m"
  }
#line 388 "make.m"
}

#line 356 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_6(
#line 356 "make.m"
  MR_Box make__closure_arg,
#line 356 "make.m"
  MR_Box make__wrapper_arg_1,
#line 356 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 356 "make.m"
{
#line 356 "make.m"
  {
#line 356 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 356 "make.m"
    MR_Word make__conv3_HeadVar__3_3;

#line 356 "make.m"
    {
#line 356 "make.m"
      make__classify_target_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__closure, (MR_Integer) 3))), ((MR_String) make__wrapper_arg_1), &make__conv3_HeadVar__3_3);
    }
#line 356 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv3_HeadVar__3_3));
#line 356 "make.m"
  }
#line 356 "make.m"
}

#line 350 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_5(
#line 350 "make.m"
  MR_Box make__closure_arg,
#line 350 "make.m"
  MR_Box make__wrapper_arg_1)
#line 350 "make.m"
{
#line 350 "make.m"
  {
#line 350 "make.m"
    MR_bool make__succeeded;
#line 350 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 350 "make.m"
    {
#line 350 "make.m"
      return make__succeeded = make__IntroducedFrom__pred__make_process_args__352__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 350 "make.m"
    return make__succeeded;
#line 350 "make.m"
  }
#line 350 "make.m"
}

#line 345 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_4(
#line 345 "make.m"
  MR_Box make__closure_arg,
#line 345 "make.m"
  MR_Box make__wrapper_arg_1,
#line 345 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 345 "make.m"
{
#line 345 "make.m"
  {
#line 345 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 345 "make.m"
    MR_Integer make__conv2_HeadVar__2_2;

#line 345 "make.m"
    {
#line 345 "make.m"
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv2_HeadVar__2_2);
    }
#line 345 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv2_HeadVar__2_2));
#line 345 "make.m"
  }
#line 345 "make.m"
}

#line 343 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_3(
#line 343 "make.m"
  MR_Box make__closure_arg,
#line 343 "make.m"
  MR_Box make__wrapper_arg_1,
#line 343 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 343 "make.m"
{
#line 343 "make.m"
  {
#line 343 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 343 "make.m"
    MR_Integer make__conv1_HeadVar__2_2;

#line 343 "make.m"
    {
#line 343 "make.m"
      make__util__dependency_file_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv1_HeadVar__2_2);
    }
#line 343 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv1_HeadVar__2_2));
#line 343 "make.m"
  }
#line 343 "make.m"
}

#line 340 "make.m"
static void MR_CALL 
make__make_process_args_7_p_0_2(
#line 340 "make.m"
  MR_Box make__closure_arg,
#line 340 "make.m"
  MR_Box make__wrapper_arg_1,
#line 340 "make.m"
  MR_Box * make__wrapper_arg_2)
#line 340 "make.m"
{
#line 340 "make.m"
  {
#line 340 "make.m"
    MR_Box make__closure = make__closure_arg;
#line 340 "make.m"
    MR_Integer make__conv0_HeadVar__2_2;

#line 340 "make.m"
    {
#line 340 "make.m"
      make__util__module_name_hash_2_p_0(((MR_Word) make__wrapper_arg_1), &make__conv0_HeadVar__2_2);
    }
#line 340 "make.m"
    *make__wrapper_arg_2 = ((MR_Box) (make__conv0_HeadVar__2_2));
#line 340 "make.m"
  }
#line 340 "make.m"
}

#line 316 "make.m"
static MR_bool MR_CALL 
make__make_process_args_7_p_0_1(
#line 316 "make.m"
  MR_Box make__closure_arg,
#line 316 "make.m"
  MR_Box make__wrapper_arg_1)
#line 316 "make.m"
{
#line 316 "make.m"
  {
#line 316 "make.m"
    MR_bool make__succeeded;
#line 316 "make.m"
    MR_Box make__closure = make__closure_arg;

#line 316 "make.m"
    {
#line 316 "make.m"
      return make__succeeded = make__IntroducedFrom__pred__make_process_args__316__1_1_p_0(((MR_String) make__wrapper_arg_1));
    }
#line 316 "make.m"
    return make__succeeded;
#line 316 "make.m"
  }
#line 316 "make.m"
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
#line 287 "make.m"
  {
#line 287 "make.m"
    MR_bool make__succeeded;
#line 287 "make.m"
    MR_Word make__TypeCtorInfo_94_94;
#line 287 "make.m"
    MR_Word make__Targets_15;
#line 287 "make.m"
    MR_Word make__Continue0_18;
#line 287 "make.m"
    MR_Word make__AbsTargets_22;

#line 307 "make.m"
    if ((make__Targets0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "make.m"
      {
#line 289 "make.m"
        MR_Word make__MaybeMAIN_TARGET_14;

#line 290 "make.m"
        {
#line 290 "make.m"
          make__options_file__lookup_main_target_5_p_0(make__Globals_8, make__Variables_10, &make__MaybeMAIN_TARGET_14);
        }
#line 302 "make.m"
        if ((make__MaybeMAIN_TARGET_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "make.m"
          {
#line 304 "make.m"
            make__Targets_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 305 "make.m"
            make__Continue0_18 = (MR_Integer) 0;
#line 303 "make.m"
          }
#line 302 "make.m"
        else
#line 292 "make.m"
          {
#line 292 "make.m"
            make__Targets_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__MaybeMAIN_TARGET_14, (MR_Integer) 0)));
#line 296 "make.m"
            if ((make__Targets_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "make.m"
              {
#line 298 "make.m"
                make__Continue0_18 = (MR_Integer) 0;
#line 299 "make.m"
                {
#line 299 "make.m"
                  mercury__io__write_string_3_p_0((MR_String) "** Error: no targets specified and \140MAIN_TARGET\' not defined.\n");
                }
#line 297 "make.m"
              }
#line 296 "make.m"
            else
#line 295 "make.m"
              make__Continue0_18 = (MR_Integer) 1;
#line 292 "make.m"
          }
#line 289 "make.m"
      }
#line 307 "make.m"
    else
#line 308 "make.m"
      {
#line 309 "make.m"
        make__Continue0_18 = (MR_Integer) 1;
#line 310 "make.m"
        make__Targets_15 = make__Targets0_12;
#line 308 "make.m"
      }
#line 11760 "make.c"
    make__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 316 "make.m"
    {
#line 316 "make.m"
      mercury__list__filter_3_p_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[10], make__Targets_15, &make__AbsTargets_22);
    }
#line 11767 "make.c"
    if ((make__AbsTargets_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "make.m"
      if ((make__Continue0_18 == (MR_Integer) 0))
#line 333 "make.m"
        {
#line 334 "make.m"
          {
#line 334 "make.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 334 "make.m"
            return;
          }
#line 333 "make.m"
        }
#line 335 "make.m"
      else
#line 336 "make.m"
        {
#line 336 "make.m"
          MR_Word make__TypeCtorInfo_96_96;
#line 336 "make.m"
          MR_Word make__TypeCtorInfo_100_100;
#line 336 "make.m"
          MR_Word make__TypeInfo_109_109;
#line 336 "make.m"
          MR_Word make__KeepGoing_27;
#line 336 "make.m"
          MR_Word make__ModuleIndexMap_28;
#line 336 "make.m"
          MR_Word make__DepIndexMap_29;
#line 336 "make.m"
          MR_Word make__DepStatusMap_30;
#line 336 "make.m"
          MR_Word make__NonDependTargets_31;
#line 336 "make.m"
          MR_Word make__ClassifiedTargets_32;
#line 336 "make.m"
          MR_Integer make__AnalysisRepeat_34;
#line 336 "make.m"
          MR_Word make__MakeInfo0_35;
#line 336 "make.m"
          MR_Word make__Success_36;
#line 336 "make.m"
          MR_Word make__V_58_58;
#line 336 "make.m"
          MR_Box make__V_60_60;
#line 336 "make.m"
          MR_Word make__V_62_62;
#line 336 "make.m"
          MR_Box make__V_64_64;
#line 336 "make.m"
          MR_Word make__V_70_70;
#line 336 "make.m"
          MR_Word make__V_72_72;
#line 336 "make.m"
          MR_Word make__V_73_73;
#line 336 "make.m"
          MR_Word make__V_74_74;
#line 336 "make.m"
          MR_Word make__V_75_75;
#line 336 "make.m"
          MR_Word make__V_76_76;
#line 336 "make.m"
          MR_Word make__V_77_77;
#line 336 "make.m"
          MR_Word make__V_78_78;
#line 336 "make.m"
          MR_Word make__V_79_79;
#line 336 "make.m"
          MR_Word make__V_81_81;
#line 388 "make.m"
          MR_Word make___MakeInfo_37;
#line 388 "make.m"
          MR_Box make__conv7__MakeInfo_37;
#line 388 "make.m"
          MR_Box make__conv6_STATE_VARIABLE_IO_84_84;

#line 337 "make.m"
          {
#line 337 "make.m"
            libs__globals__lookup_bool_option_3_p_0(make__Globals_8, (MR_Integer) 618, &make__KeepGoing_27);
          }
#line 11850 "make.c"
          make__TypeCtorInfo_96_96 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 339 "make.m"
          {
#line 339 "make.m"
            make__V_58_58 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make_scalar_common_1[11]);
          }
#line 339 "make.m"
          {
#line 339 "make.m"
            make__V_60_60 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_96_96);
          }
#line 339 "make.m"
          {
#line 339 "make.m"
            make__ModuleIndexMap_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 339 "make.m"
            MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 0) = ((MR_Box) (make__V_58_58));
#line 339 "make.m"
            MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 1) = ((MR_Box) (make__V_60_60));
#line 339 "make.m"
            MR_hl_field(MR_mktag(0), make__ModuleIndexMap_28, 2) = ((MR_Box) ((MR_Integer) 0));
#line 339 "make.m"
          }
#line 11874 "make.c"
          make__TypeCtorInfo_100_100 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
#line 342 "make.m"
          {
#line 342 "make.m"
            make__V_62_62 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, (MR_Word) &make_scalar_common_1[12]);
          }
#line 342 "make.m"
          {
#line 342 "make.m"
            make__V_64_64 = mercury__version_array__empty_0_f_0(make__TypeCtorInfo_100_100);
          }
#line 342 "make.m"
          {
#line 342 "make.m"
            make__DepIndexMap_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 342 "make.m"
            MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 0) = ((MR_Box) (make__V_62_62));
#line 342 "make.m"
            MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 1) = ((MR_Box) (make__V_64_64));
#line 342 "make.m"
            MR_hl_field(MR_mktag(0), make__DepIndexMap_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 342 "make.m"
          }
#line 345 "make.m"
          {
#line 345 "make.m"
            make__DepStatusMap_30 = mercury__version_hash_table__init_default_1_f_0(make__TypeCtorInfo_100_100, (MR_Word) &make__make__type_ctor_info_dependency_status_0, (MR_Word) &make_scalar_common_1[13]);
          }
#line 350 "make.m"
          {
#line 350 "make.m"
            make__NonDependTargets_31 = mercury__list__filter_2_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[14], make__Targets_15);
          }
#line 356 "make.m"
          {
#line 356 "make.m"
            make__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 356 "make.m"
            MR_hl_field(MR_mktag(0), make__V_70_70, 0) = ((MR_Box) (&make_scalar_common_5[0]));
#line 356 "make.m"
            MR_hl_field(MR_mktag(0), make__V_70_70, 1) = ((MR_Box) (make__make_process_args_7_p_0_6));
#line 356 "make.m"
            MR_hl_field(MR_mktag(0), make__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 356 "make.m"
            MR_hl_field(MR_mktag(0), make__V_70_70, 3) = ((MR_Box) (make__Globals_8));
#line 356 "make.m"
          }
#line 11922 "make.c"
          make__TypeInfo_109_109 = (MR_Word) &make_scalar_common_1[0];
#line 356 "make.m"
          {
#line 356 "make.m"
            mercury__list__map_3_p_0(make__TypeCtorInfo_94_94, make__TypeInfo_109_109, make__V_70_70, make__NonDependTargets_31, &make__ClassifiedTargets_32);
          }
#line 360 "make.m"
          {
#line 360 "make.m"
            libs__globals__lookup_int_option_3_p_0(make__Globals_8, (MR_Integer) 331, &make__AnalysisRepeat_34);
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_72_72 = mercury__map__init_0_f_0(make__TypeCtorInfo_96_96, (MR_Word) &make_scalar_common_2[0]);
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_73_73 = mercury__map__init_0_f_0(make__TypeCtorInfo_94_94, (MR_Word) &make_scalar_common_1[1]);
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_74_74 = mercury__map__init_0_f_0((MR_Word) &make_scalar_common_1[2], make__TypeCtorInfo_94_94);
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_75_75 = make__dependencies__init_cached_direct_imports_0_f_0();
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_76_76 = make__dependencies__init_cached_direct_imports_0_f_0();
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_77_77 = make__dependencies__init_cached_transitive_dependencies_0_f_0();
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_78_78 = make__dependencies__init_cached_foreign_imports_0_f_0();
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_79_79 = mercury__set__init_0_f_0(make__TypeCtorInfo_96_96);
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__V_81_81 = mercury__set__list_to_set_1_f_0(make__TypeInfo_109_109, make__ClassifiedTargets_32);
          }
#line 362 "make.m"
          {
#line 362 "make.m"
            make__MakeInfo0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 0) = ((MR_Box) (make__V_72_72));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 1) = ((MR_Box) (make__V_73_73));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 2) = ((MR_Box) (make__V_74_74));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 3) = ((MR_Box) (make__DetectedGradeFlags_9));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 4) = ((MR_Box) (make__OptionArgs_11));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 5) = ((MR_Box) (make__Variables_10));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 6) = ((MR_Box) (make__ModuleIndexMap_28));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 7) = ((MR_Box) (make__DepIndexMap_29));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 8) = ((MR_Box) (make__DepStatusMap_30));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 9) = ((MR_Box) (make__V_75_75));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 10) = ((MR_Box) (make__V_76_76));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 11) = ((MR_Box) (make__V_77_77));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 12) = ((MR_Box) (make__V_78_78));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 13) = ((MR_Box) ((MR_Integer) 0));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 14) = ((MR_Box) (make__KeepGoing_27));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 15) = ((MR_Box) (make__V_79_79));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 17) = ((MR_Box) (make__V_81_81));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 18) = ((MR_Box) (make__AnalysisRepeat_34));
#line 362 "make.m"
            MR_hl_field(MR_mktag(0), make__MakeInfo0_35, 19) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "make.m"
          }
#line 388 "make.m"
          {
#line 388 "make.m"
            make__util__foldl2_maybe_stop_at_error_9_p_0(make__TypeInfo_109_109, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__KeepGoing_27, (MR_Word) &make_scalar_common_1[15], make__Globals_8, make__ClassifiedTargets_32, &make__Success_36, ((MR_Box) (make__MakeInfo0_35)), &make__conv7__MakeInfo_37, ((MR_Box) ((MR_Integer) 0)), &make__conv6_STATE_VARIABLE_IO_84_84);
          }
#line 388 "make.m"
          make___MakeInfo_37 = ((MR_Word) make__conv7__MakeInfo_37);
#line 394 "make.m"
          if ((make__Success_36 == (MR_Integer) 0))
#line 392 "make.m"
            {
#line 393 "make.m"
              {
#line 393 "make.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 393 "make.m"
                return;
              }
#line 392 "make.m"
            }
#line 394 "make.m"
          else
#line 395 "make.m"
            {
#line 395 "make.m"
            }
#line 336 "make.m"
        }
#line 12053 "make.c"
    else
#line 12055 "make.c"
      {
#line 326 "make.m"
        MR_Box make__conv8_STATE_VARIABLE_IO_49_124;

#line 326 "make.m"
        {
#line 326 "make.m"
          mercury__list__foldl_4_p_2(make__TypeCtorInfo_94_94, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &make_scalar_common_1[16], make__AbsTargets_22, ((MR_Box) ((MR_Integer) 0)), &make__conv8_STATE_VARIABLE_IO_49_124);
        }
#line 334 "make.m"
        {
#line 334 "make.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 334 "make.m"
          return;
        }
#line 12072 "make.c"
      }
#line 287 "make.m"
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
