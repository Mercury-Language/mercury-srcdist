/*
** Automatically generated from `options_file.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module make.options_file. */
/* :- implementation. */

/*
INIT mercury__make__options_file__init
ENDINIT
*/

#include "make.options_file.mih"


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
#include "exception.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "make.mih"
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
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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




#line 167 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0;

#line 170 "make.options_file.c"
static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0;

#line 173 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0__plain_bool__type_ctor_info_bool_0;

#line 176 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

#line 179 "make.options_file.c"
static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0;

#line 182 "make.options_file.c"
static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0;

#line 185 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 188 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0;

#line 191 "make.options_file.c"
static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

#line 194 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0;

#line 197 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 200 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

#line 203 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0;

#line 206 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1;

#line 209 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_error_if_not_exist_0[2];

#line 212 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_error_if_not_exist_0[2];

#line 215 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_error_if_not_exist_0[2];

#line 218 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0;

#line 221 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_found_options_file_error_0[1];

#line 224 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0[1];

#line 227 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_found_options_file_error_0[1];

#line 230 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0;

#line 233 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_mmc_option_type_0_1[2];

#line 236 "make.options_file.c"
static const MR_ConstString make__options_file__make__options_file__field_names_mmc_option_type_0_1[2];

#line 239 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1;

#line 242 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0[1];

#line 245 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1[1];

#line 248 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0[2];

#line 251 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_mmc_option_type_0[2];

#line 254 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_mmc_option_type_0[2];

#line 257 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_error_0[1];

#line 260 "make.options_file.c"
static const MR_NotagFunctorDesc make__options_file__make__options_file__notag_functor_desc_options_file_error_0;

#line 263 "make.options_file.c"
static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_character_0;

#line 266 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_0[3];

#line 269 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_0;

#line 272 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_1[2];

#line 275 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_1;

#line 278 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0[1];

#line 281 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1[1];

#line 284 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_file_line_0[2];

#line 287 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_file_line_0[2];

#line 290 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_line_0[2];

#line 293 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0;

#line 296 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1;

#line 299 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_class_0_2[1];

#line 302 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2;

#line 305 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0[2];

#line 308 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1[1];

#line 311 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0[2];

#line 314 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_class_0[3];

#line 317 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_class_0[3];

#line 320 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0;

#line 323 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1;

#line 326 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2;

#line 329 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3;

#line 332 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4;

#line 335 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5;

#line 338 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6;

#line 341 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7;

#line 344 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8;

#line 347 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9;

#line 350 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10;

#line 353 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11;

#line 356 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12;

#line 359 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13;

#line 362 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14;

#line 365 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15;

#line 368 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16;

#line 371 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17;

#line 374 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18;

#line 377 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19;

#line 380 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20;

#line 383 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21;

#line 386 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22;

#line 389 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_23;

#line 392 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_options_variable_type_0[24];

#line 395 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_options_variable_type_0[24];

#line 398 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_type_0[24];

#line 401 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_value_0_0[3];

#line 404 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0;

#line 407 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1];

#line 410 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0[1];

#line 413 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_value_0[1];

#line 416 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_value_0[1];

#line 419 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_0;

#line 422 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_1;

#line 425 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_search_0[2];

#line 428 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_search_0[2];

#line 431 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_search_0[2];

#line 434 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_0[1];

#line 437 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_0;

#line 440 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_1;

#line 443 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_2[1];

#line 446 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_2;

#line 449 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_0[1];

#line 452 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_1[1];

#line 455 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_2[1];

#line 458 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_variable_result_1[3];

#line 461 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_variable_result_1[3];

#line 464 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_result_1[3];

#line 467 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_0;

#line 470 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_1;

#line 473 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_2;

#line 476 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_variable_source_0[3];

#line 479 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_variable_source_0[3];

#line 482 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_source_0[3];

#line 485 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0_10001(
#line 488 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 490 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 493 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0_10001(
#line 496 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 498 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 500 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 503 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0_10001(
#line 506 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 508 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 511 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0_10001(
#line 514 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 516 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 518 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 521 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0_10001(
#line 524 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 526 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 529 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
#line 532 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 534 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 536 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 539 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0_10001(
#line 542 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 544 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 547 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_file_error_0_0_10001(
#line 550 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 552 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 554 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 557 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0_10001(
#line 560 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 562 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 565 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_file_line_0_0_10001(
#line 568 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 570 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 572 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 575 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0_10001(
#line 578 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 580 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 583 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_0_0_10001(
#line 586 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 588 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 590 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 593 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0_10001(
#line 596 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 598 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 601 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0_10001(
#line 604 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 606 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 608 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 611 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0_10001(
#line 614 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 616 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 619 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0_10001(
#line 622 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 624 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 626 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 629 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0_10001(
#line 632 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 634 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 637 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0_10001(
#line 640 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 642 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 644 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 647 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0_10001(
#line 650 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 652 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 655 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variables_0_0_10001(
#line 658 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 660 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 662 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 665 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____search_0_0_10001(
#line 668 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 670 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 673 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____search_0_0_10001(
#line 676 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 678 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 680 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 683 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0_10001(
#line 686 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 688 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 690 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 693 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____variable_result_1_0_10001(
#line 696 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 698 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_2,
#line 700 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3,
#line 702 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_4);

#line 705 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0_10001(
#line 708 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 710 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2);

#line 713 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____variable_source_0_0_10001(
#line 716 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 718 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 720 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3);

#line 109 "options_file.m"
static void MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 109 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1);

#line 109 "options_file.m"
static MR_bool MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 1132 "options_file.m"
static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_options_variable__1132__1_1_p_0(
#line 1132 "options_file.m"
  MR_String make__options_file__HeadVar__1_51);

#line 1022 "options_file.m"
static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(
#line 1022 "options_file.m"
  MR_String make__options_file__OptionName_9,
#line 1022 "options_file.m"
  MR_String make__options_file__HeadVar__2_14);

#line 886 "options_file.m"
static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__886__1_2_p_0(
#line 886 "options_file.m"
  MR_Word make__options_file__HeadVar__1_24,
#line 886 "options_file.m"
  MR_Word * make__options_file__HeadVar__2_25);

#line 757 "options_file.m"
static void MR_CALL 
make__options_file__IntroducedFrom__pred__checked_split_into_words__757__1_2_p_0(
#line 757 "options_file.m"
  MR_Word make__options_file__Chars_3,
#line 757 "options_file.m"
  MR_Word * make__options_file__HeadVar__2_11);

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(
#line 653 "options_file.m"
  MR_Word make__options_file__HeadVar__1_13,
#line 653 "options_file.m"
  MR_Char make__options_file__HeadVar__2_20);

#line 157 "options_file.m"
static void MR_CALL 
make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(
#line 157 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 157 "options_file.m"
  MR_String make__options_file__OptionsFile_8,
#line 157 "options_file.m"
  MR_Word make__options_file__Variables0_9,
#line 157 "options_file.m"
  MR_Word * make__options_file__HeadVar__4_22);

#line 121 "options_file.m"
static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
#line 121 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 121 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 1067 "options_file.m"
static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
#line 1067 "options_file.m"
  MR_Word make__options_file__TypeInfo_for_T_18,
#line 1067 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 1067 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0(
#line 1067 "options_file.m"
  MR_Word make__options_file__TypeInfo_for_T_11,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 219 "options_file.m"
static void MR_CALL 
make__options_file____Compare____search_0_0(
#line 219 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 219 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 907 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0(
#line 907 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 907 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0(
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 902 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0(
#line 902 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 902 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0(
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 104 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_variable_0_0(
#line 104 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__2_2,
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__3_3);

#line 104 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0(
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__1_1,
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__2_2);

#line 588 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_file_line_0_0(
#line 588 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 588 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 106 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_file_error_0_0(
#line 106 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 106 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0(
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 1025 "options_file.m"
static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0(
#line 1025 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 1025 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 109 "options_file.m"
static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0(
#line 109 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1);

#line 109 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0(void);

#line 215 "options_file.m"
static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0(
#line 215 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3);

#line 215 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0(
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 1228 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_chars_7_p_0(
#line 1228 "options_file.m"
  MR_Word make__options_file__Variables_8,
#line 1228 "options_file.m"
  MR_String make__options_file__Var_9,
#line 1228 "options_file.m"
  MR_Word * make__options_file__Value_10,
#line 1228 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Undef_0_18,
#line 1228 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Undef_19);

#line 755 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0_1(
#line 755 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 755 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1);

#line 1191 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0(
#line 1191 "options_file.m"
  MR_Word make__options_file__LookupEnv_7,
#line 1191 "options_file.m"
  MR_Word make__options_file__Vars_8,
#line 1191 "options_file.m"
  MR_String make__options_file__VarName_9,
#line 1191 "options_file.m"
  MR_Word * make__options_file__Result_10);

#line 1170 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_words_report_error_6_p_0(
#line 1170 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 1170 "options_file.m"
  MR_Word make__options_file__Vars_8,
#line 1170 "options_file.m"
  MR_String make__options_file__VarName_9,
#line 1170 "options_file.m"
  MR_Word * make__options_file__Result_10);

#line 1156 "options_file.m"
static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
#line 1156 "options_file.m"
  MR_Word make__options_file__TypeInfo_for_T_14,
#line 1156 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 1156 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2);

#line 1143 "options_file.m"
static MR_Box MR_CALL 
make__options_file__lookup_options_variable_7_p_0_2(
#line 1143 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1143 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1130 "options_file.m"
static MR_bool MR_CALL 
make__options_file__lookup_options_variable_7_p_0_1(
#line 1130 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1130 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1072 "options_file.m"
static void MR_CALL 
make__options_file__lookup_options_variable_7_p_0(
#line 1072 "options_file.m"
  MR_Word make__options_file__Globals_8,
#line 1072 "options_file.m"
  MR_Word make__options_file__Vars_9,
#line 1072 "options_file.m"
  MR_Word make__options_file__OptionsVariableClass_10,
#line 1072 "options_file.m"
  MR_Word make__options_file__FlagsVar_11,
#line 1072 "options_file.m"
  MR_Word * make__options_file__Result_12);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_21(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_20(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_19(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_18(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_17(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_16(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_15(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_14(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_13(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_12(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_11(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_10(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_9(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_8(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_7(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_6(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_5(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_4(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_3(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_2(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_1(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 1003 "options_file.m"
static MR_Word MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0(
#line 1003 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1);

#line 897 "options_file.m"
static MR_Box MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_3(
#line 897 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 897 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 881 "options_file.m"
static MR_bool MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_2(
#line 881 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 881 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 881 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2);

#line 878 "options_file.m"
static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_1(
#line 878 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 878 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 878 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2,
#line 878 "options_file.m"
  MR_Box make__options_file__wrapper_arg_3,
#line 878 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_4);

#line 872 "options_file.m"
static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0(
#line 872 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 872 "options_file.m"
  MR_Word make__options_file__Vars_8,
#line 872 "options_file.m"
  MR_Word make__options_file__MaybeModuleName_9,
#line 872 "options_file.m"
  MR_Word * make__options_file__Result_10);

#line 795 "options_file.m"
static void MR_CALL 
make__options_file__get_word_2_4_p_0(
#line 795 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 795 "options_file.m"
  MR_Word * make__options_file__RevWord_2,
#line 795 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3,
#line 795 "options_file.m"
  MR_Word * make__options_file__HeadVar__4_4);

#line 779 "options_file.m"
static MR_bool MR_CALL 
make__options_file__split_into_words_2_2_f_0_1(
#line 779 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 779 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 776 "options_file.m"
static MR_Word MR_CALL 
make__options_file__split_into_words_2_2_f_0(
#line 776 "options_file.m"
  MR_Word make__options_file__Chars0_4,
#line 776 "options_file.m"
  MR_Word make__options_file__RevWords0_5);

#line 716 "options_file.m"
static void MR_CALL 
make__options_file__skip_comment_line_3_p_0(
#line 716 "options_file.m"
  MR_Word * make__options_file__FoundEOF_4);

#line 690 "options_file.m"
static void MR_CALL 
make__options_file__parse_string_chars_4_p_0(
#line 690 "options_file.m"
  MR_Word make__options_file__String0_1,
#line 690 "options_file.m"
  MR_Word * make__options_file__String_2,
#line 690 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3,
#line 690 "options_file.m"
  MR_Word * make__options_file__Chars_4);

#line 660 "options_file.m"
static void MR_CALL 
make__options_file__parse_variable_2_5_p_0(
#line 660 "options_file.m"
  MR_Word make__options_file__IsFirst_1,
#line 660 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 660 "options_file.m"
  MR_Word * make__options_file__Var_3,
#line 660 "options_file.m"
  MR_Word make__options_file__HeadVar__4_4,
#line 660 "options_file.m"
  MR_Word * make__options_file__HeadVar__5_5);

#line 630 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_5(
#line 630 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 630 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 616 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_4(
#line 616 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 616 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_3(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_2(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 612 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_1(
#line 612 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 612 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 599 "options_file.m"
static void MR_CALL 
make__options_file__parse_options_line_2_p_0(
#line 599 "options_file.m"
  MR_Word make__options_file__Line0_3,
#line 599 "options_file.m"
  MR_Word * make__options_file__OptionsFileLine_4);

#line 566 "options_file.m"
static MR_Box MR_CALL 
make__options_file__report_undefined_variables_4_p_0_1(
#line 566 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 566 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 546 "options_file.m"
static void MR_CALL 
make__options_file__report_undefined_variables_4_p_0(
#line 546 "options_file.m"
  MR_Word make__options_file__Globals_5,
#line 546 "options_file.m"
  MR_Word make__options_file__Vars_6);

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_2(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_1(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1);

#line 496 "options_file.m"
static void MR_CALL 
make__options_file__expand_variables_2_8_p_0(
#line 496 "options_file.m"
  MR_Word make__options_file__Variables_1,
#line 496 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 496 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_RevChars_0_3,
#line 496 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_RevChars_4,
#line 496 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_RevUndef_0_5,
#line 496 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_RevUndef_6);

#line 440 "options_file.m"
static void MR_CALL 
make__options_file__update_variable_8_p_0(
#line 440 "options_file.m"
  MR_Word make__options_file__Globals_9,
#line 440 "options_file.m"
  MR_String make__options_file__VarName_10,
#line 440 "options_file.m"
  MR_Word make__options_file__AddToValue_11,
#line 440 "options_file.m"
  MR_Word make__options_file__NewValue0_12,
#line 440 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_27,
#line 440 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_28);

#line 405 "options_file.m"
static void MR_CALL 
make__options_file__read_options_line_2_5_p_0(
#line 405 "options_file.m"
  MR_Word * make__options_file__FoundEOF_6,
#line 405 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Chars_0_13,
#line 405 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Chars_14);

#line 385 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0_1(
#line 385 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 385 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 385 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 385 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3,
#line 385 "options_file.m"
  MR_Box make__options_file__wrapper_arg_4,
#line 385 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_5);

#line 363 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0(
#line 363 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 363 "options_file.m"
  MR_String make__options_file__Dir_8,
#line 363 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_24,
#line 363 "options_file.m"
  MR_Word * make__options_file__HeadVar__4_4);

#line 361 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0_1(
#line 361 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 361 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1,
#line 361 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 361 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3);

#line 356 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0(
#line 356 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 356 "options_file.m"
  MR_String make__options_file__Dir_8,
#line 356 "options_file.m"
  MR_Word make__options_file__Variables0_9,
#line 356 "options_file.m"
  MR_Word * make__options_file__Result_10);

#line 321 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_6_p_0(
#line 321 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 321 "options_file.m"
  MR_String make__options_file__Dir_8,
#line 321 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_18,
#line 321 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_19);

#line 312 "options_file.m"
static MR_String MR_CALL 
make__options_file__maybe_add_path_name_2_f_0(
#line 312 "options_file.m"
  MR_String make__options_file__Dir_4,
#line 312 "options_file.m"
  MR_String make__options_file__File_5);

#line 307 "options_file.m"
static void MR_CALL 
make__options_file__write_done_2_p_0(void);

#line 300 "options_file.m"
static void MR_CALL 
make__options_file__write_reading_options_file_3_p_0(
#line 300 "options_file.m"
  MR_String make__options_file__FileName_4);

#line 295 "options_file.m"
static void MR_CALL 
make__options_file__write_reading_options_file_stdin_2_p_0(void);

#line 292 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_5(
#line 292 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 292 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 292 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2);

#line 269 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_4(
#line 269 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 269 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 269 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2);

#line 235 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_3(
#line 235 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 235 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 235 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2);

#line 233 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_2(
#line 233 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 233 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 233 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2);

#line 231 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_1(
#line 231 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 231 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 231 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2);

#line 223 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0(
#line 223 "options_file.m"
  MR_Word make__options_file__Globals_10,
#line 223 "options_file.m"
  MR_Word make__options_file__ErrorIfNotExist_11,
#line 223 "options_file.m"
  MR_Word make__options_file__Search_12,
#line 223 "options_file.m"
  MR_Word make__options_file__MaybeDirName_13,
#line 223 "options_file.m"
  MR_String make__options_file__OptionsFile0_14,
#line 223 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_33,
#line 223 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_34);

#line 201 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_set_params_6_p_0(
#line 201 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 201 "options_file.m"
  MR_String make__options_file__OptionsFile_8,
#line 201 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Vars_0_13,
#line 201 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Vars_14);

#line 198 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0_1(
#line 198 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 198 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 198 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 198 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3,
#line 198 "options_file.m"
  MR_Box make__options_file__wrapper_arg_4,
#line 198 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_5);

#line 193 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0(
#line 193 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 193 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_10,
#line 193 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_11);

#line 178 "options_file.m"
static void MR_CALL 
make__options_file__read_options_files_5_p_0_1(
#line 178 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 178 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1,
#line 178 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 178 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3);

#line 157 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_6_p_0_1(
#line 157 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 157 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1,
#line 157 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 157 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3);


static /* final */ const MR_Box make__options_file_scalar_common_1[17][3];

static /* final */ const MR_Box make__options_file_scalar_common_2[44][2];

static /* final */ const MR_Box make__options_file_scalar_common_3[2][9];

static /* final */ const MR_Box make__options_file_scalar_common_4[1][8];

static /* final */ const MR_Box make__options_file_scalar_common_5[1][1];

static /* final */ const MR_Box make__options_file_scalar_common_6[6][5];

static /* final */ const MR_Box make__options_file_scalar_common_7[2][6];

static /* final */ const MR_Box make__options_file_scalar_common_8[1][12];

static /* final */ const MR_Box make__options_file_scalar_common_9[23][4];

static /* final */ const MR_Box make__options_file_scalar_common_10[1][10];


#line 951 "options_file.m"
/* sealed */ struct make__options_file__vector_common_type_11_0_s {
#line 951 "options_file.m"
  const MR_String make__options_file__vector_common_type_11_0__vct_11_f_0;
#line 951 "options_file.m"
};

static /* final */ const struct make__options_file__vector_common_type_11_0_s make__options_file_vector_common_11[24];



static /* final */ const MR_Box make__options_file_scalar_common_1[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__options_file_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file_scalar_common_2[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[0])),
    ((MR_Box) (make__options_file__read_options_file_params_9_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__expand_variables_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__report_undefined_variables_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[0])),
    ((MR_Box) (make__options_file__split_into_words_2_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[3])),
    ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[4])),
    ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__options_file_scalar_common_9[22])),
    ((MR_Box) (make__options_file__lookup_options_variable_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[2])),
    ((MR_Box) (make__options_file__lookup_options_variable_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_2[44][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_variable_result_1)),
    ((MR_Box) (&make__options_file_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__options_file_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "--no-libgrade")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[28]))),
    ((MR_Box) ((MR_String) "--libgrade"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "--no-lib-linkage")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[30]))),
    ((MR_Box) ((MR_String) "--lib-linkage"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error reading options file"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "undefined."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: MLLIBS must contain only"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "-l"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "options, found"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: in environment variable"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_6[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_search_0)),
    ((MR_Box) (&make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_9[23][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[1])),
    ((MR_Box) (make__options_file__expand_variables_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_1[6]))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__options_file_scalar_common_6[1])),
    ((MR_Box) (make__options_file__parse_options_line_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__options_file_scalar_common_1[9]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--init-file"))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--cflag"))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--clang-flag"))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-config-dir"))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--csharp-flag"))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--erlang-flag"))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--gcc-flag"))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ilasm-flag"))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--install-prefix"))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--java-flag"))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-flag"))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--ld-libflag"))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library-directory"))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-library"))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--linkage"))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-linkage"))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--link-object"))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--msvc-flag"))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__options_file_scalar_common_7[1])),
    ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row 22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__options_file_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_class_0)),
    ((MR_Box) (&make__options_file__make__options_file__type_ctor_info_options_variable_type_0)),
    ((MR_Box) (&make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__options_file__vector_common_type_11_0_s make__options_file_vector_common_11[24] = {
  /* row 0 */   {     (MR_String) "GRADEFLAGS" },
  /* row 1 */   {     (MR_String) "MCFLAGS" },
  /* row 2 */   {     (MR_String) "CFLAGS" },
  /* row 3 */   {     (MR_String) "GCC_FLAGS" },
  /* row 4 */   {     (MR_String) "CLANG_FLAGS" },
  /* row 5 */   {     (MR_String) "MSVC_FLAGS" },
  /* row 6 */   {     (MR_String) "JAVACFLAGS" },
  /* row 7 */   {     (MR_String) "ILASMFLAGS" },
  /* row 8 */   {     (MR_String) "CSCFLAGS" },
  /* row 9 */   {     (MR_String) "ERLANG_FLAGS" },
  /* row 10 */   {     (MR_String) "MLOBJS" },
  /* row 11 */   {     (MR_String) "MLLIBS" },
  /* row 12 */   {     (MR_String) "LDFLAGS" },
  /* row 13 */   {     (MR_String) "LD_LIBFLAGS" },
  /* row 14 */   {     (MR_String) "C2INITARGS" },
  /* row 15 */   {     (MR_String) "LIBRARIES" },
  /* row 16 */   {     (MR_String) "LIB_DIRS" },
  /* row 17 */   {     (MR_String) "LIBGRADES" },
  /* row 18 */   {     (MR_String) "LIB_LINKAGES" },
  /* row 19 */   {     (MR_String) "INSTALL_PREFIX" },
  /* row 20 */   {     (MR_String) "MERCURY_STDLIB_DIR" },
  /* row 21 */   {     (MR_String) "MERCURY_CONFIG_DIR" },
  /* row 22 */   {     (MR_String) "LINKAGE" },
  /* row 23 */   {     (MR_String) "MERCURY_LINKAGE" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



#line 2397 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

#line 2406 "make.options_file.c"
static const MR_FA_TypeInfo_Struct2 make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0
  }
};

#line 2415 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 2424 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2432 "make.options_file.c"
static const MR_VA_PseudoTypeInfo_Struct1 make__options_file____vpti_pred_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 2441 "make.options_file.c"
static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2449 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__make__options_file__pti_variable_result_1__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &make__options_file__make__options_file__type_ctor_info_variable_result_1,
  {
    (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2457 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2465 "make.options_file.c"
static const MR_FA_TypeInfo_Struct1 make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2473 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__options_file__pair__pti_pair_2__plain_make__options_file__type_ctor_info_options_variable_type_0__plain_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_options_variable_type_0,
    (MR_PseudoTypeInfo) &make__options_file__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_string_0
  }
};

#line 2482 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2490 "make.options_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__options_file__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 2498 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0 = {
  (MR_String) "error",
  (MR_Integer) 0
};

#line 2504 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1 = {
  (MR_String) "no_error",
  (MR_Integer) 1
};

#line 2510 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_error_if_not_exist_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0,
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1
};

#line 2516 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_error_if_not_exist_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_0,
  &make__options_file__make__options_file__enum_functor_desc_error_if_not_exist_0_1
};

#line 2522 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_error_if_not_exist_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2528 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____error_if_not_exist_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____error_if_not_exist_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "error_if_not_exist",
  {     make__options_file__make__options_file__enum_name_ordered_error_if_not_exist_0 },
  {     make__options_file__make__options_file__enum_value_ordered_error_if_not_exist_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_error_if_not_exist_0
};

#line 2545 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0 = {
  (MR_String) "found_options_file_error",
  (MR_Integer) 0
};

#line 2551 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_found_options_file_error_0[1] = {
  &make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0
};

#line 2556 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0[1] = {
  &make__options_file__make__options_file__enum_functor_desc_found_options_file_error_0_0
};

#line 2561 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_found_options_file_error_0[1] = {
  (MR_Integer) 0
};

#line 2566 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_found_options_file_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (make__options_file____Unify____found_options_file_error_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____found_options_file_error_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "found_options_file_error",
  {     make__options_file__make__options_file__enum_name_ordered_found_options_file_error_0 },
  {     make__options_file__make__options_file__enum_value_ordered_found_options_file_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_found_options_file_error_0
};

#line 2583 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0 = {
  (MR_String) "mmc_flags",
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

#line 2598 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_mmc_option_type_0_1[2] = {
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2604 "make.options_file.c"
static const MR_ConstString make__options_file__make__options_file__field_names_mmc_option_type_0_1[2] = {
  (MR_String) "initial_options",
  (MR_String) "option_name"
};

#line 2610 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1 = {
  (MR_String) "option",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__options_file__make__options_file__field_types_mmc_option_type_0_1,
  make__options_file__make__options_file__field_names_mmc_option_type_0_1,
  NULL,
  NULL
};

#line 2625 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0
};

#line 2630 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1
};

#line 2635 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_mmc_option_type_0_1
  }
};

#line 2649 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_mmc_option_type_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_0,
  &make__options_file__make__options_file__du_functor_desc_mmc_option_type_0_1
};

#line 2655 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_mmc_option_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2661 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_mmc_option_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____mmc_option_type_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____mmc_option_type_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "mmc_option_type",
  {     make__options_file__make__options_file__du_name_ordered_mmc_option_type_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_mmc_option_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_mmc_option_type_0
};

#line 2678 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_error_0[1] = {
  (MR_Integer) 0
};

#line 2683 "make.options_file.c"
static const MR_NotagFunctorDesc make__options_file__make__options_file__notag_functor_desc_options_file_error_0 = {
  (MR_String) "options_file_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 2690 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_file_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__options_file____Unify____options_file_error_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_file_error_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_file_error",
  {     &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  {     &make__options_file__make__options_file__notag_functor_desc_options_file_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_file_error_0
};

#line 2707 "make.options_file.c"
static const MR_FA_TypeInfo_Struct1 make__options_file__list__ti_list_1builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 2715 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_character_0
};

#line 2722 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_0 = {
  (MR_String) "define_variable",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_options_file_line_0_0,
  NULL,
  NULL,
  NULL
};

#line 2737 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_file_line_0_1[2] = {
  (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0,
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_character_0
};

#line 2743 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_file_line_0_1 = {
  (MR_String) "include_options_files",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__options_file__make__options_file__field_types_options_file_line_0_1,
  NULL,
  NULL,
  NULL
};

#line 2758 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_0
};

#line 2763 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_1
};

#line 2768 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_file_line_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_file_line_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_file_line_0_1
  }
};

#line 2782 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_file_line_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_0,
  &make__options_file__make__options_file__du_functor_desc_options_file_line_0_1
};

#line 2788 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_file_line_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2794 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_file_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_file_line_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_file_line_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_file_line",
  {     make__options_file__make__options_file__du_name_ordered_options_file_line_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_file_line_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_file_line_0
};

#line 2811 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__options_file____Unify____options_variable_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2828 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0 = {
  (MR_String) "default",
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

#line 2843 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1 = {
  (MR_String) "non_module_specific",
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

#line 2858 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_class_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2863 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2 = {
  (MR_String) "module_specific",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__options_file__make__options_file__field_types_options_variable_class_0_2,
  NULL,
  NULL,
  NULL
};

#line 2878 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0[2] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0,
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1
};

#line 2884 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2
};

#line 2889 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_variable_class_0_1
  }
};

#line 2903 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_class_0[3] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_0,
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_2,
  &make__options_file__make__options_file__du_functor_desc_options_variable_class_0_1
};

#line 2910 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_class_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2917 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variable_class_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_class_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_class",
  {     make__options_file__make__options_file__du_name_ordered_options_variable_class_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_variable_class_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_variable_class_0
};

#line 2934 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0 = {
  (MR_String) "grade_flags",
  (MR_Integer) 0
};

#line 2940 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1 = {
  (MR_String) "mmc_flags",
  (MR_Integer) 1
};

#line 2946 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2 = {
  (MR_String) "c_flags",
  (MR_Integer) 2
};

#line 2952 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3 = {
  (MR_String) "gcc_flags",
  (MR_Integer) 3
};

#line 2958 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4 = {
  (MR_String) "clang_flags",
  (MR_Integer) 4
};

#line 2964 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5 = {
  (MR_String) "msvc_flags",
  (MR_Integer) 5
};

#line 2970 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6 = {
  (MR_String) "java_flags",
  (MR_Integer) 6
};

#line 2976 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7 = {
  (MR_String) "ilasm_flags",
  (MR_Integer) 7
};

#line 2982 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8 = {
  (MR_String) "csharp_flags",
  (MR_Integer) 8
};

#line 2988 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9 = {
  (MR_String) "erlang_flags",
  (MR_Integer) 9
};

#line 2994 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10 = {
  (MR_String) "ml_objs",
  (MR_Integer) 10
};

#line 3000 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11 = {
  (MR_String) "ml_libs",
  (MR_Integer) 11
};

#line 3006 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12 = {
  (MR_String) "ld_flags",
  (MR_Integer) 12
};

#line 3012 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13 = {
  (MR_String) "ld_libflags",
  (MR_Integer) 13
};

#line 3018 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14 = {
  (MR_String) "c2init_args",
  (MR_Integer) 14
};

#line 3024 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15 = {
  (MR_String) "libraries",
  (MR_Integer) 15
};

#line 3030 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16 = {
  (MR_String) "lib_dirs",
  (MR_Integer) 16
};

#line 3036 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17 = {
  (MR_String) "lib_grades",
  (MR_Integer) 17
};

#line 3042 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18 = {
  (MR_String) "lib_linkages",
  (MR_Integer) 18
};

#line 3048 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19 = {
  (MR_String) "install_prefix",
  (MR_Integer) 19
};

#line 3054 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20 = {
  (MR_String) "stdlib_dir",
  (MR_Integer) 20
};

#line 3060 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21 = {
  (MR_String) "config_dir",
  (MR_Integer) 21
};

#line 3066 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22 = {
  (MR_String) "linkage",
  (MR_Integer) 22
};

#line 3072 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_23 = {
  (MR_String) "mercury_linkage",
  (MR_Integer) 23
};

#line 3078 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_options_variable_type_0[24] = {
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_23
};

#line 3106 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_options_variable_type_0[24] = {
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_14,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_2,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_4,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_21,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_8,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_9,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_3,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_0,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_7,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_19,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_6,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_12,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_13,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_16,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_17,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_18,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_15,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_22,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_23,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_11,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_10,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_1,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_5,
  &make__options_file__make__options_file__enum_functor_desc_options_variable_type_0_20
};

#line 3134 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_type_0[24] = {
  (MR_Integer) 7,
  (MR_Integer) 21,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 22,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 20,
  (MR_Integer) 19,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 9,
  (MR_Integer) 23,
  (MR_Integer) 3,
  (MR_Integer) 17,
  (MR_Integer) 18
};

#line 3162 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____options_variable_type_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_type_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_type",
  {     make__options_file__make__options_file__enum_name_ordered_options_variable_type_0 },
  {     make__options_file__make__options_file__enum_value_ordered_options_variable_type_0 },
  (MR_Integer) 24,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_variable_type_0
};

#line 3179 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_options_variable_value_0_0[3] = {
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_character_0,
  (MR_PseudoTypeInfo) &make__options_file__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__options_file__make__options_file__type_ctor_info_variable_source_0
};

#line 3186 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0 = {
  (MR_String) "options_variable_value",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_options_variable_value_0_0,
  NULL,
  NULL,
  NULL
};

#line 3201 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0
};

#line 3206 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_options_variable_value_0_0
  }
};

#line 3215 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_options_variable_value_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_options_variable_value_0_0
};

#line 3220 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_options_variable_value_0[1] = {
  (MR_Integer) 0
};

#line 3225 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variable_value_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____options_variable_value_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variable_value_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variable_value",
  {     make__options_file__make__options_file__du_name_ordered_options_variable_value_0 },
  {     make__options_file__make__options_file__du_ptag_ordered_options_variable_value_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_options_variable_value_0
};

#line 3242 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_options_variables_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__options_file____Unify____options_variables_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____options_variables_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "options_variables",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__options_file__tree234__ti_tree234_2builtin__type_ctor_info_string_0make__options_file__type_ctor_info_options_variable_value_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3259 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_0 = {
  (MR_String) "search",
  (MR_Integer) 0
};

#line 3265 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_search_0_1 = {
  (MR_String) "no_search",
  (MR_Integer) 1
};

#line 3271 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_search_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_search_0_0,
  &make__options_file__make__options_file__enum_functor_desc_search_0_1
};

#line 3277 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_search_0[2] = {
  &make__options_file__make__options_file__enum_functor_desc_search_0_1,
  &make__options_file__make__options_file__enum_functor_desc_search_0_0
};

#line 3283 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3289 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____search_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____search_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "search",
  {     make__options_file__make__options_file__enum_name_ordered_search_0 },
  {     make__options_file__make__options_file__enum_value_ordered_search_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_search_0
};

#line 3306 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 3311 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_0 = {
  (MR_String) "var_result_set",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__options_file__make__options_file__field_types_variable_result_1_0,
  NULL,
  NULL,
  NULL
};

#line 3326 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_1 = {
  (MR_String) "var_result_unset",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3341 "make.options_file.c"
static const MR_PseudoTypeInfo make__options_file__make__options_file__field_types_variable_result_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 3346 "make.options_file.c"
static const MR_DuFunctorDesc make__options_file__make__options_file__du_functor_desc_variable_result_1_2 = {
  (MR_String) "var_result_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  make__options_file__make__options_file__field_types_variable_result_1_2,
  NULL,
  NULL,
  NULL
};

#line 3361 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_0[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_1
};

#line 3366 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_1[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_2
};

#line 3371 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_stag_ordered_variable_result_1_2[1] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_0
};

#line 3376 "make.options_file.c"
static const MR_DuPtagLayout make__options_file__make__options_file__du_ptag_ordered_variable_result_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    make__options_file__make__options_file__du_stag_ordered_variable_result_1_2
  }
};

#line 3395 "make.options_file.c"
static const MR_DuFunctorDescPtr make__options_file__make__options_file__du_name_ordered_variable_result_1[3] = {
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_2,
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_0,
  &make__options_file__make__options_file__du_functor_desc_variable_result_1_1
};

#line 3402 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_result_1[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3409 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_variable_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__options_file____Unify____variable_result_1_0_10001)),
  ((MR_Box) (make__options_file____Compare____variable_result_1_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "variable_result",
  {     make__options_file__make__options_file__du_name_ordered_variable_result_1 },
  {     make__options_file__make__options_file__du_ptag_ordered_variable_result_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_variable_result_1
};

#line 3426 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_0 = {
  (MR_String) "options_file",
  (MR_Integer) 0
};

#line 3432 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_1 = {
  (MR_String) "command_line",
  (MR_Integer) 1
};

#line 3438 "make.options_file.c"
static const MR_EnumFunctorDesc make__options_file__make__options_file__enum_functor_desc_variable_source_0_2 = {
  (MR_String) "environment",
  (MR_Integer) 2
};

#line 3444 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_value_ordered_variable_source_0[3] = {
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_0,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_1,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_2
};

#line 3451 "make.options_file.c"
static const MR_EnumFunctorDescPtr make__options_file__make__options_file__enum_name_ordered_variable_source_0[3] = {
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_1,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_2,
  &make__options_file__make__options_file__enum_functor_desc_variable_source_0_0
};

#line 3458 "make.options_file.c"
static const MR_Integer make__options_file__make__options_file__functor_number_map_variable_source_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3465 "make.options_file.c"
const MR_TypeCtorInfo_Struct make__options_file__make__options_file__type_ctor_info_variable_source_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__options_file____Unify____variable_source_0_0_10001)),
  ((MR_Box) (make__options_file____Compare____variable_source_0_0_10001)),
  (MR_String) "make.options_file",
  (MR_String) "variable_source",
  {     make__options_file__make__options_file__enum_name_ordered_variable_source_0 },
  {     make__options_file__make__options_file__enum_value_ordered_variable_source_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__options_file__make__options_file__functor_number_map_variable_source_0
};

#line 3482 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0_10001(
#line 3485 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3487 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3489 "make.options_file.c"
{
#line 3491 "make.options_file.c"
  {
#line 3493 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3496 "make.options_file.c"
    {
#line 3498 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____error_if_not_exist_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3501 "make.options_file.c"
    return make__options_file__succeeded;
#line 3503 "make.options_file.c"
  }
#line 3505 "make.options_file.c"
}

#line 3508 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0_10001(
#line 3511 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3513 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3515 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3517 "make.options_file.c"
{
#line 3519 "make.options_file.c"
  {
#line 3521 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3524 "make.options_file.c"
    {
#line 3526 "make.options_file.c"
      make__options_file____Compare____error_if_not_exist_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 3529 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3531 "make.options_file.c"
  }
#line 3533 "make.options_file.c"
}

#line 3536 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0_10001(
#line 3539 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3541 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3543 "make.options_file.c"
{
#line 3545 "make.options_file.c"
  {
#line 3547 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3550 "make.options_file.c"
    {
#line 3552 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____found_options_file_error_0_0();
    }
#line 3555 "make.options_file.c"
    return make__options_file__succeeded;
#line 3557 "make.options_file.c"
  }
#line 3559 "make.options_file.c"
}

#line 3562 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0_10001(
#line 3565 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3567 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3569 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3571 "make.options_file.c"
{
#line 3573 "make.options_file.c"
  {
#line 3575 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3578 "make.options_file.c"
    {
#line 3580 "make.options_file.c"
      make__options_file____Compare____found_options_file_error_0_0(&make__options_file__conv0_HeadVar__1_1);
    }
#line 3583 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3585 "make.options_file.c"
  }
#line 3587 "make.options_file.c"
}

#line 3590 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0_10001(
#line 3593 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3595 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3597 "make.options_file.c"
{
#line 3599 "make.options_file.c"
  {
#line 3601 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3604 "make.options_file.c"
    {
#line 3606 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____mmc_option_type_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3609 "make.options_file.c"
    return make__options_file__succeeded;
#line 3611 "make.options_file.c"
  }
#line 3613 "make.options_file.c"
}

#line 3616 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0_10001(
#line 3619 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3621 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3623 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3625 "make.options_file.c"
{
#line 3627 "make.options_file.c"
  {
#line 3629 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3632 "make.options_file.c"
    {
#line 3634 "make.options_file.c"
      make__options_file____Compare____mmc_option_type_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 3637 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3639 "make.options_file.c"
  }
#line 3641 "make.options_file.c"
}

#line 3644 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0_10001(
#line 3647 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3649 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3651 "make.options_file.c"
{
#line 3653 "make.options_file.c"
  {
#line 3655 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3658 "make.options_file.c"
    {
#line 3660 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____options_file_error_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3663 "make.options_file.c"
    return make__options_file__succeeded;
#line 3665 "make.options_file.c"
  }
#line 3667 "make.options_file.c"
}

#line 3670 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_file_error_0_0_10001(
#line 3673 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3675 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3677 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3679 "make.options_file.c"
{
#line 3681 "make.options_file.c"
  {
#line 3683 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3686 "make.options_file.c"
    {
#line 3688 "make.options_file.c"
      make__options_file____Compare____options_file_error_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 3691 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3693 "make.options_file.c"
  }
#line 3695 "make.options_file.c"
}

#line 3698 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0_10001(
#line 3701 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3703 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3705 "make.options_file.c"
{
#line 3707 "make.options_file.c"
  {
#line 3709 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3712 "make.options_file.c"
    {
#line 3714 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____options_file_line_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3717 "make.options_file.c"
    return make__options_file__succeeded;
#line 3719 "make.options_file.c"
  }
#line 3721 "make.options_file.c"
}

#line 3724 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_file_line_0_0_10001(
#line 3727 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3729 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3731 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3733 "make.options_file.c"
{
#line 3735 "make.options_file.c"
  {
#line 3737 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3740 "make.options_file.c"
    {
#line 3742 "make.options_file.c"
      make__options_file____Compare____options_file_line_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 3745 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3747 "make.options_file.c"
  }
#line 3749 "make.options_file.c"
}

#line 3752 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0_10001(
#line 3755 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3757 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3759 "make.options_file.c"
{
#line 3761 "make.options_file.c"
  {
#line 3763 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3766 "make.options_file.c"
    {
#line 3768 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____options_variable_0_0(((MR_String) make__options_file__wrapper_arg_1), ((MR_String) make__options_file__wrapper_arg_2));
    }
#line 3771 "make.options_file.c"
    return make__options_file__succeeded;
#line 3773 "make.options_file.c"
  }
#line 3775 "make.options_file.c"
}

#line 3778 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_0_0_10001(
#line 3781 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3783 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3785 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3787 "make.options_file.c"
{
#line 3789 "make.options_file.c"
  {
#line 3791 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3794 "make.options_file.c"
    {
#line 3796 "make.options_file.c"
      make__options_file____Compare____options_variable_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_String) make__options_file__wrapper_arg_2), ((MR_String) make__options_file__wrapper_arg_3));
    }
#line 3799 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3801 "make.options_file.c"
  }
#line 3803 "make.options_file.c"
}

#line 3806 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0_10001(
#line 3809 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3811 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3813 "make.options_file.c"
{
#line 3815 "make.options_file.c"
  {
#line 3817 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3820 "make.options_file.c"
    {
#line 3822 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____options_variable_class_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3825 "make.options_file.c"
    return make__options_file__succeeded;
#line 3827 "make.options_file.c"
  }
#line 3829 "make.options_file.c"
}

#line 3832 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0_10001(
#line 3835 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3837 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3839 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3841 "make.options_file.c"
{
#line 3843 "make.options_file.c"
  {
#line 3845 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3848 "make.options_file.c"
    {
#line 3850 "make.options_file.c"
      make__options_file____Compare____options_variable_class_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 3853 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3855 "make.options_file.c"
  }
#line 3857 "make.options_file.c"
}

#line 3860 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0_10001(
#line 3863 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3865 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3867 "make.options_file.c"
{
#line 3869 "make.options_file.c"
  {
#line 3871 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3874 "make.options_file.c"
    {
#line 3876 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____options_variable_type_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3879 "make.options_file.c"
    return make__options_file__succeeded;
#line 3881 "make.options_file.c"
  }
#line 3883 "make.options_file.c"
}

#line 3886 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0_10001(
#line 3889 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3891 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3893 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3895 "make.options_file.c"
{
#line 3897 "make.options_file.c"
  {
#line 3899 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3902 "make.options_file.c"
    {
#line 3904 "make.options_file.c"
      make__options_file____Compare____options_variable_type_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 3907 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3909 "make.options_file.c"
  }
#line 3911 "make.options_file.c"
}

#line 3914 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0_10001(
#line 3917 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3919 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3921 "make.options_file.c"
{
#line 3923 "make.options_file.c"
  {
#line 3925 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3928 "make.options_file.c"
    {
#line 3930 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____options_variable_value_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3933 "make.options_file.c"
    return make__options_file__succeeded;
#line 3935 "make.options_file.c"
  }
#line 3937 "make.options_file.c"
}

#line 3940 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variable_value_0_0_10001(
#line 3943 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3945 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 3947 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 3949 "make.options_file.c"
{
#line 3951 "make.options_file.c"
  {
#line 3953 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 3956 "make.options_file.c"
    {
#line 3958 "make.options_file.c"
      make__options_file____Compare____options_variable_value_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 3961 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 3963 "make.options_file.c"
  }
#line 3965 "make.options_file.c"
}

#line 3968 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0_10001(
#line 3971 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 3973 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 3975 "make.options_file.c"
{
#line 3977 "make.options_file.c"
  {
#line 3979 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 3982 "make.options_file.c"
    {
#line 3984 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____options_variables_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 3987 "make.options_file.c"
    return make__options_file__succeeded;
#line 3989 "make.options_file.c"
  }
#line 3991 "make.options_file.c"
}

#line 3994 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____options_variables_0_0_10001(
#line 3997 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 3999 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 4001 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 4003 "make.options_file.c"
{
#line 4005 "make.options_file.c"
  {
#line 4007 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 4010 "make.options_file.c"
    {
#line 4012 "make.options_file.c"
      make__options_file____Compare____options_variables_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 4015 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 4017 "make.options_file.c"
  }
#line 4019 "make.options_file.c"
}

#line 4022 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____search_0_0_10001(
#line 4025 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 4027 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 4029 "make.options_file.c"
{
#line 4031 "make.options_file.c"
  {
#line 4033 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 4036 "make.options_file.c"
    {
#line 4038 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____search_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 4041 "make.options_file.c"
    return make__options_file__succeeded;
#line 4043 "make.options_file.c"
  }
#line 4045 "make.options_file.c"
}

#line 4048 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____search_0_0_10001(
#line 4051 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 4053 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 4055 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 4057 "make.options_file.c"
{
#line 4059 "make.options_file.c"
  {
#line 4061 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 4064 "make.options_file.c"
    {
#line 4066 "make.options_file.c"
      make__options_file____Compare____search_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 4069 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 4071 "make.options_file.c"
  }
#line 4073 "make.options_file.c"
}

#line 4076 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0_10001(
#line 4079 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 4081 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 4083 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 4085 "make.options_file.c"
{
#line 4087 "make.options_file.c"
  {
#line 4089 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 4092 "make.options_file.c"
    {
#line 4094 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____variable_result_1_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 4097 "make.options_file.c"
    return make__options_file__succeeded;
#line 4099 "make.options_file.c"
  }
#line 4101 "make.options_file.c"
}

#line 4104 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____variable_result_1_0_10001(
#line 4107 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 4109 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_2,
#line 4111 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3,
#line 4113 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_4)
#line 4115 "make.options_file.c"
{
#line 4117 "make.options_file.c"
  {
#line 4119 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 4122 "make.options_file.c"
    {
#line 4124 "make.options_file.c"
      make__options_file____Compare____variable_result_1_0(((MR_Word) make__options_file__wrapper_arg_1), &make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_3), ((MR_Word) make__options_file__wrapper_arg_4));
    }
#line 4127 "make.options_file.c"
    *make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 4129 "make.options_file.c"
  }
#line 4131 "make.options_file.c"
}

#line 4134 "make.options_file.c"
static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0_10001(
#line 4137 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_1,
#line 4139 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2)
#line 4141 "make.options_file.c"
{
#line 4143 "make.options_file.c"
  {
#line 4145 "make.options_file.c"
    MR_bool make__options_file__succeeded;

#line 4148 "make.options_file.c"
    {
#line 4150 "make.options_file.c"
      make__options_file__succeeded = make__options_file____Unify____variable_source_0_0(((MR_Word) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2));
    }
#line 4153 "make.options_file.c"
    return make__options_file__succeeded;
#line 4155 "make.options_file.c"
  }
#line 4157 "make.options_file.c"
}

#line 4160 "make.options_file.c"
static void MR_CALL 
make__options_file____Compare____variable_source_0_0_10001(
#line 4163 "make.options_file.c"
  MR_Box * make__options_file__wrapper_arg_1,
#line 4165 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_2,
#line 4167 "make.options_file.c"
  MR_Box make__options_file__wrapper_arg_3)
#line 4169 "make.options_file.c"
{
#line 4171 "make.options_file.c"
  {
#line 4173 "make.options_file.c"
    MR_Word make__options_file__conv0_HeadVar__1_1;

#line 4176 "make.options_file.c"
    {
#line 4178 "make.options_file.c"
      make__options_file____Compare____variable_source_0_0(&make__options_file__conv0_HeadVar__1_1, ((MR_Word) make__options_file__wrapper_arg_2), ((MR_Word) make__options_file__wrapper_arg_3));
    }
#line 4181 "make.options_file.c"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__1_1));
#line 4183 "make.options_file.c"
  }
#line 4185 "make.options_file.c"
}

#line 109 "options_file.m"
static void MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 109 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1)
#line 109 "options_file.m"
{
#line 109 "options_file.m"
  {
#line 109 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 109 "options_file.m"
    *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "options_file.m"
  }
#line 109 "options_file.m"
}

#line 109 "options_file.m"
static MR_bool MR_CALL 
make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 109 "options_file.m"
{
#line 109 "options_file.m"
  {
#line 109 "options_file.m"
    return MR_TRUE;
#line 109 "options_file.m"
  }
#line 109 "options_file.m"
}

#line 1132 "options_file.m"
static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_options_variable__1132__1_1_p_0(
#line 1132 "options_file.m"
  MR_String make__options_file__HeadVar__1_51)
#line 1132 "options_file.m"
{
#line 1132 "options_file.m"
  {
#line 1132 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 1132 "options_file.m"
    {
#line 1132 "options_file.m"
      make__options_file__succeeded = mercury__string__prefix_2_p_0(make__options_file__HeadVar__1_51, (MR_String) "-l");
    }
#line 1132 "options_file.m"
    make__options_file__succeeded = !(make__options_file__succeeded);
#line 1132 "options_file.m"
    return make__options_file__succeeded;
#line 1132 "options_file.m"
  }
#line 1132 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Word MR_CALL 
make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(
#line 1022 "options_file.m"
  MR_String make__options_file__OptionName_9,
#line 1022 "options_file.m"
  MR_String make__options_file__HeadVar__2_14)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1022 "options_file.m"
    MR_Word make__options_file__HeadVar__3_15;
#line 1022 "options_file.m"
    MR_Word make__options_file__V_16_16;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "options_file.m"
      MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 0) = ((MR_Box) (make__options_file__HeadVar__2_14));
#line 1022 "options_file.m"
      MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "options_file.m"
    }
#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__HeadVar__3_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "options_file.m"
      MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_15, 0) = ((MR_Box) (make__options_file__OptionName_9));
#line 1022 "options_file.m"
      MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_15, 1) = ((MR_Box) (make__options_file__V_16_16));
#line 1022 "options_file.m"
    }
#line 1022 "options_file.m"
    return make__options_file__HeadVar__3_15;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 886 "options_file.m"
static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__886__1_2_p_0(
#line 886 "options_file.m"
  MR_Word make__options_file__HeadVar__1_24,
#line 886 "options_file.m"
  MR_Word * make__options_file__HeadVar__2_25)
#line 886 "options_file.m"
{
#line 886 "options_file.m"
  {
#line 886 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 886 "options_file.m"
    if ((make__options_file__HeadVar__1_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "options_file.m"
      {
#line 888 "options_file.m"
        *make__options_file__HeadVar__2_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "options_file.m"
        make__options_file__succeeded = MR_TRUE;
#line 888 "options_file.m"
      }
#line 886 "options_file.m"
    else
#line 886 "options_file.m"
    if (((MR_tag((MR_Word) make__options_file__HeadVar__1_24)) == (MR_mktag((MR_Integer) 2))))
#line 884 "options_file.m"
      {
#line 884 "options_file.m"
        MR_Word make__options_file__Value_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__1_24, (MR_Integer) 0)));

#line 885 "options_file.m"
        {
#line 885 "options_file.m"
          MR_Word base;
#line 885 "options_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "options_file.m"
          *make__options_file__HeadVar__2_25 = base;
#line 885 "options_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Value_16));
#line 885 "options_file.m"
        }
#line 884 "options_file.m"
        make__options_file__succeeded = MR_TRUE;
#line 884 "options_file.m"
      }
#line 886 "options_file.m"
    else
#line 886 "options_file.m"
      make__options_file__succeeded = MR_FALSE;
#line 886 "options_file.m"
    return make__options_file__succeeded;
#line 886 "options_file.m"
  }
#line 886 "options_file.m"
}

#line 757 "options_file.m"
static void MR_CALL 
make__options_file__IntroducedFrom__pred__checked_split_into_words__757__1_2_p_0(
#line 757 "options_file.m"
  MR_Word make__options_file__Chars_3,
#line 757 "options_file.m"
  MR_Word * make__options_file__HeadVar__2_11)
#line 757 "options_file.m"
{
#line 774 "options_file.m"
  {
#line 774 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 774 "options_file.m"
    MR_Word make__options_file__V_18_18;

#line 774 "options_file.m"
    {
#line 774 "options_file.m"
      make__options_file__V_18_18 = make__options_file__split_into_words_2_2_f_0(make__options_file__Chars_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 774 "options_file.m"
    {
#line 774 "options_file.m"
      *make__options_file__HeadVar__2_11 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_18_18);
    }
#line 774 "options_file.m"
  }
#line 757 "options_file.m"
}

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(
#line 653 "options_file.m"
  MR_Word make__options_file__HeadVar__1_13,
#line 653 "options_file.m"
  MR_Char make__options_file__HeadVar__2_20)
#line 653 "options_file.m"
{
#line 653 "options_file.m"
  {
#line 653 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 653 "options_file.m"
    {
#line 653 "options_file.m"
      return make__options_file__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__HeadVar__1_13, ((MR_Box) (MR_Word) (make__options_file__HeadVar__2_20)));
    }
#line 653 "options_file.m"
    return make__options_file__succeeded;
#line 653 "options_file.m"
  }
#line 653 "options_file.m"
}

#line 157 "options_file.m"
static void MR_CALL 
make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(
#line 157 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 157 "options_file.m"
  MR_String make__options_file__OptionsFile_8,
#line 157 "options_file.m"
  MR_Word make__options_file__Variables0_9,
#line 157 "options_file.m"
  MR_Word * make__options_file__HeadVar__4_22)
#line 157 "options_file.m"
{
#line 157 "options_file.m"
  {
#line 157 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 159 "options_file.m"
    {
#line 159 "options_file.m"
      make__options_file__read_options_file_params_9_p_0(make__options_file__Globals_7, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__options_file__OptionsFile_8, make__options_file__Variables0_9, make__options_file__HeadVar__4_22);
#line 159 "options_file.m"
      return;
    }
#line 157 "options_file.m"
  }
#line 157 "options_file.m"
}

#line 121 "options_file.m"
static void MR_CALL 
make__options_file____Compare____variable_source_0_0(
#line 121 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 121 "options_file.m"
{
#line 121 "options_file.m"
  {
#line 121 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 121 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 121 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 121 "options_file.m"
    {
#line 121 "options_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
#line 121 "options_file.m"
      return;
    }
#line 121 "options_file.m"
  }
#line 121 "options_file.m"
}

#line 121 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____variable_source_0_0(
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 121 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 121 "options_file.m"
{
#line 4480 "make.options_file.c"
  {
#line 4482 "make.options_file.c"
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

#line 4485 "make.options_file.c"
    return make__options_file__succeeded;
#line 4487 "make.options_file.c"
  }
#line 121 "options_file.m"
}

#line 1067 "options_file.m"
static void MR_CALL 
make__options_file____Compare____variable_result_1_0(
#line 1067 "options_file.m"
  MR_Word make__options_file__TypeInfo_for_T_18,
#line 1067 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 1067 "options_file.m"
{
#line 1067 "options_file.m"
  {
#line 1067 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1067 "options_file.m"
    MR_Integer make__options_file__CastX_16 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 1067 "options_file.m"
    MR_Integer make__options_file__CastY_17 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 1067 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_16 == make__options_file__CastY_17);
#line 1067 "options_file.m"
    if (make__options_file__succeeded)
#line 4518 "make.options_file.c"
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 1067 "options_file.m"
    else
#line 1067 "options_file.m"
#line 1067 "options_file.m"
      switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
#line 1067 "options_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "options_file.m"
        case (MR_Integer) 0:
#line 1067 "options_file.m"
#line 1067 "options_file.m"
          switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
#line 1067 "options_file.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "options_file.m"
            case (MR_Integer) 0:
#line 1067 "options_file.m"
              *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 1067 "options_file.m"
              break;
#line 1067 "options_file.m"
            case (MR_Integer) 1:
#line 4542 "make.options_file.c"
              *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 1067 "options_file.m"
              break;
#line 1067 "options_file.m"
            case (MR_Integer) 2:
#line 4548 "make.options_file.c"
              *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 1067 "options_file.m"
              break;
#line 1067 "options_file.m"
          }
#line 1067 "options_file.m"
          break;
#line 1067 "options_file.m"
        case (MR_Integer) 1:
#line 1067 "options_file.m"
          {
#line 1067 "options_file.m"
            MR_Word make__options_file__V_20_20 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__2_2), (MR_Integer) 1);

#line 1067 "options_file.m"
#line 1067 "options_file.m"
            switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
#line 1067 "options_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "options_file.m"
              case (MR_Integer) 0:
#line 4570 "make.options_file.c"
                *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 1067 "options_file.m"
                break;
#line 1067 "options_file.m"
              case (MR_Integer) 1:
#line 1067 "options_file.m"
                {
#line 1067 "options_file.m"
                  MR_Word make__options_file__V_15_15 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__3_3), (MR_Integer) 1);

#line 1067 "options_file.m"
                  {
#line 1067 "options_file.m"
                    parse_tree__error_util____Compare____error_spec_0_0(make__options_file__HeadVar__1_1, make__options_file__V_20_20, make__options_file__V_15_15);
#line 1067 "options_file.m"
                    return;
                  }
#line 1067 "options_file.m"
                }
#line 1067 "options_file.m"
                break;
#line 1067 "options_file.m"
              case (MR_Integer) 2:
#line 4594 "make.options_file.c"
                *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 1067 "options_file.m"
                break;
#line 1067 "options_file.m"
            }
#line 1067 "options_file.m"
          }
#line 1067 "options_file.m"
          break;
#line 1067 "options_file.m"
        case (MR_Integer) 2:
#line 1067 "options_file.m"
          {
#line 1067 "options_file.m"
            MR_Box make__options_file__V_21_21 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__2_2, (MR_Integer) 0));

#line 1067 "options_file.m"
#line 1067 "options_file.m"
            switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
#line 1067 "options_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "options_file.m"
              case (MR_Integer) 0:
#line 4618 "make.options_file.c"
                *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 1067 "options_file.m"
                break;
#line 1067 "options_file.m"
              case (MR_Integer) 1:
#line 4624 "make.options_file.c"
                *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 1067 "options_file.m"
                break;
#line 1067 "options_file.m"
              case (MR_Integer) 2:
#line 1067 "options_file.m"
                {
#line 1067 "options_file.m"
                  MR_Box make__options_file__V_5_5 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__3_3, (MR_Integer) 0));

#line 1067 "options_file.m"
                  {
#line 1067 "options_file.m"
                    mercury__builtin__compare_3_p_0(make__options_file__TypeInfo_for_T_18, make__options_file__HeadVar__1_1, make__options_file__V_21_21, make__options_file__V_5_5);
#line 1067 "options_file.m"
                    return;
                  }
#line 1067 "options_file.m"
                }
#line 1067 "options_file.m"
                break;
#line 1067 "options_file.m"
            }
#line 1067 "options_file.m"
          }
#line 1067 "options_file.m"
          break;
#line 1067 "options_file.m"
      }
#line 1067 "options_file.m"
  }
#line 1067 "options_file.m"
}

#line 1067 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____variable_result_1_0(
#line 1067 "options_file.m"
  MR_Word make__options_file__TypeInfo_for_T_11,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 1067 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 1067 "options_file.m"
{
#line 1067 "options_file.m"
  {
#line 1067 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1067 "options_file.m"
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 1067 "options_file.m"
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 1067 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
#line 1067 "options_file.m"
    if (make__options_file__succeeded)
#line 1067 "options_file.m"
      make__options_file__succeeded = MR_TRUE;
#line 1067 "options_file.m"
    else
#line 1067 "options_file.m"
#line 1067 "options_file.m"
      switch (MR_tag((MR_Word) make__options_file__HeadVar__1_1)) {
#line 1067 "options_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1067 "options_file.m"
        case (MR_Integer) 0:
#line 1067 "options_file.m"
          {
#line 1067 "options_file.m"
            MR_Integer make__options_file__CastX_5 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 1067 "options_file.m"
            MR_Integer make__options_file__CastY_6 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 1067 "options_file.m"
            make__options_file__succeeded = (make__options_file__CastY_6 == make__options_file__CastX_5);
#line 1067 "options_file.m"
          }
#line 1067 "options_file.m"
          break;
#line 1067 "options_file.m"
        case (MR_Integer) 1:
#line 1067 "options_file.m"
          {
#line 1067 "options_file.m"
            MR_Word make__options_file__V_7_7 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__1_1), (MR_Integer) 1);
#line 1067 "options_file.m"
            MR_Word make__options_file__V_8_8;

#line 1067 "options_file.m"
            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1067 "options_file.m"
            if (make__options_file__succeeded)
#line 1067 "options_file.m"
              {
#line 1067 "options_file.m"
                make__options_file__V_8_8 = (MR_Word) MR_body(((MR_Word) make__options_file__HeadVar__2_2), (MR_Integer) 1);
#line 4724 "make.options_file.c"
                {
#line 4726 "make.options_file.c"
                  return make__options_file__succeeded = parse_tree__error_util____Unify____error_spec_0_0(make__options_file__V_7_7, make__options_file__V_8_8);
                }
#line 1067 "options_file.m"
              }
#line 1067 "options_file.m"
          }
#line 1067 "options_file.m"
          break;
#line 1067 "options_file.m"
        case (MR_Integer) 2:
#line 1067 "options_file.m"
          {
#line 1067 "options_file.m"
            MR_Box make__options_file__V_3_3 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__1_1, (MR_Integer) 0));
#line 1067 "options_file.m"
            MR_Box make__options_file__V_4_4;

#line 1067 "options_file.m"
            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1067 "options_file.m"
            if (make__options_file__succeeded)
#line 1067 "options_file.m"
              {
#line 1067 "options_file.m"
                make__options_file__V_4_4 = (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__2_2, (MR_Integer) 0));
#line 4752 "make.options_file.c"
                {
#line 4754 "make.options_file.c"
                  return make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_for_T_11, make__options_file__V_3_3, make__options_file__V_4_4);
                }
#line 1067 "options_file.m"
              }
#line 1067 "options_file.m"
          }
#line 1067 "options_file.m"
          break;
#line 1067 "options_file.m"
      }
#line 1067 "options_file.m"
    return make__options_file__succeeded;
#line 1067 "options_file.m"
  }
#line 1067 "options_file.m"
}

#line 219 "options_file.m"
static void MR_CALL 
make__options_file____Compare____search_0_0(
#line 219 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 219 "options_file.m"
{
#line 219 "options_file.m"
  {
#line 219 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 219 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 219 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 219 "options_file.m"
    {
#line 219 "options_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
#line 219 "options_file.m"
      return;
    }
#line 219 "options_file.m"
  }
#line 219 "options_file.m"
}

#line 219 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____search_0_0(
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 219 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 219 "options_file.m"
{
#line 4813 "make.options_file.c"
  {
#line 4815 "make.options_file.c"
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

#line 4818 "make.options_file.c"
    return make__options_file__succeeded;
#line 4820 "make.options_file.c"
  }
#line 219 "options_file.m"
}

#line 112 "options_file.m"
void MR_CALL 
make__options_file____Compare____options_variables_0_0(
#line 112 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 112 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 112 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 112 "options_file.m"
{
#line 112 "options_file.m"
  {
#line 112 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 112 "options_file.m"
    MR_Word make__options_file__Cast_HeadVar1_4 = make__options_file__HeadVar__2_2;
#line 112 "options_file.m"
    MR_Word make__options_file__Cast_HeadVar2_5 = make__options_file__HeadVar__3_3;

#line 112 "options_file.m"
    {
#line 112 "options_file.m"
      mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__HeadVar__1_1, ((MR_Box) (make__options_file__Cast_HeadVar1_4)), ((MR_Box) (make__options_file__Cast_HeadVar2_5)));
#line 112 "options_file.m"
      return;
    }
#line 112 "options_file.m"
  }
#line 112 "options_file.m"
}

#line 112 "options_file.m"
MR_bool MR_CALL 
make__options_file____Unify____options_variables_0_0(
#line 112 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 112 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 112 "options_file.m"
{
#line 112 "options_file.m"
  {
#line 112 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 112 "options_file.m"
    MR_Word make__options_file__Cast_HeadVar1_3 = make__options_file__HeadVar__1_1;
#line 112 "options_file.m"
    MR_Word make__options_file__Cast_HeadVar2_4 = make__options_file__HeadVar__2_2;

#line 112 "options_file.m"
    {
#line 112 "options_file.m"
      return make__options_file__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__options_file_scalar_common_1[0], ((MR_Box) (make__options_file__Cast_HeadVar1_3)), ((MR_Box) (make__options_file__Cast_HeadVar2_4)));
    }
#line 112 "options_file.m"
    return make__options_file__succeeded;
#line 112 "options_file.m"
  }
#line 112 "options_file.m"
}

#line 114 "options_file.m"
void MR_CALL 
make__options_file____Compare____options_variable_value_0_0(
#line 114 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 114 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 114 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 114 "options_file.m"
{
#line 114 "options_file.m"
  {
#line 114 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 114 "options_file.m"
    MR_Integer make__options_file__CastX_12 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 114 "options_file.m"
    MR_Integer make__options_file__CastY_13 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 114 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_12 == make__options_file__CastY_13);
#line 114 "options_file.m"
    if (make__options_file__succeeded)
#line 4911 "make.options_file.c"
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "options_file.m"
    else
#line 114 "options_file.m"
      {
#line 114 "options_file.m"
        MR_Word make__options_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 2)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_10_10;

#line 114 "options_file.m"
        {
#line 114 "options_file.m"
          mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], &make__options_file__V_10_10, ((MR_Box) (make__options_file__V_4_4)), ((MR_Box) (make__options_file__V_7_7)));
        }
#line 4937 "make.options_file.c"
        make__options_file__succeeded = (make__options_file__V_10_10 == (MR_Integer) 0);
#line 114 "options_file.m"
        make__options_file__succeeded = !(make__options_file__succeeded);
#line 114 "options_file.m"
        if (make__options_file__succeeded)
#line 114 "options_file.m"
          *make__options_file__HeadVar__1_1 = make__options_file__V_10_10;
#line 114 "options_file.m"
        else
#line 114 "options_file.m"
          {
#line 114 "options_file.m"
            MR_Word make__options_file__V_11_11;

#line 114 "options_file.m"
            {
#line 114 "options_file.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[0], &make__options_file__V_11_11, ((MR_Box) (make__options_file__V_5_5)), ((MR_Box) (make__options_file__V_8_8)));
            }
#line 4957 "make.options_file.c"
            make__options_file__succeeded = (make__options_file__V_11_11 == (MR_Integer) 0);
#line 114 "options_file.m"
            make__options_file__succeeded = !(make__options_file__succeeded);
#line 114 "options_file.m"
            if (make__options_file__succeeded)
#line 114 "options_file.m"
              *make__options_file__HeadVar__1_1 = make__options_file__V_11_11;
#line 114 "options_file.m"
            else
#line 114 "options_file.m"
              {
#line 114 "options_file.m"
                MR_Integer make__options_file__V_17_17 = (MR_Integer) make__options_file__V_6_6;
#line 114 "options_file.m"
                MR_Integer make__options_file__V_18_18 = (MR_Integer) make__options_file__V_9_9;

#line 114 "options_file.m"
                {
#line 114 "options_file.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__V_17_17, make__options_file__V_18_18);
#line 114 "options_file.m"
                  return;
                }
#line 114 "options_file.m"
              }
#line 114 "options_file.m"
          }
#line 114 "options_file.m"
      }
#line 114 "options_file.m"
  }
#line 114 "options_file.m"
}

#line 114 "options_file.m"
MR_bool MR_CALL 
make__options_file____Unify____options_variable_value_0_0(
#line 114 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 114 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 114 "options_file.m"
{
#line 114 "options_file.m"
  {
#line 114 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 114 "options_file.m"
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 114 "options_file.m"
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 114 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
#line 114 "options_file.m"
    if (make__options_file__succeeded)
#line 114 "options_file.m"
      make__options_file__succeeded = MR_TRUE;
#line 114 "options_file.m"
    else
#line 114 "options_file.m"
      {
#line 114 "options_file.m"
        MR_Word make__options_file__TypeInfo_12_12;
#line 114 "options_file.m"
        MR_Word make__options_file__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 2)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "options_file.m"
        MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));

#line 5035 "make.options_file.c"
        {
#line 5037 "make.options_file.c"
          make__options_file__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__options_file_scalar_common_2[3], ((MR_Box) (make__options_file__V_3_3)), ((MR_Box) (make__options_file__V_6_6)));
        }
#line 114 "options_file.m"
        if (make__options_file__succeeded)
#line 114 "options_file.m"
          {
#line 5044 "make.options_file.c"
            make__options_file__TypeInfo_12_12 = (MR_Word) &make__options_file_scalar_common_2[0];
#line 5046 "make.options_file.c"
            {
#line 5048 "make.options_file.c"
              make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_12_12, ((MR_Box) (make__options_file__V_4_4)), ((MR_Box) (make__options_file__V_7_7)));
            }
#line 114 "options_file.m"
            if (make__options_file__succeeded)
#line 5053 "make.options_file.c"
              make__options_file__succeeded = (make__options_file__V_5_5 == make__options_file__V_8_8);
#line 114 "options_file.m"
          }
#line 114 "options_file.m"
      }
#line 114 "options_file.m"
    return make__options_file__succeeded;
#line 114 "options_file.m"
  }
#line 114 "options_file.m"
}

#line 907 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_variable_type_0_0(
#line 907 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 907 "options_file.m"
{
#line 907 "options_file.m"
  {
#line 907 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 907 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 907 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 907 "options_file.m"
    {
#line 907 "options_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
#line 907 "options_file.m"
      return;
    }
#line 907 "options_file.m"
  }
#line 907 "options_file.m"
}

#line 907 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_type_0_0(
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 907 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 907 "options_file.m"
{
#line 5107 "make.options_file.c"
  {
#line 5109 "make.options_file.c"
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

#line 5112 "make.options_file.c"
    return make__options_file__succeeded;
#line 5114 "make.options_file.c"
  }
#line 907 "options_file.m"
}

#line 902 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_variable_class_0_0(
#line 902 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 902 "options_file.m"
{
#line 902 "options_file.m"
  {
#line 902 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 902 "options_file.m"
    MR_Integer make__options_file__CastX_10 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 902 "options_file.m"
    MR_Integer make__options_file__CastY_11 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 902 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_10 == make__options_file__CastY_11);
#line 902 "options_file.m"
    if (make__options_file__succeeded)
#line 5143 "make.options_file.c"
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 902 "options_file.m"
    else
#line 902 "options_file.m"
#line 902 "options_file.m"
      switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
#line 902 "options_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
        case (MR_Integer) 0:
#line 902 "options_file.m"
#line 902 "options_file.m"
          switch (MR_unmkbody(make__options_file__HeadVar__2_2)) {
#line 902 "options_file.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
            case (MR_Integer) 0:
#line 902 "options_file.m"
#line 902 "options_file.m"
              switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
#line 902 "options_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
                case (MR_Integer) 0:
#line 902 "options_file.m"
#line 902 "options_file.m"
                  switch (MR_unmkbody(make__options_file__HeadVar__3_3)) {
#line 902 "options_file.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
                    case (MR_Integer) 0:
#line 902 "options_file.m"
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 902 "options_file.m"
                      break;
#line 902 "options_file.m"
                    case (MR_Integer) 1:
#line 902 "options_file.m"
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 902 "options_file.m"
                      break;
#line 902 "options_file.m"
                  }
#line 902 "options_file.m"
                  break;
#line 902 "options_file.m"
                case (MR_Integer) 1:
#line 5191 "make.options_file.c"
                  *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 902 "options_file.m"
                  break;
#line 902 "options_file.m"
              }
#line 902 "options_file.m"
              break;
#line 902 "options_file.m"
            case (MR_Integer) 1:
#line 902 "options_file.m"
#line 902 "options_file.m"
              switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
#line 902 "options_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
                case (MR_Integer) 0:
#line 902 "options_file.m"
#line 902 "options_file.m"
                  switch (MR_unmkbody(make__options_file__HeadVar__3_3)) {
#line 902 "options_file.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
                    case (MR_Integer) 0:
#line 902 "options_file.m"
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 902 "options_file.m"
                      break;
#line 902 "options_file.m"
                    case (MR_Integer) 1:
#line 902 "options_file.m"
                      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 902 "options_file.m"
                      break;
#line 902 "options_file.m"
                  }
#line 902 "options_file.m"
                  break;
#line 902 "options_file.m"
                case (MR_Integer) 1:
#line 5231 "make.options_file.c"
                  *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 902 "options_file.m"
                  break;
#line 902 "options_file.m"
              }
#line 902 "options_file.m"
              break;
#line 902 "options_file.m"
          }
#line 902 "options_file.m"
          break;
#line 902 "options_file.m"
        case (MR_Integer) 1:
#line 902 "options_file.m"
          {
#line 902 "options_file.m"
            MR_Word make__options_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

#line 902 "options_file.m"
#line 902 "options_file.m"
            switch (MR_tag((MR_Word) make__options_file__HeadVar__3_3)) {
#line 902 "options_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
              case (MR_Integer) 0:
#line 902 "options_file.m"
#line 902 "options_file.m"
                switch (MR_unmkbody(make__options_file__HeadVar__3_3)) {
#line 902 "options_file.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
                  case (MR_Integer) 0:
#line 5264 "make.options_file.c"
                    *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 902 "options_file.m"
                    break;
#line 902 "options_file.m"
                  case (MR_Integer) 1:
#line 5270 "make.options_file.c"
                    *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 902 "options_file.m"
                    break;
#line 902 "options_file.m"
                }
#line 902 "options_file.m"
                break;
#line 902 "options_file.m"
              case (MR_Integer) 1:
#line 902 "options_file.m"
                {
#line 902 "options_file.m"
                  MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));

#line 902 "options_file.m"
                  {
#line 902 "options_file.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(make__options_file__HeadVar__1_1, make__options_file__V_13_13, make__options_file__V_9_9);
#line 902 "options_file.m"
                    return;
                  }
#line 902 "options_file.m"
                }
#line 902 "options_file.m"
                break;
#line 902 "options_file.m"
            }
#line 902 "options_file.m"
          }
#line 902 "options_file.m"
          break;
#line 902 "options_file.m"
      }
#line 902 "options_file.m"
  }
#line 902 "options_file.m"
}

#line 902 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_class_0_0(
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 902 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 902 "options_file.m"
{
#line 902 "options_file.m"
  {
#line 902 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 902 "options_file.m"
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 902 "options_file.m"
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 902 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
#line 902 "options_file.m"
    if (make__options_file__succeeded)
#line 902 "options_file.m"
      make__options_file__succeeded = MR_TRUE;
#line 902 "options_file.m"
    else
#line 902 "options_file.m"
#line 902 "options_file.m"
      switch (MR_tag((MR_Word) make__options_file__HeadVar__1_1)) {
#line 902 "options_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
        case (MR_Integer) 0:
#line 902 "options_file.m"
#line 902 "options_file.m"
          switch (MR_unmkbody(make__options_file__HeadVar__1_1)) {
#line 902 "options_file.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 902 "options_file.m"
            case (MR_Integer) 0:
#line 902 "options_file.m"
              {
#line 902 "options_file.m"
                MR_Integer make__options_file__CastX_3 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 902 "options_file.m"
                MR_Integer make__options_file__CastY_4 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 902 "options_file.m"
                make__options_file__succeeded = (make__options_file__CastY_4 == make__options_file__CastX_3);
#line 902 "options_file.m"
              }
#line 902 "options_file.m"
              break;
#line 902 "options_file.m"
            case (MR_Integer) 1:
#line 902 "options_file.m"
              {
#line 902 "options_file.m"
                MR_Integer make__options_file__CastX_5 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 902 "options_file.m"
                MR_Integer make__options_file__CastY_6 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 902 "options_file.m"
                make__options_file__succeeded = (make__options_file__CastY_6 == make__options_file__CastX_5);
#line 902 "options_file.m"
              }
#line 902 "options_file.m"
              break;
#line 902 "options_file.m"
          }
#line 902 "options_file.m"
          break;
#line 902 "options_file.m"
        case (MR_Integer) 1:
#line 902 "options_file.m"
          {
#line 902 "options_file.m"
            MR_Word make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
#line 902 "options_file.m"
            MR_Word make__options_file__V_8_8;

#line 902 "options_file.m"
            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 902 "options_file.m"
            if (make__options_file__succeeded)
#line 902 "options_file.m"
              {
#line 902 "options_file.m"
                make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 5398 "make.options_file.c"
                {
#line 5400 "make.options_file.c"
                  return make__options_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(make__options_file__V_7_7, make__options_file__V_8_8);
                }
#line 902 "options_file.m"
              }
#line 902 "options_file.m"
          }
#line 902 "options_file.m"
          break;
#line 902 "options_file.m"
      }
#line 902 "options_file.m"
    return make__options_file__succeeded;
#line 902 "options_file.m"
  }
#line 902 "options_file.m"
}

#line 104 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_variable_0_0(
#line 104 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__2_2,
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__3_3)
#line 104 "options_file.m"
{
#line 104 "options_file.m"
  {
#line 104 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 104 "options_file.m"
    MR_String make__options_file__Cast_HeadVar1_4 = make__options_file__HeadVar__2_2;
#line 104 "options_file.m"
    MR_String make__options_file__Cast_HeadVar2_5 = make__options_file__HeadVar__3_3;

#line 104 "options_file.m"
    {
#line 104 "options_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
#line 104 "options_file.m"
      return;
    }
#line 104 "options_file.m"
  }
#line 104 "options_file.m"
}

#line 104 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_variable_0_0(
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__1_1,
#line 104 "options_file.m"
  MR_String make__options_file__HeadVar__2_2)
#line 104 "options_file.m"
{
#line 104 "options_file.m"
  {
#line 104 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 104 "options_file.m"
    MR_String make__options_file__Cast_HeadVar1_3 = make__options_file__HeadVar__1_1;
#line 104 "options_file.m"
    MR_String make__options_file__Cast_HeadVar2_4 = make__options_file__HeadVar__2_2;

#line 104 "options_file.m"
    make__options_file__succeeded = (strcmp(make__options_file__Cast_HeadVar1_3, make__options_file__Cast_HeadVar2_4) == 0);
#line 104 "options_file.m"
    return make__options_file__succeeded;
#line 104 "options_file.m"
  }
#line 104 "options_file.m"
}

#line 588 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_file_line_0_0(
#line 588 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 588 "options_file.m"
{
#line 588 "options_file.m"
  {
#line 588 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 588 "options_file.m"
    MR_Integer make__options_file__CastX_27 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 588 "options_file.m"
    MR_Integer make__options_file__CastY_28 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 588 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_27 == make__options_file__CastY_28);
#line 588 "options_file.m"
    if (make__options_file__succeeded)
#line 5501 "make.options_file.c"
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 588 "options_file.m"
    else
#line 588 "options_file.m"
    if (((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 588 "options_file.m"
      {
#line 588 "options_file.m"
        MR_Word make__options_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));
#line 588 "options_file.m"
        MR_Word make__options_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 588 "options_file.m"
        MR_String make__options_file__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

#line 588 "options_file.m"
        if (((MR_tag((MR_Word) make__options_file__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 588 "options_file.m"
          {
#line 588 "options_file.m"
            MR_String make__options_file__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
#line 588 "options_file.m"
            MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
#line 588 "options_file.m"
            MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__3_3, (MR_Integer) 2)));
#line 588 "options_file.m"
            MR_Word make__options_file__V_10_10;

#line 588 "options_file.m"
            {
#line 588 "options_file.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&make__options_file__V_10_10, make__options_file__V_36_36, make__options_file__V_7_7);
            }
#line 5534 "make.options_file.c"
            make__options_file__succeeded = (make__options_file__V_10_10 == (MR_Integer) 0);
#line 588 "options_file.m"
            make__options_file__succeeded = !(make__options_file__succeeded);
#line 588 "options_file.m"
            if (make__options_file__succeeded)
#line 588 "options_file.m"
              *make__options_file__HeadVar__1_1 = make__options_file__V_10_10;
#line 588 "options_file.m"
            else
#line 588 "options_file.m"
              {
#line 588 "options_file.m"
                MR_Word make__options_file__V_11_11;
#line 588 "options_file.m"
                MR_Integer make__options_file__V_39_39 = (MR_Integer) make__options_file__V_35_35;
#line 588 "options_file.m"
                MR_Integer make__options_file__V_40_40 = (MR_Integer) make__options_file__V_8_8;

#line 588 "options_file.m"
                {
#line 588 "options_file.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&make__options_file__V_11_11, make__options_file__V_39_39, make__options_file__V_40_40);
                }
#line 5558 "make.options_file.c"
                make__options_file__succeeded = (make__options_file__V_11_11 == (MR_Integer) 0);
#line 588 "options_file.m"
                make__options_file__succeeded = !(make__options_file__succeeded);
#line 588 "options_file.m"
                if (make__options_file__succeeded)
#line 588 "options_file.m"
                  *make__options_file__HeadVar__1_1 = make__options_file__V_11_11;
#line 588 "options_file.m"
                else
#line 588 "options_file.m"
                  {
#line 588 "options_file.m"
                    {
#line 588 "options_file.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], make__options_file__HeadVar__1_1, ((MR_Box) (make__options_file__V_34_34)), ((MR_Box) (make__options_file__V_9_9)));
#line 588 "options_file.m"
                      return;
                    }
#line 588 "options_file.m"
                  }
#line 588 "options_file.m"
              }
#line 588 "options_file.m"
          }
#line 588 "options_file.m"
        else
#line 5585 "make.options_file.c"
          *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 588 "options_file.m"
      }
#line 588 "options_file.m"
    else
#line 588 "options_file.m"
      {
#line 588 "options_file.m"
        MR_Word make__options_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 588 "options_file.m"
        MR_Word make__options_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

#line 588 "options_file.m"
        if (((MR_tag((MR_Word) make__options_file__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5600 "make.options_file.c"
          *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 588 "options_file.m"
        else
#line 588 "options_file.m"
          {
#line 588 "options_file.m"
            MR_Word make__options_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
#line 588 "options_file.m"
            MR_Word make__options_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
#line 588 "options_file.m"
            MR_Word make__options_file__V_26_26;
#line 588 "options_file.m"
            MR_Integer make__options_file__V_41_41 = (MR_Integer) make__options_file__V_38_38;
#line 588 "options_file.m"
            MR_Integer make__options_file__V_42_42 = (MR_Integer) make__options_file__V_24_24;

#line 588 "options_file.m"
            {
#line 588 "options_file.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&make__options_file__V_26_26, make__options_file__V_41_41, make__options_file__V_42_42);
            }
#line 5622 "make.options_file.c"
            make__options_file__succeeded = (make__options_file__V_26_26 == (MR_Integer) 0);
#line 588 "options_file.m"
            make__options_file__succeeded = !(make__options_file__succeeded);
#line 588 "options_file.m"
            if (make__options_file__succeeded)
#line 588 "options_file.m"
              *make__options_file__HeadVar__1_1 = make__options_file__V_26_26;
#line 588 "options_file.m"
            else
#line 588 "options_file.m"
              {
#line 588 "options_file.m"
                {
#line 588 "options_file.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[3], make__options_file__HeadVar__1_1, ((MR_Box) (make__options_file__V_37_37)), ((MR_Box) (make__options_file__V_25_25)));
#line 588 "options_file.m"
                  return;
                }
#line 588 "options_file.m"
              }
#line 588 "options_file.m"
          }
#line 588 "options_file.m"
      }
#line 588 "options_file.m"
  }
#line 588 "options_file.m"
}

#line 588 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_line_0_0(
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 588 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 588 "options_file.m"
{
#line 588 "options_file.m"
  {
#line 588 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 588 "options_file.m"
    MR_Integer make__options_file__CastX_13 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 588 "options_file.m"
    MR_Integer make__options_file__CastY_14 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 588 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_13 == make__options_file__CastY_14);
#line 588 "options_file.m"
    if (make__options_file__succeeded)
#line 588 "options_file.m"
      make__options_file__succeeded = MR_TRUE;
#line 588 "options_file.m"
    else
#line 588 "options_file.m"
    if (((MR_tag((MR_Word) make__options_file__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 588 "options_file.m"
      {
#line 588 "options_file.m"
        MR_Word make__options_file__TypeInfo_15_15;
#line 588 "options_file.m"
        MR_String make__options_file__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
#line 588 "options_file.m"
        MR_Word make__options_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
#line 588 "options_file.m"
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 2)));
#line 588 "options_file.m"
        MR_String make__options_file__V_6_6;
#line 588 "options_file.m"
        MR_Word make__options_file__V_7_7;
#line 588 "options_file.m"
        MR_Word make__options_file__V_8_8;

#line 588 "options_file.m"
        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 588 "options_file.m"
        if (make__options_file__succeeded)
#line 588 "options_file.m"
          {
#line 588 "options_file.m"
            make__options_file__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 588 "options_file.m"
            make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 588 "options_file.m"
            make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__2_2, (MR_Integer) 2)));
#line 5709 "make.options_file.c"
            make__options_file__succeeded = (strcmp(make__options_file__V_3_3, make__options_file__V_6_6) == 0);
#line 588 "options_file.m"
            if (make__options_file__succeeded)
#line 588 "options_file.m"
              {
#line 5715 "make.options_file.c"
                make__options_file__succeeded = (make__options_file__V_4_4 == make__options_file__V_7_7);
#line 588 "options_file.m"
                if (make__options_file__succeeded)
#line 588 "options_file.m"
                  {
#line 5721 "make.options_file.c"
                    make__options_file__TypeInfo_15_15 = (MR_Word) &make__options_file_scalar_common_2[3];
#line 5723 "make.options_file.c"
                    {
#line 5725 "make.options_file.c"
                      return make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_15_15, ((MR_Box) (make__options_file__V_5_5)), ((MR_Box) (make__options_file__V_8_8)));
                    }
#line 588 "options_file.m"
                  }
#line 588 "options_file.m"
              }
#line 588 "options_file.m"
          }
#line 588 "options_file.m"
      }
#line 588 "options_file.m"
    else
#line 588 "options_file.m"
      {
#line 588 "options_file.m"
        MR_Word make__options_file__TypeInfo_16_16;
#line 588 "options_file.m"
        MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
#line 588 "options_file.m"
        MR_Word make__options_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
#line 588 "options_file.m"
        MR_Word make__options_file__V_11_11;
#line 588 "options_file.m"
        MR_Word make__options_file__V_12_12;

#line 588 "options_file.m"
        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 588 "options_file.m"
        if (make__options_file__succeeded)
#line 588 "options_file.m"
          {
#line 588 "options_file.m"
            make__options_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 588 "options_file.m"
            make__options_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 5761 "make.options_file.c"
            make__options_file__succeeded = (make__options_file__V_9_9 == make__options_file__V_11_11);
#line 588 "options_file.m"
            if (make__options_file__succeeded)
#line 588 "options_file.m"
              {
#line 5767 "make.options_file.c"
                make__options_file__TypeInfo_16_16 = (MR_Word) &make__options_file_scalar_common_2[3];
#line 5769 "make.options_file.c"
                {
#line 5771 "make.options_file.c"
                  return make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_16_16, ((MR_Box) (make__options_file__V_10_10)), ((MR_Box) (make__options_file__V_12_12)));
                }
#line 588 "options_file.m"
              }
#line 588 "options_file.m"
          }
#line 588 "options_file.m"
      }
#line 588 "options_file.m"
    return make__options_file__succeeded;
#line 588 "options_file.m"
  }
#line 588 "options_file.m"
}

#line 106 "options_file.m"
static void MR_CALL 
make__options_file____Compare____options_file_error_0_0(
#line 106 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 106 "options_file.m"
{
#line 106 "options_file.m"
  {
#line 106 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 106 "options_file.m"
    MR_Integer make__options_file__CastX_6 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 106 "options_file.m"
    MR_Integer make__options_file__CastY_7 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 106 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_6 == make__options_file__CastY_7);
#line 106 "options_file.m"
    if (make__options_file__succeeded)
#line 5811 "make.options_file.c"
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 106 "options_file.m"
    else
#line 106 "options_file.m"
      {
#line 106 "options_file.m"
        MR_String make__options_file__V_4_4 = (MR_String) make__options_file__HeadVar__2_2;
#line 106 "options_file.m"
        MR_String make__options_file__V_5_5 = (MR_String) make__options_file__HeadVar__3_3;

#line 106 "options_file.m"
        {
#line 106 "options_file.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(make__options_file__HeadVar__1_1, make__options_file__V_4_4, make__options_file__V_5_5);
#line 106 "options_file.m"
          return;
        }
#line 106 "options_file.m"
      }
#line 106 "options_file.m"
  }
#line 106 "options_file.m"
}

#line 106 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____options_file_error_0_0(
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 106 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 106 "options_file.m"
{
#line 106 "options_file.m"
  {
#line 106 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 106 "options_file.m"
    MR_Integer make__options_file__CastX_5 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 106 "options_file.m"
    MR_Integer make__options_file__CastY_6 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 106 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_5 == make__options_file__CastY_6);
#line 106 "options_file.m"
    if (make__options_file__succeeded)
#line 106 "options_file.m"
      make__options_file__succeeded = MR_TRUE;
#line 106 "options_file.m"
    else
#line 106 "options_file.m"
      {
#line 106 "options_file.m"
        MR_String make__options_file__V_3_3 = (MR_String) make__options_file__HeadVar__1_1;
#line 106 "options_file.m"
        MR_String make__options_file__V_4_4 = (MR_String) make__options_file__HeadVar__2_2;

#line 5869 "make.options_file.c"
        make__options_file__succeeded = (strcmp(make__options_file__V_3_3, make__options_file__V_4_4) == 0);
#line 106 "options_file.m"
      }
#line 106 "options_file.m"
    return make__options_file__succeeded;
#line 106 "options_file.m"
  }
#line 106 "options_file.m"
}

#line 1025 "options_file.m"
static void MR_CALL 
make__options_file____Compare____mmc_option_type_0_0(
#line 1025 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 1025 "options_file.m"
{
#line 1025 "options_file.m"
  {
#line 1025 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1025 "options_file.m"
    MR_Integer make__options_file__CastX_13 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 1025 "options_file.m"
    MR_Integer make__options_file__CastY_14 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 1025 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_13 == make__options_file__CastY_14);
#line 1025 "options_file.m"
    if (make__options_file__succeeded)
#line 5904 "make.options_file.c"
      *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 1025 "options_file.m"
    else
#line 1025 "options_file.m"
    if ((make__options_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1025 "options_file.m"
      if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1025 "options_file.m"
        *make__options_file__HeadVar__1_1 = (MR_Integer) 0;
#line 1025 "options_file.m"
      else
#line 5916 "make.options_file.c"
        *make__options_file__HeadVar__1_1 = (MR_Integer) 1;
#line 1025 "options_file.m"
    else
#line 1025 "options_file.m"
      {
#line 1025 "options_file.m"
        MR_String make__options_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1025 "options_file.m"
        MR_Word make__options_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));

#line 1025 "options_file.m"
        if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5929 "make.options_file.c"
          *make__options_file__HeadVar__1_1 = (MR_Integer) 2;
#line 1025 "options_file.m"
        else
#line 1025 "options_file.m"
          {
#line 1025 "options_file.m"
            MR_Word make__options_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
#line 1025 "options_file.m"
            MR_String make__options_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));
#line 1025 "options_file.m"
            MR_Word make__options_file__V_12_12;

#line 1025 "options_file.m"
            {
#line 1025 "options_file.m"
              mercury__builtin__compare_3_p_0((MR_Word) &make__options_file_scalar_common_2[0], &make__options_file__V_12_12, ((MR_Box) (make__options_file__V_18_18)), ((MR_Box) (make__options_file__V_10_10)));
            }
#line 5947 "make.options_file.c"
            make__options_file__succeeded = (make__options_file__V_12_12 == (MR_Integer) 0);
#line 1025 "options_file.m"
            make__options_file__succeeded = !(make__options_file__succeeded);
#line 1025 "options_file.m"
            if (make__options_file__succeeded)
#line 1025 "options_file.m"
              *make__options_file__HeadVar__1_1 = make__options_file__V_12_12;
#line 1025 "options_file.m"
            else
#line 1025 "options_file.m"
              {
#line 1025 "options_file.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(make__options_file__HeadVar__1_1, make__options_file__V_17_17, make__options_file__V_11_11);
#line 1025 "options_file.m"
                return;
              }
#line 1025 "options_file.m"
          }
#line 1025 "options_file.m"
      }
#line 1025 "options_file.m"
  }
#line 1025 "options_file.m"
}

#line 1025 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____mmc_option_type_0_0(
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 1025 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 1025 "options_file.m"
{
#line 1025 "options_file.m"
  {
#line 1025 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1025 "options_file.m"
    MR_Integer make__options_file__CastX_9 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 1025 "options_file.m"
    MR_Integer make__options_file__CastY_10 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 1025 "options_file.m"
    make__options_file__succeeded = (make__options_file__CastX_9 == make__options_file__CastY_10);
#line 1025 "options_file.m"
    if (make__options_file__succeeded)
#line 1025 "options_file.m"
      make__options_file__succeeded = MR_TRUE;
#line 1025 "options_file.m"
    else
#line 1025 "options_file.m"
    if ((make__options_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1025 "options_file.m"
      {
#line 1025 "options_file.m"
        MR_Integer make__options_file__CastX_3 = (MR_Integer) make__options_file__HeadVar__1_1;
#line 1025 "options_file.m"
        MR_Integer make__options_file__CastY_4 = (MR_Integer) make__options_file__HeadVar__2_2;

#line 1025 "options_file.m"
        make__options_file__succeeded = (make__options_file__CastY_4 == make__options_file__CastX_3);
#line 1025 "options_file.m"
      }
#line 1025 "options_file.m"
    else
#line 1025 "options_file.m"
      {
#line 1025 "options_file.m"
        MR_Word make__options_file__TypeInfo_11_11;
#line 1025 "options_file.m"
        MR_Word make__options_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1025 "options_file.m"
        MR_String make__options_file__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1025 "options_file.m"
        MR_Word make__options_file__V_7_7;
#line 1025 "options_file.m"
        MR_String make__options_file__V_8_8;

#line 1025 "options_file.m"
        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1025 "options_file.m"
        if (make__options_file__succeeded)
#line 1025 "options_file.m"
          {
#line 1025 "options_file.m"
            make__options_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1025 "options_file.m"
            make__options_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));
#line 6037 "make.options_file.c"
            make__options_file__TypeInfo_11_11 = (MR_Word) &make__options_file_scalar_common_2[0];
#line 6039 "make.options_file.c"
            {
#line 6041 "make.options_file.c"
              make__options_file__succeeded = mercury__builtin__unify_2_p_0(make__options_file__TypeInfo_11_11, ((MR_Box) (make__options_file__V_5_5)), ((MR_Box) (make__options_file__V_7_7)));
            }
#line 1025 "options_file.m"
            if (make__options_file__succeeded)
#line 6046 "make.options_file.c"
              make__options_file__succeeded = (strcmp(make__options_file__V_6_6, make__options_file__V_8_8) == 0);
#line 1025 "options_file.m"
          }
#line 1025 "options_file.m"
      }
#line 1025 "options_file.m"
    return make__options_file__succeeded;
#line 1025 "options_file.m"
  }
#line 1025 "options_file.m"
}

#line 109 "options_file.m"
static void MR_CALL 
make__options_file____Compare____found_options_file_error_0_0(
#line 109 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1)
#line 109 "options_file.m"
{
#line 109 "options_file.m"
  {
#line 109 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 109 "options_file.m"
    {
#line 109 "options_file.m"
      make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(make__options_file__HeadVar__1_1);
#line 109 "options_file.m"
      return;
    }
#line 109 "options_file.m"
  }
#line 109 "options_file.m"
}

#line 109 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____found_options_file_error_0_0(void)
#line 109 "options_file.m"
{
#line 109 "options_file.m"
  {
#line 109 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 109 "options_file.m"
    {
#line 109 "options_file.m"
      return make__options_file__succeeded = make__options_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_111_112_116_105_111_110_115_95_102_105_108_101_95_95_102_111_117_110_100_95_111_112_116_105_111_110_115_95_102_105_108_101_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 109 "options_file.m"
    return make__options_file__succeeded;
#line 109 "options_file.m"
  }
#line 109 "options_file.m"
}

#line 215 "options_file.m"
static void MR_CALL 
make__options_file____Compare____error_if_not_exist_0_0(
#line 215 "options_file.m"
  MR_Word * make__options_file__HeadVar__1_1,
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3)
#line 215 "options_file.m"
{
#line 215 "options_file.m"
  {
#line 215 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 215 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar1_4 = (MR_Integer) make__options_file__HeadVar__2_2;
#line 215 "options_file.m"
    MR_Integer make__options_file__Cast_HeadVar2_5 = (MR_Integer) make__options_file__HeadVar__3_3;

#line 215 "options_file.m"
    {
#line 215 "options_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__options_file__HeadVar__1_1, make__options_file__Cast_HeadVar1_4, make__options_file__Cast_HeadVar2_5);
#line 215 "options_file.m"
      return;
    }
#line 215 "options_file.m"
  }
#line 215 "options_file.m"
}

#line 215 "options_file.m"
static MR_bool MR_CALL 
make__options_file____Unify____error_if_not_exist_0_0(
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__2_1,
#line 215 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 215 "options_file.m"
{
#line 6146 "make.options_file.c"
  {
#line 6148 "make.options_file.c"
    MR_bool make__options_file__succeeded = (make__options_file__HeadVar__2_1 == make__options_file__HeadVar__2_2);

#line 6151 "make.options_file.c"
    return make__options_file__succeeded;
#line 6153 "make.options_file.c"
  }
#line 215 "options_file.m"
}

#line 1228 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_chars_7_p_0(
#line 1228 "options_file.m"
  MR_Word make__options_file__Variables_8,
#line 1228 "options_file.m"
  MR_String make__options_file__Var_9,
#line 1228 "options_file.m"
  MR_Word * make__options_file__Value_10,
#line 1228 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Undef_0_18,
#line 1228 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Undef_19)
#line 1228 "options_file.m"
{
#line 1232 "options_file.m"
  {
#line 1232 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1232 "options_file.m"
    MR_Word make__options_file__MaybeValue_13;

#line 1233 "options_file.m"
    {
#line 1233 "options_file.m"
      mercury__io__get_environment_var_4_p_0(make__options_file__Var_9, &make__options_file__MaybeValue_13);
    }
#line 1237 "options_file.m"
    if ((make__options_file__MaybeValue_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1241 "options_file.m"
      {
#line 1241 "options_file.m"
        MR_Word make__options_file__Value0_15;
#line 1239 "options_file.m"
        MR_Word make__options_file__V_23_23;
#line 1239 "options_file.m"
        MR_Box make__options_file__conv0_V_23_23;
#line 1239 "options_file.m"
        MR_Word make__options_file__V_16_16;
#line 1239 "options_file.m"
        MR_Word make__options_file__V_17_17;

#line 1239 "options_file.m"
        {
#line 1239 "options_file.m"
          make__options_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, make__options_file__Variables_8, ((MR_Box) (make__options_file__Var_9)), &make__options_file__conv0_V_23_23);
        }
#line 1239 "options_file.m"
        if (make__options_file__succeeded)
#line 1239 "options_file.m"
          {
#line 1239 "options_file.m"
            make__options_file__V_23_23 = ((MR_Word) make__options_file__conv0_V_23_23);
#line 1239 "options_file.m"
            make__options_file__succeeded = MR_TRUE;
#line 1239 "options_file.m"
          }
#line 1239 "options_file.m"
        if (make__options_file__succeeded)
#line 1239 "options_file.m"
          {
#line 1239 "options_file.m"
            make__options_file__Value0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_23_23, (MR_Integer) 0)));
#line 1239 "options_file.m"
            make__options_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_23_23, (MR_Integer) 1)));
#line 1239 "options_file.m"
            make__options_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_23_23, (MR_Integer) 2)));
#line 1239 "options_file.m"
            make__options_file__succeeded = MR_TRUE;
#line 1239 "options_file.m"
          }
#line 1241 "options_file.m"
        if (make__options_file__succeeded)
#line 1240 "options_file.m"
          {
#line 1240 "options_file.m"
            *make__options_file__Value_10 = make__options_file__Value0_15;
#line 1240 "options_file.m"
            *make__options_file__STATE_VARIABLE_Undef_19 = make__options_file__STATE_VARIABLE_Undef_0_18;
#line 1240 "options_file.m"
          }
#line 1241 "options_file.m"
        else
#line 1242 "options_file.m"
          {
#line 1242 "options_file.m"
            *make__options_file__Value_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1243 "options_file.m"
            {
#line 1243 "options_file.m"
              MR_Word base;
#line 1243 "options_file.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "options_file.m"
              *make__options_file__STATE_VARIABLE_Undef_19 = base;
#line 1243 "options_file.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Var_9));
#line 1243 "options_file.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Undef_0_18));
#line 1243 "options_file.m"
            }
#line 1242 "options_file.m"
          }
#line 1241 "options_file.m"
      }
#line 1237 "options_file.m"
    else
#line 1235 "options_file.m"
      {
#line 1235 "options_file.m"
        MR_String make__options_file__ValueString_14 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeValue_13, (MR_Integer) 0)));

#line 1236 "options_file.m"
        {
#line 1236 "options_file.m"
          *make__options_file__Value_10 = mercury__string__to_char_list_1_f_0(make__options_file__ValueString_14);
        }
#line 1235 "options_file.m"
        *make__options_file__STATE_VARIABLE_Undef_19 = make__options_file__STATE_VARIABLE_Undef_0_18;
#line 1235 "options_file.m"
      }
#line 1232 "options_file.m"
  }
#line 1228 "options_file.m"
}

#line 755 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0_1(
#line 755 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 755 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1)
#line 755 "options_file.m"
{
#line 755 "options_file.m"
  {
#line 755 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 755 "options_file.m"
    MR_Word make__options_file__conv1_HeadVar__2_11;

#line 755 "options_file.m"
    {
#line 755 "options_file.m"
      make__options_file__IntroducedFrom__pred__checked_split_into_words__757__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), &make__options_file__conv1_HeadVar__2_11);
    }
#line 755 "options_file.m"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv1_HeadVar__2_11));
#line 755 "options_file.m"
  }
#line 755 "options_file.m"
}

#line 1191 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_words_maybe_env_6_p_0(
#line 1191 "options_file.m"
  MR_Word make__options_file__LookupEnv_7,
#line 1191 "options_file.m"
  MR_Word make__options_file__Vars_8,
#line 1191 "options_file.m"
  MR_String make__options_file__VarName_9,
#line 1191 "options_file.m"
  MR_Word * make__options_file__Result_10)
#line 1191 "options_file.m"
{
#line 1195 "options_file.m"
  {
#line 1195 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1195 "options_file.m"
    MR_Word make__options_file__MaybeEnvValue_12;

#line 1199 "options_file.m"
#line 1199 "options_file.m"
    switch (make__options_file__LookupEnv_7) {
#line 1199 "options_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1199 "options_file.m"
      case (MR_Integer) 0:
#line 1201 "options_file.m"
        make__options_file__MaybeEnvValue_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1199 "options_file.m"
        break;
#line 1199 "options_file.m"
      case (MR_Integer) 1:
#line 1198 "options_file.m"
        {
#line 1198 "options_file.m"
          mercury__io__get_environment_var_4_p_0(make__options_file__VarName_9, &make__options_file__MaybeEnvValue_12);
        }
#line 1199 "options_file.m"
        break;
#line 1199 "options_file.m"
    }
#line 1218 "options_file.m"
    if ((make__options_file__MaybeEnvValue_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "options_file.m"
      {
#line 1223 "options_file.m"
        MR_Word make__options_file__MapValue_18;
#line 1220 "options_file.m"
        MR_Box make__options_file__conv0_MapValue_18;

#line 1220 "options_file.m"
        {
#line 1220 "options_file.m"
          make__options_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, make__options_file__Vars_8, ((MR_Box) (make__options_file__VarName_9)), &make__options_file__conv0_MapValue_18);
        }
#line 1220 "options_file.m"
        if (make__options_file__succeeded)
#line 1220 "options_file.m"
          {
#line 1220 "options_file.m"
            make__options_file__MapValue_18 = ((MR_Word) make__options_file__conv0_MapValue_18);
#line 1220 "options_file.m"
            make__options_file__succeeded = MR_TRUE;
#line 1220 "options_file.m"
          }
#line 1223 "options_file.m"
        if (make__options_file__succeeded)
#line 1221 "options_file.m"
          {
#line 1221 "options_file.m"
            MR_Word make__options_file__Words_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__MapValue_18, (MR_Integer) 1)));
#line 1221 "options_file.m"
            MR_Word make__options_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__MapValue_18, (MR_Integer) 0)));
#line 1221 "options_file.m"
            MR_Word make__options_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__MapValue_18, (MR_Integer) 2)));

#line 1222 "options_file.m"
            {
#line 1222 "options_file.m"
              MR_Word base;
#line 1222 "options_file.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "options_file.m"
              *make__options_file__Result_10 = base;
#line 1222 "options_file.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__options_file__Words_20));
#line 1222 "options_file.m"
            }
#line 1221 "options_file.m"
          }
#line 1223 "options_file.m"
        else
#line 1224 "options_file.m"
          *make__options_file__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "options_file.m"
      }
#line 1218 "options_file.m"
    else
#line 1204 "options_file.m"
      {
#line 1204 "options_file.m"
        MR_String make__options_file__EnvValue_13 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeEnvValue_12, (MR_Integer) 0)));
#line 1204 "options_file.m"
        MR_Word make__options_file__SplitResult_14;
#line 1204 "options_file.m"
        MR_Word make__options_file__V_25_25;
#line 1204 "options_file.m"
        MR_Word make__options_file__TryResult_54;
#line 755 "options_file.m"
        MR_Word make__options_file__V_59_59;

#line 1205 "options_file.m"
        {
#line 1205 "options_file.m"
          make__options_file__V_25_25 = mercury__string__to_char_list_1_f_0(make__options_file__EnvValue_13);
        }
#line 755 "options_file.m"
        {
#line 755 "options_file.m"
          make__options_file__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 755 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 0) = ((MR_Box) (&make__options_file_scalar_common_6[5]));
#line 755 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 1) = ((MR_Box) (make__options_file__lookup_variable_words_maybe_env_6_p_0_1));
#line 755 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 755 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_59_59, 3) = ((MR_Box) (make__options_file__V_25_25));
#line 755 "options_file.m"
        }
#line 755 "options_file.m"
        {
#line 755 "options_file.m"
          mercury__exception__try_2_p_0((MR_Word) &make__options_file_scalar_common_2[0], make__options_file__V_59_59, &make__options_file__TryResult_54);
        }
#line 763 "options_file.m"
        if (((MR_tag((MR_Word) make__options_file__TryResult_54)) == (MR_mktag((MR_Integer) 2))))
#line 764 "options_file.m"
          {
#line 764 "options_file.m"
            MR_Word make__options_file__Exception_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__TryResult_54, (MR_Integer) 0)));
#line 767 "options_file.m"
            MR_String make__options_file__Msg_58;
#line 765 "options_file.m"
            MR_Word make__options_file__V_61_61;
#line 765 "options_file.m"
            MR_Box make__options_file__conv2_V_61_61;

#line 765 "options_file.m"
            {
#line 765 "options_file.m"
              make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, &make__options_file__conv2_V_61_61, make__options_file__Exception_57);
            }
#line 765 "options_file.m"
            if (make__options_file__succeeded)
#line 765 "options_file.m"
              {
#line 765 "options_file.m"
                make__options_file__V_61_61 = ((MR_Word) make__options_file__conv2_V_61_61);
#line 765 "options_file.m"
                make__options_file__succeeded = MR_TRUE;
#line 765 "options_file.m"
              }
#line 765 "options_file.m"
            if (make__options_file__succeeded)
#line 765 "options_file.m"
              {
#line 765 "options_file.m"
                make__options_file__Msg_58 = (MR_String) make__options_file__V_61_61;
#line 765 "options_file.m"
                make__options_file__succeeded = MR_TRUE;
#line 765 "options_file.m"
              }
#line 767 "options_file.m"
            if (make__options_file__succeeded)
#line 766 "options_file.m"
              {
#line 766 "options_file.m"
                make__options_file__SplitResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__SplitResult_14, 0) = ((MR_Box) (make__options_file__Msg_58));
#line 766 "options_file.m"
              }
#line 767 "options_file.m"
            else
#line 768 "options_file.m"
              {
#line 768 "options_file.m"
                {
#line 768 "options_file.m"
                  mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_2[0], make__options_file__TryResult_54);
#line 768 "options_file.m"
                  return;
                }
#line 768 "options_file.m"
              }
#line 764 "options_file.m"
          }
#line 763 "options_file.m"
        else
#line 761 "options_file.m"
          {
#line 761 "options_file.m"
            MR_Word make__options_file__Words_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__TryResult_54, (MR_Integer) 0)));

#line 762 "options_file.m"
            {
#line 762 "options_file.m"
              make__options_file__SplitResult_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 762 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__SplitResult_14, 0) = ((MR_Box) (make__options_file__Words_56));
#line 762 "options_file.m"
            }
#line 761 "options_file.m"
          }
#line 1209 "options_file.m"
        if (((MR_tag((MR_Word) make__options_file__SplitResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1210 "options_file.m"
          {
#line 1210 "options_file.m"
            MR_String make__options_file__Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__SplitResult_14, (MR_Integer) 0)));
#line 1210 "options_file.m"
            MR_Word make__options_file__ErrorSpec_17;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_28_28;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_29_29;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_33_33;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_34_34;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_35_35;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_38_38;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_39_39;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_40_40;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_43_43;
#line 1210 "options_file.m"
            MR_Word make__options_file__V_44_44;

#line 1214 "options_file.m"
            {
#line 1214 "options_file.m"
              make__options_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(3), make__options_file__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(3), make__options_file__V_39_39, 1) = ((MR_Box) (make__options_file__VarName_9));
#line 1214 "options_file.m"
            }
#line 1214 "options_file.m"
            {
#line 1214 "options_file.m"
              make__options_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(3), make__options_file__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(3), make__options_file__V_44_44, 1) = ((MR_Box) (make__options_file__Msg_16));
#line 1214 "options_file.m"
            }
#line 1214 "options_file.m"
            {
#line 1214 "options_file.m"
              make__options_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_43_43, 0) = ((MR_Box) (make__options_file__V_44_44));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[43])));
#line 1214 "options_file.m"
            }
#line 1214 "options_file.m"
            {
#line 1214 "options_file.m"
              make__options_file__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[42])));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_40_40, 1) = ((MR_Box) (make__options_file__V_43_43));
#line 1214 "options_file.m"
            }
#line 1214 "options_file.m"
            {
#line 1214 "options_file.m"
              make__options_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_38_38, 0) = ((MR_Box) (make__options_file__V_39_39));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_38_38, 1) = ((MR_Box) (make__options_file__V_40_40));
#line 1214 "options_file.m"
            }
#line 1213 "options_file.m"
            {
#line 1213 "options_file.m"
              make__options_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[41])));
#line 1213 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 1) = ((MR_Box) (make__options_file__V_38_38));
#line 1213 "options_file.m"
            }
#line 1213 "options_file.m"
            {
#line 1213 "options_file.m"
              make__options_file__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_34_34, 0) = ((MR_Box) (make__options_file__V_35_35));
#line 1213 "options_file.m"
            }
#line 1214 "options_file.m"
            {
#line 1214 "options_file.m"
              make__options_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_33_33, 0) = ((MR_Box) (make__options_file__V_34_34));
#line 1214 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "options_file.m"
            }
#line 1212 "options_file.m"
            {
#line 1212 "options_file.m"
              make__options_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1212 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1212 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_29_29, 3) = ((MR_Box) (make__options_file__V_33_33));
#line 1212 "options_file.m"
            }
#line 1215 "options_file.m"
            {
#line 1215 "options_file.m"
              make__options_file__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_28_28, 0) = ((MR_Box) (make__options_file__V_29_29));
#line 1215 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "options_file.m"
            }
#line 1211 "options_file.m"
            {
#line 1211 "options_file.m"
              make__options_file__ErrorSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1211 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1211 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_17, 2) = ((MR_Box) (make__options_file__V_28_28));
#line 1211 "options_file.m"
            }
#line 1216 "options_file.m"
            *make__options_file__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) make__options_file__ErrorSpec_17);
#line 1210 "options_file.m"
          }
#line 1209 "options_file.m"
        else
#line 1207 "options_file.m"
          {
#line 1207 "options_file.m"
            MR_Word make__options_file__EnvWords_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__SplitResult_14, (MR_Integer) 0)));

#line 1208 "options_file.m"
            {
#line 1208 "options_file.m"
              MR_Word base;
#line 1208 "options_file.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "options_file.m"
              *make__options_file__Result_10 = base;
#line 1208 "options_file.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (make__options_file__EnvWords_15));
#line 1208 "options_file.m"
            }
#line 1207 "options_file.m"
          }
#line 1204 "options_file.m"
      }
#line 1195 "options_file.m"
  }
#line 1191 "options_file.m"
}

#line 1170 "options_file.m"
static void MR_CALL 
make__options_file__lookup_variable_words_report_error_6_p_0(
#line 1170 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 1170 "options_file.m"
  MR_Word make__options_file__Vars_8,
#line 1170 "options_file.m"
  MR_String make__options_file__VarName_9,
#line 1170 "options_file.m"
  MR_Word * make__options_file__Result_10)
#line 1170 "options_file.m"
{
#line 1174 "options_file.m"
  {
#line 1174 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 1189 "options_file.m"
    {
#line 1189 "options_file.m"
      make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, make__options_file__Vars_8, make__options_file__VarName_9, make__options_file__Result_10);
    }
#line 1179 "options_file.m"
#line 1179 "options_file.m"
    switch (MR_tag((MR_Word) *make__options_file__Result_10)) {
#line 1179 "options_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1179 "options_file.m"
      case (MR_Integer) 0:
#line 1182 "options_file.m"
        {
#line 1182 "options_file.m"
        }
#line 1179 "options_file.m"
        break;
#line 1179 "options_file.m"
      case (MR_Integer) 1:
#line 1177 "options_file.m"
        {
#line 1177 "options_file.m"
          MR_Word make__options_file__ErrorSpec_12 = (MR_Word) MR_body(((MR_Word) *make__options_file__Result_10), (MR_Integer) 1);
#line 1178 "options_file.m"
          MR_Integer make__options_file__V_13_13;
#line 1178 "options_file.m"
          MR_Integer make__options_file__V_14_14;

#line 1178 "options_file.m"
          {
#line 1178 "options_file.m"
            parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_12, make__options_file__Globals_7, (MR_Integer) 0, &make__options_file__V_13_13, (MR_Integer) 0, &make__options_file__V_14_14);
          }
#line 1177 "options_file.m"
        }
#line 1179 "options_file.m"
        break;
#line 1179 "options_file.m"
      case (MR_Integer) 2:
#line 1180 "options_file.m"
        {
#line 1180 "options_file.m"
        }
#line 1179 "options_file.m"
        break;
#line 1179 "options_file.m"
    }
#line 1174 "options_file.m"
  }
#line 1170 "options_file.m"
}

#line 1156 "options_file.m"
static MR_Word MR_CALL 
make__options_file__combine_var_results_2_f_0(
#line 1156 "options_file.m"
  MR_Word make__options_file__TypeInfo_for_T_14,
#line 1156 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 1156 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2)
#line 1156 "options_file.m"
{
#line 1159 "options_file.m"
  {
#line 1159 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1159 "options_file.m"
    MR_Word make__options_file__HeadVar__3_3;

#line 1159 "options_file.m"
#line 1159 "options_file.m"
    switch (MR_tag((MR_Word) make__options_file__HeadVar__1_1)) {
#line 1159 "options_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1159 "options_file.m"
      case (MR_Integer) 0:
#line 1159 "options_file.m"
#line 1159 "options_file.m"
        switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
#line 1159 "options_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1159 "options_file.m"
          case (MR_Integer) 0:
#line 1159 "options_file.m"
            make__options_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1159 "options_file.m"
            break;
#line 1159 "options_file.m"
          case (MR_Integer) 1:
#line 1162 "options_file.m"
            make__options_file__HeadVar__3_3 = make__options_file__HeadVar__2_2;
#line 1159 "options_file.m"
            break;
#line 1159 "options_file.m"
          case (MR_Integer) 2:
#line 1160 "options_file.m"
            make__options_file__HeadVar__3_3 = make__options_file__HeadVar__2_2;
#line 1159 "options_file.m"
            break;
#line 1159 "options_file.m"
        }
#line 1159 "options_file.m"
        break;
#line 1159 "options_file.m"
      case (MR_Integer) 1:
#line 1168 "options_file.m"
        make__options_file__HeadVar__3_3 = make__options_file__HeadVar__1_1;
#line 1159 "options_file.m"
        break;
#line 1159 "options_file.m"
      case (MR_Integer) 2:
#line 1159 "options_file.m"
        {
#line 1159 "options_file.m"
          MR_Word make__options_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__1_1, (MR_Integer) 0)));

#line 1159 "options_file.m"
#line 1159 "options_file.m"
          switch (MR_tag((MR_Word) make__options_file__HeadVar__2_2)) {
#line 1159 "options_file.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1159 "options_file.m"
            case (MR_Integer) 0:
#line 1165 "options_file.m"
              make__options_file__HeadVar__3_3 = make__options_file__HeadVar__1_1;
#line 1159 "options_file.m"
              break;
#line 1159 "options_file.m"
            case (MR_Integer) 1:
#line 1167 "options_file.m"
              make__options_file__HeadVar__3_3 = make__options_file__HeadVar__2_2;
#line 1159 "options_file.m"
              break;
#line 1159 "options_file.m"
            case (MR_Integer) 2:
#line 1163 "options_file.m"
              {
#line 1163 "options_file.m"
                MR_Word make__options_file__V2_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1163 "options_file.m"
                MR_Word make__options_file__V_8_8;

#line 1164 "options_file.m"
                {
#line 1164 "options_file.m"
                  make__options_file__V_8_8 = mercury__list__f_43_43_2_f_0(make__options_file__TypeInfo_for_T_14, make__options_file__V_15_15, make__options_file__V2_7);
                }
#line 1164 "options_file.m"
                {
#line 1164 "options_file.m"
                  make__options_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "options_file.m"
                  MR_hl_field(MR_mktag(2), make__options_file__HeadVar__3_3, 0) = ((MR_Box) (make__options_file__V_8_8));
#line 1164 "options_file.m"
                }
#line 1163 "options_file.m"
              }
#line 1159 "options_file.m"
              break;
#line 1159 "options_file.m"
          }
#line 1159 "options_file.m"
        }
#line 1159 "options_file.m"
        break;
#line 1159 "options_file.m"
    }
#line 1159 "options_file.m"
    return make__options_file__HeadVar__3_3;
#line 1159 "options_file.m"
  }
#line 1156 "options_file.m"
}

#line 1143 "options_file.m"
static MR_Box MR_CALL 
make__options_file__lookup_options_variable_7_p_0_2(
#line 1143 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1143 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1143 "options_file.m"
{
#line 1143 "options_file.m"
  {
#line 1143 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1143 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1143 "options_file.m"
    MR_String make__options_file__conv0_HeadVar__2_2;

#line 1143 "options_file.m"
    {
#line 1143 "options_file.m"
      make__options_file__conv0_HeadVar__2_2 = parse_tree__error_util__add_quotes_1_f_0(((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1143 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_HeadVar__2_2));
#line 1143 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1143 "options_file.m"
  }
#line 1143 "options_file.m"
}

#line 1130 "options_file.m"
static MR_bool MR_CALL 
make__options_file__lookup_options_variable_7_p_0_1(
#line 1130 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1130 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1130 "options_file.m"
{
#line 1130 "options_file.m"
  {
#line 1130 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1130 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 1130 "options_file.m"
    {
#line 1130 "options_file.m"
      return make__options_file__succeeded = make__options_file__IntroducedFrom__pred__lookup_options_variable__1132__1_1_p_0(((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1130 "options_file.m"
    return make__options_file__succeeded;
#line 1130 "options_file.m"
  }
#line 1130 "options_file.m"
}

#line 1072 "options_file.m"
static void MR_CALL 
make__options_file__lookup_options_variable_7_p_0(
#line 1072 "options_file.m"
  MR_Word make__options_file__Globals_8,
#line 1072 "options_file.m"
  MR_Word make__options_file__Vars_9,
#line 1072 "options_file.m"
  MR_Word make__options_file__OptionsVariableClass_10,
#line 1072 "options_file.m"
  MR_Word make__options_file__FlagsVar_11,
#line 1072 "options_file.m"
  MR_Word * make__options_file__Result_12)
#line 1072 "options_file.m"
{
#line 1078 "options_file.m"
  {
#line 1078 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1078 "options_file.m"
    MR_Word make__options_file__TypeCtorInfo_87_87;
#line 1078 "options_file.m"
    MR_String make__options_file__VarName_14 = ((&make__options_file_vector_common_11[0 + make__options_file__FlagsVar_11]))->make__options_file__vector_common_type_11_0__vct_11_f_0;
#line 1078 "options_file.m"
    MR_Word make__options_file__DefaultFlagsResult_15;
#line 1078 "options_file.m"
    MR_Word make__options_file__FlagsResult_16;
#line 1078 "options_file.m"
    MR_Word make__options_file__ExtraFlagsResult_17;
#line 1078 "options_file.m"
    MR_Word make__options_file__ModuleFlagsResult_22;
#line 1078 "options_file.m"
    MR_Word make__options_file__Result0_23;
#line 1078 "options_file.m"
    MR_String make__options_file__V_38_38;
#line 1078 "options_file.m"
    MR_Word make__options_file__V_49_49;
#line 1078 "options_file.m"
    MR_Word make__options_file__V_50_50;
#line 1103 "options_file.m"
    MR_Word make__options_file__ModuleName_19;

#line 1080 "options_file.m"
    {
#line 1080 "options_file.m"
      make__options_file__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "DEFAULT_", make__options_file__VarName_14);
    }
#line 1080 "options_file.m"
    {
#line 1080 "options_file.m"
      make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__V_38_38, &make__options_file__DefaultFlagsResult_15);
    }
#line 1086 "options_file.m"
#line 1086 "options_file.m"
    switch (MR_tag((MR_Word) make__options_file__OptionsVariableClass_10)) {
#line 1086 "options_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1086 "options_file.m"
      case (MR_Integer) 0:
#line 1086 "options_file.m"
#line 1086 "options_file.m"
        switch (MR_unmkbody(make__options_file__OptionsVariableClass_10)) {
#line 1086 "options_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1086 "options_file.m"
          case (MR_Integer) 0:
#line 1083 "options_file.m"
            {
#line 1084 "options_file.m"
              make__options_file__FlagsResult_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1085 "options_file.m"
              make__options_file__ExtraFlagsResult_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1083 "options_file.m"
            }
#line 1086 "options_file.m"
            break;
#line 1086 "options_file.m"
          case (MR_Integer) 1:
#line 1089 "options_file.m"
            {
#line 1089 "options_file.m"
              MR_String make__options_file__V_42_42;

#line 1090 "options_file.m"
              {
#line 1090 "options_file.m"
                make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__VarName_14, &make__options_file__FlagsResult_16);
              }
#line 1092 "options_file.m"
              {
#line 1092 "options_file.m"
                make__options_file__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", make__options_file__VarName_14);
              }
#line 1092 "options_file.m"
              {
#line 1092 "options_file.m"
                make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__V_42_42, &make__options_file__ExtraFlagsResult_17);
              }
#line 1089 "options_file.m"
            }
#line 1086 "options_file.m"
            break;
#line 1086 "options_file.m"
        }
#line 1086 "options_file.m"
        break;
#line 1086 "options_file.m"
      case (MR_Integer) 1:
#line 1089 "options_file.m"
        {
#line 1089 "options_file.m"
          MR_String make__options_file__V_42_42;

#line 1090 "options_file.m"
          {
#line 1090 "options_file.m"
            make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__VarName_14, &make__options_file__FlagsResult_16);
          }
#line 1092 "options_file.m"
          {
#line 1092 "options_file.m"
            make__options_file__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "EXTRA_", make__options_file__VarName_14);
          }
#line 1092 "options_file.m"
          {
#line 1092 "options_file.m"
            make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__V_42_42, &make__options_file__ExtraFlagsResult_17);
          }
#line 1089 "options_file.m"
        }
#line 1086 "options_file.m"
        break;
#line 1086 "options_file.m"
    }
#line 1096 "options_file.m"
    make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__OptionsVariableClass_10)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "options_file.m"
    if (make__options_file__succeeded)
#line 1096 "options_file.m"
      {
#line 1096 "options_file.m"
        make__options_file__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__OptionsVariableClass_10, (MR_Integer) 0)));
#line 978 "options_file.m"
        if (((MR_Integer) 13565950 & (((MR_Integer) 1 << make__options_file__FlagsVar_11))))
#line 978 "options_file.m"
          {
#line 978 "options_file.m"
            make__options_file__succeeded = MR_TRUE;
#line 978 "options_file.m"
          }
#line 978 "options_file.m"
        else
#line 978 "options_file.m"
          make__options_file__succeeded = MR_FALSE;
#line 1096 "options_file.m"
      }
#line 1103 "options_file.m"
    if (make__options_file__succeeded)
#line 1099 "options_file.m"
      {
#line 1099 "options_file.m"
        MR_String make__options_file__ModuleFileNameBase_20;
#line 1099 "options_file.m"
        MR_String make__options_file__ModuleVarName_21;
#line 1099 "options_file.m"
        MR_String make__options_file__V_46_46;

#line 1099 "options_file.m"
        {
#line 1099 "options_file.m"
          make__options_file__ModuleFileNameBase_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(make__options_file__ModuleName_19);
        }
#line 1100 "options_file.m"
        {
#line 1100 "options_file.m"
          make__options_file__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "-", make__options_file__ModuleFileNameBase_20);
        }
#line 1100 "options_file.m"
        {
#line 1100 "options_file.m"
          make__options_file__ModuleVarName_21 = mercury__string__f_43_43_2_f_0(make__options_file__VarName_14, make__options_file__V_46_46);
        }
#line 1101 "options_file.m"
        {
#line 1101 "options_file.m"
          make__options_file__lookup_variable_words_report_error_6_p_0(make__options_file__Globals_8, make__options_file__Vars_9, make__options_file__ModuleVarName_21, &make__options_file__ModuleFlagsResult_22);
        }
#line 1099 "options_file.m"
      }
#line 1103 "options_file.m"
    else
#line 1104 "options_file.m"
      make__options_file__ModuleFlagsResult_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7150 "make.options_file.c"
    make__options_file__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1115 "options_file.m"
    {
#line 1115 "options_file.m"
      make__options_file__V_50_50 = make__options_file__combine_var_results_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__DefaultFlagsResult_15, make__options_file__FlagsResult_16);
    }
#line 1116 "options_file.m"
    {
#line 1116 "options_file.m"
      make__options_file__V_49_49 = make__options_file__combine_var_results_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__V_50_50, make__options_file__ExtraFlagsResult_17);
    }
#line 1117 "options_file.m"
    {
#line 1117 "options_file.m"
      make__options_file__Result0_23 = make__options_file__combine_var_results_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__V_49_49, make__options_file__ModuleFlagsResult_22);
    }
#line 1124 "options_file.m"
#line 1124 "options_file.m"
    switch (MR_tag((MR_Word) make__options_file__Result0_23)) {
#line 1124 "options_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1124 "options_file.m"
      case (MR_Integer) 0:
#line 1123 "options_file.m"
        *make__options_file__Result_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1124 "options_file.m"
        break;
#line 1124 "options_file.m"
      case (MR_Integer) 1:
#line 1126 "options_file.m"
        *make__options_file__Result_12 = make__options_file__Result0_23;
#line 1124 "options_file.m"
        break;
#line 1124 "options_file.m"
      case (MR_Integer) 2:
#line 1128 "options_file.m"
        {
#line 1128 "options_file.m"
          MR_Word make__options_file__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result0_23, (MR_Integer) 0)));

#line 1129 "options_file.m"
          make__options_file__succeeded = (make__options_file__FlagsVar_11 == (MR_Integer) 11);
#line 1151 "options_file.m"
          if (make__options_file__succeeded)
#line 1133 "options_file.m"
            {
#line 1133 "options_file.m"
              MR_Word make__options_file__BadLibs_28;

#line 1134 "options_file.m"
              {
#line 1134 "options_file.m"
                make__options_file__BadLibs_28 = mercury__list__filter_2_f_0(make__options_file__TypeCtorInfo_87_87, (MR_Word) &make__options_file_scalar_common_1[15], make__options_file__V_25);
              }
#line 1138 "options_file.m"
              if ((make__options_file__BadLibs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "options_file.m"
                *make__options_file__Result_12 = make__options_file__Result0_23;
#line 1138 "options_file.m"
              else
#line 1139 "options_file.m"
                {
#line 1139 "options_file.m"
                  MR_Word make__options_file__Pieces_31;
#line 1139 "options_file.m"
                  MR_Word make__options_file__ErrorSpec_33;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_53_53;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_56_56;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_59_59;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_62_62;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_63_63;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_73_73;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_74_74;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_78_78;
#line 1139 "options_file.m"
                  MR_Word make__options_file__V_79_79;
#line 1148 "options_file.m"
                  MR_Integer make__options_file__V_34_34;
#line 1148 "options_file.m"
                  MR_Integer make__options_file__V_35_35;

#line 1143 "options_file.m"
                  {
#line 1143 "options_file.m"
                    make__options_file__V_63_63 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_87_87, make__options_file__TypeCtorInfo_87_87, (MR_Word) &make__options_file_scalar_common_1[16], make__options_file__BadLibs_28);
                  }
#line 1142 "options_file.m"
                  {
#line 1142 "options_file.m"
                    make__options_file__V_62_62 = parse_tree__error_util__list_to_pieces_1_f_0(make__options_file__V_63_63);
                  }
#line 1141 "options_file.m"
                  {
#line 1141 "options_file.m"
                    make__options_file__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[40])));
#line 1141 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_59_59, 1) = ((MR_Box) (make__options_file__V_62_62));
#line 1141 "options_file.m"
                  }
#line 1141 "options_file.m"
                  {
#line 1141 "options_file.m"
                    make__options_file__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[39])));
#line 1141 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_56_56, 1) = ((MR_Box) (make__options_file__V_59_59));
#line 1141 "options_file.m"
                  }
#line 1140 "options_file.m"
                  {
#line 1140 "options_file.m"
                    make__options_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[38])));
#line 1140 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_53_53, 1) = ((MR_Box) (make__options_file__V_56_56));
#line 1140 "options_file.m"
                  }
#line 1144 "options_file.m"
                  {
#line 1144 "options_file.m"
                    make__options_file__Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, make__options_file__V_53_53, (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[34]));
                  }
#line 1147 "options_file.m"
                  {
#line 1147 "options_file.m"
                    make__options_file__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__V_79_79, 0) = ((MR_Box) (make__options_file__Pieces_31));
#line 1147 "options_file.m"
                  }
#line 1147 "options_file.m"
                  {
#line 1147 "options_file.m"
                    make__options_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_78_78, 0) = ((MR_Box) (make__options_file__V_79_79));
#line 1147 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "options_file.m"
                  }
#line 1146 "options_file.m"
                  {
#line 1146 "options_file.m"
                    make__options_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1146 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1146 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1146 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_74_74, 3) = ((MR_Box) (make__options_file__V_78_78));
#line 1146 "options_file.m"
                  }
#line 1147 "options_file.m"
                  {
#line 1147 "options_file.m"
                    make__options_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_73_73, 0) = ((MR_Box) (make__options_file__V_74_74));
#line 1147 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "options_file.m"
                  }
#line 1145 "options_file.m"
                  {
#line 1145 "options_file.m"
                    make__options_file__ErrorSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_33, 2) = ((MR_Box) (make__options_file__V_73_73));
#line 1145 "options_file.m"
                  }
#line 1148 "options_file.m"
                  {
#line 1148 "options_file.m"
                    parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_33, make__options_file__Globals_8, (MR_Integer) 0, &make__options_file__V_34_34, (MR_Integer) 0, &make__options_file__V_35_35);
                  }
#line 1149 "options_file.m"
                  *make__options_file__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) make__options_file__ErrorSpec_33);
#line 1139 "options_file.m"
                }
#line 1133 "options_file.m"
            }
#line 1151 "options_file.m"
          else
#line 1152 "options_file.m"
            *make__options_file__Result_12 = make__options_file__Result0_23;
#line 1128 "options_file.m"
        }
#line 1124 "options_file.m"
        break;
#line 1124 "options_file.m"
    }
#line 1078 "options_file.m"
  }
#line 1072 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_21(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv20_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv20_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv20_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_20(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv19_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv19_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv19_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_19(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv18_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv18_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv18_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_18(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv17_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv17_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv17_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_17(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv16_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv16_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv16_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_16(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv15_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv15_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv15_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_15(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv14_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv14_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv14_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_14(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv13_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv13_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv13_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_13(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv12_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv12_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv12_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_12(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv11_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv11_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv11_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_11(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv10_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv10_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv10_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_10(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv9_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv9_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv9_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_9(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv8_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv8_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv8_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_8(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv7_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv7_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv7_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_7(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv6_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv6_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv6_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_6(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv5_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv5_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv5_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_5(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv4_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv4_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv4_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_4(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv3_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv3_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv3_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_3(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv2_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv2_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv2_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_2(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv1_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv1_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv1_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1022 "options_file.m"
static MR_Box MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0_1(
#line 1022 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 1022 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 1022 "options_file.m"
{
#line 1022 "options_file.m"
  {
#line 1022 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 1022 "options_file.m"
    MR_Word make__options_file__conv0_HeadVar__3_15;

#line 1022 "options_file.m"
    {
#line 1022 "options_file.m"
      make__options_file__conv0_HeadVar__3_15 = make__options_file__IntroducedFrom__func__convert_to_mmc_options_with_value__1022__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1));
    }
#line 1022 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_HeadVar__3_15));
#line 1022 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 1022 "options_file.m"
  }
#line 1022 "options_file.m"
}

#line 1003 "options_file.m"
static MR_Word MR_CALL 
make__options_file__convert_to_mmc_options_1_f_0(
#line 1003 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1)
#line 1003 "options_file.m"
{
#line 1006 "options_file.m"
  {
#line 1006 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 1006 "options_file.m"
    MR_Word make__options_file__HeadVar__2_2;
#line 1006 "options_file.m"
    MR_Word make__options_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1006 "options_file.m"
    MR_Word make__options_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__HeadVar__1_1, (MR_Integer) 0)));

#line 1006 "options_file.m"
    if ((make__options_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "options_file.m"
      make__options_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "options_file.m"
    else
#line 1007 "options_file.m"
      {
#line 1007 "options_file.m"
        MR_Word make__options_file__VariableValue_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_8_8, (MR_Integer) 0)));

#line 8066 "make.options_file.c"
#line 8067 "make.options_file.c"
        switch (make__options_file__V_9_9) {
#line 8069 "make.options_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 8071 "make.options_file.c"
          case (MR_Integer) 14:
#line 8073 "make.options_file.c"
            {
#line 8075 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8077 "make.options_file.c"
              MR_Word make__options_file__V_17_17;
#line 8079 "make.options_file.c"
              MR_Word make__options_file__V_18_18;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_18_18 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_25, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[3], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 1) = ((MR_Box) (make__options_file__V_18_18));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_25, make__options_file__V_17_17);
              }
#line 8102 "make.options_file.c"
            }
#line 8104 "make.options_file.c"
            break;
#line 8106 "make.options_file.c"
          case (MR_Integer) 2:
#line 8108 "make.options_file.c"
            {
#line 8110 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8112 "make.options_file.c"
              MR_Word make__options_file__V_77_77;
#line 8114 "make.options_file.c"
              MR_Word make__options_file__V_78_78;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_78_78 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_80, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[4], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_77_77, 1) = ((MR_Box) (make__options_file__V_78_78));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_80, make__options_file__V_77_77);
              }
#line 8137 "make.options_file.c"
            }
#line 8139 "make.options_file.c"
            break;
#line 8141 "make.options_file.c"
          case (MR_Integer) 4:
#line 8143 "make.options_file.c"
            {
#line 8145 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8147 "make.options_file.c"
              MR_Word make__options_file__V_86_86;
#line 8149 "make.options_file.c"
              MR_Word make__options_file__V_87_87;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_87_87 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_89, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[5], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_86_86, 1) = ((MR_Box) (make__options_file__V_87_87));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_89, make__options_file__V_86_86);
              }
#line 8172 "make.options_file.c"
            }
#line 8174 "make.options_file.c"
            break;
#line 8176 "make.options_file.c"
          case (MR_Integer) 21:
#line 8178 "make.options_file.c"
            {
#line 8180 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_98 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8182 "make.options_file.c"
              MR_Word make__options_file__V_95_95;
#line 8184 "make.options_file.c"
              MR_Word make__options_file__V_96_96;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_96_96 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_98, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[6], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_95_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_95_95, 1) = ((MR_Box) (make__options_file__V_96_96));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_98, make__options_file__V_95_95);
              }
#line 8207 "make.options_file.c"
            }
#line 8209 "make.options_file.c"
            break;
#line 8211 "make.options_file.c"
          case (MR_Integer) 8:
#line 8213 "make.options_file.c"
            {
#line 8215 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_107 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8217 "make.options_file.c"
              MR_Word make__options_file__V_104_104;
#line 8219 "make.options_file.c"
              MR_Word make__options_file__V_105_105;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_105_105 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_107, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[7], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_104_104, 1) = ((MR_Box) (make__options_file__V_105_105));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_107, make__options_file__V_104_104);
              }
#line 8242 "make.options_file.c"
            }
#line 8244 "make.options_file.c"
            break;
#line 8246 "make.options_file.c"
          case (MR_Integer) 9:
#line 8248 "make.options_file.c"
            {
#line 8250 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_116 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8252 "make.options_file.c"
              MR_Word make__options_file__V_113_113;
#line 8254 "make.options_file.c"
              MR_Word make__options_file__V_114_114;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_114_114 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_116, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[8], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_113_113, 1) = ((MR_Box) (make__options_file__V_114_114));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_116, make__options_file__V_113_113);
              }
#line 8277 "make.options_file.c"
            }
#line 8279 "make.options_file.c"
            break;
#line 8281 "make.options_file.c"
          case (MR_Integer) 3:
#line 8283 "make.options_file.c"
            {
#line 8285 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_125 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8287 "make.options_file.c"
              MR_Word make__options_file__V_122_122;
#line 8289 "make.options_file.c"
              MR_Word make__options_file__V_123_123;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_123_123 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_125, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[9], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_122_122, 1) = ((MR_Box) (make__options_file__V_123_123));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_125, make__options_file__V_122_122);
              }
#line 8312 "make.options_file.c"
            }
#line 8314 "make.options_file.c"
            break;
#line 8316 "make.options_file.c"
          case (MR_Integer) 0:
#line 1018 "options_file.m"
            make__options_file__HeadVar__2_2 = make__options_file__VariableValue_6;
#line 8320 "make.options_file.c"
            break;
#line 8322 "make.options_file.c"
          case (MR_Integer) 7:
#line 8324 "make.options_file.c"
            {
#line 8326 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_136 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8328 "make.options_file.c"
              MR_Word make__options_file__V_133_133;
#line 8330 "make.options_file.c"
              MR_Word make__options_file__V_134_134;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_134_134 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_136, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[10], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_133_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_133_133, 1) = ((MR_Box) (make__options_file__V_134_134));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_136, make__options_file__V_133_133);
              }
#line 8353 "make.options_file.c"
            }
#line 8355 "make.options_file.c"
            break;
#line 8357 "make.options_file.c"
          case (MR_Integer) 19:
#line 8359 "make.options_file.c"
            {
#line 8361 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_145 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8363 "make.options_file.c"
              MR_Word make__options_file__V_142_142;
#line 8365 "make.options_file.c"
              MR_Word make__options_file__V_143_143;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_143_143 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_145, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[11], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_142_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_142_142, 1) = ((MR_Box) (make__options_file__V_143_143));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_145, make__options_file__V_142_142);
              }
#line 8388 "make.options_file.c"
            }
#line 8390 "make.options_file.c"
            break;
#line 8392 "make.options_file.c"
          case (MR_Integer) 6:
#line 8394 "make.options_file.c"
            {
#line 8396 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8398 "make.options_file.c"
              MR_Word make__options_file__V_151_151;
#line 8400 "make.options_file.c"
              MR_Word make__options_file__V_152_152;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_152_152 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_154, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[12], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_151_151, 1) = ((MR_Box) (make__options_file__V_152_152));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_154, make__options_file__V_151_151);
              }
#line 8423 "make.options_file.c"
            }
#line 8425 "make.options_file.c"
            break;
#line 8427 "make.options_file.c"
          case (MR_Integer) 12:
#line 8429 "make.options_file.c"
            {
#line 8431 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_163 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8433 "make.options_file.c"
              MR_Word make__options_file__V_160_160;
#line 8435 "make.options_file.c"
              MR_Word make__options_file__V_161_161;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_161_161 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_163, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[13], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_160_160, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_160_160, 1) = ((MR_Box) (make__options_file__V_161_161));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_163, make__options_file__V_160_160);
              }
#line 8458 "make.options_file.c"
            }
#line 8460 "make.options_file.c"
            break;
#line 8462 "make.options_file.c"
          case (MR_Integer) 13:
#line 8464 "make.options_file.c"
            {
#line 8466 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_172 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8468 "make.options_file.c"
              MR_Word make__options_file__V_169_169;
#line 8470 "make.options_file.c"
              MR_Word make__options_file__V_170_170;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_170_170 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_172, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[14], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_169_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_169_169, 1) = ((MR_Box) (make__options_file__V_170_170));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_172, make__options_file__V_169_169);
              }
#line 8493 "make.options_file.c"
            }
#line 8495 "make.options_file.c"
            break;
#line 8497 "make.options_file.c"
          case (MR_Integer) 16:
#line 8499 "make.options_file.c"
            {
#line 8501 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_181 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8503 "make.options_file.c"
              MR_Word make__options_file__V_178_178;
#line 8505 "make.options_file.c"
              MR_Word make__options_file__V_179_179;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_179_179 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_181, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[15], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_178_178, 1) = ((MR_Box) (make__options_file__V_179_179));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_181, make__options_file__V_178_178);
              }
#line 8528 "make.options_file.c"
            }
#line 8530 "make.options_file.c"
            break;
#line 8532 "make.options_file.c"
          case (MR_Integer) 17:
#line 8534 "make.options_file.c"
            {
#line 8536 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_189 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8538 "make.options_file.c"
              MR_Word make__options_file__MMCOptionType_183 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[29]);
#line 8540 "make.options_file.c"
              MR_Word make__options_file__InitialOptions_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_183, (MR_Integer) 0)));
#line 8542 "make.options_file.c"
              MR_String make__options_file__OptionName_185 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_183, (MR_Integer) 1)));
#line 8544 "make.options_file.c"
              MR_Word make__options_file__V_186_186;
#line 8546 "make.options_file.c"
              MR_Word make__options_file__V_187_187;
#line 8548 "make.options_file.c"
              MR_Word make__options_file__V_188_188;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_188_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_188_188, 0) = ((MR_Box) (&make__options_file_scalar_common_7[1]));
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_188_188, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_14));
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_188_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_188_188, 3) = ((MR_Box) (make__options_file__OptionName_185));
#line 1022 "options_file.m"
              }
#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_187_187 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_189, (MR_Word) &make__options_file_scalar_common_2[0], make__options_file__V_188_188, make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_186_186, 0) = ((MR_Box) (make__options_file__InitialOptions_184));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_186_186, 1) = ((MR_Box) (make__options_file__V_187_187));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_189, make__options_file__V_186_186);
              }
#line 8585 "make.options_file.c"
            }
#line 8587 "make.options_file.c"
            break;
#line 8589 "make.options_file.c"
          case (MR_Integer) 18:
#line 8591 "make.options_file.c"
            {
#line 8593 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_197 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8595 "make.options_file.c"
              MR_Word make__options_file__MMCOptionType_191 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[31]);
#line 8597 "make.options_file.c"
              MR_Word make__options_file__InitialOptions_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_191, (MR_Integer) 0)));
#line 8599 "make.options_file.c"
              MR_String make__options_file__OptionName_193 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MMCOptionType_191, (MR_Integer) 1)));
#line 8601 "make.options_file.c"
              MR_Word make__options_file__V_194_194;
#line 8603 "make.options_file.c"
              MR_Word make__options_file__V_195_195;
#line 8605 "make.options_file.c"
              MR_Word make__options_file__V_196_196;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_196_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_196_196, 0) = ((MR_Box) (&make__options_file_scalar_common_7[1]));
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_196_196, 1) = ((MR_Box) (make__options_file__convert_to_mmc_options_1_f_0_15));
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_196_196, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1022 "options_file.m"
                MR_hl_field(MR_mktag(0), make__options_file__V_196_196, 3) = ((MR_Box) (make__options_file__OptionName_193));
#line 1022 "options_file.m"
              }
#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_195_195 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_197, (MR_Word) &make__options_file_scalar_common_2[0], make__options_file__V_196_196, make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_194_194, 0) = ((MR_Box) (make__options_file__InitialOptions_192));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_194_194, 1) = ((MR_Box) (make__options_file__V_195_195));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_197, make__options_file__V_194_194);
              }
#line 8642 "make.options_file.c"
            }
#line 8644 "make.options_file.c"
            break;
#line 8646 "make.options_file.c"
          case (MR_Integer) 15:
#line 8648 "make.options_file.c"
            {
#line 8650 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_206 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8652 "make.options_file.c"
              MR_Word make__options_file__V_203_203;
#line 8654 "make.options_file.c"
              MR_Word make__options_file__V_204_204;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_204_204 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_206, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[16], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_203_203, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_203_203, 1) = ((MR_Box) (make__options_file__V_204_204));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_206, make__options_file__V_203_203);
              }
#line 8677 "make.options_file.c"
            }
#line 8679 "make.options_file.c"
            break;
#line 8681 "make.options_file.c"
          case (MR_Integer) 22:
#line 8683 "make.options_file.c"
            {
#line 8685 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_215 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8687 "make.options_file.c"
              MR_Word make__options_file__V_212_212;
#line 8689 "make.options_file.c"
              MR_Word make__options_file__V_213_213;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_213_213 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_215, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[17], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_212_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_212_212, 1) = ((MR_Box) (make__options_file__V_213_213));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_215, make__options_file__V_212_212);
              }
#line 8712 "make.options_file.c"
            }
#line 8714 "make.options_file.c"
            break;
#line 8716 "make.options_file.c"
          case (MR_Integer) 23:
#line 8718 "make.options_file.c"
            {
#line 8720 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_224 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8722 "make.options_file.c"
              MR_Word make__options_file__V_221_221;
#line 8724 "make.options_file.c"
              MR_Word make__options_file__V_222_222;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_222_222 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_224, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[18], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_221_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_221_221, 1) = ((MR_Box) (make__options_file__V_222_222));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_224, make__options_file__V_221_221);
              }
#line 8747 "make.options_file.c"
            }
#line 8749 "make.options_file.c"
            break;
#line 8751 "make.options_file.c"
          case (MR_Integer) 11:
#line 1018 "options_file.m"
            make__options_file__HeadVar__2_2 = make__options_file__VariableValue_6;
#line 8755 "make.options_file.c"
            break;
#line 8757 "make.options_file.c"
          case (MR_Integer) 10:
#line 8759 "make.options_file.c"
            {
#line 8761 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_235 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8763 "make.options_file.c"
              MR_Word make__options_file__V_232_232;
#line 8765 "make.options_file.c"
              MR_Word make__options_file__V_233_233;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_233_233 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_235, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[19], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_232_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_232_232, 1) = ((MR_Box) (make__options_file__V_233_233));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_235, make__options_file__V_232_232);
              }
#line 8788 "make.options_file.c"
            }
#line 8790 "make.options_file.c"
            break;
#line 8792 "make.options_file.c"
          case (MR_Integer) 1:
#line 1018 "options_file.m"
            make__options_file__HeadVar__2_2 = make__options_file__VariableValue_6;
#line 8796 "make.options_file.c"
            break;
#line 8798 "make.options_file.c"
          case (MR_Integer) 5:
#line 8800 "make.options_file.c"
            {
#line 8802 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_246 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8804 "make.options_file.c"
              MR_Word make__options_file__V_243_243;
#line 8806 "make.options_file.c"
              MR_Word make__options_file__V_244_244;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_244_244 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_246, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[20], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_243_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_243_243, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_243_243, 1) = ((MR_Box) (make__options_file__V_244_244));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_246, make__options_file__V_243_243);
              }
#line 8829 "make.options_file.c"
            }
#line 8831 "make.options_file.c"
            break;
#line 8833 "make.options_file.c"
          case (MR_Integer) 20:
#line 8835 "make.options_file.c"
            {
#line 8837 "make.options_file.c"
              MR_Word make__options_file__TypeCtorInfo_19_255 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 8839 "make.options_file.c"
              MR_Word make__options_file__V_252_252;
#line 8841 "make.options_file.c"
              MR_Word make__options_file__V_253_253;

#line 1022 "options_file.m"
              {
#line 1022 "options_file.m"
                make__options_file__V_253_253 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_19_255, (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_9[21], make__options_file__VariableValue_6);
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_252_252, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_252_252, 1) = ((MR_Box) (make__options_file__V_253_253));
#line 1021 "options_file.m"
              }
#line 1021 "options_file.m"
              {
#line 1021 "options_file.m"
                make__options_file__HeadVar__2_2 = mercury__list__condense_1_f_0(make__options_file__TypeCtorInfo_19_255, make__options_file__V_252_252);
              }
#line 8864 "make.options_file.c"
            }
#line 8866 "make.options_file.c"
            break;
#line 8868 "make.options_file.c"
        }
#line 1007 "options_file.m"
      }
#line 1006 "options_file.m"
    return make__options_file__HeadVar__2_2;
#line 1006 "options_file.m"
  }
#line 1003 "options_file.m"
}

#line 897 "options_file.m"
static MR_Box MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_3(
#line 897 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 897 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 897 "options_file.m"
{
#line 897 "options_file.m"
  {
#line 897 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 897 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 897 "options_file.m"
    MR_Word make__options_file__conv3_HeadVar__2_2;

#line 897 "options_file.m"
    {
#line 897 "options_file.m"
      make__options_file__conv3_HeadVar__2_2 = make__options_file__convert_to_mmc_options_1_f_0(((MR_Word) make__options_file__wrapper_arg_1));
    }
#line 897 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv3_HeadVar__2_2));
#line 897 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 897 "options_file.m"
  }
#line 897 "options_file.m"
}

#line 881 "options_file.m"
static MR_bool MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_2(
#line 881 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 881 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 881 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2)
#line 881 "options_file.m"
{
#line 881 "options_file.m"
  {
#line 881 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 881 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 881 "options_file.m"
    MR_Word make__options_file__conv2_HeadVar__2_25;

#line 881 "options_file.m"
    {
#line 881 "options_file.m"
      make__options_file__succeeded = make__options_file__IntroducedFrom__pred__lookup_mmc_maybe_module_options__886__1_2_p_0(((MR_Word) make__options_file__wrapper_arg_1), &make__options_file__conv2_HeadVar__2_25);
    }
#line 881 "options_file.m"
    if (make__options_file__succeeded)
#line 881 "options_file.m"
      {
#line 881 "options_file.m"
        *make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv2_HeadVar__2_25));
#line 881 "options_file.m"
        make__options_file__succeeded = MR_TRUE;
#line 881 "options_file.m"
      }
#line 881 "options_file.m"
    return make__options_file__succeeded;
#line 881 "options_file.m"
  }
#line 881 "options_file.m"
}

#line 878 "options_file.m"
static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0_1(
#line 878 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 878 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 878 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2,
#line 878 "options_file.m"
  MR_Box make__options_file__wrapper_arg_3,
#line 878 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_4)
#line 878 "options_file.m"
{
#line 878 "options_file.m"
  {
#line 878 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 878 "options_file.m"
    MR_Word make__options_file__conv0_Result_12;

#line 878 "options_file.m"
    {
#line 878 "options_file.m"
      make__options_file__lookup_options_variable_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), ((MR_Word) make__options_file__wrapper_arg_1), &make__options_file__conv0_Result_12);
    }
#line 878 "options_file.m"
    *make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_Result_12));
#line 878 "options_file.m"
  }
#line 878 "options_file.m"
}

#line 872 "options_file.m"
static void MR_CALL 
make__options_file__lookup_mmc_maybe_module_options_6_p_0(
#line 872 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 872 "options_file.m"
  MR_Word make__options_file__Vars_8,
#line 872 "options_file.m"
  MR_Word make__options_file__MaybeModuleName_9,
#line 872 "options_file.m"
  MR_Word * make__options_file__Result_10)
#line 872 "options_file.m"
{
#line 876 "options_file.m"
  {
#line 876 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 876 "options_file.m"
    MR_Word make__options_file__TypeCtorInfo_37_37;
#line 876 "options_file.m"
    MR_Word make__options_file__TypeInfo_38_38;
#line 876 "options_file.m"
    MR_Word make__options_file__VariableTypes_12 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[27]);
#line 876 "options_file.m"
    MR_Word make__options_file__Results_13;
#line 876 "options_file.m"
    MR_Word make__options_file__V_21_21;
#line 878 "options_file.m"
    MR_Box make__options_file__conv1_STATE_VARIABLE_IO_20;
#line 898 "options_file.m"
    MR_Word make__options_file__Values_17;

#line 878 "options_file.m"
    {
#line 878 "options_file.m"
      make__options_file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 878 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 0) = ((MR_Box) (&make__options_file_scalar_common_10[0]));
#line 878 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 1) = ((MR_Box) (make__options_file__lookup_mmc_maybe_module_options_6_p_0_1));
#line 878 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 878 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 3) = ((MR_Box) (make__options_file__Globals_7));
#line 878 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 4) = ((MR_Box) (make__options_file__Vars_8));
#line 878 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_21_21, 5) = ((MR_Box) (make__options_file__MaybeModuleName_9));
#line 878 "options_file.m"
    }
#line 9037 "make.options_file.c"
    make__options_file__TypeCtorInfo_37_37 = (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_type_0;
#line 9039 "make.options_file.c"
    make__options_file__TypeInfo_38_38 = (MR_Word) &make__options_file_scalar_common_2[1];
#line 878 "options_file.m"
    {
#line 878 "options_file.m"
      mercury__list__map_foldl_5_p_2(make__options_file__TypeCtorInfo_37_37, make__options_file__TypeInfo_38_38, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__options_file__V_21_21, make__options_file__VariableTypes_12, &make__options_file__Results_13, ((MR_Box) ((MR_Integer) 0)), &make__options_file__conv1_STATE_VARIABLE_IO_20);
    }
#line 881 "options_file.m"
    {
#line 881 "options_file.m"
      make__options_file__succeeded = mercury__list__map_3_p_2(make__options_file__TypeInfo_38_38, (MR_Word) &make__options_file_scalar_common_2[2], (MR_Word) &make__options_file_scalar_common_1[13], make__options_file__Results_13, &make__options_file__Values_17);
    }
#line 898 "options_file.m"
    if (make__options_file__succeeded)
#line 893 "options_file.m"
      {
#line 893 "options_file.m"
        MR_Word make__options_file__VariableValues_18;
#line 893 "options_file.m"
        MR_Word make__options_file__V_26_26;
#line 893 "options_file.m"
        MR_Word make__options_file__V_28_28;
#line 893 "options_file.m"
        MR_Word make__options_file__V_29_29;

#line 892 "options_file.m"
        {
#line 892 "options_file.m"
          mercury__assoc_list__from_corresponding_lists_3_p_0(make__options_file__TypeCtorInfo_37_37, (MR_Word) &make__options_file_scalar_common_2[2], make__options_file__VariableTypes_12, make__options_file__Values_17, &make__options_file__VariableValues_18);
        }
#line 897 "options_file.m"
        {
#line 897 "options_file.m"
          make__options_file__V_29_29 = mercury__list__map_2_f_0((MR_Word) &make__options_file_scalar_common_1[2], (MR_Word) &make__options_file_scalar_common_2[0], (MR_Word) &make__options_file_scalar_common_1[14], make__options_file__VariableValues_18);
        }
#line 896 "options_file.m"
        {
#line 896 "options_file.m"
          make__options_file__V_28_28 = mercury__list__condense_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_29_29);
        }
#line 896 "options_file.m"
        {
#line 896 "options_file.m"
          make__options_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "options_file.m"
          MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 0) = ((MR_Box) ((MR_String) "-O2"));
#line 896 "options_file.m"
          MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 1) = ((MR_Box) (make__options_file__V_28_28));
#line 896 "options_file.m"
        }
#line 896 "options_file.m"
        {
#line 896 "options_file.m"
          MR_Word base;
#line 896 "options_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "options_file.m"
          *make__options_file__Result_10 = base;
#line 896 "options_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__V_26_26));
#line 896 "options_file.m"
        }
#line 893 "options_file.m"
      }
#line 898 "options_file.m"
    else
#line 899 "options_file.m"
      *make__options_file__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 876 "options_file.m"
  }
#line 872 "options_file.m"
}

#line 795 "options_file.m"
static void MR_CALL 
make__options_file__get_word_2_4_p_0(
#line 795 "options_file.m"
  MR_Word make__options_file__HeadVar__1_1,
#line 795 "options_file.m"
  MR_Word * make__options_file__RevWord_2,
#line 795 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3,
#line 795 "options_file.m"
  MR_Word * make__options_file__HeadVar__4_4)
#line 795 "options_file.m"
{
#line 798 "options_file.m"
  while (MR_TRUE)
#line 798 "options_file.m"
    {
#line 798 "options_file.m"
      /* tailcall optimized into a loop */
#line 798 "options_file.m"
      {
#line 798 "options_file.m"
        MR_bool make__options_file__succeeded;

#line 798 "options_file.m"
        if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "options_file.m"
          {
#line 798 "options_file.m"
            *make__options_file__RevWord_2 = make__options_file__HeadVar__1_1;
#line 798 "options_file.m"
            *make__options_file__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "options_file.m"
          }
#line 798 "options_file.m"
        else
#line 799 "options_file.m"
          {
#line 799 "options_file.m"
            MR_Char make__options_file__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
#line 799 "options_file.m"
            MR_Word make__options_file__Chars0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));

#line 800 "options_file.m"
            {
#line 800 "options_file.m"
              make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(make__options_file__Char_8);
            }
#line 803 "options_file.m"
            if (make__options_file__succeeded)
#line 801 "options_file.m"
              {
#line 801 "options_file.m"
                *make__options_file__HeadVar__4_4 = make__options_file__Chars0_9;
#line 802 "options_file.m"
                *make__options_file__RevWord_2 = make__options_file__HeadVar__1_1;
#line 801 "options_file.m"
              }
#line 803 "options_file.m"
            else
#line 806 "options_file.m"
              {
#line 803 "options_file.m"
                make__options_file__succeeded = (make__options_file__Char_8 == (MR_Char) 34);
#line 806 "options_file.m"
                if (make__options_file__succeeded)
#line 804 "options_file.m"
                  {
#line 804 "options_file.m"
                    MR_Word make__options_file__RevStringChars_11;
#line 804 "options_file.m"
                    MR_Word make__options_file__Chars1_12;
#line 804 "options_file.m"
                    MR_Word make__options_file__V_15_15;

#line 804 "options_file.m"
                    {
#line 804 "options_file.m"
                      make__options_file__parse_string_chars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevStringChars_11, make__options_file__Chars0_9, &make__options_file__Chars1_12);
                    }
#line 805 "options_file.m"
                    {
#line 805 "options_file.m"
                      make__options_file__V_15_15 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevStringChars_11, make__options_file__HeadVar__1_1);
                    }
#line 805 "options_file.m"
                    /* direct tailcall eliminated */
#line 805 "options_file.m"
                    {
#line 805 "options_file.m"
                      MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_15_15;
#line 805 "options_file.m"
                      MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_12;

#line 805 "options_file.m"
                      make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
#line 805 "options_file.m"
                      make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
#line 805 "options_file.m"
                    }
#line 805 "options_file.m"
                    continue;
#line 804 "options_file.m"
                  }
#line 806 "options_file.m"
                else
#line 823 "options_file.m"
                  {
#line 806 "options_file.m"
                    make__options_file__succeeded = (make__options_file__Char_8 == (MR_Char) 92);
#line 823 "options_file.m"
                    if (make__options_file__succeeded)
#line 811 "options_file.m"
                      if ((make__options_file__Chars0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "options_file.m"
                        {
#line 809 "options_file.m"
                          {
#line 809 "options_file.m"
                            MR_Word base;
#line 809 "options_file.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "options_file.m"
                            *make__options_file__RevWord_2 = base;
#line 809 "options_file.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_8));
#line 809 "options_file.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
#line 809 "options_file.m"
                          }
#line 810 "options_file.m"
                          *make__options_file__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 808 "options_file.m"
                        }
#line 811 "options_file.m"
                      else
#line 812 "options_file.m"
                        {
#line 812 "options_file.m"
                          MR_Char make__options_file__Char2_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_9, (MR_Integer) 0)));
#line 812 "options_file.m"
                          MR_Word make__options_file__Chars1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_9, (MR_Integer) 1)));

#line 815 "options_file.m"
#line 815 "options_file.m"
                          switch (make__options_file__Char2_13) {
#line 815 "options_file.m"
                            default:
#line 815 "options_file.m"
                              make__options_file__succeeded = MR_FALSE;
#line 815 "options_file.m"
                              break;
#line 815 "options_file.m"
                            case (MR_Char) 34:
#line 814 "options_file.m"
                              make__options_file__succeeded = MR_TRUE;
#line 815 "options_file.m"
                              break;
#line 815 "options_file.m"
                            case (MR_Char) 92:
#line 815 "options_file.m"
                              make__options_file__succeeded = MR_TRUE;
#line 815 "options_file.m"
                              break;
#line 815 "options_file.m"
                          }
#line 819 "options_file.m"
                          if (make__options_file__succeeded)
#line 818 "options_file.m"
                            {
#line 818 "options_file.m"
                              MR_Word make__options_file__V_16_16;

#line 818 "options_file.m"
                              {
#line 818 "options_file.m"
                                make__options_file__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "options_file.m"
                                MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_13));
#line 818 "options_file.m"
                                MR_hl_field(MR_mktag(1), make__options_file__V_16_16, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
#line 818 "options_file.m"
                              }
#line 818 "options_file.m"
                              /* direct tailcall eliminated */
#line 818 "options_file.m"
                              {
#line 818 "options_file.m"
                                MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_16_16;
#line 818 "options_file.m"
                                MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_20;

#line 818 "options_file.m"
                                make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
#line 818 "options_file.m"
                                make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
#line 818 "options_file.m"
                              }
#line 818 "options_file.m"
                              continue;
#line 818 "options_file.m"
                            }
#line 819 "options_file.m"
                          else
#line 820 "options_file.m"
                            {
#line 820 "options_file.m"
                              MR_Word make__options_file__V_17_17;
#line 820 "options_file.m"
                              MR_Word make__options_file__V_18_18;

#line 820 "options_file.m"
                              {
#line 820 "options_file.m"
                                make__options_file__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "options_file.m"
                                MR_hl_field(MR_mktag(1), make__options_file__V_18_18, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_8));
#line 820 "options_file.m"
                                MR_hl_field(MR_mktag(1), make__options_file__V_18_18, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
#line 820 "options_file.m"
                              }
#line 820 "options_file.m"
                              {
#line 820 "options_file.m"
                                make__options_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "options_file.m"
                                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_13));
#line 820 "options_file.m"
                                MR_hl_field(MR_mktag(1), make__options_file__V_17_17, 1) = ((MR_Box) (make__options_file__V_18_18));
#line 820 "options_file.m"
                              }
#line 820 "options_file.m"
                              /* direct tailcall eliminated */
#line 820 "options_file.m"
                              {
#line 820 "options_file.m"
                                MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_17_17;
#line 820 "options_file.m"
                                MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_20;

#line 820 "options_file.m"
                                make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
#line 820 "options_file.m"
                                make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
#line 820 "options_file.m"
                              }
#line 820 "options_file.m"
                              continue;
#line 820 "options_file.m"
                            }
#line 812 "options_file.m"
                        }
#line 823 "options_file.m"
                    else
#line 824 "options_file.m"
                      {
#line 824 "options_file.m"
                        MR_Word make__options_file__V_19_19;

#line 824 "options_file.m"
                        {
#line 824 "options_file.m"
                          make__options_file__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "options_file.m"
                          MR_hl_field(MR_mktag(1), make__options_file__V_19_19, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_8));
#line 824 "options_file.m"
                          MR_hl_field(MR_mktag(1), make__options_file__V_19_19, 1) = ((MR_Box) (make__options_file__HeadVar__1_1));
#line 824 "options_file.m"
                        }
#line 824 "options_file.m"
                        /* direct tailcall eliminated */
#line 824 "options_file.m"
                        {
#line 824 "options_file.m"
                          MR_Word make__options_file__HeadVar__1__tmp_copy_1 = make__options_file__V_19_19;
#line 824 "options_file.m"
                          MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars0_9;

#line 824 "options_file.m"
                          make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
#line 824 "options_file.m"
                          make__options_file__HeadVar__1_1 = make__options_file__HeadVar__1__tmp_copy_1;
#line 824 "options_file.m"
                        }
#line 824 "options_file.m"
                        continue;
#line 824 "options_file.m"
                      }
#line 823 "options_file.m"
                  }
#line 806 "options_file.m"
              }
#line 799 "options_file.m"
          }
#line 798 "options_file.m"
      }
#line 798 "options_file.m"
      break;
#line 798 "options_file.m"
    }
#line 795 "options_file.m"
}

#line 779 "options_file.m"
static MR_bool MR_CALL 
make__options_file__split_into_words_2_2_f_0_1(
#line 779 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 779 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 779 "options_file.m"
{
#line 779 "options_file.m"
  {
#line 779 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 779 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 779 "options_file.m"
    {
#line 779 "options_file.m"
      return make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 779 "options_file.m"
    return make__options_file__succeeded;
#line 779 "options_file.m"
  }
#line 779 "options_file.m"
}

#line 776 "options_file.m"
static MR_Word MR_CALL 
make__options_file__split_into_words_2_2_f_0(
#line 776 "options_file.m"
  MR_Word make__options_file__Chars0_4,
#line 776 "options_file.m"
  MR_Word make__options_file__RevWords0_5)
#line 776 "options_file.m"
{
#line 778 "options_file.m"
  while (MR_TRUE)
#line 778 "options_file.m"
    {
#line 778 "options_file.m"
      /* tailcall optimized into a loop */
#line 778 "options_file.m"
      {
#line 778 "options_file.m"
        MR_bool make__options_file__succeeded;
#line 778 "options_file.m"
        MR_Word make__options_file__RevWords_6;
#line 778 "options_file.m"
        MR_Word make__options_file__Chars1_8;
#line 779 "options_file.m"
        MR_Word make__options_file__V_7_7;

#line 779 "options_file.m"
        {
#line 779 "options_file.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_1[12], make__options_file__Chars0_4, &make__options_file__V_7_7, &make__options_file__Chars1_8);
        }
#line 783 "options_file.m"
        if ((make__options_file__Chars1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "options_file.m"
          make__options_file__RevWords_6 = make__options_file__RevWords0_5;
#line 783 "options_file.m"
        else
#line 784 "options_file.m"
          {
#line 784 "options_file.m"
            MR_String make__options_file__Word_11;
#line 784 "options_file.m"
            MR_Word make__options_file__Chars_12;
#line 784 "options_file.m"
            MR_Word make__options_file__V_14_14;
#line 784 "options_file.m"
            MR_Word make__options_file__RevWord_20;

#line 792 "options_file.m"
            {
#line 792 "options_file.m"
              make__options_file__get_word_2_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevWord_20, make__options_file__Chars1_8, &make__options_file__Chars_12);
            }
#line 793 "options_file.m"
            {
#line 793 "options_file.m"
              make__options_file__Word_11 = mercury__string__from_rev_char_list_1_f_0(make__options_file__RevWord_20);
            }
#line 786 "options_file.m"
            {
#line 786 "options_file.m"
              make__options_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_14_14, 0) = ((MR_Box) (make__options_file__Word_11));
#line 786 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_14_14, 1) = ((MR_Box) (make__options_file__RevWords0_5));
#line 786 "options_file.m"
            }
#line 786 "options_file.m"
            /* direct tailcall eliminated */
#line 786 "options_file.m"
            {
#line 786 "options_file.m"
              MR_Word make__options_file__Chars0__tmp_copy_4 = make__options_file__Chars_12;
#line 786 "options_file.m"
              MR_Word make__options_file__RevWords0__tmp_copy_5 = make__options_file__V_14_14;

#line 786 "options_file.m"
              make__options_file__RevWords0_5 = make__options_file__RevWords0__tmp_copy_5;
#line 786 "options_file.m"
              make__options_file__Chars0_4 = make__options_file__Chars0__tmp_copy_4;
#line 786 "options_file.m"
            }
#line 786 "options_file.m"
            continue;
#line 784 "options_file.m"
          }
#line 778 "options_file.m"
        return make__options_file__RevWords_6;
#line 778 "options_file.m"
      }
#line 778 "options_file.m"
      break;
#line 778 "options_file.m"
    }
#line 776 "options_file.m"
}

#line 716 "options_file.m"
static void MR_CALL 
make__options_file__skip_comment_line_3_p_0(
#line 716 "options_file.m"
  MR_Word * make__options_file__FoundEOF_4)
#line 716 "options_file.m"
{
#line 718 "options_file.m"
  while (MR_TRUE)
#line 718 "options_file.m"
    {
#line 718 "options_file.m"
      /* tailcall optimized into a loop */
#line 718 "options_file.m"
      {
#line 718 "options_file.m"
        MR_bool make__options_file__succeeded;
#line 718 "options_file.m"
        MR_Word make__options_file__Result_23;

#line 737 "options_file.m"
        {
#line 737 "options_file.m"
          mercury__io__read_char_3_p_0(&make__options_file__Result_23);
        }
#line 9566 "make.options_file.c"
#line 9567 "make.options_file.c"
        switch (MR_tag((MR_Word) make__options_file__Result_23)) {
#line 9569 "make.options_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 9571 "make.options_file.c"
          case (MR_Integer) 0:
#line 729 "options_file.m"
            *make__options_file__FoundEOF_4 = (MR_Integer) 1;
#line 9575 "make.options_file.c"
            break;
#line 9577 "make.options_file.c"
          case (MR_Integer) 1:
#line 9579 "make.options_file.c"
            {
#line 9581 "make.options_file.c"
              MR_Char make__options_file__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Result_23, (MR_Integer) 0)));

#line 722 "options_file.m"
              make__options_file__succeeded = (make__options_file__Char_7 == (MR_Char) 10);
#line 724 "options_file.m"
              if (make__options_file__succeeded)
#line 723 "options_file.m"
                *make__options_file__FoundEOF_4 = (MR_Integer) 0;
#line 724 "options_file.m"
              else
#line 725 "options_file.m"
                {
#line 725 "options_file.m"
                  /* direct tailcall eliminated */
#line 725 "options_file.m"
                  continue;
#line 725 "options_file.m"
                }
#line 9600 "make.options_file.c"
            }
#line 9602 "make.options_file.c"
            break;
#line 9604 "make.options_file.c"
          case (MR_Integer) 2:
#line 9606 "make.options_file.c"
            {
#line 9608 "make.options_file.c"
              MR_Word make__options_file__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result_23, (MR_Integer) 0)));
#line 9610 "make.options_file.c"
              MR_Word make__options_file__V_27_27;
#line 9612 "make.options_file.c"
              MR_String make__options_file__V_28_28;

#line 746 "options_file.m"
              {
#line 746 "options_file.m"
                make__options_file__V_28_28 = mercury__io__error_message_1_f_0(make__options_file__Error_25);
              }
#line 746 "options_file.m"
              make__options_file__V_27_27 = (MR_Word) make__options_file__V_28_28;
#line 746 "options_file.m"
              {
#line 746 "options_file.m"
                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_27_27)));
#line 746 "options_file.m"
                return;
              }
#line 9629 "make.options_file.c"
            }
#line 9631 "make.options_file.c"
            break;
#line 9633 "make.options_file.c"
        }
#line 718 "options_file.m"
      }
#line 718 "options_file.m"
      break;
#line 718 "options_file.m"
    }
#line 716 "options_file.m"
}

#line 690 "options_file.m"
static void MR_CALL 
make__options_file__parse_string_chars_4_p_0(
#line 690 "options_file.m"
  MR_Word make__options_file__String0_1,
#line 690 "options_file.m"
  MR_Word * make__options_file__String_2,
#line 690 "options_file.m"
  MR_Word make__options_file__HeadVar__3_3,
#line 690 "options_file.m"
  MR_Word * make__options_file__Chars_4)
#line 690 "options_file.m"
{
#line 693 "options_file.m"
  while (MR_TRUE)
#line 693 "options_file.m"
    {
#line 693 "options_file.m"
      /* tailcall optimized into a loop */
#line 693 "options_file.m"
      {
#line 693 "options_file.m"
        MR_bool make__options_file__succeeded;

#line 693 "options_file.m"
        if ((make__options_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 693 "options_file.m"
          {
#line 694 "options_file.m"
            {
#line 694 "options_file.m"
              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated string")))));
#line 694 "options_file.m"
              return;
            }
#line 693 "options_file.m"
          }
#line 693 "options_file.m"
        else
#line 695 "options_file.m"
          {
#line 695 "options_file.m"
            MR_Char make__options_file__Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 0)));
#line 695 "options_file.m"
            MR_Word make__options_file__Chars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__3_3, (MR_Integer) 1)));

#line 696 "options_file.m"
            make__options_file__succeeded = (make__options_file__Char_12 == (MR_Char) 34);
#line 699 "options_file.m"
            if (make__options_file__succeeded)
#line 697 "options_file.m"
              {
#line 697 "options_file.m"
                *make__options_file__Chars_4 = make__options_file__Chars0_13;
#line 698 "options_file.m"
                *make__options_file__String_2 = make__options_file__String0_1;
#line 697 "options_file.m"
              }
#line 699 "options_file.m"
            else
#line 712 "options_file.m"
              {
#line 699 "options_file.m"
                make__options_file__succeeded = (make__options_file__Char_12 == (MR_Char) 92);
#line 712 "options_file.m"
                if (make__options_file__succeeded)
#line 708 "options_file.m"
                  if ((make__options_file__Chars0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "options_file.m"
                    {
#line 710 "options_file.m"
                      {
#line 710 "options_file.m"
                        mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated string")))));
#line 710 "options_file.m"
                        return;
                      }
#line 709 "options_file.m"
                    }
#line 708 "options_file.m"
                  else
#line 701 "options_file.m"
                    {
#line 701 "options_file.m"
                      MR_Char make__options_file__Char2_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_13, (MR_Integer) 0)));
#line 701 "options_file.m"
                      MR_Word make__options_file__Chars1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars0_13, (MR_Integer) 1)));
#line 701 "options_file.m"
                      MR_Word make__options_file__String1_17;

#line 702 "options_file.m"
                      make__options_file__succeeded = (make__options_file__Char2_15 == (MR_Char) 34);
#line 704 "options_file.m"
                      if (make__options_file__succeeded)
#line 703 "options_file.m"
                        {
#line 703 "options_file.m"
                          make__options_file__String1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "options_file.m"
                          MR_hl_field(MR_mktag(1), make__options_file__String1_17, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_15));
#line 703 "options_file.m"
                          MR_hl_field(MR_mktag(1), make__options_file__String1_17, 1) = ((MR_Box) (make__options_file__String0_1));
#line 703 "options_file.m"
                        }
#line 704 "options_file.m"
                      else
#line 705 "options_file.m"
                        {
#line 705 "options_file.m"
                          MR_Word make__options_file__V_20_20;

#line 705 "options_file.m"
                          {
#line 705 "options_file.m"
                            make__options_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "options_file.m"
                            MR_hl_field(MR_mktag(1), make__options_file__V_20_20, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_12));
#line 705 "options_file.m"
                            MR_hl_field(MR_mktag(1), make__options_file__V_20_20, 1) = ((MR_Box) (make__options_file__String0_1));
#line 705 "options_file.m"
                          }
#line 705 "options_file.m"
                          {
#line 705 "options_file.m"
                            make__options_file__String1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "options_file.m"
                            MR_hl_field(MR_mktag(1), make__options_file__String1_17, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_15));
#line 705 "options_file.m"
                            MR_hl_field(MR_mktag(1), make__options_file__String1_17, 1) = ((MR_Box) (make__options_file__V_20_20));
#line 705 "options_file.m"
                          }
#line 705 "options_file.m"
                        }
#line 707 "options_file.m"
                      /* direct tailcall eliminated */
#line 707 "options_file.m"
                      {
#line 707 "options_file.m"
                        MR_Word make__options_file__String0__tmp_copy_1 = make__options_file__String1_17;
#line 707 "options_file.m"
                        MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars1_16;

#line 707 "options_file.m"
                        make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
#line 707 "options_file.m"
                        make__options_file__String0_1 = make__options_file__String0__tmp_copy_1;
#line 707 "options_file.m"
                      }
#line 707 "options_file.m"
                      continue;
#line 701 "options_file.m"
                    }
#line 712 "options_file.m"
                else
#line 713 "options_file.m"
                  {
#line 713 "options_file.m"
                    MR_Word make__options_file__V_21_21;

#line 713 "options_file.m"
                    {
#line 713 "options_file.m"
                      make__options_file__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "options_file.m"
                      MR_hl_field(MR_mktag(1), make__options_file__V_21_21, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_12));
#line 713 "options_file.m"
                      MR_hl_field(MR_mktag(1), make__options_file__V_21_21, 1) = ((MR_Box) (make__options_file__String0_1));
#line 713 "options_file.m"
                    }
#line 713 "options_file.m"
                    /* direct tailcall eliminated */
#line 713 "options_file.m"
                    {
#line 713 "options_file.m"
                      MR_Word make__options_file__String0__tmp_copy_1 = make__options_file__V_21_21;
#line 713 "options_file.m"
                      MR_Word make__options_file__HeadVar__3__tmp_copy_3 = make__options_file__Chars0_13;

#line 713 "options_file.m"
                      make__options_file__HeadVar__3_3 = make__options_file__HeadVar__3__tmp_copy_3;
#line 713 "options_file.m"
                      make__options_file__String0_1 = make__options_file__String0__tmp_copy_1;
#line 713 "options_file.m"
                    }
#line 713 "options_file.m"
                    continue;
#line 713 "options_file.m"
                  }
#line 712 "options_file.m"
              }
#line 695 "options_file.m"
          }
#line 693 "options_file.m"
      }
#line 693 "options_file.m"
      break;
#line 693 "options_file.m"
    }
#line 690 "options_file.m"
}

#line 660 "options_file.m"
static void MR_CALL 
make__options_file__parse_variable_2_5_p_0(
#line 660 "options_file.m"
  MR_Word make__options_file__IsFirst_1,
#line 660 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 660 "options_file.m"
  MR_Word * make__options_file__Var_3,
#line 660 "options_file.m"
  MR_Word make__options_file__HeadVar__4_4,
#line 660 "options_file.m"
  MR_Word * make__options_file__HeadVar__5_5)
#line 660 "options_file.m"
{
#line 663 "options_file.m"
  while (MR_TRUE)
#line 663 "options_file.m"
    {
#line 663 "options_file.m"
      /* tailcall optimized into a loop */
#line 663 "options_file.m"
      {
#line 663 "options_file.m"
        MR_bool make__options_file__succeeded;

#line 663 "options_file.m"
        if ((make__options_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "options_file.m"
          {
#line 663 "options_file.m"
            *make__options_file__Var_3 = make__options_file__HeadVar__2_2;
#line 663 "options_file.m"
            *make__options_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 663 "options_file.m"
          }
#line 663 "options_file.m"
        else
#line 664 "options_file.m"
          {
#line 664 "options_file.m"
            MR_Char make__options_file__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__4_4, (MR_Integer) 0)));
#line 664 "options_file.m"
            MR_Word make__options_file__Chars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__4_4, (MR_Integer) 1)));

#line 666 "options_file.m"
            {
#line 666 "options_file.m"
              make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(make__options_file__Char_11);
            }
#line 666 "options_file.m"
            make__options_file__succeeded = !(make__options_file__succeeded);
#line 666 "options_file.m"
            if (make__options_file__succeeded)
#line 670 "options_file.m"
#line 670 "options_file.m"
              switch (make__options_file__IsFirst_1) {
#line 670 "options_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 670 "options_file.m"
                case (MR_Integer) 0:
#line 673 "options_file.m"
                  {
#line 673 "options_file.m"
#line 673 "options_file.m"
                    switch (make__options_file__Char_11) {
#line 673 "options_file.m"
                      default:
#line 673 "options_file.m"
                        make__options_file__succeeded = MR_FALSE;
#line 673 "options_file.m"
                        break;
#line 673 "options_file.m"
                      case (MR_Char) 45:
#line 673 "options_file.m"
                        make__options_file__succeeded = MR_TRUE;
#line 673 "options_file.m"
                        break;
#line 673 "options_file.m"
                      case (MR_Char) 46:
#line 674 "options_file.m"
                        make__options_file__succeeded = MR_TRUE;
#line 673 "options_file.m"
                        break;
#line 673 "options_file.m"
                    }
#line 673 "options_file.m"
                    if (!(make__options_file__succeeded))
#line 672 "options_file.m"
                      {
#line 672 "options_file.m"
                        make__options_file__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(make__options_file__Char_11);
                      }
#line 673 "options_file.m"
                  }
#line 670 "options_file.m"
                  break;
#line 670 "options_file.m"
                case (MR_Integer) 1:
#line 669 "options_file.m"
                  {
#line 669 "options_file.m"
                    make__options_file__succeeded = mercury__char__is_alpha_1_p_0(make__options_file__Char_11);
                  }
#line 670 "options_file.m"
                  break;
#line 670 "options_file.m"
              }
#line 679 "options_file.m"
            if (make__options_file__succeeded)
#line 678 "options_file.m"
              {
#line 678 "options_file.m"
                MR_Word make__options_file__V_15_15;

#line 678 "options_file.m"
                {
#line 678 "options_file.m"
                  make__options_file__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__V_15_15, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_11));
#line 678 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__V_15_15, 1) = ((MR_Box) (make__options_file__HeadVar__2_2));
#line 678 "options_file.m"
                }
#line 678 "options_file.m"
                /* direct tailcall eliminated */
#line 678 "options_file.m"
                {
#line 678 "options_file.m"
                  MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__V_15_15;
#line 678 "options_file.m"
                  MR_Word make__options_file__HeadVar__4__tmp_copy_4 = make__options_file__Chars0_12;

#line 678 "options_file.m"
                  make__options_file__HeadVar__4_4 = make__options_file__HeadVar__4__tmp_copy_4;
#line 678 "options_file.m"
                  make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
#line 678 "options_file.m"
                  make__options_file__IsFirst_1 = (MR_Integer) 0;
#line 678 "options_file.m"
                }
#line 678 "options_file.m"
                continue;
#line 678 "options_file.m"
              }
#line 679 "options_file.m"
            else
#line 680 "options_file.m"
              {
#line 680 "options_file.m"
                *make__options_file__Var_3 = make__options_file__HeadVar__2_2;
#line 681 "options_file.m"
                *make__options_file__HeadVar__5_5 = make__options_file__HeadVar__4_4;
#line 680 "options_file.m"
              }
#line 664 "options_file.m"
          }
#line 663 "options_file.m"
      }
#line 663 "options_file.m"
      break;
#line 663 "options_file.m"
    }
#line 660 "options_file.m"
}

#line 630 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_5(
#line 630 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 630 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 630 "options_file.m"
{
#line 630 "options_file.m"
  {
#line 630 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 630 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 630 "options_file.m"
    {
#line 630 "options_file.m"
      return make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 630 "options_file.m"
    return make__options_file__succeeded;
#line 630 "options_file.m"
  }
#line 630 "options_file.m"
}

#line 616 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_4(
#line 616 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 616 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 616 "options_file.m"
{
#line 616 "options_file.m"
  {
#line 616 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 616 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 616 "options_file.m"
    {
#line 616 "options_file.m"
      return make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 616 "options_file.m"
    return make__options_file__succeeded;
#line 616 "options_file.m"
  }
#line 616 "options_file.m"
}

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_3(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 653 "options_file.m"
{
#line 653 "options_file.m"
  {
#line 653 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 653 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 653 "options_file.m"
    {
#line 653 "options_file.m"
      return make__options_file__succeeded = make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 653 "options_file.m"
    return make__options_file__succeeded;
#line 653 "options_file.m"
  }
#line 653 "options_file.m"
}

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_2(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 653 "options_file.m"
{
#line 653 "options_file.m"
  {
#line 653 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 653 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 653 "options_file.m"
    {
#line 653 "options_file.m"
      return make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 653 "options_file.m"
    return make__options_file__succeeded;
#line 653 "options_file.m"
  }
#line 653 "options_file.m"
}

#line 612 "options_file.m"
static MR_bool MR_CALL 
make__options_file__parse_options_line_2_p_0_1(
#line 612 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 612 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 612 "options_file.m"
{
#line 612 "options_file.m"
  {
#line 612 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 612 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 612 "options_file.m"
    {
#line 612 "options_file.m"
      return make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 612 "options_file.m"
    return make__options_file__succeeded;
#line 612 "options_file.m"
  }
#line 612 "options_file.m"
}

#line 599 "options_file.m"
static void MR_CALL 
make__options_file__parse_options_line_2_p_0(
#line 599 "options_file.m"
  MR_Word make__options_file__Line0_3,
#line 599 "options_file.m"
  MR_Word * make__options_file__OptionsFileLine_4)
#line 599 "options_file.m"
{
#line 614 "options_file.m"
  {
#line 614 "options_file.m"
    MR_bool make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line0_3)) == (MR_mktag((MR_Integer) 1)));
#line 614 "options_file.m"
    MR_Word make__options_file__ErrorIfNotExist_6;
#line 614 "options_file.m"
    MR_Word make__options_file__Line3_8;
#line 609 "options_file.m"
    MR_Word make__options_file__Line2_7;
#line 609 "options_file.m"
    MR_Word make__options_file__V_17_17;
#line 606 "options_file.m"
    MR_Word make__options_file__Line1_5;
#line 603 "options_file.m"
    MR_Char make__options_file__V_16_16;

#line 603 "options_file.m"
    if (make__options_file__succeeded)
#line 603 "options_file.m"
      {
#line 603 "options_file.m"
        make__options_file__V_16_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line0_3, (MR_Integer) 0)));
#line 603 "options_file.m"
        make__options_file__Line1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line0_3, (MR_Integer) 1)));
#line 603 "options_file.m"
        make__options_file__succeeded = (make__options_file__V_16_16 == (MR_Char) 45);
#line 603 "options_file.m"
      }
#line 606 "options_file.m"
    if (make__options_file__succeeded)
#line 604 "options_file.m"
      {
#line 604 "options_file.m"
        make__options_file__ErrorIfNotExist_6 = (MR_Integer) 1;
#line 605 "options_file.m"
        make__options_file__Line2_7 = make__options_file__Line1_5;
#line 604 "options_file.m"
      }
#line 606 "options_file.m"
    else
#line 607 "options_file.m"
      {
#line 607 "options_file.m"
        make__options_file__ErrorIfNotExist_6 = (MR_Integer) 0;
#line 608 "options_file.m"
        make__options_file__Line2_7 = make__options_file__Line0_3;
#line 607 "options_file.m"
      }
#line 610 "options_file.m"
    {
#line 610 "options_file.m"
      make__options_file__V_17_17 = mercury__string__to_char_list_1_f_0((MR_String) "include");
    }
#line 610 "options_file.m"
    {
#line 610 "options_file.m"
      make__options_file__succeeded = mercury__list__append_3_p_3((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__V_17_17, &make__options_file__Line3_8, make__options_file__Line2_7);
    }
#line 614 "options_file.m"
    if (make__options_file__succeeded)
#line 612 "options_file.m"
      {
#line 612 "options_file.m"
        MR_Word make__options_file__Line4_10;
#line 612 "options_file.m"
        MR_Word make__options_file__V_9_9;

#line 612 "options_file.m"
        {
#line 612 "options_file.m"
          mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_1[8], make__options_file__Line3_8, &make__options_file__V_9_9, &make__options_file__Line4_10);
        }
#line 613 "options_file.m"
        {
#line 613 "options_file.m"
          MR_Word base;
#line 613 "options_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "options_file.m"
          *make__options_file__OptionsFileLine_4 = base;
#line 613 "options_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__ErrorIfNotExist_6));
#line 613 "options_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__Line4_10));
#line 613 "options_file.m"
        }
#line 612 "options_file.m"
      }
#line 614 "options_file.m"
    else
#line 615 "options_file.m"
      {
#line 615 "options_file.m"
        MR_Word make__options_file__TypeCtorInfo_45_45;
#line 615 "options_file.m"
        MR_String make__options_file__VarName_11;
#line 615 "options_file.m"
        MR_Word make__options_file__Add_13;
#line 615 "options_file.m"
        MR_Word make__options_file__VarValue_15;
#line 615 "options_file.m"
        MR_Word make__options_file__Line1_37;
#line 615 "options_file.m"
        MR_Word make__options_file__Line2_38;
#line 615 "options_file.m"
        MR_Word make__options_file__Line4_40;
#line 615 "options_file.m"
        MR_Word make__options_file__VarList_51;
#line 616 "options_file.m"
        MR_Word make__options_file__V_12_12;
#line 620 "options_file.m"
        MR_Word make__options_file__Line3_36;
#line 617 "options_file.m"
        MR_Char make__options_file__V_21_21;
#line 630 "options_file.m"
        MR_Word make__options_file__V_14_14;

#line 650 "options_file.m"
        {
#line 650 "options_file.m"
          make__options_file__parse_variable_2_5_p_0((MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__VarList_51, make__options_file__Line0_3, &make__options_file__Line1_37);
        }
#line 651 "options_file.m"
        {
#line 651 "options_file.m"
          mercury__string__from_rev_char_list_2_p_0(make__options_file__VarList_51, &make__options_file__VarName_11);
        }
#line 652 "options_file.m"
        make__options_file__succeeded = (strcmp(make__options_file__VarName_11, (MR_String) "") == 0);
#line 656 "options_file.m"
        if (make__options_file__succeeded)
#line 653 "options_file.m"
          {
#line 653 "options_file.m"
            MR_Word make__options_file__FirstWord_52;
#line 653 "options_file.m"
            MR_Word make__options_file__V_58_58;
#line 653 "options_file.m"
            MR_String make__options_file__V_59_59;
#line 653 "options_file.m"
            MR_String make__options_file__V_61_61;
#line 653 "options_file.m"
            MR_String make__options_file__V_62_62;
#line 653 "options_file.m"
            MR_Word make__options_file__V_53_53;

#line 653 "options_file.m"
            {
#line 653 "options_file.m"
              mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_9[2], make__options_file__Line1_37, &make__options_file__FirstWord_52, &make__options_file__V_53_53);
            }
#line 655 "options_file.m"
            {
#line 655 "options_file.m"
              make__options_file__V_62_62 = mercury__string__from_char_list_1_f_0(make__options_file__FirstWord_52);
            }
#line 655 "options_file.m"
            {
#line 655 "options_file.m"
              make__options_file__V_61_61 = mercury__string__f_43_43_2_f_0(make__options_file__V_62_62, (MR_String) "\'");
            }
#line 654 "options_file.m"
            {
#line 654 "options_file.m"
              make__options_file__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "expected variable at \140", make__options_file__V_61_61);
            }
#line 654 "options_file.m"
            make__options_file__V_58_58 = (MR_Word) make__options_file__V_59_59;
#line 654 "options_file.m"
            {
#line 654 "options_file.m"
              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_58_58)));
#line 654 "options_file.m"
              return;
            }
#line 653 "options_file.m"
          }
#line 656 "options_file.m"
        else
#line 657 "options_file.m"
          {
#line 657 "options_file.m"
          }
#line 10345 "make.options_file.c"
        make__options_file__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 616 "options_file.m"
        {
#line 616 "options_file.m"
          mercury__list__takewhile_4_p_0(make__options_file__TypeCtorInfo_45_45, (MR_Word) &make__options_file_scalar_common_1[10], make__options_file__Line1_37, &make__options_file__V_12_12, &make__options_file__Line2_38);
        }
#line 617 "options_file.m"
        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line2_38)) == (MR_mktag((MR_Integer) 1)));
#line 617 "options_file.m"
        if (make__options_file__succeeded)
#line 617 "options_file.m"
          {
#line 617 "options_file.m"
            make__options_file__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 0)));
#line 617 "options_file.m"
            make__options_file__Line3_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 1)));
#line 617 "options_file.m"
            make__options_file__succeeded = (make__options_file__V_21_21 == (MR_Char) 61);
#line 617 "options_file.m"
          }
#line 620 "options_file.m"
        if (make__options_file__succeeded)
#line 618 "options_file.m"
          {
#line 618 "options_file.m"
            make__options_file__Add_13 = (MR_Integer) 0;
#line 619 "options_file.m"
            make__options_file__Line4_40 = make__options_file__Line3_36;
#line 618 "options_file.m"
          }
#line 620 "options_file.m"
        else
#line 623 "options_file.m"
          {
#line 623 "options_file.m"
            MR_Word make__options_file__Line3_35;
#line 620 "options_file.m"
            MR_Char make__options_file__V_22_22;
#line 620 "options_file.m"
            MR_Word make__options_file__V_23_23;
#line 620 "options_file.m"
            MR_Char make__options_file__V_24_24;

#line 620 "options_file.m"
            make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line2_38)) == (MR_mktag((MR_Integer) 1)));
#line 620 "options_file.m"
            if (make__options_file__succeeded)
#line 620 "options_file.m"
              {
#line 620 "options_file.m"
                make__options_file__V_22_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 0)));
#line 620 "options_file.m"
                make__options_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 1)));
#line 620 "options_file.m"
                make__options_file__succeeded = (make__options_file__V_22_22 == (MR_Char) 43);
#line 620 "options_file.m"
                if (make__options_file__succeeded)
#line 620 "options_file.m"
                  {
#line 620 "options_file.m"
                    make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 620 "options_file.m"
                    if (make__options_file__succeeded)
#line 620 "options_file.m"
                      {
#line 620 "options_file.m"
                        make__options_file__V_24_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_23_23, (MR_Integer) 0)));
#line 620 "options_file.m"
                        make__options_file__Line3_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_23_23, (MR_Integer) 1)));
#line 620 "options_file.m"
                        make__options_file__succeeded = (make__options_file__V_24_24 == (MR_Char) 61);
#line 620 "options_file.m"
                      }
#line 620 "options_file.m"
                  }
#line 620 "options_file.m"
              }
#line 623 "options_file.m"
            if (make__options_file__succeeded)
#line 621 "options_file.m"
              {
#line 621 "options_file.m"
                make__options_file__Add_13 = (MR_Integer) 1;
#line 622 "options_file.m"
                make__options_file__Line4_40 = make__options_file__Line3_35;
#line 621 "options_file.m"
              }
#line 623 "options_file.m"
            else
#line 626 "options_file.m"
              {
#line 626 "options_file.m"
                MR_Word make__options_file__Line3_34;
#line 623 "options_file.m"
                MR_Char make__options_file__V_25_25;
#line 623 "options_file.m"
                MR_Word make__options_file__V_26_26;
#line 623 "options_file.m"
                MR_Char make__options_file__V_27_27;

#line 623 "options_file.m"
                make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Line2_38)) == (MR_mktag((MR_Integer) 1)));
#line 623 "options_file.m"
                if (make__options_file__succeeded)
#line 623 "options_file.m"
                  {
#line 623 "options_file.m"
                    make__options_file__V_25_25 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 0)));
#line 623 "options_file.m"
                    make__options_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Line2_38, (MR_Integer) 1)));
#line 623 "options_file.m"
                    make__options_file__succeeded = (make__options_file__V_25_25 == (MR_Char) 58);
#line 623 "options_file.m"
                    if (make__options_file__succeeded)
#line 623 "options_file.m"
                      {
#line 623 "options_file.m"
                        make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 623 "options_file.m"
                        if (make__options_file__succeeded)
#line 623 "options_file.m"
                          {
#line 623 "options_file.m"
                            make__options_file__V_27_27 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_26_26, (MR_Integer) 0)));
#line 623 "options_file.m"
                            make__options_file__Line3_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_26_26, (MR_Integer) 1)));
#line 623 "options_file.m"
                            make__options_file__succeeded = (make__options_file__V_27_27 == (MR_Char) 61);
#line 623 "options_file.m"
                          }
#line 623 "options_file.m"
                      }
#line 623 "options_file.m"
                  }
#line 626 "options_file.m"
                if (make__options_file__succeeded)
#line 624 "options_file.m"
                  {
#line 624 "options_file.m"
                    make__options_file__Add_13 = (MR_Integer) 0;
#line 625 "options_file.m"
                    make__options_file__Line4_40 = make__options_file__Line3_34;
#line 624 "options_file.m"
                  }
#line 626 "options_file.m"
                else
#line 627 "options_file.m"
                  {
#line 627 "options_file.m"
                    MR_Word make__options_file__V_28_28;
#line 627 "options_file.m"
                    MR_String make__options_file__V_29_29;
#line 627 "options_file.m"
                    MR_String make__options_file__V_31_31;

#line 628 "options_file.m"
                    {
#line 628 "options_file.m"
                      make__options_file__V_31_31 = mercury__string__f_43_43_2_f_0(make__options_file__VarName_11, (MR_String) "\'");
                    }
#line 628 "options_file.m"
                    {
#line 628 "options_file.m"
                      make__options_file__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "expected \140=\', \140:=\' or \140+=\' after \140", make__options_file__V_31_31);
                    }
#line 627 "options_file.m"
                    make__options_file__V_28_28 = (MR_Word) make__options_file__V_29_29;
#line 627 "options_file.m"
                    {
#line 627 "options_file.m"
                      mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_28_28)));
#line 627 "options_file.m"
                      return;
                    }
#line 627 "options_file.m"
                  }
#line 626 "options_file.m"
              }
#line 623 "options_file.m"
          }
#line 630 "options_file.m"
        {
#line 630 "options_file.m"
          mercury__list__takewhile_4_p_0(make__options_file__TypeCtorInfo_45_45, (MR_Word) &make__options_file_scalar_common_1[11], make__options_file__Line4_40, &make__options_file__V_14_14, &make__options_file__VarValue_15);
        }
#line 631 "options_file.m"
        {
#line 631 "options_file.m"
          MR_Word base;
#line 631 "options_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 631 "options_file.m"
          *make__options_file__OptionsFileLine_4 = base;
#line 631 "options_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__options_file__VarName_11));
#line 631 "options_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__options_file__Add_13));
#line 631 "options_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__options_file__VarValue_15));
#line 631 "options_file.m"
        }
#line 615 "options_file.m"
      }
#line 614 "options_file.m"
  }
#line 599 "options_file.m"
}

#line 566 "options_file.m"
static MR_Box MR_CALL 
make__options_file__report_undefined_variables_4_p_0_1(
#line 566 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 566 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 566 "options_file.m"
{
#line 566 "options_file.m"
  {
#line 566 "options_file.m"
    MR_Box make__options_file__wrapper_arg_2;
#line 566 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 566 "options_file.m"
    MR_String make__options_file__conv0_HeadVar__2_2;

#line 566 "options_file.m"
    {
#line 566 "options_file.m"
      make__options_file__conv0_HeadVar__2_2 = parse_tree__error_util__add_quotes_1_f_0(((MR_String) make__options_file__wrapper_arg_1));
    }
#line 566 "options_file.m"
    make__options_file__wrapper_arg_2 = ((MR_Box) (make__options_file__conv0_HeadVar__2_2));
#line 566 "options_file.m"
    return make__options_file__wrapper_arg_2;
#line 566 "options_file.m"
  }
#line 566 "options_file.m"
}

#line 546 "options_file.m"
static void MR_CALL 
make__options_file__report_undefined_variables_4_p_0(
#line 546 "options_file.m"
  MR_Word make__options_file__Globals_5,
#line 546 "options_file.m"
  MR_Word make__options_file__Vars_6)
#line 546 "options_file.m"
{
#line 549 "options_file.m"
  {
#line 549 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 549 "options_file.m"
    MR_Word make__options_file__V_10_10;

#line 550 "options_file.m"
    {
#line 550 "options_file.m"
      make__options_file__V_10_10 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__Vars_6);
    }
#line 556 "options_file.m"
    if ((make__options_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "options_file.m"
      {
#line 556 "options_file.m"
      }
#line 556 "options_file.m"
    else
#line 557 "options_file.m"
      {
#line 557 "options_file.m"
        MR_Word make__options_file__Rest_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__V_10_10, (MR_Integer) 1)));
#line 557 "options_file.m"
        MR_Word make__options_file__Warn_22;
#line 557 "options_file.m"
        MR_String make__options_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__V_10_10, (MR_Integer) 0)));

#line 558 "options_file.m"
        {
#line 558 "options_file.m"
          libs__globals__lookup_bool_option_3_p_0(make__options_file__Globals_5, (MR_Integer) 24, &make__options_file__Warn_22);
        }
#line 582 "options_file.m"
#line 582 "options_file.m"
        switch (make__options_file__Warn_22) {
#line 582 "options_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 582 "options_file.m"
          case (MR_Integer) 0:
#line 583 "options_file.m"
            {
#line 583 "options_file.m"
            }
#line 582 "options_file.m"
            break;
#line 582 "options_file.m"
          case (MR_Integer) 1:
#line 561 "options_file.m"
            {
#line 561 "options_file.m"
              MR_Word make__options_file__TypeCtorInfo_48_56;
#line 561 "options_file.m"
              MR_String make__options_file__FileName_23;
#line 561 "options_file.m"
              MR_Integer make__options_file__LineNumber_24;
#line 561 "options_file.m"
              MR_Word make__options_file__Context_25;
#line 561 "options_file.m"
              MR_Word make__options_file__VarList_26;
#line 561 "options_file.m"
              MR_String make__options_file__Word_27;
#line 561 "options_file.m"
              MR_String make__options_file__IsOrAre_28;
#line 561 "options_file.m"
              MR_Word make__options_file__Pieces_31;
#line 561 "options_file.m"
              MR_Word make__options_file__Halt_32;
#line 561 "options_file.m"
              MR_Word make__options_file__V_38_38;
#line 561 "options_file.m"
              MR_Word make__options_file__V_40_40;
#line 561 "options_file.m"
              MR_Word make__options_file__V_41_41;
#line 561 "options_file.m"
              MR_Word make__options_file__V_44_44;
#line 561 "options_file.m"
              MR_Word make__options_file__V_45_45;
#line 561 "options_file.m"
              MR_Word make__options_file__V_46_46;
#line 561 "options_file.m"
              MR_Word make__options_file__V_47_47;

#line 562 "options_file.m"
              {
#line 562 "options_file.m"
                mercury__io__input_stream_name_3_p_0(&make__options_file__FileName_23);
              }
#line 563 "options_file.m"
              {
#line 563 "options_file.m"
                mercury__io__get_line_number_3_p_0(&make__options_file__LineNumber_24);
              }
#line 564 "options_file.m"
              {
#line 564 "options_file.m"
                make__options_file__Context_25 = mercury__term__context_init_2_f_0(make__options_file__FileName_23, make__options_file__LineNumber_24);
              }
#line 10694 "make.options_file.c"
              make__options_file__TypeCtorInfo_48_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 567 "options_file.m"
              {
#line 567 "options_file.m"
                make__options_file__V_40_40 = mercury__list__sort_and_remove_dups_1_f_0(make__options_file__TypeCtorInfo_48_56, make__options_file__V_10_10);
              }
#line 566 "options_file.m"
              {
#line 566 "options_file.m"
                make__options_file__V_38_38 = mercury__list__map_2_f_0(make__options_file__TypeCtorInfo_48_56, make__options_file__TypeCtorInfo_48_56, (MR_Word) &make__options_file_scalar_common_1[7], make__options_file__V_40_40);
              }
#line 566 "options_file.m"
              {
#line 566 "options_file.m"
                make__options_file__VarList_26 = parse_tree__error_util__list_to_pieces_1_f_0(make__options_file__V_38_38);
              }
#line 569 "options_file.m"
              if ((make__options_file__Rest_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "options_file.m"
                {
#line 568 "options_file.m"
                  make__options_file__Word_27 = (MR_String) "variable";
#line 568 "options_file.m"
                  make__options_file__IsOrAre_28 = (MR_String) "is";
#line 568 "options_file.m"
                }
#line 569 "options_file.m"
              else
#line 569 "options_file.m"
                {
#line 569 "options_file.m"
                  make__options_file__Word_27 = (MR_String) "variables";
#line 569 "options_file.m"
                  make__options_file__IsOrAre_28 = (MR_String) "are";
#line 569 "options_file.m"
                }
#line 571 "options_file.m"
              {
#line 571 "options_file.m"
                make__options_file__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "options_file.m"
                MR_hl_field(MR_mktag(3), make__options_file__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 571 "options_file.m"
                MR_hl_field(MR_mktag(3), make__options_file__V_45_45, 1) = ((MR_Box) (make__options_file__Word_27));
#line 571 "options_file.m"
              }
#line 571 "options_file.m"
              {
#line 571 "options_file.m"
                make__options_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_44_44, 0) = ((MR_Box) (make__options_file__V_45_45));
#line 571 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_44_44, 1) = ((MR_Box) (make__options_file__VarList_26));
#line 571 "options_file.m"
              }
#line 571 "options_file.m"
              {
#line 571 "options_file.m"
                make__options_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_41_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[35])));
#line 571 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_41_41, 1) = ((MR_Box) (make__options_file__V_44_44));
#line 571 "options_file.m"
              }
#line 572 "options_file.m"
              {
#line 572 "options_file.m"
                make__options_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "options_file.m"
                MR_hl_field(MR_mktag(3), make__options_file__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 572 "options_file.m"
                MR_hl_field(MR_mktag(3), make__options_file__V_47_47, 1) = ((MR_Box) (make__options_file__IsOrAre_28));
#line 572 "options_file.m"
              }
#line 572 "options_file.m"
              {
#line 572 "options_file.m"
                make__options_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_46_46, 0) = ((MR_Box) (make__options_file__V_47_47));
#line 572 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[37])));
#line 572 "options_file.m"
              }
#line 572 "options_file.m"
              {
#line 572 "options_file.m"
                make__options_file__Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, make__options_file__V_41_41, make__options_file__V_46_46);
              }
#line 573 "options_file.m"
              {
#line 573 "options_file.m"
                parse_tree__error_util__write_error_pieces_6_p_0(make__options_file__Globals_5, make__options_file__Context_25, (MR_Integer) 0, make__options_file__Pieces_31);
              }
#line 575 "options_file.m"
              {
#line 575 "options_file.m"
                libs__globals__lookup_bool_option_3_p_0(make__options_file__Globals_5, (MR_Integer) 2, &make__options_file__Halt_32);
              }
#line 579 "options_file.m"
#line 579 "options_file.m"
              switch (make__options_file__Halt_32) {
#line 579 "options_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 579 "options_file.m"
                case (MR_Integer) 0:
#line 580 "options_file.m"
                  {
#line 580 "options_file.m"
                  }
#line 579 "options_file.m"
                  break;
#line 579 "options_file.m"
                case (MR_Integer) 1:
#line 577 "options_file.m"
                  {
#line 578 "options_file.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 578 "options_file.m"
                    {
#line 578 "options_file.m"
                      mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, ((MR_Box) ((MR_Integer) 0)));
#line 578 "options_file.m"
                      return;
                    }
#line 577 "options_file.m"
                  }
#line 579 "options_file.m"
                  break;
#line 579 "options_file.m"
              }
#line 561 "options_file.m"
            }
#line 582 "options_file.m"
            break;
#line 582 "options_file.m"
        }
#line 557 "options_file.m"
      }
#line 549 "options_file.m"
  }
#line 546 "options_file.m"
}

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_2(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 653 "options_file.m"
{
#line 653 "options_file.m"
  {
#line 653 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 653 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 653 "options_file.m"
    {
#line 653 "options_file.m"
      return make__options_file__succeeded = make__options_file__IntroducedFrom__pred__parse_variable__653__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 653 "options_file.m"
    return make__options_file__succeeded;
#line 653 "options_file.m"
  }
#line 653 "options_file.m"
}

#line 653 "options_file.m"
static MR_bool MR_CALL 
make__options_file__expand_variables_2_8_p_0_1(
#line 653 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 653 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1)
#line 653 "options_file.m"
{
#line 653 "options_file.m"
  {
#line 653 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 653 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 653 "options_file.m"
    {
#line 653 "options_file.m"
      return make__options_file__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) make__options_file__wrapper_arg_1));
    }
#line 653 "options_file.m"
    return make__options_file__succeeded;
#line 653 "options_file.m"
  }
#line 653 "options_file.m"
}

#line 496 "options_file.m"
static void MR_CALL 
make__options_file__expand_variables_2_8_p_0(
#line 496 "options_file.m"
  MR_Word make__options_file__Variables_1,
#line 496 "options_file.m"
  MR_Word make__options_file__HeadVar__2_2,
#line 496 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_RevChars_0_3,
#line 496 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_RevChars_4,
#line 496 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_RevUndef_0_5,
#line 496 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_RevUndef_6)
#line 496 "options_file.m"
{
#line 500 "options_file.m"
  while (MR_TRUE)
#line 500 "options_file.m"
    {
#line 500 "options_file.m"
      /* tailcall optimized into a loop */
#line 500 "options_file.m"
      {
#line 500 "options_file.m"
        MR_bool make__options_file__succeeded;

#line 500 "options_file.m"
        if ((make__options_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "options_file.m"
          {
#line 500 "options_file.m"
            *make__options_file__STATE_VARIABLE_RevUndef_6 = make__options_file__STATE_VARIABLE_RevUndef_0_5;
#line 500 "options_file.m"
            *make__options_file__STATE_VARIABLE_RevChars_4 = make__options_file__STATE_VARIABLE_RevChars_0_3;
#line 500 "options_file.m"
          }
#line 500 "options_file.m"
        else
#line 501 "options_file.m"
          {
#line 501 "options_file.m"
            MR_Char make__options_file__Char_20 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 0)));
#line 501 "options_file.m"
            MR_Word make__options_file__Chars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__HeadVar__2_2, (MR_Integer) 1)));

#line 502 "options_file.m"
            make__options_file__succeeded = (make__options_file__Char_20 == (MR_Char) 36);
#line 541 "options_file.m"
            if (make__options_file__succeeded)
#line 506 "options_file.m"
              if ((make__options_file__Chars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "options_file.m"
                {
#line 505 "options_file.m"
                  {
#line 505 "options_file.m"
                    mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated variable reference")))));
#line 505 "options_file.m"
                    return;
                  }
#line 504 "options_file.m"
                }
#line 506 "options_file.m"
              else
#line 507 "options_file.m"
                {
#line 507 "options_file.m"
                  MR_Char make__options_file__Char2_25 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars_21, (MR_Integer) 0)));
#line 507 "options_file.m"
                  MR_Word make__options_file__Chars1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars_21, (MR_Integer) 1)));

#line 508 "options_file.m"
                  make__options_file__succeeded = (make__options_file__Char2_25 == (MR_Char) 36);
#line 512 "options_file.m"
                  if (make__options_file__succeeded)
#line 509 "options_file.m"
                    {
#line 509 "options_file.m"
                      MR_Word make__options_file__STATE_VARIABLE_RevChars_40_40;

#line 509 "options_file.m"
                      {
#line 509 "options_file.m"
                        make__options_file__STATE_VARIABLE_RevChars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "options_file.m"
                        MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Char) 36));
#line 509 "options_file.m"
                        MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_40_40, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_RevChars_0_3));
#line 509 "options_file.m"
                      }
#line 510 "options_file.m"
                      /* direct tailcall eliminated */
#line 510 "options_file.m"
                      {
#line 510 "options_file.m"
                        MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__Chars1_26;
#line 510 "options_file.m"
                        MR_Word make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3 = make__options_file__STATE_VARIABLE_RevChars_40_40;

#line 510 "options_file.m"
                        make__options_file__STATE_VARIABLE_RevChars_0_3 = make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3;
#line 510 "options_file.m"
                        make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
#line 510 "options_file.m"
                      }
#line 510 "options_file.m"
                      continue;
#line 509 "options_file.m"
                    }
#line 512 "options_file.m"
                  else
#line 533 "options_file.m"
                    {
#line 533 "options_file.m"
                      MR_Word make__options_file__TypeCtorInfo_62_62;
#line 533 "options_file.m"
                      MR_Word make__options_file__Chars4_31;
#line 533 "options_file.m"
                      MR_String make__options_file__VarName_32;
#line 533 "options_file.m"
                      MR_Word make__options_file__VarChars_33;
#line 533 "options_file.m"
                      MR_Word make__options_file__STATE_VARIABLE_RevUndef_47_47;
#line 533 "options_file.m"
                      MR_Word make__options_file__STATE_VARIABLE_RevChars_49_49;
#line 533 "options_file.m"
                      MR_Word make__options_file__V_50_50;
#line 530 "options_file.m"
                      MR_Char make__options_file__EndChar_27;

#line 517 "options_file.m"
#line 517 "options_file.m"
                      switch (make__options_file__Char2_25) {
#line 517 "options_file.m"
                        default:
#line 517 "options_file.m"
                          make__options_file__succeeded = MR_FALSE;
#line 517 "options_file.m"
                          break;
#line 517 "options_file.m"
                        case (MR_Char) 40:
#line 516 "options_file.m"
                          {
#line 516 "options_file.m"
                            make__options_file__EndChar_27 = (MR_Char) 41;
#line 516 "options_file.m"
                            make__options_file__succeeded = MR_TRUE;
#line 516 "options_file.m"
                          }
#line 517 "options_file.m"
                          break;
#line 517 "options_file.m"
                        case (MR_Char) 123:
#line 519 "options_file.m"
                          {
#line 519 "options_file.m"
                            make__options_file__EndChar_27 = (MR_Char) 125;
#line 519 "options_file.m"
                            make__options_file__succeeded = MR_TRUE;
#line 519 "options_file.m"
                          }
#line 517 "options_file.m"
                          break;
#line 517 "options_file.m"
                      }
#line 530 "options_file.m"
                      if (make__options_file__succeeded)
#line 522 "options_file.m"
                        {
#line 522 "options_file.m"
                          MR_String make__options_file__VarName0_28;
#line 522 "options_file.m"
                          MR_Word make__options_file__Chars2_29;
#line 522 "options_file.m"
                          MR_Word make__options_file__VarList_67;
#line 526 "options_file.m"
                          MR_Word make__options_file__Chars3_30;
#line 523 "options_file.m"
                          MR_Char make__options_file__V_63_63;

#line 650 "options_file.m"
                          {
#line 650 "options_file.m"
                            make__options_file__parse_variable_2_5_p_0((MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__VarList_67, make__options_file__Chars1_26, &make__options_file__Chars2_29);
                          }
#line 651 "options_file.m"
                          {
#line 651 "options_file.m"
                            mercury__string__from_rev_char_list_2_p_0(make__options_file__VarList_67, &make__options_file__VarName0_28);
                          }
#line 652 "options_file.m"
                          make__options_file__succeeded = (strcmp(make__options_file__VarName0_28, (MR_String) "") == 0);
#line 656 "options_file.m"
                          if (make__options_file__succeeded)
#line 653 "options_file.m"
                            {
#line 653 "options_file.m"
                              MR_Word make__options_file__FirstWord_68;
#line 653 "options_file.m"
                              MR_Word make__options_file__V_74_74;
#line 653 "options_file.m"
                              MR_String make__options_file__V_75_75;
#line 653 "options_file.m"
                              MR_String make__options_file__V_77_77;
#line 653 "options_file.m"
                              MR_String make__options_file__V_78_78;
#line 653 "options_file.m"
                              MR_Word make__options_file__V_69_69;

#line 653 "options_file.m"
                              {
#line 653 "options_file.m"
                                mercury__list__takewhile_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &make__options_file_scalar_common_9[1], make__options_file__Chars2_29, &make__options_file__FirstWord_68, &make__options_file__V_69_69);
                              }
#line 655 "options_file.m"
                              {
#line 655 "options_file.m"
                                make__options_file__V_78_78 = mercury__string__from_char_list_1_f_0(make__options_file__FirstWord_68);
                              }
#line 655 "options_file.m"
                              {
#line 655 "options_file.m"
                                make__options_file__V_77_77 = mercury__string__f_43_43_2_f_0(make__options_file__V_78_78, (MR_String) "\'");
                              }
#line 654 "options_file.m"
                              {
#line 654 "options_file.m"
                                make__options_file__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "expected variable at \140", make__options_file__V_77_77);
                              }
#line 654 "options_file.m"
                              make__options_file__V_74_74 = (MR_Word) make__options_file__V_75_75;
#line 654 "options_file.m"
                              {
#line 654 "options_file.m"
                                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_74_74)));
#line 654 "options_file.m"
                                return;
                              }
#line 653 "options_file.m"
                            }
#line 656 "options_file.m"
                          else
#line 657 "options_file.m"
                            {
#line 657 "options_file.m"
                            }
#line 523 "options_file.m"
                          make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Chars2_29)) == (MR_mktag((MR_Integer) 1)));
#line 523 "options_file.m"
                          if (make__options_file__succeeded)
#line 523 "options_file.m"
                            {
#line 523 "options_file.m"
                              make__options_file__V_63_63 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars2_29, (MR_Integer) 0)));
#line 523 "options_file.m"
                              make__options_file__Chars3_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Chars2_29, (MR_Integer) 1)));
#line 523 "options_file.m"
                              make__options_file__succeeded = (make__options_file__EndChar_27 == make__options_file__V_63_63);
#line 523 "options_file.m"
                            }
#line 526 "options_file.m"
                          if (make__options_file__succeeded)
#line 524 "options_file.m"
                            {
#line 524 "options_file.m"
                              make__options_file__Chars4_31 = make__options_file__Chars3_30;
#line 525 "options_file.m"
                              make__options_file__VarName_32 = make__options_file__VarName0_28;
#line 524 "options_file.m"
                            }
#line 526 "options_file.m"
                          else
#line 527 "options_file.m"
                            {
#line 527 "options_file.m"
                              {
#line 527 "options_file.m"
                                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (((MR_Box) ((MR_String) "unterminated variable reference")))));
#line 527 "options_file.m"
                                return;
                              }
#line 527 "options_file.m"
                            }
#line 522 "options_file.m"
                        }
#line 530 "options_file.m"
                      else
#line 531 "options_file.m"
                        {
#line 531 "options_file.m"
                          make__options_file__Chars4_31 = make__options_file__Chars1_26;
#line 532 "options_file.m"
                          {
#line 532 "options_file.m"
                            make__options_file__VarName_32 = mercury__string__char_to_string_1_f_0(make__options_file__Char2_25);
                          }
#line 531 "options_file.m"
                        }
#line 534 "options_file.m"
                      {
#line 534 "options_file.m"
                        make__options_file__lookup_variable_chars_7_p_0(make__options_file__Variables_1, make__options_file__VarName_32, &make__options_file__VarChars_33, make__options_file__STATE_VARIABLE_RevUndef_0_5, &make__options_file__STATE_VARIABLE_RevUndef_47_47);
                      }
#line 11202 "make.options_file.c"
                      make__options_file__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 536 "options_file.m"
                      {
#line 536 "options_file.m"
                        make__options_file__V_50_50 = mercury__list__reverse_1_f_0(make__options_file__TypeCtorInfo_62_62, make__options_file__VarChars_33);
                      }
#line 536 "options_file.m"
                      {
#line 536 "options_file.m"
                        make__options_file__STATE_VARIABLE_RevChars_49_49 = mercury__list__f_43_43_2_f_0(make__options_file__TypeCtorInfo_62_62, make__options_file__V_50_50, make__options_file__STATE_VARIABLE_RevChars_0_3);
                      }
#line 537 "options_file.m"
                      /* direct tailcall eliminated */
#line 537 "options_file.m"
                      {
#line 537 "options_file.m"
                        MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__Chars4_31;
#line 537 "options_file.m"
                        MR_Word make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3 = make__options_file__STATE_VARIABLE_RevChars_49_49;
#line 537 "options_file.m"
                        MR_Word make__options_file__STATE_VARIABLE_RevUndef_0__tmp_copy_5 = make__options_file__STATE_VARIABLE_RevUndef_47_47;

#line 537 "options_file.m"
                        make__options_file__STATE_VARIABLE_RevUndef_0_5 = make__options_file__STATE_VARIABLE_RevUndef_0__tmp_copy_5;
#line 537 "options_file.m"
                        make__options_file__STATE_VARIABLE_RevChars_0_3 = make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3;
#line 537 "options_file.m"
                        make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
#line 537 "options_file.m"
                      }
#line 537 "options_file.m"
                      continue;
#line 533 "options_file.m"
                    }
#line 507 "options_file.m"
                }
#line 541 "options_file.m"
            else
#line 542 "options_file.m"
              {
#line 542 "options_file.m"
                MR_Word make__options_file__STATE_VARIABLE_RevChars_56_56;

#line 542 "options_file.m"
                {
#line 542 "options_file.m"
                  make__options_file__STATE_VARIABLE_RevChars_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_56_56, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_20));
#line 542 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_RevChars_56_56, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_RevChars_0_3));
#line 542 "options_file.m"
                }
#line 543 "options_file.m"
                /* direct tailcall eliminated */
#line 543 "options_file.m"
                {
#line 543 "options_file.m"
                  MR_Word make__options_file__HeadVar__2__tmp_copy_2 = make__options_file__Chars_21;
#line 543 "options_file.m"
                  MR_Word make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3 = make__options_file__STATE_VARIABLE_RevChars_56_56;

#line 543 "options_file.m"
                  make__options_file__STATE_VARIABLE_RevChars_0_3 = make__options_file__STATE_VARIABLE_RevChars_0__tmp_copy_3;
#line 543 "options_file.m"
                  make__options_file__HeadVar__2_2 = make__options_file__HeadVar__2__tmp_copy_2;
#line 543 "options_file.m"
                }
#line 543 "options_file.m"
                continue;
#line 542 "options_file.m"
              }
#line 501 "options_file.m"
          }
#line 500 "options_file.m"
      }
#line 500 "options_file.m"
      break;
#line 500 "options_file.m"
    }
#line 496 "options_file.m"
}

#line 440 "options_file.m"
static void MR_CALL 
make__options_file__update_variable_8_p_0(
#line 440 "options_file.m"
  MR_Word make__options_file__Globals_9,
#line 440 "options_file.m"
  MR_String make__options_file__VarName_10,
#line 440 "options_file.m"
  MR_Word make__options_file__AddToValue_11,
#line 440 "options_file.m"
  MR_Word make__options_file__NewValue0_12,
#line 440 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_27,
#line 440 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_28)
#line 440 "options_file.m"
{
#line 444 "options_file.m"
  {
#line 444 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 444 "options_file.m"
    MR_Word make__options_file__NewValue1_15;
#line 444 "options_file.m"
    MR_Word make__options_file__Undef_16;
#line 444 "options_file.m"
    MR_Word make__options_file__Words1_17;
#line 444 "options_file.m"
    MR_Word make__options_file__MaybeEnvValue_18;
#line 444 "options_file.m"
    MR_Word make__options_file__RevChars_70;
#line 444 "options_file.m"
    MR_Word make__options_file__RevUndefVars_71;
#line 444 "options_file.m"
    MR_Word make__options_file__V_78_78;

#line 492 "options_file.m"
    {
#line 492 "options_file.m"
      make__options_file__expand_variables_2_8_p_0(make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__NewValue0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevChars_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevUndefVars_71);
    }
#line 493 "options_file.m"
    {
#line 493 "options_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevChars_70, &make__options_file__NewValue1_15);
    }
#line 494 "options_file.m"
    {
#line 494 "options_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__RevUndefVars_71, &make__options_file__Undef_16);
    }
#line 446 "options_file.m"
    {
#line 446 "options_file.m"
      make__options_file__report_undefined_variables_4_p_0(make__options_file__Globals_9, make__options_file__Undef_16);
    }
#line 774 "options_file.m"
    {
#line 774 "options_file.m"
      make__options_file__V_78_78 = make__options_file__split_into_words_2_2_f_0(make__options_file__NewValue1_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 774 "options_file.m"
    {
#line 774 "options_file.m"
      make__options_file__Words1_17 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_78_78);
    }
#line 448 "options_file.m"
    {
#line 448 "options_file.m"
      mercury__io__get_environment_var_4_p_0(make__options_file__VarName_10, &make__options_file__MaybeEnvValue_18);
    }
#line 456 "options_file.m"
    if ((make__options_file__MaybeEnvValue_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "options_file.m"
      {
#line 481 "options_file.m"
        MR_Word make__options_file__OldValue_23;
#line 481 "options_file.m"
        MR_Word make__options_file__OldWords_24;
#line 481 "options_file.m"
        MR_Word make__options_file__Source_25;
#line 459 "options_file.m"
        MR_Word make__options_file__V_34_34;
#line 459 "options_file.m"
        MR_Box make__options_file__conv0_V_34_34;

#line 459 "options_file.m"
        {
#line 459 "options_file.m"
          make__options_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, make__options_file__STATE_VARIABLE_Variables_0_27, ((MR_Box) (make__options_file__VarName_10)), &make__options_file__conv0_V_34_34);
        }
#line 459 "options_file.m"
        if (make__options_file__succeeded)
#line 459 "options_file.m"
          {
#line 459 "options_file.m"
            make__options_file__V_34_34 = ((MR_Word) make__options_file__conv0_V_34_34);
#line 459 "options_file.m"
            make__options_file__succeeded = MR_TRUE;
#line 459 "options_file.m"
          }
#line 459 "options_file.m"
        if (make__options_file__succeeded)
#line 459 "options_file.m"
          {
#line 460 "options_file.m"
            make__options_file__OldValue_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_34_34, (MR_Integer) 0)));
#line 460 "options_file.m"
            make__options_file__OldWords_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_34_34, (MR_Integer) 1)));
#line 460 "options_file.m"
            make__options_file__Source_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_34_34, (MR_Integer) 2)));
#line 460 "options_file.m"
            make__options_file__succeeded = MR_TRUE;
#line 459 "options_file.m"
          }
#line 481 "options_file.m"
        if (make__options_file__succeeded)
#line 464 "options_file.m"
#line 464 "options_file.m"
          switch (make__options_file__Source_25) {
#line 464 "options_file.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 464 "options_file.m"
            case (MR_Integer) 1:
#line 465 "options_file.m"
              *make__options_file__STATE_VARIABLE_Variables_28 = make__options_file__STATE_VARIABLE_Variables_0_27;
#line 464 "options_file.m"
              break;
#line 464 "options_file.m"
            case (MR_Integer) 2:
#line 463 "options_file.m"
              *make__options_file__STATE_VARIABLE_Variables_28 = make__options_file__STATE_VARIABLE_Variables_0_27;
#line 464 "options_file.m"
              break;
#line 464 "options_file.m"
            case (MR_Integer) 0:
#line 467 "options_file.m"
              {
#line 467 "options_file.m"
                MR_Word make__options_file__NewValue_26;
#line 467 "options_file.m"
                MR_Word make__options_file__Words_44;
#line 467 "options_file.m"
                MR_Word make__options_file__OptVarValue_45;

#line 472 "options_file.m"
#line 472 "options_file.m"
                switch (make__options_file__AddToValue_11) {
#line 472 "options_file.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 472 "options_file.m"
                  case (MR_Integer) 0:
#line 473 "options_file.m"
                    {
#line 474 "options_file.m"
                      make__options_file__NewValue_26 = make__options_file__NewValue1_15;
#line 475 "options_file.m"
                      make__options_file__Words_44 = make__options_file__Words1_17;
#line 473 "options_file.m"
                    }
#line 472 "options_file.m"
                    break;
#line 472 "options_file.m"
                  case (MR_Integer) 1:
#line 469 "options_file.m"
                    {
#line 469 "options_file.m"
                      MR_Word make__options_file__V_35_35;

#line 470 "options_file.m"
                      {
#line 470 "options_file.m"
                        make__options_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "options_file.m"
                        MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
#line 470 "options_file.m"
                        MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 1) = ((MR_Box) (make__options_file__NewValue1_15));
#line 470 "options_file.m"
                      }
#line 470 "options_file.m"
                      {
#line 470 "options_file.m"
                        make__options_file__NewValue_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__OldValue_23, make__options_file__V_35_35);
                      }
#line 471 "options_file.m"
                      {
#line 471 "options_file.m"
                        make__options_file__Words_44 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__OldWords_24, make__options_file__Words1_17);
                      }
#line 469 "options_file.m"
                    }
#line 472 "options_file.m"
                    break;
#line 472 "options_file.m"
                }
#line 477 "options_file.m"
                {
#line 477 "options_file.m"
                  make__options_file__OptVarValue_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 477 "options_file.m"
                  MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_45, 0) = ((MR_Box) (make__options_file__NewValue_26));
#line 477 "options_file.m"
                  MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_45, 1) = ((MR_Box) (make__options_file__Words_44));
#line 477 "options_file.m"
                  MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 477 "options_file.m"
                }
#line 479 "options_file.m"
                {
#line 479 "options_file.m"
                  mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (make__options_file__VarName_10)), ((MR_Box) (make__options_file__OptVarValue_45)), make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__STATE_VARIABLE_Variables_28);
#line 479 "options_file.m"
                  return;
                }
#line 467 "options_file.m"
              }
#line 464 "options_file.m"
              break;
#line 464 "options_file.m"
          }
#line 481 "options_file.m"
        else
#line 483 "options_file.m"
          {
#line 483 "options_file.m"
            MR_Word make__options_file__OptVarValue_48;

#line 482 "options_file.m"
            {
#line 482 "options_file.m"
              make__options_file__OptVarValue_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 482 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_48, 0) = ((MR_Box) (make__options_file__NewValue1_15));
#line 482 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_48, 1) = ((MR_Box) (make__options_file__Words1_17));
#line 482 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_48, 2) = ((MR_Box) ((MR_Integer) 0));
#line 482 "options_file.m"
            }
#line 484 "options_file.m"
            {
#line 484 "options_file.m"
              mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (make__options_file__VarName_10)), ((MR_Box) (make__options_file__OptVarValue_48)), make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__STATE_VARIABLE_Variables_28);
#line 484 "options_file.m"
              return;
            }
#line 483 "options_file.m"
          }
#line 481 "options_file.m"
      }
#line 456 "options_file.m"
    else
#line 450 "options_file.m"
      {
#line 450 "options_file.m"
        MR_String make__options_file__EnvValue_19 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeEnvValue_18, (MR_Integer) 0)));
#line 450 "options_file.m"
        MR_Word make__options_file__Value_20;
#line 450 "options_file.m"
        MR_Word make__options_file__Words_21;
#line 450 "options_file.m"
        MR_Word make__options_file__OptVarValue_22;
#line 450 "options_file.m"
        MR_Word make__options_file__V_41_41;
#line 450 "options_file.m"
        MR_Word make__options_file__V_82_82;

#line 451 "options_file.m"
        {
#line 451 "options_file.m"
          make__options_file__Value_20 = mercury__string__to_char_list_1_f_0(make__options_file__EnvValue_19);
        }
#line 774 "options_file.m"
        {
#line 774 "options_file.m"
          make__options_file__V_82_82 = make__options_file__split_into_words_2_2_f_0(make__options_file__Value_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 774 "options_file.m"
        {
#line 774 "options_file.m"
          make__options_file__Words_21 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_82_82);
        }
#line 453 "options_file.m"
        {
#line 453 "options_file.m"
          make__options_file__V_41_41 = mercury__string__to_char_list_1_f_0(make__options_file__EnvValue_19);
        }
#line 453 "options_file.m"
        {
#line 453 "options_file.m"
          make__options_file__OptVarValue_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 453 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_22, 0) = ((MR_Box) (make__options_file__V_41_41));
#line 453 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_22, 1) = ((MR_Box) (make__options_file__Words_21));
#line 453 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__OptVarValue_22, 2) = ((MR_Box) ((MR_Integer) 2));
#line 453 "options_file.m"
        }
#line 455 "options_file.m"
        {
#line 455 "options_file.m"
          mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0, ((MR_Box) (make__options_file__VarName_10)), ((MR_Box) (make__options_file__OptVarValue_22)), make__options_file__STATE_VARIABLE_Variables_0_27, make__options_file__STATE_VARIABLE_Variables_28);
#line 455 "options_file.m"
          return;
        }
#line 450 "options_file.m"
      }
#line 444 "options_file.m"
  }
#line 440 "options_file.m"
}

#line 405 "options_file.m"
static void MR_CALL 
make__options_file__read_options_line_2_5_p_0(
#line 405 "options_file.m"
  MR_Word * make__options_file__FoundEOF_6,
#line 405 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Chars_0_13,
#line 405 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Chars_14)
#line 405 "options_file.m"
{
#line 408 "options_file.m"
  while (MR_TRUE)
#line 408 "options_file.m"
    {
#line 408 "options_file.m"
      /* tailcall optimized into a loop */
#line 408 "options_file.m"
      {
#line 408 "options_file.m"
        MR_bool make__options_file__succeeded;
#line 408 "options_file.m"
        MR_Word make__options_file__Result_45;

#line 737 "options_file.m"
        {
#line 737 "options_file.m"
          mercury__io__read_char_3_p_0(&make__options_file__Result_45);
        }
#line 11628 "make.options_file.c"
#line 11629 "make.options_file.c"
        switch (MR_tag((MR_Word) make__options_file__Result_45)) {
#line 11631 "make.options_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 11633 "make.options_file.c"
          case (MR_Integer) 0:
#line 11635 "make.options_file.c"
            {
#line 437 "options_file.m"
              *make__options_file__FoundEOF_6 = (MR_Integer) 1;
#line 436 "options_file.m"
              *make__options_file__STATE_VARIABLE_Chars_14 = make__options_file__STATE_VARIABLE_Chars_0_13;
#line 11641 "make.options_file.c"
            }
#line 11643 "make.options_file.c"
            break;
#line 11645 "make.options_file.c"
          case (MR_Integer) 1:
#line 11647 "make.options_file.c"
            {
#line 11649 "make.options_file.c"
              MR_Char make__options_file__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Result_45, (MR_Integer) 0)));

#line 412 "options_file.m"
              make__options_file__succeeded = (make__options_file__Char_10 == (MR_Char) 35);
#line 414 "options_file.m"
              if (make__options_file__succeeded)
#line 413 "options_file.m"
                {
#line 413 "options_file.m"
                  {
#line 413 "options_file.m"
                    make__options_file__skip_comment_line_3_p_0(make__options_file__FoundEOF_6);
                  }
#line 413 "options_file.m"
                  *make__options_file__STATE_VARIABLE_Chars_14 = make__options_file__STATE_VARIABLE_Chars_0_13;
#line 413 "options_file.m"
                }
#line 414 "options_file.m"
              else
#line 429 "options_file.m"
                {
#line 414 "options_file.m"
                  make__options_file__succeeded = (make__options_file__Char_10 == (MR_Char) 92);
#line 429 "options_file.m"
                  if (make__options_file__succeeded)
#line 415 "options_file.m"
                    {
#line 415 "options_file.m"
                      MR_Word make__options_file__Result_59;

#line 737 "options_file.m"
                      {
#line 737 "options_file.m"
                        mercury__io__read_char_3_p_0(&make__options_file__Result_59);
                      }
#line 11685 "make.options_file.c"
#line 11686 "make.options_file.c"
                      switch (MR_tag((MR_Word) make__options_file__Result_59)) {
#line 11688 "make.options_file.c"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 11690 "make.options_file.c"
                        case (MR_Integer) 0:
#line 11692 "make.options_file.c"
                          {
#line 426 "options_file.m"
                            *make__options_file__FoundEOF_6 = (MR_Integer) 1;
#line 427 "options_file.m"
                            {
#line 427 "options_file.m"
                              MR_Word base;
#line 427 "options_file.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "options_file.m"
                              *make__options_file__STATE_VARIABLE_Chars_14 = base;
#line 427 "options_file.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_10));
#line 427 "options_file.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
#line 427 "options_file.m"
                            }
#line 11710 "make.options_file.c"
                          }
#line 11712 "make.options_file.c"
                          break;
#line 11714 "make.options_file.c"
                        case (MR_Integer) 1:
#line 11716 "make.options_file.c"
                          {
#line 11718 "make.options_file.c"
                            MR_Char make__options_file__Char2_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Result_59, (MR_Integer) 0)));
#line 11720 "make.options_file.c"
                            MR_Word make__options_file__STATE_VARIABLE_Chars_23_23;

#line 418 "options_file.m"
                            make__options_file__succeeded = (make__options_file__Char2_12 == (MR_Char) 10);
#line 420 "options_file.m"
                            if (make__options_file__succeeded)
#line 419 "options_file.m"
                              {
#line 419 "options_file.m"
                                {
#line 419 "options_file.m"
                                  make__options_file__STATE_VARIABLE_Chars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "options_file.m"
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Char) 32));
#line 419 "options_file.m"
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
#line 419 "options_file.m"
                                }
#line 419 "options_file.m"
                              }
#line 420 "options_file.m"
                            else
#line 421 "options_file.m"
                              {
#line 421 "options_file.m"
                                MR_Word make__options_file__V_26_26;

#line 421 "options_file.m"
                                {
#line 421 "options_file.m"
                                  make__options_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "options_file.m"
                                  MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_10));
#line 421 "options_file.m"
                                  MR_hl_field(MR_mktag(1), make__options_file__V_26_26, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
#line 421 "options_file.m"
                                }
#line 421 "options_file.m"
                                {
#line 421 "options_file.m"
                                  make__options_file__STATE_VARIABLE_Chars_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "options_file.m"
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 0) = ((MR_Box) (MR_Word) (make__options_file__Char2_12));
#line 421 "options_file.m"
                                  MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_23_23, 1) = ((MR_Box) (make__options_file__V_26_26));
#line 421 "options_file.m"
                                }
#line 421 "options_file.m"
                              }
#line 423 "options_file.m"
                            /* direct tailcall eliminated */
#line 423 "options_file.m"
                            {
#line 423 "options_file.m"
                              MR_Word make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13 = make__options_file__STATE_VARIABLE_Chars_23_23;

#line 423 "options_file.m"
                              make__options_file__STATE_VARIABLE_Chars_0_13 = make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13;
#line 423 "options_file.m"
                            }
#line 423 "options_file.m"
                            continue;
#line 11783 "make.options_file.c"
                          }
#line 11785 "make.options_file.c"
                          break;
#line 11787 "make.options_file.c"
                        case (MR_Integer) 2:
#line 11789 "make.options_file.c"
                          {
#line 11791 "make.options_file.c"
                            MR_Word make__options_file__Error_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result_59, (MR_Integer) 0)));
#line 11793 "make.options_file.c"
                            MR_Word make__options_file__V_63_63;
#line 11795 "make.options_file.c"
                            MR_String make__options_file__V_64_64;

#line 746 "options_file.m"
                            {
#line 746 "options_file.m"
                              make__options_file__V_64_64 = mercury__io__error_message_1_f_0(make__options_file__Error_61);
                            }
#line 746 "options_file.m"
                            make__options_file__V_63_63 = (MR_Word) make__options_file__V_64_64;
#line 746 "options_file.m"
                            {
#line 746 "options_file.m"
                              mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_63_63)));
#line 746 "options_file.m"
                              return;
                            }
#line 11812 "make.options_file.c"
                          }
#line 11814 "make.options_file.c"
                          break;
#line 11816 "make.options_file.c"
                      }
#line 415 "options_file.m"
                    }
#line 429 "options_file.m"
                  else
#line 431 "options_file.m"
                    {
#line 429 "options_file.m"
                      make__options_file__succeeded = (make__options_file__Char_10 == (MR_Char) 10);
#line 431 "options_file.m"
                      if (make__options_file__succeeded)
#line 430 "options_file.m"
                        {
#line 430 "options_file.m"
                          *make__options_file__FoundEOF_6 = (MR_Integer) 0;
#line 430 "options_file.m"
                          *make__options_file__STATE_VARIABLE_Chars_14 = make__options_file__STATE_VARIABLE_Chars_0_13;
#line 430 "options_file.m"
                        }
#line 431 "options_file.m"
                      else
#line 432 "options_file.m"
                        {
#line 432 "options_file.m"
                          MR_Word make__options_file__STATE_VARIABLE_Chars_29_29;

#line 432 "options_file.m"
                          {
#line 432 "options_file.m"
                            make__options_file__STATE_VARIABLE_Chars_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "options_file.m"
                            MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_29_29, 0) = ((MR_Box) (MR_Word) (make__options_file__Char_10));
#line 432 "options_file.m"
                            MR_hl_field(MR_mktag(1), make__options_file__STATE_VARIABLE_Chars_29_29, 1) = ((MR_Box) (make__options_file__STATE_VARIABLE_Chars_0_13));
#line 432 "options_file.m"
                          }
#line 433 "options_file.m"
                          /* direct tailcall eliminated */
#line 433 "options_file.m"
                          {
#line 433 "options_file.m"
                            MR_Word make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13 = make__options_file__STATE_VARIABLE_Chars_29_29;

#line 433 "options_file.m"
                            make__options_file__STATE_VARIABLE_Chars_0_13 = make__options_file__STATE_VARIABLE_Chars_0__tmp_copy_13;
#line 433 "options_file.m"
                          }
#line 433 "options_file.m"
                          continue;
#line 432 "options_file.m"
                        }
#line 431 "options_file.m"
                    }
#line 429 "options_file.m"
                }
#line 11872 "make.options_file.c"
            }
#line 11874 "make.options_file.c"
            break;
#line 11876 "make.options_file.c"
          case (MR_Integer) 2:
#line 11878 "make.options_file.c"
            {
#line 11880 "make.options_file.c"
              MR_Word make__options_file__Error_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__Result_45, (MR_Integer) 0)));
#line 11882 "make.options_file.c"
              MR_Word make__options_file__V_49_49;
#line 11884 "make.options_file.c"
              MR_String make__options_file__V_50_50;

#line 746 "options_file.m"
              {
#line 746 "options_file.m"
                make__options_file__V_50_50 = mercury__io__error_message_1_f_0(make__options_file__Error_47);
              }
#line 746 "options_file.m"
              make__options_file__V_49_49 = (MR_Word) make__options_file__V_50_50;
#line 746 "options_file.m"
              {
#line 746 "options_file.m"
                mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_49_49)));
#line 746 "options_file.m"
                return;
              }
#line 11901 "make.options_file.c"
            }
#line 11903 "make.options_file.c"
            break;
#line 11905 "make.options_file.c"
        }
#line 408 "options_file.m"
      }
#line 408 "options_file.m"
      break;
#line 408 "options_file.m"
    }
#line 405 "options_file.m"
}

#line 385 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0_1(
#line 385 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 385 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 385 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 385 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3,
#line 385 "options_file.m"
  MR_Box make__options_file__wrapper_arg_4,
#line 385 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_5)
#line 385 "options_file.m"
{
#line 385 "options_file.m"
  {
#line 385 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 385 "options_file.m"
    MR_Word make__options_file__conv0_STATE_VARIABLE_Variables_34;

#line 385 "options_file.m"
    {
#line 385 "options_file.m"
      make__options_file__read_options_file_params_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 6))), ((MR_String) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2), &make__options_file__conv0_STATE_VARIABLE_Variables_34);
    }
#line 385 "options_file.m"
    *make__options_file__wrapper_arg_3 = ((MR_Box) (make__options_file__conv0_STATE_VARIABLE_Variables_34));
#line 385 "options_file.m"
  }
#line 385 "options_file.m"
}

#line 363 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_3_6_p_0(
#line 363 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 363 "options_file.m"
  MR_String make__options_file__Dir_8,
#line 363 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_24,
#line 363 "options_file.m"
  MR_Word * make__options_file__HeadVar__4_4)
#line 363 "options_file.m"
{
#line 366 "options_file.m"
  {
#line 366 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 366 "options_file.m"
    MR_Word make__options_file__FoundEOF_10;
#line 366 "options_file.m"
    MR_Word make__options_file__Line0_12;
#line 366 "options_file.m"
    MR_Word make__options_file__STATE_VARIABLE_Variables_25;
#line 366 "options_file.m"
    MR_Word make__options_file__RevChars_49;
#line 366 "options_file.m"
    MR_Word make__options_file__SpaceResult_51;

#line 394 "options_file.m"
    {
#line 394 "options_file.m"
      mercury__io__ignore_whitespace_3_p_0(&make__options_file__SpaceResult_51);
    }
#line 397 "options_file.m"
#line 397 "options_file.m"
    switch (MR_tag((MR_Word) make__options_file__SpaceResult_51)) {
#line 397 "options_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 397 "options_file.m"
      case (MR_Integer) 0:
#line 397 "options_file.m"
#line 397 "options_file.m"
        switch (MR_unmkbody(make__options_file__SpaceResult_51)) {
#line 397 "options_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 397 "options_file.m"
          case (MR_Integer) 0:
#line 396 "options_file.m"
            {
#line 396 "options_file.m"
            }
#line 397 "options_file.m"
            break;
#line 397 "options_file.m"
          case (MR_Integer) 1:
#line 398 "options_file.m"
            {
#line 398 "options_file.m"
            }
#line 397 "options_file.m"
            break;
#line 397 "options_file.m"
        }
#line 397 "options_file.m"
        break;
#line 397 "options_file.m"
      case (MR_Integer) 1:
#line 400 "options_file.m"
        {
#line 400 "options_file.m"
          MR_Word make__options_file__Error_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__SpaceResult_51, (MR_Integer) 0)));
#line 400 "options_file.m"
          MR_Word make__options_file__V_54_54;
#line 400 "options_file.m"
          MR_String make__options_file__V_55_55;

#line 401 "options_file.m"
          {
#line 401 "options_file.m"
            make__options_file__V_55_55 = mercury__io__error_message_1_f_0(make__options_file__Error_52);
          }
#line 401 "options_file.m"
          make__options_file__V_54_54 = (MR_Word) make__options_file__V_55_55;
#line 401 "options_file.m"
          {
#line 401 "options_file.m"
            mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, ((MR_Box) (make__options_file__V_54_54)));
#line 401 "options_file.m"
            return;
          }
#line 400 "options_file.m"
        }
#line 397 "options_file.m"
        break;
#line 397 "options_file.m"
    }
#line 403 "options_file.m"
    {
#line 403 "options_file.m"
      make__options_file__read_options_line_2_5_p_0(&make__options_file__FoundEOF_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevChars_49);
    }
#line 393 "options_file.m"
    {
#line 393 "options_file.m"
      make__options_file__Line0_12 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevChars_49);
    }
#line 370 "options_file.m"
    if ((make__options_file__Line0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "options_file.m"
      make__options_file__STATE_VARIABLE_Variables_25 = make__options_file__STATE_VARIABLE_Variables_0_24;
#line 370 "options_file.m"
    else
#line 371 "options_file.m"
      {
#line 371 "options_file.m"
        MR_Word make__options_file__ParsedLine_15;

#line 372 "options_file.m"
        {
#line 372 "options_file.m"
          make__options_file__parse_options_line_2_p_0(make__options_file__Line0_12, &make__options_file__ParsedLine_15);
        }
#line 377 "options_file.m"
        if (((MR_tag((MR_Word) make__options_file__ParsedLine_15)) == (MR_mktag((MR_Integer) 0))))
#line 374 "options_file.m"
          {
#line 374 "options_file.m"
            MR_String make__options_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__ParsedLine_15, (MR_Integer) 0)));
#line 374 "options_file.m"
            MR_Word make__options_file__AddToValue_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__ParsedLine_15, (MR_Integer) 1)));
#line 374 "options_file.m"
            MR_Word make__options_file__Value_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__ParsedLine_15, (MR_Integer) 2)));

#line 375 "options_file.m"
            {
#line 375 "options_file.m"
              make__options_file__update_variable_8_p_0(make__options_file__Globals_7, make__options_file__VarName_16, make__options_file__AddToValue_17, make__options_file__Value_18, make__options_file__STATE_VARIABLE_Variables_0_24, &make__options_file__STATE_VARIABLE_Variables_25);
            }
#line 374 "options_file.m"
          }
#line 377 "options_file.m"
        else
#line 379 "options_file.m"
          {
#line 379 "options_file.m"
            MR_Word make__options_file__ErrorIfNotExist_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__ParsedLine_15, (MR_Integer) 0)));
#line 379 "options_file.m"
            MR_Word make__options_file__IncludedFilesChars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__ParsedLine_15, (MR_Integer) 1)));
#line 379 "options_file.m"
            MR_Word make__options_file__IncludedFilesChars_21;
#line 379 "options_file.m"
            MR_Word make__options_file__UndefVars_22;
#line 379 "options_file.m"
            MR_Word make__options_file__IncludedFileNames_23;
#line 379 "options_file.m"
            MR_Word make__options_file__V_31_31;
#line 379 "options_file.m"
            MR_Word make__options_file__V_35_35;
#line 379 "options_file.m"
            MR_Word make__options_file__RevChars_67;
#line 379 "options_file.m"
            MR_Word make__options_file__RevUndefVars_68;
#line 379 "options_file.m"
            MR_Word make__options_file__V_75_75;
#line 384 "options_file.m"
            MR_Box make__options_file__conv2_STATE_VARIABLE_Variables_25;
#line 384 "options_file.m"
            MR_Box make__options_file__conv1_STATE_VARIABLE_IO_27;

#line 492 "options_file.m"
            {
#line 492 "options_file.m"
              make__options_file__expand_variables_2_8_p_0(make__options_file__STATE_VARIABLE_Variables_0_24, make__options_file__IncludedFilesChars0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevChars_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &make__options_file__RevUndefVars_68);
            }
#line 493 "options_file.m"
            {
#line 493 "options_file.m"
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, make__options_file__RevChars_67, &make__options_file__IncludedFilesChars_21);
            }
#line 494 "options_file.m"
            {
#line 494 "options_file.m"
              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__RevUndefVars_68, &make__options_file__UndefVars_22);
            }
#line 382 "options_file.m"
            {
#line 382 "options_file.m"
              make__options_file__report_undefined_variables_4_p_0(make__options_file__Globals_7, make__options_file__UndefVars_22);
            }
#line 774 "options_file.m"
            {
#line 774 "options_file.m"
              make__options_file__V_75_75 = make__options_file__split_into_words_2_2_f_0(make__options_file__IncludedFilesChars_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 774 "options_file.m"
            {
#line 774 "options_file.m"
              make__options_file__IncludedFileNames_23 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__options_file__V_75_75);
            }
#line 386 "options_file.m"
            {
#line 386 "options_file.m"
              make__options_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "options_file.m"
              MR_hl_field(MR_mktag(1), make__options_file__V_35_35, 0) = ((MR_Box) (make__options_file__Dir_8));
#line 386 "options_file.m"
            }
#line 385 "options_file.m"
            {
#line 385 "options_file.m"
              make__options_file__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 385 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 0) = ((MR_Box) (&make__options_file_scalar_common_8[0]));
#line 385 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 1) = ((MR_Box) (make__options_file__read_options_lines_3_6_p_0_1));
#line 385 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 385 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 3) = ((MR_Box) (make__options_file__Globals_7));
#line 385 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 4) = ((MR_Box) (make__options_file__ErrorIfNotExist_19));
#line 385 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 5) = ((MR_Box) ((MR_Integer) 0));
#line 385 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_31_31, 6) = ((MR_Box) (make__options_file__V_35_35));
#line 385 "options_file.m"
            }
#line 384 "options_file.m"
            {
#line 384 "options_file.m"
              mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__options_file__V_31_31, make__options_file__IncludedFileNames_23, ((MR_Box) (make__options_file__STATE_VARIABLE_Variables_0_24)), &make__options_file__conv2_STATE_VARIABLE_Variables_25, ((MR_Box) ((MR_Integer) 0)), &make__options_file__conv1_STATE_VARIABLE_IO_27);
            }
#line 384 "options_file.m"
            make__options_file__STATE_VARIABLE_Variables_25 = ((MR_Word) make__options_file__conv2_STATE_VARIABLE_Variables_25);
#line 379 "options_file.m"
          }
#line 371 "options_file.m"
      }
#line 366 "options_file.m"
    {
#line 366 "options_file.m"
      MR_Word base;
#line 366 "options_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "options_file.m"
      *make__options_file__HeadVar__4_4 = base;
#line 366 "options_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__options_file__STATE_VARIABLE_Variables_25));
#line 366 "options_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__options_file__FoundEOF_10));
#line 366 "options_file.m"
    }
#line 366 "options_file.m"
  }
#line 363 "options_file.m"
}

#line 361 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0_1(
#line 361 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 361 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1,
#line 361 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 361 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3)
#line 361 "options_file.m"
{
#line 361 "options_file.m"
  {
#line 361 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 361 "options_file.m"
    MR_Word make__options_file__conv0_HeadVar__4_4;

#line 361 "options_file.m"
    {
#line 361 "options_file.m"
      make__options_file__read_options_lines_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), &make__options_file__conv0_HeadVar__4_4);
    }
#line 361 "options_file.m"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__4_4));
#line 361 "options_file.m"
  }
#line 361 "options_file.m"
}

#line 356 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_2_6_p_0(
#line 356 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 356 "options_file.m"
  MR_String make__options_file__Dir_8,
#line 356 "options_file.m"
  MR_Word make__options_file__Variables0_9,
#line 356 "options_file.m"
  MR_Word * make__options_file__Result_10)
#line 356 "options_file.m"
{
#line 360 "options_file.m"
  {
#line 360 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 360 "options_file.m"
    MR_Word make__options_file__V_14_14;

#line 361 "options_file.m"
    {
#line 361 "options_file.m"
      make__options_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 361 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 0) = ((MR_Box) (&make__options_file_scalar_common_3[1]));
#line 361 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 1) = ((MR_Box) (make__options_file__read_options_lines_2_6_p_0_1));
#line 361 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 361 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 3) = ((MR_Box) (make__options_file__Globals_7));
#line 361 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 4) = ((MR_Box) (make__options_file__Dir_8));
#line 361 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_14_14, 5) = ((MR_Box) (make__options_file__Variables0_9));
#line 361 "options_file.m"
    }
#line 361 "options_file.m"
    {
#line 361 "options_file.m"
      mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[1], make__options_file__V_14_14, make__options_file__Result_10);
#line 361 "options_file.m"
      return;
    }
#line 360 "options_file.m"
  }
#line 356 "options_file.m"
}

#line 321 "options_file.m"
static void MR_CALL 
make__options_file__read_options_lines_6_p_0(
#line 321 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 321 "options_file.m"
  MR_String make__options_file__Dir_8,
#line 321 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_18,
#line 321 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_19)
#line 321 "options_file.m"
{
#line 324 "options_file.m"
  while (MR_TRUE)
#line 324 "options_file.m"
    {
#line 324 "options_file.m"
      /* tailcall optimized into a loop */
#line 324 "options_file.m"
      {
#line 324 "options_file.m"
        MR_bool make__options_file__succeeded;
#line 324 "options_file.m"
        MR_Integer make__options_file__LineNumber_11;
#line 324 "options_file.m"
        MR_Word make__options_file__LineResult_12;

#line 325 "options_file.m"
        {
#line 325 "options_file.m"
          mercury__io__get_line_number_3_p_0(&make__options_file__LineNumber_11);
        }
#line 327 "options_file.m"
        {
#line 327 "options_file.m"
          make__options_file__read_options_lines_2_6_p_0(make__options_file__Globals_7, make__options_file__Dir_8, make__options_file__STATE_VARIABLE_Variables_0_18, &make__options_file__LineResult_12);
        }
#line 337 "options_file.m"
#line 337 "options_file.m"
        switch (MR_tag((MR_Word) make__options_file__LineResult_12)) {
#line 337 "options_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 337 "options_file.m"
          case (MR_Integer) 0:
#line 352 "options_file.m"
            {
#line 353 "options_file.m"
              {
#line 353 "options_file.m"
                mercury__require__unexpected_3_p_0((MR_String) "make.options_file", (MR_String) "predicate \140make.options_file.read_options_lines\'/6", (MR_String) "cannot read line");
#line 353 "options_file.m"
                return;
              }
#line 352 "options_file.m"
            }
#line 337 "options_file.m"
            break;
#line 337 "options_file.m"
          case (MR_Integer) 1:
#line 330 "options_file.m"
            {
#line 330 "options_file.m"
              MR_Word make__options_file__FoundEOF_13;
#line 330 "options_file.m"
              MR_Word make__options_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__LineResult_12, (MR_Integer) 0)));
#line 330 "options_file.m"
              MR_Word make__options_file__STATE_VARIABLE_Variables_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_35_35, (MR_Integer) 0)));

#line 330 "options_file.m"
              make__options_file__FoundEOF_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__V_35_35, (MR_Integer) 1)));
#line 333 "options_file.m"
#line 333 "options_file.m"
              switch (make__options_file__FoundEOF_13) {
#line 333 "options_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 333 "options_file.m"
                case (MR_Integer) 0:
#line 335 "options_file.m"
                  {
#line 335 "options_file.m"
                    /* direct tailcall eliminated */
#line 335 "options_file.m"
                    {
#line 335 "options_file.m"
                      MR_Word make__options_file__STATE_VARIABLE_Variables_0__tmp_copy_18 = make__options_file__STATE_VARIABLE_Variables_36_36;

#line 335 "options_file.m"
                      make__options_file__STATE_VARIABLE_Variables_0_18 = make__options_file__STATE_VARIABLE_Variables_0__tmp_copy_18;
#line 335 "options_file.m"
                    }
#line 335 "options_file.m"
                    continue;
#line 335 "options_file.m"
                  }
#line 333 "options_file.m"
                  break;
#line 333 "options_file.m"
                case (MR_Integer) 1:
#line 332 "options_file.m"
                  *make__options_file__STATE_VARIABLE_Variables_19 = make__options_file__STATE_VARIABLE_Variables_36_36;
#line 333 "options_file.m"
                  break;
#line 333 "options_file.m"
              }
#line 330 "options_file.m"
            }
#line 337 "options_file.m"
            break;
#line 337 "options_file.m"
          case (MR_Integer) 2:
#line 338 "options_file.m"
            {
#line 338 "options_file.m"
              MR_Word make__options_file__Exception_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__LineResult_12, (MR_Integer) 0)));
#line 348 "options_file.m"
              MR_String make__options_file__Error_15;
#line 339 "options_file.m"
              MR_Word make__options_file__V_27_27;
#line 339 "options_file.m"
              MR_Box make__options_file__conv0_V_27_27;

#line 339 "options_file.m"
              {
#line 339 "options_file.m"
                make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_options_file_error_0, &make__options_file__conv0_V_27_27, make__options_file__Exception_14);
              }
#line 339 "options_file.m"
              if (make__options_file__succeeded)
#line 339 "options_file.m"
                {
#line 339 "options_file.m"
                  make__options_file__V_27_27 = ((MR_Word) make__options_file__conv0_V_27_27);
#line 339 "options_file.m"
                  make__options_file__succeeded = MR_TRUE;
#line 339 "options_file.m"
                }
#line 339 "options_file.m"
              if (make__options_file__succeeded)
#line 339 "options_file.m"
                {
#line 339 "options_file.m"
                  make__options_file__Error_15 = (MR_String) make__options_file__V_27_27;
#line 339 "options_file.m"
                  make__options_file__succeeded = MR_TRUE;
#line 339 "options_file.m"
                }
#line 348 "options_file.m"
              if (make__options_file__succeeded)
#line 340 "options_file.m"
                {
#line 340 "options_file.m"
                  MR_String make__options_file__FileName_16;
#line 340 "options_file.m"
                  MR_Word make__options_file__Context_17;
#line 340 "options_file.m"
                  MR_Word make__options_file__V_30_30;
#line 340 "options_file.m"
                  MR_Word make__options_file__V_32_32;

#line 340 "options_file.m"
                  {
#line 340 "options_file.m"
                    mercury__io__input_stream_name_3_p_0(&make__options_file__FileName_16);
                  }
#line 341 "options_file.m"
                  {
#line 341 "options_file.m"
                    make__options_file__Context_17 = mercury__term__context_init_2_f_0(make__options_file__FileName_16, make__options_file__LineNumber_11);
                  }
#line 342 "options_file.m"
                  {
#line 342 "options_file.m"
                    make__options_file__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "options_file.m"
                    MR_hl_field(MR_mktag(3), make__options_file__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 342 "options_file.m"
                    MR_hl_field(MR_mktag(3), make__options_file__V_32_32, 1) = ((MR_Box) (make__options_file__Error_15));
#line 342 "options_file.m"
                  }
#line 342 "options_file.m"
                  {
#line 342 "options_file.m"
                    make__options_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_30_30, 0) = ((MR_Box) (make__options_file__V_32_32));
#line 342 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "options_file.m"
                  }
#line 342 "options_file.m"
                  {
#line 342 "options_file.m"
                    parse_tree__error_util__write_error_pieces_6_p_0(make__options_file__Globals_7, make__options_file__Context_17, (MR_Integer) 0, make__options_file__V_30_30);
                  }
#line 347 "options_file.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 347 "options_file.m"
                  {
#line 347 "options_file.m"
                    mercury__exception__throw_1_p_0((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, ((MR_Box) ((MR_Integer) 0)));
#line 347 "options_file.m"
                    return;
                  }
#line 340 "options_file.m"
                }
#line 348 "options_file.m"
              else
#line 349 "options_file.m"
                {
#line 349 "options_file.m"
                  {
#line 349 "options_file.m"
                    mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[1], make__options_file__LineResult_12);
#line 349 "options_file.m"
                    return;
                  }
#line 349 "options_file.m"
                }
#line 338 "options_file.m"
            }
#line 337 "options_file.m"
            break;
#line 337 "options_file.m"
        }
#line 324 "options_file.m"
      }
#line 324 "options_file.m"
      break;
#line 324 "options_file.m"
    }
#line 321 "options_file.m"
}

#line 312 "options_file.m"
static MR_String MR_CALL 
make__options_file__maybe_add_path_name_2_f_0(
#line 312 "options_file.m"
  MR_String make__options_file__Dir_4,
#line 312 "options_file.m"
  MR_String make__options_file__File_5)
#line 312 "options_file.m"
{
#line 314 "options_file.m"
  {
#line 314 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 314 "options_file.m"
    MR_String make__options_file__HeadVar__3_3;
#line 315 "options_file.m"
    MR_String make__options_file__V_6_6;

#line 315 "options_file.m"
    {
#line 315 "options_file.m"
      make__options_file__V_6_6 = mercury__dir__this_directory_0_f_0();
    }
#line 315 "options_file.m"
    make__options_file__succeeded = (strcmp(make__options_file__Dir_4, make__options_file__V_6_6) == 0);
#line 314 "options_file.m"
    if (make__options_file__succeeded)
#line 316 "options_file.m"
      make__options_file__HeadVar__3_3 = make__options_file__File_5;
#line 314 "options_file.m"
    else
#line 318 "options_file.m"
      {
#line 318 "options_file.m"
        return make__options_file__HeadVar__3_3 = mercury__dir__make_path_name_2_f_0(make__options_file__Dir_4, make__options_file__File_5);
      }
#line 314 "options_file.m"
    return make__options_file__HeadVar__3_3;
#line 314 "options_file.m"
  }
#line 312 "options_file.m"
}

#line 307 "options_file.m"
static void MR_CALL 
make__options_file__write_done_2_p_0(void)
#line 307 "options_file.m"
{
#line 309 "options_file.m"
  {
#line 309 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 310 "options_file.m"
    {
#line 310 "options_file.m"
      mercury__io__write_string_3_p_0((MR_String) "done.\n");
#line 310 "options_file.m"
      return;
    }
#line 309 "options_file.m"
  }
#line 307 "options_file.m"
}

#line 300 "options_file.m"
static void MR_CALL 
make__options_file__write_reading_options_file_3_p_0(
#line 300 "options_file.m"
  MR_String make__options_file__FileName_4)
#line 300 "options_file.m"
{
#line 302 "options_file.m"
  {
#line 302 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 303 "options_file.m"
    {
#line 303 "options_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Reading options file ");
    }
#line 304 "options_file.m"
    {
#line 304 "options_file.m"
      mercury__io__write_string_3_p_0(make__options_file__FileName_4);
    }
#line 305 "options_file.m"
    {
#line 305 "options_file.m"
      mercury__io__nl_2_p_0();
#line 305 "options_file.m"
      return;
    }
#line 302 "options_file.m"
  }
#line 300 "options_file.m"
}

#line 295 "options_file.m"
static void MR_CALL 
make__options_file__write_reading_options_file_stdin_2_p_0(void)
#line 295 "options_file.m"
{
#line 297 "options_file.m"
  {
#line 297 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 298 "options_file.m"
    {
#line 298 "options_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Reading options file from stdin...");
#line 298 "options_file.m"
      return;
    }
#line 297 "options_file.m"
  }
#line 295 "options_file.m"
}

#line 292 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_5(
#line 292 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 292 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 292 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2)
#line 292 "options_file.m"
{
#line 292 "options_file.m"
  {
#line 292 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 292 "options_file.m"
    {
#line 292 "options_file.m"
      make__options_file__write_done_2_p_0();
#line 292 "options_file.m"
      return;
    }
#line 292 "options_file.m"
  }
#line 292 "options_file.m"
}

#line 269 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_4(
#line 269 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 269 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 269 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2)
#line 269 "options_file.m"
{
#line 269 "options_file.m"
  {
#line 269 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 269 "options_file.m"
    {
#line 269 "options_file.m"
      make__options_file__write_reading_options_file_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))));
#line 269 "options_file.m"
      return;
    }
#line 269 "options_file.m"
  }
#line 269 "options_file.m"
}

#line 235 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_3(
#line 235 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 235 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 235 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2)
#line 235 "options_file.m"
{
#line 235 "options_file.m"
  {
#line 235 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 235 "options_file.m"
    {
#line 235 "options_file.m"
      make__options_file__write_reading_options_file_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))));
#line 235 "options_file.m"
      return;
    }
#line 235 "options_file.m"
  }
#line 235 "options_file.m"
}

#line 233 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_2(
#line 233 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 233 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 233 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2)
#line 233 "options_file.m"
{
#line 233 "options_file.m"
  {
#line 233 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 233 "options_file.m"
    {
#line 233 "options_file.m"
      make__options_file__write_done_2_p_0();
#line 233 "options_file.m"
      return;
    }
#line 233 "options_file.m"
  }
#line 233 "options_file.m"
}

#line 231 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0_1(
#line 231 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 231 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 231 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_2)
#line 231 "options_file.m"
{
#line 231 "options_file.m"
  {
#line 231 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;

#line 231 "options_file.m"
    {
#line 231 "options_file.m"
      make__options_file__write_reading_options_file_stdin_2_p_0();
#line 231 "options_file.m"
      return;
    }
#line 231 "options_file.m"
  }
#line 231 "options_file.m"
}

#line 223 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_params_9_p_0(
#line 223 "options_file.m"
  MR_Word make__options_file__Globals_10,
#line 223 "options_file.m"
  MR_Word make__options_file__ErrorIfNotExist_11,
#line 223 "options_file.m"
  MR_Word make__options_file__Search_12,
#line 223 "options_file.m"
  MR_Word make__options_file__MaybeDirName_13,
#line 223 "options_file.m"
  MR_String make__options_file__OptionsFile0_14,
#line 223 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_33,
#line 223 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_34)
#line 223 "options_file.m"
{
#line 234 "options_file.m"
  {
#line 234 "options_file.m"
    MR_bool make__options_file__succeeded = (strcmp(make__options_file__OptionsFile0_14, (MR_String) "-") == 0);

#line 234 "options_file.m"
    if (make__options_file__succeeded)
#line 231 "options_file.m"
      {
#line 231 "options_file.m"
        MR_String make__options_file__V_39_39;

#line 231 "options_file.m"
        {
#line 231 "options_file.m"
          make__util__debug_msg_4_p_0(make__options_file__Globals_10, (MR_Word) &make__options_file_scalar_common_1[3]);
        }
#line 232 "options_file.m"
        {
#line 232 "options_file.m"
          make__options_file__V_39_39 = mercury__dir__this_directory_0_f_0();
        }
#line 232 "options_file.m"
        {
#line 232 "options_file.m"
          make__options_file__read_options_lines_6_p_0(make__options_file__Globals_10, make__options_file__V_39_39, make__options_file__STATE_VARIABLE_Variables_0_33, make__options_file__STATE_VARIABLE_Variables_34);
        }
#line 233 "options_file.m"
        {
#line 233 "options_file.m"
          make__util__debug_msg_4_p_0(make__options_file__Globals_10, (MR_Word) &make__options_file_scalar_common_1[4]);
#line 233 "options_file.m"
          return;
        }
#line 231 "options_file.m"
      }
#line 234 "options_file.m"
    else
#line 235 "options_file.m"
      {
#line 235 "options_file.m"
        MR_Word make__options_file__SearchDirs_17;
#line 235 "options_file.m"
        MR_String make__options_file__FileToFind_20;
#line 235 "options_file.m"
        MR_Word make__options_file__Dirs_21;
#line 235 "options_file.m"
        MR_Word make__options_file__OldInputStream_23;
#line 235 "options_file.m"
        MR_Word make__options_file__MaybeDir_24;
#line 235 "options_file.m"
        MR_Word make__options_file__V_44_44;
#line 259 "options_file.m"
        MR_String make__options_file__OptionsDir_18;
#line 259 "options_file.m"
        MR_String make__options_file__OptionsFile_19;

#line 235 "options_file.m"
        {
#line 235 "options_file.m"
          make__options_file__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 235 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 0) = ((MR_Box) (&make__options_file_scalar_common_7[0]));
#line 235 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 1) = ((MR_Box) (make__options_file__read_options_file_params_9_p_0_3));
#line 235 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 235 "options_file.m"
          MR_hl_field(MR_mktag(0), make__options_file__V_44_44, 3) = ((MR_Box) (make__options_file__OptionsFile0_14));
#line 235 "options_file.m"
        }
#line 235 "options_file.m"
        {
#line 235 "options_file.m"
          make__util__debug_msg_4_p_0(make__options_file__Globals_10, make__options_file__V_44_44);
        }
#line 240 "options_file.m"
#line 240 "options_file.m"
        switch (make__options_file__Search_12) {
#line 240 "options_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 240 "options_file.m"
          case (MR_Integer) 1:
#line 241 "options_file.m"
            {
#line 241 "options_file.m"
              MR_String make__options_file__V_46_46;

#line 242 "options_file.m"
              {
#line 242 "options_file.m"
                make__options_file__V_46_46 = mercury__dir__this_directory_0_f_0();
              }
#line 242 "options_file.m"
              {
#line 242 "options_file.m"
                make__options_file__SearchDirs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__SearchDirs_17, 0) = ((MR_Box) (make__options_file__V_46_46));
#line 242 "options_file.m"
                MR_hl_field(MR_mktag(1), make__options_file__SearchDirs_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "options_file.m"
              }
#line 241 "options_file.m"
            }
#line 240 "options_file.m"
            break;
#line 240 "options_file.m"
          case (MR_Integer) 0:
#line 237 "options_file.m"
            {
#line 238 "options_file.m"
              {
#line 238 "options_file.m"
                libs__globals__lookup_accumulating_option_3_p_0(make__options_file__Globals_10, (MR_Integer) 647, &make__options_file__SearchDirs_17);
              }
#line 237 "options_file.m"
            }
#line 240 "options_file.m"
            break;
#line 240 "options_file.m"
        }
#line 244 "options_file.m"
        {
#line 244 "options_file.m"
          make__options_file__succeeded = mercury__dir__split_name_3_p_0(make__options_file__OptionsFile0_14, &make__options_file__OptionsDir_18, &make__options_file__OptionsFile_19);
        }
#line 259 "options_file.m"
        if (make__options_file__succeeded)
#line 248 "options_file.m"
          {
#line 245 "options_file.m"
            {
#line 245 "options_file.m"
              make__options_file__succeeded = mercury__dir__path_name_is_absolute_1_p_0(make__options_file__OptionsDir_18);
            }
#line 248 "options_file.m"
            if (make__options_file__succeeded)
#line 246 "options_file.m"
              {
#line 246 "options_file.m"
                make__options_file__FileToFind_20 = make__options_file__OptionsFile_19;
#line 247 "options_file.m"
                {
#line 247 "options_file.m"
                  make__options_file__Dirs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 0) = ((MR_Box) (make__options_file__OptionsDir_18));
#line 247 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "options_file.m"
                }
#line 246 "options_file.m"
              }
#line 248 "options_file.m"
            else
#line 253 "options_file.m"
            if ((make__options_file__MaybeDirName_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "options_file.m"
              {
#line 255 "options_file.m"
                make__options_file__Dirs_21 = make__options_file__SearchDirs_17;
#line 256 "options_file.m"
                make__options_file__FileToFind_20 = make__options_file__OptionsFile0_14;
#line 254 "options_file.m"
              }
#line 253 "options_file.m"
            else
#line 250 "options_file.m"
              {
#line 250 "options_file.m"
                MR_String make__options_file__DirName_22 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__MaybeDirName_13, (MR_Integer) 0)));
#line 250 "options_file.m"
                MR_String make__options_file__V_50_50;

#line 251 "options_file.m"
                make__options_file__FileToFind_20 = make__options_file__OptionsFile_19;
#line 252 "options_file.m"
                {
#line 252 "options_file.m"
                  make__options_file__V_50_50 = mercury__dir__f_slash_2_f_0(make__options_file__DirName_22, make__options_file__OptionsDir_18);
                }
#line 252 "options_file.m"
                {
#line 252 "options_file.m"
                  make__options_file__Dirs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 0) = ((MR_Box) (make__options_file__V_50_50));
#line 252 "options_file.m"
                  MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, 1) = ((MR_Box) (make__options_file__SearchDirs_17));
#line 252 "options_file.m"
                }
#line 250 "options_file.m"
              }
#line 248 "options_file.m"
          }
#line 259 "options_file.m"
        else
#line 260 "options_file.m"
          {
#line 260 "options_file.m"
            make__options_file__Dirs_21 = make__options_file__SearchDirs_17;
#line 261 "options_file.m"
            make__options_file__FileToFind_20 = make__options_file__OptionsFile0_14;
#line 260 "options_file.m"
          }
#line 263 "options_file.m"
        {
#line 263 "options_file.m"
          mercury__io__input_stream_3_p_0(&make__options_file__OldInputStream_23);
        }
#line 264 "options_file.m"
        {
#line 264 "options_file.m"
          libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__options_file__Dirs_21, make__options_file__FileToFind_20, &make__options_file__MaybeDir_24);
        }
#line 274 "options_file.m"
        if (((MR_tag((MR_Word) make__options_file__MaybeDir_24)) == (MR_mktag((MR_Integer) 1))))
#line 275 "options_file.m"
          {
#line 288 "options_file.m"
#line 288 "options_file.m"
            switch (make__options_file__ErrorIfNotExist_11) {
#line 288 "options_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 288 "options_file.m"
              case (MR_Integer) 0:
#line 277 "options_file.m"
                {
#line 277 "options_file.m"
                  MR_String make__options_file__ErrorFile_29;
#line 277 "options_file.m"
                  MR_Word make__options_file__ErrorSpec_30;
#line 277 "options_file.m"
                  MR_Word make__options_file__V_57_57;
#line 277 "options_file.m"
                  MR_Word make__options_file__V_58_58;
#line 277 "options_file.m"
                  MR_Word make__options_file__V_62_62;
#line 277 "options_file.m"
                  MR_Word make__options_file__V_63_63;
#line 277 "options_file.m"
                  MR_Word make__options_file__V_64_64;
#line 277 "options_file.m"
                  MR_Word make__options_file__V_67_67;
#line 277 "options_file.m"
                  MR_Word make__options_file__V_68_68;
#line 280 "options_file.m"
                  MR_String make__options_file__SingleDir_28;
#line 278 "options_file.m"
                  MR_Word make__options_file__V_54_54;
#line 287 "options_file.m"
                  MR_Integer make__options_file__V_31_31;
#line 287 "options_file.m"
                  MR_Integer make__options_file__V_32_32;

#line 278 "options_file.m"
                  make__options_file__succeeded = ((MR_tag((MR_Word) make__options_file__Dirs_21)) == (MR_mktag((MR_Integer) 1)));
#line 278 "options_file.m"
                  if (make__options_file__succeeded)
#line 278 "options_file.m"
                    {
#line 278 "options_file.m"
                      make__options_file__SingleDir_28 = ((MR_String) (MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, (MR_Integer) 0)));
#line 278 "options_file.m"
                      make__options_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__Dirs_21, (MR_Integer) 1)));
#line 278 "options_file.m"
                      make__options_file__succeeded = (make__options_file__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "options_file.m"
                    }
#line 280 "options_file.m"
                  if (make__options_file__succeeded)
#line 279 "options_file.m"
                    {
#line 279 "options_file.m"
                      make__options_file__ErrorFile_29 = make__options_file__maybe_add_path_name_2_f_0(make__options_file__SingleDir_28, make__options_file__FileToFind_20);
                    }
#line 280 "options_file.m"
                  else
#line 281 "options_file.m"
                    make__options_file__ErrorFile_29 = make__options_file__FileToFind_20;
#line 286 "options_file.m"
                  {
#line 286 "options_file.m"
                    make__options_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(3), make__options_file__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(3), make__options_file__V_68_68, 1) = ((MR_Box) (make__options_file__ErrorFile_29));
#line 286 "options_file.m"
                  }
#line 286 "options_file.m"
                  {
#line 286 "options_file.m"
                    make__options_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_67_67, 0) = ((MR_Box) (make__options_file__V_68_68));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__options_file_scalar_common_2[34])));
#line 286 "options_file.m"
                  }
#line 285 "options_file.m"
                  {
#line 285 "options_file.m"
                    make__options_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &make__options_file_scalar_common_2[32])));
#line 285 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_64_64, 1) = ((MR_Box) (make__options_file__V_67_67));
#line 285 "options_file.m"
                  }
#line 285 "options_file.m"
                  {
#line 285 "options_file.m"
                    make__options_file__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__V_63_63, 0) = ((MR_Box) (make__options_file__V_64_64));
#line 285 "options_file.m"
                  }
#line 286 "options_file.m"
                  {
#line 286 "options_file.m"
                    make__options_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_62_62, 0) = ((MR_Box) (make__options_file__V_63_63));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "options_file.m"
                  }
#line 284 "options_file.m"
                  {
#line 284 "options_file.m"
                    make__options_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 284 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 1) = ((MR_Box) ((MR_Integer) 1));
#line 284 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 284 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_58_58, 3) = ((MR_Box) (make__options_file__V_62_62));
#line 284 "options_file.m"
                  }
#line 286 "options_file.m"
                  {
#line 286 "options_file.m"
                    make__options_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_57_57, 0) = ((MR_Box) (make__options_file__V_58_58));
#line 286 "options_file.m"
                    MR_hl_field(MR_mktag(1), make__options_file__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "options_file.m"
                  }
#line 283 "options_file.m"
                  {
#line 283 "options_file.m"
                    make__options_file__ErrorSpec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 283 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "options_file.m"
                    MR_hl_field(MR_mktag(0), make__options_file__ErrorSpec_30, 2) = ((MR_Box) (make__options_file__V_57_57));
#line 283 "options_file.m"
                  }
#line 287 "options_file.m"
                  {
#line 287 "options_file.m"
                    parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_30, make__options_file__Globals_10, (MR_Integer) 0, &make__options_file__V_31_31, (MR_Integer) 0, &make__options_file__V_32_32);
                  }
#line 277 "options_file.m"
                }
#line 288 "options_file.m"
                break;
#line 288 "options_file.m"
              case (MR_Integer) 1:
#line 289 "options_file.m"
                {
#line 289 "options_file.m"
                }
#line 288 "options_file.m"
                break;
#line 288 "options_file.m"
            }
#line 275 "options_file.m"
            *make__options_file__STATE_VARIABLE_Variables_34 = make__options_file__STATE_VARIABLE_Variables_0_33;
#line 275 "options_file.m"
          }
#line 274 "options_file.m"
        else
#line 267 "options_file.m"
          {
#line 267 "options_file.m"
            MR_String make__options_file__FoundDir_25 = ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__MaybeDir_24, (MR_Integer) 0)));
#line 267 "options_file.m"
            MR_Word make__options_file__OptionsStream_26;
#line 267 "options_file.m"
            MR_Word make__options_file__V_78_78;
#line 267 "options_file.m"
            MR_String make__options_file__V_80_80;

#line 269 "options_file.m"
            {
#line 269 "options_file.m"
              make__options_file__V_80_80 = mercury__dir__f_slash_2_f_0(make__options_file__FoundDir_25, make__options_file__FileToFind_20);
            }
#line 269 "options_file.m"
            {
#line 269 "options_file.m"
              make__options_file__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 269 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 0) = ((MR_Box) (&make__options_file_scalar_common_7[0]));
#line 269 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 1) = ((MR_Box) (make__options_file__read_options_file_params_9_p_0_4));
#line 269 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 269 "options_file.m"
              MR_hl_field(MR_mktag(0), make__options_file__V_78_78, 3) = ((MR_Box) (make__options_file__V_80_80));
#line 269 "options_file.m"
            }
#line 268 "options_file.m"
            {
#line 268 "options_file.m"
              make__util__debug_msg_4_p_0(make__options_file__Globals_10, make__options_file__V_78_78);
            }
#line 271 "options_file.m"
            {
#line 271 "options_file.m"
              make__options_file__read_options_lines_6_p_0(make__options_file__Globals_10, make__options_file__FoundDir_25, make__options_file__STATE_VARIABLE_Variables_0_33, make__options_file__STATE_VARIABLE_Variables_34);
            }
#line 272 "options_file.m"
            {
#line 272 "options_file.m"
              mercury__io__set_input_stream_4_p_0(make__options_file__OldInputStream_23, &make__options_file__OptionsStream_26);
            }
#line 273 "options_file.m"
            {
#line 273 "options_file.m"
              mercury__io__close_input_3_p_0(make__options_file__OptionsStream_26);
            }
#line 267 "options_file.m"
          }
#line 292 "options_file.m"
        {
#line 292 "options_file.m"
          make__util__debug_msg_4_p_0(make__options_file__Globals_10, (MR_Word) &make__options_file_scalar_common_1[5]);
#line 292 "options_file.m"
          return;
        }
#line 235 "options_file.m"
      }
#line 234 "options_file.m"
  }
#line 223 "options_file.m"
}

#line 201 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_set_params_6_p_0(
#line 201 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 201 "options_file.m"
  MR_String make__options_file__OptionsFile_8,
#line 201 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Vars_0_13,
#line 201 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Vars_14)
#line 201 "options_file.m"
{
#line 204 "options_file.m"
  {
#line 204 "options_file.m"
    MR_bool make__options_file__succeeded = (strcmp(make__options_file__OptionsFile_8, (MR_String) "Mercury.options") == 0);
#line 204 "options_file.m"
    MR_Word make__options_file__ErrorIfNotExist_11;
#line 204 "options_file.m"
    MR_Word make__options_file__Search_12;

#line 208 "options_file.m"
    if (make__options_file__succeeded)
#line 206 "options_file.m"
      {
#line 206 "options_file.m"
        make__options_file__ErrorIfNotExist_11 = (MR_Integer) 1;
#line 207 "options_file.m"
        make__options_file__Search_12 = (MR_Integer) 1;
#line 206 "options_file.m"
      }
#line 208 "options_file.m"
    else
#line 209 "options_file.m"
      {
#line 209 "options_file.m"
        make__options_file__ErrorIfNotExist_11 = (MR_Integer) 0;
#line 210 "options_file.m"
        make__options_file__Search_12 = (MR_Integer) 0;
#line 209 "options_file.m"
      }
#line 212 "options_file.m"
    {
#line 212 "options_file.m"
      make__options_file__read_options_file_params_9_p_0(make__options_file__Globals_7, make__options_file__ErrorIfNotExist_11, make__options_file__Search_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__options_file__OptionsFile_8, make__options_file__STATE_VARIABLE_Vars_0_13, make__options_file__STATE_VARIABLE_Vars_14);
#line 212 "options_file.m"
      return;
    }
#line 204 "options_file.m"
  }
#line 201 "options_file.m"
}

#line 198 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0_1(
#line 198 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 198 "options_file.m"
  MR_Box make__options_file__wrapper_arg_1,
#line 198 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 198 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3,
#line 198 "options_file.m"
  MR_Box make__options_file__wrapper_arg_4,
#line 198 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_5)
#line 198 "options_file.m"
{
#line 198 "options_file.m"
  {
#line 198 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 198 "options_file.m"
    MR_Word make__options_file__conv0_STATE_VARIABLE_Vars_14;

#line 198 "options_file.m"
    {
#line 198 "options_file.m"
      make__options_file__read_options_file_set_params_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) make__options_file__wrapper_arg_1), ((MR_Word) make__options_file__wrapper_arg_2), &make__options_file__conv0_STATE_VARIABLE_Vars_14);
    }
#line 198 "options_file.m"
    *make__options_file__wrapper_arg_3 = ((MR_Box) (make__options_file__conv0_STATE_VARIABLE_Vars_14));
#line 198 "options_file.m"
  }
#line 198 "options_file.m"
}

#line 193 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_lookup_params_5_p_0(
#line 193 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 193 "options_file.m"
  MR_Word make__options_file__STATE_VARIABLE_Variables_0_10,
#line 193 "options_file.m"
  MR_Word * make__options_file__STATE_VARIABLE_Variables_11)
#line 193 "options_file.m"
{
#line 196 "options_file.m"
  {
#line 196 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 196 "options_file.m"
    MR_Word make__options_file__OptionsFiles_9;
#line 196 "options_file.m"
    MR_Word make__options_file__V_15_15;
#line 198 "options_file.m"
    MR_Box make__options_file__conv2_STATE_VARIABLE_Variables_11;
#line 198 "options_file.m"
    MR_Box make__options_file__conv1_STATE_VARIABLE_IO_13;

#line 197 "options_file.m"
    {
#line 197 "options_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__options_file__Globals_6, (MR_Integer) 645, &make__options_file__OptionsFiles_9);
    }
#line 198 "options_file.m"
    {
#line 198 "options_file.m"
      make__options_file__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 198 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 0) = ((MR_Box) (&make__options_file_scalar_common_3[0]));
#line 198 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 1) = ((MR_Box) (make__options_file__read_options_file_lookup_params_5_p_0_1));
#line 198 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 198 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 3) = ((MR_Box) (make__options_file__Globals_6));
#line 198 "options_file.m"
    }
#line 198 "options_file.m"
    {
#line 198 "options_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__options_file__V_15_15, make__options_file__OptionsFiles_9, ((MR_Box) (make__options_file__STATE_VARIABLE_Variables_0_10)), &make__options_file__conv2_STATE_VARIABLE_Variables_11, ((MR_Box) ((MR_Integer) 0)), &make__options_file__conv1_STATE_VARIABLE_IO_13);
    }
#line 198 "options_file.m"
    *make__options_file__STATE_VARIABLE_Variables_11 = ((MR_Word) make__options_file__conv2_STATE_VARIABLE_Variables_11);
#line 196 "options_file.m"
  }
#line 193 "options_file.m"
}

#line 78 "options_file.m"
void MR_CALL 
make__options_file__lookup_mercury_stdlib_dir_5_p_0(
#line 78 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 78 "options_file.m"
  MR_Word make__options_file__Vars_7,
#line 78 "options_file.m"
  MR_Word * make__options_file__MaybeMerStdlibDir_8)
#line 78 "options_file.m"
{
#line 845 "options_file.m"
  {
#line 845 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 845 "options_file.m"
    MR_Word make__options_file__MerStdlibDirResult_10;

#line 1189 "options_file.m"
    {
#line 1189 "options_file.m"
      make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, make__options_file__Vars_7, (MR_String) "MERCURY_STDLIB_DIR", &make__options_file__MerStdlibDirResult_10);
    }
#line 13429 "make.options_file.c"
#line 13430 "make.options_file.c"
    switch (MR_tag((MR_Word) make__options_file__MerStdlibDirResult_10)) {
#line 13432 "make.options_file.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 13434 "make.options_file.c"
      case (MR_Integer) 0:
#line 13436 "make.options_file.c"
        {
#line 853 "options_file.m"
          *make__options_file__MaybeMerStdlibDir_8 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_5[0]);
#line 13440 "make.options_file.c"
        }
#line 13442 "make.options_file.c"
        break;
#line 13444 "make.options_file.c"
      case (MR_Integer) 1:
#line 13446 "make.options_file.c"
        {
#line 13448 "make.options_file.c"
          MR_Word make__options_file__ErrorSpec_25 = (MR_Word) MR_body(((MR_Word) make__options_file__MerStdlibDirResult_10), (MR_Integer) 1);
#line 1178 "options_file.m"
          MR_Integer make__options_file__V_26_26;
#line 1178 "options_file.m"
          MR_Integer make__options_file__V_27_27;

#line 1178 "options_file.m"
          {
#line 1178 "options_file.m"
            parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_25, make__options_file__Globals_6, (MR_Integer) 0, &make__options_file__V_26_26, (MR_Integer) 0, &make__options_file__V_27_27);
          }
#line 856 "options_file.m"
          *make__options_file__MaybeMerStdlibDir_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13462 "make.options_file.c"
        }
#line 13464 "make.options_file.c"
        break;
#line 13466 "make.options_file.c"
      case (MR_Integer) 2:
#line 13468 "make.options_file.c"
        {
#line 13470 "make.options_file.c"
          MR_Word make__options_file__MerStdlibDir_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__MerStdlibDirResult_10, (MR_Integer) 0)));

#line 850 "options_file.m"
          {
#line 850 "options_file.m"
            MR_Word base;
#line 850 "options_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 850 "options_file.m"
            *make__options_file__MaybeMerStdlibDir_8 = base;
#line 850 "options_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__MerStdlibDir_11));
#line 850 "options_file.m"
          }
#line 13485 "make.options_file.c"
        }
#line 13487 "make.options_file.c"
        break;
#line 13489 "make.options_file.c"
    }
#line 845 "options_file.m"
  }
#line 78 "options_file.m"
}

#line 73 "options_file.m"
void MR_CALL 
make__options_file__lookup_main_target_5_p_0(
#line 73 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 73 "options_file.m"
  MR_Word make__options_file__Vars_7,
#line 73 "options_file.m"
  MR_Word * make__options_file__MaybeMainTarget_8)
#line 73 "options_file.m"
{
#line 829 "options_file.m"
  {
#line 829 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 829 "options_file.m"
    MR_Word make__options_file__MainTargetResult_10;

#line 1189 "options_file.m"
    {
#line 1189 "options_file.m"
      make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 1, make__options_file__Vars_7, (MR_String) "MAIN_TARGET", &make__options_file__MainTargetResult_10);
    }
#line 13519 "make.options_file.c"
#line 13520 "make.options_file.c"
    switch (MR_tag((MR_Word) make__options_file__MainTargetResult_10)) {
#line 13522 "make.options_file.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 13524 "make.options_file.c"
      case (MR_Integer) 0:
#line 13526 "make.options_file.c"
        {
#line 837 "options_file.m"
          *make__options_file__MaybeMainTarget_8 = (MR_Word) MR_mkword(MR_mktag(1), &make__options_file_scalar_common_5[0]);
#line 13530 "make.options_file.c"
        }
#line 13532 "make.options_file.c"
        break;
#line 13534 "make.options_file.c"
      case (MR_Integer) 1:
#line 13536 "make.options_file.c"
        {
#line 13538 "make.options_file.c"
          MR_Word make__options_file__ErrorSpec_25 = (MR_Word) MR_body(((MR_Word) make__options_file__MainTargetResult_10), (MR_Integer) 1);
#line 1178 "options_file.m"
          MR_Integer make__options_file__V_26_26;
#line 1178 "options_file.m"
          MR_Integer make__options_file__V_27_27;

#line 1178 "options_file.m"
          {
#line 1178 "options_file.m"
            parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_25, make__options_file__Globals_6, (MR_Integer) 0, &make__options_file__V_26_26, (MR_Integer) 0, &make__options_file__V_27_27);
          }
#line 840 "options_file.m"
          *make__options_file__MaybeMainTarget_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13552 "make.options_file.c"
        }
#line 13554 "make.options_file.c"
        break;
#line 13556 "make.options_file.c"
      case (MR_Integer) 2:
#line 13558 "make.options_file.c"
        {
#line 13560 "make.options_file.c"
          MR_Word make__options_file__MainTarget_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__MainTargetResult_10, (MR_Integer) 0)));

#line 834 "options_file.m"
          {
#line 834 "options_file.m"
            MR_Word base;
#line 834 "options_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 834 "options_file.m"
            *make__options_file__MaybeMainTarget_8 = base;
#line 834 "options_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__MainTarget_11));
#line 834 "options_file.m"
          }
#line 13575 "make.options_file.c"
        }
#line 13577 "make.options_file.c"
        break;
#line 13579 "make.options_file.c"
    }
#line 829 "options_file.m"
  }
#line 73 "options_file.m"
}

#line 68 "options_file.m"
void MR_CALL 
make__options_file__lookup_mmc_module_options_6_p_0(
#line 68 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 68 "options_file.m"
  MR_Word make__options_file__Vars_8,
#line 68 "options_file.m"
  MR_Word make__options_file__ModuleName_9,
#line 68 "options_file.m"
  MR_Word * make__options_file__Result_10)
#line 68 "options_file.m"
{
#line 868 "options_file.m"
  {
#line 868 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 868 "options_file.m"
    MR_Word make__options_file__V_14_14;

#line 870 "options_file.m"
    {
#line 870 "options_file.m"
      make__options_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 870 "options_file.m"
      MR_hl_field(MR_mktag(1), make__options_file__V_14_14, 0) = ((MR_Box) (make__options_file__ModuleName_9));
#line 870 "options_file.m"
    }
#line 869 "options_file.m"
    {
#line 869 "options_file.m"
      make__options_file__lookup_mmc_maybe_module_options_6_p_0(make__options_file__Globals_7, make__options_file__Vars_8, make__options_file__V_14_14, make__options_file__Result_10);
#line 869 "options_file.m"
      return;
    }
#line 868 "options_file.m"
  }
#line 68 "options_file.m"
}

#line 62 "options_file.m"
void MR_CALL 
make__options_file__lookup_mmc_options_5_p_0(
#line 62 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 62 "options_file.m"
  MR_Word make__options_file__Vars_7,
#line 62 "options_file.m"
  MR_Word * make__options_file__Result_8)
#line 62 "options_file.m"
{
#line 864 "options_file.m"
  {
#line 864 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 865 "options_file.m"
    {
#line 865 "options_file.m"
      make__options_file__lookup_mmc_maybe_module_options_6_p_0(make__options_file__Globals_6, make__options_file__Vars_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), make__options_file__Result_8);
#line 865 "options_file.m"
      return;
    }
#line 864 "options_file.m"
  }
#line 62 "options_file.m"
}

#line 57 "options_file.m"
void MR_CALL 
make__options_file__lookup_default_options_5_p_0(
#line 57 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 57 "options_file.m"
  MR_Word make__options_file__Vars_7,
#line 57 "options_file.m"
  MR_Word * make__options_file__Result_8)
#line 57 "options_file.m"
{
#line 861 "options_file.m"
  {
#line 861 "options_file.m"
    MR_bool make__options_file__succeeded;

#line 862 "options_file.m"
    {
#line 862 "options_file.m"
      make__options_file__lookup_mmc_maybe_module_options_6_p_0(make__options_file__Globals_6, make__options_file__Vars_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), make__options_file__Result_8);
#line 862 "options_file.m"
      return;
    }
#line 861 "options_file.m"
  }
#line 57 "options_file.m"
}

#line 178 "options_file.m"
static void MR_CALL 
make__options_file__read_options_files_5_p_0_1(
#line 178 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 178 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1,
#line 178 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 178 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3)
#line 178 "options_file.m"
{
#line 178 "options_file.m"
  {
#line 178 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 178 "options_file.m"
    MR_Word make__options_file__conv0_STATE_VARIABLE_Variables_11;

#line 178 "options_file.m"
    {
#line 178 "options_file.m"
      make__options_file__read_options_file_lookup_params_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), &make__options_file__conv0_STATE_VARIABLE_Variables_11);
    }
#line 178 "options_file.m"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_STATE_VARIABLE_Variables_11));
#line 178 "options_file.m"
  }
#line 178 "options_file.m"
}

#line 52 "options_file.m"
void MR_CALL 
make__options_file__read_options_files_5_p_0(
#line 52 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 52 "options_file.m"
  MR_Word make__options_file__Variables0_7,
#line 52 "options_file.m"
  MR_Word * make__options_file__MaybeVariables_8)
#line 52 "options_file.m"
{
#line 176 "options_file.m"
  {
#line 176 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 176 "options_file.m"
    MR_Word make__options_file__OptionsFileResult_10;
#line 178 "options_file.m"
    MR_Word make__options_file__V_15_15;

#line 178 "options_file.m"
    {
#line 178 "options_file.m"
      make__options_file__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 178 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 0) = ((MR_Box) (&make__options_file_scalar_common_4[0]));
#line 178 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 1) = ((MR_Box) (make__options_file__read_options_files_5_p_0_1));
#line 178 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 178 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 3) = ((MR_Box) (make__options_file__Globals_6));
#line 178 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_15_15, 4) = ((MR_Box) (make__options_file__Variables0_7));
#line 178 "options_file.m"
    }
#line 178 "options_file.m"
    {
#line 178 "options_file.m"
      mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__V_15_15, &make__options_file__OptionsFileResult_10);
    }
#line 184 "options_file.m"
    if (((MR_tag((MR_Word) make__options_file__OptionsFileResult_10)) == (MR_mktag((MR_Integer) 2))))
#line 185 "options_file.m"
      {
#line 185 "options_file.m"
        MR_Word make__options_file__Exception_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__OptionsFileResult_10, (MR_Integer) 0)));
#line 186 "options_file.m"
        MR_Box make__options_file__conv1_V_17_17;

#line 186 "options_file.m"
        {
#line 186 "options_file.m"
          make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, &make__options_file__conv1_V_17_17, make__options_file__Exception_12);
        }
#line 186 "options_file.m"
        if (make__options_file__succeeded)
#line 186 "options_file.m"
          make__options_file__succeeded = MR_TRUE;
#line 188 "options_file.m"
        if (make__options_file__succeeded)
#line 187 "options_file.m"
          *make__options_file__MaybeVariables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "options_file.m"
        else
#line 189 "options_file.m"
          {
#line 189 "options_file.m"
            {
#line 189 "options_file.m"
              mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__OptionsFileResult_10);
#line 189 "options_file.m"
              return;
            }
#line 189 "options_file.m"
          }
#line 185 "options_file.m"
      }
#line 184 "options_file.m"
    else
#line 182 "options_file.m"
      {
#line 182 "options_file.m"
        MR_Word make__options_file__Variables_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__OptionsFileResult_10, (MR_Integer) 0)));

#line 183 "options_file.m"
        {
#line 183 "options_file.m"
          MR_Word base;
#line 183 "options_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "options_file.m"
          *make__options_file__MaybeVariables_8 = base;
#line 183 "options_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Variables_11));
#line 183 "options_file.m"
        }
#line 182 "options_file.m"
      }
#line 176 "options_file.m"
  }
#line 52 "options_file.m"
}

#line 47 "options_file.m"
void MR_CALL 
make__options_file__read_args_file_5_p_0(
#line 47 "options_file.m"
  MR_Word make__options_file__Globals_6,
#line 47 "options_file.m"
  MR_String make__options_file__OptionsFile_7,
#line 47 "options_file.m"
  MR_Word * make__options_file__MaybeMCFlags_8)
#line 47 "options_file.m"
{
#line 128 "options_file.m"
  {
#line 128 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 128 "options_file.m"
    MR_Word make__options_file__MaybeVariables_10;
#line 128 "options_file.m"
    MR_Word make__options_file__V_19_19;

#line 126 "options_file.m"
    {
#line 126 "options_file.m"
      make__options_file__V_19_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
    }
#line 129 "options_file.m"
    {
#line 129 "options_file.m"
      make__options_file__read_options_file_6_p_0(make__options_file__Globals_6, make__options_file__OptionsFile_7, make__options_file__V_19_19, &make__options_file__MaybeVariables_10);
    }
#line 150 "options_file.m"
    if ((make__options_file__MaybeVariables_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "options_file.m"
      *make__options_file__MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 150 "options_file.m"
    else
#line 132 "options_file.m"
      {
#line 132 "options_file.m"
        MR_Word make__options_file__Variables_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__MaybeVariables_10, (MR_Integer) 0)));
#line 132 "options_file.m"
        MR_Word make__options_file__FlagsResult_12;

#line 135 "options_file.m"
        {
#line 135 "options_file.m"
          make__options_file__lookup_variable_words_maybe_env_6_p_0((MR_Integer) 0, make__options_file__Variables_11, (MR_String) "MCFLAGS", &make__options_file__FlagsResult_12);
        }
#line 140 "options_file.m"
#line 140 "options_file.m"
        switch (MR_tag((MR_Word) make__options_file__FlagsResult_12)) {
#line 140 "options_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 140 "options_file.m"
          case (MR_Integer) 0:
#line 141 "options_file.m"
            {
#line 142 "options_file.m"
              {
#line 142 "options_file.m"
                mercury__io__write_string_3_p_0((MR_String) "mercury_compile: internal error: arguments file does not set MCFLAGS.\n");
              }
#line 144 "options_file.m"
              *make__options_file__MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 141 "options_file.m"
            }
#line 140 "options_file.m"
            break;
#line 140 "options_file.m"
          case (MR_Integer) 1:
#line 146 "options_file.m"
            {
#line 146 "options_file.m"
              MR_Word make__options_file__ErrorSpec_14 = (MR_Word) MR_body(((MR_Word) make__options_file__FlagsResult_12), (MR_Integer) 1);
#line 148 "options_file.m"
              MR_Integer make__options_file__V_15_15;
#line 148 "options_file.m"
              MR_Integer make__options_file__V_16_16;

#line 147 "options_file.m"
              *make__options_file__MaybeMCFlags_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "options_file.m"
              {
#line 148 "options_file.m"
                parse_tree__error_util__write_error_spec_8_p_0(make__options_file__ErrorSpec_14, make__options_file__Globals_6, (MR_Integer) 0, &make__options_file__V_15_15, (MR_Integer) 0, &make__options_file__V_16_16);
              }
#line 146 "options_file.m"
            }
#line 140 "options_file.m"
            break;
#line 140 "options_file.m"
          case (MR_Integer) 2:
#line 138 "options_file.m"
            {
#line 138 "options_file.m"
              MR_Word make__options_file__MCFlags_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__FlagsResult_12, (MR_Integer) 0)));

#line 139 "options_file.m"
              {
#line 139 "options_file.m"
                MR_Word base;
#line 139 "options_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "options_file.m"
                *make__options_file__MaybeMCFlags_8 = base;
#line 139 "options_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__MCFlags_13));
#line 139 "options_file.m"
              }
#line 138 "options_file.m"
            }
#line 140 "options_file.m"
            break;
#line 140 "options_file.m"
        }
#line 132 "options_file.m"
      }
#line 128 "options_file.m"
  }
#line 47 "options_file.m"
}

#line 157 "options_file.m"
static void MR_CALL 
make__options_file__read_options_file_6_p_0_1(
#line 157 "options_file.m"
  MR_Box make__options_file__closure_arg,
#line 157 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_1,
#line 157 "options_file.m"
  MR_Box make__options_file__wrapper_arg_2,
#line 157 "options_file.m"
  MR_Box * make__options_file__wrapper_arg_3)
#line 157 "options_file.m"
{
#line 157 "options_file.m"
  {
#line 157 "options_file.m"
    MR_Box make__options_file__closure = make__options_file__closure_arg;
#line 157 "options_file.m"
    MR_Word make__options_file__conv0_HeadVar__4_22;

#line 157 "options_file.m"
    {
#line 157 "options_file.m"
      make__options_file__IntroducedFrom__pred__read_options_file__157__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__options_file__closure, (MR_Integer) 5))), &make__options_file__conv0_HeadVar__4_22);
    }
#line 157 "options_file.m"
    *make__options_file__wrapper_arg_1 = ((MR_Box) (make__options_file__conv0_HeadVar__4_22));
#line 157 "options_file.m"
  }
#line 157 "options_file.m"
}

#line 36 "options_file.m"
void MR_CALL 
make__options_file__read_options_file_6_p_0(
#line 36 "options_file.m"
  MR_Word make__options_file__Globals_7,
#line 36 "options_file.m"
  MR_String make__options_file__OptionsFile_8,
#line 36 "options_file.m"
  MR_Word make__options_file__Variables0_9,
#line 36 "options_file.m"
  MR_Word * make__options_file__MaybeVariables_10)
#line 36 "options_file.m"
{
#line 155 "options_file.m"
  {
#line 155 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 155 "options_file.m"
    MR_Word make__options_file__OptionsFileResult_12;
#line 157 "options_file.m"
    MR_Word make__options_file__V_18_18;

#line 157 "options_file.m"
    {
#line 157 "options_file.m"
      make__options_file__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 157 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 0) = ((MR_Box) (&make__options_file_scalar_common_3[0]));
#line 157 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 1) = ((MR_Box) (make__options_file__read_options_file_6_p_0_1));
#line 157 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 157 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 3) = ((MR_Box) (make__options_file__Globals_7));
#line 157 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 4) = ((MR_Box) (make__options_file__OptionsFile_8));
#line 157 "options_file.m"
      MR_hl_field(MR_mktag(0), make__options_file__V_18_18, 5) = ((MR_Box) (make__options_file__Variables0_9));
#line 157 "options_file.m"
    }
#line 157 "options_file.m"
    {
#line 157 "options_file.m"
      mercury__exception__try_io_4_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__V_18_18, &make__options_file__OptionsFileResult_12);
    }
#line 167 "options_file.m"
    if (((MR_tag((MR_Word) make__options_file__OptionsFileResult_12)) == (MR_mktag((MR_Integer) 2))))
#line 168 "options_file.m"
      {
#line 168 "options_file.m"
        MR_Word make__options_file__Exception_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__options_file__OptionsFileResult_12, (MR_Integer) 0)));
#line 169 "options_file.m"
        MR_Box make__options_file__conv1_V_29_29;

#line 169 "options_file.m"
        {
#line 169 "options_file.m"
          make__options_file__succeeded = mercury__univ__univ_1_f_2((MR_Word) &make__options_file__make__options_file__type_ctor_info_found_options_file_error_0, &make__options_file__conv1_V_29_29, make__options_file__Exception_15);
        }
#line 169 "options_file.m"
        if (make__options_file__succeeded)
#line 169 "options_file.m"
          make__options_file__succeeded = MR_TRUE;
#line 171 "options_file.m"
        if (make__options_file__succeeded)
#line 170 "options_file.m"
          *make__options_file__MaybeVariables_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 171 "options_file.m"
        else
#line 172 "options_file.m"
          {
#line 172 "options_file.m"
            {
#line 172 "options_file.m"
              mercury__exception__rethrow_1_p_0((MR_Word) &make__options_file_scalar_common_1[0], make__options_file__OptionsFileResult_12);
#line 172 "options_file.m"
              return;
            }
#line 172 "options_file.m"
          }
#line 168 "options_file.m"
      }
#line 167 "options_file.m"
    else
#line 165 "options_file.m"
      {
#line 165 "options_file.m"
        MR_Word make__options_file__Variables_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__options_file__OptionsFileResult_12, (MR_Integer) 0)));

#line 166 "options_file.m"
        {
#line 166 "options_file.m"
          MR_Word base;
#line 166 "options_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 166 "options_file.m"
          *make__options_file__MaybeVariables_10 = base;
#line 166 "options_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__options_file__Variables_14));
#line 166 "options_file.m"
        }
#line 165 "options_file.m"
      }
#line 155 "options_file.m"
  }
#line 36 "options_file.m"
}

#line 30 "options_file.m"
MR_Word MR_CALL 
make__options_file__options_variables_init_0_f_0(void)
#line 30 "options_file.m"
{
#line 126 "options_file.m"
  {
#line 126 "options_file.m"
    MR_bool make__options_file__succeeded;
#line 126 "options_file.m"
    MR_Word make__options_file__HeadVar__1_1;

#line 126 "options_file.m"
    {
#line 126 "options_file.m"
      make__options_file__HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
    }
#line 126 "options_file.m"
    return make__options_file__HeadVar__1_1;
#line 126 "options_file.m"
  }
#line 30 "options_file.m"
}

void mercury__make__options_file__init(void)
{
}

void mercury__make__options_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_error_if_not_exist_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_found_options_file_error_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_mmc_option_type_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_file_error_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_file_line_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_class_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_type_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variable_value_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_options_variables_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_search_0);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_variable_result_1);
	MR_register_type_ctor_info(&make__options_file__make__options_file__type_ctor_info_variable_source_0);
}

void mercury__make__options_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.options_file. */
